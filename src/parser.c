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
#define STATE_COUNT 190
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  sym_mod_static = 2,
  sym_mod_abstract = 3,
  anon_sym_public = 4,
  anon_sym_private = 5,
  anon_sym_protected = 6,
  anon_sym_LPAREN_RPAREN_SEMI = 7,
  anon_sym_Code_COLON = 8,
  anon_sym_COMMA = 9,
  anon_sym_LineNumberTable_COLON = 10,
  anon_sym_line = 11,
  anon_sym_COLON = 12,
  aux_sym_instruction_token1 = 13,
  anon_sym_POUND = 14,
  aux_sym_code_info_stat_token1 = 15,
  anon_sym_descriptor_COLON = 16,
  sym_descriptor_value = 17,
  anon_sym_flags_COLON = 18,
  sym_flag_value = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  sym_hex_value = 22,
  anon_sym_bool = 23,
  anon_sym_void = 24,
  aux_sym_simple_type_token1 = 25,
  anon_sym_LBRACK_RBRACK = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  sym_identifier = 29,
  sym_number = 30,
  anon_sym_SourceFile_COLON_DQUOTE = 31,
  aux_sym_source_file_def_token1 = 32,
  anon_sym_DQUOTE = 33,
  sym_comment = 34,
  anon_sym_Constantpool_COLON = 35,
  anon_sym_EQ = 36,
  anon_sym_Utf8 = 37,
  aux_sym__constant_pool_item_type_utf8_token1 = 38,
  anon_sym_Class = 39,
  anon_sym_String = 40,
  anon_sym_Methodref = 41,
  anon_sym_DOT = 42,
  anon_sym_Fieldref = 43,
  anon_sym_NameAndType = 44,
  sym_class_keyword = 45,
  aux_sym_class_info_item_simple_token1 = 46,
  anon_sym_Lastmodified = 47,
  aux_sym_header_info_last_mod_token1 = 48,
  sym_md5 = 49,
  anon_sym_MD5checksum = 50,
  anon_sym_Compiledfrom = 51,
  aux_sym_header_info_compile_token1 = 52,
  sym__path_segment = 53,
  anon_sym_SLASH = 54,
  anon_sym_Classfile = 55,
  sym_source_file = 56,
  sym_method_def = 57,
  sym__mods = 58,
  sym_mod_access = 59,
  sym_class_definition = 60,
  sym_code_def = 61,
  sym_code_info = 62,
  sym_line_number_table_def = 63,
  sym_numered_line = 64,
  sym_numered_instruction = 65,
  sym_instruction = 66,
  sym_code_info_stat = 67,
  sym_descriptor_def = 68,
  sym_flag_def = 69,
  sym__wrapped_hex_val = 70,
  sym_method_args = 71,
  sym__type = 72,
  sym_simple_type = 73,
  sym_array_type = 74,
  sym_block = 75,
  sym_source_file_def = 76,
  sym_constant_pool_def = 77,
  sym__hash_number = 78,
  sym_constant_pool_item = 79,
  sym__constant_pool_item_type = 80,
  sym__constant_pool_item_type_utf8 = 81,
  sym__constant_pool_item_type_class = 82,
  sym__constant_pool_item_type_string = 83,
  sym__constant_pool_item_type_method_ref = 84,
  sym__constant_pool_item_type_field_ref = 85,
  sym__constant_pool_item_type_name_and_type = 86,
  sym_class_info_def = 87,
  sym_class_info_item = 88,
  sym_class_info_item_simple = 89,
  sym_header_info_last_mod = 90,
  sym_header_info_md5 = 91,
  sym_header_info_compile = 92,
  sym_file_path = 93,
  sym_header_info = 94,
  sym_header = 95,
  aux_sym_source_file_repeat1 = 96,
  aux_sym_class_definition_repeat1 = 97,
  aux_sym_code_info_repeat1 = 98,
  aux_sym_code_info_repeat2 = 99,
  aux_sym_line_number_table_def_repeat1 = 100,
  aux_sym_flag_def_repeat1 = 101,
  aux_sym_method_args_repeat1 = 102,
  aux_sym_constant_pool_def_repeat1 = 103,
  aux_sym_class_info_def_repeat1 = 104,
  aux_sym_class_info_item_simple_repeat1 = 105,
  aux_sym_header_info_last_mod_repeat1 = 106,
  aux_sym_file_path_repeat1 = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_mod_static] = "mod_static",
  [sym_mod_abstract] = "mod_abstract",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_LPAREN_RPAREN_SEMI] = "();",
  [anon_sym_Code_COLON] = "Code:",
  [anon_sym_COMMA] = ",",
  [anon_sym_LineNumberTable_COLON] = "LineNumberTable:",
  [anon_sym_line] = "line",
  [anon_sym_COLON] = ":",
  [aux_sym_instruction_token1] = "instruction_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_code_info_stat_token1] = "code_info_stat_token1",
  [anon_sym_descriptor_COLON] = "descriptor:",
  [sym_descriptor_value] = "descriptor_value",
  [anon_sym_flags_COLON] = "flags:",
  [sym_flag_value] = "flag_value",
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
  [anon_sym_Utf8] = "Utf8",
  [aux_sym__constant_pool_item_type_utf8_token1] = "_constant_pool_item_type_utf8_token1",
  [anon_sym_Class] = "Class",
  [anon_sym_String] = "String",
  [anon_sym_Methodref] = "Methodref",
  [anon_sym_DOT] = ".",
  [anon_sym_Fieldref] = "Fieldref",
  [anon_sym_NameAndType] = "NameAndType",
  [sym_class_keyword] = "class_keyword",
  [aux_sym_class_info_item_simple_token1] = "class_info_item_simple_token1",
  [anon_sym_Lastmodified] = "Last modified",
  [aux_sym_header_info_last_mod_token1] = "header_info_last_mod_token1",
  [sym_md5] = "md5",
  [anon_sym_MD5checksum] = "MD5 checksum",
  [anon_sym_Compiledfrom] = "Compiled from",
  [aux_sym_header_info_compile_token1] = "header_info_compile_token1",
  [sym__path_segment] = "_path_segment",
  [anon_sym_SLASH] = "/",
  [anon_sym_Classfile] = "Classfile",
  [sym_source_file] = "source_file",
  [sym_method_def] = "method_def",
  [sym__mods] = "_mods",
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
  [sym__wrapped_hex_val] = "_wrapped_hex_val",
  [sym_method_args] = "method_args",
  [sym__type] = "_type",
  [sym_simple_type] = "simple_type",
  [sym_array_type] = "array_type",
  [sym_block] = "block",
  [sym_source_file_def] = "source_file_def",
  [sym_constant_pool_def] = "constant_pool_def",
  [sym__hash_number] = "_hash_number",
  [sym_constant_pool_item] = "constant_pool_item",
  [sym__constant_pool_item_type] = "_constant_pool_item_type",
  [sym__constant_pool_item_type_utf8] = "_constant_pool_item_type_utf8",
  [sym__constant_pool_item_type_class] = "_constant_pool_item_type_class",
  [sym__constant_pool_item_type_string] = "_constant_pool_item_type_string",
  [sym__constant_pool_item_type_method_ref] = "_constant_pool_item_type_method_ref",
  [sym__constant_pool_item_type_field_ref] = "_constant_pool_item_type_field_ref",
  [sym__constant_pool_item_type_name_and_type] = "_constant_pool_item_type_name_and_type",
  [sym_class_info_def] = "class_info_def",
  [sym_class_info_item] = "class_info_item",
  [sym_class_info_item_simple] = "class_info_item_simple",
  [sym_header_info_last_mod] = "header_info_last_mod",
  [sym_header_info_md5] = "header_info_md5",
  [sym_header_info_compile] = "header_info_compile",
  [sym_file_path] = "file_path",
  [sym_header_info] = "header_info",
  [sym_header] = "header",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_code_info_repeat2] = "code_info_repeat2",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
  [aux_sym_method_args_repeat1] = "method_args_repeat1",
  [aux_sym_constant_pool_def_repeat1] = "constant_pool_def_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_header_info_last_mod_repeat1] = "header_info_last_mod_repeat1",
  [aux_sym_file_path_repeat1] = "file_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_mod_static] = sym_mod_static,
  [sym_mod_abstract] = sym_mod_abstract,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_LPAREN_RPAREN_SEMI] = anon_sym_LPAREN_RPAREN_SEMI,
  [anon_sym_Code_COLON] = anon_sym_Code_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LineNumberTable_COLON] = anon_sym_LineNumberTable_COLON,
  [anon_sym_line] = anon_sym_line,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_instruction_token1] = aux_sym_instruction_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_code_info_stat_token1] = aux_sym_code_info_stat_token1,
  [anon_sym_descriptor_COLON] = anon_sym_descriptor_COLON,
  [sym_descriptor_value] = sym_descriptor_value,
  [anon_sym_flags_COLON] = anon_sym_flags_COLON,
  [sym_flag_value] = sym_flag_value,
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
  [anon_sym_Utf8] = anon_sym_Utf8,
  [aux_sym__constant_pool_item_type_utf8_token1] = aux_sym__constant_pool_item_type_utf8_token1,
  [anon_sym_Class] = anon_sym_Class,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Methodref] = anon_sym_Methodref,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Fieldref] = anon_sym_Fieldref,
  [anon_sym_NameAndType] = anon_sym_NameAndType,
  [sym_class_keyword] = sym_class_keyword,
  [aux_sym_class_info_item_simple_token1] = aux_sym_class_info_item_simple_token1,
  [anon_sym_Lastmodified] = anon_sym_Lastmodified,
  [aux_sym_header_info_last_mod_token1] = aux_sym_header_info_last_mod_token1,
  [sym_md5] = sym_md5,
  [anon_sym_MD5checksum] = anon_sym_MD5checksum,
  [anon_sym_Compiledfrom] = anon_sym_Compiledfrom,
  [aux_sym_header_info_compile_token1] = aux_sym_header_info_compile_token1,
  [sym__path_segment] = sym__path_segment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_Classfile] = anon_sym_Classfile,
  [sym_source_file] = sym_source_file,
  [sym_method_def] = sym_method_def,
  [sym__mods] = sym__mods,
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
  [sym__wrapped_hex_val] = sym__wrapped_hex_val,
  [sym_method_args] = sym_method_args,
  [sym__type] = sym__type,
  [sym_simple_type] = sym_simple_type,
  [sym_array_type] = sym_array_type,
  [sym_block] = sym_block,
  [sym_source_file_def] = sym_source_file_def,
  [sym_constant_pool_def] = sym_constant_pool_def,
  [sym__hash_number] = sym__hash_number,
  [sym_constant_pool_item] = sym_constant_pool_item,
  [sym__constant_pool_item_type] = sym__constant_pool_item_type,
  [sym__constant_pool_item_type_utf8] = sym__constant_pool_item_type_utf8,
  [sym__constant_pool_item_type_class] = sym__constant_pool_item_type_class,
  [sym__constant_pool_item_type_string] = sym__constant_pool_item_type_string,
  [sym__constant_pool_item_type_method_ref] = sym__constant_pool_item_type_method_ref,
  [sym__constant_pool_item_type_field_ref] = sym__constant_pool_item_type_field_ref,
  [sym__constant_pool_item_type_name_and_type] = sym__constant_pool_item_type_name_and_type,
  [sym_class_info_def] = sym_class_info_def,
  [sym_class_info_item] = sym_class_info_item,
  [sym_class_info_item_simple] = sym_class_info_item_simple,
  [sym_header_info_last_mod] = sym_header_info_last_mod,
  [sym_header_info_md5] = sym_header_info_md5,
  [sym_header_info_compile] = sym_header_info_compile,
  [sym_file_path] = sym_file_path,
  [sym_header_info] = sym_header_info,
  [sym_header] = sym_header,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_code_info_repeat2] = aux_sym_code_info_repeat2,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
  [aux_sym_method_args_repeat1] = aux_sym_method_args_repeat1,
  [aux_sym_constant_pool_def_repeat1] = aux_sym_constant_pool_def_repeat1,
  [aux_sym_class_info_def_repeat1] = aux_sym_class_info_def_repeat1,
  [aux_sym_class_info_item_simple_repeat1] = aux_sym_class_info_item_simple_repeat1,
  [aux_sym_header_info_last_mod_repeat1] = aux_sym_header_info_last_mod_repeat1,
  [aux_sym_file_path_repeat1] = aux_sym_file_path_repeat1,
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
  [sym_mod_static] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_abstract] = {
    .visible = true,
    .named = true,
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
  [aux_sym_instruction_token1] = {
    .visible = false,
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
  [sym_flag_value] = {
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
  [anon_sym_Utf8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__constant_pool_item_type_utf8_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Methodref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fieldref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NameAndType] = {
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
  [anon_sym_Lastmodified] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_info_last_mod_token1] = {
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
  [aux_sym_header_info_compile_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__path_segment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
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
  [sym__mods] = {
    .visible = false,
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
  [sym_constant_pool_def] = {
    .visible = true,
    .named = true,
  },
  [sym__hash_number] = {
    .visible = false,
    .named = true,
  },
  [sym_constant_pool_item] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_pool_item_type] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_pool_item_type_utf8] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_pool_item_type_class] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_pool_item_type_string] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_pool_item_type_method_ref] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_pool_item_type_field_ref] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_pool_item_type_name_and_type] = {
    .visible = false,
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
  [sym_header_info_last_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_header_info_md5] = {
    .visible = true,
    .named = true,
  },
  [sym_header_info_compile] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_header_info] = {
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
  [aux_sym_method_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_pool_def_repeat1] = {
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
  [aux_sym_header_info_last_mod_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_path_repeat1] = {
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
  [33] = 17,
  [34] = 34,
  [35] = 15,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 31,
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
  [51] = 42,
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
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 71,
  [107] = 107,
  [108] = 108,
  [109] = 72,
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
  [126] = 126,
  [127] = 127,
  [128] = 90,
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
  [145] = 140,
  [146] = 146,
  [147] = 110,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 108,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 158,
  [188] = 148,
  [189] = 189,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(284);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == '/') ADVANCE(384);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == 'F') ADVANCE(140);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'M') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == 'U') ADVANCE(221);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == '{') ADVANCE(335);
      if (lookahead == '}') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(190);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(195);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(339);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '0') ADVANCE(238);
      if (lookahead == 'C') ADVANCE(165);
      if (lookahead == 'F') ADVANCE(140);
      if (lookahead == 'M') ADVANCE(116);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(220);
      if (lookahead == 'U') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(344);
      END_STATE();
    case 16:
      if (lookahead == '5') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == '5') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 18:
      if (lookahead == '8') ADVANCE(347);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(294);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(305);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(302);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(345);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(296);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 50:
      if (lookahead == ';') ADVANCE(293);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(174);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(180);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 60:
      if (lookahead == 'F') ADVANCE(150);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(235);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(239);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(334);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(326);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == 'v') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(326);
      if (lookahead == 'v') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(326);
      if (lookahead == 'v') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(359);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(357);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(356);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(189);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(219);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(377);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(379);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 237:
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 238:
      if (lookahead == 'x') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(194);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(240)
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 241:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(241)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 242:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 243:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 244:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 245:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 281:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 282:
      if (eof) ADVANCE(284);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'C') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'M') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(178);
      if (lookahead == '{') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(282)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 283:
      if (eof) ADVANCE(284);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == '{') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_mod_abstract);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_mod_abstract);
      if (lookahead == '.') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(50);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 's') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 't') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(348);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(353);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(350);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'c') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'h') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'k') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 's') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'u') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(353);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 282},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 283},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 283},
  [8] = {.lex_state = 283},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 283},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 283},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 283},
  [16] = {.lex_state = 283},
  [17] = {.lex_state = 283},
  [18] = {.lex_state = 283},
  [19] = {.lex_state = 283},
  [20] = {.lex_state = 283},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 283},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 283},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 283},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 283},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 80},
  [57] = {.lex_state = 80},
  [58] = {.lex_state = 283},
  [59] = {.lex_state = 80},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 282},
  [65] = {.lex_state = 282},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 282},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 282},
  [70] = {.lex_state = 282},
  [71] = {.lex_state = 69},
  [72] = {.lex_state = 69},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 56},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 282},
  [88] = {.lex_state = 56},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 70},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 348},
  [97] = {.lex_state = 56},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 349},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 283},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 282},
  [104] = {.lex_state = 349},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 80},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 80},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 349},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 349},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 282},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 349},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 349},
  [127] = {.lex_state = 282},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 283},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 240},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 282},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 350},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 282},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 241},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 244},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 241},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 241},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 351},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 282},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 242},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 243},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 241},
  [188] = {.lex_state = 241},
  [189] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_mod_static] = ACTIONS(1),
    [sym_mod_abstract] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN_SEMI] = ACTIONS(1),
    [anon_sym_Code_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LineNumberTable_COLON] = ACTIONS(1),
    [anon_sym_line] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_Constantpool_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_Utf8] = ACTIONS(1),
    [anon_sym_Class] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Methodref] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Fieldref] = ACTIONS(1),
    [anon_sym_NameAndType] = ACTIONS(1),
    [sym_class_keyword] = ACTIONS(1),
    [anon_sym_Lastmodified] = ACTIONS(1),
    [anon_sym_MD5checksum] = ACTIONS(1),
    [anon_sym_Compiledfrom] = ACTIONS(1),
    [aux_sym_header_info_compile_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(186),
    [sym_header_info_last_mod] = STATE(91),
    [sym_header_info_md5] = STATE(146),
    [sym_header_info_compile] = STATE(36),
    [sym_header_info] = STATE(55),
    [sym_header] = STATE(2),
    [anon_sym_Lastmodified] = ACTIONS(3),
    [anon_sym_MD5checksum] = ACTIONS(5),
    [anon_sym_Compiledfrom] = ACTIONS(7),
    [anon_sym_Classfile] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_Constantpool_COLON,
    STATE(30), 1,
      sym_class_info_def,
    STATE(63), 1,
      sym_constant_pool_def,
    STATE(109), 1,
      sym_mod_access,
    STATE(182), 1,
      sym_source_file_def,
    STATE(183), 1,
      sym__mods,
    STATE(50), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [37] = 11,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(25), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_descriptor_def,
    STATE(12), 1,
      sym_flag_def,
    STATE(23), 1,
      sym_code_def,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(28), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [74] = 7,
    ACTIONS(31), 1,
      anon_sym_Utf8,
    ACTIONS(33), 1,
      anon_sym_Class,
    ACTIONS(35), 1,
      anon_sym_String,
    ACTIONS(37), 1,
      anon_sym_Methodref,
    ACTIONS(39), 1,
      anon_sym_Fieldref,
    ACTIONS(41), 1,
      anon_sym_NameAndType,
    STATE(78), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
  [102] = 2,
    ACTIONS(45), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(43), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
      anon_sym_DOT,
  [119] = 9,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_flag_def,
    STATE(25), 1,
      sym_code_def,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [150] = 5,
    ACTIONS(51), 1,
      anon_sym_flags_COLON,
    ACTIONS(53), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(8), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(58), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [171] = 5,
    ACTIONS(57), 1,
      anon_sym_flags_COLON,
    ACTIONS(60), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(8), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(58), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [192] = 7,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym_code_def,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [217] = 7,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(25), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    STATE(21), 1,
      sym_descriptor_def,
    STATE(49), 1,
      sym_flag_def,
    STATE(86), 1,
      sym_code_def,
    ACTIONS(65), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [242] = 5,
    ACTIONS(51), 1,
      anon_sym_flags_COLON,
    ACTIONS(53), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(7), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(58), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [263] = 7,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_code_def,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [288] = 5,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(19), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [308] = 5,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(77), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [327] = 4,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [344] = 4,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(16), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [361] = 4,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(31), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [378] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(29), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [395] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(16), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [412] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [427] = 5,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    STATE(62), 1,
      sym_flag_def,
    STATE(74), 1,
      sym_code_def,
    ACTIONS(112), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [446] = 5,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [465] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [484] = 5,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [503] = 5,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [522] = 5,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [541] = 5,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(22), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [560] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__mods,
    STATE(72), 1,
      sym_mod_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [579] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(16), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [596] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_constant_pool_def,
    STATE(174), 1,
      sym_source_file_def,
    STATE(52), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [619] = 4,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [636] = 4,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(176), 1,
      sym__hash_number,
    STATE(46), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [652] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(96), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [666] = 3,
    ACTIONS(136), 1,
      anon_sym_line,
    STATE(34), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(134), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [680] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(82), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [694] = 1,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [704] = 3,
    ACTIONS(146), 1,
      anon_sym_line,
    STATE(34), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(144), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [718] = 2,
    ACTIONS(150), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [730] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(124), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [744] = 1,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [754] = 1,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [764] = 2,
    ACTIONS(87), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [776] = 1,
    ACTIONS(156), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [786] = 3,
    ACTIONS(146), 1,
      anon_sym_line,
    STATE(37), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(158), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [800] = 4,
    ACTIONS(162), 1,
      anon_sym_POUND,
    STATE(176), 1,
      sym__hash_number,
    STATE(45), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [816] = 4,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(176), 1,
      sym__hash_number,
    STATE(45), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [832] = 1,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [842] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(169), 1,
      sym_source_file_def,
    STATE(61), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [859] = 3,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    STATE(74), 1,
      sym_code_def,
    ACTIONS(112), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [872] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      sym_source_file_def,
    STATE(68), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [889] = 1,
    ACTIONS(82), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [898] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(169), 1,
      sym_source_file_def,
    STATE(68), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [915] = 1,
    ACTIONS(171), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [924] = 5,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(177), 1,
      sym_number,
    STATE(60), 1,
      aux_sym_code_info_repeat1,
    STATE(76), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [941] = 6,
    ACTIONS(3), 1,
      anon_sym_Lastmodified,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(43), 1,
      sym_header_info_compile,
    STATE(92), 1,
      sym_header_info_last_mod,
    STATE(141), 1,
      sym_header_info_md5,
  [960] = 2,
    ACTIONS(179), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(125), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [971] = 2,
    ACTIONS(179), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(118), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [982] = 2,
    ACTIONS(183), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [993] = 2,
    ACTIONS(179), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(89), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [1004] = 5,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(95), 1,
      aux_sym_code_info_repeat1,
    STATE(81), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1021] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_source_file_def,
    STATE(68), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [1038] = 3,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    STATE(82), 1,
      sym_code_def,
    ACTIONS(189), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1051] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      sym_source_file_def,
    STATE(52), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [1068] = 2,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1078] = 2,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1088] = 1,
    ACTIONS(199), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [1096] = 2,
    ACTIONS(203), 1,
      sym_comment,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1106] = 3,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(68), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [1118] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(210), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1128] = 2,
    ACTIONS(216), 1,
      sym_comment,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1138] = 1,
    ACTIONS(218), 5,
      sym_mod_static,
      sym_mod_abstract,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1146] = 3,
    ACTIONS(220), 1,
      sym_mod_static,
    ACTIONS(222), 1,
      sym_mod_abstract,
    ACTIONS(224), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1158] = 1,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1165] = 1,
    ACTIONS(189), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1172] = 1,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1179] = 3,
    ACTIONS(177), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(85), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1190] = 1,
    ACTIONS(230), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1197] = 1,
    ACTIONS(232), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1204] = 1,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1211] = 1,
    ACTIONS(236), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1218] = 3,
    ACTIONS(177), 1,
      sym_number,
    ACTIONS(238), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(85), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1229] = 1,
    ACTIONS(240), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1236] = 3,
    ACTIONS(242), 1,
      aux_sym_header_info_last_mod_token1,
    STATE(97), 1,
      aux_sym_header_info_last_mod_repeat1,
    ACTIONS(244), 2,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1247] = 1,
    ACTIONS(246), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1254] = 3,
    ACTIONS(248), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(250), 1,
      sym_number,
    STATE(85), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1265] = 1,
    ACTIONS(112), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1272] = 2,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(253), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1281] = 3,
    ACTIONS(257), 1,
      aux_sym_header_info_last_mod_token1,
    STATE(83), 1,
      aux_sym_header_info_last_mod_repeat1,
    ACTIONS(259), 2,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1292] = 4,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(265), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(111), 1,
      aux_sym_method_args_repeat1,
  [1305] = 2,
    ACTIONS(267), 1,
      sym_mod_abstract,
    ACTIONS(269), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1314] = 4,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(43), 1,
      sym_header_info_compile,
    STATE(141), 1,
      sym_header_info_md5,
  [1327] = 4,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(40), 1,
      sym_header_info_compile,
    STATE(131), 1,
      sym_header_info_md5,
  [1340] = 1,
    ACTIONS(271), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1347] = 1,
    ACTIONS(273), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1354] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(278), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1365] = 4,
    ACTIONS(280), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(282), 1,
      sym__path_segment,
    ACTIONS(284), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_file_path,
  [1378] = 3,
    ACTIONS(286), 1,
      aux_sym_header_info_last_mod_token1,
    STATE(97), 1,
      aux_sym_header_info_last_mod_repeat1,
    ACTIONS(289), 2,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1389] = 1,
    ACTIONS(291), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1396] = 3,
    ACTIONS(293), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(295), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      aux_sym_file_path_repeat1,
  [1406] = 1,
    ACTIONS(297), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1412] = 3,
    ACTIONS(299), 1,
      aux_sym_code_info_stat_token1,
    STATE(54), 1,
      sym_code_info_stat,
    STATE(142), 1,
      sym_code_info,
  [1422] = 1,
    ACTIONS(301), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1428] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1436] = 3,
    ACTIONS(295), 1,
      anon_sym_SLASH,
    ACTIONS(307), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(99), 1,
      aux_sym_file_path_repeat1,
  [1446] = 1,
    ACTIONS(309), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1452] = 1,
    ACTIONS(311), 3,
      sym_mod_static,
      sym_mod_abstract,
      sym_class_keyword,
  [1458] = 3,
    ACTIONS(130), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      sym_number,
    STATE(13), 1,
      sym__hash_number,
  [1468] = 1,
    ACTIONS(315), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1474] = 3,
    ACTIONS(317), 1,
      sym_mod_static,
    ACTIONS(319), 1,
      sym_mod_abstract,
    ACTIONS(321), 1,
      sym_class_keyword,
  [1484] = 1,
    ACTIONS(269), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1490] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_method_args_repeat1,
  [1500] = 3,
    ACTIONS(325), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      aux_sym_file_path_repeat1,
  [1510] = 1,
    ACTIONS(278), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1516] = 3,
    ACTIONS(293), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(295), 1,
      anon_sym_SLASH,
    STATE(123), 1,
      aux_sym_file_path_repeat1,
  [1526] = 1,
    ACTIONS(330), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1532] = 3,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_method_args_repeat1,
  [1542] = 3,
    ACTIONS(130), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      sym_number,
    STATE(20), 1,
      sym__hash_number,
  [1552] = 2,
    ACTIONS(265), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1560] = 1,
    ACTIONS(339), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1566] = 1,
    ACTIONS(341), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1572] = 1,
    ACTIONS(343), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1578] = 1,
    ACTIONS(345), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1584] = 3,
    ACTIONS(295), 1,
      anon_sym_SLASH,
    ACTIONS(347), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(112), 1,
      aux_sym_file_path_repeat1,
  [1594] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym__hash_number,
  [1601] = 2,
    ACTIONS(265), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(349), 1,
      sym_identifier,
  [1608] = 1,
    ACTIONS(325), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1613] = 2,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_method_args,
  [1620] = 2,
    ACTIONS(353), 1,
      sym_mod_abstract,
    ACTIONS(355), 1,
      sym_class_keyword,
  [1627] = 2,
    ACTIONS(299), 1,
      aux_sym_code_info_stat_token1,
    STATE(113), 1,
      sym_code_info_stat,
  [1634] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym__hash_number,
  [1641] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(47), 1,
      sym_header_info_compile,
  [1648] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym__hash_number,
  [1655] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym__hash_number,
  [1662] = 2,
    ACTIONS(357), 1,
      aux_sym_instruction_token1,
    STATE(103), 1,
      sym_instruction,
  [1669] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym__hash_number,
  [1676] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym__hash_number,
  [1683] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym__hash_number,
  [1690] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym__hash_number,
  [1697] = 2,
    ACTIONS(359), 1,
      anon_sym_public,
    STATE(179), 1,
      sym_class_definition,
  [1704] = 2,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym__wrapped_hex_val,
  [1711] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(40), 1,
      sym_header_info_compile,
  [1718] = 2,
    ACTIONS(363), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(93), 1,
      sym_line_number_table_def,
  [1725] = 2,
    ACTIONS(307), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(365), 1,
      sym__path_segment,
  [1732] = 1,
    ACTIONS(367), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1737] = 2,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym__wrapped_hex_val,
  [1744] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(43), 1,
      sym_header_info_compile,
  [1751] = 1,
    ACTIONS(355), 1,
      sym_class_keyword,
  [1755] = 1,
    ACTIONS(369), 1,
      sym_flag_value,
  [1759] = 1,
    ACTIONS(371), 1,
      sym_number,
  [1763] = 1,
    ACTIONS(373), 1,
      aux_sym_class_info_item_simple_token1,
  [1767] = 1,
    ACTIONS(375), 1,
      anon_sym_COLON,
  [1771] = 1,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
  [1775] = 1,
    ACTIONS(379), 1,
      sym_number,
  [1779] = 1,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [1783] = 1,
    ACTIONS(383), 1,
      anon_sym_SEMI,
  [1787] = 1,
    ACTIONS(385), 1,
      sym_flag_value,
  [1791] = 1,
    ACTIONS(387), 1,
      sym_md5,
  [1795] = 1,
    ACTIONS(389), 1,
      sym_flag_value,
  [1799] = 1,
    ACTIONS(391), 1,
      sym_hex_value,
  [1803] = 1,
    ACTIONS(393), 1,
      anon_sym_COLON,
  [1807] = 1,
    ACTIONS(395), 1,
      sym_number,
  [1811] = 1,
    ACTIONS(397), 1,
      sym_number,
  [1815] = 1,
    ACTIONS(399), 1,
      anon_sym_DOT,
  [1819] = 1,
    ACTIONS(401), 1,
      anon_sym_DOT,
  [1823] = 1,
    ACTIONS(403), 1,
      anon_sym_SEMI,
  [1827] = 1,
    ACTIONS(405), 1,
      sym_descriptor_value,
  [1831] = 1,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [1835] = 1,
    ACTIONS(409), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1839] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [1843] = 1,
    ACTIONS(411), 1,
      sym_class_keyword,
  [1847] = 1,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
  [1851] = 1,
    ACTIONS(415), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1855] = 1,
    ACTIONS(417), 1,
      anon_sym_SEMI,
  [1859] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [1863] = 1,
    ACTIONS(419), 1,
      sym_identifier,
  [1867] = 1,
    ACTIONS(421), 1,
      anon_sym_EQ,
  [1871] = 1,
    ACTIONS(423), 1,
      sym_number,
  [1875] = 1,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
  [1879] = 1,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
  [1883] = 1,
    ACTIONS(429), 1,
      sym_identifier,
  [1887] = 1,
    ACTIONS(431), 1,
      sym__path_segment,
  [1891] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [1895] = 1,
    ACTIONS(433), 1,
      sym_class_keyword,
  [1899] = 1,
    ACTIONS(435), 1,
      aux_sym_source_file_def_token1,
  [1903] = 1,
    ACTIONS(437), 1,
      anon_sym_Compiledfrom,
  [1907] = 1,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
  [1911] = 1,
    ACTIONS(441), 1,
      sym_flag_value,
  [1915] = 1,
    ACTIONS(443), 1,
      sym_flag_value,
  [1919] = 1,
    ACTIONS(445), 1,
      aux_sym_header_info_compile_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 288,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 327,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 361,
  [SMALL_STATE(18)] = 378,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 412,
  [SMALL_STATE(21)] = 427,
  [SMALL_STATE(22)] = 446,
  [SMALL_STATE(23)] = 465,
  [SMALL_STATE(24)] = 484,
  [SMALL_STATE(25)] = 503,
  [SMALL_STATE(26)] = 522,
  [SMALL_STATE(27)] = 541,
  [SMALL_STATE(28)] = 560,
  [SMALL_STATE(29)] = 579,
  [SMALL_STATE(30)] = 596,
  [SMALL_STATE(31)] = 619,
  [SMALL_STATE(32)] = 636,
  [SMALL_STATE(33)] = 652,
  [SMALL_STATE(34)] = 666,
  [SMALL_STATE(35)] = 680,
  [SMALL_STATE(36)] = 694,
  [SMALL_STATE(37)] = 704,
  [SMALL_STATE(38)] = 718,
  [SMALL_STATE(39)] = 730,
  [SMALL_STATE(40)] = 744,
  [SMALL_STATE(41)] = 754,
  [SMALL_STATE(42)] = 764,
  [SMALL_STATE(43)] = 776,
  [SMALL_STATE(44)] = 786,
  [SMALL_STATE(45)] = 800,
  [SMALL_STATE(46)] = 816,
  [SMALL_STATE(47)] = 832,
  [SMALL_STATE(48)] = 842,
  [SMALL_STATE(49)] = 859,
  [SMALL_STATE(50)] = 872,
  [SMALL_STATE(51)] = 889,
  [SMALL_STATE(52)] = 898,
  [SMALL_STATE(53)] = 915,
  [SMALL_STATE(54)] = 924,
  [SMALL_STATE(55)] = 941,
  [SMALL_STATE(56)] = 960,
  [SMALL_STATE(57)] = 971,
  [SMALL_STATE(58)] = 982,
  [SMALL_STATE(59)] = 993,
  [SMALL_STATE(60)] = 1004,
  [SMALL_STATE(61)] = 1021,
  [SMALL_STATE(62)] = 1038,
  [SMALL_STATE(63)] = 1051,
  [SMALL_STATE(64)] = 1068,
  [SMALL_STATE(65)] = 1078,
  [SMALL_STATE(66)] = 1088,
  [SMALL_STATE(67)] = 1096,
  [SMALL_STATE(68)] = 1106,
  [SMALL_STATE(69)] = 1118,
  [SMALL_STATE(70)] = 1128,
  [SMALL_STATE(71)] = 1138,
  [SMALL_STATE(72)] = 1146,
  [SMALL_STATE(73)] = 1158,
  [SMALL_STATE(74)] = 1165,
  [SMALL_STATE(75)] = 1172,
  [SMALL_STATE(76)] = 1179,
  [SMALL_STATE(77)] = 1190,
  [SMALL_STATE(78)] = 1197,
  [SMALL_STATE(79)] = 1204,
  [SMALL_STATE(80)] = 1211,
  [SMALL_STATE(81)] = 1218,
  [SMALL_STATE(82)] = 1229,
  [SMALL_STATE(83)] = 1236,
  [SMALL_STATE(84)] = 1247,
  [SMALL_STATE(85)] = 1254,
  [SMALL_STATE(86)] = 1265,
  [SMALL_STATE(87)] = 1272,
  [SMALL_STATE(88)] = 1281,
  [SMALL_STATE(89)] = 1292,
  [SMALL_STATE(90)] = 1305,
  [SMALL_STATE(91)] = 1314,
  [SMALL_STATE(92)] = 1327,
  [SMALL_STATE(93)] = 1340,
  [SMALL_STATE(94)] = 1347,
  [SMALL_STATE(95)] = 1354,
  [SMALL_STATE(96)] = 1365,
  [SMALL_STATE(97)] = 1378,
  [SMALL_STATE(98)] = 1389,
  [SMALL_STATE(99)] = 1396,
  [SMALL_STATE(100)] = 1406,
  [SMALL_STATE(101)] = 1412,
  [SMALL_STATE(102)] = 1422,
  [SMALL_STATE(103)] = 1428,
  [SMALL_STATE(104)] = 1436,
  [SMALL_STATE(105)] = 1446,
  [SMALL_STATE(106)] = 1452,
  [SMALL_STATE(107)] = 1458,
  [SMALL_STATE(108)] = 1468,
  [SMALL_STATE(109)] = 1474,
  [SMALL_STATE(110)] = 1484,
  [SMALL_STATE(111)] = 1490,
  [SMALL_STATE(112)] = 1500,
  [SMALL_STATE(113)] = 1510,
  [SMALL_STATE(114)] = 1516,
  [SMALL_STATE(115)] = 1526,
  [SMALL_STATE(116)] = 1532,
  [SMALL_STATE(117)] = 1542,
  [SMALL_STATE(118)] = 1552,
  [SMALL_STATE(119)] = 1560,
  [SMALL_STATE(120)] = 1566,
  [SMALL_STATE(121)] = 1572,
  [SMALL_STATE(122)] = 1578,
  [SMALL_STATE(123)] = 1584,
  [SMALL_STATE(124)] = 1594,
  [SMALL_STATE(125)] = 1601,
  [SMALL_STATE(126)] = 1608,
  [SMALL_STATE(127)] = 1613,
  [SMALL_STATE(128)] = 1620,
  [SMALL_STATE(129)] = 1627,
  [SMALL_STATE(130)] = 1634,
  [SMALL_STATE(131)] = 1641,
  [SMALL_STATE(132)] = 1648,
  [SMALL_STATE(133)] = 1655,
  [SMALL_STATE(134)] = 1662,
  [SMALL_STATE(135)] = 1669,
  [SMALL_STATE(136)] = 1676,
  [SMALL_STATE(137)] = 1683,
  [SMALL_STATE(138)] = 1690,
  [SMALL_STATE(139)] = 1697,
  [SMALL_STATE(140)] = 1704,
  [SMALL_STATE(141)] = 1711,
  [SMALL_STATE(142)] = 1718,
  [SMALL_STATE(143)] = 1725,
  [SMALL_STATE(144)] = 1732,
  [SMALL_STATE(145)] = 1737,
  [SMALL_STATE(146)] = 1744,
  [SMALL_STATE(147)] = 1751,
  [SMALL_STATE(148)] = 1755,
  [SMALL_STATE(149)] = 1759,
  [SMALL_STATE(150)] = 1763,
  [SMALL_STATE(151)] = 1767,
  [SMALL_STATE(152)] = 1771,
  [SMALL_STATE(153)] = 1775,
  [SMALL_STATE(154)] = 1779,
  [SMALL_STATE(155)] = 1783,
  [SMALL_STATE(156)] = 1787,
  [SMALL_STATE(157)] = 1791,
  [SMALL_STATE(158)] = 1795,
  [SMALL_STATE(159)] = 1799,
  [SMALL_STATE(160)] = 1803,
  [SMALL_STATE(161)] = 1807,
  [SMALL_STATE(162)] = 1811,
  [SMALL_STATE(163)] = 1815,
  [SMALL_STATE(164)] = 1819,
  [SMALL_STATE(165)] = 1823,
  [SMALL_STATE(166)] = 1827,
  [SMALL_STATE(167)] = 1831,
  [SMALL_STATE(168)] = 1835,
  [SMALL_STATE(169)] = 1839,
  [SMALL_STATE(170)] = 1843,
  [SMALL_STATE(171)] = 1847,
  [SMALL_STATE(172)] = 1851,
  [SMALL_STATE(173)] = 1855,
  [SMALL_STATE(174)] = 1859,
  [SMALL_STATE(175)] = 1863,
  [SMALL_STATE(176)] = 1867,
  [SMALL_STATE(177)] = 1871,
  [SMALL_STATE(178)] = 1875,
  [SMALL_STATE(179)] = 1879,
  [SMALL_STATE(180)] = 1883,
  [SMALL_STATE(181)] = 1887,
  [SMALL_STATE(182)] = 1891,
  [SMALL_STATE(183)] = 1895,
  [SMALL_STATE(184)] = 1899,
  [SMALL_STATE(185)] = 1903,
  [SMALL_STATE(186)] = 1907,
  [SMALL_STATE(187)] = 1911,
  [SMALL_STATE(188)] = 1915,
  [SMALL_STATE(189)] = 1919,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(145),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(107),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(71),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(148),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(150),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(153),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(188),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(177),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_access, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 8),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_info_last_mod, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(151),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_info_last_mod, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(129),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_info_last_mod_repeat1, 2), SHIFT_REPEAT(97),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_info_last_mod_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_access, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(181),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(57),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [439] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
