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
 * @type {Array<[prec: number, assoc: ('left'|'right'), ops: string[]]>}
 */
const operator_table = [
  [9, "left", ["!"]],
  [8, "right", ["**"]],
  [7, "left", ["*", "/", "//", "%"]],
  [6, "left", ["+", "-"]],
  [5, "right", [":|"]],
  [4, "right", ["++"]],
  // [3, "left", ["|x|"]],
  [2, "left", ["==", "/=", "<", ">", "<=", ">="]],
  [1, "left", ["and"]],
  [0, "left", ["or"]],
];

const TODO = (str) => ($) => str;

module.exports = grammar({
  name: "fluid",

  rules: {
    source_file: ($) => $._block,

    var_def: TODO("var_def"),
    rec_def: TODO("rec_def"),

    _block: ($) => choice($.match_as, $.if_else, $.def, $._expr),

    match_as: TODO("match_as"),
    if_else: TODO("if_else"),
    def: TODO("def"),

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
    app: TODO("app"),

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
    pair: TODO("pair"),

    _pattern: ($) => choice($.pattern_binary_app, $._pattern_simple),

    pattern_binary_app: TODO("pattern_binary_app"),

    _pattern_simple: ($) =>
      choice(
        $.pattern_var,
        $.pattern_constr,
        $.pattern_record,
        $.pattern_list,
        $.pattern_pair,
        parens($._pattern),
      ),

    pattern_var: TODO("pattern_var"),
    pattern_constr: TODO("pattern_constr"),
    pattern_record: TODO("pattern_record"),
    pattern_list: TODO("pattern_list"),
    pattern_pair: TODO("pattern_pair"),

    var: (_) => token(/[a-z_][a-zA-Z0-9_]*/),
    constr: (_) => token(/[A-Z][a-zA-Z0-9_]*/),
    operator: (_) => token(/[:!#$%&*+./<=>?@\\^|~-]+/),
    float: (_) => token(/[+-]?[0-9]+\.[0-9]+/),
    integer: (_) => token(/[+-]?[0-9]+/),
    str: (_) => token(/"[^"\\]*(?:\\.[^"\\]*)*"/),
  },
});
