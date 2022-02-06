#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_Code_COLON = 7,
  anon_sym_COMMA = 8,
  anon_sym_LineNumberTable_COLON = 9,
  anon_sym_line = 10,
  anon_sym_COLON = 11,
  anon_sym_aload_0 = 12,
  anon_sym_return = 13,
  anon_sym_invokespecial = 14,
  anon_sym_POUND = 15,
  anon_sym_stack_EQ = 16,
  anon_sym_locals_EQ = 17,
  anon_sym_args_size_EQ = 18,
  anon_sym_descriptor_COLON = 19,
  sym_descriptor_value = 20,
  anon_sym_flags_COLON = 21,
  anon_sym_ACC_PUBLIC = 22,
  anon_sym_ACC_STATIC = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_hex_value = 26,
  anon_sym_bool = 27,
  anon_sym_void = 28,
  aux_sym_type_token1 = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  sym_identifier = 32,
  sym_number = 33,
  anon_sym_SourceFile_COLON_DQUOTE = 34,
  aux_sym_source_file_def_token1 = 35,
  anon_sym_DQUOTE = 36,
  sym_source_file = 37,
  sym_method_def = 38,
  sym_method_access = 39,
  sym_class_definition = 40,
  sym_code_def = 41,
  sym_code_info = 42,
  sym_line_number_table_def = 43,
  sym_numered_line = 44,
  sym_numered_instruction = 45,
  sym_instruction = 46,
  sym_code_info_stack = 47,
  sym_code_info_locals = 48,
  sym_code_info_args_size = 49,
  sym_descriptor_def = 50,
  sym_flag_def = 51,
  sym_flag_value = 52,
  sym_wrapped_hex_val = 53,
  sym_method_args = 54,
  sym_type = 55,
  sym_block = 56,
  sym_source_file_def = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_method_def_repeat1 = 59,
  aux_sym_class_definition_repeat1 = 60,
  aux_sym_code_info_repeat1 = 61,
  aux_sym_line_number_table_def_repeat1 = 62,
  aux_sym_flag_def_repeat1 = 63,
  aux_sym_method_args_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [sym_mod_static] = "mod_static",
  [anon_sym_LPAREN_RPAREN_SEMI] = "();",
  [anon_sym_Code_COLON] = "Code:",
  [anon_sym_COMMA] = ",",
  [anon_sym_LineNumberTable_COLON] = "LineNumberTable:",
  [anon_sym_line] = "line",
  [anon_sym_COLON] = ":",
  [anon_sym_aload_0] = "aload_0",
  [anon_sym_return] = "return",
  [anon_sym_invokespecial] = "invokespecial",
  [anon_sym_POUND] = "#",
  [anon_sym_stack_EQ] = "stack=",
  [anon_sym_locals_EQ] = "locals=",
  [anon_sym_args_size_EQ] = "args_size=",
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
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_SourceFile_COLON_DQUOTE] = "SourceFile: \"",
  [aux_sym_source_file_def_token1] = "source_file_def_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_source_file] = "source_file",
  [sym_method_def] = "method_def",
  [sym_method_access] = "method_access",
  [sym_class_definition] = "class_definition",
  [sym_code_def] = "code_def",
  [sym_code_info] = "code_info",
  [sym_line_number_table_def] = "line_number_table_def",
  [sym_numered_line] = "numered_line",
  [sym_numered_instruction] = "numered_instruction",
  [sym_instruction] = "instruction",
  [sym_code_info_stack] = "code_info_stack",
  [sym_code_info_locals] = "code_info_locals",
  [sym_code_info_args_size] = "code_info_args_size",
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
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
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
  [anon_sym_Code_COLON] = anon_sym_Code_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LineNumberTable_COLON] = anon_sym_LineNumberTable_COLON,
  [anon_sym_line] = anon_sym_line,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_aload_0] = anon_sym_aload_0,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_invokespecial] = anon_sym_invokespecial,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_stack_EQ] = anon_sym_stack_EQ,
  [anon_sym_locals_EQ] = anon_sym_locals_EQ,
  [anon_sym_args_size_EQ] = anon_sym_args_size_EQ,
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
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_SourceFile_COLON_DQUOTE] = anon_sym_SourceFile_COLON_DQUOTE,
  [aux_sym_source_file_def_token1] = aux_sym_source_file_def_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym_method_def] = sym_method_def,
  [sym_method_access] = sym_method_access,
  [sym_class_definition] = sym_class_definition,
  [sym_code_def] = sym_code_def,
  [sym_code_info] = sym_code_info,
  [sym_line_number_table_def] = sym_line_number_table_def,
  [sym_numered_line] = sym_numered_line,
  [sym_numered_instruction] = sym_numered_instruction,
  [sym_instruction] = sym_instruction,
  [sym_code_info_stack] = sym_code_info_stack,
  [sym_code_info_locals] = sym_code_info_locals,
  [sym_code_info_args_size] = sym_code_info_args_size,
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
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
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
  [anon_sym_Code_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LineNumberTable_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_line] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aload_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invokespecial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stack_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_locals_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args_size_EQ] = {
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
  [sym_code_def] = {
    .visible = true,
    .named = true,
  },
  [sym_code_info] = {
    .visible = true,
    .named = true,
  },
  [sym_line_number_table_def] = {
    .visible = true,
    .named = true,
  },
  [sym_numered_line] = {
    .visible = true,
    .named = true,
  },
  [sym_numered_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_code_info_stack] = {
    .visible = true,
    .named = true,
  },
  [sym_code_info_locals] = {
    .visible = true,
    .named = true,
  },
  [sym_code_info_args_size] = {
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
  [aux_sym_code_info_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_number_table_def_repeat1] = {
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
  [40] = 40,
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 42,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(141);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == ')') ADVANCE(168);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(153);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(192);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(168);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(154);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(149);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(164);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(161);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(151);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(148);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(165);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(166);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'F') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(174);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(6);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(123);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 133:
      if (lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 134:
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 135:
      if (lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 136:
      if (lookahead == 'z') ADVANCE(68);
      END_STATE();
    case 137:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 138:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 140:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_aload_0);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_invokespecial);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_stack_EQ);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_locals_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_args_size_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ACC_PUBLIC);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ACC_STATIC);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 't') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 't') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '[') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'x') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 195:
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
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 137},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 138},
  [66] = {.lex_state = 138},
  [67] = {.lex_state = 138},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 138},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [sym_mod_static] = ACTIONS(1),
    [anon_sym_Code_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LineNumberTable_COLON] = ACTIONS(1),
    [anon_sym_line] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_aload_0] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_invokespecial] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_stack_EQ] = ACTIONS(1),
    [anon_sym_locals_EQ] = ACTIONS(1),
    [anon_sym_args_size_EQ] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(79),
    [sym_block] = STATE(33),
    [sym_source_file_def] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(13), 1,
      anon_sym_flags_COLON,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_descriptor_def,
    STATE(8), 1,
      sym_flag_def,
    STATE(23), 1,
      sym_code_def,
    STATE(32), 1,
      sym_method_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [34] = 8,
    ACTIONS(9), 1,
      anon_sym_Code_COLON,
    ACTIONS(13), 1,
      anon_sym_flags_COLON,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_flag_def,
    STATE(18), 1,
      sym_code_def,
    STATE(32), 1,
      sym_method_access,
    STATE(10), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [62] = 3,
    ACTIONS(21), 2,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
    STATE(4), 2,
      sym_flag_value,
      aux_sym_flag_def_repeat1,
    ACTIONS(19), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [78] = 3,
    ACTIONS(26), 2,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
    STATE(4), 2,
      sym_flag_value,
      aux_sym_flag_def_repeat1,
    ACTIONS(24), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [94] = 6,
    ACTIONS(9), 1,
      anon_sym_Code_COLON,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_code_def,
    STATE(32), 1,
      sym_method_access,
    STATE(20), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [116] = 3,
    ACTIONS(26), 2,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
    STATE(5), 2,
      sym_flag_value,
      aux_sym_flag_def_repeat1,
    ACTIONS(30), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [132] = 6,
    ACTIONS(9), 1,
      anon_sym_Code_COLON,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_code_def,
    STATE(32), 1,
      sym_method_access,
    STATE(10), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [154] = 1,
    ACTIONS(32), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
      anon_sym_RBRACE,
  [164] = 4,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [180] = 3,
    ACTIONS(36), 1,
      anon_sym_line,
    STATE(19), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(34), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [194] = 1,
    ACTIONS(38), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
      anon_sym_RBRACE,
  [204] = 3,
    ACTIONS(36), 1,
      anon_sym_line,
    STATE(11), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(40), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [218] = 4,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [234] = 3,
    ACTIONS(46), 1,
      anon_sym_descriptor_COLON,
    STATE(15), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(44), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [248] = 3,
    ACTIONS(11), 1,
      anon_sym_descriptor_COLON,
    STATE(15), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(49), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [262] = 4,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(51), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [278] = 4,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(20), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [294] = 3,
    ACTIONS(58), 1,
      anon_sym_line,
    STATE(19), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(56), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [308] = 4,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [324] = 3,
    ACTIONS(11), 1,
      anon_sym_descriptor_COLON,
    STATE(22), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(63), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [338] = 3,
    ACTIONS(11), 1,
      anon_sym_descriptor_COLON,
    STATE(15), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(65), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [352] = 4,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(10), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [368] = 4,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [384] = 4,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [400] = 3,
    ACTIONS(11), 1,
      anon_sym_descriptor_COLON,
    STATE(16), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(65), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [414] = 1,
    ACTIONS(67), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_descriptor_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [424] = 3,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(28), 2,
      sym_type,
      aux_sym_method_args_repeat1,
    ACTIONS(71), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [437] = 3,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(28), 2,
      sym_type,
      aux_sym_method_args_repeat1,
    ACTIONS(76), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [450] = 3,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(29), 2,
      sym_type,
      aux_sym_method_args_repeat1,
    ACTIONS(76), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [463] = 1,
    ACTIONS(80), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [471] = 3,
    ACTIONS(82), 1,
      sym_mod_static,
    STATE(65), 1,
      sym_type,
    ACTIONS(84), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [483] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(81), 1,
      sym_source_file_def,
    STATE(38), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [497] = 3,
    ACTIONS(86), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(88), 1,
      sym_number,
    STATE(37), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [508] = 2,
    STATE(75), 1,
      sym_type,
    ACTIONS(84), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [517] = 1,
    ACTIONS(90), 4,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [524] = 3,
    ACTIONS(88), 1,
      sym_number,
    ACTIONS(92), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(41), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [535] = 3,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(38), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [546] = 3,
    ACTIONS(101), 1,
      anon_sym_invokespecial,
    STATE(48), 1,
      sym_instruction,
    ACTIONS(99), 2,
      anon_sym_aload_0,
      anon_sym_return,
  [557] = 1,
    ACTIONS(103), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [564] = 3,
    ACTIONS(105), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(107), 1,
      sym_number,
    STATE(41), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [575] = 2,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(112), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [584] = 3,
    ACTIONS(114), 1,
      anon_sym_stack_EQ,
    STATE(52), 1,
      sym_code_info,
    STATE(72), 1,
      sym_code_info_stack,
  [594] = 2,
    ACTIONS(116), 1,
      anon_sym_public,
    STATE(82), 1,
      sym_class_definition,
  [601] = 1,
    ACTIONS(118), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [606] = 2,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_method_args,
  [613] = 1,
    ACTIONS(122), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [618] = 1,
    ACTIONS(124), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [623] = 1,
    ACTIONS(126), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [628] = 1,
    ACTIONS(128), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [633] = 2,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_wrapped_hex_val,
  [640] = 2,
    ACTIONS(132), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(40), 1,
      sym_line_number_table_def,
  [647] = 2,
    ACTIONS(134), 1,
      anon_sym_args_size_EQ,
    STATE(34), 1,
      sym_code_info_args_size,
  [654] = 2,
    ACTIONS(136), 1,
      anon_sym_locals_EQ,
    STATE(56), 1,
      sym_code_info_locals,
  [661] = 2,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_method_args,
  [668] = 1,
    ACTIONS(138), 1,
      anon_sym_COMMA,
  [672] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [676] = 1,
    ACTIONS(142), 1,
      aux_sym_source_file_def_token1,
  [680] = 1,
    ACTIONS(144), 1,
      anon_sym_COLON,
  [684] = 1,
    ACTIONS(146), 1,
      anon_sym_COMMA,
  [688] = 1,
    ACTIONS(148), 1,
      anon_sym_COMMA,
  [692] = 1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
  [696] = 1,
    ACTIONS(152), 1,
      anon_sym_SEMI,
  [700] = 1,
    ACTIONS(154), 1,
      anon_sym_SEMI,
  [704] = 1,
    ACTIONS(156), 1,
      sym_identifier,
  [708] = 1,
    ACTIONS(110), 1,
      sym_identifier,
  [712] = 1,
    ACTIONS(158), 1,
      sym_identifier,
  [716] = 1,
    ACTIONS(160), 1,
      sym_number,
  [720] = 1,
    ACTIONS(162), 1,
      sym_hex_value,
  [724] = 1,
    ACTIONS(164), 1,
      sym_number,
  [728] = 1,
    ACTIONS(166), 1,
      anon_sym_SEMI,
  [732] = 1,
    ACTIONS(168), 1,
      anon_sym_COMMA,
  [736] = 1,
    ACTIONS(170), 1,
      sym_number,
  [740] = 1,
    ACTIONS(172), 1,
      sym_number,
  [744] = 1,
    ACTIONS(174), 1,
      sym_identifier,
  [748] = 1,
    ACTIONS(176), 1,
      sym_number,
  [752] = 1,
    ACTIONS(178), 1,
      sym_descriptor_value,
  [756] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [760] = 1,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
  [764] = 1,
    ACTIONS(184), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [768] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [772] = 1,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
  [776] = 1,
    ACTIONS(190), 1,
      anon_sym_POUND,
  [780] = 1,
    ACTIONS(192), 1,
      sym_number,
  [784] = 1,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
  [788] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [792] = 1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 204,
  [SMALL_STATE(14)] = 218,
  [SMALL_STATE(15)] = 234,
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 278,
  [SMALL_STATE(19)] = 294,
  [SMALL_STATE(20)] = 308,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 384,
  [SMALL_STATE(26)] = 400,
  [SMALL_STATE(27)] = 414,
  [SMALL_STATE(28)] = 424,
  [SMALL_STATE(29)] = 437,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 463,
  [SMALL_STATE(32)] = 471,
  [SMALL_STATE(33)] = 483,
  [SMALL_STATE(34)] = 497,
  [SMALL_STATE(35)] = 508,
  [SMALL_STATE(36)] = 517,
  [SMALL_STATE(37)] = 524,
  [SMALL_STATE(38)] = 535,
  [SMALL_STATE(39)] = 546,
  [SMALL_STATE(40)] = 557,
  [SMALL_STATE(41)] = 564,
  [SMALL_STATE(42)] = 575,
  [SMALL_STATE(43)] = 584,
  [SMALL_STATE(44)] = 594,
  [SMALL_STATE(45)] = 601,
  [SMALL_STATE(46)] = 606,
  [SMALL_STATE(47)] = 613,
  [SMALL_STATE(48)] = 618,
  [SMALL_STATE(49)] = 623,
  [SMALL_STATE(50)] = 628,
  [SMALL_STATE(51)] = 633,
  [SMALL_STATE(52)] = 640,
  [SMALL_STATE(53)] = 647,
  [SMALL_STATE(54)] = 654,
  [SMALL_STATE(55)] = 661,
  [SMALL_STATE(56)] = 668,
  [SMALL_STATE(57)] = 672,
  [SMALL_STATE(58)] = 676,
  [SMALL_STATE(59)] = 680,
  [SMALL_STATE(60)] = 684,
  [SMALL_STATE(61)] = 688,
  [SMALL_STATE(62)] = 692,
  [SMALL_STATE(63)] = 696,
  [SMALL_STATE(64)] = 700,
  [SMALL_STATE(65)] = 704,
  [SMALL_STATE(66)] = 708,
  [SMALL_STATE(67)] = 712,
  [SMALL_STATE(68)] = 716,
  [SMALL_STATE(69)] = 720,
  [SMALL_STATE(70)] = 724,
  [SMALL_STATE(71)] = 728,
  [SMALL_STATE(72)] = 732,
  [SMALL_STATE(73)] = 736,
  [SMALL_STATE(74)] = 740,
  [SMALL_STATE(75)] = 744,
  [SMALL_STATE(76)] = 748,
  [SMALL_STATE(77)] = 752,
  [SMALL_STATE(78)] = 756,
  [SMALL_STATE(79)] = 760,
  [SMALL_STATE(80)] = 764,
  [SMALL_STATE(81)] = 768,
  [SMALL_STATE(82)] = 772,
  [SMALL_STATE(83)] = 776,
  [SMALL_STATE(84)] = 780,
  [SMALL_STATE(85)] = 784,
  [SMALL_STATE(86)] = 788,
  [SMALL_STATE(87)] = 792,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_value, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_hex_val, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2), SHIFT_REPEAT(77),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(36),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(74),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(42),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_access, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 6),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(86),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_args_size, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stack, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_locals, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
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
