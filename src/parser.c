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
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 1
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  sym_interface_keyword = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_throws = 5,
  anon_sym_COMMA = 6,
  anon_sym_LBRACE_RBRACE = 7,
  anon_sym_LT = 8,
  anon_sym_GT = 9,
  anon_sym_AMP = 10,
  anon_sym_public = 11,
  anon_sym_protected = 12,
  anon_sym_private = 13,
  anon_sym_abstract = 14,
  anon_sym_static = 15,
  anon_sym_final = 16,
  anon_sym_strictfp = 17,
  anon_sym_default = 18,
  anon_sym_synchronized = 19,
  anon_sym_native = 20,
  anon_sym_transient = 21,
  anon_sym_volatile = 22,
  anon_sym_Code_COLON = 23,
  anon_sym_LineNumberTable_COLON = 24,
  anon_sym_line = 25,
  anon_sym_COLON = 26,
  anon_sym_COLON2 = 27,
  aux_sym_instruction_token1 = 28,
  anon_sym_POUND = 29,
  aux_sym_code_info_stat_token1 = 30,
  anon_sym_descriptor_COLON = 31,
  sym_descriptor_value = 32,
  anon_sym_flags_COLON = 33,
  sym_flag_value = 34,
  anon_sym_LPAREN = 35,
  anon_sym_RPAREN = 36,
  sym_hex_value = 37,
  anon_sym_LBRACK = 38,
  anon_sym_RBRACK = 39,
  anon_sym_DOT = 40,
  anon_sym_QMARK = 41,
  sym_extends = 42,
  sym_super = 43,
  anon_sym_int = 44,
  anon_sym_char = 45,
  anon_sym_void = 46,
  anon_sym_double = 47,
  anon_sym_float = 48,
  anon_sym_byte = 49,
  sym__identifier = 50,
  sym_number = 51,
  anon_sym_SourceFile_COLON_DQUOTE = 52,
  aux_sym_source_file_def_token1 = 53,
  anon_sym_DQUOTE = 54,
  sym_comment = 55,
  anon_sym_Constantpool_COLON = 56,
  anon_sym_EQ = 57,
  anon_sym_Utf8 = 58,
  aux_sym__constant_pool_item_type_utf8_token1 = 59,
  anon_sym_Class = 60,
  anon_sym_String = 61,
  anon_sym_Methodref = 62,
  anon_sym_Fieldref = 63,
  anon_sym_NameAndType = 64,
  anon_sym_Double = 65,
  sym_decimal_floating_point_literal = 66,
  sym_class_keyword = 67,
  aux_sym_class_info_item_simple_token1 = 68,
  anon_sym_Lastmodified = 69,
  sym_md5 = 70,
  anon_sym_MD5checksum = 71,
  anon_sym_Compiledfrom = 72,
  aux_sym_header_info_compile_token1 = 73,
  sym__path_segment = 74,
  anon_sym_SLASH = 75,
  sym__endl = 76,
  anon_sym_Classfile = 77,
  sym_source_file = 78,
  sym__source_file_verbose = 79,
  sym__source_file_plain = 80,
  sym_class_def_plain = 81,
  sym_interface_def_plain = 82,
  sym_class_def_plain_body = 83,
  sym_class_def_plain_body_item = 84,
  sym_field_def = 85,
  sym_method_def = 86,
  sym_method_throws = 87,
  sym__method_def_verbose = 88,
  sym_static_block_def = 89,
  sym_type_parameters = 90,
  sym_type_parameter = 91,
  sym_type_bound = 92,
  sym_modifiers = 93,
  sym_class_definition = 94,
  sym_code_def = 95,
  sym_code_info = 96,
  sym_line_number_table_def = 97,
  sym_numered_line = 98,
  sym_numered_instruction = 99,
  sym_instruction = 100,
  sym_code_info_stat = 101,
  sym_descriptor_def = 102,
  sym_flag_def = 103,
  sym__wrapped_hex_val = 104,
  sym_args = 105,
  sym_type = 106,
  sym__simple_type = 107,
  sym_array_type = 108,
  sym_dimensions = 109,
  sym_scoped_type_identifier = 110,
  sym_generic_type = 111,
  sym_type_arguments = 112,
  sym_wildcard = 113,
  sym__wildcard_bounds = 114,
  sym__primitive_type = 115,
  sym_block = 116,
  sym_identifier = 117,
  sym_source_file_def = 118,
  sym_constant_pool_def = 119,
  sym__hash_number = 120,
  sym_constant_pool_item = 121,
  sym__constant_pool_item_type = 122,
  sym__constant_pool_item_type_utf8 = 123,
  sym__constant_pool_item_type_class = 124,
  sym__constant_pool_item_type_string = 125,
  sym__constant_pool_item_type_method_ref = 126,
  sym__constant_pool_item_type_field_ref = 127,
  sym__constant_pool_item_type_name_and_type = 128,
  sym__constant_pool_item_type_double = 129,
  sym_class_info_def = 130,
  sym_class_info_item = 131,
  sym_class_info_item_simple = 132,
  sym_header_info_last_mod = 133,
  sym_header_info_md5 = 134,
  sym_header_info_compile = 135,
  sym_file_path = 136,
  sym__rest_of_the_line = 137,
  sym_header_info = 138,
  sym_header = 139,
  aux_sym__source_file_verbose_repeat1 = 140,
  aux_sym_class_def_plain_body_repeat1 = 141,
  aux_sym_method_throws_repeat1 = 142,
  aux_sym_type_parameters_repeat1 = 143,
  aux_sym_type_bound_repeat1 = 144,
  aux_sym_modifiers_repeat1 = 145,
  aux_sym_class_definition_repeat1 = 146,
  aux_sym_code_info_repeat1 = 147,
  aux_sym_code_info_repeat2 = 148,
  aux_sym_line_number_table_def_repeat1 = 149,
  aux_sym_flag_def_repeat1 = 150,
  aux_sym_dimensions_repeat1 = 151,
  aux_sym_type_arguments_repeat1 = 152,
  aux_sym_constant_pool_def_repeat1 = 153,
  aux_sym_class_info_def_repeat1 = 154,
  aux_sym_class_info_item_simple_repeat1 = 155,
  aux_sym_file_path_repeat1 = 156,
  alias_sym_type_identifier = 157,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_interface_keyword] = "interface_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_throws] = "throws",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_AMP] = "&",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK] = "\?",
  [sym_extends] = "extends",
  [sym_super] = "super",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_void] = "void",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_byte] = "byte",
  [sym__identifier] = "_identifier",
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
  [sym_method_throws] = "method_throws",
  [sym__method_def_verbose] = "_method_def_verbose",
  [sym_static_block_def] = "static_block_def",
  [sym_type_parameters] = "type_parameters",
  [sym_type_parameter] = "type_parameter",
  [sym_type_bound] = "type_bound",
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
  [sym_array_type] = "array_type",
  [sym_dimensions] = "dimensions",
  [sym_scoped_type_identifier] = "scoped_type_identifier",
  [sym_generic_type] = "generic_type",
  [sym_type_arguments] = "type_arguments",
  [sym_wildcard] = "wildcard",
  [sym__wildcard_bounds] = "_wildcard_bounds",
  [sym__primitive_type] = "_primitive_type",
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
  [aux_sym_method_throws_repeat1] = "method_throws_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_type_bound_repeat1] = "type_bound_repeat1",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_code_info_repeat2] = "code_info_repeat2",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
  [aux_sym_dimensions_repeat1] = "dimensions_repeat1",
  [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
  [aux_sym_constant_pool_def_repeat1] = "constant_pool_def_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_file_path_repeat1] = "file_path_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_interface_keyword] = sym_interface_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_throws] = anon_sym_throws,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AMP] = anon_sym_AMP,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_extends] = sym_extends,
  [sym_super] = sym_super,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_byte] = anon_sym_byte,
  [sym__identifier] = sym__identifier,
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
  [sym_method_throws] = sym_method_throws,
  [sym__method_def_verbose] = sym__method_def_verbose,
  [sym_static_block_def] = sym_static_block_def,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_parameter] = sym_type_parameter,
  [sym_type_bound] = sym_type_bound,
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
  [sym_array_type] = sym_array_type,
  [sym_dimensions] = sym_dimensions,
  [sym_scoped_type_identifier] = sym_scoped_type_identifier,
  [sym_generic_type] = sym_generic_type,
  [sym_type_arguments] = sym_type_arguments,
  [sym_wildcard] = sym_wildcard,
  [sym__wildcard_bounds] = sym__wildcard_bounds,
  [sym__primitive_type] = sym__primitive_type,
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
  [aux_sym_method_throws_repeat1] = aux_sym_method_throws_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_type_bound_repeat1] = aux_sym_type_bound_repeat1,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_code_info_repeat2] = aux_sym_code_info_repeat2,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
  [aux_sym_dimensions_repeat1] = aux_sym_dimensions_repeat1,
  [aux_sym_type_arguments_repeat1] = aux_sym_type_arguments_repeat1,
  [aux_sym_constant_pool_def_repeat1] = aux_sym_constant_pool_def_repeat1,
  [aux_sym_class_info_def_repeat1] = aux_sym_class_info_def_repeat1,
  [aux_sym_class_info_item_simple_repeat1] = aux_sym_class_info_item_simple_repeat1,
  [aux_sym_file_path_repeat1] = aux_sym_file_path_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [anon_sym_throws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_extends] = {
    .visible = true,
    .named = true,
  },
  [sym_super] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
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
  [sym_method_throws] = {
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
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_bound] = {
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
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dimensions] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym__wildcard_bounds] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive_type] = {
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
  [aux_sym_method_throws_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_bound_repeat1] = {
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
  [aux_sym_dimensions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_arguments_repeat1] = {
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
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_dimensions = 1,
  field_element = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_dimensions] = "dimensions",
  [field_element] = "element",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_dimensions, 1},
    {field_element, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [3] = {
    [2] = alias_sym_type_identifier,
  },
  [4] = {
    [0] = alias_sym_type_identifier,
    [2] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    alias_sym_type_identifier,
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
  [27] = 16,
  [28] = 28,
  [29] = 29,
  [30] = 15,
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
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 48,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 45,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 8,
  [78] = 11,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 38,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 12,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 14,
  [98] = 98,
  [99] = 99,
  [100] = 51,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 56,
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
  [141] = 38,
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
  [178] = 158,
  [179] = 159,
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
  [194] = 154,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 204,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 213,
  [255] = 247,
  [256] = 256,
};

static inline bool sym__identifier_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'e'
                ? (c < 'A'
                  ? c == '$'
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__identifier_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? c == '$'
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__identifier_character_set_3(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__identifier_character_set_4(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__identifier_character_set_5(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'y')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(354);
      if (lookahead == '"') ADVANCE(532);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '&') ADVANCE(364);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == '/') ADVANCE(564);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(358);
      if (lookahead == '<') ADVANCE(362);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(363);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(182);
      if (lookahead == 'D') ADVANCE(216);
      if (lookahead == 'F') ADVANCE(159);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(220);
      if (lookahead == 'U') ADVANCE(270);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead == ']') ADVANCE(408);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(218);
      if (lookahead == '{') ADVANCE(356);
      if (lookahead == '}') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(353)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(400);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(202);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(528);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(531);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(304);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == 'C') ADVANCE(195);
      if (lookahead == 'S') ADVANCE(219);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead == '{') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(349);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(531);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(304);
      if (lookahead == 'C') ADVANCE(195);
      if (lookahead == 'S') ADVANCE(219);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead == '{') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(349);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(352);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == 'C') ADVANCE(490);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'b') ADVANCE(523);
      if (lookahead == 'c') ADVANCE(463);
      if (lookahead == 'd') ADVANCE(449);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead == 'v') ADVANCE(492);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '}') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(525);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(397);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(364);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == ';') ADVANCE(358);
      if (lookahead == '<') ADVANCE(362);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == '{') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(364);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == ';') ADVANCE(358);
      if (lookahead == '<') ADVANCE(362);
      if (lookahead == '>') ADVANCE(363);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(525);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == '>') ADVANCE(363);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'b') ADVANCE(523);
      if (lookahead == 'c') ADVANCE(463);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead == 'f') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'v') ADVANCE(494);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(525);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(311);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(534);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(533);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == '8') ADVANCE(537);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(389);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(402);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(402);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(399);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(535);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(535);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(390);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(208);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(196);
      if (lookahead == 'D') ADVANCE(216);
      if (lookahead == 'F') ADVANCE(159);
      if (lookahead == 'M') ADVANCE(126);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(269);
      if (lookahead == 'U') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 50:
      if (lookahead == 'F') ADVANCE(178);
      END_STATE();
    case 51:
      if (lookahead == 'N') ADVANCE(294);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(307);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'b') ADVANCE(523);
      if (lookahead == 'c') ADVANCE(463);
      if (lookahead == 'd') ADVANCE(449);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead == 'v') ADVANCE(492);
      if (lookahead == '}') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(525);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(186);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(191);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(557);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(548);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(547);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(347);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(247);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(546);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 155:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 156:
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 158:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 179:
      if (lookahead == 'k') ADVANCE(260);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(375);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(560);
      END_STATE();
    case 199:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(377);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(545);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(544);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 301:
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 302:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 303:
      if (lookahead == 'w') ADVANCE(254);
      END_STATE();
    case 304:
      if (lookahead == 'x') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 305:
      if (lookahead == 'x') ADVANCE(285);
      END_STATE();
    case 306:
      if (lookahead == 'y') ADVANCE(283);
      END_STATE();
    case 307:
      if (lookahead == 'y') ADVANCE(235);
      END_STATE();
    case 308:
      if (lookahead == 'z') ADVANCE(137);
      END_STATE();
    case 309:
      if (lookahead == '}') ADVANCE(361);
      END_STATE();
    case 310:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 311:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      END_STATE();
    case 312:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 313:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(313)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 314:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(314)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 315:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(562);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 316:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      END_STATE();
    case 319:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(558);
      END_STATE();
    case 320:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 323:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 324:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 325:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 326:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 327:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 328:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 329:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 330:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 331:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 332:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      END_STATE();
    case 333:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 334:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      END_STATE();
    case 336:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      END_STATE();
    case 337:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 338:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      END_STATE();
    case 339:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      END_STATE();
    case 340:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      END_STATE();
    case 341:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      END_STATE();
    case 342:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      END_STATE();
    case 343:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      END_STATE();
    case 344:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 345:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 346:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 347:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 348:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 349:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 350:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      END_STATE();
    case 351:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 352:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 353:
      if (eof) ADVANCE(354);
      if (lookahead == '"') ADVANCE(532);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '&') ADVANCE(364);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == '/') ADVANCE(564);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == ';') ADVANCE(358);
      if (lookahead == '<') ADVANCE(362);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(363);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(182);
      if (lookahead == 'D') ADVANCE(216);
      if (lookahead == 'F') ADVANCE(159);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(220);
      if (lookahead == 'U') ADVANCE(270);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead == ']') ADVANCE(408);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(218);
      if (lookahead == '{') ADVANCE(356);
      if (lookahead == '}') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(353)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_public);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_protected);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_private);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_static);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_final);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_default);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_native);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_transient);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_line);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_extends);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_super);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_int);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_char);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_void);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_double);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_float);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(389);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(498);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(525);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(520);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(525);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(506);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(525);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(477);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(525);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(484);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(525);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'r') ADVANCE(471);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(525);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(507);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(525);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(514);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(525);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(443);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(525);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(515);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(525);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(503);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(482);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(479);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(366);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(374);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(464);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(511);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(509);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(516);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(450);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(418);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(368);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(382);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(519);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(424);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(420);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(384);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(370);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(388);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(392);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(447);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(444);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(448);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(488);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(496);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(427);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(426);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(500);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(513);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(524);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(495);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(433);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(446);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(521);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(442);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(439);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(440);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(489);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(460);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(481);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(376);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(495);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(452);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(508);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(455);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(472);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(441);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(502);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(505);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(429);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(466);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(510);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(456);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(445);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(519);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(468);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(487);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(469);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(432);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(378);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == 'u') ADVANCE(437);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(416);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(430);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(493);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(434);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(475);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(517);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead == 'y') ADVANCE(483);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(414);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(470);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(422);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(380);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(372);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(386);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(461);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(451);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(458);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(476);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(454);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(457);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(501);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(473);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(438);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(480);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(453);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(435);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(512);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'z') ADVANCE(459);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(530);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(534);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(568);
      if (lookahead != 0) ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(538);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(538);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(543);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(540);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(543);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(562);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(543);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(397);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 62},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 538},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 539},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 539},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 539},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 539},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 15},
  [136] = {.lex_state = 540},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 539},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 541},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 312},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 539},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 313},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 314},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 315},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 316},
  [236] = {.lex_state = 541},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 12},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 314},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 314},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 314},
  [255] = {.lex_state = 314},
  [256] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_throws] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
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
    [anon_sym_LineNumberTable_COLON] = ACTIONS(1),
    [anon_sym_line] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_descriptor_COLON] = ACTIONS(1),
    [anon_sym_flags_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_extends] = ACTIONS(1),
    [sym_super] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
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
    [sym_source_file] = STATE(253),
    [sym__source_file_verbose] = STATE(252),
    [sym__source_file_plain] = STATE(252),
    [sym_header_info_compile] = STATE(22),
    [sym_header_info] = STATE(155),
    [sym_header] = STATE(24),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(28), 1,
      sym_modifiers,
    STATE(61), 1,
      sym_type,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(105), 1,
      sym_generic_type,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    STATE(199), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [61] = 13,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym__identifier,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(28), 1,
      sym_modifiers,
    STATE(61), 1,
      sym_type,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(105), 1,
      sym_generic_type,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    STATE(199), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(20), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(17), 12,
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
  [122] = 13,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(28), 1,
      sym_modifiers,
    STATE(61), 1,
      sym_type,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(105), 1,
      sym_generic_type,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    STATE(199), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [183] = 13,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(7), 1,
      aux_sym_class_definition_repeat1,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(28), 1,
      sym_modifiers,
    STATE(61), 1,
      sym_type,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(105), 1,
      sym_generic_type,
    STATE(217), 1,
      sym_class_definition,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    STATE(215), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [243] = 13,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      sym__identifier,
    STATE(6), 1,
      aux_sym_class_definition_repeat1,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(28), 1,
      sym_modifiers,
    STATE(61), 1,
      sym_type,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(105), 1,
      sym_generic_type,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    STATE(215), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(30), 12,
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
  [303] = 13,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_class_definition_repeat1,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(28), 1,
      sym_modifiers,
    STATE(61), 1,
      sym_type,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(105), 1,
      sym_generic_type,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    STATE(215), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [363] = 4,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(45), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [395] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_line,
    STATE(10), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(49), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [427] = 4,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_line,
    STATE(10), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(55), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [459] = 4,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(60), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(62), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [491] = 4,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(69), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [523] = 4,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      anon_sym_Code_COLON,
    STATE(21), 1,
      sym_code_def,
    ACTIONS(73), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [554] = 2,
    ACTIONS(64), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_Code_COLON,
    ACTIONS(69), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [581] = 4,
    ACTIONS(77), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(15), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(82), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(79), 12,
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
  [611] = 4,
    ACTIONS(84), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(15), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(88), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(86), 12,
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
  [641] = 2,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 20,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [667] = 2,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [692] = 2,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [717] = 2,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [742] = 2,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 19,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [767] = 6,
    ACTIONS(110), 1,
      sym_interface_keyword,
    ACTIONS(114), 1,
      sym_class_keyword,
    STATE(27), 1,
      aux_sym_modifiers_repeat1,
    STATE(160), 1,
      sym_modifiers,
    STATE(245), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(112), 12,
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
  [798] = 10,
    ACTIONS(116), 1,
      anon_sym_GT,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(65), 1,
      sym_type,
    STATE(140), 1,
      sym_wildcard,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [836] = 5,
    ACTIONS(122), 1,
      sym_interface_keyword,
    STATE(27), 1,
      aux_sym_modifiers_repeat1,
    STATE(172), 1,
      sym_class_info_def,
    STATE(237), 1,
      sym_modifiers,
    ACTIONS(112), 12,
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
  [863] = 9,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(83), 1,
      sym_type,
    STATE(196), 1,
      sym_wildcard,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [898] = 8,
    ACTIONS(124), 1,
      anon_sym_Utf8,
    ACTIONS(126), 1,
      anon_sym_Class,
    ACTIONS(128), 1,
      anon_sym_String,
    ACTIONS(130), 1,
      anon_sym_Methodref,
    ACTIONS(132), 1,
      anon_sym_Fieldref,
    ACTIONS(134), 1,
      anon_sym_NameAndType,
    ACTIONS(136), 1,
      anon_sym_Double,
    STATE(128), 8,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
  [930] = 3,
    STATE(30), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(84), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(138), 12,
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
  [952] = 8,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(140), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(62), 1,
      sym_type,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(105), 1,
      sym_generic_type,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [984] = 8,
    ACTIONS(120), 1,
      sym__identifier,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(67), 1,
      sym_type,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1016] = 3,
    STATE(30), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(77), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(144), 12,
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
  [1038] = 7,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(55), 1,
      sym_type,
    STATE(56), 1,
      sym_generic_type,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1067] = 7,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(71), 1,
      sym_type,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1096] = 1,
    ACTIONS(147), 14,
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
  [1113] = 7,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(69), 1,
      sym_type,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1142] = 7,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(72), 1,
      sym_type,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1171] = 7,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(81), 1,
      sym_type,
    STATE(53), 3,
      sym__simple_type,
      sym_array_type,
      sym__primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1200] = 1,
    ACTIONS(149), 13,
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
  [1216] = 2,
    ACTIONS(153), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(151), 12,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_flags_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [1234] = 1,
    ACTIONS(155), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1247] = 1,
    ACTIONS(157), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1260] = 1,
    ACTIONS(159), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1272] = 1,
    ACTIONS(161), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1284] = 3,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(163), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1300] = 1,
    ACTIONS(168), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1312] = 4,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_type_arguments,
    ACTIONS(170), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1330] = 3,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(176), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1346] = 1,
    ACTIONS(180), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1358] = 4,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(184), 1,
      anon_sym_DOT,
    STATE(42), 1,
      sym_type_arguments,
    ACTIONS(182), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1376] = 1,
    ACTIONS(186), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1388] = 1,
    ACTIONS(163), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1399] = 2,
    ACTIONS(190), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(188), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      anon_sym_DOT,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
  [1412] = 1,
    ACTIONS(192), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1423] = 1,
    ACTIONS(194), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1434] = 5,
    ACTIONS(196), 1,
      anon_sym_flags_COLON,
    ACTIONS(198), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(200), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(57), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(139), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1452] = 6,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_AMP,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(99), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1472] = 2,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(170), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1484] = 5,
    ACTIONS(196), 1,
      anon_sym_flags_COLON,
    ACTIONS(200), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(206), 1,
      anon_sym_Constantpool_COLON,
    STATE(60), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(139), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1502] = 5,
    ACTIONS(196), 1,
      anon_sym_flags_COLON,
    ACTIONS(200), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(206), 1,
      anon_sym_Constantpool_COLON,
    STATE(59), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(139), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1520] = 5,
    ACTIONS(196), 1,
      anon_sym_flags_COLON,
    ACTIONS(200), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(208), 1,
      anon_sym_Constantpool_COLON,
    STATE(60), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(139), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1538] = 5,
    ACTIONS(210), 1,
      anon_sym_flags_COLON,
    ACTIONS(213), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(215), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(60), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(139), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1556] = 7,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(137), 1,
      sym_args,
    STATE(180), 1,
      sym_identifier,
  [1578] = 7,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(131), 1,
      sym_args,
    STATE(132), 1,
      sym_identifier,
  [1600] = 4,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(222), 1,
      anon_sym_DOT,
    STATE(42), 1,
      sym_type_arguments,
    ACTIONS(182), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1615] = 4,
    ACTIONS(226), 1,
      anon_sym_POUND,
    STATE(203), 1,
      sym__hash_number,
    ACTIONS(224), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(64), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1630] = 6,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_GT,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(116), 1,
      aux_sym_type_arguments_repeat1,
  [1649] = 4,
    ACTIONS(235), 1,
      anon_sym_POUND,
    STATE(203), 1,
      sym__hash_number,
    ACTIONS(233), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(68), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1664] = 6,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(117), 1,
      aux_sym_method_throws_repeat1,
  [1683] = 4,
    ACTIONS(235), 1,
      anon_sym_POUND,
    STATE(203), 1,
      sym__hash_number,
    ACTIONS(241), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(64), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1698] = 4,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    ACTIONS(243), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [1713] = 5,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(74), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(247), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1730] = 4,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    ACTIONS(253), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1745] = 6,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(115), 1,
      aux_sym_method_throws_repeat1,
  [1764] = 4,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_type_arguments,
    ACTIONS(170), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1779] = 4,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(85), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(259), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1793] = 5,
    ACTIONS(263), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(265), 1,
      sym__path_segment,
    ACTIONS(267), 1,
      anon_sym_SLASH,
    STATE(248), 1,
      sym__rest_of_the_line,
    STATE(249), 1,
      sym_file_path,
  [1809] = 4,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(80), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(259), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1823] = 4,
    ACTIONS(45), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(41), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1837] = 4,
    ACTIONS(62), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(60), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1851] = 4,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      sym_number,
    STATE(124), 1,
      aux_sym_code_info_repeat1,
    STATE(113), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1865] = 4,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(85), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(275), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1879] = 4,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1893] = 4,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      sym_number,
    STATE(79), 1,
      aux_sym_code_info_repeat1,
    STATE(108), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1907] = 4,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1921] = 4,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(223), 1,
      sym_source_file_def,
    STATE(95), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1935] = 4,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(85), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(290), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1949] = 1,
    ACTIONS(151), 5,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1957] = 4,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(202), 1,
      sym_source_file_def,
    STATE(84), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1971] = 3,
    STATE(175), 1,
      sym__wildcard_bounds,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(296), 2,
      sym_extends,
      sym_super,
  [1983] = 3,
    ACTIONS(300), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(298), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1995] = 4,
    ACTIONS(69), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2009] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_method_throws_repeat1,
    ACTIONS(253), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2020] = 4,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_LT,
    STATE(195), 1,
      sym_type_parameters,
    STATE(226), 1,
      sym_class_def_plain_body,
  [2033] = 2,
    ACTIONS(316), 1,
      sym_comment,
    ACTIONS(314), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2042] = 2,
    ACTIONS(320), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2051] = 3,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(95), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [2062] = 2,
    ACTIONS(329), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(327), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2071] = 2,
    ACTIONS(69), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(64), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2080] = 4,
    ACTIONS(331), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      aux_sym_file_path_repeat1,
    STATE(228), 1,
      sym__rest_of_the_line,
  [2093] = 3,
    ACTIONS(204), 1,
      anon_sym_AMP,
    STATE(103), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2104] = 1,
    ACTIONS(188), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [2111] = 2,
    ACTIONS(339), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2120] = 4,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    ACTIONS(341), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(145), 1,
      aux_sym_file_path_repeat1,
    STATE(201), 1,
      sym__rest_of_the_line,
  [2133] = 3,
    ACTIONS(343), 1,
      anon_sym_AMP,
    STATE(103), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2144] = 4,
    ACTIONS(346), 1,
      anon_sym_POUND,
    ACTIONS(348), 1,
      sym_number,
    ACTIONS(350), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__endl,
  [2157] = 2,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(170), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [2166] = 2,
    ACTIONS(356), 1,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2175] = 2,
    ACTIONS(360), 1,
      sym_comment,
    ACTIONS(358), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2184] = 3,
    ACTIONS(273), 1,
      sym_number,
    ACTIONS(362), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(109), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2195] = 3,
    ACTIONS(364), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(366), 1,
      sym_number,
    STATE(109), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2206] = 4,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_LT,
    STATE(192), 1,
      sym_type_parameters,
    STATE(210), 1,
      sym_class_def_plain_body,
  [2219] = 3,
    ACTIONS(371), 1,
      sym_extends,
    STATE(174), 1,
      sym_type_bound,
    ACTIONS(369), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2230] = 4,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(102), 1,
      aux_sym_file_path_repeat1,
    STATE(211), 1,
      sym__rest_of_the_line,
  [2243] = 3,
    ACTIONS(273), 1,
      sym_number,
    ACTIONS(375), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(109), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2254] = 4,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(145), 1,
      aux_sym_file_path_repeat1,
    STATE(211), 1,
      sym__rest_of_the_line,
  [2267] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_method_throws_repeat1,
  [2277] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_GT,
    STATE(133), 1,
      aux_sym_type_arguments_repeat1,
  [2287] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_method_throws_repeat1,
  [2297] = 1,
    ACTIONS(383), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2303] = 3,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    ACTIONS(387), 1,
      anon_sym_throws,
    STATE(214), 1,
      sym_method_throws,
  [2313] = 1,
    ACTIONS(389), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2319] = 3,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_GT,
    STATE(130), 1,
      aux_sym_type_parameters_repeat1,
  [2329] = 3,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(111), 1,
      sym_identifier,
    STATE(148), 1,
      sym_type_parameter,
  [2339] = 1,
    ACTIONS(397), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2345] = 3,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      sym_number,
    STATE(124), 1,
      aux_sym_code_info_repeat1,
  [2355] = 3,
    ACTIONS(404), 1,
      aux_sym_code_info_stat_token1,
    STATE(82), 1,
      sym_code_info_stat,
    STATE(191), 1,
      sym_code_info,
  [2365] = 1,
    ACTIONS(406), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2371] = 2,
    ACTIONS(408), 1,
      anon_sym_line,
    STATE(9), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [2379] = 1,
    ACTIONS(410), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2385] = 3,
    ACTIONS(412), 1,
      anon_sym_descriptor_COLON,
    STATE(19), 1,
      sym__method_def_verbose,
    STATE(167), 1,
      sym_descriptor_def,
  [2395] = 3,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_GT,
    STATE(143), 1,
      aux_sym_type_parameters_repeat1,
  [2405] = 3,
    ACTIONS(387), 1,
      anon_sym_throws,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    STATE(238), 1,
      sym_method_throws,
  [2415] = 3,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      sym_args,
  [2425] = 3,
    ACTIONS(281), 1,
      anon_sym_GT,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_type_arguments_repeat1,
  [2435] = 1,
    ACTIONS(423), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2441] = 3,
    ACTIONS(395), 1,
      sym__identifier,
    STATE(111), 1,
      sym_identifier,
    STATE(121), 1,
      sym_type_parameter,
  [2451] = 3,
    ACTIONS(331), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(425), 1,
      sym__path_segment,
    STATE(228), 1,
      sym__rest_of_the_line,
  [2461] = 3,
    ACTIONS(387), 1,
      anon_sym_throws,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      sym_method_throws,
  [2471] = 1,
    ACTIONS(429), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2477] = 2,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(431), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2485] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_GT,
    STATE(116), 1,
      aux_sym_type_arguments_repeat1,
  [2495] = 1,
    ACTIONS(151), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_extends,
  [2501] = 3,
    ACTIONS(235), 1,
      anon_sym_POUND,
    ACTIONS(435), 1,
      sym_number,
    STATE(70), 1,
      sym__hash_number,
  [2511] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_GT,
    STATE(143), 1,
      aux_sym_type_parameters_repeat1,
  [2521] = 1,
    ACTIONS(442), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2527] = 3,
    ACTIONS(444), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    STATE(145), 1,
      aux_sym_file_path_repeat1,
  [2537] = 3,
    ACTIONS(235), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_number,
    STATE(89), 1,
      sym__hash_number,
  [2547] = 1,
    ACTIONS(451), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [2552] = 1,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2557] = 1,
    ACTIONS(453), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2562] = 1,
    ACTIONS(455), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [2567] = 2,
    ACTIONS(235), 1,
      anon_sym_POUND,
    STATE(240), 1,
      sym__hash_number,
  [2574] = 2,
    ACTIONS(235), 1,
      anon_sym_POUND,
    STATE(241), 1,
      sym__hash_number,
  [2581] = 2,
    ACTIONS(235), 1,
      anon_sym_POUND,
    STATE(242), 1,
      sym__hash_number,
  [2588] = 2,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(254), 1,
      sym__wrapped_hex_val,
  [2595] = 2,
    ACTIONS(459), 1,
      anon_sym_Lastmodified,
    STATE(162), 1,
      sym_header_info_last_mod,
  [2602] = 2,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(110), 1,
      sym_identifier,
  [2609] = 2,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(173), 1,
      sym_identifier,
  [2616] = 2,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(39), 1,
      sym_identifier,
  [2623] = 2,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(40), 1,
      sym_identifier,
  [2630] = 2,
    ACTIONS(461), 1,
      sym_interface_keyword,
    ACTIONS(463), 1,
      sym_class_keyword,
  [2637] = 2,
    ACTIONS(465), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(221), 1,
      sym__rest_of_the_line,
  [2644] = 2,
    ACTIONS(467), 1,
      anon_sym_MD5checksum,
    STATE(184), 1,
      sym_header_info_md5,
  [2651] = 2,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
  [2658] = 2,
    ACTIONS(469), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym__hash_number,
  [2665] = 2,
    ACTIONS(471), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__endl,
  [2672] = 2,
    ACTIONS(469), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym__hash_number,
  [2679] = 2,
    ACTIONS(475), 1,
      anon_sym_flags_COLON,
    STATE(13), 1,
      sym_flag_def,
  [2686] = 1,
    ACTIONS(477), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [2691] = 2,
    ACTIONS(479), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__endl,
  [2698] = 2,
    ACTIONS(483), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__endl,
  [2705] = 1,
    ACTIONS(487), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [2710] = 2,
    ACTIONS(489), 1,
      anon_sym_Constantpool_COLON,
    STATE(87), 1,
      sym_constant_pool_def,
  [2717] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_class_def_plain_body,
  [2724] = 1,
    ACTIONS(491), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2729] = 1,
    ACTIONS(493), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2734] = 2,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(92), 1,
      sym_identifier,
  [2741] = 2,
    ACTIONS(495), 1,
      aux_sym_instruction_token1,
    STATE(170), 1,
      sym_instruction,
  [2748] = 2,
    ACTIONS(497), 1,
      sym__identifier,
    STATE(39), 1,
      sym_identifier,
  [2755] = 2,
    ACTIONS(497), 1,
      sym__identifier,
    STATE(40), 1,
      sym_identifier,
  [2762] = 2,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_args,
  [2769] = 1,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      sym_number,
  [2774] = 2,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(193), 1,
      sym_identifier,
  [2781] = 2,
    ACTIONS(404), 1,
      aux_sym_code_info_stat_token1,
    STATE(181), 1,
      sym_code_info_stat,
  [2788] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(37), 1,
      sym_header_info_compile,
  [2795] = 2,
    ACTIONS(220), 1,
      sym__identifier,
    STATE(58), 1,
      sym_identifier,
  [2802] = 2,
    ACTIONS(469), 1,
      anon_sym_POUND,
    STATE(94), 1,
      sym__hash_number,
  [2809] = 2,
    ACTIONS(469), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym__hash_number,
  [2816] = 2,
    ACTIONS(469), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym__hash_number,
  [2823] = 1,
    ACTIONS(499), 2,
      anon_sym_COMMA,
      sym_number,
  [2828] = 1,
    ACTIONS(444), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [2833] = 2,
    ACTIONS(501), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(20), 1,
      sym_line_number_table_def,
  [2840] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(226), 1,
      sym_class_def_plain_body,
  [2847] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_class_def_plain_body,
  [2854] = 2,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym__wrapped_hex_val,
  [2861] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_class_def_plain_body,
  [2868] = 1,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2873] = 1,
    ACTIONS(503), 1,
      aux_sym_source_file_def_token1,
  [2877] = 1,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
  [2881] = 1,
    ACTIONS(507), 1,
      anon_sym_SEMI,
  [2885] = 1,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
  [2889] = 1,
    ACTIONS(511), 1,
      anon_sym_Lastmodified,
  [2893] = 1,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
  [2897] = 1,
    ACTIONS(515), 1,
      anon_sym_EQ,
  [2901] = 1,
    ACTIONS(517), 1,
      sym_number,
  [2905] = 1,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
  [2909] = 1,
    ACTIONS(521), 1,
      anon_sym_Compiledfrom,
  [2913] = 1,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
  [2917] = 1,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
  [2921] = 1,
    ACTIONS(527), 1,
      sym_hex_value,
  [2925] = 1,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
  [2929] = 1,
    ACTIONS(531), 1,
      anon_sym_Lastmodified,
  [2933] = 1,
    ACTIONS(533), 1,
      sym_number,
  [2937] = 1,
    ACTIONS(535), 1,
      sym_flag_value,
  [2941] = 1,
    ACTIONS(537), 1,
      anon_sym_SEMI,
  [2945] = 1,
    ACTIONS(539), 1,
      anon_sym_SEMI,
  [2949] = 1,
    ACTIONS(541), 1,
      anon_sym_flags_COLON,
  [2953] = 1,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [2957] = 1,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
  [2961] = 1,
    ACTIONS(547), 1,
      anon_sym_COLON2,
  [2965] = 1,
    ACTIONS(549), 1,
      sym_md5,
  [2969] = 1,
    ACTIONS(551), 1,
      anon_sym_MD5checksum,
  [2973] = 1,
    ACTIONS(553), 1,
      sym_number,
  [2977] = 1,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
  [2981] = 1,
    ACTIONS(557), 1,
      anon_sym_SEMI,
  [2985] = 1,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
  [2989] = 1,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
  [2993] = 1,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
  [2997] = 1,
    ACTIONS(565), 1,
      anon_sym_Lastmodified,
  [3001] = 1,
    ACTIONS(567), 1,
      anon_sym_COLON,
  [3005] = 1,
    ACTIONS(569), 1,
      sym__path_segment,
  [3009] = 1,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
  [3013] = 1,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [3017] = 1,
    ACTIONS(575), 1,
      sym_number,
  [3021] = 1,
    ACTIONS(577), 1,
      sym_number,
  [3025] = 1,
    ACTIONS(579), 1,
      aux_sym_class_info_item_simple_token1,
  [3029] = 1,
    ACTIONS(581), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [3033] = 1,
    ACTIONS(583), 1,
      sym_class_keyword,
  [3037] = 1,
    ACTIONS(385), 1,
      anon_sym_SEMI,
  [3041] = 1,
    ACTIONS(585), 1,
      sym_descriptor_value,
  [3045] = 1,
    ACTIONS(587), 1,
      anon_sym_COLON,
  [3049] = 1,
    ACTIONS(589), 1,
      anon_sym_DOT,
  [3053] = 1,
    ACTIONS(591), 1,
      anon_sym_DOT,
  [3057] = 1,
    ACTIONS(593), 1,
      aux_sym_header_info_compile_token1,
  [3061] = 1,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
  [3065] = 1,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
  [3069] = 1,
    ACTIONS(416), 1,
      anon_sym_SEMI,
  [3073] = 1,
    ACTIONS(599), 1,
      sym_flag_value,
  [3077] = 1,
    ACTIONS(601), 1,
      anon_sym_Lastmodified,
  [3081] = 1,
    ACTIONS(603), 1,
      anon_sym_Lastmodified,
  [3085] = 1,
    ACTIONS(605), 1,
      sym_number,
  [3089] = 1,
    ACTIONS(607), 1,
      sym_flag_value,
  [3093] = 1,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
  [3097] = 1,
    ACTIONS(611), 1,
      ts_builtin_sym_end,
  [3101] = 1,
    ACTIONS(613), 1,
      sym_flag_value,
  [3105] = 1,
    ACTIONS(615), 1,
      sym_flag_value,
  [3109] = 1,
    ACTIONS(617), 1,
      sym_decimal_floating_point_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 243,
  [SMALL_STATE(7)] = 303,
  [SMALL_STATE(8)] = 363,
  [SMALL_STATE(9)] = 395,
  [SMALL_STATE(10)] = 427,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 491,
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 554,
  [SMALL_STATE(15)] = 581,
  [SMALL_STATE(16)] = 611,
  [SMALL_STATE(17)] = 641,
  [SMALL_STATE(18)] = 667,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 717,
  [SMALL_STATE(21)] = 742,
  [SMALL_STATE(22)] = 767,
  [SMALL_STATE(23)] = 798,
  [SMALL_STATE(24)] = 836,
  [SMALL_STATE(25)] = 863,
  [SMALL_STATE(26)] = 898,
  [SMALL_STATE(27)] = 930,
  [SMALL_STATE(28)] = 952,
  [SMALL_STATE(29)] = 984,
  [SMALL_STATE(30)] = 1016,
  [SMALL_STATE(31)] = 1038,
  [SMALL_STATE(32)] = 1067,
  [SMALL_STATE(33)] = 1096,
  [SMALL_STATE(34)] = 1113,
  [SMALL_STATE(35)] = 1142,
  [SMALL_STATE(36)] = 1171,
  [SMALL_STATE(37)] = 1200,
  [SMALL_STATE(38)] = 1216,
  [SMALL_STATE(39)] = 1234,
  [SMALL_STATE(40)] = 1247,
  [SMALL_STATE(41)] = 1260,
  [SMALL_STATE(42)] = 1272,
  [SMALL_STATE(43)] = 1284,
  [SMALL_STATE(44)] = 1300,
  [SMALL_STATE(45)] = 1312,
  [SMALL_STATE(46)] = 1330,
  [SMALL_STATE(47)] = 1346,
  [SMALL_STATE(48)] = 1358,
  [SMALL_STATE(49)] = 1376,
  [SMALL_STATE(50)] = 1388,
  [SMALL_STATE(51)] = 1399,
  [SMALL_STATE(52)] = 1412,
  [SMALL_STATE(53)] = 1423,
  [SMALL_STATE(54)] = 1434,
  [SMALL_STATE(55)] = 1452,
  [SMALL_STATE(56)] = 1472,
  [SMALL_STATE(57)] = 1484,
  [SMALL_STATE(58)] = 1502,
  [SMALL_STATE(59)] = 1520,
  [SMALL_STATE(60)] = 1538,
  [SMALL_STATE(61)] = 1556,
  [SMALL_STATE(62)] = 1578,
  [SMALL_STATE(63)] = 1600,
  [SMALL_STATE(64)] = 1615,
  [SMALL_STATE(65)] = 1630,
  [SMALL_STATE(66)] = 1649,
  [SMALL_STATE(67)] = 1664,
  [SMALL_STATE(68)] = 1683,
  [SMALL_STATE(69)] = 1698,
  [SMALL_STATE(70)] = 1713,
  [SMALL_STATE(71)] = 1730,
  [SMALL_STATE(72)] = 1745,
  [SMALL_STATE(73)] = 1764,
  [SMALL_STATE(74)] = 1779,
  [SMALL_STATE(75)] = 1793,
  [SMALL_STATE(76)] = 1809,
  [SMALL_STATE(77)] = 1823,
  [SMALL_STATE(78)] = 1837,
  [SMALL_STATE(79)] = 1851,
  [SMALL_STATE(80)] = 1865,
  [SMALL_STATE(81)] = 1879,
  [SMALL_STATE(82)] = 1893,
  [SMALL_STATE(83)] = 1907,
  [SMALL_STATE(84)] = 1921,
  [SMALL_STATE(85)] = 1935,
  [SMALL_STATE(86)] = 1949,
  [SMALL_STATE(87)] = 1957,
  [SMALL_STATE(88)] = 1971,
  [SMALL_STATE(89)] = 1983,
  [SMALL_STATE(90)] = 1995,
  [SMALL_STATE(91)] = 2009,
  [SMALL_STATE(92)] = 2020,
  [SMALL_STATE(93)] = 2033,
  [SMALL_STATE(94)] = 2042,
  [SMALL_STATE(95)] = 2051,
  [SMALL_STATE(96)] = 2062,
  [SMALL_STATE(97)] = 2071,
  [SMALL_STATE(98)] = 2080,
  [SMALL_STATE(99)] = 2093,
  [SMALL_STATE(100)] = 2104,
  [SMALL_STATE(101)] = 2111,
  [SMALL_STATE(102)] = 2120,
  [SMALL_STATE(103)] = 2133,
  [SMALL_STATE(104)] = 2144,
  [SMALL_STATE(105)] = 2157,
  [SMALL_STATE(106)] = 2166,
  [SMALL_STATE(107)] = 2175,
  [SMALL_STATE(108)] = 2184,
  [SMALL_STATE(109)] = 2195,
  [SMALL_STATE(110)] = 2206,
  [SMALL_STATE(111)] = 2219,
  [SMALL_STATE(112)] = 2230,
  [SMALL_STATE(113)] = 2243,
  [SMALL_STATE(114)] = 2254,
  [SMALL_STATE(115)] = 2267,
  [SMALL_STATE(116)] = 2277,
  [SMALL_STATE(117)] = 2287,
  [SMALL_STATE(118)] = 2297,
  [SMALL_STATE(119)] = 2303,
  [SMALL_STATE(120)] = 2313,
  [SMALL_STATE(121)] = 2319,
  [SMALL_STATE(122)] = 2329,
  [SMALL_STATE(123)] = 2339,
  [SMALL_STATE(124)] = 2345,
  [SMALL_STATE(125)] = 2355,
  [SMALL_STATE(126)] = 2365,
  [SMALL_STATE(127)] = 2371,
  [SMALL_STATE(128)] = 2379,
  [SMALL_STATE(129)] = 2385,
  [SMALL_STATE(130)] = 2395,
  [SMALL_STATE(131)] = 2405,
  [SMALL_STATE(132)] = 2415,
  [SMALL_STATE(133)] = 2425,
  [SMALL_STATE(134)] = 2435,
  [SMALL_STATE(135)] = 2441,
  [SMALL_STATE(136)] = 2451,
  [SMALL_STATE(137)] = 2461,
  [SMALL_STATE(138)] = 2471,
  [SMALL_STATE(139)] = 2477,
  [SMALL_STATE(140)] = 2485,
  [SMALL_STATE(141)] = 2495,
  [SMALL_STATE(142)] = 2501,
  [SMALL_STATE(143)] = 2511,
  [SMALL_STATE(144)] = 2521,
  [SMALL_STATE(145)] = 2527,
  [SMALL_STATE(146)] = 2537,
  [SMALL_STATE(147)] = 2547,
  [SMALL_STATE(148)] = 2552,
  [SMALL_STATE(149)] = 2557,
  [SMALL_STATE(150)] = 2562,
  [SMALL_STATE(151)] = 2567,
  [SMALL_STATE(152)] = 2574,
  [SMALL_STATE(153)] = 2581,
  [SMALL_STATE(154)] = 2588,
  [SMALL_STATE(155)] = 2595,
  [SMALL_STATE(156)] = 2602,
  [SMALL_STATE(157)] = 2609,
  [SMALL_STATE(158)] = 2616,
  [SMALL_STATE(159)] = 2623,
  [SMALL_STATE(160)] = 2630,
  [SMALL_STATE(161)] = 2637,
  [SMALL_STATE(162)] = 2644,
  [SMALL_STATE(163)] = 2651,
  [SMALL_STATE(164)] = 2658,
  [SMALL_STATE(165)] = 2665,
  [SMALL_STATE(166)] = 2672,
  [SMALL_STATE(167)] = 2679,
  [SMALL_STATE(168)] = 2686,
  [SMALL_STATE(169)] = 2691,
  [SMALL_STATE(170)] = 2698,
  [SMALL_STATE(171)] = 2705,
  [SMALL_STATE(172)] = 2710,
  [SMALL_STATE(173)] = 2717,
  [SMALL_STATE(174)] = 2724,
  [SMALL_STATE(175)] = 2729,
  [SMALL_STATE(176)] = 2734,
  [SMALL_STATE(177)] = 2741,
  [SMALL_STATE(178)] = 2748,
  [SMALL_STATE(179)] = 2755,
  [SMALL_STATE(180)] = 2762,
  [SMALL_STATE(181)] = 2769,
  [SMALL_STATE(182)] = 2774,
  [SMALL_STATE(183)] = 2781,
  [SMALL_STATE(184)] = 2788,
  [SMALL_STATE(185)] = 2795,
  [SMALL_STATE(186)] = 2802,
  [SMALL_STATE(187)] = 2809,
  [SMALL_STATE(188)] = 2816,
  [SMALL_STATE(189)] = 2823,
  [SMALL_STATE(190)] = 2828,
  [SMALL_STATE(191)] = 2833,
  [SMALL_STATE(192)] = 2840,
  [SMALL_STATE(193)] = 2847,
  [SMALL_STATE(194)] = 2854,
  [SMALL_STATE(195)] = 2861,
  [SMALL_STATE(196)] = 2868,
  [SMALL_STATE(197)] = 2873,
  [SMALL_STATE(198)] = 2877,
  [SMALL_STATE(199)] = 2881,
  [SMALL_STATE(200)] = 2885,
  [SMALL_STATE(201)] = 2889,
  [SMALL_STATE(202)] = 2893,
  [SMALL_STATE(203)] = 2897,
  [SMALL_STATE(204)] = 2901,
  [SMALL_STATE(205)] = 2905,
  [SMALL_STATE(206)] = 2909,
  [SMALL_STATE(207)] = 2913,
  [SMALL_STATE(208)] = 2917,
  [SMALL_STATE(209)] = 2921,
  [SMALL_STATE(210)] = 2925,
  [SMALL_STATE(211)] = 2929,
  [SMALL_STATE(212)] = 2933,
  [SMALL_STATE(213)] = 2937,
  [SMALL_STATE(214)] = 2941,
  [SMALL_STATE(215)] = 2945,
  [SMALL_STATE(216)] = 2949,
  [SMALL_STATE(217)] = 2953,
  [SMALL_STATE(218)] = 2957,
  [SMALL_STATE(219)] = 2961,
  [SMALL_STATE(220)] = 2965,
  [SMALL_STATE(221)] = 2969,
  [SMALL_STATE(222)] = 2973,
  [SMALL_STATE(223)] = 2977,
  [SMALL_STATE(224)] = 2981,
  [SMALL_STATE(225)] = 2985,
  [SMALL_STATE(226)] = 2989,
  [SMALL_STATE(227)] = 2993,
  [SMALL_STATE(228)] = 2997,
  [SMALL_STATE(229)] = 3001,
  [SMALL_STATE(230)] = 3005,
  [SMALL_STATE(231)] = 3009,
  [SMALL_STATE(232)] = 3013,
  [SMALL_STATE(233)] = 3017,
  [SMALL_STATE(234)] = 3021,
  [SMALL_STATE(235)] = 3025,
  [SMALL_STATE(236)] = 3029,
  [SMALL_STATE(237)] = 3033,
  [SMALL_STATE(238)] = 3037,
  [SMALL_STATE(239)] = 3041,
  [SMALL_STATE(240)] = 3045,
  [SMALL_STATE(241)] = 3049,
  [SMALL_STATE(242)] = 3053,
  [SMALL_STATE(243)] = 3057,
  [SMALL_STATE(244)] = 3061,
  [SMALL_STATE(245)] = 3065,
  [SMALL_STATE(246)] = 3069,
  [SMALL_STATE(247)] = 3073,
  [SMALL_STATE(248)] = 3077,
  [SMALL_STATE(249)] = 3081,
  [SMALL_STATE(250)] = 3085,
  [SMALL_STATE(251)] = 3089,
  [SMALL_STATE(252)] = 3093,
  [SMALL_STATE(253)] = 3097,
  [SMALL_STATE(254)] = 3101,
  [SMALL_STATE(255)] = 3105,
  [SMALL_STATE(256)] = 3109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(16),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(53),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(86),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(86),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(222),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(255),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(15),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(30),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(225),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(194),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(142),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(204),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(235),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(247),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2), SHIFT_REPEAT(32),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(34),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(219),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(183),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(25),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(122),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(230),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [611] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
