#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_public = 2,
  anon_sym_private = 3,
  anon_sym_protected = 4,
  sym_mod_static = 5,
  anon_sym_LPAREN_RPAREN_SEMI = 6,
  anon_sym_LF = 7,
  anon_sym_COLON = 8,
  sym_descriptor_value = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_bool = 12,
  anon_sym_void = 13,
  aux_sym_type_token1 = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_return = 17,
  sym_identifier = 18,
  sym_number = 19,
  anon_sym_SourceFile_COLON_DQUOTE = 20,
  aux_sym_source_file_def_token1 = 21,
  anon_sym_DQUOTE = 22,
  sym_source_file = 23,
  sym_method_def = 24,
  sym_method_access = 25,
  sym_class_definition = 26,
  sym_descriptor_def = 27,
  sym_method_args = 28,
  sym_type = 29,
  sym_block = 30,
  sym_source_file_def = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_method_def_repeat1 = 33,
  aux_sym_class_definition_repeat1 = 34,
  aux_sym_method_args_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [sym_mod_static] = "mod_static",
  [anon_sym_LPAREN_RPAREN_SEMI] = "();",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [sym_descriptor_value] = "descriptor_value",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [aux_sym_type_token1] = "type_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_SourceFile_COLON_DQUOTE] = "SourceFile: \"",
  [aux_sym_source_file_def_token1] = "source_file_def_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_source_file] = "source_file",
  [sym_method_def] = "method_def",
  [sym_method_access] = "method_access",
  [sym_class_definition] = "class_definition",
  [sym_descriptor_def] = "descriptor_def",
  [sym_method_args] = "method_args",
  [sym_type] = "type",
  [sym_block] = "block",
  [sym_source_file_def] = "source_file_def",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_method_def_repeat1] = "method_def_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_method_args_repeat1] = "method_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [sym_mod_static] = sym_mod_static,
  [anon_sym_LPAREN_RPAREN_SEMI] = anon_sym_LPAREN_RPAREN_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_descriptor_value] = sym_descriptor_value,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_SourceFile_COLON_DQUOTE] = anon_sym_SourceFile_COLON_DQUOTE,
  [aux_sym_source_file_def_token1] = aux_sym_source_file_def_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym_method_def] = sym_method_def,
  [sym_method_access] = sym_method_access,
  [sym_class_definition] = sym_class_definition,
  [sym_descriptor_def] = sym_descriptor_def,
  [sym_method_args] = sym_method_args,
  [sym_type] = sym_type,
  [sym_block] = sym_block,
  [sym_source_file_def] = sym_source_file_def,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_method_def_repeat1] = aux_sym_method_def_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_method_args_repeat1] = aux_sym_method_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [sym_mod_static] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_RPAREN_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_descriptor_value] = {
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SourceFile_COLON_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_source_file_def_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_method_def] = {
    .visible = true,
    .named = true,
  },
  [sym_method_access] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_descriptor_def] = {
    .visible = true,
    .named = true,
  },
  [sym_method_args] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file_def] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_args_repeat1] = {
    .visible = false,
    .named = false,
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
  [28] = 20,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'v') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(66);
      END_STATE();
    case 10:
      if (lookahead == 'F') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 'v') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 55:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_public);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_private);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 't') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 't') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '[') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 53},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 54},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [sym_mod_static] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym_block] = STATE(15),
    [sym_source_file_def] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(17), 1,
      sym_method_access,
    STATE(3), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    STATE(4), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [23] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_method_access,
    STATE(10), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    STATE(11), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [46] = 4,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_method_access,
    STATE(9), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [62] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(17), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [78] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [94] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(5), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [110] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(25), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [126] = 4,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_method_access,
    STATE(9), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(29), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [142] = 4,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_method_access,
    STATE(9), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [158] = 4,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      sym_identifier,
    STATE(11), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(36), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [174] = 3,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(12), 2,
      sym_type,
      aux_sym_method_args_repeat1,
    ACTIONS(45), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [187] = 3,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(12), 2,
      sym_type,
      aux_sym_method_args_repeat1,
    ACTIONS(50), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [200] = 3,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(13), 2,
      sym_type,
      aux_sym_method_args_repeat1,
    ACTIONS(50), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [213] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(33), 1,
      sym_source_file_def,
    STATE(18), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [227] = 2,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [237] = 3,
    ACTIONS(58), 1,
      sym_mod_static,
    STATE(26), 1,
      sym_type,
    ACTIONS(60), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [249] = 3,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(18), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [260] = 1,
    ACTIONS(67), 4,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [267] = 2,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [276] = 2,
    STATE(32), 1,
      sym_type,
    ACTIONS(60), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [285] = 2,
    ACTIONS(73), 1,
      anon_sym_public,
    STATE(38), 1,
      sym_class_definition,
  [292] = 2,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_method_args,
  [299] = 1,
    ACTIONS(77), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [304] = 2,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_method_args,
  [311] = 1,
    ACTIONS(79), 1,
      sym_identifier,
  [315] = 1,
    ACTIONS(81), 1,
      sym_descriptor_value,
  [319] = 1,
    ACTIONS(69), 1,
      sym_identifier,
  [323] = 1,
    ACTIONS(83), 1,
      anon_sym_LF,
  [327] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [331] = 1,
    ACTIONS(87), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [335] = 1,
    ACTIONS(89), 1,
      sym_identifier,
  [339] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
  [343] = 1,
    ACTIONS(93), 1,
      anon_sym_SEMI,
  [347] = 1,
    ACTIONS(95), 1,
      anon_sym_SEMI,
  [351] = 1,
    ACTIONS(97), 1,
      anon_sym_SEMI,
  [355] = 1,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
  [359] = 1,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
  [363] = 1,
    ACTIONS(103), 1,
      sym_identifier,
  [367] = 1,
    ACTIONS(105), 1,
      anon_sym_SEMI,
  [371] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
  [375] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [379] = 1,
    ACTIONS(111), 1,
      aux_sym_source_file_def_token1,
  [383] = 1,
    ACTIONS(113), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 94,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 142,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 187,
  [SMALL_STATE(14)] = 200,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 227,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 249,
  [SMALL_STATE(19)] = 260,
  [SMALL_STATE(20)] = 267,
  [SMALL_STATE(21)] = 276,
  [SMALL_STATE(22)] = 285,
  [SMALL_STATE(23)] = 292,
  [SMALL_STATE(24)] = 299,
  [SMALL_STATE(25)] = 304,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 315,
  [SMALL_STATE(28)] = 319,
  [SMALL_STATE(29)] = 323,
  [SMALL_STATE(30)] = 327,
  [SMALL_STATE(31)] = 331,
  [SMALL_STATE(32)] = 335,
  [SMALL_STATE(33)] = 339,
  [SMALL_STATE(34)] = 343,
  [SMALL_STATE(35)] = 347,
  [SMALL_STATE(36)] = 351,
  [SMALL_STATE(37)] = 355,
  [SMALL_STATE(38)] = 359,
  [SMALL_STATE(39)] = 363,
  [SMALL_STATE(40)] = 367,
  [SMALL_STATE(41)] = 371,
  [SMALL_STATE(42)] = 375,
  [SMALL_STATE(43)] = 379,
  [SMALL_STATE(44)] = 383,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_def, 7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_def, 6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_def, 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(19),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_def_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_def_repeat1, 2), SHIFT_REPEAT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(20),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descriptor_def, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_access, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_javap(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
