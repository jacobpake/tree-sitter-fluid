package tree_sitter_fluid_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_fluid "github.com/tree-sitter/tree-sitter-fluid/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fluid.Language())
	if language == nil {
		t.Errorf("Error loading Fluid grammar")
	}
}
