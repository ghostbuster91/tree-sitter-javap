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
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
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
  anon_sym_public = 7,
  anon_sym_protected = 8,
  anon_sym_private = 9,
  anon_sym_abstract = 10,
  anon_sym_static = 11,
  anon_sym_final = 12,
  anon_sym_strictfp = 13,
  anon_sym_default = 14,
  anon_sym_synchronized = 15,
  anon_sym_native = 16,
  anon_sym_transient = 17,
  anon_sym_volatile = 18,
  anon_sym_Code_COLON = 19,
  anon_sym_COMMA = 20,
  anon_sym_LineNumberTable_COLON = 21,
  anon_sym_line = 22,
  anon_sym_COLON = 23,
  aux_sym_instruction_token1 = 24,
  anon_sym_POUND = 25,
  aux_sym_code_info_stat_token1 = 26,
  anon_sym_descriptor_COLON = 27,
  sym_descriptor_value = 28,
  anon_sym_flags_COLON = 29,
  sym_flag_value = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  sym_hex_value = 33,
  anon_sym_LBRACK_RBRACK = 34,
  anon_sym_bool = 35,
  anon_sym_void = 36,
  anon_sym_int = 37,
  aux_sym__simple_type_token1 = 38,
  sym_number = 39,
  anon_sym_SourceFile_COLON_DQUOTE = 40,
  aux_sym_source_file_def_token1 = 41,
  anon_sym_DQUOTE = 42,
  sym_comment = 43,
  anon_sym_Constantpool_COLON = 44,
  anon_sym_EQ = 45,
  anon_sym_Utf8 = 46,
  aux_sym__constant_pool_item_type_utf8_token1 = 47,
  anon_sym_Class = 48,
  anon_sym_String = 49,
  anon_sym_Methodref = 50,
  anon_sym_DOT = 51,
  anon_sym_Fieldref = 52,
  anon_sym_NameAndType = 53,
  sym_class_keyword = 54,
  aux_sym_class_info_item_simple_token1 = 55,
  anon_sym_Lastmodified = 56,
  sym_md5 = 57,
  anon_sym_MD5checksum = 58,
  anon_sym_Compiledfrom = 59,
  aux_sym_header_info_compile_token1 = 60,
  sym__path_segment = 61,
  anon_sym_SLASH = 62,
  anon_sym_Classfile = 63,
  sym_source_file = 64,
  sym__source_file_verbose = 65,
  sym__source_file_plain = 66,
  sym_class_def_plain = 67,
  sym_interface_def_plain = 68,
  sym_class_def_plain_body = 69,
  sym_class_def_plain_body_item = 70,
  sym_field_def = 71,
  sym_method_def = 72,
  sym__method_def_verbose = 73,
  sym_static_block_def = 74,
  sym_modifiers = 75,
  sym_class_definition = 76,
  sym_code_def = 77,
  sym_code_info = 78,
  sym_line_number_table_def = 79,
  sym_numered_line = 80,
  sym_numered_instruction = 81,
  sym_instruction = 82,
  sym_code_info_stat = 83,
  sym_descriptor_def = 84,
  sym_flag_def = 85,
  sym__wrapped_hex_val = 86,
  sym_args = 87,
  sym_type = 88,
  sym__simple_type = 89,
  sym_block = 90,
  sym_source_file_def = 91,
  sym_constant_pool_def = 92,
  sym__hash_number = 93,
  sym_constant_pool_item = 94,
  sym__constant_pool_item_type = 95,
  sym__constant_pool_item_type_utf8 = 96,
  sym__constant_pool_item_type_class = 97,
  sym__constant_pool_item_type_string = 98,
  sym__constant_pool_item_type_method_ref = 99,
  sym__constant_pool_item_type_field_ref = 100,
  sym__constant_pool_item_type_name_and_type = 101,
  sym_class_info_def = 102,
  sym_class_info_item = 103,
  sym_class_info_item_simple = 104,
  sym_header_info_last_mod = 105,
  sym_header_info_md5 = 106,
  sym_header_info_compile = 107,
  sym_file_path = 108,
  sym__rest_of_the_line = 109,
  sym_header_info = 110,
  sym_header = 111,
  aux_sym__source_file_verbose_repeat1 = 112,
  aux_sym_class_def_plain_body_repeat1 = 113,
  aux_sym_modifiers_repeat1 = 114,
  aux_sym_class_definition_repeat1 = 115,
  aux_sym_code_info_repeat1 = 116,
  aux_sym_code_info_repeat2 = 117,
  aux_sym_line_number_table_def_repeat1 = 118,
  aux_sym_flag_def_repeat1 = 119,
  aux_sym_args_repeat1 = 120,
  aux_sym_type_repeat1 = 121,
  aux_sym_constant_pool_def_repeat1 = 122,
  aux_sym_class_info_def_repeat1 = 123,
  aux_sym_class_info_item_simple_repeat1 = 124,
  aux_sym_file_path_repeat1 = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_interface_keyword] = "interface_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_public] = "public",
  [anon_sym_protected] = "protected",
  [anon_sym_private] = "private",
  [anon_sym_abstract] = "abstract",
  [anon_sym_static] = "static",
  [anon_sym_final] = "final",
  [anon_sym_strictfp] = "strictfp",
  [anon_sym_default] = "default",
  [anon_sym_synchronized] = "synchronized",
  [anon_sym_native] = "native",
  [anon_sym_transient] = "transient",
  [anon_sym_volatile] = "volatile",
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
  [sym_modifiers] = "modifiers",
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
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
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
  [anon_sym_public] = anon_sym_public,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_strictfp] = anon_sym_strictfp,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_synchronized] = anon_sym_synchronized,
  [anon_sym_native] = anon_sym_native,
  [anon_sym_transient] = anon_sym_transient,
  [anon_sym_volatile] = anon_sym_volatile,
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
  [sym_modifiers] = sym_modifiers,
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
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
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
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strictfp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synchronized] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
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
  [sym_modifiers] = {
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
  [aux_sym_modifiers_repeat1] = {
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
  [19] = 6,
  [20] = 5,
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
  [50] = 13,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 14,
  [57] = 57,
  [58] = 58,
  [59] = 11,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 30,
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
  [75] = 18,
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
  [104] = 102,
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
  [186] = 186,
  [187] = 130,
  [188] = 135,
  [189] = 179,
  [190] = 190,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(238);
      if (lookahead == '"') ADVANCE(535);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(292);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '.') ADVANCE(545);
      if (lookahead == '/') ADVANCE(554);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '=') ADVANCE(538);
      if (lookahead == 'C') ADVANCE(480);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'M') ADVANCE(393);
      if (lookahead == 'S') ADVANCE(481);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead == 'f') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead == 'v') ADVANCE(483);
      if (lookahead == '{') ADVANCE(239);
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(531);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(534);
      if (lookahead == 'C') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'C') ADVANCE(145);
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'v') ADVANCE(147);
      if (lookahead == '{') ADVANCE(239);
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(292);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(292);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(292);
      if (lookahead == 'b') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'v') ADVANCE(357);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '.') ADVANCE(545);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '=') ADVANCE(538);
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
      if (lookahead == '/') ADVANCE(536);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(279);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(289);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(286);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(537);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(537);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(281);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(546);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'F') ADVANCE(121);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(190);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(294);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead == 'v') ADVANCE(488);
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(355);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(353);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(547);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(152);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(165);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(166);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(550);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 192:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 193:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 194:
      if (lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 195:
      if (lookahead == 'z') ADVANCE(96);
      END_STATE();
    case 196:
      if (lookahead == '}') ADVANCE(242);
      END_STATE();
    case 197:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 198:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(198)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 199:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(199)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 200:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(552);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 201:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(201)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(548);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 237:
      if (eof) ADVANCE(238);
      if (lookahead == '"') ADVANCE(535);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(292);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '.') ADVANCE(545);
      if (lookahead == '/') ADVANCE(554);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '=') ADVANCE(538);
      if (lookahead == 'C') ADVANCE(480);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'M') ADVANCE(393);
      if (lookahead == 'S') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead == 'f') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead == 'v') ADVANCE(483);
      if (lookahead == '{') ADVANCE(239);
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_transient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
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
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'h') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == 'u') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 's') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 's') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'z') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead == 'm') ADVANCE(490);
      if (lookahead == 'n') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead == 's') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(526);
      if (lookahead == 'o') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == 'u') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == 'y') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(529);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(533);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(539);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(539);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(544);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(541);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(541);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(544);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(552);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(544);
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
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 50},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 539},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 540},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 540},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 540},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 540},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 540},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 15},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 541},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 542},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 197},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 540},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 198},
  [136] = {.lex_state = 17},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 199},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 200},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 201},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 542},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 198},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 198},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 198},
  [189] = {.lex_state = 198},
  [190] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_interface_keyword] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_strictfp] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_synchronized] = ACTIONS(1),
    [anon_sym_native] = ACTIONS(1),
    [anon_sym_transient] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
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
    [sym_source_file] = STATE(186),
    [sym__source_file_verbose] = STATE(185),
    [sym__source_file_plain] = STATE(185),
    [sym_header_info_compile] = STATE(8),
    [sym_header_info] = STATE(107),
    [sym_header] = STATE(12),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(140), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(9), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [33] = 6,
    ACTIONS(12), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(4), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(140), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(14), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [66] = 6,
    ACTIONS(16), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(140), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(14), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [99] = 4,
    ACTIONS(18), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(6), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(22), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
    ACTIONS(20), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [126] = 4,
    ACTIONS(24), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(6), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(29), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
    ACTIONS(26), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [153] = 6,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_modifiers_repeat1,
    STATE(7), 1,
      aux_sym_class_definition_repeat1,
    STATE(39), 1,
      sym_modifiers,
    STATE(134), 1,
      sym_method_def,
    ACTIONS(33), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [183] = 5,
    ACTIONS(36), 1,
      sym_interface_keyword,
    STATE(20), 1,
      aux_sym_modifiers_repeat1,
    STATE(109), 1,
      sym_modifiers,
    STATE(180), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(38), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [211] = 6,
    STATE(5), 1,
      aux_sym_modifiers_repeat1,
    STATE(10), 1,
      aux_sym_class_definition_repeat1,
    STATE(39), 1,
      sym_modifiers,
    STATE(133), 1,
      sym_class_definition,
    STATE(134), 1,
      sym_method_def,
    ACTIONS(14), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [241] = 6,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_modifiers_repeat1,
    STATE(7), 1,
      aux_sym_class_definition_repeat1,
    STATE(39), 1,
      sym_modifiers,
    STATE(134), 1,
      sym_method_def,
    ACTIONS(14), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [271] = 3,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(42), 14,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_Code_COLON,
  [294] = 5,
    ACTIONS(46), 1,
      sym_interface_keyword,
    STATE(20), 1,
      aux_sym_modifiers_repeat1,
    STATE(115), 1,
      sym_class_info_def,
    STATE(172), 1,
      sym_modifiers,
    ACTIONS(38), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [321] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(48), 14,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_Code_COLON,
  [344] = 3,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(53), 14,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_Code_COLON,
  [367] = 3,
    ACTIONS(57), 1,
      anon_sym_line,
    STATE(17), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(55), 13,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [390] = 3,
    ACTIONS(61), 1,
      anon_sym_line,
    STATE(16), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(59), 13,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [413] = 3,
    ACTIONS(57), 1,
      anon_sym_line,
    STATE(16), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(64), 13,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [436] = 1,
    ACTIONS(48), 15,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
  [454] = 3,
    STATE(19), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(24), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(66), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [476] = 3,
    STATE(19), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(18), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(69), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [498] = 3,
    ACTIONS(73), 1,
      anon_sym_Code_COLON,
    STATE(29), 1,
      sym_code_def,
    ACTIONS(71), 13,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [520] = 1,
    ACTIONS(75), 14,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_line,
  [537] = 1,
    ACTIONS(77), 13,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [553] = 7,
    ACTIONS(79), 1,
      anon_sym_Utf8,
    ACTIONS(81), 1,
      anon_sym_Class,
    ACTIONS(83), 1,
      anon_sym_String,
    ACTIONS(85), 1,
      anon_sym_Methodref,
    ACTIONS(87), 1,
      anon_sym_Fieldref,
    ACTIONS(89), 1,
      anon_sym_NameAndType,
    STATE(94), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
  [581] = 1,
    ACTIONS(91), 13,
      sym_interface_keyword,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [597] = 1,
    ACTIONS(93), 13,
      sym_interface_keyword,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [613] = 1,
    ACTIONS(95), 13,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [629] = 1,
    ACTIONS(97), 13,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [645] = 1,
    ACTIONS(99), 13,
      anon_sym_RBRACE,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [661] = 2,
    ACTIONS(103), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(101), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
      anon_sym_DOT,
  [674] = 4,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym__simple_type,
    STATE(79), 1,
      sym_type,
    ACTIONS(107), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [690] = 5,
    ACTIONS(109), 1,
      anon_sym_flags_COLON,
    ACTIONS(111), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(113), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(34), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(91), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [708] = 4,
    ACTIONS(115), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(47), 1,
      sym__simple_type,
    STATE(84), 1,
      sym_type,
    ACTIONS(107), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [724] = 5,
    ACTIONS(117), 1,
      anon_sym_flags_COLON,
    ACTIONS(120), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(122), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(34), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(91), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [742] = 5,
    ACTIONS(109), 1,
      anon_sym_flags_COLON,
    ACTIONS(113), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(125), 1,
      anon_sym_Constantpool_COLON,
    STATE(32), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(91), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [760] = 5,
    ACTIONS(109), 1,
      anon_sym_flags_COLON,
    ACTIONS(113), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(127), 1,
      anon_sym_Constantpool_COLON,
    STATE(34), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(91), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [778] = 5,
    ACTIONS(109), 1,
      anon_sym_flags_COLON,
    ACTIONS(111), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(113), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(36), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(91), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [796] = 5,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(133), 1,
      sym_number,
    STATE(70), 1,
      aux_sym_code_info_repeat1,
    STATE(61), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [813] = 3,
    STATE(47), 1,
      sym__simple_type,
    STATE(96), 1,
      sym_type,
    ACTIONS(107), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [826] = 4,
    ACTIONS(137), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym__hash_number,
    ACTIONS(135), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(40), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [841] = 3,
    ACTIONS(142), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(41), 1,
      aux_sym_type_repeat1,
    ACTIONS(140), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [854] = 3,
    STATE(47), 1,
      sym__simple_type,
    STATE(126), 1,
      sym_type,
    ACTIONS(107), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [867] = 4,
    ACTIONS(147), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym__hash_number,
    ACTIONS(145), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(46), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [882] = 5,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(149), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(38), 1,
      aux_sym_code_info_repeat1,
    STATE(76), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [899] = 3,
    ACTIONS(153), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(41), 1,
      aux_sym_type_repeat1,
    ACTIONS(151), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [912] = 4,
    ACTIONS(147), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym__hash_number,
    ACTIONS(155), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(40), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [927] = 3,
    ACTIONS(159), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(45), 1,
      aux_sym_type_repeat1,
    ACTIONS(157), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [940] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(49), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(163), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [957] = 4,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(52), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(169), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [971] = 4,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(50), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(48), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [985] = 4,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(52), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(178), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [999] = 4,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(52), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(185), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1013] = 3,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(189), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1025] = 4,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(144), 1,
      sym_source_file_def,
    STATE(57), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1039] = 4,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(51), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(169), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1053] = 4,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(50), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(53), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1067] = 4,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(150), 1,
      sym_source_file_def,
    STATE(77), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1081] = 5,
    ACTIONS(203), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(205), 1,
      sym__path_segment,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    STATE(182), 1,
      sym__rest_of_the_line,
    STATE(183), 1,
      sym_file_path,
  [1097] = 4,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(56), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(42), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1111] = 4,
    ACTIONS(211), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    STATE(74), 1,
      aux_sym_file_path_repeat1,
    STATE(153), 1,
      sym__rest_of_the_line,
  [1124] = 3,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(215), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(66), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1135] = 2,
    ACTIONS(219), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1144] = 1,
    ACTIONS(101), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [1151] = 4,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(71), 1,
      aux_sym_file_path_repeat1,
    STATE(168), 1,
      sym__rest_of_the_line,
  [1164] = 2,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(223), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1173] = 3,
    ACTIONS(227), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(229), 1,
      sym_number,
    STATE(66), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1184] = 2,
    ACTIONS(234), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1193] = 2,
    ACTIONS(238), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1202] = 2,
    ACTIONS(242), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(240), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1211] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(247), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1222] = 4,
    ACTIONS(211), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      aux_sym_file_path_repeat1,
    STATE(153), 1,
      sym__rest_of_the_line,
  [1235] = 2,
    ACTIONS(251), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1244] = 2,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1253] = 4,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(82), 1,
      aux_sym_file_path_repeat1,
    STATE(143), 1,
      sym__rest_of_the_line,
  [1266] = 2,
    ACTIONS(176), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(48), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1275] = 3,
    ACTIONS(131), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(133), 1,
      sym_number,
    STATE(66), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1286] = 3,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(77), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1297] = 1,
    ACTIONS(264), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1303] = 3,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_args_repeat1,
  [1313] = 1,
    ACTIONS(270), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1319] = 1,
    ACTIONS(272), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1325] = 3,
    ACTIONS(274), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(276), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      aux_sym_file_path_repeat1,
  [1335] = 1,
    ACTIONS(279), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1341] = 3,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_args,
  [1351] = 3,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      sym_number,
    STATE(53), 1,
      sym__hash_number,
  [1361] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_args_repeat1,
  [1371] = 3,
    ACTIONS(292), 1,
      aux_sym_code_info_stat_token1,
    STATE(44), 1,
      sym_code_info_stat,
    STATE(121), 1,
      sym_code_info,
  [1381] = 1,
    ACTIONS(294), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1387] = 1,
    ACTIONS(247), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1393] = 3,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_number,
    STATE(48), 1,
      sym__hash_number,
  [1403] = 2,
    ACTIONS(300), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(298), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1411] = 1,
    ACTIONS(302), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1417] = 1,
    ACTIONS(304), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1423] = 1,
    ACTIONS(306), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1429] = 3,
    ACTIONS(308), 1,
      anon_sym_descriptor_COLON,
    STATE(28), 1,
      sym__method_def_verbose,
    STATE(123), 1,
      sym_descriptor_def,
  [1439] = 3,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      sym_identifier,
    STATE(190), 1,
      sym_args,
  [1449] = 2,
    ACTIONS(314), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1457] = 1,
    ACTIONS(316), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1463] = 3,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      sym_args,
  [1473] = 3,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_args_repeat1,
  [1483] = 3,
    ACTIONS(221), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(322), 1,
      sym__path_segment,
    STATE(168), 1,
      sym__rest_of_the_line,
  [1493] = 2,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      sym__wrapped_hex_val,
  [1500] = 2,
    ACTIONS(326), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym__hash_number,
  [1507] = 2,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym__wrapped_hex_val,
  [1514] = 2,
    ACTIONS(147), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym__hash_number,
  [1521] = 2,
    ACTIONS(326), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym__hash_number,
  [1528] = 2,
    ACTIONS(328), 1,
      anon_sym_Lastmodified,
    STATE(114), 1,
      sym_header_info_last_mod,
  [1535] = 2,
    ACTIONS(326), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym__hash_number,
  [1542] = 2,
    ACTIONS(330), 1,
      sym_interface_keyword,
    ACTIONS(332), 1,
      sym_class_keyword,
  [1549] = 2,
    ACTIONS(334), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(162), 1,
      sym__rest_of_the_line,
  [1556] = 2,
    ACTIONS(147), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym__hash_number,
  [1563] = 1,
    ACTIONS(336), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1568] = 1,
    ACTIONS(338), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1573] = 2,
    ACTIONS(340), 1,
      anon_sym_MD5checksum,
    STATE(119), 1,
      sym_header_info_md5,
  [1580] = 2,
    ACTIONS(342), 1,
      anon_sym_Constantpool_COLON,
    STATE(54), 1,
      sym_constant_pool_def,
  [1587] = 2,
    ACTIONS(344), 1,
      aux_sym_instruction_token1,
    STATE(97), 1,
      sym_instruction,
  [1594] = 2,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_class_def_plain_body,
  [1601] = 2,
    ACTIONS(292), 1,
      aux_sym_code_info_stat_token1,
    STATE(89), 1,
      sym_code_info_stat,
  [1608] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(26), 1,
      sym_header_info_compile,
  [1615] = 1,
    ACTIONS(274), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1620] = 2,
    ACTIONS(348), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(23), 1,
      sym_line_number_table_def,
  [1627] = 2,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_class_def_plain_body,
  [1634] = 2,
    ACTIONS(350), 1,
      anon_sym_flags_COLON,
    STATE(21), 1,
      sym_flag_def,
  [1641] = 2,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_args,
  [1648] = 2,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_class_def_plain_body,
  [1655] = 1,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1660] = 2,
    ACTIONS(326), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym__hash_number,
  [1667] = 2,
    ACTIONS(326), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym__hash_number,
  [1674] = 2,
    ACTIONS(147), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym__hash_number,
  [1681] = 1,
    ACTIONS(352), 1,
      sym_number,
  [1685] = 1,
    ACTIONS(354), 1,
      anon_sym_COLON,
  [1689] = 1,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
  [1693] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [1697] = 1,
    ACTIONS(360), 1,
      anon_sym_SEMI,
  [1701] = 1,
    ACTIONS(362), 1,
      sym_flag_value,
  [1705] = 1,
    ACTIONS(364), 1,
      sym_hex_value,
  [1709] = 1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
  [1713] = 1,
    ACTIONS(368), 1,
      anon_sym_flags_COLON,
  [1717] = 1,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
  [1721] = 1,
    ACTIONS(372), 1,
      anon_sym_SEMI,
  [1725] = 1,
    ACTIONS(374), 1,
      anon_sym_SEMI,
  [1729] = 1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
  [1733] = 1,
    ACTIONS(378), 1,
      anon_sym_Lastmodified,
  [1737] = 1,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
  [1741] = 1,
    ACTIONS(382), 1,
      aux_sym_source_file_def_token1,
  [1745] = 1,
    ACTIONS(384), 1,
      anon_sym_EQ,
  [1749] = 1,
    ACTIONS(386), 1,
      anon_sym_Compiledfrom,
  [1753] = 1,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
  [1757] = 1,
    ACTIONS(390), 1,
      anon_sym_SEMI,
  [1761] = 1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [1765] = 1,
    ACTIONS(394), 1,
      anon_sym_SEMI,
  [1769] = 1,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
  [1773] = 1,
    ACTIONS(398), 1,
      anon_sym_Lastmodified,
  [1777] = 1,
    ACTIONS(400), 1,
      sym_number,
  [1781] = 1,
    ACTIONS(402), 1,
      anon_sym_SEMI,
  [1785] = 1,
    ACTIONS(404), 1,
      sym_descriptor_value,
  [1789] = 1,
    ACTIONS(406), 1,
      sym_identifier,
  [1793] = 1,
    ACTIONS(408), 1,
      anon_sym_COLON,
  [1797] = 1,
    ACTIONS(410), 1,
      sym_md5,
  [1801] = 1,
    ACTIONS(412), 1,
      anon_sym_DOT,
  [1805] = 1,
    ACTIONS(414), 1,
      anon_sym_SEMI,
  [1809] = 1,
    ACTIONS(416), 1,
      anon_sym_MD5checksum,
  [1813] = 1,
    ACTIONS(418), 1,
      sym_identifier,
  [1817] = 1,
    ACTIONS(420), 1,
      sym_number,
  [1821] = 1,
    ACTIONS(422), 1,
      sym_identifier,
  [1825] = 1,
    ACTIONS(424), 1,
      anon_sym_DOT,
  [1829] = 1,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
  [1833] = 1,
    ACTIONS(428), 1,
      anon_sym_Lastmodified,
  [1837] = 1,
    ACTIONS(430), 1,
      sym__path_segment,
  [1841] = 1,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
  [1845] = 1,
    ACTIONS(434), 1,
      anon_sym_COLON,
  [1849] = 1,
    ACTIONS(436), 1,
      sym_class_keyword,
  [1853] = 1,
    ACTIONS(438), 1,
      sym_identifier,
  [1857] = 1,
    ACTIONS(440), 1,
      aux_sym_class_info_item_simple_token1,
  [1861] = 1,
    ACTIONS(442), 1,
      sym_number,
  [1865] = 1,
    ACTIONS(444), 1,
      sym_number,
  [1869] = 1,
    ACTIONS(446), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1873] = 1,
    ACTIONS(448), 1,
      aux_sym_header_info_compile_token1,
  [1877] = 1,
    ACTIONS(450), 1,
      sym_flag_value,
  [1881] = 1,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
  [1885] = 1,
    ACTIONS(454), 1,
      sym_identifier,
  [1889] = 1,
    ACTIONS(456), 1,
      anon_sym_Lastmodified,
  [1893] = 1,
    ACTIONS(458), 1,
      anon_sym_Lastmodified,
  [1897] = 1,
    ACTIONS(460), 1,
      sym_flag_value,
  [1901] = 1,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
  [1905] = 1,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
  [1909] = 1,
    ACTIONS(466), 1,
      sym_number,
  [1913] = 1,
    ACTIONS(468), 1,
      sym_flag_value,
  [1917] = 1,
    ACTIONS(470), 1,
      sym_flag_value,
  [1921] = 1,
    ACTIONS(472), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 183,
  [SMALL_STATE(9)] = 211,
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 271,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 321,
  [SMALL_STATE(14)] = 344,
  [SMALL_STATE(15)] = 367,
  [SMALL_STATE(16)] = 390,
  [SMALL_STATE(17)] = 413,
  [SMALL_STATE(18)] = 436,
  [SMALL_STATE(19)] = 454,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 498,
  [SMALL_STATE(22)] = 520,
  [SMALL_STATE(23)] = 537,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 581,
  [SMALL_STATE(26)] = 597,
  [SMALL_STATE(27)] = 613,
  [SMALL_STATE(28)] = 629,
  [SMALL_STATE(29)] = 645,
  [SMALL_STATE(30)] = 661,
  [SMALL_STATE(31)] = 674,
  [SMALL_STATE(32)] = 690,
  [SMALL_STATE(33)] = 708,
  [SMALL_STATE(34)] = 724,
  [SMALL_STATE(35)] = 742,
  [SMALL_STATE(36)] = 760,
  [SMALL_STATE(37)] = 778,
  [SMALL_STATE(38)] = 796,
  [SMALL_STATE(39)] = 813,
  [SMALL_STATE(40)] = 826,
  [SMALL_STATE(41)] = 841,
  [SMALL_STATE(42)] = 854,
  [SMALL_STATE(43)] = 867,
  [SMALL_STATE(44)] = 882,
  [SMALL_STATE(45)] = 899,
  [SMALL_STATE(46)] = 912,
  [SMALL_STATE(47)] = 927,
  [SMALL_STATE(48)] = 940,
  [SMALL_STATE(49)] = 957,
  [SMALL_STATE(50)] = 971,
  [SMALL_STATE(51)] = 985,
  [SMALL_STATE(52)] = 999,
  [SMALL_STATE(53)] = 1013,
  [SMALL_STATE(54)] = 1025,
  [SMALL_STATE(55)] = 1039,
  [SMALL_STATE(56)] = 1053,
  [SMALL_STATE(57)] = 1067,
  [SMALL_STATE(58)] = 1081,
  [SMALL_STATE(59)] = 1097,
  [SMALL_STATE(60)] = 1111,
  [SMALL_STATE(61)] = 1124,
  [SMALL_STATE(62)] = 1135,
  [SMALL_STATE(63)] = 1144,
  [SMALL_STATE(64)] = 1151,
  [SMALL_STATE(65)] = 1164,
  [SMALL_STATE(66)] = 1173,
  [SMALL_STATE(67)] = 1184,
  [SMALL_STATE(68)] = 1193,
  [SMALL_STATE(69)] = 1202,
  [SMALL_STATE(70)] = 1211,
  [SMALL_STATE(71)] = 1222,
  [SMALL_STATE(72)] = 1235,
  [SMALL_STATE(73)] = 1244,
  [SMALL_STATE(74)] = 1253,
  [SMALL_STATE(75)] = 1266,
  [SMALL_STATE(76)] = 1275,
  [SMALL_STATE(77)] = 1286,
  [SMALL_STATE(78)] = 1297,
  [SMALL_STATE(79)] = 1303,
  [SMALL_STATE(80)] = 1313,
  [SMALL_STATE(81)] = 1319,
  [SMALL_STATE(82)] = 1325,
  [SMALL_STATE(83)] = 1335,
  [SMALL_STATE(84)] = 1341,
  [SMALL_STATE(85)] = 1351,
  [SMALL_STATE(86)] = 1361,
  [SMALL_STATE(87)] = 1371,
  [SMALL_STATE(88)] = 1381,
  [SMALL_STATE(89)] = 1387,
  [SMALL_STATE(90)] = 1393,
  [SMALL_STATE(91)] = 1403,
  [SMALL_STATE(92)] = 1411,
  [SMALL_STATE(93)] = 1417,
  [SMALL_STATE(94)] = 1423,
  [SMALL_STATE(95)] = 1429,
  [SMALL_STATE(96)] = 1439,
  [SMALL_STATE(97)] = 1449,
  [SMALL_STATE(98)] = 1457,
  [SMALL_STATE(99)] = 1463,
  [SMALL_STATE(100)] = 1473,
  [SMALL_STATE(101)] = 1483,
  [SMALL_STATE(102)] = 1493,
  [SMALL_STATE(103)] = 1500,
  [SMALL_STATE(104)] = 1507,
  [SMALL_STATE(105)] = 1514,
  [SMALL_STATE(106)] = 1521,
  [SMALL_STATE(107)] = 1528,
  [SMALL_STATE(108)] = 1535,
  [SMALL_STATE(109)] = 1542,
  [SMALL_STATE(110)] = 1549,
  [SMALL_STATE(111)] = 1556,
  [SMALL_STATE(112)] = 1563,
  [SMALL_STATE(113)] = 1568,
  [SMALL_STATE(114)] = 1573,
  [SMALL_STATE(115)] = 1580,
  [SMALL_STATE(116)] = 1587,
  [SMALL_STATE(117)] = 1594,
  [SMALL_STATE(118)] = 1601,
  [SMALL_STATE(119)] = 1608,
  [SMALL_STATE(120)] = 1615,
  [SMALL_STATE(121)] = 1620,
  [SMALL_STATE(122)] = 1627,
  [SMALL_STATE(123)] = 1634,
  [SMALL_STATE(124)] = 1641,
  [SMALL_STATE(125)] = 1648,
  [SMALL_STATE(126)] = 1655,
  [SMALL_STATE(127)] = 1660,
  [SMALL_STATE(128)] = 1667,
  [SMALL_STATE(129)] = 1674,
  [SMALL_STATE(130)] = 1681,
  [SMALL_STATE(131)] = 1685,
  [SMALL_STATE(132)] = 1689,
  [SMALL_STATE(133)] = 1693,
  [SMALL_STATE(134)] = 1697,
  [SMALL_STATE(135)] = 1701,
  [SMALL_STATE(136)] = 1705,
  [SMALL_STATE(137)] = 1709,
  [SMALL_STATE(138)] = 1713,
  [SMALL_STATE(139)] = 1717,
  [SMALL_STATE(140)] = 1721,
  [SMALL_STATE(141)] = 1725,
  [SMALL_STATE(142)] = 1729,
  [SMALL_STATE(143)] = 1733,
  [SMALL_STATE(144)] = 1737,
  [SMALL_STATE(145)] = 1741,
  [SMALL_STATE(146)] = 1745,
  [SMALL_STATE(147)] = 1749,
  [SMALL_STATE(148)] = 1753,
  [SMALL_STATE(149)] = 1757,
  [SMALL_STATE(150)] = 1761,
  [SMALL_STATE(151)] = 1765,
  [SMALL_STATE(152)] = 1769,
  [SMALL_STATE(153)] = 1773,
  [SMALL_STATE(154)] = 1777,
  [SMALL_STATE(155)] = 1781,
  [SMALL_STATE(156)] = 1785,
  [SMALL_STATE(157)] = 1789,
  [SMALL_STATE(158)] = 1793,
  [SMALL_STATE(159)] = 1797,
  [SMALL_STATE(160)] = 1801,
  [SMALL_STATE(161)] = 1805,
  [SMALL_STATE(162)] = 1809,
  [SMALL_STATE(163)] = 1813,
  [SMALL_STATE(164)] = 1817,
  [SMALL_STATE(165)] = 1821,
  [SMALL_STATE(166)] = 1825,
  [SMALL_STATE(167)] = 1829,
  [SMALL_STATE(168)] = 1833,
  [SMALL_STATE(169)] = 1837,
  [SMALL_STATE(170)] = 1841,
  [SMALL_STATE(171)] = 1845,
  [SMALL_STATE(172)] = 1849,
  [SMALL_STATE(173)] = 1853,
  [SMALL_STATE(174)] = 1857,
  [SMALL_STATE(175)] = 1861,
  [SMALL_STATE(176)] = 1865,
  [SMALL_STATE(177)] = 1869,
  [SMALL_STATE(178)] = 1873,
  [SMALL_STATE(179)] = 1877,
  [SMALL_STATE(180)] = 1881,
  [SMALL_STATE(181)] = 1885,
  [SMALL_STATE(182)] = 1889,
  [SMALL_STATE(183)] = 1893,
  [SMALL_STATE(184)] = 1897,
  [SMALL_STATE(185)] = 1901,
  [SMALL_STATE(186)] = 1905,
  [SMALL_STATE(187)] = 1909,
  [SMALL_STATE(188)] = 1913,
  [SMALL_STATE(189)] = 1917,
  [SMALL_STATE(190)] = 1921,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(5),
  [12] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(189),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(164),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(102),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(90),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(130),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(179),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(174),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(131),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(118),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(9),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(169),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(42),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [464] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
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
