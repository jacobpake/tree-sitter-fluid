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

const TODO = (str) => ($) => str;

module.exports = grammar({
  name: "fluid",

  conflicts: ($) => [[$.match_as]],

  rules: {
    source_file: ($) => $._block,

    var_def: ($) => seq("def", $._pattern, ":", $._block),
    rec_def: ($) => seq("def", $.var, parens(sep($._pattern, ",")), ":", $._block),

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

    if_else: ($) => seq("if", $._expr, ":", $._block, "else:", $._block),

    let: ($) => seq(repeat1($.var_def), $._NL_TODO_INDENTATION, $._block),

    let_rec: ($) => seq(repeat1($.rec_def), $._NL_TODO_INDENTATION, $._block),

    _expr: ($) => choice($.binary_app, $.project, $.dproject, $.app, $._simple),

    binary_app: ($) => {
      return choice(
        prec.left(3, seq($._expr, "|", $.var, "|", $._expr)),
        ...operator_table.flatMap(([p, assoc, ops]) =>
          ops.map((op) => prec[assoc](p, seq($._expr, alias(op, $.operator), $._expr))),
        ),
      );
    },
    project: TODO("project"),
    dproject: TODO("dproject"),
    app: ($) => seq($._expr, parens(sep($._expr, ","))),

    _simple: ($) =>
      choice(
        $.matrix,
        $.list_empty,
        $.list_non_empty,
        $.list_enum,
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

    matrix: TODO("matrix"),
    list_empty: TODO("list_empty"),
    list_non_empty: TODO("list_non_empty"),
    list_enum: TODO("list-enum"),
    list_comp: TODO("list-comp"),
    lambda: TODO("lambda"),
    dict: TODO("dict"),
    paragraph: TODO("paragraph"),
    doc: TODO("doc"),
    pair: ($) => parens($._expr, ",", $._expr),

    _pattern: ($) => choice($.pattern_cons, $._pattern_simple),

    pattern_cons: ($) => seq($._pattern_simple, ":|", $._pattern_simple),

    _pattern_simple: ($) =>
      choice(
        $.var,
        $.pattern_constr,
        $.pattern_record,
        $.pattern_list,
        $.pattern_pair,
        parens($._pattern),
      ),

    pattern_constr: ($) => seq($.constr, optional(parens(sep($._pattern_simple, ",")))),
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
