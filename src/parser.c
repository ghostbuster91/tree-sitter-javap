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
#define STATE_COUNT 199
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  anon_sym_public = 12,
  anon_sym_LPAREN_RPAREN_SEMI = 13,
  anon_sym_Code_COLON = 14,
  anon_sym_COMMA = 15,
  anon_sym_LineNumberTable_COLON = 16,
  anon_sym_line = 17,
  anon_sym_COLON = 18,
  aux_sym_instruction_token1 = 19,
  anon_sym_POUND = 20,
  aux_sym_code_info_stat_token1 = 21,
  anon_sym_descriptor_COLON = 22,
  sym_descriptor_value = 23,
  anon_sym_flags_COLON = 24,
  sym_flag_value = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  sym_hex_value = 28,
  anon_sym_LBRACK_RBRACK = 29,
  anon_sym_bool = 30,
  anon_sym_void = 31,
  anon_sym_int = 32,
  aux_sym__simple_type_token1 = 33,
  sym_number = 34,
  anon_sym_SourceFile_COLON_DQUOTE = 35,
  aux_sym_source_file_def_token1 = 36,
  anon_sym_DQUOTE = 37,
  sym_comment = 38,
  anon_sym_Constantpool_COLON = 39,
  anon_sym_EQ = 40,
  anon_sym_Utf8 = 41,
  aux_sym__constant_pool_item_type_utf8_token1 = 42,
  anon_sym_Class = 43,
  anon_sym_String = 44,
  anon_sym_Methodref = 45,
  anon_sym_DOT = 46,
  anon_sym_Fieldref = 47,
  anon_sym_NameAndType = 48,
  sym_class_keyword = 49,
  aux_sym_class_info_item_simple_token1 = 50,
  anon_sym_Lastmodified = 51,
  sym_md5 = 52,
  anon_sym_MD5checksum = 53,
  anon_sym_Compiledfrom = 54,
  aux_sym_header_info_compile_token1 = 55,
  sym__path_segment = 56,
  anon_sym_SLASH = 57,
  anon_sym_Classfile = 58,
  sym_source_file = 59,
  sym__source_file_verbose = 60,
  sym__source_file_plain = 61,
  sym_class_def_plain = 62,
  sym_interface_def_plain = 63,
  sym_class_def_plain_body = 64,
  sym_class_def_plain_body_item = 65,
  sym_field_def = 66,
  sym_method_def = 67,
  sym__method_def_verbose = 68,
  sym_static_block_def = 69,
  aux_sym__mods = 70,
  sym_class_definition = 71,
  sym_code_def = 72,
  sym_code_info = 73,
  sym_line_number_table_def = 74,
  sym_numered_line = 75,
  sym_numered_instruction = 76,
  sym_instruction = 77,
  sym_code_info_stat = 78,
  sym_descriptor_def = 79,
  sym_flag_def = 80,
  sym__wrapped_hex_val = 81,
  sym_args = 82,
  sym_type = 83,
  sym__simple_type = 84,
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
  aux_sym__source_file_verbose_repeat1 = 107,
  aux_sym_class_def_plain_body_repeat1 = 108,
  aux_sym_class_definition_repeat1 = 109,
  aux_sym_code_info_repeat1 = 110,
  aux_sym_code_info_repeat2 = 111,
  aux_sym_line_number_table_def_repeat1 = 112,
  aux_sym_flag_def_repeat1 = 113,
  aux_sym_args_repeat1 = 114,
  aux_sym_type_repeat1 = 115,
  aux_sym_constant_pool_def_repeat1 = 116,
  aux_sym_class_info_def_repeat1 = 117,
  aux_sym_class_info_item_simple_repeat1 = 118,
  aux_sym_file_path_repeat1 = 119,
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 13,
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
  [56] = 16,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 20,
  [64] = 64,
  [65] = 22,
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
  [83] = 31,
  [84] = 84,
  [85] = 30,
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
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 112,
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
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 158,
  [196] = 147,
  [197] = 187,
  [198] = 198,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(205);
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(431);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == ';') ADVANCE(208);
      if (lookahead == '=') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(369);
      if (lookahead == 'L') ADVANCE(309);
      if (lookahead == 'M') ADVANCE(305);
      if (lookahead == 'S') ADVANCE(370);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'b') ADVANCE(374);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'p') ADVANCE(378);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == '{') ADVANCE(206);
      if (lookahead == '}') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(204)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(408);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == 'C') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'L') ADVANCE(55);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(125);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '{') ADVANCE(206);
      if (lookahead == '}') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 'v') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '=') ADVANCE(415);
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
      if (lookahead == '/') ADVANCE(413);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(226);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(236);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(233);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(414);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(414);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(228);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ';') ADVANCE(225);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'F') ADVANCE(105);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(159);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(241);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(351);
      if (lookahead == 'p') ADVANCE(378);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == '}') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == 'v') ADVANCE(278);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 107:
      if (lookahead == 'k') ADVANCE(140);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(427);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 161:
      if (lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 162:
      if (lookahead == 'x') ADVANCE(200);
      END_STATE();
    case 163:
      if (lookahead == '}') ADVANCE(209);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 165:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 166:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 167:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(429);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 168:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 204:
      if (eof) ADVANCE(205);
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == '/') ADVANCE(431);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == ';') ADVANCE(208);
      if (lookahead == '=') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(369);
      if (lookahead == 'L') ADVANCE(309);
      if (lookahead == 'M') ADVANCE(305);
      if (lookahead == 'S') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'b') ADVANCE(374);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'p') ADVANCE(378);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == '{') ADVANCE(206);
      if (lookahead == '}') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(204)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_mod_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_mod_abstract);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_mod_abstract);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_mod_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_mod_final);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_mod_final);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_mod_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_mod_default);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_mod_default);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_mod_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_mod_access);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_mod_access);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_mod_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 's') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(376);
      if (lookahead == 'n') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 's') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(367);
      if (lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(416);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(416);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(421);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(418);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(418);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(429);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(421);
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
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == '8') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 71:
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
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 416},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 417},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 417},
  [78] = {.lex_state = 417},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 417},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 418},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 417},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 16},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 419},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 164},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 417},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 165},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 419},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 166},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 167},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 168},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 165},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 165},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 165},
  [197] = {.lex_state = 165},
  [198] = {.lex_state = 0},
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
    [sym_source_file] = STATE(194),
    [sym__source_file_verbose] = STATE(193),
    [sym__source_file_plain] = STATE(193),
    [sym_header_info_compile] = STATE(24),
    [sym_header_info] = STATE(113),
    [sym_header] = STATE(37),
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
    STATE(3), 1,
      sym_descriptor_def,
    STATE(8), 1,
      aux_sym__mods,
    STATE(10), 1,
      sym_flag_def,
    STATE(17), 1,
      aux_sym_class_definition_repeat1,
    STATE(23), 1,
      sym_code_def,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [38] = 9,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_flags_COLON,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(11), 1,
      sym_flag_def,
    STATE(15), 1,
      aux_sym_class_definition_repeat1,
    STATE(28), 1,
      sym_code_def,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [70] = 7,
    ACTIONS(19), 1,
      anon_sym_Utf8,
    ACTIONS(21), 1,
      anon_sym_Class,
    ACTIONS(23), 1,
      anon_sym_String,
    ACTIONS(25), 1,
      anon_sym_Methodref,
    ACTIONS(27), 1,
      anon_sym_Fieldref,
    ACTIONS(29), 1,
      anon_sym_NameAndType,
    STATE(86), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
  [98] = 6,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_mod_static,
    STATE(7), 1,
      aux_sym__mods,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(150), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(36), 4,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [123] = 6,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_mod_static,
    STATE(7), 1,
      aux_sym__mods,
    STATE(9), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(150), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(43), 4,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [148] = 5,
    STATE(13), 1,
      aux_sym__mods,
    STATE(52), 1,
      sym__simple_type,
    STATE(104), 1,
      sym_type,
    ACTIONS(47), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
    ACTIONS(45), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [171] = 5,
    STATE(13), 1,
      aux_sym__mods,
    STATE(52), 1,
      sym__simple_type,
    STATE(97), 1,
      sym_type,
    ACTIONS(47), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
    ACTIONS(45), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [194] = 6,
    ACTIONS(41), 1,
      sym_mod_static,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym__mods,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(150), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(43), 4,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [219] = 7,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(15), 1,
      aux_sym_class_definition_repeat1,
    STATE(28), 1,
      sym_code_def,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [245] = 7,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(25), 1,
      aux_sym_class_definition_repeat1,
    STATE(26), 1,
      sym_code_def,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [271] = 2,
    ACTIONS(53), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(55), 9,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [286] = 3,
    STATE(13), 1,
      aux_sym__mods,
    ACTIONS(60), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
    ACTIONS(57), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [303] = 5,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(19), 1,
      aux_sym_class_definition_repeat1,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [323] = 5,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(19), 1,
      aux_sym_class_definition_repeat1,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [343] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 7,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_Code_COLON,
  [359] = 5,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(19), 1,
      aux_sym_class_definition_repeat1,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [379] = 3,
    ACTIONS(70), 1,
      anon_sym_line,
    STATE(27), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(68), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [395] = 5,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(19), 1,
      aux_sym_class_definition_repeat1,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(74), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [415] = 3,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(77), 7,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_Code_COLON,
  [431] = 3,
    ACTIONS(84), 1,
      anon_sym_line,
    STATE(21), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(82), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [447] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(87), 7,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_Code_COLON,
  [463] = 5,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(15), 1,
      aux_sym_class_definition_repeat1,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [483] = 4,
    ACTIONS(89), 1,
      sym_interface_keyword,
    STATE(33), 1,
      aux_sym__mods,
    STATE(188), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(91), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [501] = 5,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(19), 1,
      aux_sym_class_definition_repeat1,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [521] = 5,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(14), 1,
      aux_sym_class_definition_repeat1,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [541] = 3,
    ACTIONS(70), 1,
      anon_sym_line,
    STATE(21), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(95), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [557] = 5,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__mods,
    STATE(25), 1,
      aux_sym_class_definition_repeat1,
    STATE(166), 1,
      sym_method_def,
    ACTIONS(9), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [577] = 3,
    STATE(29), 1,
      aux_sym__mods,
    ACTIONS(97), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(99), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [592] = 2,
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
  [605] = 1,
    ACTIONS(77), 8,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
  [616] = 1,
    ACTIONS(106), 8,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
  [627] = 4,
    ACTIONS(108), 1,
      sym_interface_keyword,
    ACTIONS(112), 1,
      sym_class_keyword,
    STATE(29), 1,
      aux_sym__mods,
    ACTIONS(110), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [644] = 1,
    ACTIONS(114), 7,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
      anon_sym_line,
  [654] = 5,
    ACTIONS(116), 1,
      anon_sym_flags_COLON,
    ACTIONS(118), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(120), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(39), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(102), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [672] = 4,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym__simple_type,
    STATE(105), 1,
      sym_type,
    ACTIONS(47), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [688] = 3,
    STATE(38), 1,
      aux_sym__mods,
    STATE(117), 1,
      sym_class_info_def,
    ACTIONS(124), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [702] = 3,
    ACTIONS(126), 1,
      sym_class_keyword,
    STATE(29), 1,
      aux_sym__mods,
    ACTIONS(110), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [716] = 5,
    ACTIONS(128), 1,
      anon_sym_flags_COLON,
    ACTIONS(131), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(133), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(39), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(102), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [734] = 5,
    ACTIONS(116), 1,
      anon_sym_flags_COLON,
    ACTIONS(120), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(136), 1,
      anon_sym_Constantpool_COLON,
    STATE(35), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(102), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [752] = 5,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(61), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(140), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [769] = 1,
    ACTIONS(146), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [778] = 5,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(152), 1,
      sym_number,
    STATE(80), 1,
      aux_sym_code_info_repeat1,
    STATE(69), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [795] = 1,
    ACTIONS(154), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [804] = 4,
    ACTIONS(158), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym__hash_number,
    ACTIONS(156), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(45), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [819] = 5,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(161), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(43), 1,
      aux_sym_code_info_repeat1,
    STATE(81), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [836] = 1,
    ACTIONS(163), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [845] = 3,
    ACTIONS(167), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(48), 1,
      aux_sym_type_repeat1,
    ACTIONS(165), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [858] = 4,
    ACTIONS(172), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym__hash_number,
    ACTIONS(170), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(45), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [873] = 1,
    ACTIONS(174), 6,
      sym_interface_keyword,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [882] = 3,
    STATE(52), 1,
      sym__simple_type,
    STATE(136), 1,
      sym_type,
    ACTIONS(47), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [895] = 3,
    ACTIONS(178), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(55), 1,
      aux_sym_type_repeat1,
    ACTIONS(176), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [908] = 4,
    ACTIONS(172), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym__hash_number,
    ACTIONS(180), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(49), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [923] = 1,
    ACTIONS(182), 6,
      anon_sym_RBRACE,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [932] = 3,
    ACTIONS(186), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(48), 1,
      aux_sym_type_repeat1,
    ACTIONS(184), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [945] = 4,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(65), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [959] = 5,
    ACTIONS(192), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(194), 1,
      sym__path_segment,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    STATE(190), 1,
      sym__rest_of_the_line,
    STATE(191), 1,
      sym_file_path,
  [975] = 4,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(200), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(155), 1,
      sym_source_file_def,
    STATE(60), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [989] = 4,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(67), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(202), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1003] = 4,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(200), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(143), 1,
      sym_source_file_def,
    STATE(74), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1017] = 4,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(62), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(202), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1031] = 4,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(62), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(209), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1045] = 4,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(63), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(77), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1059] = 3,
    ACTIONS(220), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(218), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1071] = 4,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(63), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(87), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1085] = 1,
    ACTIONS(226), 5,
      sym_mod_static,
      sym_mod_abstract,
      sym_mod_final,
      sym_mod_default,
      sym_mod_access,
  [1093] = 4,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(62), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(228), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1107] = 2,
    ACTIONS(234), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1116] = 3,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(236), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(70), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1127] = 3,
    ACTIONS(238), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(240), 1,
      sym_number,
    STATE(70), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1138] = 2,
    ACTIONS(245), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(243), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1147] = 4,
    ACTIONS(247), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(249), 1,
      anon_sym_SLASH,
    STATE(77), 1,
      aux_sym_file_path_repeat1,
    STATE(165), 1,
      sym__rest_of_the_line,
  [1160] = 2,
    ACTIONS(253), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1169] = 3,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(74), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1180] = 2,
    ACTIONS(262), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1189] = 2,
    ACTIONS(266), 1,
      sym_comment,
    ACTIONS(264), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1198] = 4,
    ACTIONS(249), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(99), 1,
      aux_sym_file_path_repeat1,
    STATE(154), 1,
      sym__rest_of_the_line,
  [1211] = 4,
    ACTIONS(247), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(249), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      aux_sym_file_path_repeat1,
    STATE(165), 1,
      sym__rest_of_the_line,
  [1224] = 2,
    ACTIONS(272), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1233] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(277), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1244] = 3,
    ACTIONS(150), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(152), 1,
      sym_number,
    STATE(70), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1255] = 2,
    ACTIONS(281), 1,
      anon_sym_POUND,
    ACTIONS(279), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1264] = 2,
    ACTIONS(216), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(77), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1273] = 4,
    ACTIONS(249), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(78), 1,
      aux_sym_file_path_repeat1,
    STATE(180), 1,
      sym__rest_of_the_line,
  [1286] = 1,
    ACTIONS(102), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [1293] = 1,
    ACTIONS(285), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1299] = 1,
    ACTIONS(287), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1305] = 1,
    ACTIONS(289), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1311] = 3,
    ACTIONS(13), 1,
      anon_sym_descriptor_COLON,
    STATE(54), 1,
      sym__method_def_verbose,
    STATE(126), 1,
      sym_descriptor_def,
  [1321] = 2,
    ACTIONS(293), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1329] = 3,
    ACTIONS(283), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(295), 1,
      sym__path_segment,
    STATE(180), 1,
      sym__rest_of_the_line,
  [1339] = 3,
    ACTIONS(297), 1,
      aux_sym_code_info_stat_token1,
    STATE(46), 1,
      sym_code_info_stat,
    STATE(138), 1,
      sym_code_info,
  [1349] = 3,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      sym_number,
    STATE(41), 1,
      sym__hash_number,
  [1359] = 3,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_args,
  [1369] = 1,
    ACTIONS(305), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1375] = 1,
    ACTIONS(277), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1381] = 3,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(168), 1,
      sym_args,
  [1391] = 3,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_args_repeat1,
  [1401] = 3,
    ACTIONS(313), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      aux_sym_file_path_repeat1,
  [1411] = 3,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_args_repeat1,
  [1421] = 1,
    ACTIONS(323), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1427] = 2,
    ACTIONS(327), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(325), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1435] = 1,
    ACTIONS(329), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1441] = 3,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(168), 1,
      sym_args,
  [1451] = 3,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_args_repeat1,
  [1461] = 1,
    ACTIONS(335), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1467] = 1,
    ACTIONS(337), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1473] = 3,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      sym_number,
    STATE(64), 1,
      sym__hash_number,
  [1483] = 1,
    ACTIONS(341), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1489] = 2,
    ACTIONS(343), 1,
      anon_sym_public,
    STATE(145), 1,
      sym_class_definition,
  [1496] = 2,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_class_def_plain_body,
  [1503] = 2,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__wrapped_hex_val,
  [1510] = 2,
    ACTIONS(349), 1,
      anon_sym_Lastmodified,
    STATE(116), 1,
      sym_header_info_last_mod,
  [1517] = 2,
    ACTIONS(351), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(174), 1,
      sym__rest_of_the_line,
  [1524] = 1,
    ACTIONS(353), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1529] = 2,
    ACTIONS(355), 1,
      anon_sym_MD5checksum,
    STATE(120), 1,
      sym_header_info_md5,
  [1536] = 2,
    ACTIONS(357), 1,
      anon_sym_Constantpool_COLON,
    STATE(58), 1,
      sym_constant_pool_def,
  [1543] = 2,
    ACTIONS(11), 1,
      anon_sym_Code_COLON,
    STATE(42), 1,
      sym_code_def,
  [1550] = 2,
    ACTIONS(359), 1,
      aux_sym_instruction_token1,
    STATE(90), 1,
      sym_instruction,
  [1557] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(66), 1,
      sym_header_info_compile,
  [1564] = 2,
    ACTIONS(361), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym__hash_number,
  [1571] = 2,
    ACTIONS(361), 1,
      anon_sym_POUND,
    STATE(75), 1,
      sym__hash_number,
  [1578] = 2,
    ACTIONS(361), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym__hash_number,
  [1585] = 1,
    ACTIONS(313), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1590] = 2,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_args,
  [1597] = 2,
    ACTIONS(15), 1,
      anon_sym_flags_COLON,
    STATE(118), 1,
      sym_flag_def,
  [1604] = 2,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_class_def_plain_body,
  [1611] = 1,
    ACTIONS(363), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1616] = 2,
    ACTIONS(297), 1,
      aux_sym_code_info_stat_token1,
    STATE(96), 1,
      sym_code_info_stat,
  [1623] = 2,
    ACTIONS(172), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym__hash_number,
  [1630] = 2,
    ACTIONS(172), 1,
      anon_sym_POUND,
    STATE(198), 1,
      sym__hash_number,
  [1637] = 2,
    ACTIONS(172), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym__hash_number,
  [1644] = 2,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_class_def_plain_body,
  [1651] = 2,
    ACTIONS(361), 1,
      anon_sym_POUND,
    STATE(76), 1,
      sym__hash_number,
  [1658] = 2,
    ACTIONS(361), 1,
      anon_sym_POUND,
    STATE(79), 1,
      sym__hash_number,
  [1665] = 1,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1670] = 2,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym__wrapped_hex_val,
  [1677] = 2,
    ACTIONS(365), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(44), 1,
      sym_line_number_table_def,
  [1684] = 1,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
  [1688] = 1,
    ACTIONS(369), 1,
      anon_sym_SEMI,
  [1692] = 1,
    ACTIONS(371), 1,
      sym_number,
  [1696] = 1,
    ACTIONS(373), 1,
      sym_hex_value,
  [1700] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
  [1704] = 1,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
  [1708] = 1,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
  [1712] = 1,
    ACTIONS(381), 1,
      sym_identifier,
  [1716] = 1,
    ACTIONS(383), 1,
      sym_flag_value,
  [1720] = 1,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
  [1724] = 1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
  [1728] = 1,
    ACTIONS(389), 1,
      anon_sym_SEMI,
  [1732] = 1,
    ACTIONS(391), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1736] = 1,
    ACTIONS(393), 1,
      anon_sym_SEMI,
  [1740] = 1,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
  [1744] = 1,
    ACTIONS(397), 1,
      anon_sym_Lastmodified,
  [1748] = 1,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [1752] = 1,
    ACTIONS(401), 1,
      aux_sym_source_file_def_token1,
  [1756] = 1,
    ACTIONS(403), 1,
      anon_sym_EQ,
  [1760] = 1,
    ACTIONS(405), 1,
      sym_number,
  [1764] = 1,
    ACTIONS(407), 1,
      anon_sym_Compiledfrom,
  [1768] = 1,
    ACTIONS(409), 1,
      anon_sym_SEMI,
  [1772] = 1,
    ACTIONS(411), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1776] = 1,
    ACTIONS(413), 1,
      anon_sym_COLON,
  [1780] = 1,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
  [1784] = 1,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
  [1788] = 1,
    ACTIONS(419), 1,
      anon_sym_Lastmodified,
  [1792] = 1,
    ACTIONS(421), 1,
      anon_sym_SEMI,
  [1796] = 1,
    ACTIONS(423), 1,
      sym_descriptor_value,
  [1800] = 1,
    ACTIONS(425), 1,
      anon_sym_SEMI,
  [1804] = 1,
    ACTIONS(427), 1,
      sym_identifier,
  [1808] = 1,
    ACTIONS(429), 1,
      sym_number,
  [1812] = 1,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [1816] = 1,
    ACTIONS(433), 1,
      sym_md5,
  [1820] = 1,
    ACTIONS(435), 1,
      aux_sym_header_info_compile_token1,
  [1824] = 1,
    ACTIONS(437), 1,
      anon_sym_MD5checksum,
  [1828] = 1,
    ACTIONS(439), 1,
      sym_identifier,
  [1832] = 1,
    ACTIONS(441), 1,
      sym_identifier,
  [1836] = 1,
    ACTIONS(443), 1,
      anon_sym_DOT,
  [1840] = 1,
    ACTIONS(445), 1,
      anon_sym_SEMI,
  [1844] = 1,
    ACTIONS(447), 1,
      anon_sym_COLON,
  [1848] = 1,
    ACTIONS(449), 1,
      anon_sym_Lastmodified,
  [1852] = 1,
    ACTIONS(451), 1,
      sym__path_segment,
  [1856] = 1,
    ACTIONS(453), 1,
      anon_sym_SEMI,
  [1860] = 1,
    ACTIONS(455), 1,
      aux_sym_class_info_item_simple_token1,
  [1864] = 1,
    ACTIONS(457), 1,
      sym_number,
  [1868] = 1,
    ACTIONS(459), 1,
      sym_number,
  [1872] = 1,
    ACTIONS(461), 1,
      anon_sym_COLON,
  [1876] = 1,
    ACTIONS(463), 1,
      sym_flag_value,
  [1880] = 1,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
  [1884] = 1,
    ACTIONS(467), 1,
      sym_identifier,
  [1888] = 1,
    ACTIONS(469), 1,
      anon_sym_Lastmodified,
  [1892] = 1,
    ACTIONS(471), 1,
      anon_sym_Lastmodified,
  [1896] = 1,
    ACTIONS(473), 1,
      sym_flag_value,
  [1900] = 1,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [1904] = 1,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
  [1908] = 1,
    ACTIONS(479), 1,
      sym_number,
  [1912] = 1,
    ACTIONS(481), 1,
      sym_flag_value,
  [1916] = 1,
    ACTIONS(483), 1,
      sym_flag_value,
  [1920] = 1,
    ACTIONS(485), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 219,
  [SMALL_STATE(11)] = 245,
  [SMALL_STATE(12)] = 271,
  [SMALL_STATE(13)] = 286,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 343,
  [SMALL_STATE(17)] = 359,
  [SMALL_STATE(18)] = 379,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 415,
  [SMALL_STATE(21)] = 431,
  [SMALL_STATE(22)] = 447,
  [SMALL_STATE(23)] = 463,
  [SMALL_STATE(24)] = 483,
  [SMALL_STATE(25)] = 501,
  [SMALL_STATE(26)] = 521,
  [SMALL_STATE(27)] = 541,
  [SMALL_STATE(28)] = 557,
  [SMALL_STATE(29)] = 577,
  [SMALL_STATE(30)] = 592,
  [SMALL_STATE(31)] = 605,
  [SMALL_STATE(32)] = 616,
  [SMALL_STATE(33)] = 627,
  [SMALL_STATE(34)] = 644,
  [SMALL_STATE(35)] = 654,
  [SMALL_STATE(36)] = 672,
  [SMALL_STATE(37)] = 688,
  [SMALL_STATE(38)] = 702,
  [SMALL_STATE(39)] = 716,
  [SMALL_STATE(40)] = 734,
  [SMALL_STATE(41)] = 752,
  [SMALL_STATE(42)] = 769,
  [SMALL_STATE(43)] = 778,
  [SMALL_STATE(44)] = 795,
  [SMALL_STATE(45)] = 804,
  [SMALL_STATE(46)] = 819,
  [SMALL_STATE(47)] = 836,
  [SMALL_STATE(48)] = 845,
  [SMALL_STATE(49)] = 858,
  [SMALL_STATE(50)] = 873,
  [SMALL_STATE(51)] = 882,
  [SMALL_STATE(52)] = 895,
  [SMALL_STATE(53)] = 908,
  [SMALL_STATE(54)] = 923,
  [SMALL_STATE(55)] = 932,
  [SMALL_STATE(56)] = 945,
  [SMALL_STATE(57)] = 959,
  [SMALL_STATE(58)] = 975,
  [SMALL_STATE(59)] = 989,
  [SMALL_STATE(60)] = 1003,
  [SMALL_STATE(61)] = 1017,
  [SMALL_STATE(62)] = 1031,
  [SMALL_STATE(63)] = 1045,
  [SMALL_STATE(64)] = 1059,
  [SMALL_STATE(65)] = 1071,
  [SMALL_STATE(66)] = 1085,
  [SMALL_STATE(67)] = 1093,
  [SMALL_STATE(68)] = 1107,
  [SMALL_STATE(69)] = 1116,
  [SMALL_STATE(70)] = 1127,
  [SMALL_STATE(71)] = 1138,
  [SMALL_STATE(72)] = 1147,
  [SMALL_STATE(73)] = 1160,
  [SMALL_STATE(74)] = 1169,
  [SMALL_STATE(75)] = 1180,
  [SMALL_STATE(76)] = 1189,
  [SMALL_STATE(77)] = 1198,
  [SMALL_STATE(78)] = 1211,
  [SMALL_STATE(79)] = 1224,
  [SMALL_STATE(80)] = 1233,
  [SMALL_STATE(81)] = 1244,
  [SMALL_STATE(82)] = 1255,
  [SMALL_STATE(83)] = 1264,
  [SMALL_STATE(84)] = 1273,
  [SMALL_STATE(85)] = 1286,
  [SMALL_STATE(86)] = 1293,
  [SMALL_STATE(87)] = 1299,
  [SMALL_STATE(88)] = 1305,
  [SMALL_STATE(89)] = 1311,
  [SMALL_STATE(90)] = 1321,
  [SMALL_STATE(91)] = 1329,
  [SMALL_STATE(92)] = 1339,
  [SMALL_STATE(93)] = 1349,
  [SMALL_STATE(94)] = 1359,
  [SMALL_STATE(95)] = 1369,
  [SMALL_STATE(96)] = 1375,
  [SMALL_STATE(97)] = 1381,
  [SMALL_STATE(98)] = 1391,
  [SMALL_STATE(99)] = 1401,
  [SMALL_STATE(100)] = 1411,
  [SMALL_STATE(101)] = 1421,
  [SMALL_STATE(102)] = 1427,
  [SMALL_STATE(103)] = 1435,
  [SMALL_STATE(104)] = 1441,
  [SMALL_STATE(105)] = 1451,
  [SMALL_STATE(106)] = 1461,
  [SMALL_STATE(107)] = 1467,
  [SMALL_STATE(108)] = 1473,
  [SMALL_STATE(109)] = 1483,
  [SMALL_STATE(110)] = 1489,
  [SMALL_STATE(111)] = 1496,
  [SMALL_STATE(112)] = 1503,
  [SMALL_STATE(113)] = 1510,
  [SMALL_STATE(114)] = 1517,
  [SMALL_STATE(115)] = 1524,
  [SMALL_STATE(116)] = 1529,
  [SMALL_STATE(117)] = 1536,
  [SMALL_STATE(118)] = 1543,
  [SMALL_STATE(119)] = 1550,
  [SMALL_STATE(120)] = 1557,
  [SMALL_STATE(121)] = 1564,
  [SMALL_STATE(122)] = 1571,
  [SMALL_STATE(123)] = 1578,
  [SMALL_STATE(124)] = 1585,
  [SMALL_STATE(125)] = 1590,
  [SMALL_STATE(126)] = 1597,
  [SMALL_STATE(127)] = 1604,
  [SMALL_STATE(128)] = 1611,
  [SMALL_STATE(129)] = 1616,
  [SMALL_STATE(130)] = 1623,
  [SMALL_STATE(131)] = 1630,
  [SMALL_STATE(132)] = 1637,
  [SMALL_STATE(133)] = 1644,
  [SMALL_STATE(134)] = 1651,
  [SMALL_STATE(135)] = 1658,
  [SMALL_STATE(136)] = 1665,
  [SMALL_STATE(137)] = 1670,
  [SMALL_STATE(138)] = 1677,
  [SMALL_STATE(139)] = 1684,
  [SMALL_STATE(140)] = 1688,
  [SMALL_STATE(141)] = 1692,
  [SMALL_STATE(142)] = 1696,
  [SMALL_STATE(143)] = 1700,
  [SMALL_STATE(144)] = 1704,
  [SMALL_STATE(145)] = 1708,
  [SMALL_STATE(146)] = 1712,
  [SMALL_STATE(147)] = 1716,
  [SMALL_STATE(148)] = 1720,
  [SMALL_STATE(149)] = 1724,
  [SMALL_STATE(150)] = 1728,
  [SMALL_STATE(151)] = 1732,
  [SMALL_STATE(152)] = 1736,
  [SMALL_STATE(153)] = 1740,
  [SMALL_STATE(154)] = 1744,
  [SMALL_STATE(155)] = 1748,
  [SMALL_STATE(156)] = 1752,
  [SMALL_STATE(157)] = 1756,
  [SMALL_STATE(158)] = 1760,
  [SMALL_STATE(159)] = 1764,
  [SMALL_STATE(160)] = 1768,
  [SMALL_STATE(161)] = 1772,
  [SMALL_STATE(162)] = 1776,
  [SMALL_STATE(163)] = 1780,
  [SMALL_STATE(164)] = 1784,
  [SMALL_STATE(165)] = 1788,
  [SMALL_STATE(166)] = 1792,
  [SMALL_STATE(167)] = 1796,
  [SMALL_STATE(168)] = 1800,
  [SMALL_STATE(169)] = 1804,
  [SMALL_STATE(170)] = 1808,
  [SMALL_STATE(171)] = 1812,
  [SMALL_STATE(172)] = 1816,
  [SMALL_STATE(173)] = 1820,
  [SMALL_STATE(174)] = 1824,
  [SMALL_STATE(175)] = 1828,
  [SMALL_STATE(176)] = 1832,
  [SMALL_STATE(177)] = 1836,
  [SMALL_STATE(178)] = 1840,
  [SMALL_STATE(179)] = 1844,
  [SMALL_STATE(180)] = 1848,
  [SMALL_STATE(181)] = 1852,
  [SMALL_STATE(182)] = 1856,
  [SMALL_STATE(183)] = 1860,
  [SMALL_STATE(184)] = 1864,
  [SMALL_STATE(185)] = 1868,
  [SMALL_STATE(186)] = 1872,
  [SMALL_STATE(187)] = 1876,
  [SMALL_STATE(188)] = 1880,
  [SMALL_STATE(189)] = 1884,
  [SMALL_STATE(190)] = 1888,
  [SMALL_STATE(191)] = 1892,
  [SMALL_STATE(192)] = 1896,
  [SMALL_STATE(193)] = 1900,
  [SMALL_STATE(194)] = 1904,
  [SMALL_STATE(195)] = 1908,
  [SMALL_STATE(196)] = 1912,
  [SMALL_STATE(197)] = 1916,
  [SMALL_STATE(198)] = 1920,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(12),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mods, 1),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mods, 2), SHIFT_REPEAT(13),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mods, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(197),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(170),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mods, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mods, 2), SHIFT_REPEAT(29),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(137),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(93),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(158),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(48),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(183),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(187),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(162),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(110),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(129),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(181),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(51),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [477] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
