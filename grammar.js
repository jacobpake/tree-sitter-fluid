/**
 * @file Fluid grammar for tree-sitter
 * @author Jacob Pake <github@pake.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "fluid",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => "hello",
  },
});
