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
#define STATE_COUNT 197
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 16,
  [25] = 25,
  [26] = 15,
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
  [48] = 9,
  [49] = 11,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 10,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 13,
  [62] = 62,
  [63] = 63,
  [64] = 29,
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
  [130] = 100,
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
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 145,
  [194] = 132,
  [195] = 171,
  [196] = 196,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(170);
      if (lookahead == '"') ADVANCE(471);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(495);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == 'C') ADVANCE(415);
      if (lookahead == 'L') ADVANCE(329);
      if (lookahead == 'M') ADVANCE(325);
      if (lookahead == 'S') ADVANCE(416);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'b') ADVANCE(420);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == 'v') ADVANCE(418);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(467);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == 'C') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == 'C') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'b') ADVANCE(287);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(291);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == 'v') ADVANCE(285);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'b') ADVANCE(287);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(291);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == 'v') ADVANCE(285);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(289);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 17:
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(486);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(486);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(473);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(125);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(211);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(474);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(201);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(487);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == 'F') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(219);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'b') ADVANCE(287);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(291);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == 'v') ADVANCE(285);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(490);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 124:
      if (lookahead == '}') ADVANCE(174);
      END_STATE();
    case 125:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      END_STATE();
    case 127:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 128:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 129:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 168:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 169:
      if (eof) ADVANCE(170);
      if (lookahead == '"') ADVANCE(471);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(495);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == 'C') ADVANCE(415);
      if (lookahead == 'L') ADVANCE(329);
      if (lookahead == 'M') ADVANCE(325);
      if (lookahead == 'S') ADVANCE(416);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'b') ADVANCE(420);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == 'v') ADVANCE(418);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_transient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_line);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_line);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(125);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == ':') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'h') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 's') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 's') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == 'y') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'v') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'v') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'z') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__simple_type_token1);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'i') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'r') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(425);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead == 's') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == 'l') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == 'l') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == 'y') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(464);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(125);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(499);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(481);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(478);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(478);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(481);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(481);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(125);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(499);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == '8') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_NameAndType);
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
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 56},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 56},
  [24] = {.lex_state = 56},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 476},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 477},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 477},
  [72] = {.lex_state = 477},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 477},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 478},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 477},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 479},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 127},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 477},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 128},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 18},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 479},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 129},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 131},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 130},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 128},
  [172] = {.lex_state = 128},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 128},
  [195] = {.lex_state = 128},
  [196] = {.lex_state = 18},
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
    [sym_source_file] = STATE(192),
    [sym__source_file_verbose] = STATE(191),
    [sym__source_file_plain] = STATE(191),
    [sym_header_info_compile] = STATE(18),
    [sym_header_info] = STATE(106),
    [sym_header] = STATE(23),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(31), 1,
      sym_modifiers,
    STATE(38), 1,
      sym__simple_type,
    STATE(75), 1,
      sym_type,
    STATE(4), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(137), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
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
  [45] = 9,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(31), 1,
      sym_modifiers,
    STATE(38), 1,
      sym__simple_type,
    STATE(75), 1,
      sym_type,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(137), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(18), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
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
  [90] = 9,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(31), 1,
      sym_modifiers,
    STATE(38), 1,
      sym__simple_type,
    STATE(75), 1,
      sym_type,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(137), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
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
  [135] = 9,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_class_definition_repeat1,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(31), 1,
      sym_modifiers,
    STATE(38), 1,
      sym__simple_type,
    STATE(75), 1,
      sym_type,
    STATE(163), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
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
  [179] = 9,
    STATE(5), 1,
      aux_sym_class_definition_repeat1,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(31), 1,
      sym_modifiers,
    STATE(38), 1,
      sym__simple_type,
    STATE(75), 1,
      sym_type,
    STATE(164), 1,
      sym_class_definition,
    STATE(163), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
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
  [223] = 9,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_class_definition_repeat1,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(31), 1,
      sym_modifiers,
    STATE(38), 1,
      sym__simple_type,
    STATE(75), 1,
      sym_type,
    STATE(163), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(30), 4,
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
  [267] = 4,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_line,
    STATE(12), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(35), 16,
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
      aux_sym__simple_type_token1,
  [296] = 4,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(39), 2,
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
      aux_sym__simple_type_token1,
  [325] = 4,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(45), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(47), 16,
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
      aux_sym__simple_type_token1,
  [354] = 4,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(52), 2,
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
      aux_sym__simple_type_token1,
  [383] = 4,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
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
      aux_sym__simple_type_token1,
  [412] = 2,
    ACTIONS(45), 3,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
    ACTIONS(47), 16,
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
      aux_sym__simple_type_token1,
  [436] = 4,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_Code_COLON,
    STATE(22), 1,
      sym_code_def,
    ACTIONS(65), 16,
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
      aux_sym__simple_type_token1,
  [464] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(15), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(74), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
    ACTIONS(71), 12,
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
  [491] = 4,
    ACTIONS(76), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(15), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(80), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
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
  [518] = 2,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 17,
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
      aux_sym__simple_type_token1,
  [541] = 6,
    ACTIONS(86), 1,
      sym_interface_keyword,
    ACTIONS(90), 1,
      sym_class_keyword,
    STATE(24), 1,
      aux_sym_modifiers_repeat1,
    STATE(112), 1,
      sym_modifiers,
    STATE(184), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(88), 12,
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
  [572] = 2,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 16,
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
      aux_sym__simple_type_token1,
  [594] = 2,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 16,
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
      aux_sym__simple_type_token1,
  [616] = 2,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 16,
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
      aux_sym__simple_type_token1,
  [638] = 2,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 16,
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
      aux_sym__simple_type_token1,
  [660] = 5,
    ACTIONS(108), 1,
      sym_interface_keyword,
    STATE(24), 1,
      aux_sym_modifiers_repeat1,
    STATE(118), 1,
      sym_class_info_def,
    STATE(173), 1,
      sym_modifiers,
    ACTIONS(88), 12,
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
  [687] = 3,
    STATE(26), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(76), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(110), 12,
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
  [709] = 8,
    ACTIONS(112), 1,
      anon_sym_Utf8,
    ACTIONS(114), 1,
      anon_sym_Class,
    ACTIONS(116), 1,
      anon_sym_String,
    ACTIONS(118), 1,
      anon_sym_Methodref,
    ACTIONS(120), 1,
      anon_sym_Fieldref,
    ACTIONS(122), 1,
      anon_sym_NameAndType,
    ACTIONS(124), 1,
      anon_sym_Double,
    STATE(95), 8,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
  [741] = 3,
    STATE(26), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(69), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(126), 12,
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
  [763] = 1,
    ACTIONS(129), 14,
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
  [780] = 1,
    ACTIONS(131), 13,
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
  [796] = 2,
    ACTIONS(135), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(133), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
      anon_sym_DOT,
  [809] = 5,
    ACTIONS(137), 1,
      anon_sym_flags_COLON,
    ACTIONS(140), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(142), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(30), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(78), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [827] = 4,
    ACTIONS(145), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(38), 1,
      sym__simple_type,
    STATE(88), 1,
      sym_type,
    ACTIONS(11), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [843] = 5,
    ACTIONS(147), 1,
      anon_sym_flags_COLON,
    ACTIONS(149), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(151), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(35), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(78), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [861] = 5,
    ACTIONS(147), 1,
      anon_sym_flags_COLON,
    ACTIONS(151), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(153), 1,
      anon_sym_Constantpool_COLON,
    STATE(30), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(78), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [879] = 5,
    ACTIONS(147), 1,
      anon_sym_flags_COLON,
    ACTIONS(151), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(155), 1,
      anon_sym_Constantpool_COLON,
    STATE(33), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(78), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [897] = 5,
    ACTIONS(147), 1,
      anon_sym_flags_COLON,
    ACTIONS(151), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(155), 1,
      anon_sym_Constantpool_COLON,
    STATE(30), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(78), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [915] = 4,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym__simple_type,
    STATE(86), 1,
      sym_type,
    ACTIONS(11), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [931] = 5,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(52), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(161), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [948] = 3,
    ACTIONS(169), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(39), 1,
      aux_sym_type_repeat1,
    ACTIONS(167), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [961] = 3,
    ACTIONS(173), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(44), 1,
      aux_sym_type_repeat1,
    ACTIONS(171), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [974] = 3,
    STATE(38), 1,
      sym__simple_type,
    STATE(129), 1,
      sym_type,
    ACTIONS(11), 4,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_int,
      aux_sym__simple_type_token1,
  [987] = 4,
    ACTIONS(177), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym__hash_number,
    ACTIONS(175), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(42), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1002] = 4,
    ACTIONS(177), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym__hash_number,
    ACTIONS(179), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(43), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1017] = 4,
    ACTIONS(183), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym__hash_number,
    ACTIONS(181), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(43), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1032] = 3,
    ACTIONS(188), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(44), 1,
      aux_sym_type_repeat1,
    ACTIONS(186), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [1045] = 4,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      sym_number,
    STATE(82), 1,
      aux_sym_code_info_repeat1,
    STATE(68), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1059] = 4,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(170), 1,
      sym_source_file_def,
    STATE(67), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1073] = 4,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(51), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(199), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1087] = 4,
    ACTIONS(41), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(39), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1101] = 4,
    ACTIONS(54), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(52), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1115] = 5,
    ACTIONS(205), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(207), 1,
      sym__path_segment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(188), 1,
      sym__rest_of_the_line,
    STATE(189), 1,
      sym_file_path,
  [1131] = 4,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(211), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1145] = 4,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(199), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1159] = 4,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      sym_number,
    STATE(45), 1,
      aux_sym_code_info_repeat1,
    STATE(69), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1173] = 4,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(218), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1187] = 4,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(142), 1,
      sym_source_file_def,
    STATE(46), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1201] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(222), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1213] = 4,
    ACTIONS(47), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(45), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1227] = 2,
    ACTIONS(233), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1236] = 3,
    ACTIONS(235), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(237), 1,
      sym_number,
    STATE(59), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1247] = 2,
    ACTIONS(242), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1256] = 2,
    ACTIONS(47), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(45), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1265] = 4,
    ACTIONS(244), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(246), 1,
      anon_sym_SLASH,
    STATE(72), 1,
      aux_sym_file_path_repeat1,
    STATE(167), 1,
      sym__rest_of_the_line,
  [1278] = 2,
    ACTIONS(250), 1,
      sym_comment,
    ACTIONS(248), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1287] = 1,
    ACTIONS(133), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [1294] = 4,
    ACTIONS(252), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      sym_number,
    ACTIONS(256), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym__endl,
  [1307] = 2,
    ACTIONS(262), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1316] = 3,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(67), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1327] = 3,
    ACTIONS(193), 1,
      sym_number,
    ACTIONS(269), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(59), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1338] = 3,
    ACTIONS(193), 1,
      sym_number,
    ACTIONS(271), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(59), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1349] = 2,
    ACTIONS(275), 1,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1358] = 4,
    ACTIONS(246), 1,
      anon_sym_SLASH,
    ACTIONS(277), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(87), 1,
      aux_sym_file_path_repeat1,
    STATE(141), 1,
      sym__rest_of_the_line,
  [1371] = 4,
    ACTIONS(246), 1,
      anon_sym_SLASH,
    ACTIONS(279), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(87), 1,
      aux_sym_file_path_repeat1,
    STATE(152), 1,
      sym__rest_of_the_line,
  [1384] = 2,
    ACTIONS(283), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(281), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1393] = 4,
    ACTIONS(246), 1,
      anon_sym_SLASH,
    ACTIONS(279), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(71), 1,
      aux_sym_file_path_repeat1,
    STATE(152), 1,
      sym__rest_of_the_line,
  [1406] = 3,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_args,
  [1416] = 3,
    ACTIONS(244), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(289), 1,
      sym__path_segment,
    STATE(167), 1,
      sym__rest_of_the_line,
  [1426] = 1,
    ACTIONS(291), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1432] = 2,
    ACTIONS(295), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(293), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1440] = 1,
    ACTIONS(297), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1446] = 3,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      sym_number,
    STATE(37), 1,
      sym__hash_number,
  [1456] = 3,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      sym_number,
    STATE(56), 1,
      sym__hash_number,
  [1466] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      sym_number,
    STATE(82), 1,
      aux_sym_code_info_repeat1,
  [1476] = 1,
    ACTIONS(308), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1482] = 1,
    ACTIONS(310), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1488] = 3,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_args_repeat1,
  [1498] = 3,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_args_repeat1,
  [1508] = 3,
    ACTIONS(321), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      aux_sym_file_path_repeat1,
  [1518] = 3,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(178), 1,
      sym_args,
  [1528] = 1,
    ACTIONS(328), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1534] = 3,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      sym_args,
  [1544] = 3,
    ACTIONS(332), 1,
      aux_sym_code_info_stat_token1,
    STATE(53), 1,
      sym_code_info_stat,
    STATE(123), 1,
      sym_code_info,
  [1554] = 1,
    ACTIONS(334), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1560] = 3,
    ACTIONS(336), 1,
      anon_sym_descriptor_COLON,
    STATE(20), 1,
      sym__method_def_verbose,
    STATE(99), 1,
      sym_descriptor_def,
  [1570] = 3,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_args_repeat1,
  [1580] = 1,
    ACTIONS(340), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1586] = 1,
    ACTIONS(342), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1592] = 2,
    ACTIONS(344), 1,
      anon_sym_line,
    STATE(8), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [1600] = 2,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_class_def_plain_body,
  [1607] = 2,
    ACTIONS(348), 1,
      anon_sym_flags_COLON,
    STATE(14), 1,
      sym_flag_def,
  [1614] = 2,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_hex_val,
  [1621] = 2,
    ACTIONS(352), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym__hash_number,
  [1628] = 2,
    ACTIONS(352), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym__hash_number,
  [1635] = 2,
    ACTIONS(177), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym__hash_number,
  [1642] = 2,
    ACTIONS(177), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym__hash_number,
  [1649] = 2,
    ACTIONS(177), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym__hash_number,
  [1656] = 2,
    ACTIONS(354), 1,
      anon_sym_Lastmodified,
    STATE(114), 1,
      sym_header_info_last_mod,
  [1663] = 2,
    ACTIONS(356), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__endl,
  [1670] = 1,
    ACTIONS(360), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1675] = 1,
    ACTIONS(362), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1680] = 2,
    ACTIONS(364), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__endl,
  [1687] = 2,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym__endl,
  [1694] = 2,
    ACTIONS(372), 1,
      sym_interface_keyword,
    ACTIONS(374), 1,
      sym_class_keyword,
  [1701] = 2,
    ACTIONS(376), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(157), 1,
      sym__rest_of_the_line,
  [1708] = 2,
    ACTIONS(378), 1,
      anon_sym_MD5checksum,
    STATE(124), 1,
      sym_header_info_md5,
  [1715] = 2,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_args,
  [1722] = 2,
    ACTIONS(380), 1,
      aux_sym_instruction_token1,
    STATE(111), 1,
      sym_instruction,
  [1729] = 1,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      sym_number,
  [1734] = 2,
    ACTIONS(382), 1,
      anon_sym_Constantpool_COLON,
    STATE(55), 1,
      sym_constant_pool_def,
  [1741] = 2,
    ACTIONS(332), 1,
      aux_sym_code_info_stat_token1,
    STATE(117), 1,
      sym_code_info_stat,
  [1748] = 2,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_class_def_plain_body,
  [1755] = 2,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_class_def_plain_body,
  [1762] = 1,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      sym_number,
  [1767] = 2,
    ACTIONS(386), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(21), 1,
      sym_line_number_table_def,
  [1774] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(28), 1,
      sym_header_info_compile,
  [1781] = 1,
    ACTIONS(321), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1786] = 2,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_class_def_plain_body,
  [1793] = 2,
    ACTIONS(352), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym__hash_number,
  [1800] = 2,
    ACTIONS(352), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym__hash_number,
  [1807] = 1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1812] = 2,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym__wrapped_hex_val,
  [1819] = 2,
    ACTIONS(352), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym__hash_number,
  [1826] = 1,
    ACTIONS(388), 1,
      sym_flag_value,
  [1830] = 1,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
  [1834] = 1,
    ACTIONS(392), 1,
      anon_sym_COLON,
  [1838] = 1,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
  [1842] = 1,
    ACTIONS(396), 1,
      sym_descriptor_value,
  [1846] = 1,
    ACTIONS(398), 1,
      anon_sym_SEMI,
  [1850] = 1,
    ACTIONS(400), 1,
      anon_sym_SEMI,
  [1854] = 1,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
  [1858] = 1,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [1862] = 1,
    ACTIONS(406), 1,
      anon_sym_Lastmodified,
  [1866] = 1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [1870] = 1,
    ACTIONS(410), 1,
      aux_sym_source_file_def_token1,
  [1874] = 1,
    ACTIONS(412), 1,
      anon_sym_EQ,
  [1878] = 1,
    ACTIONS(414), 1,
      sym_number,
  [1882] = 1,
    ACTIONS(416), 1,
      anon_sym_flags_COLON,
  [1886] = 1,
    ACTIONS(418), 1,
      anon_sym_Compiledfrom,
  [1890] = 1,
    ACTIONS(420), 1,
      anon_sym_SEMI,
  [1894] = 1,
    ACTIONS(422), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1898] = 1,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
  [1902] = 1,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
  [1906] = 1,
    ACTIONS(428), 1,
      anon_sym_Lastmodified,
  [1910] = 1,
    ACTIONS(430), 1,
      anon_sym_DOT,
  [1914] = 1,
    ACTIONS(432), 1,
      sym_identifier,
  [1918] = 1,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
  [1922] = 1,
    ACTIONS(436), 1,
      sym_md5,
  [1926] = 1,
    ACTIONS(438), 1,
      anon_sym_MD5checksum,
  [1930] = 1,
    ACTIONS(440), 1,
      sym_identifier,
  [1934] = 1,
    ACTIONS(442), 1,
      sym_number,
  [1938] = 1,
    ACTIONS(444), 1,
      sym_hex_value,
  [1942] = 1,
    ACTIONS(446), 1,
      sym_identifier,
  [1946] = 1,
    ACTIONS(448), 1,
      aux_sym_class_info_item_simple_token1,
  [1950] = 1,
    ACTIONS(450), 1,
      anon_sym_SEMI,
  [1954] = 1,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
  [1958] = 1,
    ACTIONS(454), 1,
      anon_sym_DOT,
  [1962] = 1,
    ACTIONS(456), 1,
      anon_sym_COLON2,
  [1966] = 1,
    ACTIONS(458), 1,
      anon_sym_Lastmodified,
  [1970] = 1,
    ACTIONS(460), 1,
      sym__path_segment,
  [1974] = 1,
    ACTIONS(462), 1,
      sym_number,
  [1978] = 1,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
  [1982] = 1,
    ACTIONS(466), 1,
      sym_flag_value,
  [1986] = 1,
    ACTIONS(468), 1,
      sym_flag_value,
  [1990] = 1,
    ACTIONS(470), 1,
      sym_class_keyword,
  [1994] = 1,
    ACTIONS(472), 1,
      sym_identifier,
  [1998] = 1,
    ACTIONS(474), 1,
      anon_sym_SEMI,
  [2002] = 1,
    ACTIONS(476), 1,
      anon_sym_COLON,
  [2006] = 1,
    ACTIONS(478), 1,
      anon_sym_SEMI,
  [2010] = 1,
    ACTIONS(480), 1,
      anon_sym_SEMI,
  [2014] = 1,
    ACTIONS(482), 1,
      anon_sym_SEMI,
  [2018] = 1,
    ACTIONS(484), 1,
      sym_number,
  [2022] = 1,
    ACTIONS(486), 1,
      sym_number,
  [2026] = 1,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [2030] = 1,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
  [2034] = 1,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
  [2038] = 1,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [2042] = 1,
    ACTIONS(496), 1,
      sym_identifier,
  [2046] = 1,
    ACTIONS(498), 1,
      sym_identifier,
  [2050] = 1,
    ACTIONS(500), 1,
      anon_sym_Lastmodified,
  [2054] = 1,
    ACTIONS(502), 1,
      anon_sym_Lastmodified,
  [2058] = 1,
    ACTIONS(504), 1,
      aux_sym_header_info_compile_token1,
  [2062] = 1,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
  [2066] = 1,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
  [2070] = 1,
    ACTIONS(510), 1,
      sym_number,
  [2074] = 1,
    ACTIONS(512), 1,
      sym_flag_value,
  [2078] = 1,
    ACTIONS(514), 1,
      sym_flag_value,
  [2082] = 1,
    ACTIONS(516), 1,
      sym_decimal_floating_point_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 267,
  [SMALL_STATE(9)] = 296,
  [SMALL_STATE(10)] = 325,
  [SMALL_STATE(11)] = 354,
  [SMALL_STATE(12)] = 383,
  [SMALL_STATE(13)] = 412,
  [SMALL_STATE(14)] = 436,
  [SMALL_STATE(15)] = 464,
  [SMALL_STATE(16)] = 491,
  [SMALL_STATE(17)] = 518,
  [SMALL_STATE(18)] = 541,
  [SMALL_STATE(19)] = 572,
  [SMALL_STATE(20)] = 594,
  [SMALL_STATE(21)] = 616,
  [SMALL_STATE(22)] = 638,
  [SMALL_STATE(23)] = 660,
  [SMALL_STATE(24)] = 687,
  [SMALL_STATE(25)] = 709,
  [SMALL_STATE(26)] = 741,
  [SMALL_STATE(27)] = 763,
  [SMALL_STATE(28)] = 780,
  [SMALL_STATE(29)] = 796,
  [SMALL_STATE(30)] = 809,
  [SMALL_STATE(31)] = 827,
  [SMALL_STATE(32)] = 843,
  [SMALL_STATE(33)] = 861,
  [SMALL_STATE(34)] = 879,
  [SMALL_STATE(35)] = 897,
  [SMALL_STATE(36)] = 915,
  [SMALL_STATE(37)] = 931,
  [SMALL_STATE(38)] = 948,
  [SMALL_STATE(39)] = 961,
  [SMALL_STATE(40)] = 974,
  [SMALL_STATE(41)] = 987,
  [SMALL_STATE(42)] = 1002,
  [SMALL_STATE(43)] = 1017,
  [SMALL_STATE(44)] = 1032,
  [SMALL_STATE(45)] = 1045,
  [SMALL_STATE(46)] = 1059,
  [SMALL_STATE(47)] = 1073,
  [SMALL_STATE(48)] = 1087,
  [SMALL_STATE(49)] = 1101,
  [SMALL_STATE(50)] = 1115,
  [SMALL_STATE(51)] = 1131,
  [SMALL_STATE(52)] = 1145,
  [SMALL_STATE(53)] = 1159,
  [SMALL_STATE(54)] = 1173,
  [SMALL_STATE(55)] = 1187,
  [SMALL_STATE(56)] = 1201,
  [SMALL_STATE(57)] = 1213,
  [SMALL_STATE(58)] = 1227,
  [SMALL_STATE(59)] = 1236,
  [SMALL_STATE(60)] = 1247,
  [SMALL_STATE(61)] = 1256,
  [SMALL_STATE(62)] = 1265,
  [SMALL_STATE(63)] = 1278,
  [SMALL_STATE(64)] = 1287,
  [SMALL_STATE(65)] = 1294,
  [SMALL_STATE(66)] = 1307,
  [SMALL_STATE(67)] = 1316,
  [SMALL_STATE(68)] = 1327,
  [SMALL_STATE(69)] = 1338,
  [SMALL_STATE(70)] = 1349,
  [SMALL_STATE(71)] = 1358,
  [SMALL_STATE(72)] = 1371,
  [SMALL_STATE(73)] = 1384,
  [SMALL_STATE(74)] = 1393,
  [SMALL_STATE(75)] = 1406,
  [SMALL_STATE(76)] = 1416,
  [SMALL_STATE(77)] = 1426,
  [SMALL_STATE(78)] = 1432,
  [SMALL_STATE(79)] = 1440,
  [SMALL_STATE(80)] = 1446,
  [SMALL_STATE(81)] = 1456,
  [SMALL_STATE(82)] = 1466,
  [SMALL_STATE(83)] = 1476,
  [SMALL_STATE(84)] = 1482,
  [SMALL_STATE(85)] = 1488,
  [SMALL_STATE(86)] = 1498,
  [SMALL_STATE(87)] = 1508,
  [SMALL_STATE(88)] = 1518,
  [SMALL_STATE(89)] = 1528,
  [SMALL_STATE(90)] = 1534,
  [SMALL_STATE(91)] = 1544,
  [SMALL_STATE(92)] = 1554,
  [SMALL_STATE(93)] = 1560,
  [SMALL_STATE(94)] = 1570,
  [SMALL_STATE(95)] = 1580,
  [SMALL_STATE(96)] = 1586,
  [SMALL_STATE(97)] = 1592,
  [SMALL_STATE(98)] = 1600,
  [SMALL_STATE(99)] = 1607,
  [SMALL_STATE(100)] = 1614,
  [SMALL_STATE(101)] = 1621,
  [SMALL_STATE(102)] = 1628,
  [SMALL_STATE(103)] = 1635,
  [SMALL_STATE(104)] = 1642,
  [SMALL_STATE(105)] = 1649,
  [SMALL_STATE(106)] = 1656,
  [SMALL_STATE(107)] = 1663,
  [SMALL_STATE(108)] = 1670,
  [SMALL_STATE(109)] = 1675,
  [SMALL_STATE(110)] = 1680,
  [SMALL_STATE(111)] = 1687,
  [SMALL_STATE(112)] = 1694,
  [SMALL_STATE(113)] = 1701,
  [SMALL_STATE(114)] = 1708,
  [SMALL_STATE(115)] = 1715,
  [SMALL_STATE(116)] = 1722,
  [SMALL_STATE(117)] = 1729,
  [SMALL_STATE(118)] = 1734,
  [SMALL_STATE(119)] = 1741,
  [SMALL_STATE(120)] = 1748,
  [SMALL_STATE(121)] = 1755,
  [SMALL_STATE(122)] = 1762,
  [SMALL_STATE(123)] = 1767,
  [SMALL_STATE(124)] = 1774,
  [SMALL_STATE(125)] = 1781,
  [SMALL_STATE(126)] = 1786,
  [SMALL_STATE(127)] = 1793,
  [SMALL_STATE(128)] = 1800,
  [SMALL_STATE(129)] = 1807,
  [SMALL_STATE(130)] = 1812,
  [SMALL_STATE(131)] = 1819,
  [SMALL_STATE(132)] = 1826,
  [SMALL_STATE(133)] = 1830,
  [SMALL_STATE(134)] = 1834,
  [SMALL_STATE(135)] = 1838,
  [SMALL_STATE(136)] = 1842,
  [SMALL_STATE(137)] = 1846,
  [SMALL_STATE(138)] = 1850,
  [SMALL_STATE(139)] = 1854,
  [SMALL_STATE(140)] = 1858,
  [SMALL_STATE(141)] = 1862,
  [SMALL_STATE(142)] = 1866,
  [SMALL_STATE(143)] = 1870,
  [SMALL_STATE(144)] = 1874,
  [SMALL_STATE(145)] = 1878,
  [SMALL_STATE(146)] = 1882,
  [SMALL_STATE(147)] = 1886,
  [SMALL_STATE(148)] = 1890,
  [SMALL_STATE(149)] = 1894,
  [SMALL_STATE(150)] = 1898,
  [SMALL_STATE(151)] = 1902,
  [SMALL_STATE(152)] = 1906,
  [SMALL_STATE(153)] = 1910,
  [SMALL_STATE(154)] = 1914,
  [SMALL_STATE(155)] = 1918,
  [SMALL_STATE(156)] = 1922,
  [SMALL_STATE(157)] = 1926,
  [SMALL_STATE(158)] = 1930,
  [SMALL_STATE(159)] = 1934,
  [SMALL_STATE(160)] = 1938,
  [SMALL_STATE(161)] = 1942,
  [SMALL_STATE(162)] = 1946,
  [SMALL_STATE(163)] = 1950,
  [SMALL_STATE(164)] = 1954,
  [SMALL_STATE(165)] = 1958,
  [SMALL_STATE(166)] = 1962,
  [SMALL_STATE(167)] = 1966,
  [SMALL_STATE(168)] = 1970,
  [SMALL_STATE(169)] = 1974,
  [SMALL_STATE(170)] = 1978,
  [SMALL_STATE(171)] = 1982,
  [SMALL_STATE(172)] = 1986,
  [SMALL_STATE(173)] = 1990,
  [SMALL_STATE(174)] = 1994,
  [SMALL_STATE(175)] = 1998,
  [SMALL_STATE(176)] = 2002,
  [SMALL_STATE(177)] = 2006,
  [SMALL_STATE(178)] = 2010,
  [SMALL_STATE(179)] = 2014,
  [SMALL_STATE(180)] = 2018,
  [SMALL_STATE(181)] = 2022,
  [SMALL_STATE(182)] = 2026,
  [SMALL_STATE(183)] = 2030,
  [SMALL_STATE(184)] = 2034,
  [SMALL_STATE(185)] = 2038,
  [SMALL_STATE(186)] = 2042,
  [SMALL_STATE(187)] = 2046,
  [SMALL_STATE(188)] = 2050,
  [SMALL_STATE(189)] = 2054,
  [SMALL_STATE(190)] = 2058,
  [SMALL_STATE(191)] = 2062,
  [SMALL_STATE(192)] = 2066,
  [SMALL_STATE(193)] = 2070,
  [SMALL_STATE(194)] = 2074,
  [SMALL_STATE(195)] = 2078,
  [SMALL_STATE(196)] = 2082,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(16),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(16),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(195),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(169),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(15),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(130),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(80),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(145),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(162),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(171),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(166),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(6),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(119),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(40),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(168),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [508] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
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
