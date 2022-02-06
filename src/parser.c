#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  anon_sym_descriptor_COLON = 7,
  sym_descriptor_value = 8,
  anon_sym_flags_COLON = 9,
  anon_sym_ACC_PUBLIC = 10,
  anon_sym_ACC_STATIC = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym_hex_value = 14,
  anon_sym_bool = 15,
  anon_sym_void = 16,
  aux_sym_type_token1 = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_return = 20,
  sym_identifier = 21,
  sym_number = 22,
  anon_sym_SourceFile_COLON_DQUOTE = 23,
  aux_sym_source_file_def_token1 = 24,
  anon_sym_DQUOTE = 25,
  sym_source_file = 26,
  sym_method_def = 27,
  sym_method_access = 28,
  sym_class_definition = 29,
  sym_descriptor_def = 30,
  sym_flag_def = 31,
  sym_flag_value = 32,
  sym_wrapped_hex_val = 33,
  sym_method_args = 34,
  sym_type = 35,
  sym_block = 36,
  sym_source_file_def = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_method_def_repeat1 = 39,
  aux_sym_class_definition_repeat1 = 40,
  aux_sym_flag_def_repeat1 = 41,
  aux_sym_method_args_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [sym_mod_static] = "mod_static",
  [anon_sym_LPAREN_RPAREN_SEMI] = "();",
  [anon_sym_descriptor_COLON] = "descriptor:",
  [sym_descriptor_value] = "descriptor_value",
  [anon_sym_flags_COLON] = "flags:",
  [anon_sym_ACC_PUBLIC] = "ACC_PUBLIC",
  [anon_sym_ACC_STATIC] = "ACC_STATIC",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_hex_value] = "hex_value",
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
  [sym_flag_def] = "flag_def",
  [sym_flag_value] = "flag_value",
  [sym_wrapped_hex_val] = "wrapped_hex_val",
  [sym_method_args] = "method_args",
  [sym_type] = "type",
  [sym_block] = "block",
  [sym_source_file_def] = "source_file_def",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_method_def_repeat1] = "method_def_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
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
  [anon_sym_descriptor_COLON] = anon_sym_descriptor_COLON,
  [sym_descriptor_value] = sym_descriptor_value,
  [anon_sym_flags_COLON] = anon_sym_flags_COLON,
  [anon_sym_ACC_PUBLIC] = anon_sym_ACC_PUBLIC,
  [anon_sym_ACC_STATIC] = anon_sym_ACC_STATIC,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_hex_value] = sym_hex_value,
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
  [sym_flag_def] = sym_flag_def,
  [sym_flag_value] = sym_flag_value,
  [sym_wrapped_hex_val] = sym_wrapped_hex_val,
  [sym_method_args] = sym_method_args,
  [sym_type] = sym_type,
  [sym_block] = sym_block,
  [sym_source_file_def] = sym_source_file_def,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_method_def_repeat1] = aux_sym_method_def_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
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
  [anon_sym_descriptor_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_descriptor_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_flags_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACC_PUBLIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACC_STATIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_hex_value] = {
    .visible = true,
    .named = true,
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
  [sym_flag_def] = {
    .visible = true,
    .named = true,
  },
  [sym_flag_value] = {
    .visible = true,
    .named = true,
  },
  [sym_wrapped_hex_val] = {
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
  [aux_sym_flag_def_repeat1] = {
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
  [28] = 28,
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
  [40] = 27,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '0') ADVANCE(123);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == 'A') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'v') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(92);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(97);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'F') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'U') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(106);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 79:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 80:
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 82:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 84:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ACC_PUBLIC);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ACC_STATIC);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 't') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == 't') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '[') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 81},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 81},
  [41] = {.lex_state = 81},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 81},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 82},
  [53] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [sym_mod_static] = ACTIONS(1),
    [anon_sym_descriptor_COLON] = ACTIONS(1),
    [anon_sym_flags_COLON] = ACTIONS(1),
    [anon_sym_ACC_PUBLIC] = ACTIONS(1),
    [anon_sym_ACC_STATIC] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_hex_value] = ACTIONS(1),
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
    [sym_source_file] = STATE(51),
    [sym_block] = STATE(25),
    [sym_source_file_def] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_descriptor_def,
    STATE(14), 1,
      sym_flag_def,
    STATE(24), 1,
      sym_method_access,
    STATE(13), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [28] = 6,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_flag_def,
    STATE(24), 1,
      sym_method_access,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [50] = 3,
    ACTIONS(19), 2,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
    STATE(6), 2,
      sym_flag_value,
      aux_sym_flag_def_repeat1,
    ACTIONS(17), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [65] = 3,
    ACTIONS(23), 2,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
    STATE(5), 2,
      sym_flag_value,
      aux_sym_flag_def_repeat1,
    ACTIONS(21), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [80] = 3,
    ACTIONS(19), 2,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
    STATE(5), 2,
      sym_flag_value,
      aux_sym_flag_def_repeat1,
    ACTIONS(26), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [95] = 3,
    ACTIONS(30), 1,
      anon_sym_descriptor_COLON,
    STATE(7), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(28), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [109] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(7), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(33), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [123] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(7), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(35), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [137] = 4,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_method_access,
    STATE(15), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [153] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(8), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(35), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [167] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(9), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(39), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [181] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_method_access,
    STATE(16), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [197] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_method_access,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [213] = 4,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_method_access,
    STATE(16), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [229] = 4,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_method_access,
    STATE(16), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(43), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [245] = 4,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_method_access,
    STATE(16), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [261] = 1,
    ACTIONS(48), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
      anon_sym_RBRACE,
  [270] = 1,
    ACTIONS(50), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
      anon_sym_RBRACE,
  [279] = 3,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_type,
      aux_sym_method_args_repeat1,
    ACTIONS(54), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [292] = 3,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(23), 2,
      sym_type,
      aux_sym_method_args_repeat1,
    ACTIONS(59), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [305] = 1,
    ACTIONS(61), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_descriptor_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [314] = 3,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_type,
      aux_sym_method_args_repeat1,
    ACTIONS(59), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [327] = 3,
    ACTIONS(65), 1,
      sym_mod_static,
    STATE(41), 1,
      sym_type,
    ACTIONS(67), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [339] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(45), 1,
      sym_source_file_def,
    STATE(28), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [353] = 2,
    STATE(38), 1,
      sym_type,
    ACTIONS(67), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [362] = 2,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [371] = 3,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(28), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [382] = 1,
    ACTIONS(78), 4,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [389] = 1,
    ACTIONS(80), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [394] = 2,
    ACTIONS(82), 1,
      anon_sym_public,
    STATE(47), 1,
      sym_class_definition,
  [401] = 2,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_wrapped_hex_val,
  [408] = 2,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_method_args,
  [415] = 2,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_method_args,
  [422] = 1,
    ACTIONS(88), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [426] = 1,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
  [430] = 1,
    ACTIONS(92), 1,
      sym_descriptor_value,
  [434] = 1,
    ACTIONS(94), 1,
      sym_identifier,
  [438] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [442] = 1,
    ACTIONS(69), 1,
      sym_identifier,
  [446] = 1,
    ACTIONS(98), 1,
      sym_identifier,
  [450] = 1,
    ACTIONS(100), 1,
      anon_sym_SEMI,
  [454] = 1,
    ACTIONS(102), 1,
      anon_sym_SEMI,
  [458] = 1,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [462] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
  [466] = 1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
  [470] = 1,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
  [474] = 1,
    ACTIONS(112), 1,
      anon_sym_SEMI,
  [478] = 1,
    ACTIONS(114), 1,
      sym_identifier,
  [482] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [486] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [490] = 1,
    ACTIONS(120), 1,
      aux_sym_source_file_def_token1,
  [494] = 1,
    ACTIONS(122), 1,
      sym_hex_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 181,
  [SMALL_STATE(14)] = 197,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 229,
  [SMALL_STATE(17)] = 245,
  [SMALL_STATE(18)] = 261,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 279,
  [SMALL_STATE(21)] = 292,
  [SMALL_STATE(22)] = 305,
  [SMALL_STATE(23)] = 314,
  [SMALL_STATE(24)] = 327,
  [SMALL_STATE(25)] = 339,
  [SMALL_STATE(26)] = 353,
  [SMALL_STATE(27)] = 362,
  [SMALL_STATE(28)] = 371,
  [SMALL_STATE(29)] = 382,
  [SMALL_STATE(30)] = 389,
  [SMALL_STATE(31)] = 394,
  [SMALL_STATE(32)] = 401,
  [SMALL_STATE(33)] = 408,
  [SMALL_STATE(34)] = 415,
  [SMALL_STATE(35)] = 422,
  [SMALL_STATE(36)] = 426,
  [SMALL_STATE(37)] = 430,
  [SMALL_STATE(38)] = 434,
  [SMALL_STATE(39)] = 438,
  [SMALL_STATE(40)] = 442,
  [SMALL_STATE(41)] = 446,
  [SMALL_STATE(42)] = 450,
  [SMALL_STATE(43)] = 454,
  [SMALL_STATE(44)] = 458,
  [SMALL_STATE(45)] = 462,
  [SMALL_STATE(46)] = 466,
  [SMALL_STATE(47)] = 470,
  [SMALL_STATE(48)] = 474,
  [SMALL_STATE(49)] = 478,
  [SMALL_STATE(50)] = 482,
  [SMALL_STATE(51)] = 486,
  [SMALL_STATE(52)] = 490,
  [SMALL_STATE(53)] = 494,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(19),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2), SHIFT_REPEAT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(29),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_hex_val, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_value, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_access, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
