#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
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
  aux_sym_general_info_last_mod_token1 = 45,
  sym_md5 = 46,
  anon_sym_MD5checksum = 47,
  anon_sym_Compiledfrom = 48,
  aux_sym_general_info_compile_token1 = 49,
  anon_sym_Classfile = 50,
  sym_source_file = 51,
  sym_method_def = 52,
  sym_method_access = 53,
  sym_class_definition = 54,
  sym_code_def = 55,
  sym_code_info = 56,
  sym_line_number_table_def = 57,
  sym_numered_line = 58,
  sym_numered_instruction = 59,
  sym_instruction = 60,
  sym_code_info_stack = 61,
  sym_code_info_locals = 62,
  sym_code_info_args_size = 63,
  sym_descriptor_def = 64,
  sym_flag_def = 65,
  sym_flag_value = 66,
  sym_wrapped_hex_val = 67,
  sym_method_args = 68,
  sym_simpleType = 69,
  sym__type = 70,
  sym_arrayType = 71,
  sym_block = 72,
  sym_source_file_def = 73,
  sym_class_info_def = 74,
  sym_class_info_item = 75,
  sym_class_info_item_simple = 76,
  sym_general_info_last_mod = 77,
  sym_general_info_md5 = 78,
  sym_general_info_compile = 79,
  sym_general_info = 80,
  sym_header = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_method_def_repeat1 = 83,
  aux_sym_class_definition_repeat1 = 84,
  aux_sym_code_info_repeat1 = 85,
  aux_sym_line_number_table_def_repeat1 = 86,
  aux_sym_flag_def_repeat1 = 87,
  aux_sym_method_args_repeat1 = 88,
  aux_sym_class_info_def_repeat1 = 89,
  aux_sym_class_info_item_simple_repeat1 = 90,
  aux_sym_general_info_last_mod_repeat1 = 91,
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
  [aux_sym_general_info_last_mod_token1] = "general_info_last_mod_token1",
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
  [sym_general_info_last_mod] = "general_info_last_mod",
  [sym_general_info_md5] = "general_info_md5",
  [sym_general_info_compile] = "general_info_compile",
  [sym_general_info] = "general_info",
  [sym_header] = "header",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_method_def_repeat1] = "method_def_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
  [aux_sym_method_args_repeat1] = "method_args_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_general_info_last_mod_repeat1] = "general_info_last_mod_repeat1",
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
  [aux_sym_general_info_last_mod_token1] = aux_sym_general_info_last_mod_token1,
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
  [sym_general_info_last_mod] = sym_general_info_last_mod,
  [sym_general_info_md5] = sym_general_info_md5,
  [sym_general_info_compile] = sym_general_info_compile,
  [sym_general_info] = sym_general_info,
  [sym_header] = sym_header,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_method_def_repeat1] = aux_sym_method_def_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
  [aux_sym_method_args_repeat1] = aux_sym_method_args_repeat1,
  [aux_sym_class_info_def_repeat1] = aux_sym_class_info_def_repeat1,
  [aux_sym_class_info_item_simple_repeat1] = aux_sym_class_info_item_simple_repeat1,
  [aux_sym_general_info_last_mod_repeat1] = aux_sym_general_info_last_mod_repeat1,
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
  [aux_sym_general_info_last_mod_token1] = {
    .visible = false,
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
  [sym_general_info_last_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_general_info_md5] = {
    .visible = true,
    .named = true,
  },
  [sym_general_info_compile] = {
    .visible = true,
    .named = true,
  },
  [sym_general_info] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
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
  [aux_sym_general_info_last_mod_repeat1] = {
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
  [35] = 15,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 23,
  [40] = 32,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 38,
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
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 80,
  [81] = 46,
  [82] = 82,
  [83] = 48,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 73,
  [94] = 92,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
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
  [124] = 124,
  [125] = 125,
  [126] = 56,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(251);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == ')') ADVANCE(276);
      if (lookahead == ',') ADVANCE(259);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(298);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '=') ADVANCE(344);
      if (lookahead == 'C') ADVANCE(286);
      if (lookahead == 'L') ADVANCE(282);
      if (lookahead == 'M') ADVANCE(281);
      if (lookahead == 'S') ADVANCE(291);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'b') ADVANCE(294);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 'v') ADVANCE(292);
      if (lookahead == '{') ADVANCE(302);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(248);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(336);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ',') ADVANCE(259);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'C') ADVANCE(134);
      if (lookahead == 'L') ADVANCE(56);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '{') ADVANCE(302);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == ')') ADVANCE(276);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(293);
      if (lookahead == 'v') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == ',') ADVANCE(259);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'S') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == '{') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(341);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(263);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(206);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(258);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(273);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(273);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(270);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(342);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(260);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(347);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 40:
      if (lookahead == ';') ADVANCE(257);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(268);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 46:
      if (lookahead == 'F') ADVANCE(123);
      END_STATE();
    case 47:
      if (lookahead == 'M') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(201);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(301);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(188);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(293);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 'v') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 131:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 132:
      if (lookahead == 'k') ADVANCE(109);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(189);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(359);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 204:
      if (lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 205:
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 206:
      if (lookahead == 'x') ADVANCE(245);
      END_STATE();
    case 207:
      if (lookahead == 'z') ADVANCE(102);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(208)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 209:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(209)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 210:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(210)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 211:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(211)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 212:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 249:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 250:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_aload_0);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_invokespecial);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_stack_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_locals_EQ);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_args_size_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_flag_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'x') ADVANCE(245);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_hash_with_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '/') ADVANCE(249);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'c') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'h') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'k') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 's') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'u') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_general_info_compile_token1);
      if (lookahead == '"') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 70},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 47},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 47},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 47},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 208},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 208},
  [93] = {.lex_state = 208},
  [94] = {.lex_state = 208},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 209},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 210},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 208},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 211},
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
    [sym_source_file] = STATE(132),
    [sym_general_info] = STATE(85),
    [sym_header] = STATE(49),
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
    STATE(17), 1,
      sym_code_def,
    STATE(21), 1,
      sym_method_access,
    STATE(27), 2,
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
    STATE(21), 1,
      sym_method_access,
    STATE(31), 1,
      sym_code_def,
    STATE(30), 2,
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
    STATE(21), 1,
      sym_method_access,
    STATE(31), 1,
      sym_code_def,
    STATE(30), 2,
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
    STATE(12), 1,
      sym_code_def,
    STATE(21), 1,
      sym_method_access,
    STATE(28), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [106] = 6,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 1,
      aux_sym__type_token1,
    STATE(10), 1,
      aux_sym_method_args_repeat1,
    STATE(52), 1,
      sym_simpleType,
    ACTIONS(21), 2,
      anon_sym_bool,
      anon_sym_void,
    STATE(48), 2,
      sym__type,
      sym_arrayType,
  [127] = 5,
    ACTIONS(25), 1,
      anon_sym_flags_COLON,
    ACTIONS(30), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(28), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(7), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(55), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [146] = 5,
    ACTIONS(33), 1,
      anon_sym_flags_COLON,
    ACTIONS(37), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(35), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(7), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(55), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [165] = 5,
    ACTIONS(33), 1,
      anon_sym_flags_COLON,
    ACTIONS(37), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(39), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(8), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(55), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [184] = 6,
    ACTIONS(23), 1,
      aux_sym__type_token1,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_method_args_repeat1,
    STATE(52), 1,
      sym_simpleType,
    ACTIONS(21), 2,
      anon_sym_bool,
      anon_sym_void,
    STATE(48), 2,
      sym__type,
      sym_arrayType,
  [205] = 6,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(48), 1,
      aux_sym__type_token1,
    STATE(11), 1,
      aux_sym_method_args_repeat1,
    STATE(52), 1,
      sym_simpleType,
    ACTIONS(45), 2,
      anon_sym_bool,
      anon_sym_void,
    STATE(48), 2,
      sym__type,
      sym_arrayType,
  [226] = 4,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_method_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [242] = 3,
    ACTIONS(55), 1,
      anon_sym_line,
    STATE(13), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(53), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [256] = 3,
    ACTIONS(60), 1,
      anon_sym_descriptor_COLON,
    STATE(14), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(58), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [270] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(63), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [284] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(14), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(68), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [298] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_method_access,
    STATE(30), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [314] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(14), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(70), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [328] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(16), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(70), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [342] = 3,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    STATE(18), 2,
      sym_descriptor_def,
      aux_sym_method_def_repeat1,
    ACTIONS(72), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [356] = 5,
    ACTIONS(74), 1,
      sym_mod_static,
    ACTIONS(78), 1,
      aux_sym__type_token1,
    STATE(87), 1,
      sym_simpleType,
    ACTIONS(76), 2,
      anon_sym_bool,
      anon_sym_void,
    STATE(83), 2,
      sym__type,
      sym_arrayType,
  [374] = 1,
    ACTIONS(80), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_descriptor_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [384] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(82), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [398] = 4,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_method_access,
    STATE(33), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [414] = 3,
    ACTIONS(90), 1,
      anon_sym_line,
    STATE(13), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(88), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [428] = 5,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(42), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(94), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [446] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_method_access,
    STATE(33), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [462] = 4,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_method_access,
    STATE(33), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [478] = 3,
    ACTIONS(90), 1,
      anon_sym_line,
    STATE(25), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(100), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [492] = 4,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_method_access,
    STATE(33), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [508] = 4,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_method_access,
    STATE(28), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [524] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(102), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [538] = 4,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_method_access,
    STATE(33), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(104), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [554] = 4,
    ACTIONS(78), 1,
      aux_sym__type_token1,
    STATE(72), 1,
      sym_simpleType,
    ACTIONS(76), 2,
      anon_sym_bool,
      anon_sym_void,
    STATE(83), 2,
      sym__type,
      sym_arrayType,
  [569] = 4,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(35), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(63), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [584] = 4,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(36), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(117), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [599] = 3,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(121), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [612] = 1,
    ACTIONS(127), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [621] = 4,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(40), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(82), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [636] = 4,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(35), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(102), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [651] = 4,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(43), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(135), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [666] = 4,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(36), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(135), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [681] = 4,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(36), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(139), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [696] = 1,
    ACTIONS(63), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [705] = 4,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(102), 1,
      sym_source_file_def,
    STATE(53), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [719] = 2,
    ACTIONS(149), 1,
      aux_sym__type_token1,
    ACTIONS(147), 4,
      anon_sym_RPAREN,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_LBRACK_RBRACK,
  [729] = 2,
    ACTIONS(112), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(63), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [739] = 2,
    ACTIONS(153), 1,
      aux_sym__type_token1,
    ACTIONS(151), 4,
      anon_sym_RPAREN,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_LBRACK_RBRACK,
  [749] = 3,
    STATE(45), 1,
      sym_class_info_def,
    STATE(125), 1,
      sym_method_access,
    ACTIONS(155), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [761] = 2,
    ACTIONS(157), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(127), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [771] = 2,
    ACTIONS(161), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(159), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [781] = 3,
    ACTIONS(165), 1,
      aux_sym__type_token1,
    ACTIONS(167), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(163), 3,
      anon_sym_RPAREN,
      anon_sym_bool,
      anon_sym_void,
  [793] = 4,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(118), 1,
      sym_source_file_def,
    STATE(61), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [807] = 1,
    ACTIONS(169), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [815] = 2,
    ACTIONS(173), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(171), 3,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [824] = 2,
    ACTIONS(177), 1,
      aux_sym__type_token1,
    ACTIONS(175), 3,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
  [833] = 3,
    ACTIONS(179), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(181), 1,
      sym_number,
    STATE(58), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [844] = 3,
    ACTIONS(181), 1,
      sym_number,
    ACTIONS(183), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(60), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat1,
  [855] = 3,
    ACTIONS(187), 1,
      anon_sym_invokespecial,
    STATE(69), 1,
      sym_instruction,
    ACTIONS(185), 2,
      anon_sym_aload_0,
      anon_sym_return,
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
      aux_sym_general_info_last_mod_token1,
    ACTIONS(203), 1,
      anon_sym_MD5checksum,
    STATE(65), 1,
      aux_sym_general_info_last_mod_repeat1,
  [905] = 1,
    ACTIONS(205), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [911] = 3,
    ACTIONS(207), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(210), 1,
      anon_sym_MD5checksum,
    STATE(65), 1,
      aux_sym_general_info_last_mod_repeat1,
  [921] = 1,
    ACTIONS(212), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [927] = 3,
    ACTIONS(214), 1,
      anon_sym_stack_EQ,
    STATE(95), 1,
      sym_code_info,
    STATE(128), 1,
      sym_code_info_stack,
  [937] = 3,
    ACTIONS(216), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(218), 1,
      anon_sym_MD5checksum,
    STATE(63), 1,
      aux_sym_general_info_last_mod_repeat1,
  [947] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [955] = 1,
    ACTIONS(224), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [961] = 1,
    ACTIONS(226), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [967] = 2,
    ACTIONS(228), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(230), 1,
      sym_identifier,
  [974] = 2,
    ACTIONS(232), 1,
      aux_sym_flag_value_token1,
    STATE(47), 1,
      sym_flag_value,
  [981] = 1,
    ACTIONS(234), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [986] = 1,
    ACTIONS(236), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [991] = 1,
    ACTIONS(238), 2,
      sym_number,
      sym_hash_with_number,
  [996] = 2,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_wrapped_hex_val,
  [1003] = 2,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_wrapped_hex_val,
  [1010] = 2,
    ACTIONS(242), 1,
      anon_sym_locals_EQ,
    STATE(111), 1,
      sym_code_info_locals,
  [1017] = 1,
    ACTIONS(244), 2,
      sym_number,
      sym_hash_with_number,
  [1022] = 1,
    ACTIONS(147), 2,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1027] = 2,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_method_args,
  [1034] = 1,
    ACTIONS(151), 2,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1039] = 2,
    ACTIONS(248), 1,
      anon_sym_MD5checksum,
    STATE(89), 1,
      sym_general_info_md5,
  [1046] = 2,
    ACTIONS(250), 1,
      anon_sym_Lastmodified,
    STATE(84), 1,
      sym_general_info_last_mod,
  [1053] = 2,
    ACTIONS(252), 1,
      anon_sym_args_size_EQ,
    STATE(57), 1,
      sym_code_info_args_size,
  [1060] = 2,
    ACTIONS(228), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(254), 1,
      sym_identifier,
  [1067] = 1,
    ACTIONS(256), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1072] = 2,
    ACTIONS(258), 1,
      anon_sym_Compiledfrom,
    STATE(66), 1,
      sym_general_info_compile,
  [1079] = 2,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_method_args,
  [1086] = 2,
    ACTIONS(260), 1,
      anon_sym_public,
    STATE(115), 1,
      sym_class_definition,
  [1093] = 2,
    ACTIONS(262), 1,
      aux_sym_flag_value_token1,
    STATE(23), 1,
      sym_flag_value,
  [1100] = 2,
    ACTIONS(262), 1,
      aux_sym_flag_value_token1,
    STATE(44), 1,
      sym_flag_value,
  [1107] = 2,
    ACTIONS(232), 1,
      aux_sym_flag_value_token1,
    STATE(39), 1,
      sym_flag_value,
  [1114] = 2,
    ACTIONS(264), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(62), 1,
      sym_line_number_table_def,
  [1121] = 1,
    ACTIONS(266), 1,
      anon_sym_COLON,
  [1125] = 1,
    ACTIONS(268), 1,
      anon_sym_COMMA,
  [1129] = 1,
    ACTIONS(270), 1,
      anon_sym_SEMI,
  [1133] = 1,
    ACTIONS(272), 1,
      anon_sym_SEMI,
  [1137] = 1,
    ACTIONS(274), 1,
      anon_sym_Compiledfrom,
  [1141] = 1,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
  [1145] = 1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
  [1149] = 1,
    ACTIONS(280), 1,
      sym_number,
  [1153] = 1,
    ACTIONS(282), 1,
      sym_number,
  [1157] = 1,
    ACTIONS(284), 1,
      aux_sym_general_info_compile_token1,
  [1161] = 1,
    ACTIONS(286), 1,
      aux_sym_source_file_def_token1,
  [1165] = 1,
    ACTIONS(288), 1,
      anon_sym_SEMI,
  [1169] = 1,
    ACTIONS(290), 1,
      anon_sym_SEMI,
  [1173] = 1,
    ACTIONS(292), 1,
      sym_identifier,
  [1177] = 1,
    ACTIONS(294), 1,
      sym_identifier,
  [1181] = 1,
    ACTIONS(296), 1,
      anon_sym_COMMA,
  [1185] = 1,
    ACTIONS(298), 1,
      anon_sym_COLON,
  [1189] = 1,
    ACTIONS(300), 1,
      sym_number,
  [1193] = 1,
    ACTIONS(302), 1,
      sym_md5,
  [1197] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
  [1201] = 1,
    ACTIONS(306), 1,
      sym_number,
  [1205] = 1,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
  [1209] = 1,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
  [1213] = 1,
    ACTIONS(312), 1,
      anon_sym_POUND,
  [1217] = 1,
    ACTIONS(314), 1,
      anon_sym_COMMA,
  [1221] = 1,
    ACTIONS(316), 1,
      sym_number,
  [1225] = 1,
    ACTIONS(318), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1229] = 1,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
  [1233] = 1,
    ACTIONS(322), 1,
      sym_hex_value,
  [1237] = 1,
    ACTIONS(324), 1,
      sym_class_keyword,
  [1241] = 1,
    ACTIONS(175), 1,
      sym_class_keyword,
  [1245] = 1,
    ACTIONS(326), 1,
      sym_file_path,
  [1249] = 1,
    ACTIONS(328), 1,
      anon_sym_COMMA,
  [1253] = 1,
    ACTIONS(330), 1,
      sym_number,
  [1257] = 1,
    ACTIONS(332), 1,
      anon_sym_Lastmodified,
  [1261] = 1,
    ACTIONS(334), 1,
      aux_sym_flag_value_token1,
  [1265] = 1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
  [1269] = 1,
    ACTIONS(338), 1,
      sym_descriptor_value,
  [1273] = 1,
    ACTIONS(340), 1,
      aux_sym_class_info_item_simple_token1,
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
  [SMALL_STATE(13)] = 242,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 270,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 298,
  [SMALL_STATE(18)] = 314,
  [SMALL_STATE(19)] = 328,
  [SMALL_STATE(20)] = 342,
  [SMALL_STATE(21)] = 356,
  [SMALL_STATE(22)] = 374,
  [SMALL_STATE(23)] = 384,
  [SMALL_STATE(24)] = 398,
  [SMALL_STATE(25)] = 414,
  [SMALL_STATE(26)] = 428,
  [SMALL_STATE(27)] = 446,
  [SMALL_STATE(28)] = 462,
  [SMALL_STATE(29)] = 478,
  [SMALL_STATE(30)] = 492,
  [SMALL_STATE(31)] = 508,
  [SMALL_STATE(32)] = 524,
  [SMALL_STATE(33)] = 538,
  [SMALL_STATE(34)] = 554,
  [SMALL_STATE(35)] = 569,
  [SMALL_STATE(36)] = 584,
  [SMALL_STATE(37)] = 599,
  [SMALL_STATE(38)] = 612,
  [SMALL_STATE(39)] = 621,
  [SMALL_STATE(40)] = 636,
  [SMALL_STATE(41)] = 651,
  [SMALL_STATE(42)] = 666,
  [SMALL_STATE(43)] = 681,
  [SMALL_STATE(44)] = 696,
  [SMALL_STATE(45)] = 705,
  [SMALL_STATE(46)] = 719,
  [SMALL_STATE(47)] = 729,
  [SMALL_STATE(48)] = 739,
  [SMALL_STATE(49)] = 749,
  [SMALL_STATE(50)] = 761,
  [SMALL_STATE(51)] = 771,
  [SMALL_STATE(52)] = 781,
  [SMALL_STATE(53)] = 793,
  [SMALL_STATE(54)] = 807,
  [SMALL_STATE(55)] = 815,
  [SMALL_STATE(56)] = 824,
  [SMALL_STATE(57)] = 833,
  [SMALL_STATE(58)] = 844,
  [SMALL_STATE(59)] = 855,
  [SMALL_STATE(60)] = 866,
  [SMALL_STATE(61)] = 877,
  [SMALL_STATE(62)] = 888,
  [SMALL_STATE(63)] = 895,
  [SMALL_STATE(64)] = 905,
  [SMALL_STATE(65)] = 911,
  [SMALL_STATE(66)] = 921,
  [SMALL_STATE(67)] = 927,
  [SMALL_STATE(68)] = 937,
  [SMALL_STATE(69)] = 947,
  [SMALL_STATE(70)] = 955,
  [SMALL_STATE(71)] = 961,
  [SMALL_STATE(72)] = 967,
  [SMALL_STATE(73)] = 974,
  [SMALL_STATE(74)] = 981,
  [SMALL_STATE(75)] = 986,
  [SMALL_STATE(76)] = 991,
  [SMALL_STATE(77)] = 996,
  [SMALL_STATE(78)] = 1003,
  [SMALL_STATE(79)] = 1010,
  [SMALL_STATE(80)] = 1017,
  [SMALL_STATE(81)] = 1022,
  [SMALL_STATE(82)] = 1027,
  [SMALL_STATE(83)] = 1034,
  [SMALL_STATE(84)] = 1039,
  [SMALL_STATE(85)] = 1046,
  [SMALL_STATE(86)] = 1053,
  [SMALL_STATE(87)] = 1060,
  [SMALL_STATE(88)] = 1067,
  [SMALL_STATE(89)] = 1072,
  [SMALL_STATE(90)] = 1079,
  [SMALL_STATE(91)] = 1086,
  [SMALL_STATE(92)] = 1093,
  [SMALL_STATE(93)] = 1100,
  [SMALL_STATE(94)] = 1107,
  [SMALL_STATE(95)] = 1114,
  [SMALL_STATE(96)] = 1121,
  [SMALL_STATE(97)] = 1125,
  [SMALL_STATE(98)] = 1129,
  [SMALL_STATE(99)] = 1133,
  [SMALL_STATE(100)] = 1137,
  [SMALL_STATE(101)] = 1141,
  [SMALL_STATE(102)] = 1145,
  [SMALL_STATE(103)] = 1149,
  [SMALL_STATE(104)] = 1153,
  [SMALL_STATE(105)] = 1157,
  [SMALL_STATE(106)] = 1161,
  [SMALL_STATE(107)] = 1165,
  [SMALL_STATE(108)] = 1169,
  [SMALL_STATE(109)] = 1173,
  [SMALL_STATE(110)] = 1177,
  [SMALL_STATE(111)] = 1181,
  [SMALL_STATE(112)] = 1185,
  [SMALL_STATE(113)] = 1189,
  [SMALL_STATE(114)] = 1193,
  [SMALL_STATE(115)] = 1197,
  [SMALL_STATE(116)] = 1201,
  [SMALL_STATE(117)] = 1205,
  [SMALL_STATE(118)] = 1209,
  [SMALL_STATE(119)] = 1213,
  [SMALL_STATE(120)] = 1217,
  [SMALL_STATE(121)] = 1221,
  [SMALL_STATE(122)] = 1225,
  [SMALL_STATE(123)] = 1229,
  [SMALL_STATE(124)] = 1233,
  [SMALL_STATE(125)] = 1237,
  [SMALL_STATE(126)] = 1241,
  [SMALL_STATE(127)] = 1245,
  [SMALL_STATE(128)] = 1249,
  [SMALL_STATE(129)] = 1253,
  [SMALL_STATE(130)] = 1257,
  [SMALL_STATE(131)] = 1261,
  [SMALL_STATE(132)] = 1265,
  [SMALL_STATE(133)] = 1269,
  [SMALL_STATE(134)] = 1273,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(77),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(76),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(48),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(48),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(116),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_def_repeat1, 2), SHIFT_REPEAT(133),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(93),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(56),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(73),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(134),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_value, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayType, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrayType, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleType, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simpleType, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_value, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_args_repeat1, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_access, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_access, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 6),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(112),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_general_info_last_mod, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info_compile, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_general_info_last_mod_repeat1, 2), SHIFT_REPEAT(65),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_general_info_last_mod_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_general_info_last_mod, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_args_size, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_locals, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info_md5, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stack, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_hex_val, 3),
  [336] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
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
