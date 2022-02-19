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
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  sym_interface_keyword = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  anon_sym_LBRACE_RBRACE = 6,
  sym_mod_static = 7,
  sym_mod_abstract = 8,
  sym_mod_final = 9,
  sym_mod_default = 10,
  sym_mod_access = 11,
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
  sym_interface_def_plain = 61,
  sym_class_def_plain_body = 62,
  sym_class_def_plain_body_item = 63,
  sym_field_def = 64,
  sym_method_def = 65,
  sym__method_def_verbose = 66,
  sym_static_block_def = 67,
  aux_sym__mods = 68,
  sym_class_definition = 69,
  sym_code_def = 70,
  sym_code_info = 71,
  sym_line_number_table_def = 72,
  sym_numered_line = 73,
  sym_numered_instruction = 74,
  sym_instruction = 75,
  sym_code_info_stat = 76,
  sym_descriptor_def = 77,
  sym_flag_def = 78,
  sym__wrapped_hex_val = 79,
  sym_args = 80,
  sym_type = 81,
  sym__simple_type = 82,
  sym_block = 83,
  sym_source_file_def = 84,
  sym_constant_pool_def = 85,
  sym__hash_number = 86,
  sym_constant_pool_item = 87,
  sym__constant_pool_item_type = 88,
  sym__constant_pool_item_type_utf8 = 89,
  sym__constant_pool_item_type_class = 90,
  sym__constant_pool_item_type_string = 91,
  sym__constant_pool_item_type_method_ref = 92,
  sym__constant_pool_item_type_field_ref = 93,
  sym__constant_pool_item_type_name_and_type = 94,
  sym_class_info_def = 95,
  sym_class_info_item = 96,
  sym_class_info_item_simple = 97,
  sym_header_info_last_mod = 98,
  sym_header_info_md5 = 99,
  sym_header_info_compile = 100,
  sym_file_path = 101,
  sym__rest_of_the_line = 102,
  sym_header_info = 103,
  sym_header = 104,
  aux_sym__source_file_verbose_repeat1 = 105,
  aux_sym_class_def_plain_body_repeat1 = 106,
  aux_sym_class_definition_repeat1 = 107,
  aux_sym_code_info_repeat1 = 108,
  aux_sym_code_info_repeat2 = 109,
  aux_sym_line_number_table_def_repeat1 = 110,
  aux_sym_flag_def_repeat1 = 111,
  aux_sym_args_repeat1 = 112,
  aux_sym_type_repeat1 = 113,
  aux_sym_constant_pool_def_repeat1 = 114,
  aux_sym_class_info_def_repeat1 = 115,
  aux_sym_class_info_item_simple_repeat1 = 116,
  aux_sym_file_path_repeat1 = 117,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_interface_keyword] = "interface_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [sym_mod_static] = "mod_static",
  [sym_mod_abstract] = "mod_abstract",
  [sym_mod_final] = "mod_final",
  [sym_mod_default] = "mod_default",
  [sym_mod_access] = "mod_access",
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
  [sym_interface_def_plain] = "interface_def_plain",
  [sym_class_def_plain_body] = "class_def_plain_body",
  [sym_class_def_plain_body_item] = "class_def_plain_body_item",
  [sym_field_def] = "field_def",
  [sym_method_def] = "method_def",
  [sym__method_def_verbose] = "_method_def_verbose",
  [sym_static_block_def] = "static_block_def",
  [aux_sym__mods] = "_mods",
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
  [sym_interface_keyword] = sym_interface_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [sym_mod_static] = sym_mod_static,
  [sym_mod_abstract] = sym_mod_abstract,
  [sym_mod_final] = sym_mod_final,
  [sym_mod_default] = sym_mod_default,
  [sym_mod_access] = sym_mod_access,
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
  [sym_interface_def_plain] = sym_interface_def_plain,
  [sym_class_def_plain_body] = sym_class_def_plain_body,
  [sym_class_def_plain_body_item] = sym_class_def_plain_body_item,
  [sym_field_def] = sym_field_def,
  [sym_method_def] = sym_method_def,
  [sym__method_def_verbose] = sym__method_def_verbose,
  [sym_static_block_def] = sym_static_block_def,
  [aux_sym__mods] = aux_sym__mods,
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
  [sym_interface_keyword] = {
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
  [sym_mod_default] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_access] = {
    .visible = true,
    .named = true,
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
  [sym_interface_def_plain] = {
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
  [aux_sym__mods] = {
    .visible = false,
    .named = false,
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
  [23] = 9,
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
  [50] = 14,
  [51] = 51,
  [52] = 17,
  [53] = 53,
  [54] = 54,
  [55] = 18,
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
  [75] = 20,
  [76] = 76,
  [77] = 25,
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
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 109,
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
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 143,
  [187] = 179,
  [188] = 167,
  [189] = 189,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(203);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '=') ADVANCE(412);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'L') ADVANCE(306);
      if (lookahead == 'M') ADVANCE(302);
      if (lookahead == 'S') ADVANCE(367);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(368);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(202)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(405);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'C') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'v') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '=') ADVANCE(412);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(410);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(223);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(233);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(230);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(411);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(411);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'F') ADVANCE(103);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(157);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(238);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'b') ADVANCE(276);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(277);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 'v') ADVANCE(275);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(108);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 105:
      if (lookahead == 'k') ADVANCE(138);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(423);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(424);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 159:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 160:
      if (lookahead == 'x') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 161:
      if (lookahead == '}') ADVANCE(207);
      END_STATE();
    case 162:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 163:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 165:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(426);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 166:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 201:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 202:
      if (eof) ADVANCE(203);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '=') ADVANCE(412);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'L') ADVANCE(306);
      if (lookahead == 'M') ADVANCE(302);
      if (lookahead == 'S') ADVANCE(367);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(368);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(202)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_mod_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_mod_abstract);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_mod_abstract);
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_mod_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_mod_final);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_mod_final);
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_mod_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_mod_default);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_mod_default);
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_mod_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_mod_access);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_mod_access);
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_mod_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == 'u') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'v') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead == 'm') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(413);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(413);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(418);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(415);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(426);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(418);
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
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(9);
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
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(18);
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
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(27);
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
      if (lookahead == 'e') ADVANCE(36);
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
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_line);
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
      if (lookahead == 'f') ADVANCE(49);
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
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 65:
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
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 50},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 50},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 413},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 414},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 414},
  [70] = {.lex_state = 414},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 414},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 415},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 414},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 416},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 162},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 414},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 416},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 163},
  [147] = {.lex_state = 17},
  [148] = {.lex_state = 164},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 165},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 166},
  [168] = {.lex_state = 166},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 166},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 166},
  [188] = {.lex_state = 166},
  [189] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_interface_keyword] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_mod_static] = ACTIONS(1),
    [sym_mod_abstract] = ACTIONS(1),
    [sym_mod_final] = ACTIONS(1),
    [sym_mod_default] = ACTIONS(1),
    [sym_mod_access] = ACTIONS(1),
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
    [sym_source_file] = STATE(185),
    [sym__source_file_verbose] = STATE(184),
    [sym__source_file_plain] = STATE(184),
    [sym_header_info_compile] = STATE(15),
    [sym_header_info] = STATE(110),
    [sym_header] = STATE(24),
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
    STATE(99), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
  [28] = 6,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_mod_static,
    STATE(4), 1,
      aux_sym__mods,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(177), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(23), 4,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [53] = 5,
    STATE(9), 1,
      aux_sym__mods,
    STATE(49), 1,
      sym__simple_type,
    STATE(89), 1,
      sym_type,
    ACTIONS(27), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
    ACTIONS(25), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [76] = 6,
    ACTIONS(21), 1,
      sym_mod_static,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym__mods,
    STATE(6), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(177), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(23), 4,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [101] = 6,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_mod_static,
    STATE(4), 1,
      aux_sym__mods,
    STATE(6), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(177), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(36), 4,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [126] = 5,
    STATE(9), 1,
      aux_sym__mods,
    STATE(49), 1,
      sym__simple_type,
    STATE(101), 1,
      sym_type,
    ACTIONS(27), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
    ACTIONS(25), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [149] = 2,
    ACTIONS(39), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(41), 9,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [164] = 3,
    STATE(9), 1,
      aux_sym__mods,
    ACTIONS(46), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
    ACTIONS(43), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [181] = 5,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym__mods,
    STATE(10), 1,
      aux_sym_class_definition_repeat1,
    STATE(174), 1,
      sym_method_def,
    ACTIONS(50), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [201] = 3,
    ACTIONS(55), 1,
      anon_sym_line,
    STATE(19), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(53), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [217] = 5,
    STATE(7), 1,
      aux_sym__mods,
    STATE(13), 1,
      aux_sym_class_definition_repeat1,
    STATE(166), 1,
      sym_class_definition,
    STATE(174), 1,
      sym_method_def,
    ACTIONS(57), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [237] = 5,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym__mods,
    STATE(10), 1,
      aux_sym_class_definition_repeat1,
    STATE(174), 1,
      sym_method_def,
    ACTIONS(57), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [257] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(61), 7,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_Code_COLON,
  [273] = 4,
    ACTIONS(65), 1,
      sym_interface_keyword,
    STATE(21), 1,
      aux_sym__mods,
    STATE(173), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(67), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [291] = 3,
    ACTIONS(71), 1,
      anon_sym_line,
    STATE(16), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(69), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [307] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(74), 7,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_Code_COLON,
  [323] = 3,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(76), 7,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_Code_COLON,
  [339] = 3,
    ACTIONS(55), 1,
      anon_sym_line,
    STATE(16), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(81), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [355] = 1,
    ACTIONS(76), 8,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
  [366] = 4,
    ACTIONS(83), 1,
      sym_interface_keyword,
    ACTIONS(87), 1,
      sym_class_keyword,
    STATE(23), 1,
      aux_sym__mods,
    ACTIONS(85), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [383] = 3,
    ACTIONS(91), 1,
      anon_sym_Code_COLON,
    STATE(41), 1,
      sym_code_def,
    ACTIONS(89), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [398] = 3,
    STATE(23), 1,
      aux_sym__mods,
    ACTIONS(93), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(95), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [413] = 4,
    ACTIONS(98), 1,
      sym_interface_keyword,
    STATE(26), 1,
      aux_sym__mods,
    STATE(104), 1,
      sym_class_info_def,
    ACTIONS(100), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [430] = 2,
    ACTIONS(104), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(102), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
      anon_sym_DOT,
  [443] = 3,
    ACTIONS(106), 1,
      sym_class_keyword,
    STATE(23), 1,
      aux_sym__mods,
    ACTIONS(85), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [457] = 5,
    ACTIONS(108), 1,
      anon_sym_flags_COLON,
    ACTIONS(111), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(113), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(27), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(96), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [475] = 5,
    ACTIONS(116), 1,
      anon_sym_flags_COLON,
    ACTIONS(118), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(120), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(31), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(96), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [493] = 5,
    ACTIONS(116), 1,
      anon_sym_flags_COLON,
    ACTIONS(118), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(120), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(27), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(96), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [511] = 1,
    ACTIONS(122), 7,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_line,
  [521] = 5,
    ACTIONS(116), 1,
      anon_sym_flags_COLON,
    ACTIONS(120), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(124), 1,
      anon_sym_Constantpool_COLON,
    STATE(27), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(96), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [539] = 4,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym__simple_type,
    STATE(80), 1,
      sym_type,
    ACTIONS(27), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [555] = 5,
    ACTIONS(116), 1,
      anon_sym_flags_COLON,
    ACTIONS(120), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(128), 1,
      anon_sym_Constantpool_COLON,
    STATE(29), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(96), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [573] = 5,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(134), 1,
      sym_number,
    STATE(38), 1,
      aux_sym_code_info_repeat1,
    STATE(71), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [590] = 4,
    ACTIONS(138), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym__hash_number,
    ACTIONS(136), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(48), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [605] = 3,
    ACTIONS(142), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(44), 1,
      aux_sym_type_repeat1,
    ACTIONS(140), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [618] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym__hash_number,
    ACTIONS(144), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(37), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [633] = 5,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(149), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(72), 1,
      aux_sym_code_info_repeat1,
    STATE(73), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [650] = 3,
    STATE(49), 1,
      sym__simple_type,
    STATE(118), 1,
      sym_type,
    ACTIONS(27), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [663] = 1,
    ACTIONS(151), 6,
      sym_interface_keyword,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [672] = 1,
    ACTIONS(153), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [681] = 1,
    ACTIONS(155), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [690] = 1,
    ACTIONS(157), 6,
      sym_interface_keyword,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [699] = 3,
    ACTIONS(161), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(44), 1,
      aux_sym_type_repeat1,
    ACTIONS(159), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [712] = 1,
    ACTIONS(164), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [721] = 1,
    ACTIONS(166), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [730] = 5,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(57), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(170), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [747] = 4,
    ACTIONS(138), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym__hash_number,
    ACTIONS(176), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(37), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [762] = 3,
    ACTIONS(180), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(36), 1,
      aux_sym_type_repeat1,
    ACTIONS(178), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [775] = 4,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(55), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(61), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [789] = 4,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(155), 1,
      sym_source_file_def,
    STATE(58), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [803] = 4,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(50), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(74), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [817] = 4,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(53), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(195), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [831] = 4,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(56), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(199), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [845] = 4,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(55), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(76), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [859] = 4,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(53), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(208), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [873] = 4,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(53), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(199), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [887] = 4,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(153), 1,
      sym_source_file_def,
    STATE(66), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [901] = 3,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(212), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [913] = 5,
    ACTIONS(218), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(220), 1,
      sym__path_segment,
    ACTIONS(222), 1,
      anon_sym_SLASH,
    STATE(180), 1,
      sym__rest_of_the_line,
    STATE(181), 1,
      sym_file_path,
  [929] = 2,
    ACTIONS(226), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [938] = 4,
    ACTIONS(228), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      aux_sym_file_path_repeat1,
    STATE(130), 1,
      sym__rest_of_the_line,
  [951] = 2,
    ACTIONS(234), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(232), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [960] = 2,
    ACTIONS(238), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [969] = 2,
    ACTIONS(242), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [978] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(66), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [989] = 2,
    ACTIONS(251), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [998] = 2,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1007] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(62), 1,
      aux_sym_file_path_repeat1,
    STATE(142), 1,
      sym__rest_of_the_line,
  [1020] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(92), 1,
      aux_sym_file_path_repeat1,
    STATE(142), 1,
      sym__rest_of_the_line,
  [1033] = 3,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(149), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(74), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1044] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(262), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1055] = 3,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(264), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(74), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1066] = 3,
    ACTIONS(266), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(268), 1,
      sym_number,
    STATE(74), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1077] = 2,
    ACTIONS(206), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(76), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1086] = 2,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(271), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1095] = 1,
    ACTIONS(102), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [1102] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(70), 1,
      aux_sym_file_path_repeat1,
    STATE(163), 1,
      sym__rest_of_the_line,
  [1115] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_args_repeat1,
  [1125] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_args_repeat1,
  [1135] = 3,
    ACTIONS(275), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(283), 1,
      sym__path_segment,
    STATE(163), 1,
      sym__rest_of_the_line,
  [1145] = 1,
    ACTIONS(285), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1151] = 2,
    ACTIONS(289), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1159] = 1,
    ACTIONS(262), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1165] = 1,
    ACTIONS(291), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1171] = 1,
    ACTIONS(293), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1177] = 1,
    ACTIONS(295), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1183] = 1,
    ACTIONS(297), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1189] = 3,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_args,
  [1199] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_args_repeat1,
  [1209] = 3,
    ACTIONS(308), 1,
      aux_sym_code_info_stat_token1,
    STATE(34), 1,
      sym_code_info_stat,
    STATE(117), 1,
      sym_code_info,
  [1219] = 3,
    ACTIONS(310), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      aux_sym_file_path_repeat1,
  [1229] = 1,
    ACTIONS(315), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1235] = 1,
    ACTIONS(317), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1241] = 1,
    ACTIONS(319), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1247] = 2,
    ACTIONS(323), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(321), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1255] = 3,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      sym_args,
  [1265] = 3,
    ACTIONS(138), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      sym_number,
    STATE(59), 1,
      sym__hash_number,
  [1275] = 1,
    ACTIONS(329), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1281] = 3,
    ACTIONS(331), 1,
      anon_sym_descriptor_COLON,
    STATE(45), 1,
      sym__method_def_verbose,
    STATE(125), 1,
      sym_descriptor_def,
  [1291] = 3,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(172), 1,
      sym_args,
  [1301] = 3,
    ACTIONS(138), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      sym_number,
    STATE(47), 1,
      sym__hash_number,
  [1311] = 2,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_class_def_plain_body,
  [1318] = 2,
    ACTIONS(339), 1,
      anon_sym_Constantpool_COLON,
    STATE(51), 1,
      sym_constant_pool_def,
  [1325] = 2,
    ACTIONS(138), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym__hash_number,
  [1332] = 2,
    ACTIONS(138), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym__hash_number,
  [1339] = 2,
    ACTIONS(138), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym__hash_number,
  [1346] = 1,
    ACTIONS(341), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1351] = 2,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym__wrapped_hex_val,
  [1358] = 2,
    ACTIONS(345), 1,
      anon_sym_Lastmodified,
    STATE(113), 1,
      sym_header_info_last_mod,
  [1365] = 1,
    ACTIONS(347), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1370] = 2,
    ACTIONS(349), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(156), 1,
      sym__rest_of_the_line,
  [1377] = 2,
    ACTIONS(351), 1,
      anon_sym_MD5checksum,
    STATE(119), 1,
      sym_header_info_md5,
  [1384] = 2,
    ACTIONS(353), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym__hash_number,
  [1391] = 2,
    ACTIONS(355), 1,
      aux_sym_instruction_token1,
    STATE(83), 1,
      sym_instruction,
  [1398] = 2,
    ACTIONS(308), 1,
      aux_sym_code_info_stat_token1,
    STATE(84), 1,
      sym_code_info_stat,
  [1405] = 2,
    ACTIONS(357), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(42), 1,
      sym_line_number_table_def,
  [1412] = 1,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1417] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(43), 1,
      sym_header_info_compile,
  [1424] = 1,
    ACTIONS(310), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1429] = 2,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_class_def_plain_body,
  [1436] = 2,
    ACTIONS(353), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym__hash_number,
  [1443] = 2,
    ACTIONS(353), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym__hash_number,
  [1450] = 2,
    ACTIONS(353), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym__hash_number,
  [1457] = 2,
    ACTIONS(359), 1,
      anon_sym_flags_COLON,
    STATE(22), 1,
      sym_flag_def,
  [1464] = 2,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_args,
  [1471] = 2,
    ACTIONS(353), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym__hash_number,
  [1478] = 2,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_class_def_plain_body,
  [1485] = 2,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym__wrapped_hex_val,
  [1492] = 1,
    ACTIONS(361), 1,
      anon_sym_Lastmodified,
  [1496] = 1,
    ACTIONS(363), 1,
      anon_sym_SEMI,
  [1500] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
  [1504] = 1,
    ACTIONS(367), 1,
      anon_sym_SEMI,
  [1508] = 1,
    ACTIONS(369), 1,
      sym_identifier,
  [1512] = 1,
    ACTIONS(371), 1,
      anon_sym_COLON,
  [1516] = 1,
    ACTIONS(373), 1,
      anon_sym_DOT,
  [1520] = 1,
    ACTIONS(375), 1,
      anon_sym_flags_COLON,
  [1524] = 1,
    ACTIONS(377), 1,
      anon_sym_DOT,
  [1528] = 1,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
  [1532] = 1,
    ACTIONS(381), 1,
      anon_sym_SEMI,
  [1536] = 1,
    ACTIONS(383), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1540] = 1,
    ACTIONS(385), 1,
      anon_sym_Lastmodified,
  [1544] = 1,
    ACTIONS(387), 1,
      sym_number,
  [1548] = 1,
    ACTIONS(389), 1,
      sym_identifier,
  [1552] = 1,
    ACTIONS(391), 1,
      anon_sym_EQ,
  [1556] = 1,
    ACTIONS(393), 1,
      aux_sym_class_info_item_simple_token1,
  [1560] = 1,
    ACTIONS(395), 1,
      sym_md5,
  [1564] = 1,
    ACTIONS(397), 1,
      aux_sym_source_file_def_token1,
  [1568] = 1,
    ACTIONS(399), 1,
      anon_sym_SEMI,
  [1572] = 1,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [1576] = 1,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [1580] = 1,
    ACTIONS(405), 1,
      sym_identifier,
  [1584] = 1,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [1588] = 1,
    ACTIONS(409), 1,
      sym_number,
  [1592] = 1,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
  [1596] = 1,
    ACTIONS(413), 1,
      anon_sym_MD5checksum,
  [1600] = 1,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
  [1604] = 1,
    ACTIONS(417), 1,
      sym_descriptor_value,
  [1608] = 1,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [1612] = 1,
    ACTIONS(421), 1,
      sym__path_segment,
  [1616] = 1,
    ACTIONS(423), 1,
      anon_sym_COLON,
  [1620] = 1,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
  [1624] = 1,
    ACTIONS(427), 1,
      anon_sym_Lastmodified,
  [1628] = 1,
    ACTIONS(429), 1,
      sym_number,
  [1632] = 1,
    ACTIONS(431), 1,
      anon_sym_Compiledfrom,
  [1636] = 1,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
  [1640] = 1,
    ACTIONS(435), 1,
      sym_flag_value,
  [1644] = 1,
    ACTIONS(437), 1,
      sym_flag_value,
  [1648] = 1,
    ACTIONS(439), 1,
      sym_identifier,
  [1652] = 1,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
  [1656] = 1,
    ACTIONS(443), 1,
      anon_sym_COLON,
  [1660] = 1,
    ACTIONS(445), 1,
      anon_sym_SEMI,
  [1664] = 1,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
  [1668] = 1,
    ACTIONS(449), 1,
      anon_sym_SEMI,
  [1672] = 1,
    ACTIONS(451), 1,
      sym_number,
  [1676] = 1,
    ACTIONS(453), 1,
      sym_number,
  [1680] = 1,
    ACTIONS(455), 1,
      anon_sym_SEMI,
  [1684] = 1,
    ACTIONS(457), 1,
      sym_identifier,
  [1688] = 1,
    ACTIONS(459), 1,
      sym_flag_value,
  [1692] = 1,
    ACTIONS(461), 1,
      anon_sym_Lastmodified,
  [1696] = 1,
    ACTIONS(463), 1,
      anon_sym_Lastmodified,
  [1700] = 1,
    ACTIONS(465), 1,
      sym_hex_value,
  [1704] = 1,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
  [1708] = 1,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
  [1712] = 1,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
  [1716] = 1,
    ACTIONS(473), 1,
      sym_number,
  [1720] = 1,
    ACTIONS(475), 1,
      sym_flag_value,
  [1724] = 1,
    ACTIONS(477), 1,
      sym_flag_value,
  [1728] = 1,
    ACTIONS(479), 1,
      aux_sym_header_info_compile_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 201,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 257,
  [SMALL_STATE(15)] = 273,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 307,
  [SMALL_STATE(18)] = 323,
  [SMALL_STATE(19)] = 339,
  [SMALL_STATE(20)] = 355,
  [SMALL_STATE(21)] = 366,
  [SMALL_STATE(22)] = 383,
  [SMALL_STATE(23)] = 398,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 430,
  [SMALL_STATE(26)] = 443,
  [SMALL_STATE(27)] = 457,
  [SMALL_STATE(28)] = 475,
  [SMALL_STATE(29)] = 493,
  [SMALL_STATE(30)] = 511,
  [SMALL_STATE(31)] = 521,
  [SMALL_STATE(32)] = 539,
  [SMALL_STATE(33)] = 555,
  [SMALL_STATE(34)] = 573,
  [SMALL_STATE(35)] = 590,
  [SMALL_STATE(36)] = 605,
  [SMALL_STATE(37)] = 618,
  [SMALL_STATE(38)] = 633,
  [SMALL_STATE(39)] = 650,
  [SMALL_STATE(40)] = 663,
  [SMALL_STATE(41)] = 672,
  [SMALL_STATE(42)] = 681,
  [SMALL_STATE(43)] = 690,
  [SMALL_STATE(44)] = 699,
  [SMALL_STATE(45)] = 712,
  [SMALL_STATE(46)] = 721,
  [SMALL_STATE(47)] = 730,
  [SMALL_STATE(48)] = 747,
  [SMALL_STATE(49)] = 762,
  [SMALL_STATE(50)] = 775,
  [SMALL_STATE(51)] = 789,
  [SMALL_STATE(52)] = 803,
  [SMALL_STATE(53)] = 817,
  [SMALL_STATE(54)] = 831,
  [SMALL_STATE(55)] = 845,
  [SMALL_STATE(56)] = 859,
  [SMALL_STATE(57)] = 873,
  [SMALL_STATE(58)] = 887,
  [SMALL_STATE(59)] = 901,
  [SMALL_STATE(60)] = 913,
  [SMALL_STATE(61)] = 929,
  [SMALL_STATE(62)] = 938,
  [SMALL_STATE(63)] = 951,
  [SMALL_STATE(64)] = 960,
  [SMALL_STATE(65)] = 969,
  [SMALL_STATE(66)] = 978,
  [SMALL_STATE(67)] = 989,
  [SMALL_STATE(68)] = 998,
  [SMALL_STATE(69)] = 1007,
  [SMALL_STATE(70)] = 1020,
  [SMALL_STATE(71)] = 1033,
  [SMALL_STATE(72)] = 1044,
  [SMALL_STATE(73)] = 1055,
  [SMALL_STATE(74)] = 1066,
  [SMALL_STATE(75)] = 1077,
  [SMALL_STATE(76)] = 1086,
  [SMALL_STATE(77)] = 1095,
  [SMALL_STATE(78)] = 1102,
  [SMALL_STATE(79)] = 1115,
  [SMALL_STATE(80)] = 1125,
  [SMALL_STATE(81)] = 1135,
  [SMALL_STATE(82)] = 1145,
  [SMALL_STATE(83)] = 1151,
  [SMALL_STATE(84)] = 1159,
  [SMALL_STATE(85)] = 1165,
  [SMALL_STATE(86)] = 1171,
  [SMALL_STATE(87)] = 1177,
  [SMALL_STATE(88)] = 1183,
  [SMALL_STATE(89)] = 1189,
  [SMALL_STATE(90)] = 1199,
  [SMALL_STATE(91)] = 1209,
  [SMALL_STATE(92)] = 1219,
  [SMALL_STATE(93)] = 1229,
  [SMALL_STATE(94)] = 1235,
  [SMALL_STATE(95)] = 1241,
  [SMALL_STATE(96)] = 1247,
  [SMALL_STATE(97)] = 1255,
  [SMALL_STATE(98)] = 1265,
  [SMALL_STATE(99)] = 1275,
  [SMALL_STATE(100)] = 1281,
  [SMALL_STATE(101)] = 1291,
  [SMALL_STATE(102)] = 1301,
  [SMALL_STATE(103)] = 1311,
  [SMALL_STATE(104)] = 1318,
  [SMALL_STATE(105)] = 1325,
  [SMALL_STATE(106)] = 1332,
  [SMALL_STATE(107)] = 1339,
  [SMALL_STATE(108)] = 1346,
  [SMALL_STATE(109)] = 1351,
  [SMALL_STATE(110)] = 1358,
  [SMALL_STATE(111)] = 1365,
  [SMALL_STATE(112)] = 1370,
  [SMALL_STATE(113)] = 1377,
  [SMALL_STATE(114)] = 1384,
  [SMALL_STATE(115)] = 1391,
  [SMALL_STATE(116)] = 1398,
  [SMALL_STATE(117)] = 1405,
  [SMALL_STATE(118)] = 1412,
  [SMALL_STATE(119)] = 1417,
  [SMALL_STATE(120)] = 1424,
  [SMALL_STATE(121)] = 1429,
  [SMALL_STATE(122)] = 1436,
  [SMALL_STATE(123)] = 1443,
  [SMALL_STATE(124)] = 1450,
  [SMALL_STATE(125)] = 1457,
  [SMALL_STATE(126)] = 1464,
  [SMALL_STATE(127)] = 1471,
  [SMALL_STATE(128)] = 1478,
  [SMALL_STATE(129)] = 1485,
  [SMALL_STATE(130)] = 1492,
  [SMALL_STATE(131)] = 1496,
  [SMALL_STATE(132)] = 1500,
  [SMALL_STATE(133)] = 1504,
  [SMALL_STATE(134)] = 1508,
  [SMALL_STATE(135)] = 1512,
  [SMALL_STATE(136)] = 1516,
  [SMALL_STATE(137)] = 1520,
  [SMALL_STATE(138)] = 1524,
  [SMALL_STATE(139)] = 1528,
  [SMALL_STATE(140)] = 1532,
  [SMALL_STATE(141)] = 1536,
  [SMALL_STATE(142)] = 1540,
  [SMALL_STATE(143)] = 1544,
  [SMALL_STATE(144)] = 1548,
  [SMALL_STATE(145)] = 1552,
  [SMALL_STATE(146)] = 1556,
  [SMALL_STATE(147)] = 1560,
  [SMALL_STATE(148)] = 1564,
  [SMALL_STATE(149)] = 1568,
  [SMALL_STATE(150)] = 1572,
  [SMALL_STATE(151)] = 1576,
  [SMALL_STATE(152)] = 1580,
  [SMALL_STATE(153)] = 1584,
  [SMALL_STATE(154)] = 1588,
  [SMALL_STATE(155)] = 1592,
  [SMALL_STATE(156)] = 1596,
  [SMALL_STATE(157)] = 1600,
  [SMALL_STATE(158)] = 1604,
  [SMALL_STATE(159)] = 1608,
  [SMALL_STATE(160)] = 1612,
  [SMALL_STATE(161)] = 1616,
  [SMALL_STATE(162)] = 1620,
  [SMALL_STATE(163)] = 1624,
  [SMALL_STATE(164)] = 1628,
  [SMALL_STATE(165)] = 1632,
  [SMALL_STATE(166)] = 1636,
  [SMALL_STATE(167)] = 1640,
  [SMALL_STATE(168)] = 1644,
  [SMALL_STATE(169)] = 1648,
  [SMALL_STATE(170)] = 1652,
  [SMALL_STATE(171)] = 1656,
  [SMALL_STATE(172)] = 1660,
  [SMALL_STATE(173)] = 1664,
  [SMALL_STATE(174)] = 1668,
  [SMALL_STATE(175)] = 1672,
  [SMALL_STATE(176)] = 1676,
  [SMALL_STATE(177)] = 1680,
  [SMALL_STATE(178)] = 1684,
  [SMALL_STATE(179)] = 1688,
  [SMALL_STATE(180)] = 1692,
  [SMALL_STATE(181)] = 1696,
  [SMALL_STATE(182)] = 1700,
  [SMALL_STATE(183)] = 1704,
  [SMALL_STATE(184)] = 1708,
  [SMALL_STATE(185)] = 1712,
  [SMALL_STATE(186)] = 1716,
  [SMALL_STATE(187)] = 1720,
  [SMALL_STATE(188)] = 1724,
  [SMALL_STATE(189)] = 1728,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(8),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mods, 1),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mods, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mods, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(164),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(188),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mods, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mods, 2), SHIFT_REPEAT(23),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(129),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(102),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(143),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(44),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(146),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(167),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(12),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(116),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(161),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(39),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(160),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [471] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
