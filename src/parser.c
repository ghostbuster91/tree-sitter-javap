#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  sym_comment = 37,
  sym_source_file = 38,
  sym_method_def = 39,
  sym_method_access = 40,
  sym_class_definition = 41,
  sym_code_def = 42,
  sym_code_info = 43,
  sym_line_number_table_def = 44,
  sym_numered_line = 45,
  sym_numered_instruction = 46,
  sym_instruction = 47,
  sym_code_info_stack = 48,
  sym_code_info_locals = 49,
  sym_code_info_args_size = 50,
  sym_descriptor_def = 51,
  sym_flag_def = 52,
  sym_flag_value = 53,
  sym_wrapped_hex_val = 54,
  sym_method_args = 55,
  sym_type = 56,
  sym_block = 57,
  sym_source_file_def = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_method_def_repeat1 = 60,
  aux_sym_class_definition_repeat1 = 61,
  aux_sym_code_info_repeat1 = 62,
  aux_sym_line_number_table_def_repeat1 = 63,
  aux_sym_flag_def_repeat1 = 64,
  aux_sym_method_args_repeat1 = 65,
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
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 42,
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
  [88] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(142);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(191);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == 'L') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 'v') ADVANCE(106);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '}') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(193);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(184);
      if (lookahead == 'v') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'L') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(197);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(184);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 'v') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(150);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(165);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(162);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(152);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(149);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(161);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(166);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(167);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'F') ADVANCE(83);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(175);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 134:
      if (lookahead == 'v') ADVANCE(45);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 136:
      if (lookahead == 'x') ADVANCE(140);
      END_STATE();
    case 137:
      if (lookahead == 'z') ADVANCE(69);
      END_STATE();
    case 138:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 139:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 141:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_aload_0);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_invokespecial);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_stack_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_locals_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_args_size_EQ);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ACC_PUBLIC);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ACC_STATIC);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 't') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 't') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
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
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 138},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 138},
  [70] = {.lex_state = 138},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 139},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 138},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym_block] = STATE(33),
    [sym_source_file_def] = STATE(60),
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
    STATE(11), 1,
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
    STATE(17), 1,
      sym_code_def,
    STATE(32), 1,
      sym_method_access,
    STATE(18), 2,
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
    STATE(23), 1,
      sym_code_def,
    STATE(32), 1,
      sym_method_access,
    STATE(25), 2,
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
    STATE(17), 1,
      sym_code_def,
    STATE(32), 1,
      sym_method_access,
    STATE(18), 2,
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
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(10), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(34), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [180] = 4,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [196] = 3,
    ACTIONS(41), 1,
      anon_sym_line,
    STATE(15), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(39), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [210] = 1,
    ACTIONS(43), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_ACC_PUBLIC,
      anon_sym_ACC_STATIC,
      anon_sym_RBRACE,
  [220] = 4,
    ACTIONS(45), 1,
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
  [236] = 3,
    ACTIONS(49), 1,
      anon_sym_line,
    STATE(15), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(47), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [250] = 3,
    ACTIONS(41), 1,
      anon_sym_line,
    STATE(12), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(52), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [264] = 4,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_method_access,
    STATE(25), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(7), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [280] = 4,
    ACTIONS(28), 1,
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
  [296] = 3,
    ACTIONS(11), 1,
      anon_sym_descriptor_COLON,
    STATE(27), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(54), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [310] = 3,
    ACTIONS(58), 1,
      anon_sym_descriptor_COLON,
    STATE(20), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(56), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [324] = 3,
    ACTIONS(11), 1,
      anon_sym_descriptor_COLON,
    STATE(20), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(61), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [338] = 3,
    ACTIONS(11), 1,
      anon_sym_descriptor_COLON,
    STATE(21), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(63), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [352] = 4,
    ACTIONS(65), 1,
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
  [368] = 4,
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
  [384] = 4,
    ACTIONS(65), 1,
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
  [400] = 1,
    ACTIONS(67), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_descriptor_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [410] = 3,
    ACTIONS(11), 1,
      anon_sym_descriptor_COLON,
    STATE(20), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(63), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
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
    STATE(69), 1,
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
    STATE(87), 1,
      sym_source_file_def,
    STATE(41), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [497] = 2,
    STATE(77), 1,
      sym_type,
    ACTIONS(84), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [506] = 3,
    ACTIONS(86), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(88), 1,
      sym_number,
    STATE(38), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [517] = 1,
    ACTIONS(90), 4,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_type_token1,
  [524] = 3,
    ACTIONS(94), 1,
      anon_sym_invokespecial,
    STATE(45), 1,
      sym_instruction,
    ACTIONS(92), 2,
      anon_sym_aload_0,
      anon_sym_return,
  [535] = 3,
    ACTIONS(88), 1,
      sym_number,
    ACTIONS(96), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(39), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [546] = 3,
    ACTIONS(98), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(100), 1,
      sym_number,
    STATE(39), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [557] = 1,
    ACTIONS(103), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [564] = 3,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(41), 2,
      sym_block,
      aux_sym_source_file_repeat1,
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
    STATE(74), 1,
      sym_code_info_stack,
  [594] = 1,
    ACTIONS(116), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [600] = 2,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [608] = 1,
    ACTIONS(122), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [614] = 2,
    ACTIONS(124), 1,
      anon_sym_public,
    STATE(86), 1,
      sym_class_definition,
  [621] = 2,
    ACTIONS(126), 1,
      anon_sym_locals_EQ,
    STATE(79), 1,
      sym_code_info_locals,
  [628] = 1,
    ACTIONS(128), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [633] = 1,
    ACTIONS(130), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [638] = 2,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_wrapped_hex_val,
  [645] = 2,
    ACTIONS(134), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(40), 1,
      sym_line_number_table_def,
  [652] = 1,
    ACTIONS(136), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [657] = 2,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_method_args,
  [664] = 2,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_method_args,
  [671] = 2,
    ACTIONS(140), 1,
      anon_sym_args_size_EQ,
    STATE(35), 1,
      sym_code_info_args_size,
  [678] = 1,
    ACTIONS(142), 1,
      sym_number,
  [682] = 1,
    ACTIONS(144), 1,
      sym_identifier,
  [686] = 1,
    ACTIONS(146), 1,
      anon_sym_SEMI,
  [690] = 1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
  [694] = 1,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [698] = 1,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
  [702] = 1,
    ACTIONS(154), 1,
      anon_sym_COMMA,
  [706] = 1,
    ACTIONS(156), 1,
      anon_sym_SEMI,
  [710] = 1,
    ACTIONS(158), 1,
      anon_sym_SEMI,
  [714] = 1,
    ACTIONS(160), 1,
      anon_sym_COMMA,
  [718] = 1,
    ACTIONS(162), 1,
      sym_number,
  [722] = 1,
    ACTIONS(164), 1,
      sym_number,
  [726] = 1,
    ACTIONS(166), 1,
      sym_identifier,
  [730] = 1,
    ACTIONS(110), 1,
      sym_identifier,
  [734] = 1,
    ACTIONS(168), 1,
      anon_sym_SEMI,
  [738] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [742] = 1,
    ACTIONS(172), 1,
      sym_hex_value,
  [746] = 1,
    ACTIONS(174), 1,
      anon_sym_COMMA,
  [750] = 1,
    ACTIONS(176), 1,
      aux_sym_source_file_def_token1,
  [754] = 1,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [758] = 1,
    ACTIONS(180), 1,
      sym_identifier,
  [762] = 1,
    ACTIONS(182), 1,
      sym_number,
  [766] = 1,
    ACTIONS(184), 1,
      anon_sym_COMMA,
  [770] = 1,
    ACTIONS(186), 1,
      sym_descriptor_value,
  [774] = 1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [778] = 1,
    ACTIONS(190), 1,
      sym_number,
  [782] = 1,
    ACTIONS(192), 1,
      anon_sym_POUND,
  [786] = 1,
    ACTIONS(194), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [790] = 1,
    ACTIONS(196), 1,
      sym_number,
  [794] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [798] = 1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [802] = 1,
    ACTIONS(202), 1,
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
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 220,
  [SMALL_STATE(15)] = 236,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 296,
  [SMALL_STATE(20)] = 310,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 384,
  [SMALL_STATE(26)] = 400,
  [SMALL_STATE(27)] = 410,
  [SMALL_STATE(28)] = 424,
  [SMALL_STATE(29)] = 437,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 463,
  [SMALL_STATE(32)] = 471,
  [SMALL_STATE(33)] = 483,
  [SMALL_STATE(34)] = 497,
  [SMALL_STATE(35)] = 506,
  [SMALL_STATE(36)] = 517,
  [SMALL_STATE(37)] = 524,
  [SMALL_STATE(38)] = 535,
  [SMALL_STATE(39)] = 546,
  [SMALL_STATE(40)] = 557,
  [SMALL_STATE(41)] = 564,
  [SMALL_STATE(42)] = 575,
  [SMALL_STATE(43)] = 584,
  [SMALL_STATE(44)] = 594,
  [SMALL_STATE(45)] = 600,
  [SMALL_STATE(46)] = 608,
  [SMALL_STATE(47)] = 614,
  [SMALL_STATE(48)] = 621,
  [SMALL_STATE(49)] = 628,
  [SMALL_STATE(50)] = 633,
  [SMALL_STATE(51)] = 638,
  [SMALL_STATE(52)] = 645,
  [SMALL_STATE(53)] = 652,
  [SMALL_STATE(54)] = 657,
  [SMALL_STATE(55)] = 664,
  [SMALL_STATE(56)] = 671,
  [SMALL_STATE(57)] = 678,
  [SMALL_STATE(58)] = 682,
  [SMALL_STATE(59)] = 686,
  [SMALL_STATE(60)] = 690,
  [SMALL_STATE(61)] = 694,
  [SMALL_STATE(62)] = 698,
  [SMALL_STATE(63)] = 702,
  [SMALL_STATE(64)] = 706,
  [SMALL_STATE(65)] = 710,
  [SMALL_STATE(66)] = 714,
  [SMALL_STATE(67)] = 718,
  [SMALL_STATE(68)] = 722,
  [SMALL_STATE(69)] = 726,
  [SMALL_STATE(70)] = 730,
  [SMALL_STATE(71)] = 734,
  [SMALL_STATE(72)] = 738,
  [SMALL_STATE(73)] = 742,
  [SMALL_STATE(74)] = 746,
  [SMALL_STATE(75)] = 750,
  [SMALL_STATE(76)] = 754,
  [SMALL_STATE(77)] = 758,
  [SMALL_STATE(78)] = 762,
  [SMALL_STATE(79)] = 766,
  [SMALL_STATE(80)] = 770,
  [SMALL_STATE(81)] = 774,
  [SMALL_STATE(82)] = 778,
  [SMALL_STATE(83)] = 782,
  [SMALL_STATE(84)] = 786,
  [SMALL_STATE(85)] = 790,
  [SMALL_STATE(86)] = 794,
  [SMALL_STATE(87)] = 798,
  [SMALL_STATE(88)] = 802,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
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
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(36),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_hex_val, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(68),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2), SHIFT_REPEAT(80),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(42),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_access, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(76),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_args_size, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_locals, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stack, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
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
