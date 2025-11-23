/**
 * @file Fluid grammar for tree-sitter
 * @author Jacob Pake <github@pake.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * @param {RuleOrLiteral} rule
 * @param {RuleOrLiteral} separator
 */
const sep1 = (rule, separator) => seq(rule, repeat(seq(separator, rule)));

/**
 * @param {RuleOrLiteral} rule
 * @param {RuleOrLiteral} separator
 */
const sep = (rule, separator) => optional(sep1(rule, separator));

/**
 * @param {RuleOrLiteral} rule
 */
const commas = (rule) => optional(sep1(rule, ","));

/**
 * @param {RuleOrLiteral[]} rules
 */
const parens = (...rules) => seq("(", ...rules, ")");

/**
 * @param {RuleOrLiteral[]} rules
 */
const brackets = (...rules) => seq("[", ...rules, "]");

/**
 * @param {RuleOrLiteral[]} rules
 */
const braces = (...rules) => seq("{", ...rules, "}");

/**
 * @type {Array<[prec: number, assoc: ('left'|'right'), ops: string[]]>}
 */
const operator_table = [
  [9, "left", ["!"]],
  [8, "right", ["**"]],
  [7, "left", ["*", "/", "//", "%"]],
  [6, "left", ["+", "-"]],
  [5, "left", [":|"]],
  [4, "left", ["++"]],
  // [3, "left", ["|x|"]],
  [2, "left", ["==", "/=", "<", ">", "<=", ">="]],
  [1, "left", ["and"]],
  [0, "left", ["or"]],
];

module.exports = grammar({
  name: "fluid",

  conflicts: ($) => [[$.match_as], [$.module, $.let], [$.module, $.let_rec]],

  extras: ($) => [$.comment, /\s|\\n/],

  rules: {
    source_file: ($) =>
      seq(alias(repeat($.import), $.top_level), choice($.program, $.module)),

    import: ($) => seq("import", sep1($.var, ".")),

    comment: ($) => token(seq("#", /.*/)),

    program: ($) => $._block,
    module: ($) =>
      repeat1(seq(choice($.var_def, $.rec_def), $._NL_TODO_INDENTATION)),

    var_def: ($) => seq("def", $._pattern, ":", $._block),
    rec_def: ($) =>
      seq("def", $.var, parens(sep($._pattern, ",")), ":", $._block),

    _block: ($) => choice($.match_as, $.if_else, $.let, $.let_rec, $._expr),

    match_as: ($) =>
      seq(
        "match",
        $._expr,
        ":",
        $._NL_TODO_INDENTATION,
        sep1($.match_case, $._NL_TODO_INDENTATION),
      ),
    match_case: ($) => seq("case", $._pattern, ":", $._block),

    if_else: ($) => seq("if", $._expr, ":", $._block, "else", ":", $._block),

    let: ($) => seq($.var_def, $._NL_TODO_INDENTATION, $._block),

    let_rec: ($) => seq($.rec_def, $._NL_TODO_INDENTATION, $._block),

    _expr: ($) => choice($.binary_app, $.project, $.app, $._simple),

    binary_app: ($) => {
      return choice(
        prec.left(3, seq($._expr, alias($._custom_infix, $.operator), $._expr)),
        ...operator_table.flatMap(([p, assoc, ops]) =>
          ops.map((op) =>
            prec[assoc](p, seq($._expr, alias(op, $.operator), $._expr)),
          ),
        ),
      );
    },

    _custom_infix: ($) => seq("|", $.var, "|"),

    project: ($) =>
      prec(10, seq($._expr, choice($.expr_key, seq(".", $.var_key)))),

    expr_key: ($) => brackets($._expr),
    var_key: ($) => $.var,

    app: ($) => prec(10, seq($._expr, parens(sep($._expr, ",")))),

    _simple: ($) =>
      choice(
        $.matrix,
        $.list_empty,
        $.list_non_empty,
        $.list_enum,
        $.list_comp,
        $.lambda,
        $.dict,
        $.paragraph,
        $.str,
        $.var,
        $.constr,
        $.pair,
        parens($.operator),
        parens($._expr),
        $.doc,
        $.float,
        $.integer,
      ),

    matrix: ($) =>
      seq("[|", $._expr, "for", parens($.var, ",", $.var), "in", $._expr, "|]"),
    list_empty: ($) => "[]",
    list_non_empty: ($) => brackets(sep1($._expr, ",")),
    list_enum: ($) => brackets($._expr, "..", $._expr),
    list_comp: ($) => brackets($._expr, repeat1($._list_comp_qualifier)),
    _list_comp_qualifier: ($) =>
      choice($.list_comp_guard, $.list_comp_decl, $.list_comp_gen),
    list_comp_guard: ($) => seq("if", $._expr),
    list_comp_decl: ($) => seq("def", $._pattern, ":", $._expr),
    list_comp_gen: ($) => seq("for", $._pattern, "in", $._expr),

    lambda: ($) =>
      prec.left(seq("lambda", sep1($._pattern, ","), ":", $._expr)),

    dict: ($) => braces(commas($.dict_entry)),
    dict_entry: ($) => seq(choice($.expr_key, $.var_key), ":", $._block),

    paragraph: ($) =>
      seq(
        `f"""`,
        repeat(choice($.paragraph_tokens, $.paragraph_unquote)),
        `"""`,
      ),

    paragraph_tokens: ($) => prec.right(repeat1(token(/[^"{ ]/))),

    paragraph_unquote: ($) => braces($._expr),
    doc: ($) => prec.left(seq("@doc", parens($._expr), $._expr)),
    pair: ($) => parens($._expr, ",", $._expr),

    _pattern: ($) => choice($.pattern_cons, $._pattern_simple),

    pattern_cons: ($) => prec.left(seq($._pattern, ":|", $._pattern)),

    _pattern_simple: ($) =>
      choice(
        $.var,
        $.pattern_constr,
        $.pattern_record,
        $.pattern_list,
        $.pattern_pair,
        parens($._pattern),
      ),

    pattern_constr: ($) =>
      seq($.constr, optional(parens(sep($._pattern_simple, ",")))),
    pattern_record: ($) => braces(sep(seq($.var, ":", $._pattern), ",")),
    pattern_list: ($) => brackets(sep($._pattern, ",")),
    pattern_pair: ($) => parens($._pattern, ",", $._pattern),

    var: (_) => token(/[a-z_][a-zA-Z0-9_]*/),
    constr: (_) => token(/[A-Z][a-zA-Z0-9_]*/),
    operator: (_) => token(/[:!#$%&*+./<=>?@\\^|~-]+/),
    float: (_) => token(/[+-]?[0-9]+\.[0-9]+/),
    integer: (_) => token(/[+-]?[0-9]+/),
    str: (_) => token(/"[^"\\]*(?:\\.[^"\\]*)*"/),

    _NL_TODO_INDENTATION: (_) => /\n/,
  },
});
