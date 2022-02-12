#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  aux_sym_flag_value_token1 = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  sym_hex_value = 25,
  anon_sym_bool = 26,
  anon_sym_void = 27,
  aux_sym__type_token1 = 28,
  anon_sym_LBRACK_RBRACK = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  sym_identifier = 32,
  sym_number = 33,
  anon_sym_SourceFile_COLON_DQUOTE = 34,
  aux_sym_source_file_def_token1 = 35,
  anon_sym_DQUOTE = 36,
  sym_comment = 37,
  anon_sym_Constantpool_COLON = 38,
  sym_hash_with_number = 39,
  anon_sym_EQ = 40,
  sym_class_keyword = 41,
  aux_sym_class_info_item_simple_token1 = 42,
  sym_file_path = 43,
  anon_sym_Lastmodified = 44,
  sym_md5 = 45,
  anon_sym_MD5checksum = 46,
  anon_sym_Compiledfrom = 47,
  aux_sym_general_info_compile_token1 = 48,
  anon_sym_Classfile = 49,
  sym_source_file = 50,
  sym_method_def = 51,
  sym_method_access = 52,
  sym_class_definition = 53,
  sym_code_def = 54,
  sym_code_info = 55,
  sym_line_number_table_def = 56,
  sym_numered_line = 57,
  sym_numered_instruction = 58,
  sym_instruction = 59,
  sym_code_info_stack = 60,
  sym_code_info_locals = 61,
  sym_code_info_args_size = 62,
  sym_descriptor_def = 63,
  sym_flag_def = 64,
  sym_flag_value = 65,
  sym_wrapped_hex_val = 66,
  sym_method_args = 67,
  sym_simpleType = 68,
  sym__type = 69,
  sym_arrayType = 70,
  sym_block = 71,
  sym_source_file_def = 72,
  sym_class_info_def = 73,
  sym_class_info_item = 74,
  sym_class_info_item_simple = 75,
  sym_general_info = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_method_def_repeat1 = 78,
  aux_sym_class_definition_repeat1 = 79,
  aux_sym_code_info_repeat1 = 80,
  aux_sym_line_number_table_def_repeat1 = 81,
  aux_sym_flag_def_repeat1 = 82,
  aux_sym_method_args_repeat1 = 83,
  aux_sym_class_info_def_repeat1 = 84,
  aux_sym_class_info_item_simple_repeat1 = 85,
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
  [aux_sym_flag_value_token1] = "flag_value_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_hex_value] = "hex_value",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [aux_sym__type_token1] = "_type_token1",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_SourceFile_COLON_DQUOTE] = "SourceFile: \"",
  [aux_sym_source_file_def_token1] = "source_file_def_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_comment] = "comment",
  [anon_sym_Constantpool_COLON] = "Constant pool:",
  [sym_hash_with_number] = "hash_with_number",
  [anon_sym_EQ] = "=",
  [sym_class_keyword] = "class_keyword",
  [aux_sym_class_info_item_simple_token1] = "class_info_item_simple_token1",
  [sym_file_path] = "file_path",
  [anon_sym_Lastmodified] = "Last modified",
  [sym_md5] = "md5",
  [anon_sym_MD5checksum] = "MD5 checksum",
  [anon_sym_Compiledfrom] = "Compiled from",
  [aux_sym_general_info_compile_token1] = "general_info_compile_token1",
  [anon_sym_Classfile] = "Classfile",
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
  [sym_simpleType] = "simpleType",
  [sym__type] = "_type",
  [sym_arrayType] = "arrayType",
  [sym_block] = "block",
  [sym_source_file_def] = "source_file_def",
  [sym_class_info_def] = "class_info_def",
  [sym_class_info_item] = "class_info_item",
  [sym_class_info_item_simple] = "class_info_item_simple",
  [sym_general_info] = "general_info",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_method_def_repeat1] = "method_def_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
  [aux_sym_method_args_repeat1] = "method_args_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
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
  [aux_sym_flag_value_token1] = aux_sym_flag_value_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_hex_value] = sym_hex_value,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [aux_sym__type_token1] = aux_sym__type_token1,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_SourceFile_COLON_DQUOTE] = anon_sym_SourceFile_COLON_DQUOTE,
  [aux_sym_source_file_def_token1] = aux_sym_source_file_def_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_comment] = sym_comment,
  [anon_sym_Constantpool_COLON] = anon_sym_Constantpool_COLON,
  [sym_hash_with_number] = sym_hash_with_number,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_class_keyword] = sym_class_keyword,
  [aux_sym_class_info_item_simple_token1] = aux_sym_class_info_item_simple_token1,
  [sym_file_path] = sym_file_path,
  [anon_sym_Lastmodified] = anon_sym_Lastmodified,
  [sym_md5] = sym_md5,
  [anon_sym_MD5checksum] = anon_sym_MD5checksum,
  [anon_sym_Compiledfrom] = anon_sym_Compiledfrom,
  [aux_sym_general_info_compile_token1] = aux_sym_general_info_compile_token1,
  [anon_sym_Classfile] = anon_sym_Classfile,
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
  [sym_simpleType] = sym_simpleType,
  [sym__type] = sym__type,
  [sym_arrayType] = sym_arrayType,
  [sym_block] = sym_block,
  [sym_source_file_def] = sym_source_file_def,
  [sym_class_info_def] = sym_class_info_def,
  [sym_class_info_item] = sym_class_info_item,
  [sym_class_info_item_simple] = sym_class_info_item_simple,
  [sym_general_info] = sym_general_info,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_method_def_repeat1] = aux_sym_method_def_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
  [aux_sym_method_args_repeat1] = aux_sym_method_args_repeat1,
  [aux_sym_class_info_def_repeat1] = aux_sym_class_info_def_repeat1,
  [aux_sym_class_info_item_simple_repeat1] = aux_sym_class_info_item_simple_repeat1,
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
  [aux_sym_flag_value_token1] = {
    .visible = false,
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
  [aux_sym__type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
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
  [anon_sym_Constantpool_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_hash_with_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_class_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_info_item_simple_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Lastmodified] = {
    .visible = true,
    .named = false,
  },
  [sym_md5] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MD5checksum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Compiledfrom] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_general_info_compile_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Classfile] = {
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
  [sym_simpleType] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_arrayType] = {
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
  [sym_class_info_def] = {
    .visible = true,
    .named = true,
  },
  [sym_class_info_item] = {
    .visible = true,
    .named = true,
  },
  [sym_class_info_item_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_general_info] = {
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
  [aux_sym_class_info_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_info_item_simple_repeat1] = {
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
  [34] = 20,
  [35] = 33,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 31,
  [44] = 44,
  [45] = 45,
  [46] = 41,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 37,
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
  [70] = 70,
  [71] = 71,
  [72] = 49,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 75,
  [78] = 69,
  [79] = 79,
  [80] = 80,
  [81] = 74,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 45,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 58,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(209);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(257);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '=') ADVANCE(275);
      if (lookahead == 'C') ADVANCE(244);
      if (lookahead == 'L') ADVANCE(240);
      if (lookahead == 'M') ADVANCE(239);
      if (lookahead == 'S') ADVANCE(249);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 'v') ADVANCE(251);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(267);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(127);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'S') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(272);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(221);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(198);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 16:
      if (lookahead == '5') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(216);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(231);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(228);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(273);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(218);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'g') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 37:
      if (lookahead == ';') ADVANCE(215);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(225);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(226);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(227);
      END_STATE();
    case 41:
      if (lookahead == 'F') ADVANCE(116);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(193);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(260);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 'v') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 125:
      if (lookahead == 'k') ADVANCE(103);
      END_STATE();
    case 126:
      if (lookahead == 'k') ADVANCE(181);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 196:
      if (lookahead == 'v') ADVANCE(151);
      END_STATE();
    case 197:
      if (lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 198:
      if (lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 199:
      if (lookahead == 'z') ADVANCE(95);
      END_STATE();
    case 200:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(200)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 201:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(201)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 202:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(202)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 203:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(203)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_aload_0);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_invokespecial);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_stack_EQ);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_locals_EQ);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_args_size_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_flag_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'D') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_hash_with_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_file_path);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_md5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_general_info_compile_token1);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 62},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 200},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 200},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 200},
  [78] = {.lex_state = 200},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 15},
  [85] = {.lex_state = 15},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 203},
  [91] = {.lex_state = 201},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 202},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 200},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_hex_value] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [aux_sym__type_token1] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_Constantpool_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_class_keyword] = ACTIONS(1),
    [anon_sym_Lastmodified] = ACTIONS(1),
    [sym_md5] = ACTIONS(1),
    [anon_sym_MD5checksum] = ACTIONS(1),
    [anon_sym_Compiledfrom] = ACTIONS(1),
    [aux_sym_general_info_compile_token1] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(120),
    [sym_general_info] = STATE(54),
    [anon_sym_Classfile] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_descriptor_def,
    STATE(4), 1,
      sym_flag_def,
    STATE(28), 1,
      sym_method_access,
    STATE(32), 1,
      sym_code_def,
    STATE(22), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [34] = 8,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_flag_def,
    STATE(27), 1,
      sym_code_def,
    STATE(28), 1,
      sym_method_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [62] = 6,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym_code_def,
    STATE(28), 1,
      sym_method_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [84] = 6,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_code_def,
    STATE(28), 1,
      sym_method_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [106] = 6,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(24), 1,
      aux_sym__type_token1,
    STATE(6), 1,
      aux_sym_method_args_repeat1,
    STATE(50), 1,
      sym_simpleType,
    ACTIONS(21), 2,
      anon_sym_bool,
      anon_sym_void,
    STATE(45), 2,
      sym__type,
      sym_arrayType,
  [127] = 5,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    ACTIONS(31), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(29), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(9), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(57), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [146] = 5,
    ACTIONS(33), 1,
      anon_sym_flags_COLON,
    ACTIONS(38), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(36), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(8), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(57), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [165] = 5,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    ACTIONS(31), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(41), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(8), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(57), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [184] = 6,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      aux_sym__type_token1,
    STATE(11), 1,
      aux_sym_method_args_repeat1,
    STATE(50), 1,
      sym_simpleType,
    ACTIONS(45), 2,
      anon_sym_bool,
      anon_sym_void,
    STATE(45), 2,
      sym__type,
      sym_arrayType,
  [205] = 6,
    ACTIONS(47), 1,
      aux_sym__type_token1,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_method_args_repeat1,
    STATE(50), 1,
      sym_simpleType,
    ACTIONS(45), 2,
      anon_sym_bool,
      anon_sym_void,
    STATE(45), 2,
      sym__type,
      sym_arrayType,
  [226] = 3,
    ACTIONS(53), 1,
      anon_sym_line,
    STATE(16), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(51), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [240] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(24), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(55), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [254] = 3,
    ACTIONS(59), 1,
      anon_sym_line,
    STATE(14), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(57), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [268] = 4,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_method_access,
    STATE(21), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [284] = 3,
    ACTIONS(53), 1,
      anon_sym_line,
    STATE(14), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(64), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [298] = 4,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_method_access,
    STATE(15), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [314] = 4,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_method_access,
    STATE(21), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [330] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(24), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(68), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [344] = 3,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(70), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [358] = 4,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_method_access,
    STATE(21), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(75), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [374] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_method_access,
    STATE(21), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [390] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(13), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(80), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [404] = 3,
    ACTIONS(84), 1,
      anon_sym_descriptor_COLON,
    STATE(24), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(82), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [418] = 1,
    ACTIONS(87), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_descriptor_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [428] = 4,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_method_access,
    STATE(21), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [444] = 4,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_method_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [460] = 5,
    ACTIONS(89), 1,
      sym_mod_static,
    ACTIONS(93), 1,
      aux_sym__type_token1,
    STATE(84), 1,
      sym_simpleType,
    ACTIONS(91), 2,
      anon_sym_bool,
      anon_sym_void,
    STATE(85), 2,
      sym__type,
      sym_arrayType,
  [478] = 5,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(42), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(97), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [496] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(19), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(55), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [510] = 3,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(103), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [524] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_method_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [540] = 3,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(107), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [554] = 4,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(34), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(70), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [569] = 4,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(34), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(107), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [584] = 3,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(118), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [597] = 1,
    ACTIONS(70), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [606] = 4,
    ACTIONS(93), 1,
      aux_sym__type_token1,
    STATE(71), 1,
      sym_simpleType,
    ACTIONS(91), 2,
      anon_sym_bool,
      anon_sym_void,
    STATE(85), 2,
      sym__type,
      sym_arrayType,
  [621] = 4,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(39), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(127), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [636] = 4,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(39), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(131), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [651] = 1,
    ACTIONS(135), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [660] = 4,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(39), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(137), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [675] = 4,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(35), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(103), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [690] = 4,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(40), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(137), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [705] = 2,
    ACTIONS(145), 1,
      aux_sym__type_token1,
    ACTIONS(143), 4,
      anon_sym_RPAREN,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_LBRACK_RBRACK,
  [715] = 2,
    ACTIONS(147), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(135), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [725] = 2,
    ACTIONS(151), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(149), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [735] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(123), 1,
      sym_source_file_def,
    STATE(61), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [749] = 2,
    ACTIONS(159), 1,
      aux_sym__type_token1,
    ACTIONS(157), 4,
      anon_sym_RPAREN,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_LBRACK_RBRACK,
  [759] = 3,
    ACTIONS(163), 1,
      aux_sym__type_token1,
    ACTIONS(165), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(161), 3,
      anon_sym_RPAREN,
      anon_sym_bool,
      anon_sym_void,
  [771] = 2,
    ACTIONS(112), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(70), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [781] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(106), 1,
      sym_source_file_def,
    STATE(48), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [795] = 1,
    ACTIONS(167), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [803] = 3,
    STATE(52), 1,
      sym_class_info_def,
    STATE(103), 1,
      sym_method_access,
    ACTIONS(169), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [815] = 3,
    ACTIONS(173), 1,
      anon_sym_invokespecial,
    STATE(66), 1,
      sym_instruction,
    ACTIONS(171), 2,
      anon_sym_aload_0,
      anon_sym_return,
  [826] = 3,
    ACTIONS(175), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(177), 1,
      sym_number,
    STATE(60), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [837] = 2,
    ACTIONS(181), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(179), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [846] = 2,
    ACTIONS(185), 1,
      aux_sym__type_token1,
    ACTIONS(183), 3,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
  [855] = 3,
    ACTIONS(177), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(56), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [866] = 3,
    ACTIONS(189), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(191), 1,
      sym_number,
    STATE(60), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [877] = 3,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(61), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [888] = 1,
    ACTIONS(199), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [895] = 3,
    ACTIONS(201), 1,
      anon_sym_stack_EQ,
    STATE(83), 1,
      sym_code_info,
    STATE(102), 1,
      sym_code_info_stack,
  [905] = 1,
    ACTIONS(203), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [911] = 1,
    ACTIONS(205), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [917] = 2,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [925] = 1,
    ACTIONS(211), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [931] = 1,
    ACTIONS(213), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [936] = 2,
    ACTIONS(215), 1,
      aux_sym_flag_value_token1,
    STATE(51), 1,
      sym_flag_value,
  [943] = 2,
    ACTIONS(217), 1,
      anon_sym_locals_EQ,
    STATE(116), 1,
      sym_code_info_locals,
  [950] = 2,
    ACTIONS(219), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(221), 1,
      sym_identifier,
  [957] = 1,
    ACTIONS(157), 2,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [962] = 2,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_method_args,
  [969] = 2,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_wrapped_hex_val,
  [976] = 2,
    ACTIONS(227), 1,
      aux_sym_flag_value_token1,
    STATE(31), 1,
      sym_flag_value,
  [983] = 1,
    ACTIONS(229), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [988] = 2,
    ACTIONS(215), 1,
      aux_sym_flag_value_token1,
    STATE(43), 1,
      sym_flag_value,
  [995] = 2,
    ACTIONS(227), 1,
      aux_sym_flag_value_token1,
    STATE(37), 1,
      sym_flag_value,
  [1002] = 2,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_method_args,
  [1009] = 1,
    ACTIONS(231), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1014] = 2,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_wrapped_hex_val,
  [1021] = 1,
    ACTIONS(233), 2,
      sym_number,
      sym_hash_with_number,
  [1026] = 2,
    ACTIONS(235), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(62), 1,
      sym_line_number_table_def,
  [1033] = 2,
    ACTIONS(219), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(237), 1,
      sym_identifier,
  [1040] = 1,
    ACTIONS(143), 2,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1045] = 2,
    ACTIONS(239), 1,
      anon_sym_args_size_EQ,
    STATE(59), 1,
      sym_code_info_args_size,
  [1052] = 2,
    ACTIONS(241), 1,
      anon_sym_public,
    STATE(111), 1,
      sym_class_definition,
  [1059] = 1,
    ACTIONS(243), 2,
      sym_number,
      sym_hash_with_number,
  [1064] = 1,
    ACTIONS(245), 1,
      anon_sym_COLON,
  [1068] = 1,
    ACTIONS(247), 1,
      aux_sym_class_info_item_simple_token1,
  [1072] = 1,
    ACTIONS(249), 1,
      aux_sym_source_file_def_token1,
  [1076] = 1,
    ACTIONS(251), 1,
      anon_sym_COMMA,
  [1080] = 1,
    ACTIONS(253), 1,
      sym_number,
  [1084] = 1,
    ACTIONS(255), 1,
      anon_sym_SEMI,
  [1088] = 1,
    ACTIONS(257), 1,
      anon_sym_SEMI,
  [1092] = 1,
    ACTIONS(259), 1,
      anon_sym_SEMI,
  [1096] = 1,
    ACTIONS(261), 1,
      sym_identifier,
  [1100] = 1,
    ACTIONS(263), 1,
      sym_file_path,
  [1104] = 1,
    ACTIONS(265), 1,
      anon_sym_COMMA,
  [1108] = 1,
    ACTIONS(267), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1112] = 1,
    ACTIONS(269), 1,
      anon_sym_COLON,
  [1116] = 1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
  [1120] = 1,
    ACTIONS(273), 1,
      sym_class_keyword,
  [1124] = 1,
    ACTIONS(183), 1,
      sym_class_keyword,
  [1128] = 1,
    ACTIONS(275), 1,
      sym_number,
  [1132] = 1,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [1136] = 1,
    ACTIONS(279), 1,
      sym_number,
  [1140] = 1,
    ACTIONS(281), 1,
      anon_sym_POUND,
  [1144] = 1,
    ACTIONS(283), 1,
      anon_sym_SEMI,
  [1148] = 1,
    ACTIONS(285), 1,
      sym_number,
  [1152] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1156] = 1,
    ACTIONS(289), 1,
      aux_sym_flag_value_token1,
  [1160] = 1,
    ACTIONS(291), 1,
      sym_descriptor_value,
  [1164] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [1168] = 1,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
  [1172] = 1,
    ACTIONS(297), 1,
      anon_sym_COMMA,
  [1176] = 1,
    ACTIONS(299), 1,
      sym_number,
  [1180] = 1,
    ACTIONS(301), 1,
      sym_hex_value,
  [1184] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
  [1188] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [1192] = 1,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
  [1196] = 1,
    ACTIONS(309), 1,
      sym_number,
  [1200] = 1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 226,
  [SMALL_STATE(13)] = 240,
  [SMALL_STATE(14)] = 254,
  [SMALL_STATE(15)] = 268,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 298,
  [SMALL_STATE(18)] = 314,
  [SMALL_STATE(19)] = 330,
  [SMALL_STATE(20)] = 344,
  [SMALL_STATE(21)] = 358,
  [SMALL_STATE(22)] = 374,
  [SMALL_STATE(23)] = 390,
  [SMALL_STATE(24)] = 404,
  [SMALL_STATE(25)] = 418,
  [SMALL_STATE(26)] = 428,
  [SMALL_STATE(27)] = 444,
  [SMALL_STATE(28)] = 460,
  [SMALL_STATE(29)] = 478,
  [SMALL_STATE(30)] = 496,
  [SMALL_STATE(31)] = 510,
  [SMALL_STATE(32)] = 524,
  [SMALL_STATE(33)] = 540,
  [SMALL_STATE(34)] = 554,
  [SMALL_STATE(35)] = 569,
  [SMALL_STATE(36)] = 584,
  [SMALL_STATE(37)] = 597,
  [SMALL_STATE(38)] = 606,
  [SMALL_STATE(39)] = 621,
  [SMALL_STATE(40)] = 636,
  [SMALL_STATE(41)] = 651,
  [SMALL_STATE(42)] = 660,
  [SMALL_STATE(43)] = 675,
  [SMALL_STATE(44)] = 690,
  [SMALL_STATE(45)] = 705,
  [SMALL_STATE(46)] = 715,
  [SMALL_STATE(47)] = 725,
  [SMALL_STATE(48)] = 735,
  [SMALL_STATE(49)] = 749,
  [SMALL_STATE(50)] = 759,
  [SMALL_STATE(51)] = 771,
  [SMALL_STATE(52)] = 781,
  [SMALL_STATE(53)] = 795,
  [SMALL_STATE(54)] = 803,
  [SMALL_STATE(55)] = 815,
  [SMALL_STATE(56)] = 826,
  [SMALL_STATE(57)] = 837,
  [SMALL_STATE(58)] = 846,
  [SMALL_STATE(59)] = 855,
  [SMALL_STATE(60)] = 866,
  [SMALL_STATE(61)] = 877,
  [SMALL_STATE(62)] = 888,
  [SMALL_STATE(63)] = 895,
  [SMALL_STATE(64)] = 905,
  [SMALL_STATE(65)] = 911,
  [SMALL_STATE(66)] = 917,
  [SMALL_STATE(67)] = 925,
  [SMALL_STATE(68)] = 931,
  [SMALL_STATE(69)] = 936,
  [SMALL_STATE(70)] = 943,
  [SMALL_STATE(71)] = 950,
  [SMALL_STATE(72)] = 957,
  [SMALL_STATE(73)] = 962,
  [SMALL_STATE(74)] = 969,
  [SMALL_STATE(75)] = 976,
  [SMALL_STATE(76)] = 983,
  [SMALL_STATE(77)] = 988,
  [SMALL_STATE(78)] = 995,
  [SMALL_STATE(79)] = 1002,
  [SMALL_STATE(80)] = 1009,
  [SMALL_STATE(81)] = 1014,
  [SMALL_STATE(82)] = 1021,
  [SMALL_STATE(83)] = 1026,
  [SMALL_STATE(84)] = 1033,
  [SMALL_STATE(85)] = 1040,
  [SMALL_STATE(86)] = 1045,
  [SMALL_STATE(87)] = 1052,
  [SMALL_STATE(88)] = 1059,
  [SMALL_STATE(89)] = 1064,
  [SMALL_STATE(90)] = 1068,
  [SMALL_STATE(91)] = 1072,
  [SMALL_STATE(92)] = 1076,
  [SMALL_STATE(93)] = 1080,
  [SMALL_STATE(94)] = 1084,
  [SMALL_STATE(95)] = 1088,
  [SMALL_STATE(96)] = 1092,
  [SMALL_STATE(97)] = 1096,
  [SMALL_STATE(98)] = 1100,
  [SMALL_STATE(99)] = 1104,
  [SMALL_STATE(100)] = 1108,
  [SMALL_STATE(101)] = 1112,
  [SMALL_STATE(102)] = 1116,
  [SMALL_STATE(103)] = 1120,
  [SMALL_STATE(104)] = 1124,
  [SMALL_STATE(105)] = 1128,
  [SMALL_STATE(106)] = 1132,
  [SMALL_STATE(107)] = 1136,
  [SMALL_STATE(108)] = 1140,
  [SMALL_STATE(109)] = 1144,
  [SMALL_STATE(110)] = 1148,
  [SMALL_STATE(111)] = 1152,
  [SMALL_STATE(112)] = 1156,
  [SMALL_STATE(113)] = 1160,
  [SMALL_STATE(114)] = 1164,
  [SMALL_STATE(115)] = 1168,
  [SMALL_STATE(116)] = 1172,
  [SMALL_STATE(117)] = 1176,
  [SMALL_STATE(118)] = 1180,
  [SMALL_STATE(119)] = 1184,
  [SMALL_STATE(120)] = 1188,
  [SMALL_STATE(121)] = 1192,
  [SMALL_STATE(122)] = 1196,
  [SMALL_STATE(123)] = 1200,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(45),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(81),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(88),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(122),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(78),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(58),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2), SHIFT_REPEAT(113),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(69),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(90),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_value, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleType, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simpleType, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_value, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayType, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrayType, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_args_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_access, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_access, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(101),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_args_size, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stack, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_locals, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_hex_val, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
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
