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
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
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
  sym_md5 = 48,
  anon_sym_MD5checksum = 49,
  anon_sym_Compiledfrom = 50,
  aux_sym_header_info_compile_token1 = 51,
  sym__path_segment = 52,
  anon_sym_SLASH = 53,
  anon_sym_Classfile = 54,
  sym_source_file = 55,
  sym_method_def = 56,
  sym__mods = 57,
  sym_mod_access = 58,
  sym_class_definition = 59,
  sym_code_def = 60,
  sym_code_info = 61,
  sym_line_number_table_def = 62,
  sym_numered_line = 63,
  sym_numered_instruction = 64,
  sym_instruction = 65,
  sym_code_info_stat = 66,
  sym_descriptor_def = 67,
  sym_flag_def = 68,
  sym__wrapped_hex_val = 69,
  sym_method_args = 70,
  sym__type = 71,
  sym_simple_type = 72,
  sym_array_type = 73,
  sym_block = 74,
  sym_source_file_def = 75,
  sym_constant_pool_def = 76,
  sym__hash_number = 77,
  sym_constant_pool_item = 78,
  sym__constant_pool_item_type = 79,
  sym__constant_pool_item_type_utf8 = 80,
  sym__constant_pool_item_type_class = 81,
  sym__constant_pool_item_type_string = 82,
  sym__constant_pool_item_type_method_ref = 83,
  sym__constant_pool_item_type_field_ref = 84,
  sym__constant_pool_item_type_name_and_type = 85,
  sym_class_info_def = 86,
  sym_class_info_item = 87,
  sym_class_info_item_simple = 88,
  sym_header_info_last_mod = 89,
  sym_header_info_md5 = 90,
  sym_header_info_compile = 91,
  sym_file_path = 92,
  sym__rest_of_the_line = 93,
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
  aux_sym_file_path_repeat1 = 106,
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
  [sym__rest_of_the_line] = "_rest_of_the_line",
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
  [sym__rest_of_the_line] = sym__rest_of_the_line,
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
  [sym__rest_of_the_line] = {
    .visible = false,
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
  [33] = 33,
  [34] = 34,
  [35] = 27,
  [36] = 36,
  [37] = 14,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 19,
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
  [53] = 34,
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
  [103] = 71,
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
  [114] = 68,
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
  [139] = 98,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 131,
  [146] = 118,
  [147] = 147,
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
  [169] = 112,
  [170] = 170,
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
  [186] = 157,
  [187] = 147,
  [188] = 188,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(268);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '.') ADVANCE(342);
      if (lookahead == '/') ADVANCE(355);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == ';') ADVANCE(269);
      if (lookahead == '=') ADVANCE(330);
      if (lookahead == 'C') ADVANCE(143);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(167);
      if (lookahead == 'U') ADVANCE(207);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(182);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead == 'v') ADVANCE(168);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '}') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(177);
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(323);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '0') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'M') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(328);
      END_STATE();
    case 14:
      if (lookahead == '5') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == '8') ADVANCE(331);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(278);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(289);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(286);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(329);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(280);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(347);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 47:
      if (lookahead == ';') ADVANCE(277);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(162);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 55:
      if (lookahead == 'F') ADVANCE(140);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(221);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(225);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(318);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 'v') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'v') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'v') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(199);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(343);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(341);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(188);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(340);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(205);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 223:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 224:
      if (lookahead == 'x') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 225:
      if (lookahead == 'y') ADVANCE(180);
      END_STATE();
    case 226:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(226)
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 227:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(227)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(229)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(230)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 265:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 266:
      if (eof) ADVANCE(268);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(166);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 267:
      if (eof) ADVANCE(268);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '.') ADVANCE(342);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '=') ADVANCE(330);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_mod_abstract);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_mod_abstract);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(47);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'b') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'd') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 's') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(332);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(334);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_NameAndType);
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
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 266},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 267},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 267},
  [9] = {.lex_state = 267},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 267},
  [13] = {.lex_state = 267},
  [14] = {.lex_state = 267},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 267},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 267},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 267},
  [22] = {.lex_state = 267},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 267},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 267},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 267},
  [32] = {.lex_state = 267},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 267},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
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
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 75},
  [58] = {.lex_state = 75},
  [59] = {.lex_state = 75},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 267},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 266},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 266},
  [67] = {.lex_state = 266},
  [68] = {.lex_state = 64},
  [69] = {.lex_state = 332},
  [70] = {.lex_state = 266},
  [71] = {.lex_state = 64},
  [72] = {.lex_state = 266},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 333},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 266},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 333},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 333},
  [95] = {.lex_state = 333},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 65},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 267},
  [102] = {.lex_state = 266},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 334},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 75},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 266},
  [117] = {.lex_state = 333},
  [118] = {.lex_state = 75},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 267},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 266},
  [131] = {.lex_state = 266},
  [132] = {.lex_state = 335},
  [133] = {.lex_state = 226},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 333},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 266},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 227},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 230},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 227},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 227},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 335},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 266},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 228},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 229},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 227},
  [187] = {.lex_state = 227},
  [188] = {.lex_state = 10},
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
    [sym_source_file] = STATE(185),
    [sym_header_info_last_mod] = STATE(92),
    [sym_header_info_md5] = STATE(144),
    [sym_header_info_compile] = STATE(33),
    [sym_header_info] = STATE(49),
    [sym_header] = STATE(3),
    [anon_sym_Lastmodified] = ACTIONS(3),
    [anon_sym_MD5checksum] = ACTIONS(5),
    [anon_sym_Compiledfrom] = ACTIONS(7),
    [anon_sym_Classfile] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(17), 1,
      anon_sym_flags_COLON,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_descriptor_def,
    STATE(10), 1,
      sym_flag_def,
    STATE(23), 1,
      sym_code_def,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(20), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [37] = 11,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_Constantpool_COLON,
    STATE(30), 1,
      sym_class_info_def,
    STATE(56), 1,
      sym_constant_pool_def,
    STATE(114), 1,
      sym_mod_access,
    STATE(181), 1,
      sym_source_file_def,
    STATE(182), 1,
      sym__mods,
    STATE(51), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(23), 3,
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
    STATE(77), 7,
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
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(17), 1,
      anon_sym_flags_COLON,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_flag_def,
    STATE(15), 1,
      sym_code_def,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(16), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [150] = 7,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_code_def,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [175] = 5,
    ACTIONS(53), 1,
      anon_sym_flags_COLON,
    ACTIONS(55), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(9), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(61), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [196] = 5,
    ACTIONS(53), 1,
      anon_sym_flags_COLON,
    ACTIONS(55), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(12), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(61), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [217] = 7,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_code_def,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(16), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [242] = 7,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(17), 1,
      anon_sym_flags_COLON,
    STATE(26), 1,
      sym_descriptor_def,
    STATE(63), 1,
      sym_flag_def,
    STATE(85), 1,
      sym_code_def,
    ACTIONS(59), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [267] = 5,
    ACTIONS(63), 1,
      anon_sym_flags_COLON,
    ACTIONS(66), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(12), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(61), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [288] = 5,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(22), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [308] = 4,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(14), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [325] = 5,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [344] = 5,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [363] = 4,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(17), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [380] = 5,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(91), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [399] = 4,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(27), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [416] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [435] = 4,
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
  [452] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(17), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [469] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(16), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [488] = 5,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [507] = 5,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(28), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [526] = 5,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(17), 1,
      anon_sym_flags_COLON,
    STATE(50), 1,
      sym_flag_def,
    STATE(76), 1,
      sym_code_def,
    ACTIONS(108), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [545] = 4,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(14), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [562] = 5,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym__mods,
    STATE(68), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [581] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(17), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [598] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_constant_pool_def,
    STATE(173), 1,
      sym_source_file_def,
    STATE(54), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [621] = 3,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [636] = 2,
    ACTIONS(130), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [648] = 1,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [658] = 2,
    ACTIONS(82), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [670] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(110), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [684] = 1,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [694] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(77), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [708] = 1,
    ACTIONS(141), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [718] = 3,
    ACTIONS(145), 1,
      anon_sym_line,
    STATE(46), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(143), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [732] = 1,
    ACTIONS(147), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [742] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(96), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [756] = 3,
    ACTIONS(145), 1,
      anon_sym_line,
    STATE(39), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(149), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [770] = 4,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym__hash_number,
    STATE(47), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [786] = 1,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [796] = 4,
    ACTIONS(159), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym__hash_number,
    STATE(45), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [812] = 3,
    ACTIONS(164), 1,
      anon_sym_line,
    STATE(46), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(162), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [826] = 4,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym__hash_number,
    STATE(45), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [842] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      sym_source_file_def,
    STATE(73), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [859] = 6,
    ACTIONS(3), 1,
      anon_sym_Lastmodified,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(38), 1,
      sym_header_info_compile,
    STATE(83), 1,
      sym_header_info_last_mod,
    STATE(142), 1,
      sym_header_info_md5,
  [878] = 3,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    STATE(99), 1,
      sym_code_def,
    ACTIONS(171), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [891] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      sym_source_file_def,
    STATE(73), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [908] = 5,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(177), 1,
      sym_number,
    STATE(79), 1,
      aux_sym_code_info_repeat1,
    STATE(80), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [925] = 1,
    ACTIONS(77), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [934] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
      sym_source_file_def,
    STATE(73), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [951] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
      sym_source_file_def,
    STATE(48), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [968] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      sym_source_file_def,
    STATE(54), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [985] = 2,
    ACTIONS(181), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(89), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [996] = 2,
    ACTIONS(181), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(120), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [1007] = 2,
    ACTIONS(181), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(129), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [1018] = 1,
    ACTIONS(183), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [1027] = 2,
    ACTIONS(187), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [1038] = 5,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(52), 1,
      aux_sym_code_info_repeat1,
    STATE(86), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1055] = 3,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    STATE(76), 1,
      sym_code_def,
    ACTIONS(108), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1068] = 2,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1078] = 1,
    ACTIONS(195), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [1086] = 2,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1096] = 2,
    ACTIONS(203), 1,
      sym_comment,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1106] = 3,
    ACTIONS(205), 1,
      sym_mod_static,
    ACTIONS(207), 1,
      sym_mod_abstract,
    ACTIONS(209), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1118] = 5,
    ACTIONS(211), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(213), 1,
      sym__path_segment,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      sym_file_path,
    STATE(106), 1,
      sym__rest_of_the_line,
  [1134] = 2,
    ACTIONS(219), 1,
      sym_comment,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1144] = 1,
    ACTIONS(221), 5,
      sym_mod_static,
      sym_mod_abstract,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1152] = 2,
    ACTIONS(225), 1,
      sym_comment,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1162] = 3,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(73), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [1174] = 4,
    ACTIONS(232), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    STATE(113), 1,
      sym__rest_of_the_line,
    STATE(117), 1,
      aux_sym_file_path_repeat1,
  [1187] = 1,
    ACTIONS(236), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1194] = 1,
    ACTIONS(171), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1201] = 1,
    ACTIONS(238), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1208] = 2,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(240), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1217] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(247), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1228] = 3,
    ACTIONS(177), 1,
      sym_number,
    ACTIONS(249), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(81), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1239] = 3,
    ACTIONS(251), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(253), 1,
      sym_number,
    STATE(81), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1250] = 1,
    ACTIONS(256), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1257] = 4,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(40), 1,
      sym_header_info_compile,
    STATE(140), 1,
      sym_header_info_md5,
  [1270] = 1,
    ACTIONS(258), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1277] = 1,
    ACTIONS(108), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1284] = 3,
    ACTIONS(175), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(177), 1,
      sym_number,
    STATE(81), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1295] = 1,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1302] = 4,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(74), 1,
      aux_sym_file_path_repeat1,
    STATE(100), 1,
      sym__rest_of_the_line,
  [1315] = 4,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(109), 1,
      aux_sym_method_args_repeat1,
  [1328] = 1,
    ACTIONS(270), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1335] = 1,
    ACTIONS(272), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1342] = 4,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(38), 1,
      sym_header_info_compile,
    STATE(142), 1,
      sym_header_info_md5,
  [1355] = 1,
    ACTIONS(274), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1362] = 4,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    ACTIONS(276), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(95), 1,
      aux_sym_file_path_repeat1,
    STATE(108), 1,
      sym__rest_of_the_line,
  [1375] = 4,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(100), 1,
      sym__rest_of_the_line,
    STATE(117), 1,
      aux_sym_file_path_repeat1,
  [1388] = 1,
    ACTIONS(278), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1395] = 1,
    ACTIONS(280), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1402] = 2,
    ACTIONS(282), 1,
      sym_mod_abstract,
    ACTIONS(284), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1411] = 1,
    ACTIONS(286), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1418] = 1,
    ACTIONS(288), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1424] = 3,
    ACTIONS(290), 1,
      aux_sym_code_info_stat_token1,
    STATE(62), 1,
      sym_code_info_stat,
    STATE(128), 1,
      sym_code_info,
  [1434] = 2,
    ACTIONS(294), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1442] = 1,
    ACTIONS(296), 3,
      sym_mod_static,
      sym_mod_abstract,
      sym_class_keyword,
  [1448] = 1,
    ACTIONS(298), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1454] = 3,
    ACTIONS(276), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(300), 1,
      sym__path_segment,
    STATE(108), 1,
      sym__rest_of_the_line,
  [1464] = 1,
    ACTIONS(302), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1470] = 1,
    ACTIONS(304), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1476] = 1,
    ACTIONS(306), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1482] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_method_args_repeat1,
  [1492] = 3,
    ACTIONS(153), 1,
      anon_sym_POUND,
    ACTIONS(310), 1,
      sym_number,
    STATE(13), 1,
      sym__hash_number,
  [1502] = 1,
    ACTIONS(247), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1508] = 1,
    ACTIONS(312), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1514] = 1,
    ACTIONS(314), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1520] = 3,
    ACTIONS(316), 1,
      sym_mod_static,
    ACTIONS(318), 1,
      sym_mod_abstract,
    ACTIONS(320), 1,
      sym_class_keyword,
  [1530] = 1,
    ACTIONS(322), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1536] = 1,
    ACTIONS(324), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1542] = 3,
    ACTIONS(326), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(328), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      aux_sym_file_path_repeat1,
  [1552] = 1,
    ACTIONS(284), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1558] = 3,
    ACTIONS(153), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      sym_number,
    STATE(31), 1,
      sym__hash_number,
  [1568] = 2,
    ACTIONS(268), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1576] = 3,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_method_args_repeat1,
  [1586] = 2,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym__hash_number,
  [1593] = 1,
    ACTIONS(338), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1598] = 2,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym__hash_number,
  [1605] = 2,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym__hash_number,
  [1612] = 2,
    ACTIONS(290), 1,
      aux_sym_code_info_stat_token1,
    STATE(111), 1,
      sym_code_info_stat,
  [1619] = 2,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym__hash_number,
  [1626] = 2,
    ACTIONS(340), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(75), 1,
      sym_line_number_table_def,
  [1633] = 2,
    ACTIONS(268), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(342), 1,
      sym_identifier,
  [1640] = 2,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_method_args,
  [1647] = 2,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym__wrapped_hex_val,
  [1654] = 2,
    ACTIONS(348), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(143), 1,
      sym__rest_of_the_line,
  [1661] = 2,
    ACTIONS(350), 1,
      aux_sym_instruction_token1,
    STATE(102), 1,
      sym_instruction,
  [1668] = 2,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym__hash_number,
  [1675] = 2,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym__hash_number,
  [1682] = 2,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym__hash_number,
  [1689] = 2,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym__hash_number,
  [1696] = 1,
    ACTIONS(326), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1701] = 2,
    ACTIONS(352), 1,
      sym_mod_abstract,
    ACTIONS(354), 1,
      sym_class_keyword,
  [1708] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(44), 1,
      sym_header_info_compile,
  [1715] = 2,
    ACTIONS(356), 1,
      anon_sym_public,
    STATE(178), 1,
      sym_class_definition,
  [1722] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(40), 1,
      sym_header_info_compile,
  [1729] = 1,
    ACTIONS(358), 2,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1734] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(38), 1,
      sym_header_info_compile,
  [1741] = 2,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym__wrapped_hex_val,
  [1748] = 1,
    ACTIONS(354), 1,
      sym_class_keyword,
  [1752] = 1,
    ACTIONS(360), 1,
      sym_flag_value,
  [1756] = 1,
    ACTIONS(362), 1,
      sym_number,
  [1760] = 1,
    ACTIONS(364), 1,
      aux_sym_class_info_item_simple_token1,
  [1764] = 1,
    ACTIONS(366), 1,
      anon_sym_COLON,
  [1768] = 1,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [1772] = 1,
    ACTIONS(370), 1,
      sym_number,
  [1776] = 1,
    ACTIONS(372), 1,
      anon_sym_COLON,
  [1780] = 1,
    ACTIONS(374), 1,
      anon_sym_SEMI,
  [1784] = 1,
    ACTIONS(376), 1,
      sym_flag_value,
  [1788] = 1,
    ACTIONS(378), 1,
      sym_md5,
  [1792] = 1,
    ACTIONS(380), 1,
      sym_flag_value,
  [1796] = 1,
    ACTIONS(382), 1,
      sym_hex_value,
  [1800] = 1,
    ACTIONS(384), 1,
      anon_sym_COLON,
  [1804] = 1,
    ACTIONS(386), 1,
      sym_number,
  [1808] = 1,
    ACTIONS(388), 1,
      sym_number,
  [1812] = 1,
    ACTIONS(390), 1,
      anon_sym_DOT,
  [1816] = 1,
    ACTIONS(392), 1,
      anon_sym_DOT,
  [1820] = 1,
    ACTIONS(394), 1,
      anon_sym_SEMI,
  [1824] = 1,
    ACTIONS(396), 1,
      sym_descriptor_value,
  [1828] = 1,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
  [1832] = 1,
    ACTIONS(400), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1836] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [1840] = 1,
    ACTIONS(402), 1,
      sym_class_keyword,
  [1844] = 1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [1848] = 1,
    ACTIONS(406), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1852] = 1,
    ACTIONS(408), 1,
      anon_sym_SEMI,
  [1856] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [1860] = 1,
    ACTIONS(410), 1,
      sym_identifier,
  [1864] = 1,
    ACTIONS(412), 1,
      anon_sym_EQ,
  [1868] = 1,
    ACTIONS(414), 1,
      sym_number,
  [1872] = 1,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
  [1876] = 1,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
  [1880] = 1,
    ACTIONS(420), 1,
      sym_identifier,
  [1884] = 1,
    ACTIONS(422), 1,
      sym__path_segment,
  [1888] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [1892] = 1,
    ACTIONS(424), 1,
      sym_class_keyword,
  [1896] = 1,
    ACTIONS(426), 1,
      aux_sym_source_file_def_token1,
  [1900] = 1,
    ACTIONS(428), 1,
      anon_sym_Compiledfrom,
  [1904] = 1,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
  [1908] = 1,
    ACTIONS(432), 1,
      sym_flag_value,
  [1912] = 1,
    ACTIONS(434), 1,
      sym_flag_value,
  [1916] = 1,
    ACTIONS(436), 1,
      aux_sym_header_info_compile_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 267,
  [SMALL_STATE(13)] = 288,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 325,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 363,
  [SMALL_STATE(18)] = 380,
  [SMALL_STATE(19)] = 399,
  [SMALL_STATE(20)] = 416,
  [SMALL_STATE(21)] = 435,
  [SMALL_STATE(22)] = 452,
  [SMALL_STATE(23)] = 469,
  [SMALL_STATE(24)] = 488,
  [SMALL_STATE(25)] = 507,
  [SMALL_STATE(26)] = 526,
  [SMALL_STATE(27)] = 545,
  [SMALL_STATE(28)] = 562,
  [SMALL_STATE(29)] = 581,
  [SMALL_STATE(30)] = 598,
  [SMALL_STATE(31)] = 621,
  [SMALL_STATE(32)] = 636,
  [SMALL_STATE(33)] = 648,
  [SMALL_STATE(34)] = 658,
  [SMALL_STATE(35)] = 670,
  [SMALL_STATE(36)] = 684,
  [SMALL_STATE(37)] = 694,
  [SMALL_STATE(38)] = 708,
  [SMALL_STATE(39)] = 718,
  [SMALL_STATE(40)] = 732,
  [SMALL_STATE(41)] = 742,
  [SMALL_STATE(42)] = 756,
  [SMALL_STATE(43)] = 770,
  [SMALL_STATE(44)] = 786,
  [SMALL_STATE(45)] = 796,
  [SMALL_STATE(46)] = 812,
  [SMALL_STATE(47)] = 826,
  [SMALL_STATE(48)] = 842,
  [SMALL_STATE(49)] = 859,
  [SMALL_STATE(50)] = 878,
  [SMALL_STATE(51)] = 891,
  [SMALL_STATE(52)] = 908,
  [SMALL_STATE(53)] = 925,
  [SMALL_STATE(54)] = 934,
  [SMALL_STATE(55)] = 951,
  [SMALL_STATE(56)] = 968,
  [SMALL_STATE(57)] = 985,
  [SMALL_STATE(58)] = 996,
  [SMALL_STATE(59)] = 1007,
  [SMALL_STATE(60)] = 1018,
  [SMALL_STATE(61)] = 1027,
  [SMALL_STATE(62)] = 1038,
  [SMALL_STATE(63)] = 1055,
  [SMALL_STATE(64)] = 1068,
  [SMALL_STATE(65)] = 1078,
  [SMALL_STATE(66)] = 1086,
  [SMALL_STATE(67)] = 1096,
  [SMALL_STATE(68)] = 1106,
  [SMALL_STATE(69)] = 1118,
  [SMALL_STATE(70)] = 1134,
  [SMALL_STATE(71)] = 1144,
  [SMALL_STATE(72)] = 1152,
  [SMALL_STATE(73)] = 1162,
  [SMALL_STATE(74)] = 1174,
  [SMALL_STATE(75)] = 1187,
  [SMALL_STATE(76)] = 1194,
  [SMALL_STATE(77)] = 1201,
  [SMALL_STATE(78)] = 1208,
  [SMALL_STATE(79)] = 1217,
  [SMALL_STATE(80)] = 1228,
  [SMALL_STATE(81)] = 1239,
  [SMALL_STATE(82)] = 1250,
  [SMALL_STATE(83)] = 1257,
  [SMALL_STATE(84)] = 1270,
  [SMALL_STATE(85)] = 1277,
  [SMALL_STATE(86)] = 1284,
  [SMALL_STATE(87)] = 1295,
  [SMALL_STATE(88)] = 1302,
  [SMALL_STATE(89)] = 1315,
  [SMALL_STATE(90)] = 1328,
  [SMALL_STATE(91)] = 1335,
  [SMALL_STATE(92)] = 1342,
  [SMALL_STATE(93)] = 1355,
  [SMALL_STATE(94)] = 1362,
  [SMALL_STATE(95)] = 1375,
  [SMALL_STATE(96)] = 1388,
  [SMALL_STATE(97)] = 1395,
  [SMALL_STATE(98)] = 1402,
  [SMALL_STATE(99)] = 1411,
  [SMALL_STATE(100)] = 1418,
  [SMALL_STATE(101)] = 1424,
  [SMALL_STATE(102)] = 1434,
  [SMALL_STATE(103)] = 1442,
  [SMALL_STATE(104)] = 1448,
  [SMALL_STATE(105)] = 1454,
  [SMALL_STATE(106)] = 1464,
  [SMALL_STATE(107)] = 1470,
  [SMALL_STATE(108)] = 1476,
  [SMALL_STATE(109)] = 1482,
  [SMALL_STATE(110)] = 1492,
  [SMALL_STATE(111)] = 1502,
  [SMALL_STATE(112)] = 1508,
  [SMALL_STATE(113)] = 1514,
  [SMALL_STATE(114)] = 1520,
  [SMALL_STATE(115)] = 1530,
  [SMALL_STATE(116)] = 1536,
  [SMALL_STATE(117)] = 1542,
  [SMALL_STATE(118)] = 1552,
  [SMALL_STATE(119)] = 1558,
  [SMALL_STATE(120)] = 1568,
  [SMALL_STATE(121)] = 1576,
  [SMALL_STATE(122)] = 1586,
  [SMALL_STATE(123)] = 1593,
  [SMALL_STATE(124)] = 1598,
  [SMALL_STATE(125)] = 1605,
  [SMALL_STATE(126)] = 1612,
  [SMALL_STATE(127)] = 1619,
  [SMALL_STATE(128)] = 1626,
  [SMALL_STATE(129)] = 1633,
  [SMALL_STATE(130)] = 1640,
  [SMALL_STATE(131)] = 1647,
  [SMALL_STATE(132)] = 1654,
  [SMALL_STATE(133)] = 1661,
  [SMALL_STATE(134)] = 1668,
  [SMALL_STATE(135)] = 1675,
  [SMALL_STATE(136)] = 1682,
  [SMALL_STATE(137)] = 1689,
  [SMALL_STATE(138)] = 1696,
  [SMALL_STATE(139)] = 1701,
  [SMALL_STATE(140)] = 1708,
  [SMALL_STATE(141)] = 1715,
  [SMALL_STATE(142)] = 1722,
  [SMALL_STATE(143)] = 1729,
  [SMALL_STATE(144)] = 1734,
  [SMALL_STATE(145)] = 1741,
  [SMALL_STATE(146)] = 1748,
  [SMALL_STATE(147)] = 1752,
  [SMALL_STATE(148)] = 1756,
  [SMALL_STATE(149)] = 1760,
  [SMALL_STATE(150)] = 1764,
  [SMALL_STATE(151)] = 1768,
  [SMALL_STATE(152)] = 1772,
  [SMALL_STATE(153)] = 1776,
  [SMALL_STATE(154)] = 1780,
  [SMALL_STATE(155)] = 1784,
  [SMALL_STATE(156)] = 1788,
  [SMALL_STATE(157)] = 1792,
  [SMALL_STATE(158)] = 1796,
  [SMALL_STATE(159)] = 1800,
  [SMALL_STATE(160)] = 1804,
  [SMALL_STATE(161)] = 1808,
  [SMALL_STATE(162)] = 1812,
  [SMALL_STATE(163)] = 1816,
  [SMALL_STATE(164)] = 1820,
  [SMALL_STATE(165)] = 1824,
  [SMALL_STATE(166)] = 1828,
  [SMALL_STATE(167)] = 1832,
  [SMALL_STATE(168)] = 1836,
  [SMALL_STATE(169)] = 1840,
  [SMALL_STATE(170)] = 1844,
  [SMALL_STATE(171)] = 1848,
  [SMALL_STATE(172)] = 1852,
  [SMALL_STATE(173)] = 1856,
  [SMALL_STATE(174)] = 1860,
  [SMALL_STATE(175)] = 1864,
  [SMALL_STATE(176)] = 1868,
  [SMALL_STATE(177)] = 1872,
  [SMALL_STATE(178)] = 1876,
  [SMALL_STATE(179)] = 1880,
  [SMALL_STATE(180)] = 1884,
  [SMALL_STATE(181)] = 1888,
  [SMALL_STATE(182)] = 1892,
  [SMALL_STATE(183)] = 1896,
  [SMALL_STATE(184)] = 1900,
  [SMALL_STATE(185)] = 1904,
  [SMALL_STATE(186)] = 1908,
  [SMALL_STATE(187)] = 1912,
  [SMALL_STATE(188)] = 1916,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(131),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(110),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(147),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(149),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(71),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(187),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(176),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(152),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_access, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(126),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(150),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 8),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_access, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(180),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(58),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [430] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
