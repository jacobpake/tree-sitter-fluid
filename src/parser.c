#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_match_as = 1,
  sym_if_else = 2,
  sym_def = 3,
  anon_sym_BQUOTE = 4,
  anon_sym_BANG = 5,
  anon_sym_STAR_STAR = 6,
  anon_sym_STAR = 7,
  anon_sym_SLASH = 8,
  anon_sym_SLASH_SLASH = 9,
  anon_sym_PERCENT = 10,
  anon_sym_PLUS = 11,
  anon_sym_DASH = 12,
  anon_sym_COLON_PIPE = 13,
  anon_sym_PLUS_PLUS = 14,
  anon_sym_EQ_EQ = 15,
  anon_sym_SLASH_EQ = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_and = 21,
  anon_sym_or = 22,
  sym_project = 23,
  sym_dproject = 24,
  sym_app = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  sym_matrix = 28,
  sym_list_empty = 29,
  sym_list_non_empty = 30,
  sym_list_enum = 31,
  sym_lambda = 32,
  sym_dict = 33,
  sym_paragraph = 34,
  sym_doc = 35,
  sym_pair = 36,
  sym_var = 37,
  sym_constr = 38,
  sym_operator = 39,
  sym_float = 40,
  sym_integer = 41,
  sym_str = 42,
  sym_source_file = 43,
  sym__block = 44,
  sym__expr = 45,
  sym_binary_app = 46,
  sym__simple = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_match_as] = "match_as",
  [sym_if_else] = "if_else",
  [sym_def] = "def",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_BANG] = "operator",
  [anon_sym_STAR_STAR] = "operator",
  [anon_sym_STAR] = "operator",
  [anon_sym_SLASH] = "operator",
  [anon_sym_SLASH_SLASH] = "operator",
  [anon_sym_PERCENT] = "operator",
  [anon_sym_PLUS] = "operator",
  [anon_sym_DASH] = "operator",
  [anon_sym_COLON_PIPE] = "operator",
  [anon_sym_PLUS_PLUS] = "operator",
  [anon_sym_EQ_EQ] = "operator",
  [anon_sym_SLASH_EQ] = "operator",
  [anon_sym_LT] = "operator",
  [anon_sym_GT] = "operator",
  [anon_sym_LT_EQ] = "operator",
  [anon_sym_GT_EQ] = "operator",
  [anon_sym_and] = "operator",
  [anon_sym_or] = "operator",
  [sym_project] = "project",
  [sym_dproject] = "dproject",
  [sym_app] = "app",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_matrix] = "matrix",
  [sym_list_empty] = "list_empty",
  [sym_list_non_empty] = "list_non_empty",
  [sym_list_enum] = "list_enum",
  [sym_lambda] = "lambda",
  [sym_dict] = "dict",
  [sym_paragraph] = "paragraph",
  [sym_doc] = "doc",
  [sym_pair] = "pair",
  [sym_var] = "var",
  [sym_constr] = "constr",
  [sym_operator] = "operator",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_str] = "str",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym__expr] = "_expr",
  [sym_binary_app] = "binary_app",
  [sym__simple] = "_simple",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_match_as] = sym_match_as,
  [sym_if_else] = sym_if_else,
  [sym_def] = sym_def,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_BANG] = sym_operator,
  [anon_sym_STAR_STAR] = sym_operator,
  [anon_sym_STAR] = sym_operator,
  [anon_sym_SLASH] = sym_operator,
  [anon_sym_SLASH_SLASH] = sym_operator,
  [anon_sym_PERCENT] = sym_operator,
  [anon_sym_PLUS] = sym_operator,
  [anon_sym_DASH] = sym_operator,
  [anon_sym_COLON_PIPE] = sym_operator,
  [anon_sym_PLUS_PLUS] = sym_operator,
  [anon_sym_EQ_EQ] = sym_operator,
  [anon_sym_SLASH_EQ] = sym_operator,
  [anon_sym_LT] = sym_operator,
  [anon_sym_GT] = sym_operator,
  [anon_sym_LT_EQ] = sym_operator,
  [anon_sym_GT_EQ] = sym_operator,
  [anon_sym_and] = sym_operator,
  [anon_sym_or] = sym_operator,
  [sym_project] = sym_project,
  [sym_dproject] = sym_dproject,
  [sym_app] = sym_app,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_matrix] = sym_matrix,
  [sym_list_empty] = sym_list_empty,
  [sym_list_non_empty] = sym_list_non_empty,
  [sym_list_enum] = sym_list_enum,
  [sym_lambda] = sym_lambda,
  [sym_dict] = sym_dict,
  [sym_paragraph] = sym_paragraph,
  [sym_doc] = sym_doc,
  [sym_pair] = sym_pair,
  [sym_var] = sym_var,
  [sym_constr] = sym_constr,
  [sym_operator] = sym_operator,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_str] = sym_str,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym__expr] = sym__expr,
  [sym_binary_app] = sym_binary_app,
  [sym__simple] = sym__simple,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_match_as] = {
    .visible = true,
    .named = true,
  },
  [sym_if_else] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_PIPE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_dproject] = {
    .visible = true,
    .named = true,
  },
  [sym_app] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_matrix] = {
    .visible = true,
    .named = true,
  },
  [sym_list_empty] = {
    .visible = true,
    .named = true,
  },
  [sym_list_non_empty] = {
    .visible = true,
    .named = true,
  },
  [sym_list_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_doc] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_constr] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_app] = {
    .visible = true,
    .named = true,
  },
  [sym__simple] = {
    .visible = false,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static TSCharacterRange sym_operator_character_set_1[] = {
  {'!', '!'}, {'#', '&'}, {'*', '+'}, {'-', '/'}, {':', ':'}, {'<', '@'}, {'\\', '\\'}, {'^', '^'},
  {'|', '|'}, {'~', '~'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      ADVANCE_MAP(
        '!', 87,
        '"', 3,
        '%', 92,
        '(', 111,
        ')', 112,
        '*', 89,
        '+', 93,
        '-', 94,
        '/', 90,
        ':', 74,
        '<', 99,
        '=', 5,
        '>', 100,
        '`', 86,
        'a', 46,
        'd', 27,
        'i', 32,
        'l', 9,
        'm', 10,
        'o', 56,
        'p', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(198);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 3,
        '(', 111,
        'a', 175,
        'd', 151,
        'i', 156,
        'l', 134,
        'm', 135,
        'p', 136,
        '+', 76,
        '-', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(198);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '(', 111,
        'a', 175,
        'd', 161,
        'l', 134,
        'm', 141,
        'p', 136,
        '+', 199,
        '-', 199,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (set_contains(sym_operator_character_set_1, 10, lookahead)) ADVANCE(200);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(198);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'j') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'j') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 73:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == '|') ADVANCE(95);
      END_STATE();
    case 75:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 78:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_match_as);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_match_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_if_else);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_if_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_def);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_project);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_project);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_dproject);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_dproject);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_app);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_app);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_matrix);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_matrix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_list_empty);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_list_empty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_list_non_empty);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_list_non_empty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_list_enum);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_lambda);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_lambda);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_dict);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_dict);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_paragraph);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_paragraph);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_doc);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_doc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_pair);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_pair);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '_') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '_') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'b') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'c') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'c') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'c') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'c') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'c') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'd') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'f') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'f') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'g') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'h') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'j') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'j') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'l') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'm') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'o') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'p') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'p') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'p') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'p') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 's') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 's') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'y') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'y') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_constr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_operator);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (set_contains(sym_operator_character_set_1, 10, lookahead)) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_operator);
      if (set_contains(sym_operator_character_set_1, 10, lookahead)) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_match_as] = ACTIONS(1),
    [sym_if_else] = ACTIONS(1),
    [sym_def] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON_PIPE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [sym_project] = ACTIONS(1),
    [sym_dproject] = ACTIONS(1),
    [sym_app] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_matrix] = ACTIONS(1),
    [sym_list_empty] = ACTIONS(1),
    [sym_list_non_empty] = ACTIONS(1),
    [sym_list_enum] = ACTIONS(1),
    [sym_lambda] = ACTIONS(1),
    [sym_dict] = ACTIONS(1),
    [sym_paragraph] = ACTIONS(1),
    [sym_doc] = ACTIONS(1),
    [sym_pair] = ACTIONS(1),
    [sym_constr] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym__block] = STATE(28),
    [sym__expr] = STATE(25),
    [sym_binary_app] = STATE(25),
    [sym__simple] = STATE(25),
    [sym_match_as] = ACTIONS(3),
    [sym_if_else] = ACTIONS(3),
    [sym_def] = ACTIONS(3),
    [sym_project] = ACTIONS(5),
    [sym_dproject] = ACTIONS(5),
    [sym_app] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_matrix] = ACTIONS(5),
    [sym_list_empty] = ACTIONS(5),
    [sym_list_non_empty] = ACTIONS(5),
    [sym_list_enum] = ACTIONS(9),
    [sym_lambda] = ACTIONS(5),
    [sym_dict] = ACTIONS(5),
    [sym_paragraph] = ACTIONS(5),
    [sym_doc] = ACTIONS(5),
    [sym_pair] = ACTIONS(5),
    [sym_var] = ACTIONS(5),
    [sym_constr] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_integer] = ACTIONS(5),
    [sym_str] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_operator,
    STATE(24), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(13), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(11), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [33] = 5,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_COLON_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [65] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(8), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(29), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(27), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [95] = 2,
    ACTIONS(33), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 16,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_BANG,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_COLON_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [121] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(5), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(37), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(35), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [151] = 13,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_COLON_PIPE,
    ACTIONS(49), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_and,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [199] = 12,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_COLON_PIPE,
    ACTIONS(49), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [245] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(20), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(59), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(57), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [275] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(3), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(63), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(61), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [305] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(22), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(67), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(65), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [335] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(23), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(71), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(69), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [365] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(21), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(75), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(73), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [395] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(19), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(79), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(77), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [425] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(16), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(83), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(81), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [455] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_COLON_PIPE,
    ACTIONS(49), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [499] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(7), 3,
      sym__expr,
      sym_binary_app,
      sym__simple,
    ACTIONS(87), 4,
      sym_list_enum,
      sym_constr,
      sym_float,
      sym_str,
    ACTIONS(85), 13,
      sym_project,
      sym_dproject,
      sym_app,
      sym_matrix,
      sym_list_empty,
      sym_list_non_empty,
      sym_lambda,
      sym_dict,
      sym_paragraph,
      sym_doc,
      sym_pair,
      sym_var,
      sym_integer,
  [529] = 2,
    ACTIONS(91), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 16,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_BANG,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_COLON_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [555] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_COLON_PIPE,
    ACTIONS(49), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [599] = 2,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 16,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_BANG,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_COLON_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [625] = 10,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_COLON_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 9,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [667] = 5,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_COLON_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [699] = 7,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 3,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_COLON_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [735] = 14,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_COLON_PIPE,
    ACTIONS(49), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_and,
    ACTIONS(93), 1,
      anon_sym_or,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [784] = 14,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_COLON_PIPE,
    ACTIONS(49), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_and,
    ACTIONS(93), 1,
      anon_sym_or,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [833] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [837] = 1,
    ACTIONS(101), 1,
      anon_sym_BQUOTE,
  [841] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [845] = 1,
    ACTIONS(105), 1,
      sym_var,
  [849] = 1,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 199,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 275,
  [SMALL_STATE(11)] = 305,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 365,
  [SMALL_STATE(14)] = 395,
  [SMALL_STATE(15)] = 425,
  [SMALL_STATE(16)] = 455,
  [SMALL_STATE(17)] = 499,
  [SMALL_STATE(18)] = 529,
  [SMALL_STATE(19)] = 555,
  [SMALL_STATE(20)] = 599,
  [SMALL_STATE(21)] = 625,
  [SMALL_STATE(22)] = 667,
  [SMALL_STATE(23)] = 699,
  [SMALL_STATE(24)] = 735,
  [SMALL_STATE(25)] = 784,
  [SMALL_STATE(26)] = 833,
  [SMALL_STATE(27)] = 837,
  [SMALL_STATE(28)] = 841,
  [SMALL_STATE(29)] = 845,
  [SMALL_STATE(30)] = 849,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_app, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_app, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_app, 5, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_app, 5, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_fluid(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
