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
#define STATE_COUNT 207
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_SEMI = 3,
  anon_sym_public = 4,
  anon_sym_LBRACE_RBRACE = 5,
  sym_mod_static = 6,
  sym_mod_abstract = 7,
  sym_mod_final = 8,
  anon_sym_private = 9,
  anon_sym_protected = 10,
  anon_sym_LPAREN_RPAREN_SEMI = 11,
  anon_sym_Code_COLON = 12,
  anon_sym_COMMA = 13,
  anon_sym_LineNumberTable_COLON = 14,
  anon_sym_line = 15,
  anon_sym_COLON = 16,
  aux_sym_instruction_token1 = 17,
  anon_sym_POUND = 18,
  aux_sym_code_info_stat_token1 = 19,
  anon_sym_descriptor_COLON = 20,
  sym_descriptor_value = 21,
  anon_sym_flags_COLON = 22,
  sym_flag_value = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_hex_value = 26,
  anon_sym_bool = 27,
  anon_sym_void = 28,
  anon_sym_int = 29,
  aux_sym_simple_type_token1 = 30,
  anon_sym_LBRACK_RBRACK = 31,
  sym_identifier = 32,
  sym_number = 33,
  anon_sym_SourceFile_COLON_DQUOTE = 34,
  aux_sym_source_file_def_token1 = 35,
  anon_sym_DQUOTE = 36,
  sym_comment = 37,
  anon_sym_Constantpool_COLON = 38,
  anon_sym_EQ = 39,
  anon_sym_Utf8 = 40,
  aux_sym__constant_pool_item_type_utf8_token1 = 41,
  anon_sym_Class = 42,
  anon_sym_String = 43,
  anon_sym_Methodref = 44,
  anon_sym_DOT = 45,
  anon_sym_Fieldref = 46,
  anon_sym_NameAndType = 47,
  sym_class_keyword = 48,
  aux_sym_class_info_item_simple_token1 = 49,
  anon_sym_Lastmodified = 50,
  sym_md5 = 51,
  anon_sym_MD5checksum = 52,
  anon_sym_Compiledfrom = 53,
  aux_sym_header_info_compile_token1 = 54,
  sym__path_segment = 55,
  anon_sym_SLASH = 56,
  anon_sym_Classfile = 57,
  sym_source_file = 58,
  sym_source_file_verbose = 59,
  sym_source_file_plain = 60,
  sym_class_def_plain = 61,
  sym_class_def_plain_body = 62,
  sym_class_def_plain_body_item = 63,
  sym_field_def = 64,
  sym_method_def_plain = 65,
  sym_method_def = 66,
  sym_static_block_def = 67,
  sym__mods = 68,
  sym_mod_access = 69,
  sym_class_definition = 70,
  sym_code_def = 71,
  sym_code_info = 72,
  sym_line_number_table_def = 73,
  sym_numered_line = 74,
  sym_numered_instruction = 75,
  sym_instruction = 76,
  sym_code_info_stat = 77,
  sym_descriptor_def = 78,
  sym_flag_def = 79,
  sym__wrapped_hex_val = 80,
  sym_args = 81,
  sym__type = 82,
  sym_simple_type = 83,
  sym_array_type = 84,
  sym_block = 85,
  sym_source_file_def = 86,
  sym_constant_pool_def = 87,
  sym__hash_number = 88,
  sym_constant_pool_item = 89,
  sym__constant_pool_item_type = 90,
  sym__constant_pool_item_type_utf8 = 91,
  sym__constant_pool_item_type_class = 92,
  sym__constant_pool_item_type_string = 93,
  sym__constant_pool_item_type_method_ref = 94,
  sym__constant_pool_item_type_field_ref = 95,
  sym__constant_pool_item_type_name_and_type = 96,
  sym_class_info_def = 97,
  sym_class_info_item = 98,
  sym_class_info_item_simple = 99,
  sym_header_info_last_mod = 100,
  sym_header_info_md5 = 101,
  sym_header_info_compile = 102,
  sym_file_path = 103,
  sym__rest_of_the_line = 104,
  sym_header_info = 105,
  sym_header = 106,
  aux_sym_source_file_verbose_repeat1 = 107,
  aux_sym_class_def_plain_body_repeat1 = 108,
  aux_sym_class_definition_repeat1 = 109,
  aux_sym_code_info_repeat1 = 110,
  aux_sym_code_info_repeat2 = 111,
  aux_sym_line_number_table_def_repeat1 = 112,
  aux_sym_flag_def_repeat1 = 113,
  aux_sym_args_repeat1 = 114,
  aux_sym_constant_pool_def_repeat1 = 115,
  aux_sym_class_info_def_repeat1 = 116,
  aux_sym_class_info_item_simple_repeat1 = 117,
  aux_sym_file_path_repeat1 = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_public] = "public",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [sym_mod_static] = "mod_static",
  [sym_mod_abstract] = "mod_abstract",
  [sym_mod_final] = "mod_final",
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
  [anon_sym_int] = "int",
  [aux_sym_simple_type_token1] = "simple_type_token1",
  [anon_sym_LBRACK_RBRACK] = "[]",
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
  [sym_source_file_verbose] = "source_file_verbose",
  [sym_source_file_plain] = "source_file_plain",
  [sym_class_def_plain] = "class_def_plain",
  [sym_class_def_plain_body] = "class_def_plain_body",
  [sym_class_def_plain_body_item] = "class_def_plain_body_item",
  [sym_field_def] = "field_def",
  [sym_method_def_plain] = "method_def_plain",
  [sym_method_def] = "method_def",
  [sym_static_block_def] = "static_block_def",
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
  [sym_args] = "args",
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
  [aux_sym_source_file_verbose_repeat1] = "source_file_verbose_repeat1",
  [aux_sym_class_def_plain_body_repeat1] = "class_def_plain_body_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_code_info_repeat2] = "code_info_repeat2",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym_constant_pool_def_repeat1] = "constant_pool_def_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_file_path_repeat1] = "file_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [sym_mod_static] = sym_mod_static,
  [sym_mod_abstract] = sym_mod_abstract,
  [sym_mod_final] = sym_mod_final,
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
  [anon_sym_int] = anon_sym_int,
  [aux_sym_simple_type_token1] = aux_sym_simple_type_token1,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
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
  [sym_source_file_verbose] = sym_source_file_verbose,
  [sym_source_file_plain] = sym_source_file_plain,
  [sym_class_def_plain] = sym_class_def_plain,
  [sym_class_def_plain_body] = sym_class_def_plain_body,
  [sym_class_def_plain_body_item] = sym_class_def_plain_body_item,
  [sym_field_def] = sym_field_def,
  [sym_method_def_plain] = sym_method_def_plain,
  [sym_method_def] = sym_method_def,
  [sym_static_block_def] = sym_static_block_def,
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
  [sym_args] = sym_args,
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
  [aux_sym_source_file_verbose_repeat1] = aux_sym_source_file_verbose_repeat1,
  [aux_sym_class_def_plain_body_repeat1] = aux_sym_class_def_plain_body_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_code_info_repeat2] = aux_sym_code_info_repeat2,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
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
  [sym_mod_final] = {
    .visible = true,
    .named = true,
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
  [anon_sym_int] = {
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
  [sym_source_file_verbose] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file_plain] = {
    .visible = true,
    .named = true,
  },
  [sym_class_def_plain] = {
    .visible = true,
    .named = true,
  },
  [sym_class_def_plain_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_def_plain_body_item] = {
    .visible = true,
    .named = true,
  },
  [sym_field_def] = {
    .visible = true,
    .named = true,
  },
  [sym_method_def_plain] = {
    .visible = true,
    .named = true,
  },
  [sym_method_def] = {
    .visible = true,
    .named = true,
  },
  [sym_static_block_def] = {
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
  [sym_args] = {
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
  [aux_sym_source_file_verbose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_def_plain_body_repeat1] = {
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
  [aux_sym_args_repeat1] = {
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
  [53] = 30,
  [54] = 54,
  [55] = 55,
  [56] = 21,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 33,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 29,
  [72] = 20,
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
  [83] = 39,
  [84] = 84,
  [85] = 28,
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
  [101] = 41,
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
  [125] = 61,
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
  [139] = 58,
  [140] = 128,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
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
  [169] = 169,
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
  [181] = 73,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 86,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 91,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 186,
  [204] = 168,
  [205] = 152,
  [206] = 206,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(265);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(362);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == ';') ADVANCE(268);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'L') ADVANCE(52);
      if (lookahead == 'M') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(164);
      if (lookahead == 'U') ADVANCE(204);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'b') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(331);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(268);
      if (lookahead == 'C') ADVANCE(148);
      if (lookahead == 'L') ADVANCE(124);
      if (lookahead == 'S') ADVANCE(163);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == '0') ADVANCE(222);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'M') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(203);
      if (lookahead == 'U') ADVANCE(204);
      if (lookahead == '{') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(336);
      END_STATE();
    case 16:
      if (lookahead == '5') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == '8') ADVANCE(339);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(280);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(291);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(288);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(337);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(282);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'g') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 40:
      if (lookahead == ';') ADVANCE(279);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(157);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 46:
      if (lookahead == 'F') ADVANCE(135);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(219);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(223);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(328);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'b') ADVANCE(319);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'b') ADVANCE(319);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(319);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(197);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(351);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(349);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(348);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 136:
      if (lookahead == 'k') ADVANCE(202);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(357);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 221:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 222:
      if (lookahead == 'x') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 223:
      if (lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 224:
      if (lookahead == '}') ADVANCE(270);
      END_STATE();
    case 225:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(225)
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 226:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(226)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 227:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(227)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(229)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 264:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_mod_abstract);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_mod_abstract);
      if (lookahead == '.') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_mod_final);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_mod_final);
      if (lookahead == '.') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(40);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'a') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'a') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'b') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'c') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'c') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'd') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'l') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 's') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(340);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(345);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(342);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(345);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(345);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 11},
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
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 68},
  [25] = {.lex_state = 68},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 68},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 68},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 56},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 340},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 341},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 341},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 68},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 341},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 68},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 341},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 68},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 341},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 342},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 343},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 225},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 341},
  [146] = {.lex_state = 226},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 227},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 227},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 229},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 343},
  [168] = {.lex_state = 227},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 228},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 227},
  [205] = {.lex_state = 227},
  [206] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [sym_mod_static] = ACTIONS(1),
    [sym_mod_abstract] = ACTIONS(1),
    [sym_mod_final] = ACTIONS(1),
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
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
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
    [sym_source_file] = STATE(206),
    [sym_source_file_verbose] = STATE(202),
    [sym_source_file_plain] = STATE(202),
    [sym_header_info_compile] = STATE(43),
    [sym_header_info] = STATE(138),
    [sym_header] = STATE(47),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    ACTIONS(13), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(15), 1,
      anon_sym_flags_COLON,
    STATE(7), 1,
      sym_descriptor_def,
    STATE(10), 1,
      sym_flag_def,
    STATE(19), 1,
      sym_code_def,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [37] = 7,
    ACTIONS(17), 1,
      anon_sym_Utf8,
    ACTIONS(19), 1,
      anon_sym_Class,
    ACTIONS(21), 1,
      anon_sym_String,
    ACTIONS(23), 1,
      anon_sym_Methodref,
    ACTIONS(25), 1,
      anon_sym_Fieldref,
    ACTIONS(27), 1,
      anon_sym_NameAndType,
    STATE(97), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
  [65] = 7,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 1,
      sym_mod_static,
    STATE(28), 1,
      sym_mod_access,
    STATE(34), 1,
      sym__mods,
    STATE(4), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    ACTIONS(31), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
    STATE(170), 3,
      sym_field_def,
      sym_method_def_plain,
      sym_static_block_def,
  [92] = 7,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_mod_static,
    STATE(28), 1,
      sym_mod_access,
    STATE(34), 1,
      sym__mods,
    STATE(6), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
    STATE(170), 3,
      sym_field_def,
      sym_method_def_plain,
      sym_static_block_def,
  [119] = 7,
    ACTIONS(39), 1,
      sym_mod_static,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_mod_access,
    STATE(34), 1,
      sym__mods,
    STATE(4), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
    STATE(170), 3,
      sym_field_def,
      sym_method_def_plain,
      sym_static_block_def,
  [146] = 9,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_flags_COLON,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_flag_def,
    STATE(14), 1,
      sym_code_def,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(16), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [177] = 7,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    ACTIONS(13), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(15), 1,
      anon_sym_flags_COLON,
    STATE(15), 1,
      sym_descriptor_def,
    STATE(44), 1,
      sym_flag_def,
    STATE(68), 1,
      sym_code_def,
    ACTIONS(45), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [202] = 7,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_code_def,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [227] = 7,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_code_def,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(16), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [252] = 5,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(13), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [271] = 5,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(11), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [290] = 5,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(13), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(55), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [309] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [328] = 5,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_flags_COLON,
    STATE(37), 1,
      sym_flag_def,
    STATE(87), 1,
      sym_code_def,
    ACTIONS(58), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [347] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(13), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [366] = 5,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(13), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [385] = 5,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(13), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [404] = 5,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__mods,
    STATE(28), 1,
      sym_mod_access,
    STATE(16), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [423] = 2,
    ACTIONS(62), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(60), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
      anon_sym_DOT,
  [436] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 5,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
  [450] = 3,
    ACTIONS(70), 1,
      anon_sym_line,
    STATE(27), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(68), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [464] = 5,
    ACTIONS(72), 1,
      anon_sym_flags_COLON,
    ACTIONS(74), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(76), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(35), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(115), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [482] = 2,
    STATE(66), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
    ACTIONS(78), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [494] = 2,
    STATE(133), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
    ACTIONS(78), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [506] = 3,
    ACTIONS(82), 1,
      anon_sym_line,
    STATE(26), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(80), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [520] = 3,
    ACTIONS(70), 1,
      anon_sym_line,
    STATE(26), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(85), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [534] = 4,
    ACTIONS(87), 1,
      sym_mod_static,
    ACTIONS(89), 1,
      sym_mod_abstract,
    ACTIONS(91), 1,
      sym_mod_final,
    ACTIONS(93), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [550] = 1,
    ACTIONS(95), 7,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [560] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(97), 5,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
  [574] = 5,
    ACTIONS(72), 1,
      anon_sym_flags_COLON,
    ACTIONS(76), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(102), 1,
      anon_sym_Constantpool_COLON,
    STATE(23), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(115), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [592] = 2,
    STATE(100), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
    ACTIONS(78), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [604] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(104), 5,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
  [618] = 2,
    STATE(94), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
    ACTIONS(78), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [630] = 5,
    ACTIONS(106), 1,
      anon_sym_flags_COLON,
    ACTIONS(109), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(111), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(35), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(115), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [648] = 5,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(118), 1,
      sym_number,
    STATE(45), 1,
      aux_sym_code_info_repeat1,
    STATE(89), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [665] = 3,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    STATE(84), 1,
      sym_code_def,
    ACTIONS(120), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [678] = 4,
    ACTIONS(124), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym__hash_number,
    ACTIONS(122), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(38), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [693] = 1,
    ACTIONS(97), 6,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
  [702] = 4,
    ACTIONS(129), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym__hash_number,
    ACTIONS(127), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(48), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [717] = 3,
    ACTIONS(131), 1,
      sym_mod_abstract,
    ACTIONS(133), 1,
      sym_mod_final,
    ACTIONS(135), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [730] = 5,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(59), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(139), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [747] = 4,
    STATE(85), 1,
      sym_mod_access,
    STATE(198), 1,
      sym__mods,
    STATE(199), 1,
      sym_class_def_plain,
    ACTIONS(145), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [762] = 3,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    STATE(87), 1,
      sym_code_def,
    ACTIONS(58), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [775] = 5,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(147), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(78), 1,
      aux_sym_code_info_repeat1,
    STATE(77), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [792] = 1,
    ACTIONS(149), 6,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
  [801] = 4,
    STATE(85), 1,
      sym_mod_access,
    STATE(120), 1,
      sym_class_info_def,
    STATE(197), 1,
      sym__mods,
    ACTIONS(145), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [816] = 4,
    ACTIONS(129), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym__hash_number,
    ACTIONS(151), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(38), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [831] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(184), 1,
      sym_source_file_def,
    STATE(62), 2,
      sym_block,
      aux_sym_source_file_verbose_repeat1,
  [845] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(55), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(157), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [859] = 5,
    ACTIONS(161), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(163), 1,
      sym__path_segment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    STATE(200), 1,
      sym__rest_of_the_line,
    STATE(201), 1,
      sym_file_path,
  [875] = 3,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(167), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [887] = 4,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(53), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(97), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [901] = 4,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(181), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [915] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(185), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [929] = 4,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(53), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [943] = 1,
    ACTIONS(193), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [951] = 2,
    ACTIONS(195), 1,
      sym_mod_final,
    ACTIONS(197), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [961] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(157), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [975] = 1,
    ACTIONS(199), 5,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
  [983] = 2,
    ACTIONS(133), 1,
      sym_mod_final,
    ACTIONS(135), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [993] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(175), 1,
      sym_source_file_def,
    STATE(75), 2,
      sym_block,
      aux_sym_source_file_verbose_repeat1,
  [1007] = 4,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(56), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(104), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1021] = 1,
    ACTIONS(203), 5,
      anon_sym_RBRACE,
      anon_sym_public,
      sym_mod_static,
      anon_sym_private,
      anon_sym_protected,
  [1029] = 1,
    ACTIONS(205), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1037] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(108), 1,
      aux_sym_args_repeat1,
  [1050] = 4,
    ACTIONS(213), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      aux_sym_file_path_repeat1,
    STATE(189), 1,
      sym__rest_of_the_line,
  [1063] = 1,
    ACTIONS(58), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1070] = 2,
    ACTIONS(219), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(217), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1079] = 4,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(88), 1,
      aux_sym_file_path_repeat1,
    STATE(195), 1,
      sym__rest_of_the_line,
  [1092] = 1,
    ACTIONS(223), 4,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_class_keyword,
  [1099] = 1,
    ACTIONS(60), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [1106] = 1,
    ACTIONS(225), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [1113] = 2,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(227), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1122] = 3,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(75), 2,
      sym_block,
      aux_sym_source_file_verbose_repeat1,
  [1133] = 3,
    ACTIONS(236), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(238), 1,
      sym_number,
    STATE(76), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1144] = 3,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(241), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(76), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1155] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(246), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1166] = 2,
    ACTIONS(250), 1,
      sym_comment,
    ACTIONS(248), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1175] = 2,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(252), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1184] = 2,
    ACTIONS(258), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1193] = 4,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(96), 1,
      aux_sym_file_path_repeat1,
    STATE(183), 1,
      sym__rest_of_the_line,
  [1206] = 2,
    ACTIONS(176), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(97), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1215] = 1,
    ACTIONS(262), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1222] = 4,
    ACTIONS(264), 1,
      sym_mod_static,
    ACTIONS(266), 1,
      sym_mod_abstract,
    ACTIONS(268), 1,
      sym_mod_final,
    ACTIONS(270), 1,
      sym_class_keyword,
  [1235] = 1,
    ACTIONS(197), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [1242] = 1,
    ACTIONS(120), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1249] = 4,
    ACTIONS(213), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    STATE(96), 1,
      aux_sym_file_path_repeat1,
    STATE(189), 1,
      sym__rest_of_the_line,
  [1262] = 3,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(147), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(76), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1273] = 1,
    ACTIONS(272), 4,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1280] = 1,
    ACTIONS(135), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym_simple_type_token1,
  [1287] = 2,
    ACTIONS(276), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1296] = 2,
    ACTIONS(280), 1,
      sym_comment,
    ACTIONS(278), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1305] = 4,
    ACTIONS(211), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_identifier,
    STATE(147), 1,
      sym_args,
  [1318] = 1,
    ACTIONS(286), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1324] = 3,
    ACTIONS(288), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    STATE(96), 1,
      aux_sym_file_path_repeat1,
  [1334] = 1,
    ACTIONS(293), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1340] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_args_repeat1,
  [1350] = 1,
    ACTIONS(300), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1356] = 2,
    ACTIONS(211), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1364] = 3,
    ACTIONS(302), 1,
      sym_mod_abstract,
    ACTIONS(304), 1,
      sym_mod_final,
    ACTIONS(306), 1,
      sym_class_keyword,
  [1374] = 1,
    ACTIONS(308), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1380] = 1,
    ACTIONS(310), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1386] = 1,
    ACTIONS(312), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1392] = 1,
    ACTIONS(314), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1398] = 1,
    ACTIONS(316), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1404] = 3,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      sym_args,
  [1414] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_args_repeat1,
  [1424] = 3,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(322), 1,
      sym_number,
    STATE(52), 1,
      sym__hash_number,
  [1434] = 1,
    ACTIONS(324), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1440] = 3,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_number,
    STATE(42), 1,
      sym__hash_number,
  [1450] = 1,
    ACTIONS(328), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1456] = 1,
    ACTIONS(330), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1462] = 3,
    ACTIONS(221), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(332), 1,
      sym__path_segment,
    STATE(195), 1,
      sym__rest_of_the_line,
  [1472] = 2,
    ACTIONS(336), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(334), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1480] = 2,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1488] = 3,
    ACTIONS(342), 1,
      aux_sym_code_info_stat_token1,
    STATE(36), 1,
      sym_code_info_stat,
    STATE(130), 1,
      sym_code_info,
  [1498] = 1,
    ACTIONS(246), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1504] = 2,
    ACTIONS(344), 1,
      anon_sym_MD5checksum,
    STATE(127), 1,
      sym_header_info_md5,
  [1511] = 2,
    ACTIONS(346), 1,
      anon_sym_Constantpool_COLON,
    STATE(49), 1,
      sym_constant_pool_def,
  [1518] = 2,
    ACTIONS(348), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(192), 1,
      sym__rest_of_the_line,
  [1525] = 2,
    ACTIONS(129), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym__hash_number,
  [1532] = 2,
    ACTIONS(350), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym__hash_number,
  [1539] = 2,
    ACTIONS(350), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym__hash_number,
  [1546] = 2,
    ACTIONS(304), 1,
      sym_mod_final,
    ACTIONS(306), 1,
      sym_class_keyword,
  [1553] = 1,
    ACTIONS(352), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1558] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(95), 1,
      sym_header_info_compile,
  [1565] = 2,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym__wrapped_hex_val,
  [1572] = 2,
    ACTIONS(129), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym__hash_number,
  [1579] = 2,
    ACTIONS(356), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(90), 1,
      sym_line_number_table_def,
  [1586] = 2,
    ACTIONS(358), 1,
      aux_sym_instruction_token1,
    STATE(116), 1,
      sym_instruction,
  [1593] = 2,
    ACTIONS(129), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym__hash_number,
  [1600] = 2,
    ACTIONS(211), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(360), 1,
      sym_identifier,
  [1607] = 2,
    ACTIONS(350), 1,
      anon_sym_POUND,
    STATE(79), 1,
      sym__hash_number,
  [1614] = 2,
    ACTIONS(350), 1,
      anon_sym_POUND,
    STATE(80), 1,
      sym__hash_number,
  [1621] = 2,
    ACTIONS(350), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym__hash_number,
  [1628] = 2,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_class_def_plain_body,
  [1635] = 2,
    ACTIONS(364), 1,
      anon_sym_Lastmodified,
    STATE(119), 1,
      sym_header_info_last_mod,
  [1642] = 2,
    ACTIONS(366), 1,
      sym_mod_final,
    ACTIONS(368), 1,
      sym_class_keyword,
  [1649] = 2,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym__wrapped_hex_val,
  [1656] = 1,
    ACTIONS(370), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1661] = 2,
    ACTIONS(372), 1,
      anon_sym_public,
    STATE(177), 1,
      sym_class_definition,
  [1668] = 2,
    ACTIONS(342), 1,
      aux_sym_code_info_stat_token1,
    STATE(118), 1,
      sym_code_info_stat,
  [1675] = 2,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_args,
  [1682] = 1,
    ACTIONS(288), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1687] = 1,
    ACTIONS(374), 1,
      aux_sym_source_file_def_token1,
  [1691] = 1,
    ACTIONS(376), 1,
      anon_sym_SEMI,
  [1695] = 1,
    ACTIONS(378), 1,
      sym_descriptor_value,
  [1699] = 1,
    ACTIONS(380), 1,
      sym_flag_value,
  [1703] = 1,
    ACTIONS(382), 1,
      anon_sym_SEMI,
  [1707] = 1,
    ACTIONS(384), 1,
      sym_number,
  [1711] = 1,
    ACTIONS(386), 1,
      sym_flag_value,
  [1715] = 1,
    ACTIONS(388), 1,
      anon_sym_COLON,
  [1719] = 1,
    ACTIONS(390), 1,
      anon_sym_SEMI,
  [1723] = 1,
    ACTIONS(392), 1,
      aux_sym_header_info_compile_token1,
  [1727] = 1,
    ACTIONS(394), 1,
      anon_sym_COLON,
  [1731] = 1,
    ACTIONS(396), 1,
      anon_sym_DOT,
  [1735] = 1,
    ACTIONS(398), 1,
      anon_sym_DOT,
  [1739] = 1,
    ACTIONS(400), 1,
      aux_sym_class_info_item_simple_token1,
  [1743] = 1,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
  [1747] = 1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [1751] = 1,
    ACTIONS(406), 1,
      anon_sym_SEMI,
  [1755] = 1,
    ACTIONS(408), 1,
      anon_sym_SEMI,
  [1759] = 1,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
  [1763] = 1,
    ACTIONS(412), 1,
      sym_number,
  [1767] = 1,
    ACTIONS(414), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1771] = 1,
    ACTIONS(416), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1775] = 1,
    ACTIONS(418), 1,
      sym_flag_value,
  [1779] = 1,
    ACTIONS(420), 1,
      sym_hex_value,
  [1783] = 1,
    ACTIONS(422), 1,
      anon_sym_SEMI,
  [1787] = 1,
    ACTIONS(424), 1,
      anon_sym_LBRACE_RBRACE,
  [1791] = 1,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [1795] = 1,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
  [1799] = 1,
    ACTIONS(430), 1,
      anon_sym_COLON,
  [1803] = 1,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
  [1807] = 1,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
  [1811] = 1,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
  [1815] = 1,
    ACTIONS(438), 1,
      sym_identifier,
  [1819] = 1,
    ACTIONS(440), 1,
      sym_number,
  [1823] = 1,
    ACTIONS(442), 1,
      sym_number,
  [1827] = 1,
    ACTIONS(444), 1,
      sym_class_keyword,
  [1831] = 1,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
  [1835] = 1,
    ACTIONS(448), 1,
      anon_sym_Lastmodified,
  [1839] = 1,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
  [1843] = 1,
    ACTIONS(452), 1,
      anon_sym_EQ,
  [1847] = 1,
    ACTIONS(454), 1,
      sym_number,
  [1851] = 1,
    ACTIONS(456), 1,
      anon_sym_Compiledfrom,
  [1855] = 1,
    ACTIONS(368), 1,
      sym_class_keyword,
  [1859] = 1,
    ACTIONS(458), 1,
      anon_sym_Lastmodified,
  [1863] = 1,
    ACTIONS(460), 1,
      sym_identifier,
  [1867] = 1,
    ACTIONS(462), 1,
      sym_md5,
  [1871] = 1,
    ACTIONS(464), 1,
      anon_sym_MD5checksum,
  [1875] = 1,
    ACTIONS(306), 1,
      sym_class_keyword,
  [1879] = 1,
    ACTIONS(466), 1,
      sym_identifier,
  [1883] = 1,
    ACTIONS(468), 1,
      anon_sym_Lastmodified,
  [1887] = 1,
    ACTIONS(470), 1,
      sym__path_segment,
  [1891] = 1,
    ACTIONS(472), 1,
      sym_class_keyword,
  [1895] = 1,
    ACTIONS(474), 1,
      sym_class_keyword,
  [1899] = 1,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
  [1903] = 1,
    ACTIONS(478), 1,
      anon_sym_Lastmodified,
  [1907] = 1,
    ACTIONS(480), 1,
      anon_sym_Lastmodified,
  [1911] = 1,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
  [1915] = 1,
    ACTIONS(484), 1,
      sym_number,
  [1919] = 1,
    ACTIONS(486), 1,
      sym_flag_value,
  [1923] = 1,
    ACTIONS(488), 1,
      sym_flag_value,
  [1927] = 1,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 227,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 271,
  [SMALL_STATE(13)] = 290,
  [SMALL_STATE(14)] = 309,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 347,
  [SMALL_STATE(17)] = 366,
  [SMALL_STATE(18)] = 385,
  [SMALL_STATE(19)] = 404,
  [SMALL_STATE(20)] = 423,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 450,
  [SMALL_STATE(23)] = 464,
  [SMALL_STATE(24)] = 482,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 506,
  [SMALL_STATE(27)] = 520,
  [SMALL_STATE(28)] = 534,
  [SMALL_STATE(29)] = 550,
  [SMALL_STATE(30)] = 560,
  [SMALL_STATE(31)] = 574,
  [SMALL_STATE(32)] = 592,
  [SMALL_STATE(33)] = 604,
  [SMALL_STATE(34)] = 618,
  [SMALL_STATE(35)] = 630,
  [SMALL_STATE(36)] = 648,
  [SMALL_STATE(37)] = 665,
  [SMALL_STATE(38)] = 678,
  [SMALL_STATE(39)] = 693,
  [SMALL_STATE(40)] = 702,
  [SMALL_STATE(41)] = 717,
  [SMALL_STATE(42)] = 730,
  [SMALL_STATE(43)] = 747,
  [SMALL_STATE(44)] = 762,
  [SMALL_STATE(45)] = 775,
  [SMALL_STATE(46)] = 792,
  [SMALL_STATE(47)] = 801,
  [SMALL_STATE(48)] = 816,
  [SMALL_STATE(49)] = 831,
  [SMALL_STATE(50)] = 845,
  [SMALL_STATE(51)] = 859,
  [SMALL_STATE(52)] = 875,
  [SMALL_STATE(53)] = 887,
  [SMALL_STATE(54)] = 901,
  [SMALL_STATE(55)] = 915,
  [SMALL_STATE(56)] = 929,
  [SMALL_STATE(57)] = 943,
  [SMALL_STATE(58)] = 951,
  [SMALL_STATE(59)] = 961,
  [SMALL_STATE(60)] = 975,
  [SMALL_STATE(61)] = 983,
  [SMALL_STATE(62)] = 993,
  [SMALL_STATE(63)] = 1007,
  [SMALL_STATE(64)] = 1021,
  [SMALL_STATE(65)] = 1029,
  [SMALL_STATE(66)] = 1037,
  [SMALL_STATE(67)] = 1050,
  [SMALL_STATE(68)] = 1063,
  [SMALL_STATE(69)] = 1070,
  [SMALL_STATE(70)] = 1079,
  [SMALL_STATE(71)] = 1092,
  [SMALL_STATE(72)] = 1099,
  [SMALL_STATE(73)] = 1106,
  [SMALL_STATE(74)] = 1113,
  [SMALL_STATE(75)] = 1122,
  [SMALL_STATE(76)] = 1133,
  [SMALL_STATE(77)] = 1144,
  [SMALL_STATE(78)] = 1155,
  [SMALL_STATE(79)] = 1166,
  [SMALL_STATE(80)] = 1175,
  [SMALL_STATE(81)] = 1184,
  [SMALL_STATE(82)] = 1193,
  [SMALL_STATE(83)] = 1206,
  [SMALL_STATE(84)] = 1215,
  [SMALL_STATE(85)] = 1222,
  [SMALL_STATE(86)] = 1235,
  [SMALL_STATE(87)] = 1242,
  [SMALL_STATE(88)] = 1249,
  [SMALL_STATE(89)] = 1262,
  [SMALL_STATE(90)] = 1273,
  [SMALL_STATE(91)] = 1280,
  [SMALL_STATE(92)] = 1287,
  [SMALL_STATE(93)] = 1296,
  [SMALL_STATE(94)] = 1305,
  [SMALL_STATE(95)] = 1318,
  [SMALL_STATE(96)] = 1324,
  [SMALL_STATE(97)] = 1334,
  [SMALL_STATE(98)] = 1340,
  [SMALL_STATE(99)] = 1350,
  [SMALL_STATE(100)] = 1356,
  [SMALL_STATE(101)] = 1364,
  [SMALL_STATE(102)] = 1374,
  [SMALL_STATE(103)] = 1380,
  [SMALL_STATE(104)] = 1386,
  [SMALL_STATE(105)] = 1392,
  [SMALL_STATE(106)] = 1398,
  [SMALL_STATE(107)] = 1404,
  [SMALL_STATE(108)] = 1414,
  [SMALL_STATE(109)] = 1424,
  [SMALL_STATE(110)] = 1434,
  [SMALL_STATE(111)] = 1440,
  [SMALL_STATE(112)] = 1450,
  [SMALL_STATE(113)] = 1456,
  [SMALL_STATE(114)] = 1462,
  [SMALL_STATE(115)] = 1472,
  [SMALL_STATE(116)] = 1480,
  [SMALL_STATE(117)] = 1488,
  [SMALL_STATE(118)] = 1498,
  [SMALL_STATE(119)] = 1504,
  [SMALL_STATE(120)] = 1511,
  [SMALL_STATE(121)] = 1518,
  [SMALL_STATE(122)] = 1525,
  [SMALL_STATE(123)] = 1532,
  [SMALL_STATE(124)] = 1539,
  [SMALL_STATE(125)] = 1546,
  [SMALL_STATE(126)] = 1553,
  [SMALL_STATE(127)] = 1558,
  [SMALL_STATE(128)] = 1565,
  [SMALL_STATE(129)] = 1572,
  [SMALL_STATE(130)] = 1579,
  [SMALL_STATE(131)] = 1586,
  [SMALL_STATE(132)] = 1593,
  [SMALL_STATE(133)] = 1600,
  [SMALL_STATE(134)] = 1607,
  [SMALL_STATE(135)] = 1614,
  [SMALL_STATE(136)] = 1621,
  [SMALL_STATE(137)] = 1628,
  [SMALL_STATE(138)] = 1635,
  [SMALL_STATE(139)] = 1642,
  [SMALL_STATE(140)] = 1649,
  [SMALL_STATE(141)] = 1656,
  [SMALL_STATE(142)] = 1661,
  [SMALL_STATE(143)] = 1668,
  [SMALL_STATE(144)] = 1675,
  [SMALL_STATE(145)] = 1682,
  [SMALL_STATE(146)] = 1687,
  [SMALL_STATE(147)] = 1691,
  [SMALL_STATE(148)] = 1695,
  [SMALL_STATE(149)] = 1699,
  [SMALL_STATE(150)] = 1703,
  [SMALL_STATE(151)] = 1707,
  [SMALL_STATE(152)] = 1711,
  [SMALL_STATE(153)] = 1715,
  [SMALL_STATE(154)] = 1719,
  [SMALL_STATE(155)] = 1723,
  [SMALL_STATE(156)] = 1727,
  [SMALL_STATE(157)] = 1731,
  [SMALL_STATE(158)] = 1735,
  [SMALL_STATE(159)] = 1739,
  [SMALL_STATE(160)] = 1743,
  [SMALL_STATE(161)] = 1747,
  [SMALL_STATE(162)] = 1751,
  [SMALL_STATE(163)] = 1755,
  [SMALL_STATE(164)] = 1759,
  [SMALL_STATE(165)] = 1763,
  [SMALL_STATE(166)] = 1767,
  [SMALL_STATE(167)] = 1771,
  [SMALL_STATE(168)] = 1775,
  [SMALL_STATE(169)] = 1779,
  [SMALL_STATE(170)] = 1783,
  [SMALL_STATE(171)] = 1787,
  [SMALL_STATE(172)] = 1791,
  [SMALL_STATE(173)] = 1795,
  [SMALL_STATE(174)] = 1799,
  [SMALL_STATE(175)] = 1803,
  [SMALL_STATE(176)] = 1807,
  [SMALL_STATE(177)] = 1811,
  [SMALL_STATE(178)] = 1815,
  [SMALL_STATE(179)] = 1819,
  [SMALL_STATE(180)] = 1823,
  [SMALL_STATE(181)] = 1827,
  [SMALL_STATE(182)] = 1831,
  [SMALL_STATE(183)] = 1835,
  [SMALL_STATE(184)] = 1839,
  [SMALL_STATE(185)] = 1843,
  [SMALL_STATE(186)] = 1847,
  [SMALL_STATE(187)] = 1851,
  [SMALL_STATE(188)] = 1855,
  [SMALL_STATE(189)] = 1859,
  [SMALL_STATE(190)] = 1863,
  [SMALL_STATE(191)] = 1867,
  [SMALL_STATE(192)] = 1871,
  [SMALL_STATE(193)] = 1875,
  [SMALL_STATE(194)] = 1879,
  [SMALL_STATE(195)] = 1883,
  [SMALL_STATE(196)] = 1887,
  [SMALL_STATE(197)] = 1891,
  [SMALL_STATE(198)] = 1895,
  [SMALL_STATE(199)] = 1899,
  [SMALL_STATE(200)] = 1903,
  [SMALL_STATE(201)] = 1907,
  [SMALL_STATE(202)] = 1911,
  [SMALL_STATE(203)] = 1915,
  [SMALL_STATE(204)] = 1919,
  [SMALL_STATE(205)] = 1923,
  [SMALL_STATE(206)] = 1927,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(29),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(171),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(29),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(165),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_access, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(205),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(140),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(111),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(186),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(152),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(159),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_access, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_verbose_repeat1, 2), SHIFT_REPEAT(142),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_verbose_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(156),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(143),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 8),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(196),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(32),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def_plain, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def_plain, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_verbose, 5),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_verbose, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_plain, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [490] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
