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
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
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
  aux_sym__simple_type_token1 = 39,
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
  anon_sym_DOT = 52,
  anon_sym_Fieldref = 53,
  anon_sym_NameAndType = 54,
  anon_sym_Double = 55,
  sym_decimal_floating_point_literal = 56,
  sym_class_keyword = 57,
  aux_sym_class_info_item_simple_token1 = 58,
  anon_sym_Lastmodified = 59,
  sym_md5 = 60,
  anon_sym_MD5checksum = 61,
  anon_sym_Compiledfrom = 62,
  aux_sym_header_info_compile_token1 = 63,
  sym__path_segment = 64,
  anon_sym_SLASH = 65,
  sym__endl = 66,
  anon_sym_Classfile = 67,
  sym_source_file = 68,
  sym__source_file_verbose = 69,
  sym__source_file_plain = 70,
  sym_class_def_plain = 71,
  sym_interface_def_plain = 72,
  sym_class_def_plain_body = 73,
  sym_class_def_plain_body_item = 74,
  sym_field_def = 75,
  sym_method_def = 76,
  sym__method_def_verbose = 77,
  sym_static_block_def = 78,
  sym_modifiers = 79,
  sym_class_definition = 80,
  sym_code_def = 81,
  sym_code_info = 82,
  sym_line_number_table_def = 83,
  sym_numered_line = 84,
  sym_numered_instruction = 85,
  sym_instruction = 86,
  sym_code_info_stat = 87,
  sym_descriptor_def = 88,
  sym_flag_def = 89,
  sym__wrapped_hex_val = 90,
  sym_args = 91,
  sym_type = 92,
  sym__simple_type = 93,
  sym_block = 94,
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
  aux_sym_constant_pool_def_repeat1 = 127,
  aux_sym_class_info_def_repeat1 = 128,
  aux_sym_class_info_item_simple_repeat1 = 129,
  aux_sym_file_path_repeat1 = 130,
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
  [18] = 8,
  [19] = 19,
  [20] = 9,
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
  [49] = 11,
  [50] = 16,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 14,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 29,
  [64] = 64,
  [65] = 21,
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
  [103] = 97,
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
  [187] = 141,
  [188] = 143,
  [189] = 177,
  [190] = 190,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(249);
      if (lookahead == '"') ADVANCE(549);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '/') ADVANCE(573);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == 'C') ADVANCE(493);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(406);
      if (lookahead == 'S') ADVANCE(494);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == 'v') ADVANCE(496);
      if (lookahead == '{') ADVANCE(250);
      if (lookahead == '}') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(545);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(548);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == 'C') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(155);
      if (lookahead == '{') ADVANCE(250);
      if (lookahead == '}') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(155);
      if (lookahead == '{') ADVANCE(250);
      if (lookahead == '}') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(370);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 17:
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(564);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(244);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(564);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(551);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(550);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(204);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(290);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(302);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(299);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(552);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(292);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == 'F') ADVANCE(129);
      END_STATE();
    case 51:
      if (lookahead == 'N') ADVANCE(198);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(307);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == 'f') ADVANCE(466);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == 'v') ADVANCE(501);
      if (lookahead == '}') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'b') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(366);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(566);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 130:
      if (lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(568);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(569);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 200:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 201:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 202:
      if (lookahead == 'z') ADVANCE(104);
      END_STATE();
    case 203:
      if (lookahead == '}') ADVANCE(253);
      END_STATE();
    case 204:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(204);
      END_STATE();
    case 205:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 206:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(206)
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 207:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(207)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(208)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 209:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 210:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(210)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(567);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 247:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 248:
      if (eof) ADVANCE(249);
      if (lookahead == '"') ADVANCE(549);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '/') ADVANCE(573);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == 'C') ADVANCE(493);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(406);
      if (lookahead == 'S') ADVANCE(494);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == 'v') ADVANCE(496);
      if (lookahead == '{') ADVANCE(250);
      if (lookahead == '}') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_transient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(204);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'h') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'l') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 's') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 's') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == 'y') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'u') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'z') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'i') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 's') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'l') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead == 'u') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == 'y') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(542);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(204);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(577);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(554);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(559);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(556);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(556);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(559);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(559);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(204);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(577);
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
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == '8') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(60);
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
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 58},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 58},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 554},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 555},
  [61] = {.lex_state = 555},
  [62] = {.lex_state = 555},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 555},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 556},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 555},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 557},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 206},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 555},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 18},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 18},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 207},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 208},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 209},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 18},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 210},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 557},
  [177] = {.lex_state = 207},
  [178] = {.lex_state = 207},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 207},
  [189] = {.lex_state = 207},
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
    [sym_source_file] = STATE(186),
    [sym__source_file_verbose] = STATE(185),
    [sym__source_file_plain] = STATE(185),
    [sym_header_info_compile] = STATE(10),
    [sym_header_info] = STATE(105),
    [sym_header] = STATE(12),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(130), 3,
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
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(4), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(130), 3,
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
  [66] = 6,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(4), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(130), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(15), 12,
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
  [99] = 6,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_class_definition_repeat1,
    STATE(8), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(147), 3,
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
  [131] = 6,
    STATE(7), 1,
      aux_sym_class_definition_repeat1,
    STATE(8), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(151), 1,
      sym_class_definition,
    STATE(147), 3,
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
  [163] = 6,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_class_definition_repeat1,
    STATE(8), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(147), 3,
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
  [195] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(9), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(29), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
    ACTIONS(27), 12,
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
  [222] = 4,
    ACTIONS(31), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(9), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(36), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
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
  [249] = 5,
    ACTIONS(38), 1,
      sym_interface_keyword,
    STATE(18), 1,
      aux_sym_modifiers_repeat1,
    STATE(108), 1,
      sym_modifiers,
    STATE(180), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(40), 12,
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
  [277] = 3,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    STATE(16), 1,
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
  [300] = 5,
    ACTIONS(46), 1,
      sym_interface_keyword,
    STATE(18), 1,
      aux_sym_modifiers_repeat1,
    STATE(98), 1,
      sym_class_info_def,
    STATE(168), 1,
      sym_modifiers,
    ACTIONS(40), 12,
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
  [327] = 3,
    ACTIONS(50), 1,
      anon_sym_line,
    STATE(13), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(48), 13,
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
  [350] = 3,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(14), 1,
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
  [373] = 3,
    ACTIONS(60), 1,
      anon_sym_line,
    STATE(13), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(58), 13,
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
  [396] = 3,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(62), 14,
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
  [419] = 8,
    ACTIONS(64), 1,
      anon_sym_Utf8,
    ACTIONS(66), 1,
      anon_sym_Class,
    ACTIONS(68), 1,
      anon_sym_String,
    ACTIONS(70), 1,
      anon_sym_Methodref,
    ACTIONS(72), 1,
      anon_sym_Fieldref,
    ACTIONS(74), 1,
      anon_sym_NameAndType,
    ACTIONS(76), 1,
      anon_sym_Double,
    STATE(94), 8,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
  [451] = 3,
    STATE(20), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(25), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(78), 12,
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
  [473] = 3,
    ACTIONS(82), 1,
      anon_sym_Code_COLON,
    STATE(26), 1,
      sym_code_def,
    ACTIONS(80), 13,
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
  [495] = 3,
    STATE(20), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(31), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(84), 12,
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
  [517] = 1,
    ACTIONS(53), 15,
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
  [535] = 1,
    ACTIONS(87), 14,
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
  [552] = 1,
    ACTIONS(89), 13,
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
  [568] = 1,
    ACTIONS(91), 13,
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
  [584] = 1,
    ACTIONS(93), 13,
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
  [600] = 1,
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
  [616] = 1,
    ACTIONS(97), 13,
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
  [632] = 1,
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
  [648] = 2,
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
  [661] = 5,
    ACTIONS(105), 1,
      anon_sym_flags_COLON,
    ACTIONS(107), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(109), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(35), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(78), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [679] = 5,
    ACTIONS(105), 1,
      anon_sym_flags_COLON,
    ACTIONS(109), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(111), 1,
      anon_sym_Constantpool_COLON,
    STATE(30), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(78), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [697] = 5,
    ACTIONS(105), 1,
      anon_sym_flags_COLON,
    ACTIONS(107), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(109), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(36), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(78), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [715] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(38), 1,
      sym__simple_type,
    STATE(83), 1,
      sym_type,
    ACTIONS(115), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [731] = 4,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym__simple_type,
    STATE(85), 1,
      sym_type,
    ACTIONS(115), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [747] = 5,
    ACTIONS(119), 1,
      anon_sym_flags_COLON,
    ACTIONS(122), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(124), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(35), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(78), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [765] = 5,
    ACTIONS(105), 1,
      anon_sym_flags_COLON,
    ACTIONS(109), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(127), 1,
      anon_sym_Constantpool_COLON,
    STATE(35), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(78), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [783] = 3,
    ACTIONS(131), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(37), 1,
      aux_sym_type_repeat1,
    ACTIONS(129), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [796] = 3,
    ACTIONS(136), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(42), 1,
      aux_sym_type_repeat1,
    ACTIONS(134), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [809] = 4,
    ACTIONS(140), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym__hash_number,
    ACTIONS(138), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(39), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [824] = 4,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym__hash_number,
    ACTIONS(143), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(39), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [839] = 4,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym__hash_number,
    ACTIONS(147), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(40), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [854] = 3,
    ACTIONS(151), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(37), 1,
      aux_sym_type_repeat1,
    ACTIONS(149), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [867] = 5,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(47), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(155), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [884] = 3,
    STATE(38), 1,
      sym__simple_type,
    STATE(122), 1,
      sym_type,
    ACTIONS(115), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [897] = 4,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(55), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(161), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [911] = 4,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(137), 1,
      sym_source_file_def,
    STATE(57), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [925] = 4,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(55), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(169), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [939] = 4,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      sym_number,
    STATE(76), 1,
      aux_sym_code_info_repeat1,
    STATE(68), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [953] = 4,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(50), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(42), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [967] = 4,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(62), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [981] = 4,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      sym_number,
    STATE(48), 1,
      aux_sym_code_info_repeat1,
    STATE(67), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [995] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(183), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1007] = 4,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(45), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(169), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1021] = 4,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(53), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1035] = 4,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(55), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(197), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1049] = 5,
    ACTIONS(201), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(203), 1,
      sym__path_segment,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    STATE(182), 1,
      sym__rest_of_the_line,
    STATE(183), 1,
      sym_file_path,
  [1065] = 4,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(165), 1,
      sym_source_file_def,
    STATE(64), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1079] = 2,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1088] = 4,
    ACTIONS(211), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      sym_number,
    ACTIONS(215), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__endl,
  [1101] = 4,
    ACTIONS(219), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(221), 1,
      anon_sym_SLASH,
    STATE(62), 1,
      aux_sym_file_path_repeat1,
    STATE(162), 1,
      sym__rest_of_the_line,
  [1114] = 4,
    ACTIONS(221), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(74), 1,
      aux_sym_file_path_repeat1,
    STATE(146), 1,
      sym__rest_of_the_line,
  [1127] = 4,
    ACTIONS(221), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(82), 1,
      aux_sym_file_path_repeat1,
    STATE(146), 1,
      sym__rest_of_the_line,
  [1140] = 1,
    ACTIONS(101), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [1147] = 3,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(64), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1158] = 2,
    ACTIONS(192), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(53), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1167] = 2,
    ACTIONS(232), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1176] = 3,
    ACTIONS(175), 1,
      sym_number,
    ACTIONS(234), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(73), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1187] = 3,
    ACTIONS(175), 1,
      sym_number,
    ACTIONS(236), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(73), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1198] = 2,
    ACTIONS(240), 1,
      sym_comment,
    ACTIONS(238), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1207] = 2,
    ACTIONS(244), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(242), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1216] = 2,
    ACTIONS(248), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1225] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(250), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1234] = 3,
    ACTIONS(254), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(256), 1,
      sym_number,
    STATE(73), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1245] = 4,
    ACTIONS(221), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(82), 1,
      aux_sym_file_path_repeat1,
    STATE(132), 1,
      sym__rest_of_the_line,
  [1258] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_args_repeat1,
  [1268] = 3,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      sym_number,
    STATE(76), 1,
      aux_sym_code_info_repeat1,
  [1278] = 1,
    ACTIONS(271), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1284] = 2,
    ACTIONS(275), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(273), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1292] = 1,
    ACTIONS(277), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1298] = 3,
    ACTIONS(219), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(279), 1,
      sym__path_segment,
    STATE(162), 1,
      sym__rest_of_the_line,
  [1308] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_args_repeat1,
  [1318] = 3,
    ACTIONS(285), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      aux_sym_file_path_repeat1,
  [1328] = 3,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_args,
  [1338] = 3,
    ACTIONS(294), 1,
      aux_sym_code_info_stat_token1,
    STATE(51), 1,
      sym_code_info_stat,
    STATE(119), 1,
      sym_code_info,
  [1348] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_args_repeat1,
  [1358] = 3,
    ACTIONS(145), 1,
      anon_sym_POUND,
    ACTIONS(298), 1,
      sym_number,
    STATE(43), 1,
      sym__hash_number,
  [1368] = 3,
    ACTIONS(300), 1,
      anon_sym_descriptor_COLON,
    STATE(25), 1,
      sym__method_def_verbose,
    STATE(123), 1,
      sym_descriptor_def,
  [1378] = 1,
    ACTIONS(302), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1384] = 1,
    ACTIONS(304), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1390] = 1,
    ACTIONS(306), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1396] = 2,
    ACTIONS(60), 1,
      anon_sym_line,
    STATE(15), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [1404] = 1,
    ACTIONS(308), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1410] = 3,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(135), 1,
      sym_args,
  [1420] = 1,
    ACTIONS(312), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1426] = 3,
    ACTIONS(145), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      sym_number,
    STATE(52), 1,
      sym__hash_number,
  [1436] = 1,
    ACTIONS(316), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1442] = 2,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym__wrapped_hex_val,
  [1449] = 2,
    ACTIONS(320), 1,
      anon_sym_Constantpool_COLON,
    STATE(46), 1,
      sym_constant_pool_def,
  [1456] = 2,
    ACTIONS(322), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym__hash_number,
  [1463] = 2,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym__hash_number,
  [1470] = 1,
    ACTIONS(324), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1475] = 2,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym__hash_number,
  [1482] = 2,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym__wrapped_hex_val,
  [1489] = 2,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(154), 1,
      sym__hash_number,
  [1496] = 2,
    ACTIONS(326), 1,
      anon_sym_Lastmodified,
    STATE(113), 1,
      sym_header_info_last_mod,
  [1503] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym__endl,
  [1510] = 2,
    ACTIONS(322), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym__hash_number,
  [1517] = 2,
    ACTIONS(332), 1,
      sym_interface_keyword,
    ACTIONS(334), 1,
      sym_class_keyword,
  [1524] = 1,
    ACTIONS(336), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1529] = 2,
    ACTIONS(338), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__endl,
  [1536] = 2,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__endl,
  [1543] = 2,
    ACTIONS(346), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(155), 1,
      sym__rest_of_the_line,
  [1550] = 2,
    ACTIONS(348), 1,
      anon_sym_MD5checksum,
    STATE(120), 1,
      sym_header_info_md5,
  [1557] = 2,
    ACTIONS(350), 1,
      aux_sym_instruction_token1,
    STATE(111), 1,
      sym_instruction,
  [1564] = 1,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      sym_number,
  [1569] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_class_def_plain_body,
  [1576] = 2,
    ACTIONS(294), 1,
      aux_sym_code_info_stat_token1,
    STATE(115), 1,
      sym_code_info_stat,
  [1583] = 1,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      sym_number,
  [1588] = 2,
    ACTIONS(356), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(28), 1,
      sym_line_number_table_def,
  [1595] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(27), 1,
      sym_header_info_compile,
  [1602] = 1,
    ACTIONS(285), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1607] = 1,
    ACTIONS(264), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1612] = 2,
    ACTIONS(358), 1,
      anon_sym_flags_COLON,
    STATE(19), 1,
      sym_flag_def,
  [1619] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_class_def_plain_body,
  [1626] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_class_def_plain_body,
  [1633] = 2,
    ACTIONS(322), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym__hash_number,
  [1640] = 2,
    ACTIONS(322), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym__hash_number,
  [1647] = 2,
    ACTIONS(322), 1,
      anon_sym_POUND,
    STATE(71), 1,
      sym__hash_number,
  [1654] = 1,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
  [1658] = 1,
    ACTIONS(362), 1,
      anon_sym_SEMI,
  [1662] = 1,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
  [1666] = 1,
    ACTIONS(366), 1,
      anon_sym_Lastmodified,
  [1670] = 1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
  [1674] = 1,
    ACTIONS(370), 1,
      sym_hex_value,
  [1678] = 1,
    ACTIONS(372), 1,
      anon_sym_SEMI,
  [1682] = 1,
    ACTIONS(374), 1,
      anon_sym_flags_COLON,
  [1686] = 1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
  [1690] = 1,
    ACTIONS(378), 1,
      aux_sym_source_file_def_token1,
  [1694] = 1,
    ACTIONS(380), 1,
      anon_sym_SEMI,
  [1698] = 1,
    ACTIONS(382), 1,
      anon_sym_EQ,
  [1702] = 1,
    ACTIONS(384), 1,
      sym_number,
  [1706] = 1,
    ACTIONS(386), 1,
      anon_sym_Compiledfrom,
  [1710] = 1,
    ACTIONS(388), 1,
      sym_flag_value,
  [1714] = 1,
    ACTIONS(390), 1,
      anon_sym_SEMI,
  [1718] = 1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [1722] = 1,
    ACTIONS(394), 1,
      anon_sym_Lastmodified,
  [1726] = 1,
    ACTIONS(396), 1,
      anon_sym_SEMI,
  [1730] = 1,
    ACTIONS(398), 1,
      anon_sym_SEMI,
  [1734] = 1,
    ACTIONS(400), 1,
      sym_descriptor_value,
  [1738] = 1,
    ACTIONS(402), 1,
      sym_identifier,
  [1742] = 1,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
  [1746] = 1,
    ACTIONS(406), 1,
      sym_md5,
  [1750] = 1,
    ACTIONS(408), 1,
      sym_number,
  [1754] = 1,
    ACTIONS(410), 1,
      anon_sym_COLON,
  [1758] = 1,
    ACTIONS(412), 1,
      anon_sym_MD5checksum,
  [1762] = 1,
    ACTIONS(414), 1,
      anon_sym_DOT,
  [1766] = 1,
    ACTIONS(416), 1,
      sym_identifier,
  [1770] = 1,
    ACTIONS(418), 1,
      sym_identifier,
  [1774] = 1,
    ACTIONS(420), 1,
      anon_sym_DOT,
  [1778] = 1,
    ACTIONS(422), 1,
      anon_sym_COLON2,
  [1782] = 1,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
  [1786] = 1,
    ACTIONS(426), 1,
      anon_sym_Lastmodified,
  [1790] = 1,
    ACTIONS(428), 1,
      sym_number,
  [1794] = 1,
    ACTIONS(430), 1,
      sym__path_segment,
  [1798] = 1,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
  [1802] = 1,
    ACTIONS(434), 1,
      anon_sym_SEMI,
  [1806] = 1,
    ACTIONS(436), 1,
      sym_decimal_floating_point_literal,
  [1810] = 1,
    ACTIONS(438), 1,
      sym_class_keyword,
  [1814] = 1,
    ACTIONS(440), 1,
      sym_identifier,
  [1818] = 1,
    ACTIONS(442), 1,
      anon_sym_COLON,
  [1822] = 1,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
  [1826] = 1,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
  [1830] = 1,
    ACTIONS(448), 1,
      aux_sym_class_info_item_simple_token1,
  [1834] = 1,
    ACTIONS(450), 1,
      sym_number,
  [1838] = 1,
    ACTIONS(452), 1,
      sym_number,
  [1842] = 1,
    ACTIONS(454), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1846] = 1,
    ACTIONS(456), 1,
      sym_flag_value,
  [1850] = 1,
    ACTIONS(458), 1,
      sym_flag_value,
  [1854] = 1,
    ACTIONS(460), 1,
      anon_sym_SEMI,
  [1858] = 1,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
  [1862] = 1,
    ACTIONS(464), 1,
      sym_identifier,
  [1866] = 1,
    ACTIONS(466), 1,
      anon_sym_Lastmodified,
  [1870] = 1,
    ACTIONS(468), 1,
      anon_sym_Lastmodified,
  [1874] = 1,
    ACTIONS(470), 1,
      aux_sym_header_info_compile_token1,
  [1878] = 1,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
  [1882] = 1,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
  [1886] = 1,
    ACTIONS(476), 1,
      sym_number,
  [1890] = 1,
    ACTIONS(478), 1,
      sym_flag_value,
  [1894] = 1,
    ACTIONS(480), 1,
      sym_flag_value,
  [1898] = 1,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 163,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 222,
  [SMALL_STATE(10)] = 249,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 327,
  [SMALL_STATE(14)] = 350,
  [SMALL_STATE(15)] = 373,
  [SMALL_STATE(16)] = 396,
  [SMALL_STATE(17)] = 419,
  [SMALL_STATE(18)] = 451,
  [SMALL_STATE(19)] = 473,
  [SMALL_STATE(20)] = 495,
  [SMALL_STATE(21)] = 517,
  [SMALL_STATE(22)] = 535,
  [SMALL_STATE(23)] = 552,
  [SMALL_STATE(24)] = 568,
  [SMALL_STATE(25)] = 584,
  [SMALL_STATE(26)] = 600,
  [SMALL_STATE(27)] = 616,
  [SMALL_STATE(28)] = 632,
  [SMALL_STATE(29)] = 648,
  [SMALL_STATE(30)] = 661,
  [SMALL_STATE(31)] = 679,
  [SMALL_STATE(32)] = 697,
  [SMALL_STATE(33)] = 715,
  [SMALL_STATE(34)] = 731,
  [SMALL_STATE(35)] = 747,
  [SMALL_STATE(36)] = 765,
  [SMALL_STATE(37)] = 783,
  [SMALL_STATE(38)] = 796,
  [SMALL_STATE(39)] = 809,
  [SMALL_STATE(40)] = 824,
  [SMALL_STATE(41)] = 839,
  [SMALL_STATE(42)] = 854,
  [SMALL_STATE(43)] = 867,
  [SMALL_STATE(44)] = 884,
  [SMALL_STATE(45)] = 897,
  [SMALL_STATE(46)] = 911,
  [SMALL_STATE(47)] = 925,
  [SMALL_STATE(48)] = 939,
  [SMALL_STATE(49)] = 953,
  [SMALL_STATE(50)] = 967,
  [SMALL_STATE(51)] = 981,
  [SMALL_STATE(52)] = 995,
  [SMALL_STATE(53)] = 1007,
  [SMALL_STATE(54)] = 1021,
  [SMALL_STATE(55)] = 1035,
  [SMALL_STATE(56)] = 1049,
  [SMALL_STATE(57)] = 1065,
  [SMALL_STATE(58)] = 1079,
  [SMALL_STATE(59)] = 1088,
  [SMALL_STATE(60)] = 1101,
  [SMALL_STATE(61)] = 1114,
  [SMALL_STATE(62)] = 1127,
  [SMALL_STATE(63)] = 1140,
  [SMALL_STATE(64)] = 1147,
  [SMALL_STATE(65)] = 1158,
  [SMALL_STATE(66)] = 1167,
  [SMALL_STATE(67)] = 1176,
  [SMALL_STATE(68)] = 1187,
  [SMALL_STATE(69)] = 1198,
  [SMALL_STATE(70)] = 1207,
  [SMALL_STATE(71)] = 1216,
  [SMALL_STATE(72)] = 1225,
  [SMALL_STATE(73)] = 1234,
  [SMALL_STATE(74)] = 1245,
  [SMALL_STATE(75)] = 1258,
  [SMALL_STATE(76)] = 1268,
  [SMALL_STATE(77)] = 1278,
  [SMALL_STATE(78)] = 1284,
  [SMALL_STATE(79)] = 1292,
  [SMALL_STATE(80)] = 1298,
  [SMALL_STATE(81)] = 1308,
  [SMALL_STATE(82)] = 1318,
  [SMALL_STATE(83)] = 1328,
  [SMALL_STATE(84)] = 1338,
  [SMALL_STATE(85)] = 1348,
  [SMALL_STATE(86)] = 1358,
  [SMALL_STATE(87)] = 1368,
  [SMALL_STATE(88)] = 1378,
  [SMALL_STATE(89)] = 1384,
  [SMALL_STATE(90)] = 1390,
  [SMALL_STATE(91)] = 1396,
  [SMALL_STATE(92)] = 1404,
  [SMALL_STATE(93)] = 1410,
  [SMALL_STATE(94)] = 1420,
  [SMALL_STATE(95)] = 1426,
  [SMALL_STATE(96)] = 1436,
  [SMALL_STATE(97)] = 1442,
  [SMALL_STATE(98)] = 1449,
  [SMALL_STATE(99)] = 1456,
  [SMALL_STATE(100)] = 1463,
  [SMALL_STATE(101)] = 1470,
  [SMALL_STATE(102)] = 1475,
  [SMALL_STATE(103)] = 1482,
  [SMALL_STATE(104)] = 1489,
  [SMALL_STATE(105)] = 1496,
  [SMALL_STATE(106)] = 1503,
  [SMALL_STATE(107)] = 1510,
  [SMALL_STATE(108)] = 1517,
  [SMALL_STATE(109)] = 1524,
  [SMALL_STATE(110)] = 1529,
  [SMALL_STATE(111)] = 1536,
  [SMALL_STATE(112)] = 1543,
  [SMALL_STATE(113)] = 1550,
  [SMALL_STATE(114)] = 1557,
  [SMALL_STATE(115)] = 1564,
  [SMALL_STATE(116)] = 1569,
  [SMALL_STATE(117)] = 1576,
  [SMALL_STATE(118)] = 1583,
  [SMALL_STATE(119)] = 1588,
  [SMALL_STATE(120)] = 1595,
  [SMALL_STATE(121)] = 1602,
  [SMALL_STATE(122)] = 1607,
  [SMALL_STATE(123)] = 1612,
  [SMALL_STATE(124)] = 1619,
  [SMALL_STATE(125)] = 1626,
  [SMALL_STATE(126)] = 1633,
  [SMALL_STATE(127)] = 1640,
  [SMALL_STATE(128)] = 1647,
  [SMALL_STATE(129)] = 1654,
  [SMALL_STATE(130)] = 1658,
  [SMALL_STATE(131)] = 1662,
  [SMALL_STATE(132)] = 1666,
  [SMALL_STATE(133)] = 1670,
  [SMALL_STATE(134)] = 1674,
  [SMALL_STATE(135)] = 1678,
  [SMALL_STATE(136)] = 1682,
  [SMALL_STATE(137)] = 1686,
  [SMALL_STATE(138)] = 1690,
  [SMALL_STATE(139)] = 1694,
  [SMALL_STATE(140)] = 1698,
  [SMALL_STATE(141)] = 1702,
  [SMALL_STATE(142)] = 1706,
  [SMALL_STATE(143)] = 1710,
  [SMALL_STATE(144)] = 1714,
  [SMALL_STATE(145)] = 1718,
  [SMALL_STATE(146)] = 1722,
  [SMALL_STATE(147)] = 1726,
  [SMALL_STATE(148)] = 1730,
  [SMALL_STATE(149)] = 1734,
  [SMALL_STATE(150)] = 1738,
  [SMALL_STATE(151)] = 1742,
  [SMALL_STATE(152)] = 1746,
  [SMALL_STATE(153)] = 1750,
  [SMALL_STATE(154)] = 1754,
  [SMALL_STATE(155)] = 1758,
  [SMALL_STATE(156)] = 1762,
  [SMALL_STATE(157)] = 1766,
  [SMALL_STATE(158)] = 1770,
  [SMALL_STATE(159)] = 1774,
  [SMALL_STATE(160)] = 1778,
  [SMALL_STATE(161)] = 1782,
  [SMALL_STATE(162)] = 1786,
  [SMALL_STATE(163)] = 1790,
  [SMALL_STATE(164)] = 1794,
  [SMALL_STATE(165)] = 1798,
  [SMALL_STATE(166)] = 1802,
  [SMALL_STATE(167)] = 1806,
  [SMALL_STATE(168)] = 1810,
  [SMALL_STATE(169)] = 1814,
  [SMALL_STATE(170)] = 1818,
  [SMALL_STATE(171)] = 1822,
  [SMALL_STATE(172)] = 1826,
  [SMALL_STATE(173)] = 1830,
  [SMALL_STATE(174)] = 1834,
  [SMALL_STATE(175)] = 1838,
  [SMALL_STATE(176)] = 1842,
  [SMALL_STATE(177)] = 1846,
  [SMALL_STATE(178)] = 1850,
  [SMALL_STATE(179)] = 1854,
  [SMALL_STATE(180)] = 1858,
  [SMALL_STATE(181)] = 1862,
  [SMALL_STATE(182)] = 1866,
  [SMALL_STATE(183)] = 1870,
  [SMALL_STATE(184)] = 1874,
  [SMALL_STATE(185)] = 1878,
  [SMALL_STATE(186)] = 1882,
  [SMALL_STATE(187)] = 1886,
  [SMALL_STATE(188)] = 1890,
  [SMALL_STATE(189)] = 1894,
  [SMALL_STATE(190)] = 1898,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(8),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(9),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(163),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(189),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(97),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(86),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(37),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(141),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(177),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(173),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(160),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(44),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(117),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(164),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [474] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
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
