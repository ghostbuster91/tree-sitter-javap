#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__identifier = 1,
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
  anon_sym_COLON2 = 24,
  aux_sym_instruction_token1 = 25,
  anon_sym_POUND = 26,
  aux_sym_code_info_stat_token1 = 27,
  anon_sym_descriptor_COLON = 28,
  sym_descriptor_value = 29,
  anon_sym_flags_COLON = 30,
  sym_flag_value = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  sym_hex_value = 34,
  anon_sym_LBRACK_RBRACK = 35,
  anon_sym_bool = 36,
  anon_sym_void = 37,
  anon_sym_int = 38,
  anon_sym_DOT = 39,
  sym_number = 40,
  anon_sym_SourceFile_COLON_DQUOTE = 41,
  aux_sym_source_file_def_token1 = 42,
  anon_sym_DQUOTE = 43,
  sym_comment = 44,
  anon_sym_Constantpool_COLON = 45,
  anon_sym_EQ = 46,
  anon_sym_Utf8 = 47,
  aux_sym__constant_pool_item_type_utf8_token1 = 48,
  anon_sym_Class = 49,
  anon_sym_String = 50,
  anon_sym_Methodref = 51,
  anon_sym_Fieldref = 52,
  anon_sym_NameAndType = 53,
  anon_sym_Double = 54,
  sym_decimal_floating_point_literal = 55,
  sym_class_keyword = 56,
  aux_sym_class_info_item_simple_token1 = 57,
  anon_sym_Lastmodified = 58,
  sym_md5 = 59,
  anon_sym_MD5checksum = 60,
  anon_sym_Compiledfrom = 61,
  aux_sym_header_info_compile_token1 = 62,
  sym__path_segment = 63,
  anon_sym_SLASH = 64,
  sym__endl = 65,
  anon_sym_Classfile = 66,
  sym_source_file = 67,
  sym__source_file_verbose = 68,
  sym__source_file_plain = 69,
  sym_class_def_plain = 70,
  sym_interface_def_plain = 71,
  sym_class_def_plain_body = 72,
  sym_class_def_plain_body_item = 73,
  sym_field_def = 74,
  sym_method_def = 75,
  sym__method_def_verbose = 76,
  sym_static_block_def = 77,
  sym_modifiers = 78,
  sym_class_definition = 79,
  sym_code_def = 80,
  sym_code_info = 81,
  sym_line_number_table_def = 82,
  sym_numered_line = 83,
  sym_numered_instruction = 84,
  sym_instruction = 85,
  sym_code_info_stat = 86,
  sym_descriptor_def = 87,
  sym_flag_def = 88,
  sym__wrapped_hex_val = 89,
  sym_args = 90,
  sym_type = 91,
  sym__simple_type = 92,
  sym_block = 93,
  sym_identifier = 94,
  sym_source_file_def = 95,
  sym_constant_pool_def = 96,
  sym__hash_number = 97,
  sym_constant_pool_item = 98,
  sym__constant_pool_item_type = 99,
  sym__constant_pool_item_type_utf8 = 100,
  sym__constant_pool_item_type_class = 101,
  sym__constant_pool_item_type_string = 102,
  sym__constant_pool_item_type_method_ref = 103,
  sym__constant_pool_item_type_field_ref = 104,
  sym__constant_pool_item_type_name_and_type = 105,
  sym__constant_pool_item_type_double = 106,
  sym_class_info_def = 107,
  sym_class_info_item = 108,
  sym_class_info_item_simple = 109,
  sym_header_info_last_mod = 110,
  sym_header_info_md5 = 111,
  sym_header_info_compile = 112,
  sym_file_path = 113,
  sym__rest_of_the_line = 114,
  sym_header_info = 115,
  sym_header = 116,
  aux_sym__source_file_verbose_repeat1 = 117,
  aux_sym_class_def_plain_body_repeat1 = 118,
  aux_sym_modifiers_repeat1 = 119,
  aux_sym_class_definition_repeat1 = 120,
  aux_sym_code_info_repeat1 = 121,
  aux_sym_code_info_repeat2 = 122,
  aux_sym_line_number_table_def_repeat1 = 123,
  aux_sym_flag_def_repeat1 = 124,
  aux_sym_args_repeat1 = 125,
  aux_sym_type_repeat1 = 126,
  aux_sym__simple_type_repeat1 = 127,
  aux_sym_constant_pool_def_repeat1 = 128,
  aux_sym_class_info_def_repeat1 = 129,
  aux_sym_class_info_item_simple_repeat1 = 130,
  aux_sym_file_path_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
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
  [anon_sym_COLON2] = ":",
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
  [anon_sym_DOT] = ".",
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
  [anon_sym_Fieldref] = "Fieldref",
  [anon_sym_NameAndType] = "NameAndType",
  [anon_sym_Double] = "Double",
  [sym_decimal_floating_point_literal] = "decimal_floating_point_literal",
  [sym_class_keyword] = "class_keyword",
  [aux_sym_class_info_item_simple_token1] = "class_info_item_simple_token1",
  [anon_sym_Lastmodified] = "Last modified",
  [sym_md5] = "md5",
  [anon_sym_MD5checksum] = "MD5 checksum",
  [anon_sym_Compiledfrom] = "Compiled from",
  [aux_sym_header_info_compile_token1] = "header_info_compile_token1",
  [sym__path_segment] = "_path_segment",
  [anon_sym_SLASH] = "/",
  [sym__endl] = "_endl",
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
  [sym_identifier] = "identifier",
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
  [sym__constant_pool_item_type_double] = "_constant_pool_item_type_double",
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
  [aux_sym__simple_type_repeat1] = "_simple_type_repeat1",
  [aux_sym_constant_pool_def_repeat1] = "constant_pool_def_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_file_path_repeat1] = "file_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
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
  [anon_sym_COLON2] = anon_sym_COLON,
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [anon_sym_Fieldref] = anon_sym_Fieldref,
  [anon_sym_NameAndType] = anon_sym_NameAndType,
  [anon_sym_Double] = anon_sym_Double,
  [sym_decimal_floating_point_literal] = sym_decimal_floating_point_literal,
  [sym_class_keyword] = sym_class_keyword,
  [aux_sym_class_info_item_simple_token1] = aux_sym_class_info_item_simple_token1,
  [anon_sym_Lastmodified] = anon_sym_Lastmodified,
  [sym_md5] = sym_md5,
  [anon_sym_MD5checksum] = anon_sym_MD5checksum,
  [anon_sym_Compiledfrom] = anon_sym_Compiledfrom,
  [aux_sym_header_info_compile_token1] = aux_sym_header_info_compile_token1,
  [sym__path_segment] = sym__path_segment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym__endl] = sym__endl,
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
  [sym_identifier] = sym_identifier,
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
  [sym__constant_pool_item_type_double] = sym__constant_pool_item_type_double,
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
  [aux_sym__simple_type_repeat1] = aux_sym__simple_type_repeat1,
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
  [sym__identifier] = {
    .visible = false,
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
  [anon_sym_COLON2] = {
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
  [anon_sym_DOT] = {
    .visible = true,
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
  [anon_sym_Fieldref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NameAndType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Double] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal_floating_point_literal] = {
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
  [sym__endl] = {
    .visible = false,
    .named = true,
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
  [sym_identifier] = {
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
  [sym__constant_pool_item_type_double] = {
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
  [aux_sym__simple_type_repeat1] = {
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
  [24] = 15,
  [25] = 18,
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
  [53] = 53,
  [54] = 10,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 8,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 9,
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
  [75] = 13,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 29,
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
  [142] = 110,
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
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 146,
  [200] = 168,
  [201] = 178,
  [202] = 202,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == '=') ADVANCE(264);
      if (lookahead == 'C') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(232);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(256);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == 'C') ADVANCE(234);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'C') ADVANCE(234);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == '=') ADVANCE(264);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == '{') ADVANCE(163);
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
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(262);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(117);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(176);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(263);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(169);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'F') ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(184);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(279);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == '}') ADVANCE(166);
      END_STATE();
    case 117:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(117);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 119:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 120:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 121:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 122:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 123:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 160:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == '=') ADVANCE(264);
      if (lookahead == 'C') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(117);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '$') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '$') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '$') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '$') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '5') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == ':') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'D') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'F') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'N') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'b') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'b') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'g') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'm') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'm') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 's') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 's') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(117);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(287);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(265);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(267);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(270);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(117);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(287);
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
      if (lookahead == 'D') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'M') ADVANCE(4);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'S') ADVANCE(6);
      if (lookahead == 'U') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == '8') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 79:
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(152);
      END_STATE();
    case 143:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 156:
      if (lookahead == 'z') ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 265},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 266},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 266},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 266},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 266},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 266},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 267},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 268},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 119},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 266},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 120},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 121},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 122},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 268},
  [178] = {.lex_state = 121},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 121},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 123},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 121},
  [201] = {.lex_state = 121},
  [202] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
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
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_descriptor_COLON] = ACTIONS(1),
    [anon_sym_flags_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_Constantpool_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_Utf8] = ACTIONS(1),
    [anon_sym_Class] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Methodref] = ACTIONS(1),
    [anon_sym_Fieldref] = ACTIONS(1),
    [anon_sym_NameAndType] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [sym_class_keyword] = ACTIONS(1),
    [anon_sym_Lastmodified] = ACTIONS(1),
    [anon_sym_MD5checksum] = ACTIONS(1),
    [anon_sym_Compiledfrom] = ACTIONS(1),
    [aux_sym_header_info_compile_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(198),
    [sym__source_file_verbose] = STATE(197),
    [sym__source_file_plain] = STATE(197),
    [sym_header_info_compile] = STATE(17),
    [sym_header_info] = STATE(111),
    [sym_header] = STATE(23),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(43), 1,
      sym__simple_type,
    STATE(69), 1,
      sym_type,
    STATE(4), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    ACTIONS(13), 3,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
    STATE(153), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 12,
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
  [47] = 10,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(43), 1,
      sym__simple_type,
    STATE(69), 1,
      sym_type,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    ACTIONS(23), 3,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
    STATE(153), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
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
  [94] = 10,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(43), 1,
      sym__simple_type,
    STATE(69), 1,
      sym_type,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    ACTIONS(13), 3,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
    STATE(153), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 12,
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
  [141] = 10,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_class_definition_repeat1,
    STATE(15), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(43), 1,
      sym__simple_type,
    STATE(69), 1,
      sym_type,
    ACTIONS(13), 3,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
    STATE(169), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 12,
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
  [187] = 10,
    ACTIONS(30), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_class_definition_repeat1,
    STATE(15), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(43), 1,
      sym__simple_type,
    STATE(69), 1,
      sym_type,
    ACTIONS(38), 3,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
    STATE(169), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(35), 12,
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
  [233] = 10,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(5), 1,
      aux_sym_class_definition_repeat1,
    STATE(15), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(43), 1,
      sym__simple_type,
    STATE(69), 1,
      sym_type,
    STATE(170), 1,
      sym_class_definition,
    ACTIONS(13), 3,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
    STATE(169), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 12,
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
  [279] = 4,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(43), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(41), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [308] = 4,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(50), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(48), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [337] = 4,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(56), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(54), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [366] = 4,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_line,
    STATE(12), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(58), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [395] = 4,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_line,
    STATE(12), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(64), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [424] = 2,
    ACTIONS(43), 3,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
    ACTIONS(41), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [448] = 4,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      anon_sym_Code_COLON,
    STATE(22), 1,
      sym_code_def,
    ACTIONS(71), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [476] = 4,
    ACTIONS(79), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(18), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(77), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
    ACTIONS(81), 12,
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
  [503] = 2,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 17,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [526] = 6,
    ACTIONS(87), 1,
      sym_interface_keyword,
    ACTIONS(91), 1,
      sym_class_keyword,
    STATE(24), 1,
      aux_sym_modifiers_repeat1,
    STATE(120), 1,
      sym_modifiers,
    STATE(190), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(89), 12,
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
  [557] = 4,
    ACTIONS(95), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(18), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(93), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
    ACTIONS(97), 12,
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
  [584] = 2,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [606] = 2,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [628] = 2,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [650] = 2,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 16,
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
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      sym__identifier,
  [672] = 5,
    ACTIONS(116), 1,
      sym_interface_keyword,
    STATE(24), 1,
      aux_sym_modifiers_repeat1,
    STATE(125), 1,
      sym_class_info_def,
    STATE(179), 1,
      sym_modifiers,
    ACTIONS(89), 12,
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
  [699] = 3,
    STATE(25), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(79), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(118), 12,
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
  [721] = 3,
    STATE(25), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(95), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(120), 12,
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
  [743] = 8,
    ACTIONS(123), 1,
      anon_sym_Utf8,
    ACTIONS(125), 1,
      anon_sym_Class,
    ACTIONS(127), 1,
      anon_sym_String,
    ACTIONS(129), 1,
      anon_sym_Methodref,
    ACTIONS(131), 1,
      anon_sym_Fieldref,
    ACTIONS(133), 1,
      anon_sym_NameAndType,
    ACTIONS(135), 1,
      anon_sym_Double,
    STATE(86), 8,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
  [775] = 1,
    ACTIONS(137), 14,
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
      sym_class_keyword,
  [792] = 1,
    ACTIONS(139), 13,
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
  [808] = 2,
    ACTIONS(143), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(141), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      anon_sym_DOT,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
  [821] = 5,
    ACTIONS(145), 1,
      anon_sym_flags_COLON,
    ACTIONS(147), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(149), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(38), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(101), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [839] = 5,
    ACTIONS(151), 1,
      anon_sym_flags_COLON,
    ACTIONS(154), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(156), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(31), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(101), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [857] = 5,
    ACTIONS(145), 1,
      anon_sym_flags_COLON,
    ACTIONS(149), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(159), 1,
      anon_sym_Constantpool_COLON,
    STATE(31), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(101), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [875] = 5,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(161), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(43), 1,
      sym__simple_type,
    STATE(71), 1,
      sym_type,
    ACTIONS(13), 3,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
  [893] = 3,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym__simple_type_repeat1,
    ACTIONS(163), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym__identifier,
  [907] = 3,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym__simple_type_repeat1,
    ACTIONS(167), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym__identifier,
  [921] = 5,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      sym__simple_type,
    STATE(88), 1,
      sym_type,
    ACTIONS(13), 3,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
  [939] = 5,
    ACTIONS(145), 1,
      anon_sym_flags_COLON,
    ACTIONS(149), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(171), 1,
      anon_sym_Constantpool_COLON,
    STATE(32), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(101), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [957] = 5,
    ACTIONS(145), 1,
      anon_sym_flags_COLON,
    ACTIONS(149), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(171), 1,
      anon_sym_Constantpool_COLON,
    STATE(31), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(101), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [975] = 3,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym__simple_type_repeat1,
    ACTIONS(173), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym__identifier,
  [989] = 5,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      sym_comment,
    ACTIONS(184), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(52), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(180), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1006] = 3,
    ACTIONS(188), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(46), 1,
      aux_sym_type_repeat1,
    ACTIONS(186), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1019] = 2,
    ACTIONS(192), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(190), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_flags_COLON,
      anon_sym_LPAREN,
      anon_sym_Constantpool_COLON,
  [1030] = 3,
    ACTIONS(196), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(41), 1,
      aux_sym_type_repeat1,
    ACTIONS(194), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1043] = 4,
    ACTIONS(200), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym__hash_number,
    ACTIONS(198), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(44), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1058] = 4,
    ACTIONS(205), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym__hash_number,
    ACTIONS(203), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(48), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1073] = 3,
    ACTIONS(209), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(46), 1,
      aux_sym_type_repeat1,
    ACTIONS(207), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1086] = 4,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(43), 1,
      sym__simple_type,
    STATE(137), 1,
      sym_type,
    ACTIONS(13), 3,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
  [1101] = 4,
    ACTIONS(205), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym__hash_number,
    ACTIONS(212), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(44), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1116] = 1,
    ACTIONS(173), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1125] = 4,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      sym_number,
    STATE(90), 1,
      aux_sym_code_info_repeat1,
    STATE(67), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1139] = 4,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(176), 1,
      sym_source_file_def,
    STATE(76), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1153] = 4,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(60), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(222), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1167] = 4,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(55), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(222), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1181] = 4,
    ACTIONS(54), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(56), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1195] = 4,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(60), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(228), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1209] = 4,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      sym_number,
    STATE(50), 1,
      aux_sym_code_info_repeat1,
    STATE(74), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1223] = 3,
    ACTIONS(234), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(232), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1235] = 4,
    ACTIONS(41), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(43), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1249] = 5,
    ACTIONS(241), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(243), 1,
      sym__path_segment,
    ACTIONS(245), 1,
      anon_sym_SLASH,
    STATE(194), 1,
      sym__rest_of_the_line,
    STATE(195), 1,
      sym_file_path,
  [1265] = 4,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(60), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(250), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1279] = 4,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(143), 1,
      sym_source_file_def,
    STATE(51), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1293] = 4,
    ACTIONS(48), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(50), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1307] = 2,
    ACTIONS(256), 1,
      sym_comment,
    ACTIONS(254), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1316] = 4,
    ACTIONS(258), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      sym_number,
    ACTIONS(262), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__endl,
  [1329] = 3,
    ACTIONS(266), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(268), 1,
      sym_number,
    STATE(65), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1340] = 2,
    ACTIONS(273), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1349] = 3,
    ACTIONS(216), 1,
      sym_number,
    ACTIONS(275), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(65), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1360] = 4,
    ACTIONS(277), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(279), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      aux_sym_file_path_repeat1,
    STATE(173), 1,
      sym__rest_of_the_line,
  [1373] = 4,
    ACTIONS(281), 1,
      sym__identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_identifier,
    STATE(185), 1,
      sym_args,
  [1386] = 2,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1395] = 4,
    ACTIONS(281), 1,
      sym__identifier,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_identifier,
    STATE(188), 1,
      sym_args,
  [1408] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1417] = 2,
    ACTIONS(295), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1426] = 3,
    ACTIONS(216), 1,
      sym_number,
    ACTIONS(297), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(65), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1437] = 2,
    ACTIONS(41), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(43), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1446] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(76), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1457] = 4,
    ACTIONS(279), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(95), 1,
      aux_sym_file_path_repeat1,
    STATE(147), 1,
      sym__rest_of_the_line,
  [1470] = 2,
    ACTIONS(308), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(306), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1479] = 4,
    ACTIONS(279), 1,
      anon_sym_SLASH,
    ACTIONS(310), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(77), 1,
      aux_sym_file_path_repeat1,
    STATE(158), 1,
      sym__rest_of_the_line,
  [1492] = 1,
    ACTIONS(141), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [1499] = 4,
    ACTIONS(279), 1,
      anon_sym_SLASH,
    ACTIONS(310), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(95), 1,
      aux_sym_file_path_repeat1,
    STATE(158), 1,
      sym__rest_of_the_line,
  [1512] = 1,
    ACTIONS(312), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1518] = 3,
    ACTIONS(205), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      sym_number,
    STATE(57), 1,
      sym__hash_number,
  [1528] = 1,
    ACTIONS(316), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1534] = 2,
    ACTIONS(318), 1,
      anon_sym_line,
    STATE(11), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [1542] = 1,
    ACTIONS(320), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1548] = 1,
    ACTIONS(322), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1554] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_args_repeat1,
  [1564] = 1,
    ACTIONS(328), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1570] = 3,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      sym_number,
    STATE(90), 1,
      aux_sym_code_info_repeat1,
  [1580] = 3,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      sym_args,
  [1590] = 1,
    ACTIONS(337), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1596] = 3,
    ACTIONS(339), 1,
      aux_sym_code_info_stat_token1,
    STATE(56), 1,
      sym_code_info_stat,
    STATE(131), 1,
      sym_code_info,
  [1606] = 1,
    ACTIONS(341), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1612] = 3,
    ACTIONS(343), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(95), 1,
      aux_sym_file_path_repeat1,
  [1622] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_args_repeat1,
  [1632] = 3,
    ACTIONS(277), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(350), 1,
      sym__path_segment,
    STATE(173), 1,
      sym__rest_of_the_line,
  [1642] = 3,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_args_repeat1,
  [1652] = 3,
    ACTIONS(357), 1,
      anon_sym_descriptor_COLON,
    STATE(20), 1,
      sym__method_def_verbose,
    STATE(138), 1,
      sym_descriptor_def,
  [1662] = 1,
    ACTIONS(359), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1668] = 2,
    ACTIONS(363), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(361), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1676] = 3,
    ACTIONS(205), 1,
      anon_sym_POUND,
    ACTIONS(365), 1,
      sym_number,
    STATE(40), 1,
      sym__hash_number,
  [1686] = 2,
    ACTIONS(367), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym__hash_number,
  [1693] = 1,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      sym_number,
  [1698] = 2,
    ACTIONS(367), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym__hash_number,
  [1705] = 2,
    ACTIONS(367), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym__hash_number,
  [1712] = 2,
    ACTIONS(205), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym__hash_number,
  [1719] = 2,
    ACTIONS(205), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym__hash_number,
  [1726] = 2,
    ACTIONS(205), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym__hash_number,
  [1733] = 2,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__wrapped_hex_val,
  [1740] = 2,
    ACTIONS(371), 1,
      anon_sym_Lastmodified,
    STATE(122), 1,
      sym_header_info_last_mod,
  [1747] = 2,
    ACTIONS(281), 1,
      sym__identifier,
    STATE(127), 1,
      sym_identifier,
  [1754] = 1,
    ACTIONS(373), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1759] = 2,
    ACTIONS(281), 1,
      sym__identifier,
    STATE(128), 1,
      sym_identifier,
  [1766] = 2,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym__endl,
  [1773] = 1,
    ACTIONS(379), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1778] = 2,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_args,
  [1785] = 2,
    ACTIONS(381), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym__endl,
  [1792] = 2,
    ACTIONS(385), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym__endl,
  [1799] = 2,
    ACTIONS(389), 1,
      sym_interface_keyword,
    ACTIONS(391), 1,
      sym_class_keyword,
  [1806] = 2,
    ACTIONS(393), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(163), 1,
      sym__rest_of_the_line,
  [1813] = 2,
    ACTIONS(395), 1,
      anon_sym_MD5checksum,
    STATE(133), 1,
      sym_header_info_md5,
  [1820] = 2,
    ACTIONS(281), 1,
      sym__identifier,
    STATE(30), 1,
      sym_identifier,
  [1827] = 2,
    ACTIONS(397), 1,
      aux_sym_instruction_token1,
    STATE(119), 1,
      sym_instruction,
  [1834] = 2,
    ACTIONS(399), 1,
      anon_sym_Constantpool_COLON,
    STATE(61), 1,
      sym_constant_pool_def,
  [1841] = 2,
    ACTIONS(339), 1,
      aux_sym_code_info_stat_token1,
    STATE(104), 1,
      sym_code_info_stat,
  [1848] = 2,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_class_def_plain_body,
  [1855] = 2,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_class_def_plain_body,
  [1862] = 1,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      sym_number,
  [1867] = 2,
    ACTIONS(281), 1,
      sym__identifier,
    STATE(136), 1,
      sym_identifier,
  [1874] = 2,
    ACTIONS(405), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(21), 1,
      sym_line_number_table_def,
  [1881] = 2,
    ACTIONS(281), 1,
      sym__identifier,
    STATE(139), 1,
      sym_identifier,
  [1888] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(28), 1,
      sym_header_info_compile,
  [1895] = 2,
    ACTIONS(281), 1,
      sym__identifier,
    STATE(37), 1,
      sym_identifier,
  [1902] = 1,
    ACTIONS(343), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1907] = 2,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_class_def_plain_body,
  [1914] = 1,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1919] = 2,
    ACTIONS(407), 1,
      anon_sym_flags_COLON,
    STATE(14), 1,
      sym_flag_def,
  [1926] = 2,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_class_def_plain_body,
  [1933] = 2,
    ACTIONS(367), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym__hash_number,
  [1940] = 2,
    ACTIONS(367), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym__hash_number,
  [1947] = 2,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym__wrapped_hex_val,
  [1954] = 1,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
  [1958] = 1,
    ACTIONS(411), 1,
      aux_sym_source_file_def_token1,
  [1962] = 1,
    ACTIONS(413), 1,
      anon_sym_EQ,
  [1966] = 1,
    ACTIONS(415), 1,
      sym_number,
  [1970] = 1,
    ACTIONS(417), 1,
      anon_sym_Lastmodified,
  [1974] = 1,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [1978] = 1,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
  [1982] = 1,
    ACTIONS(423), 1,
      anon_sym_Compiledfrom,
  [1986] = 1,
    ACTIONS(425), 1,
      anon_sym_flags_COLON,
  [1990] = 1,
    ACTIONS(427), 1,
      anon_sym_SEMI,
  [1994] = 1,
    ACTIONS(429), 1,
      anon_sym_SEMI,
  [1998] = 1,
    ACTIONS(431), 1,
      anon_sym_SEMI,
  [2002] = 1,
    ACTIONS(433), 1,
      sym_descriptor_value,
  [2006] = 1,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
  [2010] = 1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
  [2014] = 1,
    ACTIONS(439), 1,
      anon_sym_Lastmodified,
  [2018] = 1,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
  [2022] = 1,
    ACTIONS(443), 1,
      anon_sym_COLON,
  [2026] = 1,
    ACTIONS(445), 1,
      anon_sym_DOT,
  [2030] = 1,
    ACTIONS(447), 1,
      sym_md5,
  [2034] = 1,
    ACTIONS(449), 1,
      anon_sym_MD5checksum,
  [2038] = 1,
    ACTIONS(451), 1,
      anon_sym_DOT,
  [2042] = 1,
    ACTIONS(453), 1,
      sym_number,
  [2046] = 1,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
  [2050] = 1,
    ACTIONS(457), 1,
      sym_hex_value,
  [2054] = 1,
    ACTIONS(459), 1,
      sym_flag_value,
  [2058] = 1,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [2062] = 1,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
  [2066] = 1,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
  [2070] = 1,
    ACTIONS(467), 1,
      anon_sym_COLON2,
  [2074] = 1,
    ACTIONS(469), 1,
      anon_sym_Lastmodified,
  [2078] = 1,
    ACTIONS(471), 1,
      sym__path_segment,
  [2082] = 1,
    ACTIONS(473), 1,
      sym_number,
  [2086] = 1,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [2090] = 1,
    ACTIONS(477), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [2094] = 1,
    ACTIONS(479), 1,
      sym_flag_value,
  [2098] = 1,
    ACTIONS(481), 1,
      sym_class_keyword,
  [2102] = 1,
    ACTIONS(483), 1,
      sym_flag_value,
  [2106] = 1,
    ACTIONS(485), 1,
      sym__identifier,
  [2110] = 1,
    ACTIONS(487), 1,
      anon_sym_COLON,
  [2114] = 1,
    ACTIONS(489), 1,
      anon_sym_SEMI,
  [2118] = 1,
    ACTIONS(491), 1,
      anon_sym_SEMI,
  [2122] = 1,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [2126] = 1,
    ACTIONS(495), 1,
      sym_number,
  [2130] = 1,
    ACTIONS(497), 1,
      sym_number,
  [2134] = 1,
    ACTIONS(499), 1,
      anon_sym_SEMI,
  [2138] = 1,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
  [2142] = 1,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
  [2146] = 1,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
  [2150] = 1,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [2154] = 1,
    ACTIONS(509), 1,
      aux_sym_header_info_compile_token1,
  [2158] = 1,
    ACTIONS(511), 1,
      anon_sym_Lastmodified,
  [2162] = 1,
    ACTIONS(513), 1,
      anon_sym_Lastmodified,
  [2166] = 1,
    ACTIONS(515), 1,
      aux_sym_class_info_item_simple_token1,
  [2170] = 1,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
  [2174] = 1,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
  [2178] = 1,
    ACTIONS(521), 1,
      sym_number,
  [2182] = 1,
    ACTIONS(523), 1,
      sym_flag_value,
  [2186] = 1,
    ACTIONS(525), 1,
      sym_flag_value,
  [2190] = 1,
    ACTIONS(527), 1,
      sym_decimal_floating_point_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 187,
  [SMALL_STATE(7)] = 233,
  [SMALL_STATE(8)] = 279,
  [SMALL_STATE(9)] = 308,
  [SMALL_STATE(10)] = 337,
  [SMALL_STATE(11)] = 366,
  [SMALL_STATE(12)] = 395,
  [SMALL_STATE(13)] = 424,
  [SMALL_STATE(14)] = 448,
  [SMALL_STATE(15)] = 476,
  [SMALL_STATE(16)] = 503,
  [SMALL_STATE(17)] = 526,
  [SMALL_STATE(18)] = 557,
  [SMALL_STATE(19)] = 584,
  [SMALL_STATE(20)] = 606,
  [SMALL_STATE(21)] = 628,
  [SMALL_STATE(22)] = 650,
  [SMALL_STATE(23)] = 672,
  [SMALL_STATE(24)] = 699,
  [SMALL_STATE(25)] = 721,
  [SMALL_STATE(26)] = 743,
  [SMALL_STATE(27)] = 775,
  [SMALL_STATE(28)] = 792,
  [SMALL_STATE(29)] = 808,
  [SMALL_STATE(30)] = 821,
  [SMALL_STATE(31)] = 839,
  [SMALL_STATE(32)] = 857,
  [SMALL_STATE(33)] = 875,
  [SMALL_STATE(34)] = 893,
  [SMALL_STATE(35)] = 907,
  [SMALL_STATE(36)] = 921,
  [SMALL_STATE(37)] = 939,
  [SMALL_STATE(38)] = 957,
  [SMALL_STATE(39)] = 975,
  [SMALL_STATE(40)] = 989,
  [SMALL_STATE(41)] = 1006,
  [SMALL_STATE(42)] = 1019,
  [SMALL_STATE(43)] = 1030,
  [SMALL_STATE(44)] = 1043,
  [SMALL_STATE(45)] = 1058,
  [SMALL_STATE(46)] = 1073,
  [SMALL_STATE(47)] = 1086,
  [SMALL_STATE(48)] = 1101,
  [SMALL_STATE(49)] = 1116,
  [SMALL_STATE(50)] = 1125,
  [SMALL_STATE(51)] = 1139,
  [SMALL_STATE(52)] = 1153,
  [SMALL_STATE(53)] = 1167,
  [SMALL_STATE(54)] = 1181,
  [SMALL_STATE(55)] = 1195,
  [SMALL_STATE(56)] = 1209,
  [SMALL_STATE(57)] = 1223,
  [SMALL_STATE(58)] = 1235,
  [SMALL_STATE(59)] = 1249,
  [SMALL_STATE(60)] = 1265,
  [SMALL_STATE(61)] = 1279,
  [SMALL_STATE(62)] = 1293,
  [SMALL_STATE(63)] = 1307,
  [SMALL_STATE(64)] = 1316,
  [SMALL_STATE(65)] = 1329,
  [SMALL_STATE(66)] = 1340,
  [SMALL_STATE(67)] = 1349,
  [SMALL_STATE(68)] = 1360,
  [SMALL_STATE(69)] = 1373,
  [SMALL_STATE(70)] = 1386,
  [SMALL_STATE(71)] = 1395,
  [SMALL_STATE(72)] = 1408,
  [SMALL_STATE(73)] = 1417,
  [SMALL_STATE(74)] = 1426,
  [SMALL_STATE(75)] = 1437,
  [SMALL_STATE(76)] = 1446,
  [SMALL_STATE(77)] = 1457,
  [SMALL_STATE(78)] = 1470,
  [SMALL_STATE(79)] = 1479,
  [SMALL_STATE(80)] = 1492,
  [SMALL_STATE(81)] = 1499,
  [SMALL_STATE(82)] = 1512,
  [SMALL_STATE(83)] = 1518,
  [SMALL_STATE(84)] = 1528,
  [SMALL_STATE(85)] = 1534,
  [SMALL_STATE(86)] = 1542,
  [SMALL_STATE(87)] = 1548,
  [SMALL_STATE(88)] = 1554,
  [SMALL_STATE(89)] = 1564,
  [SMALL_STATE(90)] = 1570,
  [SMALL_STATE(91)] = 1580,
  [SMALL_STATE(92)] = 1590,
  [SMALL_STATE(93)] = 1596,
  [SMALL_STATE(94)] = 1606,
  [SMALL_STATE(95)] = 1612,
  [SMALL_STATE(96)] = 1622,
  [SMALL_STATE(97)] = 1632,
  [SMALL_STATE(98)] = 1642,
  [SMALL_STATE(99)] = 1652,
  [SMALL_STATE(100)] = 1662,
  [SMALL_STATE(101)] = 1668,
  [SMALL_STATE(102)] = 1676,
  [SMALL_STATE(103)] = 1686,
  [SMALL_STATE(104)] = 1693,
  [SMALL_STATE(105)] = 1698,
  [SMALL_STATE(106)] = 1705,
  [SMALL_STATE(107)] = 1712,
  [SMALL_STATE(108)] = 1719,
  [SMALL_STATE(109)] = 1726,
  [SMALL_STATE(110)] = 1733,
  [SMALL_STATE(111)] = 1740,
  [SMALL_STATE(112)] = 1747,
  [SMALL_STATE(113)] = 1754,
  [SMALL_STATE(114)] = 1759,
  [SMALL_STATE(115)] = 1766,
  [SMALL_STATE(116)] = 1773,
  [SMALL_STATE(117)] = 1778,
  [SMALL_STATE(118)] = 1785,
  [SMALL_STATE(119)] = 1792,
  [SMALL_STATE(120)] = 1799,
  [SMALL_STATE(121)] = 1806,
  [SMALL_STATE(122)] = 1813,
  [SMALL_STATE(123)] = 1820,
  [SMALL_STATE(124)] = 1827,
  [SMALL_STATE(125)] = 1834,
  [SMALL_STATE(126)] = 1841,
  [SMALL_STATE(127)] = 1848,
  [SMALL_STATE(128)] = 1855,
  [SMALL_STATE(129)] = 1862,
  [SMALL_STATE(130)] = 1867,
  [SMALL_STATE(131)] = 1874,
  [SMALL_STATE(132)] = 1881,
  [SMALL_STATE(133)] = 1888,
  [SMALL_STATE(134)] = 1895,
  [SMALL_STATE(135)] = 1902,
  [SMALL_STATE(136)] = 1907,
  [SMALL_STATE(137)] = 1914,
  [SMALL_STATE(138)] = 1919,
  [SMALL_STATE(139)] = 1926,
  [SMALL_STATE(140)] = 1933,
  [SMALL_STATE(141)] = 1940,
  [SMALL_STATE(142)] = 1947,
  [SMALL_STATE(143)] = 1954,
  [SMALL_STATE(144)] = 1958,
  [SMALL_STATE(145)] = 1962,
  [SMALL_STATE(146)] = 1966,
  [SMALL_STATE(147)] = 1970,
  [SMALL_STATE(148)] = 1974,
  [SMALL_STATE(149)] = 1978,
  [SMALL_STATE(150)] = 1982,
  [SMALL_STATE(151)] = 1986,
  [SMALL_STATE(152)] = 1990,
  [SMALL_STATE(153)] = 1994,
  [SMALL_STATE(154)] = 1998,
  [SMALL_STATE(155)] = 2002,
  [SMALL_STATE(156)] = 2006,
  [SMALL_STATE(157)] = 2010,
  [SMALL_STATE(158)] = 2014,
  [SMALL_STATE(159)] = 2018,
  [SMALL_STATE(160)] = 2022,
  [SMALL_STATE(161)] = 2026,
  [SMALL_STATE(162)] = 2030,
  [SMALL_STATE(163)] = 2034,
  [SMALL_STATE(164)] = 2038,
  [SMALL_STATE(165)] = 2042,
  [SMALL_STATE(166)] = 2046,
  [SMALL_STATE(167)] = 2050,
  [SMALL_STATE(168)] = 2054,
  [SMALL_STATE(169)] = 2058,
  [SMALL_STATE(170)] = 2062,
  [SMALL_STATE(171)] = 2066,
  [SMALL_STATE(172)] = 2070,
  [SMALL_STATE(173)] = 2074,
  [SMALL_STATE(174)] = 2078,
  [SMALL_STATE(175)] = 2082,
  [SMALL_STATE(176)] = 2086,
  [SMALL_STATE(177)] = 2090,
  [SMALL_STATE(178)] = 2094,
  [SMALL_STATE(179)] = 2098,
  [SMALL_STATE(180)] = 2102,
  [SMALL_STATE(181)] = 2106,
  [SMALL_STATE(182)] = 2110,
  [SMALL_STATE(183)] = 2114,
  [SMALL_STATE(184)] = 2118,
  [SMALL_STATE(185)] = 2122,
  [SMALL_STATE(186)] = 2126,
  [SMALL_STATE(187)] = 2130,
  [SMALL_STATE(188)] = 2134,
  [SMALL_STATE(189)] = 2138,
  [SMALL_STATE(190)] = 2142,
  [SMALL_STATE(191)] = 2146,
  [SMALL_STATE(192)] = 2150,
  [SMALL_STATE(193)] = 2154,
  [SMALL_STATE(194)] = 2158,
  [SMALL_STATE(195)] = 2162,
  [SMALL_STATE(196)] = 2166,
  [SMALL_STATE(197)] = 2170,
  [SMALL_STATE(198)] = 2174,
  [SMALL_STATE(199)] = 2178,
  [SMALL_STATE(200)] = 2182,
  [SMALL_STATE(201)] = 2186,
  [SMALL_STATE(202)] = 2190,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(34),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(15),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(43),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(15),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(43),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(201),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(175),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(18),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(142),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(102),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__simple_type_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simple_type_repeat1, 2), SHIFT_REPEAT(181),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(146),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(46),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(178),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(196),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(172),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(7),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(126),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(174),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(47),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [519] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
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
    .keyword_capture_token = sym__identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
