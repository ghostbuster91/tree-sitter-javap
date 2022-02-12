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
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  aux_sym_code_info_stat_token1 = 16,
  anon_sym_descriptor_COLON = 17,
  sym_descriptor_value = 18,
  anon_sym_flags_COLON = 19,
  aux_sym_flag_value_token1 = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  sym_hex_value = 23,
  anon_sym_bool = 24,
  anon_sym_void = 25,
  aux_sym_simple_type_token1 = 26,
  anon_sym_LBRACK_RBRACK = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  sym_identifier = 30,
  sym_number = 31,
  anon_sym_SourceFile_COLON_DQUOTE = 32,
  aux_sym_source_file_def_token1 = 33,
  anon_sym_DQUOTE = 34,
  sym_comment = 35,
  anon_sym_Constantpool_COLON = 36,
  anon_sym_EQ = 37,
  sym_constantPoolItemValue = 38,
  sym_class_keyword = 39,
  aux_sym_class_info_item_simple_token1 = 40,
  sym_file_path = 41,
  anon_sym_Lastmodified = 42,
  aux_sym_general_info_last_mod_token1 = 43,
  sym_md5 = 44,
  anon_sym_MD5checksum = 45,
  anon_sym_Compiledfrom = 46,
  aux_sym_general_info_compile_token1 = 47,
  anon_sym_Classfile = 48,
  sym_source_file = 49,
  sym_method_def = 50,
  sym_mod_access = 51,
  sym_class_definition = 52,
  sym_code_def = 53,
  sym_code_info = 54,
  sym_line_number_table_def = 55,
  sym_numered_line = 56,
  sym_numered_instruction = 57,
  sym_instruction = 58,
  sym_code_info_stat = 59,
  sym_descriptor_def = 60,
  sym_flag_def = 61,
  sym_flag_value = 62,
  sym__wrapped_hex_val = 63,
  sym_method_args = 64,
  sym__type = 65,
  sym_simple_type = 66,
  sym_array_type = 67,
  sym_block = 68,
  sym_source_file_def = 69,
  sym_constantPoolDef = 70,
  sym_hash_with_number = 71,
  sym__constantPoolItem = 72,
  sym_constantPoolItemType = 73,
  sym_class_info_def = 74,
  sym_class_info_item = 75,
  sym_class_info_item_simple = 76,
  sym_general_info_last_mod = 77,
  sym_general_info_md5 = 78,
  sym_general_info_compile = 79,
  sym_general_info = 80,
  sym_header = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_class_definition_repeat1 = 83,
  aux_sym_code_info_repeat1 = 84,
  aux_sym_code_info_repeat2 = 85,
  aux_sym_line_number_table_def_repeat1 = 86,
  aux_sym_flag_def_repeat1 = 87,
  aux_sym_constantPoolDef_repeat1 = 88,
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
  [aux_sym_code_info_stat_token1] = "code_info_stat_token1",
  [anon_sym_descriptor_COLON] = "descriptor:",
  [sym_descriptor_value] = "descriptor_value",
  [anon_sym_flags_COLON] = "flags:",
  [aux_sym_flag_value_token1] = "flag_value_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_hex_value] = "hex_value",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [aux_sym_simple_type_token1] = "simple_type_token1",
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
  [anon_sym_EQ] = "=",
  [sym_constantPoolItemValue] = "constantPoolItemValue",
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
  [sym_mod_access] = "mod_access",
  [sym_class_definition] = "class_definition",
  [sym_code_def] = "code_def",
  [sym_code_info] = "code_info",
  [sym_line_number_table_def] = "line_number_table_def",
  [sym_numered_line] = "numered_line",
  [sym_numered_instruction] = "numered_instruction",
  [sym_instruction] = "instruction",
  [sym_code_info_stat] = "code_info_stat",
  [sym_descriptor_def] = "descriptor_def",
  [sym_flag_def] = "flag_def",
  [sym_flag_value] = "flag_value",
  [sym__wrapped_hex_val] = "_wrapped_hex_val",
  [sym_method_args] = "method_args",
  [sym__type] = "_type",
  [sym_simple_type] = "simple_type",
  [sym_array_type] = "array_type",
  [sym_block] = "block",
  [sym_source_file_def] = "source_file_def",
  [sym_constantPoolDef] = "constantPoolDef",
  [sym_hash_with_number] = "hash_with_number",
  [sym__constantPoolItem] = "_constantPoolItem",
  [sym_constantPoolItemType] = "constantPoolItemType",
  [sym_class_info_def] = "class_info_def",
  [sym_class_info_item] = "class_info_item",
  [sym_class_info_item_simple] = "class_info_item_simple",
  [sym_general_info_last_mod] = "general_info_last_mod",
  [sym_general_info_md5] = "general_info_md5",
  [sym_general_info_compile] = "general_info_compile",
  [sym_general_info] = "general_info",
  [sym_header] = "header",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_code_info_repeat2] = "code_info_repeat2",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
  [aux_sym_constantPoolDef_repeat1] = "constantPoolDef_repeat1",
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
  [aux_sym_code_info_stat_token1] = aux_sym_code_info_stat_token1,
  [anon_sym_descriptor_COLON] = anon_sym_descriptor_COLON,
  [sym_descriptor_value] = sym_descriptor_value,
  [anon_sym_flags_COLON] = anon_sym_flags_COLON,
  [aux_sym_flag_value_token1] = aux_sym_flag_value_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_hex_value] = sym_hex_value,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [aux_sym_simple_type_token1] = aux_sym_simple_type_token1,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_constantPoolItemValue] = sym_constantPoolItemValue,
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
  [sym_mod_access] = sym_mod_access,
  [sym_class_definition] = sym_class_definition,
  [sym_code_def] = sym_code_def,
  [sym_code_info] = sym_code_info,
  [sym_line_number_table_def] = sym_line_number_table_def,
  [sym_numered_line] = sym_numered_line,
  [sym_numered_instruction] = sym_numered_instruction,
  [sym_instruction] = sym_instruction,
  [sym_code_info_stat] = sym_code_info_stat,
  [sym_descriptor_def] = sym_descriptor_def,
  [sym_flag_def] = sym_flag_def,
  [sym_flag_value] = sym_flag_value,
  [sym__wrapped_hex_val] = sym__wrapped_hex_val,
  [sym_method_args] = sym_method_args,
  [sym__type] = sym__type,
  [sym_simple_type] = sym_simple_type,
  [sym_array_type] = sym_array_type,
  [sym_block] = sym_block,
  [sym_source_file_def] = sym_source_file_def,
  [sym_constantPoolDef] = sym_constantPoolDef,
  [sym_hash_with_number] = sym_hash_with_number,
  [sym__constantPoolItem] = sym__constantPoolItem,
  [sym_constantPoolItemType] = sym_constantPoolItemType,
  [sym_class_info_def] = sym_class_info_def,
  [sym_class_info_item] = sym_class_info_item,
  [sym_class_info_item_simple] = sym_class_info_item_simple,
  [sym_general_info_last_mod] = sym_general_info_last_mod,
  [sym_general_info_md5] = sym_general_info_md5,
  [sym_general_info_compile] = sym_general_info_compile,
  [sym_general_info] = sym_general_info,
  [sym_header] = sym_header,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_code_info_repeat2] = aux_sym_code_info_repeat2,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
  [aux_sym_constantPoolDef_repeat1] = aux_sym_constantPoolDef_repeat1,
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
  [aux_sym_code_info_stat_token1] = {
    .visible = false,
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
  [aux_sym_simple_type_token1] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_constantPoolItemValue] = {
    .visible = true,
    .named = true,
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
  [sym_mod_access] = {
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
  [sym_code_info_stat] = {
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
  [sym__wrapped_hex_val] = {
    .visible = false,
    .named = true,
  },
  [sym_method_args] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
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
  [sym_constantPoolDef] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_with_number] = {
    .visible = true,
    .named = true,
  },
  [sym__constantPoolItem] = {
    .visible = false,
    .named = true,
  },
  [sym_constantPoolItemType] = {
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
  [aux_sym_class_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_info_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_info_repeat2] = {
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
  [aux_sym_constantPoolDef_repeat1] = {
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
  [46] = 23,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 21,
  [52] = 52,
  [53] = 53,
  [54] = 26,
  [55] = 33,
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
  [69] = 30,
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
  [100] = 95,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 101,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 105,
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
  [119] = 64,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(236);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(248);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == 'C') ADVANCE(123);
      if (lookahead == 'L') ADVANCE(56);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(144);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == 'v') ADVANCE(146);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead == '}') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(155);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(233);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(284);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(289);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(249);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(244);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(257);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(257);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(254);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(290);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(246);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 43:
      if (lookahead == ';') ADVANCE(243);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 49:
      if (lookahead == 'F') ADVANCE(120);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 51:
      if (lookahead == 'N') ADVANCE(188);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(279);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(133);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(176);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 191:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 192:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 193:
      if (lookahead == 'x') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 194:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(194)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 195:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 196:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 197:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 198:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 234:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 235:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_aload_0);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_invokespecial);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_flag_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(43);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'c') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'l') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_constantPoolItemValue);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '/') ADVANCE(234);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'c') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'h') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'k') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 's') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'u') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_general_info_compile_token1);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_Classfile);
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
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 66},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 66},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 50},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 50},
  [85] = {.lex_state = 50},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 194},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 194},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 194},
  [105] = {.lex_state = 194},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 194},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 194},
  [133] = {.lex_state = 197},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 195},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 196},
  [140] = {.lex_state = 196},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 18},
  [144] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [sym_mod_static] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN_SEMI] = ACTIONS(1),
    [anon_sym_Code_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LineNumberTable_COLON] = ACTIONS(1),
    [anon_sym_line] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_aload_0] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_invokespecial] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_descriptor_COLON] = ACTIONS(1),
    [anon_sym_flags_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
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
    [anon_sym_MD5checksum] = ACTIONS(1),
    [anon_sym_Compiledfrom] = ACTIONS(1),
    [aux_sym_general_info_compile_token1] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(142),
    [sym_general_info] = STATE(106),
    [sym_header] = STATE(53),
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
    STATE(6), 1,
      sym_flag_def,
    STATE(24), 1,
      sym_mod_access,
    STATE(25), 1,
      sym_code_def,
    STATE(19), 2,
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
    STATE(7), 1,
      sym_flag_def,
    STATE(17), 1,
      sym_code_def,
    STATE(24), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [62] = 7,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(8), 1,
      sym_descriptor_def,
    STATE(35), 1,
      sym_flag_def,
    STATE(56), 1,
      sym_code_def,
    ACTIONS(17), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [87] = 7,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(9), 1,
      sym_descriptor_def,
    STATE(38), 1,
      sym_flag_def,
    STATE(65), 1,
      sym_code_def,
    ACTIONS(19), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [112] = 6,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_code_def,
    STATE(24), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [134] = 6,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_code_def,
    STATE(24), 1,
      sym_mod_access,
    STATE(13), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [156] = 5,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(34), 1,
      sym_flag_def,
    STATE(67), 1,
      sym_code_def,
    ACTIONS(23), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [175] = 5,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(35), 1,
      sym_flag_def,
    STATE(56), 1,
      sym_code_def,
    ACTIONS(17), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [194] = 4,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_mod_access,
    STATE(15), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [210] = 3,
    ACTIONS(29), 1,
      anon_sym_line,
    STATE(20), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(27), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [224] = 4,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_mod_access,
    STATE(10), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [240] = 4,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_mod_access,
    STATE(15), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [256] = 3,
    ACTIONS(29), 1,
      anon_sym_line,
    STATE(11), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(33), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [270] = 4,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_mod_access,
    STATE(15), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(35), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [286] = 5,
    ACTIONS(40), 1,
      anon_sym_flags_COLON,
    ACTIONS(43), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(45), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(16), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(79), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [304] = 4,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_mod_access,
    STATE(13), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [320] = 4,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_mod_access,
    STATE(15), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [336] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_mod_access,
    STATE(15), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [352] = 3,
    ACTIONS(50), 1,
      anon_sym_line,
    STATE(20), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(48), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [366] = 3,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(53), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [380] = 5,
    ACTIONS(58), 1,
      anon_sym_flags_COLON,
    ACTIONS(60), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(62), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(27), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(79), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [398] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [412] = 3,
    ACTIONS(68), 1,
      sym_mod_static,
    ACTIONS(70), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(93), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [426] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [442] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(72), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [456] = 5,
    ACTIONS(58), 1,
      anon_sym_flags_COLON,
    ACTIONS(62), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(74), 1,
      anon_sym_Constantpool_COLON,
    STATE(16), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(79), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [474] = 4,
    ACTIONS(76), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_hash_with_number,
    ACTIONS(79), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(28), 2,
      sym__constantPoolItem,
      aux_sym_constantPoolDef_repeat1,
  [489] = 2,
    ACTIONS(83), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(81), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
  [500] = 1,
    ACTIONS(53), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [509] = 1,
    ACTIONS(85), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [518] = 4,
    ACTIONS(87), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_hash_with_number,
    ACTIONS(89), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(28), 2,
      sym__constantPoolItem,
      aux_sym_constantPoolDef_repeat1,
  [533] = 1,
    ACTIONS(91), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [542] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(66), 1,
      sym_code_def,
    ACTIONS(93), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [555] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(67), 1,
      sym_code_def,
    ACTIONS(23), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [568] = 5,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(49), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(97), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [585] = 5,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(107), 1,
      sym_number,
    STATE(40), 1,
      aux_sym_code_info_repeat1,
    STATE(68), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [602] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(56), 1,
      sym_code_def,
    ACTIONS(17), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [615] = 2,
    ACTIONS(70), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(90), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [626] = 5,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(109), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(61), 1,
      aux_sym_code_info_repeat1,
    STATE(60), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [643] = 2,
    ACTIONS(70), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(96), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [654] = 4,
    ACTIONS(87), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_hash_with_number,
    ACTIONS(111), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(32), 2,
      sym__constantPoolItem,
      aux_sym_constantPoolDef_repeat1,
  [669] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(134), 1,
      sym_source_file_def,
    STATE(50), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [683] = 4,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(45), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(117), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [697] = 4,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(45), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(124), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [711] = 4,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [725] = 1,
    ACTIONS(132), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [733] = 4,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(44), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(134), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [747] = 4,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(45), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(134), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [761] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(144), 1,
      sym_source_file_def,
    STATE(59), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [775] = 4,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(51), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(53), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [789] = 3,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(143), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [801] = 3,
    STATE(97), 1,
      sym_class_info_def,
    STATE(113), 1,
      sym_mod_access,
    ACTIONS(149), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [813] = 4,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(51), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(72), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [827] = 2,
    ACTIONS(153), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(91), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [836] = 1,
    ACTIONS(23), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [843] = 1,
    ACTIONS(155), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [850] = 3,
    ACTIONS(157), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(159), 1,
      sym_number,
    STATE(58), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [861] = 3,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(59), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [872] = 3,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(167), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(58), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [883] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(172), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [894] = 3,
    ACTIONS(176), 1,
      anon_sym_invokespecial,
    STATE(72), 1,
      sym_instruction,
    ACTIONS(174), 2,
      anon_sym_aload_0,
      anon_sym_return,
  [905] = 2,
    ACTIONS(180), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(178), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [914] = 1,
    ACTIONS(182), 4,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [921] = 1,
    ACTIONS(17), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [928] = 1,
    ACTIONS(184), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [935] = 1,
    ACTIONS(93), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [942] = 3,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(109), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(58), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [953] = 2,
    ACTIONS(141), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(53), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [962] = 2,
    ACTIONS(188), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [971] = 1,
    ACTIONS(190), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [977] = 2,
    ACTIONS(194), 1,
      sym_comment,
    ACTIONS(192), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [985] = 3,
    ACTIONS(87), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      sym_number,
    STATE(52), 1,
      sym_hash_with_number,
  [995] = 1,
    ACTIONS(198), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1001] = 3,
    ACTIONS(200), 1,
      aux_sym_code_info_stat_token1,
    STATE(37), 1,
      sym_code_info_stat,
    STATE(88), 1,
      sym_code_info,
  [1011] = 1,
    ACTIONS(202), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1017] = 1,
    ACTIONS(204), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1023] = 3,
    ACTIONS(87), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      sym_number,
    STATE(36), 1,
      sym_hash_with_number,
  [1033] = 2,
    ACTIONS(210), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(208), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1041] = 3,
    ACTIONS(212), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(214), 1,
      anon_sym_MD5checksum,
    STATE(85), 1,
      aux_sym_general_info_last_mod_repeat1,
  [1051] = 1,
    ACTIONS(216), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1057] = 1,
    ACTIONS(218), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1063] = 1,
    ACTIONS(220), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1069] = 3,
    ACTIONS(222), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(225), 1,
      anon_sym_MD5checksum,
    STATE(84), 1,
      aux_sym_general_info_last_mod_repeat1,
  [1079] = 3,
    ACTIONS(227), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(229), 1,
      anon_sym_MD5checksum,
    STATE(84), 1,
      aux_sym_general_info_last_mod_repeat1,
  [1089] = 1,
    ACTIONS(231), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1095] = 1,
    ACTIONS(172), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1101] = 2,
    ACTIONS(233), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(57), 1,
      sym_line_number_table_def,
  [1108] = 2,
    ACTIONS(235), 1,
      anon_sym_MD5checksum,
    STATE(99), 1,
      sym_general_info_md5,
  [1115] = 2,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(239), 1,
      anon_sym_LBRACK_RBRACK,
  [1122] = 1,
    ACTIONS(241), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1127] = 2,
    ACTIONS(200), 1,
      aux_sym_code_info_stat_token1,
    STATE(87), 1,
      sym_code_info_stat,
  [1134] = 2,
    ACTIONS(239), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(243), 1,
      sym_identifier,
  [1141] = 2,
    ACTIONS(245), 1,
      aux_sym_flag_value_token1,
    STATE(139), 1,
      sym_constantPoolItemType,
  [1148] = 2,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym__wrapped_hex_val,
  [1155] = 2,
    ACTIONS(239), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(249), 1,
      sym_identifier,
  [1162] = 2,
    ACTIONS(251), 1,
      anon_sym_Constantpool_COLON,
    STATE(43), 1,
      sym_constantPoolDef,
  [1169] = 2,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_method_args,
  [1176] = 2,
    ACTIONS(255), 1,
      anon_sym_Compiledfrom,
    STATE(83), 1,
      sym_general_info_compile,
  [1183] = 2,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym__wrapped_hex_val,
  [1190] = 2,
    ACTIONS(257), 1,
      aux_sym_flag_value_token1,
    STATE(69), 1,
      sym_flag_value,
  [1197] = 1,
    ACTIONS(259), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1202] = 2,
    ACTIONS(261), 1,
      anon_sym_public,
    STATE(129), 1,
      sym_class_definition,
  [1209] = 2,
    ACTIONS(263), 1,
      aux_sym_flag_value_token1,
    STATE(30), 1,
      sym_flag_value,
  [1216] = 2,
    ACTIONS(257), 1,
      aux_sym_flag_value_token1,
    STATE(46), 1,
      sym_flag_value,
  [1223] = 2,
    ACTIONS(265), 1,
      anon_sym_Lastmodified,
    STATE(89), 1,
      sym_general_info_last_mod,
  [1230] = 2,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_method_args,
  [1237] = 2,
    ACTIONS(263), 1,
      aux_sym_flag_value_token1,
    STATE(23), 1,
      sym_flag_value,
  [1244] = 1,
    ACTIONS(267), 1,
      sym_file_path,
  [1248] = 1,
    ACTIONS(269), 1,
      anon_sym_SEMI,
  [1252] = 1,
    ACTIONS(271), 1,
      sym_number,
  [1256] = 1,
    ACTIONS(273), 1,
      anon_sym_COLON,
  [1260] = 1,
    ACTIONS(275), 1,
      sym_class_keyword,
  [1264] = 1,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
  [1268] = 1,
    ACTIONS(279), 1,
      anon_sym_POUND,
  [1272] = 1,
    ACTIONS(281), 1,
      sym_md5,
  [1276] = 1,
    ACTIONS(283), 1,
      anon_sym_SEMI,
  [1280] = 1,
    ACTIONS(285), 1,
      anon_sym_COLON,
  [1284] = 1,
    ACTIONS(287), 1,
      sym_class_keyword,
  [1288] = 1,
    ACTIONS(289), 1,
      sym_number,
  [1292] = 1,
    ACTIONS(291), 1,
      sym_number,
  [1296] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [1300] = 1,
    ACTIONS(295), 1,
      sym_identifier,
  [1304] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [1308] = 1,
    ACTIONS(299), 1,
      sym_number,
  [1312] = 1,
    ACTIONS(301), 1,
      anon_sym_Compiledfrom,
  [1316] = 1,
    ACTIONS(303), 1,
      sym_number,
  [1320] = 1,
    ACTIONS(305), 1,
      aux_sym_general_info_compile_token1,
  [1324] = 1,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
  [1328] = 1,
    ACTIONS(309), 1,
      sym_descriptor_value,
  [1332] = 1,
    ACTIONS(311), 1,
      anon_sym_Lastmodified,
  [1336] = 1,
    ACTIONS(313), 1,
      aux_sym_flag_value_token1,
  [1340] = 1,
    ACTIONS(315), 1,
      aux_sym_class_info_item_simple_token1,
  [1344] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
  [1348] = 1,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [1352] = 1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
  [1356] = 1,
    ACTIONS(323), 1,
      aux_sym_source_file_def_token1,
  [1360] = 1,
    ACTIONS(325), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1364] = 1,
    ACTIONS(327), 1,
      sym_constantPoolItemValue,
  [1368] = 1,
    ACTIONS(329), 1,
      sym_constantPoolItemValue,
  [1372] = 1,
    ACTIONS(331), 1,
      anon_sym_EQ,
  [1376] = 1,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
  [1380] = 1,
    ACTIONS(335), 1,
      sym_hex_value,
  [1384] = 1,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 224,
  [SMALL_STATE(13)] = 240,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 270,
  [SMALL_STATE(16)] = 286,
  [SMALL_STATE(17)] = 304,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 336,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 366,
  [SMALL_STATE(22)] = 380,
  [SMALL_STATE(23)] = 398,
  [SMALL_STATE(24)] = 412,
  [SMALL_STATE(25)] = 426,
  [SMALL_STATE(26)] = 442,
  [SMALL_STATE(27)] = 456,
  [SMALL_STATE(28)] = 474,
  [SMALL_STATE(29)] = 489,
  [SMALL_STATE(30)] = 500,
  [SMALL_STATE(31)] = 509,
  [SMALL_STATE(32)] = 518,
  [SMALL_STATE(33)] = 533,
  [SMALL_STATE(34)] = 542,
  [SMALL_STATE(35)] = 555,
  [SMALL_STATE(36)] = 568,
  [SMALL_STATE(37)] = 585,
  [SMALL_STATE(38)] = 602,
  [SMALL_STATE(39)] = 615,
  [SMALL_STATE(40)] = 626,
  [SMALL_STATE(41)] = 643,
  [SMALL_STATE(42)] = 654,
  [SMALL_STATE(43)] = 669,
  [SMALL_STATE(44)] = 683,
  [SMALL_STATE(45)] = 697,
  [SMALL_STATE(46)] = 711,
  [SMALL_STATE(47)] = 725,
  [SMALL_STATE(48)] = 733,
  [SMALL_STATE(49)] = 747,
  [SMALL_STATE(50)] = 761,
  [SMALL_STATE(51)] = 775,
  [SMALL_STATE(52)] = 789,
  [SMALL_STATE(53)] = 801,
  [SMALL_STATE(54)] = 813,
  [SMALL_STATE(55)] = 827,
  [SMALL_STATE(56)] = 836,
  [SMALL_STATE(57)] = 843,
  [SMALL_STATE(58)] = 850,
  [SMALL_STATE(59)] = 861,
  [SMALL_STATE(60)] = 872,
  [SMALL_STATE(61)] = 883,
  [SMALL_STATE(62)] = 894,
  [SMALL_STATE(63)] = 905,
  [SMALL_STATE(64)] = 914,
  [SMALL_STATE(65)] = 921,
  [SMALL_STATE(66)] = 928,
  [SMALL_STATE(67)] = 935,
  [SMALL_STATE(68)] = 942,
  [SMALL_STATE(69)] = 953,
  [SMALL_STATE(70)] = 962,
  [SMALL_STATE(71)] = 971,
  [SMALL_STATE(72)] = 977,
  [SMALL_STATE(73)] = 985,
  [SMALL_STATE(74)] = 995,
  [SMALL_STATE(75)] = 1001,
  [SMALL_STATE(76)] = 1011,
  [SMALL_STATE(77)] = 1017,
  [SMALL_STATE(78)] = 1023,
  [SMALL_STATE(79)] = 1033,
  [SMALL_STATE(80)] = 1041,
  [SMALL_STATE(81)] = 1051,
  [SMALL_STATE(82)] = 1057,
  [SMALL_STATE(83)] = 1063,
  [SMALL_STATE(84)] = 1069,
  [SMALL_STATE(85)] = 1079,
  [SMALL_STATE(86)] = 1089,
  [SMALL_STATE(87)] = 1095,
  [SMALL_STATE(88)] = 1101,
  [SMALL_STATE(89)] = 1108,
  [SMALL_STATE(90)] = 1115,
  [SMALL_STATE(91)] = 1122,
  [SMALL_STATE(92)] = 1127,
  [SMALL_STATE(93)] = 1134,
  [SMALL_STATE(94)] = 1141,
  [SMALL_STATE(95)] = 1148,
  [SMALL_STATE(96)] = 1155,
  [SMALL_STATE(97)] = 1162,
  [SMALL_STATE(98)] = 1169,
  [SMALL_STATE(99)] = 1176,
  [SMALL_STATE(100)] = 1183,
  [SMALL_STATE(101)] = 1190,
  [SMALL_STATE(102)] = 1197,
  [SMALL_STATE(103)] = 1202,
  [SMALL_STATE(104)] = 1209,
  [SMALL_STATE(105)] = 1216,
  [SMALL_STATE(106)] = 1223,
  [SMALL_STATE(107)] = 1230,
  [SMALL_STATE(108)] = 1237,
  [SMALL_STATE(109)] = 1244,
  [SMALL_STATE(110)] = 1248,
  [SMALL_STATE(111)] = 1252,
  [SMALL_STATE(112)] = 1256,
  [SMALL_STATE(113)] = 1260,
  [SMALL_STATE(114)] = 1264,
  [SMALL_STATE(115)] = 1268,
  [SMALL_STATE(116)] = 1272,
  [SMALL_STATE(117)] = 1276,
  [SMALL_STATE(118)] = 1280,
  [SMALL_STATE(119)] = 1284,
  [SMALL_STATE(120)] = 1288,
  [SMALL_STATE(121)] = 1292,
  [SMALL_STATE(122)] = 1296,
  [SMALL_STATE(123)] = 1300,
  [SMALL_STATE(124)] = 1304,
  [SMALL_STATE(125)] = 1308,
  [SMALL_STATE(126)] = 1312,
  [SMALL_STATE(127)] = 1316,
  [SMALL_STATE(128)] = 1320,
  [SMALL_STATE(129)] = 1324,
  [SMALL_STATE(130)] = 1328,
  [SMALL_STATE(131)] = 1332,
  [SMALL_STATE(132)] = 1336,
  [SMALL_STATE(133)] = 1340,
  [SMALL_STATE(134)] = 1344,
  [SMALL_STATE(135)] = 1348,
  [SMALL_STATE(136)] = 1352,
  [SMALL_STATE(137)] = 1356,
  [SMALL_STATE(138)] = 1360,
  [SMALL_STATE(139)] = 1364,
  [SMALL_STATE(140)] = 1368,
  [SMALL_STATE(141)] = 1372,
  [SMALL_STATE(142)] = 1376,
  [SMALL_STATE(143)] = 1380,
  [SMALL_STATE(144)] = 1384,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(64),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(100),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(78),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(111),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(104),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constantPoolDef_repeat1, 2), SHIFT_REPEAT(125),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constantPoolDef_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_with_number, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_with_number, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantPoolDef, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_value, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantPoolDef, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(133),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(101),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_value, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(118),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(92),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_access, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 9),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItem, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItem, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_general_info_last_mod, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info_compile, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_general_info_last_mod_repeat1, 2), SHIFT_REPEAT(84),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_general_info_last_mod_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_general_info_last_mod, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_access, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info_md5, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantPoolItemType, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [333] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
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
