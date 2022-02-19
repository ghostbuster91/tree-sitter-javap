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
#define STATE_COUNT 205
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_LBRACE_RBRACE = 5,
  sym_mod_static = 6,
  sym_mod_abstract = 7,
  sym_mod_final = 8,
  sym_mod_access = 9,
  anon_sym_public = 10,
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
  anon_sym_LBRACK_RBRACK = 27,
  anon_sym_bool = 28,
  anon_sym_void = 29,
  anon_sym_int = 30,
  aux_sym__simple_type_token1 = 31,
  sym_number = 32,
  anon_sym_SourceFile_COLON_DQUOTE = 33,
  aux_sym_source_file_def_token1 = 34,
  anon_sym_DQUOTE = 35,
  sym_comment = 36,
  anon_sym_Constantpool_COLON = 37,
  anon_sym_EQ = 38,
  anon_sym_Utf8 = 39,
  aux_sym__constant_pool_item_type_utf8_token1 = 40,
  anon_sym_Class = 41,
  anon_sym_String = 42,
  anon_sym_Methodref = 43,
  anon_sym_DOT = 44,
  anon_sym_Fieldref = 45,
  anon_sym_NameAndType = 46,
  sym_class_keyword = 47,
  aux_sym_class_info_item_simple_token1 = 48,
  anon_sym_Lastmodified = 49,
  sym_md5 = 50,
  anon_sym_MD5checksum = 51,
  anon_sym_Compiledfrom = 52,
  aux_sym_header_info_compile_token1 = 53,
  sym__path_segment = 54,
  anon_sym_SLASH = 55,
  anon_sym_Classfile = 56,
  sym_source_file = 57,
  sym__source_file_verbose = 58,
  sym__source_file_plain = 59,
  sym_class_def_plain = 60,
  sym_class_def_plain_body = 61,
  sym_class_def_plain_body_item = 62,
  sym_field_def = 63,
  sym_method_def = 64,
  sym__method_def_verbose = 65,
  sym_static_block_def = 66,
  sym__mods = 67,
  sym_class_definition = 68,
  sym_code_def = 69,
  sym_code_info = 70,
  sym_line_number_table_def = 71,
  sym_numered_line = 72,
  sym_numered_instruction = 73,
  sym_instruction = 74,
  sym_code_info_stat = 75,
  sym_descriptor_def = 76,
  sym_flag_def = 77,
  sym__wrapped_hex_val = 78,
  sym_args = 79,
  sym_type = 80,
  sym__simple_type = 81,
  sym_block = 82,
  sym_source_file_def = 83,
  sym_constant_pool_def = 84,
  sym__hash_number = 85,
  sym_constant_pool_item = 86,
  sym__constant_pool_item_type = 87,
  sym__constant_pool_item_type_utf8 = 88,
  sym__constant_pool_item_type_class = 89,
  sym__constant_pool_item_type_string = 90,
  sym__constant_pool_item_type_method_ref = 91,
  sym__constant_pool_item_type_field_ref = 92,
  sym__constant_pool_item_type_name_and_type = 93,
  sym_class_info_def = 94,
  sym_class_info_item = 95,
  sym_class_info_item_simple = 96,
  sym_header_info_last_mod = 97,
  sym_header_info_md5 = 98,
  sym_header_info_compile = 99,
  sym_file_path = 100,
  sym__rest_of_the_line = 101,
  sym_header_info = 102,
  sym_header = 103,
  aux_sym__source_file_verbose_repeat1 = 104,
  aux_sym_class_def_plain_body_repeat1 = 105,
  aux_sym_class_definition_repeat1 = 106,
  aux_sym_code_info_repeat1 = 107,
  aux_sym_code_info_repeat2 = 108,
  aux_sym_line_number_table_def_repeat1 = 109,
  aux_sym_flag_def_repeat1 = 110,
  aux_sym_args_repeat1 = 111,
  aux_sym_type_repeat1 = 112,
  aux_sym_constant_pool_def_repeat1 = 113,
  aux_sym_class_info_def_repeat1 = 114,
  aux_sym_class_info_item_simple_repeat1 = 115,
  aux_sym_file_path_repeat1 = 116,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [sym_mod_static] = "mod_static",
  [sym_mod_abstract] = "mod_abstract",
  [sym_mod_final] = "mod_final",
  [sym_mod_access] = "mod_access",
  [anon_sym_public] = "public",
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
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [anon_sym_int] = "int",
  [aux_sym__simple_type_token1] = "_simple_type_token1",
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
  [sym__source_file_verbose] = "_source_file_verbose",
  [sym__source_file_plain] = "_source_file_plain",
  [sym_class_def_plain] = "class_def_plain",
  [sym_class_def_plain_body] = "class_def_plain_body",
  [sym_class_def_plain_body_item] = "class_def_plain_body_item",
  [sym_field_def] = "field_def",
  [sym_method_def] = "method_def",
  [sym__method_def_verbose] = "_method_def_verbose",
  [sym_static_block_def] = "static_block_def",
  [sym__mods] = "_mods",
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
  [sym_type] = "type",
  [sym__simple_type] = "_simple_type",
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
  [aux_sym__source_file_verbose_repeat1] = "_source_file_verbose_repeat1",
  [aux_sym_class_def_plain_body_repeat1] = "class_def_plain_body_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_code_info_repeat2] = "code_info_repeat2",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_constant_pool_def_repeat1] = "constant_pool_def_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_file_path_repeat1] = "file_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [sym_mod_static] = sym_mod_static,
  [sym_mod_abstract] = sym_mod_abstract,
  [sym_mod_final] = sym_mod_final,
  [sym_mod_access] = sym_mod_access,
  [anon_sym_public] = anon_sym_public,
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
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_int] = anon_sym_int,
  [aux_sym__simple_type_token1] = aux_sym__simple_type_token1,
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
  [sym__source_file_verbose] = sym__source_file_verbose,
  [sym__source_file_plain] = sym__source_file_plain,
  [sym_class_def_plain] = sym_class_def_plain,
  [sym_class_def_plain_body] = sym_class_def_plain_body,
  [sym_class_def_plain_body_item] = sym_class_def_plain_body_item,
  [sym_field_def] = sym_field_def,
  [sym_method_def] = sym_method_def,
  [sym__method_def_verbose] = sym__method_def_verbose,
  [sym_static_block_def] = sym_static_block_def,
  [sym__mods] = sym__mods,
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
  [sym_type] = sym_type,
  [sym__simple_type] = sym__simple_type,
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
  [aux_sym__source_file_verbose_repeat1] = aux_sym__source_file_verbose_repeat1,
  [aux_sym_class_def_plain_body_repeat1] = aux_sym_class_def_plain_body_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_code_info_repeat2] = aux_sym_code_info_repeat2,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
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
  [sym_identifier] = {
    .visible = true,
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
  [sym_mod_access] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_public] = {
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
  [anon_sym_LBRACK_RBRACK] = {
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
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__simple_type_token1] = {
    .visible = false,
    .named = false,
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
  [sym__source_file_verbose] = {
    .visible = false,
    .named = true,
  },
  [sym__source_file_plain] = {
    .visible = false,
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
  [sym_method_def] = {
    .visible = true,
    .named = true,
  },
  [sym__method_def_verbose] = {
    .visible = false,
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_type] = {
    .visible = false,
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
  [aux_sym__source_file_verbose_repeat1] = {
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
  [aux_sym_type_repeat1] = {
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
  [44] = 35,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 37,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 46,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 56,
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
  [74] = 8,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 15,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 28,
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
  [117] = 116,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 32,
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
  [138] = 33,
  [139] = 139,
  [140] = 140,
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
  [175] = 72,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 76,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 59,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 180,
  [202] = 163,
  [203] = 151,
  [204] = 204,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(196);
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(327);
      if (lookahead == 'L') ADVANCE(272);
      if (lookahead == 'M') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(328);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(336);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead == 'v') ADVANCE(329);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(365);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == 'C') ADVANCE(331);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(370);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(211);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(221);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(218);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(371);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(213);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ';') ADVANCE(210);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'F') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(226);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(336);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 152:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 153:
      if (lookahead == 'x') ADVANCE(191);
      END_STATE();
    case 154:
      if (lookahead == '}') ADVANCE(200);
      END_STATE();
    case 155:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 156:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 157:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 158:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(386);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 159:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 194:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 195:
      if (eof) ADVANCE(196);
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'C') ADVANCE(327);
      if (lookahead == 'L') ADVANCE(272);
      if (lookahead == 'M') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(328);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(336);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead == 'v') ADVANCE(329);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_mod_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_mod_abstract);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_mod_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_mod_final);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_mod_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_mod_access);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_mod_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'd') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 's') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'i') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(294);
      if (lookahead == 'm') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'l') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 'u') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(373);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(375);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(386);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(378);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'F') ADVANCE(2);
      if (lookahead == 'M') ADVANCE(3);
      if (lookahead == 'N') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'U') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 373},
  [32] = {.lex_state = 62},
  [33] = {.lex_state = 62},
  [34] = {.lex_state = 124},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 124},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 124},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 374},
  [64] = {.lex_state = 374},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 374},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 52},
  [79] = {.lex_state = 374},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 53},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 124},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 374},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 16},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 375},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 155},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 376},
  [127] = {.lex_state = 93},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 374},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 93},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 156},
  [151] = {.lex_state = 156},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 159},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 376},
  [163] = {.lex_state = 156},
  [164] = {.lex_state = 18},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 157},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 158},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 156},
  [203] = {.lex_state = 156},
  [204] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_mod_static] = ACTIONS(1),
    [sym_mod_abstract] = ACTIONS(1),
    [sym_mod_final] = ACTIONS(1),
    [sym_mod_access] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
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
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
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
    [sym_source_file] = STATE(204),
    [sym__source_file_verbose] = STATE(200),
    [sym__source_file_plain] = STATE(200),
    [sym_header_info_compile] = STATE(92),
    [sym_header_info] = STATE(120),
    [sym_header] = STATE(96),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_Utf8,
    ACTIONS(9), 1,
      anon_sym_Class,
    ACTIONS(11), 1,
      anon_sym_String,
    ACTIONS(13), 1,
      anon_sym_Methodref,
    ACTIONS(15), 1,
      anon_sym_Fieldref,
    ACTIONS(17), 1,
      anon_sym_NameAndType,
    STATE(80), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
  [28] = 11,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(25), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    STATE(6), 1,
      sym_descriptor_def,
    STATE(12), 1,
      sym_flag_def,
    STATE(16), 1,
      sym__mods,
    STATE(53), 1,
      aux_sym_class_definition_repeat1,
    STATE(54), 1,
      sym_code_def,
    STATE(146), 1,
      sym_method_def,
  [62] = 6,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym_mod_static,
    STATE(22), 1,
      sym__mods,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(165), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
  [84] = 6,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(31), 1,
      sym_mod_static,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__mods,
    STATE(7), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(165), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
  [106] = 9,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_flag_def,
    STATE(16), 1,
      sym__mods,
    STATE(38), 1,
      sym_code_def,
    STATE(39), 1,
      aux_sym_class_definition_repeat1,
    STATE(146), 1,
      sym_method_def,
  [134] = 6,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_mod_static,
    ACTIONS(42), 1,
      sym_mod_access,
    STATE(22), 1,
      sym__mods,
    STATE(7), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(165), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
  [156] = 2,
    ACTIONS(47), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(45), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
      anon_sym_DOT,
  [169] = 5,
    ACTIONS(49), 1,
      anon_sym_flags_COLON,
    ACTIONS(51), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(53), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(11), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(81), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [187] = 4,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym__simple_type,
    STATE(94), 1,
      sym_type,
    ACTIONS(57), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [203] = 5,
    ACTIONS(59), 1,
      anon_sym_flags_COLON,
    ACTIONS(62), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(64), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(11), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(81), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [221] = 7,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__mods,
    STATE(38), 1,
      sym_code_def,
    STATE(39), 1,
      aux_sym_class_definition_repeat1,
    STATE(146), 1,
      sym_method_def,
  [243] = 5,
    ACTIONS(49), 1,
      anon_sym_flags_COLON,
    ACTIONS(53), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(67), 1,
      anon_sym_Constantpool_COLON,
    STATE(9), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(81), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [261] = 7,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__mods,
    STATE(29), 1,
      aux_sym_class_definition_repeat1,
    STATE(43), 1,
      sym_code_def,
    STATE(146), 1,
      sym_method_def,
  [283] = 4,
    ACTIONS(71), 1,
      sym_mod_static,
    ACTIONS(73), 1,
      sym_mod_abstract,
    ACTIONS(75), 1,
      sym_mod_final,
    ACTIONS(77), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [299] = 3,
    STATE(18), 1,
      sym__simple_type,
    STATE(86), 1,
      sym_type,
    ACTIONS(57), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [312] = 3,
    ACTIONS(81), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(26), 1,
      aux_sym_type_repeat1,
    ACTIONS(79), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [325] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(17), 1,
      aux_sym_type_repeat1,
    ACTIONS(83), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [338] = 5,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(91), 1,
      sym_number,
    STATE(58), 1,
      aux_sym_code_info_repeat1,
    STATE(57), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [355] = 5,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(41), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(95), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [372] = 3,
    STATE(18), 1,
      sym__simple_type,
    STATE(124), 1,
      sym_type,
    ACTIONS(57), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [385] = 3,
    STATE(18), 1,
      sym__simple_type,
    STATE(89), 1,
      sym_type,
    ACTIONS(57), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [398] = 4,
    ACTIONS(103), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym__hash_number,
    ACTIONS(101), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(24), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [413] = 4,
    ACTIONS(107), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym__hash_number,
    ACTIONS(105), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(24), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [428] = 4,
    ACTIONS(103), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym__hash_number,
    ACTIONS(110), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(23), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [443] = 3,
    ACTIONS(114), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(26), 1,
      aux_sym_type_repeat1,
    ACTIONS(112), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [456] = 5,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(117), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(19), 1,
      aux_sym_code_info_repeat1,
    STATE(77), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [473] = 3,
    ACTIONS(119), 1,
      sym_mod_abstract,
    ACTIONS(121), 1,
      sym_mod_final,
    ACTIONS(123), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [486] = 5,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__mods,
    STATE(36), 1,
      aux_sym_class_definition_repeat1,
    STATE(146), 1,
      sym_method_def,
  [502] = 4,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(141), 1,
      sym_source_file_def,
    STATE(42), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [516] = 5,
    ACTIONS(131), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(133), 1,
      sym__path_segment,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    STATE(197), 1,
      sym__rest_of_the_line,
    STATE(198), 1,
      sym_file_path,
  [532] = 2,
    ACTIONS(137), 1,
      sym_mod_final,
    ACTIONS(139), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [542] = 2,
    ACTIONS(121), 1,
      sym_mod_final,
    ACTIONS(123), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [552] = 3,
    ACTIONS(143), 1,
      anon_sym_line,
    ACTIONS(141), 2,
      anon_sym_RBRACE,
      sym_mod_access,
    STATE(45), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [564] = 4,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(46), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(147), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [578] = 5,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      sym_mod_access,
    STATE(16), 1,
      sym__mods,
    STATE(36), 1,
      aux_sym_class_definition_repeat1,
    STATE(146), 1,
      sym_method_def,
  [594] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(156), 3,
      anon_sym_RBRACE,
      sym_mod_access,
      anon_sym_Code_COLON,
  [606] = 5,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__mods,
    STATE(29), 1,
      aux_sym_class_definition_repeat1,
    STATE(146), 1,
      sym_method_def,
  [622] = 5,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__mods,
    STATE(36), 1,
      aux_sym_class_definition_repeat1,
    STATE(146), 1,
      sym_method_def,
  [638] = 4,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(49), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(161), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [652] = 4,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(50), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(161), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [666] = 4,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(169), 1,
      sym_source_file_def,
    STATE(67), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [680] = 5,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__mods,
    STATE(52), 1,
      aux_sym_class_definition_repeat1,
    STATE(146), 1,
      sym_method_def,
  [696] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(147), 3,
      anon_sym_RBRACE,
      sym_mod_access,
      anon_sym_Code_COLON,
  [708] = 3,
    ACTIONS(143), 1,
      anon_sym_line,
    ACTIONS(167), 2,
      anon_sym_RBRACE,
      sym_mod_access,
    STATE(51), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [720] = 4,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(48), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(169), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [734] = 3,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(173), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [746] = 4,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(48), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(156), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [760] = 4,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(50), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(184), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [774] = 4,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(50), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(191), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [788] = 3,
    ACTIONS(197), 1,
      anon_sym_line,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      sym_mod_access,
    STATE(51), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [800] = 5,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__mods,
    STATE(36), 1,
      aux_sym_class_definition_repeat1,
    STATE(146), 1,
      sym_method_def,
  [816] = 5,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__mods,
    STATE(36), 1,
      aux_sym_class_definition_repeat1,
    STATE(146), 1,
      sym_method_def,
  [832] = 5,
    ACTIONS(21), 1,
      sym_mod_access,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__mods,
    STATE(39), 1,
      aux_sym_class_definition_repeat1,
    STATE(146), 1,
      sym_method_def,
  [848] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(169), 3,
      anon_sym_RBRACE,
      sym_mod_access,
      anon_sym_Code_COLON,
  [860] = 1,
    ACTIONS(156), 4,
      anon_sym_RBRACE,
      sym_mod_access,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
  [867] = 3,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(60), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [878] = 3,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(207), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [889] = 1,
    ACTIONS(123), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [896] = 3,
    ACTIONS(209), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(211), 1,
      sym_number,
    STATE(60), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [907] = 2,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(214), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [916] = 2,
    ACTIONS(182), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(156), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [925] = 4,
    ACTIONS(218), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(79), 1,
      aux_sym_file_path_repeat1,
    STATE(192), 1,
      sym__rest_of_the_line,
  [938] = 4,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(222), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(90), 1,
      aux_sym_file_path_repeat1,
    STATE(176), 1,
      sym__rest_of_the_line,
  [951] = 2,
    ACTIONS(226), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [960] = 2,
    ACTIONS(230), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [969] = 3,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(67), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [980] = 2,
    ACTIONS(239), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [989] = 2,
    ACTIONS(243), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(241), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [998] = 2,
    ACTIONS(247), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1007] = 2,
    ACTIONS(251), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1016] = 1,
    ACTIONS(253), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [1023] = 1,
    ACTIONS(255), 4,
      anon_sym_RBRACE,
      sym_mod_access,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
  [1030] = 1,
    ACTIONS(45), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [1037] = 4,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(64), 1,
      aux_sym_file_path_repeat1,
    STATE(186), 1,
      sym__rest_of_the_line,
  [1050] = 1,
    ACTIONS(139), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [1057] = 3,
    ACTIONS(89), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(91), 1,
      sym_number,
    STATE(60), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1068] = 4,
    ACTIONS(259), 1,
      sym_mod_static,
    ACTIONS(261), 1,
      sym_mod_abstract,
    ACTIONS(263), 1,
      sym_mod_final,
    ACTIONS(265), 1,
      sym_class_keyword,
  [1081] = 4,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(90), 1,
      aux_sym_file_path_repeat1,
    STATE(186), 1,
      sym__rest_of_the_line,
  [1094] = 1,
    ACTIONS(267), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1100] = 2,
    ACTIONS(271), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(269), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1108] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_args_repeat1,
  [1118] = 3,
    ACTIONS(277), 1,
      sym_mod_abstract,
    ACTIONS(279), 1,
      sym_mod_final,
    ACTIONS(281), 1,
      sym_class_keyword,
  [1128] = 1,
    ACTIONS(283), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1134] = 1,
    ACTIONS(285), 3,
      anon_sym_RBRACE,
      sym_mod_access,
      anon_sym_line,
  [1140] = 3,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_args,
  [1150] = 3,
    ACTIONS(25), 1,
      anon_sym_descriptor_COLON,
    STATE(109), 1,
      sym_descriptor_def,
    STATE(123), 1,
      sym__method_def_verbose,
  [1160] = 1,
    ACTIONS(291), 3,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_access,
  [1166] = 3,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(142), 1,
      sym_args,
  [1176] = 3,
    ACTIONS(295), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(297), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      aux_sym_file_path_repeat1,
  [1186] = 2,
    ACTIONS(302), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1194] = 3,
    ACTIONS(304), 1,
      sym_mod_access,
    STATE(195), 1,
      sym__mods,
    STATE(196), 1,
      sym_class_def_plain,
  [1204] = 1,
    ACTIONS(306), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1210] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_args_repeat1,
  [1220] = 1,
    ACTIONS(310), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1226] = 3,
    ACTIONS(304), 1,
      sym_mod_access,
    STATE(133), 1,
      sym_class_info_def,
    STATE(194), 1,
      sym__mods,
  [1236] = 3,
    ACTIONS(312), 1,
      aux_sym_code_info_stat_token1,
    STATE(27), 1,
      sym_code_info_stat,
    STATE(130), 1,
      sym_code_info,
  [1246] = 1,
    ACTIONS(314), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1252] = 1,
    ACTIONS(316), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1258] = 1,
    ACTIONS(318), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1264] = 1,
    ACTIONS(320), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1270] = 1,
    ACTIONS(322), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1276] = 3,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(324), 1,
      sym_number,
    STATE(20), 1,
      sym__hash_number,
  [1286] = 3,
    ACTIONS(218), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(326), 1,
      sym__path_segment,
    STATE(192), 1,
      sym__rest_of_the_line,
  [1296] = 3,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      sym_args,
  [1306] = 3,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_args_repeat1,
  [1316] = 1,
    ACTIONS(207), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1322] = 3,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      sym_number,
    STATE(47), 1,
      sym__hash_number,
  [1332] = 2,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    STATE(110), 1,
      sym_flag_def,
  [1339] = 2,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    STATE(129), 1,
      sym_code_def,
  [1346] = 2,
    ACTIONS(103), 1,
      anon_sym_POUND,
    STATE(154), 1,
      sym__hash_number,
  [1353] = 2,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_args,
  [1360] = 2,
    ACTIONS(337), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym__hash_number,
  [1367] = 2,
    ACTIONS(337), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym__hash_number,
  [1374] = 2,
    ACTIONS(337), 1,
      anon_sym_POUND,
    STATE(71), 1,
      sym__hash_number,
  [1381] = 2,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    STATE(202), 1,
      sym__wrapped_hex_val,
  [1388] = 2,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      sym__wrapped_hex_val,
  [1395] = 2,
    ACTIONS(341), 1,
      aux_sym_instruction_token1,
    STATE(91), 1,
      sym_instruction,
  [1402] = 2,
    ACTIONS(343), 1,
      anon_sym_MD5checksum,
    STATE(135), 1,
      sym_header_info_md5,
  [1409] = 2,
    ACTIONS(345), 1,
      anon_sym_Lastmodified,
    STATE(119), 1,
      sym_header_info_last_mod,
  [1416] = 2,
    ACTIONS(347), 1,
      anon_sym_public,
    STATE(172), 1,
      sym_class_definition,
  [1423] = 2,
    ACTIONS(337), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym__hash_number,
  [1430] = 1,
    ACTIONS(349), 2,
      anon_sym_RBRACE,
      sym_mod_access,
  [1435] = 1,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1440] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_class_def_plain_body,
  [1447] = 2,
    ACTIONS(353), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(189), 1,
      sym__rest_of_the_line,
  [1454] = 2,
    ACTIONS(355), 1,
      sym_mod_final,
    ACTIONS(357), 1,
      sym_class_keyword,
  [1461] = 2,
    ACTIONS(337), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym__hash_number,
  [1468] = 1,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      sym_mod_access,
  [1473] = 2,
    ACTIONS(361), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(134), 1,
      sym_line_number_table_def,
  [1480] = 1,
    ACTIONS(295), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1485] = 1,
    ACTIONS(363), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1490] = 2,
    ACTIONS(365), 1,
      anon_sym_Constantpool_COLON,
    STATE(30), 1,
      sym_constant_pool_def,
  [1497] = 1,
    ACTIONS(367), 2,
      anon_sym_RBRACE,
      sym_mod_access,
  [1502] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(181), 1,
      sym_header_info_compile,
  [1509] = 2,
    ACTIONS(312), 1,
      aux_sym_code_info_stat_token1,
    STATE(107), 1,
      sym_code_info_stat,
  [1516] = 1,
    ACTIONS(369), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1521] = 2,
    ACTIONS(279), 1,
      sym_mod_final,
    ACTIONS(281), 1,
      sym_class_keyword,
  [1528] = 2,
    ACTIONS(103), 1,
      anon_sym_POUND,
    STATE(143), 1,
      sym__hash_number,
  [1535] = 2,
    ACTIONS(103), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym__hash_number,
  [1542] = 1,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
  [1546] = 1,
    ACTIONS(373), 1,
      anon_sym_SEMI,
  [1550] = 1,
    ACTIONS(375), 1,
      anon_sym_COLON,
  [1554] = 1,
    ACTIONS(377), 1,
      sym_descriptor_value,
  [1558] = 1,
    ACTIONS(379), 1,
      anon_sym_SEMI,
  [1562] = 1,
    ACTIONS(381), 1,
      anon_sym_SEMI,
  [1566] = 1,
    ACTIONS(383), 1,
      sym_number,
  [1570] = 1,
    ACTIONS(385), 1,
      anon_sym_SEMI,
  [1574] = 1,
    ACTIONS(387), 1,
      anon_sym_SEMI,
  [1578] = 1,
    ACTIONS(389), 1,
      sym_flag_value,
  [1582] = 1,
    ACTIONS(391), 1,
      sym_flag_value,
  [1586] = 1,
    ACTIONS(393), 1,
      aux_sym_header_info_compile_token1,
  [1590] = 1,
    ACTIONS(395), 1,
      anon_sym_DOT,
  [1594] = 1,
    ACTIONS(397), 1,
      anon_sym_DOT,
  [1598] = 1,
    ACTIONS(399), 1,
      aux_sym_class_info_item_simple_token1,
  [1602] = 1,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [1606] = 1,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [1610] = 1,
    ACTIONS(405), 1,
      anon_sym_SEMI,
  [1614] = 1,
    ACTIONS(407), 1,
      anon_sym_COLON,
  [1618] = 1,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
  [1622] = 1,
    ACTIONS(411), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1626] = 1,
    ACTIONS(413), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1630] = 1,
    ACTIONS(415), 1,
      sym_flag_value,
  [1634] = 1,
    ACTIONS(417), 1,
      sym_hex_value,
  [1638] = 1,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [1642] = 1,
    ACTIONS(421), 1,
      anon_sym_LBRACE_RBRACE,
  [1646] = 1,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
  [1650] = 1,
    ACTIONS(425), 1,
      anon_sym_SEMI,
  [1654] = 1,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
  [1658] = 1,
    ACTIONS(429), 1,
      sym_number,
  [1662] = 1,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
  [1666] = 1,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
  [1670] = 1,
    ACTIONS(435), 1,
      sym_identifier,
  [1674] = 1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
  [1678] = 1,
    ACTIONS(439), 1,
      sym_class_keyword,
  [1682] = 1,
    ACTIONS(441), 1,
      anon_sym_Lastmodified,
  [1686] = 1,
    ACTIONS(443), 1,
      aux_sym_source_file_def_token1,
  [1690] = 1,
    ACTIONS(445), 1,
      anon_sym_EQ,
  [1694] = 1,
    ACTIONS(447), 1,
      anon_sym_COLON,
  [1698] = 1,
    ACTIONS(449), 1,
      sym_number,
  [1702] = 1,
    ACTIONS(451), 1,
      sym_mod_access,
  [1706] = 1,
    ACTIONS(453), 1,
      anon_sym_Compiledfrom,
  [1710] = 1,
    ACTIONS(357), 1,
      sym_class_keyword,
  [1714] = 1,
    ACTIONS(455), 1,
      sym_number,
  [1718] = 1,
    ACTIONS(457), 1,
      sym_number,
  [1722] = 1,
    ACTIONS(459), 1,
      anon_sym_Lastmodified,
  [1726] = 1,
    ACTIONS(461), 1,
      sym_identifier,
  [1730] = 1,
    ACTIONS(463), 1,
      sym_md5,
  [1734] = 1,
    ACTIONS(465), 1,
      anon_sym_MD5checksum,
  [1738] = 1,
    ACTIONS(467), 1,
      sym_identifier,
  [1742] = 1,
    ACTIONS(281), 1,
      sym_class_keyword,
  [1746] = 1,
    ACTIONS(469), 1,
      anon_sym_Lastmodified,
  [1750] = 1,
    ACTIONS(471), 1,
      sym__path_segment,
  [1754] = 1,
    ACTIONS(473), 1,
      sym_class_keyword,
  [1758] = 1,
    ACTIONS(475), 1,
      sym_class_keyword,
  [1762] = 1,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
  [1766] = 1,
    ACTIONS(479), 1,
      anon_sym_Lastmodified,
  [1770] = 1,
    ACTIONS(481), 1,
      anon_sym_Lastmodified,
  [1774] = 1,
    ACTIONS(483), 1,
      sym_mod_access,
  [1778] = 1,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
  [1782] = 1,
    ACTIONS(487), 1,
      sym_number,
  [1786] = 1,
    ACTIONS(489), 1,
      sym_flag_value,
  [1790] = 1,
    ACTIONS(491), 1,
      sym_flag_value,
  [1794] = 1,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 243,
  [SMALL_STATE(14)] = 261,
  [SMALL_STATE(15)] = 283,
  [SMALL_STATE(16)] = 299,
  [SMALL_STATE(17)] = 312,
  [SMALL_STATE(18)] = 325,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 355,
  [SMALL_STATE(21)] = 372,
  [SMALL_STATE(22)] = 385,
  [SMALL_STATE(23)] = 398,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 428,
  [SMALL_STATE(26)] = 443,
  [SMALL_STATE(27)] = 456,
  [SMALL_STATE(28)] = 473,
  [SMALL_STATE(29)] = 486,
  [SMALL_STATE(30)] = 502,
  [SMALL_STATE(31)] = 516,
  [SMALL_STATE(32)] = 532,
  [SMALL_STATE(33)] = 542,
  [SMALL_STATE(34)] = 552,
  [SMALL_STATE(35)] = 564,
  [SMALL_STATE(36)] = 578,
  [SMALL_STATE(37)] = 594,
  [SMALL_STATE(38)] = 606,
  [SMALL_STATE(39)] = 622,
  [SMALL_STATE(40)] = 638,
  [SMALL_STATE(41)] = 652,
  [SMALL_STATE(42)] = 666,
  [SMALL_STATE(43)] = 680,
  [SMALL_STATE(44)] = 696,
  [SMALL_STATE(45)] = 708,
  [SMALL_STATE(46)] = 720,
  [SMALL_STATE(47)] = 734,
  [SMALL_STATE(48)] = 746,
  [SMALL_STATE(49)] = 760,
  [SMALL_STATE(50)] = 774,
  [SMALL_STATE(51)] = 788,
  [SMALL_STATE(52)] = 800,
  [SMALL_STATE(53)] = 816,
  [SMALL_STATE(54)] = 832,
  [SMALL_STATE(55)] = 848,
  [SMALL_STATE(56)] = 860,
  [SMALL_STATE(57)] = 867,
  [SMALL_STATE(58)] = 878,
  [SMALL_STATE(59)] = 889,
  [SMALL_STATE(60)] = 896,
  [SMALL_STATE(61)] = 907,
  [SMALL_STATE(62)] = 916,
  [SMALL_STATE(63)] = 925,
  [SMALL_STATE(64)] = 938,
  [SMALL_STATE(65)] = 951,
  [SMALL_STATE(66)] = 960,
  [SMALL_STATE(67)] = 969,
  [SMALL_STATE(68)] = 980,
  [SMALL_STATE(69)] = 989,
  [SMALL_STATE(70)] = 998,
  [SMALL_STATE(71)] = 1007,
  [SMALL_STATE(72)] = 1016,
  [SMALL_STATE(73)] = 1023,
  [SMALL_STATE(74)] = 1030,
  [SMALL_STATE(75)] = 1037,
  [SMALL_STATE(76)] = 1050,
  [SMALL_STATE(77)] = 1057,
  [SMALL_STATE(78)] = 1068,
  [SMALL_STATE(79)] = 1081,
  [SMALL_STATE(80)] = 1094,
  [SMALL_STATE(81)] = 1100,
  [SMALL_STATE(82)] = 1108,
  [SMALL_STATE(83)] = 1118,
  [SMALL_STATE(84)] = 1128,
  [SMALL_STATE(85)] = 1134,
  [SMALL_STATE(86)] = 1140,
  [SMALL_STATE(87)] = 1150,
  [SMALL_STATE(88)] = 1160,
  [SMALL_STATE(89)] = 1166,
  [SMALL_STATE(90)] = 1176,
  [SMALL_STATE(91)] = 1186,
  [SMALL_STATE(92)] = 1194,
  [SMALL_STATE(93)] = 1204,
  [SMALL_STATE(94)] = 1210,
  [SMALL_STATE(95)] = 1220,
  [SMALL_STATE(96)] = 1226,
  [SMALL_STATE(97)] = 1236,
  [SMALL_STATE(98)] = 1246,
  [SMALL_STATE(99)] = 1252,
  [SMALL_STATE(100)] = 1258,
  [SMALL_STATE(101)] = 1264,
  [SMALL_STATE(102)] = 1270,
  [SMALL_STATE(103)] = 1276,
  [SMALL_STATE(104)] = 1286,
  [SMALL_STATE(105)] = 1296,
  [SMALL_STATE(106)] = 1306,
  [SMALL_STATE(107)] = 1316,
  [SMALL_STATE(108)] = 1322,
  [SMALL_STATE(109)] = 1332,
  [SMALL_STATE(110)] = 1339,
  [SMALL_STATE(111)] = 1346,
  [SMALL_STATE(112)] = 1353,
  [SMALL_STATE(113)] = 1360,
  [SMALL_STATE(114)] = 1367,
  [SMALL_STATE(115)] = 1374,
  [SMALL_STATE(116)] = 1381,
  [SMALL_STATE(117)] = 1388,
  [SMALL_STATE(118)] = 1395,
  [SMALL_STATE(119)] = 1402,
  [SMALL_STATE(120)] = 1409,
  [SMALL_STATE(121)] = 1416,
  [SMALL_STATE(122)] = 1423,
  [SMALL_STATE(123)] = 1430,
  [SMALL_STATE(124)] = 1435,
  [SMALL_STATE(125)] = 1440,
  [SMALL_STATE(126)] = 1447,
  [SMALL_STATE(127)] = 1454,
  [SMALL_STATE(128)] = 1461,
  [SMALL_STATE(129)] = 1468,
  [SMALL_STATE(130)] = 1473,
  [SMALL_STATE(131)] = 1480,
  [SMALL_STATE(132)] = 1485,
  [SMALL_STATE(133)] = 1490,
  [SMALL_STATE(134)] = 1497,
  [SMALL_STATE(135)] = 1502,
  [SMALL_STATE(136)] = 1509,
  [SMALL_STATE(137)] = 1516,
  [SMALL_STATE(138)] = 1521,
  [SMALL_STATE(139)] = 1528,
  [SMALL_STATE(140)] = 1535,
  [SMALL_STATE(141)] = 1542,
  [SMALL_STATE(142)] = 1546,
  [SMALL_STATE(143)] = 1550,
  [SMALL_STATE(144)] = 1554,
  [SMALL_STATE(145)] = 1558,
  [SMALL_STATE(146)] = 1562,
  [SMALL_STATE(147)] = 1566,
  [SMALL_STATE(148)] = 1570,
  [SMALL_STATE(149)] = 1574,
  [SMALL_STATE(150)] = 1578,
  [SMALL_STATE(151)] = 1582,
  [SMALL_STATE(152)] = 1586,
  [SMALL_STATE(153)] = 1590,
  [SMALL_STATE(154)] = 1594,
  [SMALL_STATE(155)] = 1598,
  [SMALL_STATE(156)] = 1602,
  [SMALL_STATE(157)] = 1606,
  [SMALL_STATE(158)] = 1610,
  [SMALL_STATE(159)] = 1614,
  [SMALL_STATE(160)] = 1618,
  [SMALL_STATE(161)] = 1622,
  [SMALL_STATE(162)] = 1626,
  [SMALL_STATE(163)] = 1630,
  [SMALL_STATE(164)] = 1634,
  [SMALL_STATE(165)] = 1638,
  [SMALL_STATE(166)] = 1642,
  [SMALL_STATE(167)] = 1646,
  [SMALL_STATE(168)] = 1650,
  [SMALL_STATE(169)] = 1654,
  [SMALL_STATE(170)] = 1658,
  [SMALL_STATE(171)] = 1662,
  [SMALL_STATE(172)] = 1666,
  [SMALL_STATE(173)] = 1670,
  [SMALL_STATE(174)] = 1674,
  [SMALL_STATE(175)] = 1678,
  [SMALL_STATE(176)] = 1682,
  [SMALL_STATE(177)] = 1686,
  [SMALL_STATE(178)] = 1690,
  [SMALL_STATE(179)] = 1694,
  [SMALL_STATE(180)] = 1698,
  [SMALL_STATE(181)] = 1702,
  [SMALL_STATE(182)] = 1706,
  [SMALL_STATE(183)] = 1710,
  [SMALL_STATE(184)] = 1714,
  [SMALL_STATE(185)] = 1718,
  [SMALL_STATE(186)] = 1722,
  [SMALL_STATE(187)] = 1726,
  [SMALL_STATE(188)] = 1730,
  [SMALL_STATE(189)] = 1734,
  [SMALL_STATE(190)] = 1738,
  [SMALL_STATE(191)] = 1742,
  [SMALL_STATE(192)] = 1746,
  [SMALL_STATE(193)] = 1750,
  [SMALL_STATE(194)] = 1754,
  [SMALL_STATE(195)] = 1758,
  [SMALL_STATE(196)] = 1762,
  [SMALL_STATE(197)] = 1766,
  [SMALL_STATE(198)] = 1770,
  [SMALL_STATE(199)] = 1774,
  [SMALL_STATE(200)] = 1778,
  [SMALL_STATE(201)] = 1782,
  [SMALL_STATE(202)] = 1786,
  [SMALL_STATE(203)] = 1790,
  [SMALL_STATE(204)] = 1794,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(166),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(117),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(103),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(180),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(15),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(203),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(151),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(155),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(170),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(136),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(159),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(121),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(193),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(21),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [493] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
