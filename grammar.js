/**
 * @file Fluid grammar for tree-sitter
 * @author Jacob Pake <github@pake.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
//
//
const TODO = ($) => "TODO";

module.exports = grammar({
  name: "fluid",

  rules: {
    source_file: ($) => "hello",

    var_def: TODO,
    rec_def: TODO,

    _block: ($) => choice($.match_as, $.if_else, $.def, $._expr),

    match_as: TODO,
    if_else: TODO,
    def: TODO,

    _expr: ($) => choice($.binary_app, $.project, $.dproject, $.app, $._simple),

    binary_app: TODO,
    project: TODO,
    dproject: TODO,
    app: TODO,

    _simple: ($) =>
      choice(
        $.matrix,
        $.list_empty,
        $.list_non_empty,
        $.list_enum,
        $.lambda,
        $.dict,
        $.paragraph,
        $.doc,
        $.pair,
        $._parens_op,
        $._parens_expr,
      ),

    matrix: TODO,
    list_empty: TODO,
    list_non_empty: TODO,
    list_enum: TODO,
    list_comp: TODO,
    lambda: TODO,
    dict: TODO,
    paragraph: TODO,
    doc: TODO,
    pair: TODO,
    _parens_op: TODO,
    _parens_expr: TODO,

    _pattern: ($) => choice($.pattern_binary_app, $.pattern_simple),

    pattern_binary_app: TODO,

    _pattern_simple: ($) =>
      choice(
        $.pattern_var,
        $.pattern_constr,
        $.pattern_record,
        $.pattern_list,
        $.pattern_pair,
        $._pattern_parens,
      ),

    pattern_var: TODO,
    pattern_constr: TODO,
    pattern_record: TODO,
    pattern_list: TODO,
    pattern_pair: TODO,

    _pattern_parens: TODO,

    var: (_) => token(/[a-z_][a-zA-Z0-9_]*/),
    constr: (_) => token(/[A-Z][a-zA-Z0-9_]*/),
    operator: (_) => token(/[:!#$%&*+./<=>?@\\^|~-]+/),
    float: (_) => token(/[+-]?[0-9]+\.[0-9]+/),
    integer: (_) => token(/[+-]?[0-9]+/),
    str: (_) => token(/"[^"\\]*(?:\\.[^"\\]*)*"/),
  },
});
