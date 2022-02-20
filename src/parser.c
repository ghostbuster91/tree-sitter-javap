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
#define STATE_COUNT 252
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 1
#define TOKEN_COUNT 80
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
  anon_sym_InterfaceMethodref = 64,
  anon_sym_NameAndType = 65,
  anon_sym_Double = 66,
  anon_sym_Float = 67,
  sym_decimal_floating_point_literal = 68,
  sym_class_keyword = 69,
  aux_sym_class_info_item_simple_token1 = 70,
  anon_sym_Lastmodified = 71,
  sym_md5 = 72,
  anon_sym_MD5checksum = 73,
  anon_sym_Compiledfrom = 74,
  aux_sym_header_info_compile_token1 = 75,
  sym__path_segment = 76,
  anon_sym_SLASH = 77,
  sym__endl = 78,
  anon_sym_Classfile = 79,
  sym_source_file = 80,
  sym__source_file_verbose = 81,
  sym__source_file_plain = 82,
  sym_class_def_plain = 83,
  sym_interface_def_plain = 84,
  sym_class_def_plain_body = 85,
  sym_class_def_plain_body_item = 86,
  sym_field_def = 87,
  sym_method_def = 88,
  sym_method_throws = 89,
  sym__method_def_verbose = 90,
  sym_static_block_def = 91,
  sym_type_parameters = 92,
  sym_type_parameter = 93,
  sym_type_bound = 94,
  sym_modifiers = 95,
  sym_class_definition = 96,
  sym_code_def = 97,
  sym_code_info = 98,
  sym_line_number_table_def = 99,
  sym_numered_line = 100,
  sym_numered_instruction = 101,
  sym_instruction = 102,
  sym_code_info_stat = 103,
  sym_descriptor_def = 104,
  sym_flag_def = 105,
  sym__wrapped_hex_val = 106,
  sym_args = 107,
  sym__type = 108,
  sym__simple_type = 109,
  sym_array_type = 110,
  sym_dimensions = 111,
  sym_scoped_type_identifier = 112,
  sym_generic_type = 113,
  sym_type_arguments = 114,
  sym_wildcard = 115,
  sym__wildcard_bounds = 116,
  sym_primitive_type = 117,
  sym_block = 118,
  sym_identifier = 119,
  sym_source_file_def = 120,
  sym_constant_pool_def = 121,
  sym__hash_number = 122,
  sym_constant_pool_item = 123,
  sym__constant_pool_item_type = 124,
  sym__constant_pool_item_type_utf8 = 125,
  sym__constant_pool_item_type_class = 126,
  sym__constant_pool_item_type_string = 127,
  sym__constant_pool_item_type_ref = 128,
  sym__constant_pool_item_type_name_and_type = 129,
  sym__constant_pool_item_type_double = 130,
  sym_class_info_def = 131,
  sym_class_info_item = 132,
  sym_class_info_item_simple = 133,
  sym_header_info_last_mod = 134,
  sym_header_info_md5 = 135,
  sym_header_info_compile = 136,
  sym_file_path = 137,
  sym__rest_of_the_line = 138,
  sym_header_info = 139,
  sym_header = 140,
  aux_sym__source_file_verbose_repeat1 = 141,
  aux_sym_class_def_plain_body_repeat1 = 142,
  aux_sym_method_throws_repeat1 = 143,
  aux_sym_type_parameters_repeat1 = 144,
  aux_sym_type_bound_repeat1 = 145,
  aux_sym_modifiers_repeat1 = 146,
  aux_sym_class_definition_repeat1 = 147,
  aux_sym_code_info_repeat1 = 148,
  aux_sym_code_info_repeat2 = 149,
  aux_sym_line_number_table_def_repeat1 = 150,
  aux_sym_flag_def_repeat1 = 151,
  aux_sym_dimensions_repeat1 = 152,
  aux_sym_type_arguments_repeat1 = 153,
  aux_sym_constant_pool_def_repeat1 = 154,
  aux_sym_class_info_def_repeat1 = 155,
  aux_sym_class_info_item_simple_repeat1 = 156,
  aux_sym_file_path_repeat1 = 157,
  alias_sym_type_identifier = 158,
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
  [anon_sym_InterfaceMethodref] = "InterfaceMethodref",
  [anon_sym_NameAndType] = "NameAndType",
  [anon_sym_Double] = "Double",
  [anon_sym_Float] = "Float",
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
  [sym__type] = "_type",
  [sym__simple_type] = "_simple_type",
  [sym_array_type] = "array_type",
  [sym_dimensions] = "dimensions",
  [sym_scoped_type_identifier] = "scoped_type_identifier",
  [sym_generic_type] = "generic_type",
  [sym_type_arguments] = "type_arguments",
  [sym_wildcard] = "wildcard",
  [sym__wildcard_bounds] = "_wildcard_bounds",
  [sym_primitive_type] = "primitive_type",
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
  [sym__constant_pool_item_type_ref] = "_constant_pool_item_type_ref",
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
  [anon_sym_InterfaceMethodref] = anon_sym_InterfaceMethodref,
  [anon_sym_NameAndType] = anon_sym_NameAndType,
  [anon_sym_Double] = anon_sym_Double,
  [anon_sym_Float] = anon_sym_Float,
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
  [sym__type] = sym__type,
  [sym__simple_type] = sym__simple_type,
  [sym_array_type] = sym_array_type,
  [sym_dimensions] = sym_dimensions,
  [sym_scoped_type_identifier] = sym_scoped_type_identifier,
  [sym_generic_type] = sym_generic_type,
  [sym_type_arguments] = sym_type_arguments,
  [sym_wildcard] = sym_wildcard,
  [sym__wildcard_bounds] = sym__wildcard_bounds,
  [sym_primitive_type] = sym_primitive_type,
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
  [sym__constant_pool_item_type_ref] = sym__constant_pool_item_type_ref,
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
  [anon_sym_InterfaceMethodref] = {
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
  [anon_sym_Float] = {
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
  [sym__type] = {
    .visible = false,
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
  [sym_primitive_type] = {
    .visible = true,
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
  [sym__constant_pool_item_type_ref] = {
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
  [27] = 27,
  [28] = 16,
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
  [63] = 42,
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
  [77] = 11,
  [78] = 78,
  [79] = 38,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 8,
  [89] = 89,
  [90] = 12,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 14,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 51,
  [100] = 100,
  [101] = 101,
  [102] = 56,
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
  [138] = 38,
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
  [174] = 156,
  [175] = 157,
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
  [192] = 148,
  [193] = 193,
  [194] = 194,
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
  [245] = 199,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 212,
  [250] = 246,
  [251] = 251,
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
      if (eof) ADVANCE(374);
      if (lookahead == '"') ADVANCE(552);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '&') ADVANCE(384);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == ',') ADVANCE(380);
      if (lookahead == '.') ADVANCE(429);
      if (lookahead == '/') ADVANCE(586);
      if (lookahead == ':') ADVANCE(414);
      if (lookahead == ';') ADVANCE(378);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(556);
      if (lookahead == '>') ADVANCE(383);
      if (lookahead == '?') ADVANCE(430);
      if (lookahead == 'C') ADVANCE(194);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 'F') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(59);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(232);
      if (lookahead == 'U') ADVANCE(287);
      if (lookahead == '[') ADVANCE(427);
      if (lookahead == ']') ADVANCE(428);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(327);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == 'v') ADVANCE(233);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '}') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(373)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(420);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(548);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(324);
      if (lookahead == ':') ADVANCE(414);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == 'S') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == 'v') ADVANCE(237);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(369);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(324);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == 'S') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == 'v') ADVANCE(237);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(369);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == ',') ADVANCE(380);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == ':') ADVANCE(413);
      if (lookahead == 'C') ADVANCE(510);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'b') ADVANCE(543);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == 'f') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead == 'p') ADVANCE(517);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead == 'v') ADVANCE(512);
      if (lookahead == '{') ADVANCE(329);
      if (lookahead == '}') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(545);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(384);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == ',') ADVANCE(380);
      if (lookahead == '.') ADVANCE(429);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(413);
      if (lookahead == ';') ADVANCE(378);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(556);
      if (lookahead == '>') ADVANCE(383);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == '[') ADVANCE(427);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == '{') ADVANCE(376);
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
      if (lookahead == '&') ADVANCE(384);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == ',') ADVANCE(380);
      if (lookahead == '.') ADVANCE(429);
      if (lookahead == ';') ADVANCE(378);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '>') ADVANCE(383);
      if (lookahead == '[') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(545);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == '>') ADVANCE(383);
      if (lookahead == '?') ADVANCE(430);
      if (lookahead == 'b') ADVANCE(543);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(511);
      if (lookahead == 'f') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(514);
      if (lookahead == '{') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(545);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(576);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(331);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(554);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(553);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == '8') ADVANCE(557);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(409);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(422);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(419);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(555);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(410);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(578);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(418);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(221);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(208);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 'F') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'M') ADVANCE(132);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(286);
      if (lookahead == 'U') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 50:
      if (lookahead == 'F') ADVANCE(190);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(150);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(314);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(326);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'b') ADVANCE(543);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == 'f') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead == 'p') ADVANCE(517);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead == 'v') ADVANCE(512);
      if (lookahead == '}') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(545);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(196);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(197);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(579);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 152:
      if (lookahead == 'f') ADVANCE(568);
      END_STATE();
    case 153:
      if (lookahead == 'f') ADVANCE(567);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(569);
      END_STATE();
    case 155:
      if (lookahead == 'f') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(367);
      END_STATE();
    case 156:
      if (lookahead == 'f') ADVANCE(244);
      END_STATE();
    case 157:
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 158:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 159:
      if (lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 160:
      if (lookahead == 'f') ADVANCE(263);
      END_STATE();
    case 161:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 162:
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(566);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(274);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 167:
      if (lookahead == 'h') ADVANCE(242);
      END_STATE();
    case 168:
      if (lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 169:
      if (lookahead == 'h') ADVANCE(261);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(243);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 191:
      if (lookahead == 'k') ADVANCE(277);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(581);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(582);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 214:
      if (lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(305);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(564);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 314:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 320:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 321:
      if (lookahead == 'v') ADVANCE(124);
      END_STATE();
    case 322:
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 323:
      if (lookahead == 'w') ADVANCE(271);
      END_STATE();
    case 324:
      if (lookahead == 'x') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      END_STATE();
    case 325:
      if (lookahead == 'x') ADVANCE(304);
      END_STATE();
    case 326:
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 327:
      if (lookahead == 'y') ADVANCE(302);
      END_STATE();
    case 328:
      if (lookahead == 'z') ADVANCE(144);
      END_STATE();
    case 329:
      if (lookahead == '}') ADVANCE(381);
      END_STATE();
    case 330:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 331:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 332:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 333:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 334:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(334)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 335:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(584);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 336:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(336)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 337:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 338:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 339:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(580);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 351:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 352:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 353:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      END_STATE();
    case 354:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 355:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 356:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 357:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 358:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      END_STATE();
    case 359:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 360:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      END_STATE();
    case 361:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 362:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 363:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      END_STATE();
    case 364:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      END_STATE();
    case 365:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 366:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 367:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 368:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 369:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      END_STATE();
    case 370:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      END_STATE();
    case 371:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 372:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 373:
      if (eof) ADVANCE(374);
      if (lookahead == '"') ADVANCE(552);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '&') ADVANCE(384);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == ',') ADVANCE(380);
      if (lookahead == '.') ADVANCE(429);
      if (lookahead == '/') ADVANCE(586);
      if (lookahead == ':') ADVANCE(413);
      if (lookahead == ';') ADVANCE(378);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(556);
      if (lookahead == '>') ADVANCE(383);
      if (lookahead == '?') ADVANCE(430);
      if (lookahead == 'C') ADVANCE(194);
      if (lookahead == 'D') ADVANCE(229);
      if (lookahead == 'F') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(59);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(232);
      if (lookahead == 'U') ADVANCE(287);
      if (lookahead == '[') ADVANCE(427);
      if (lookahead == ']') ADVANCE(428);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(327);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == 'v') ADVANCE(233);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '}') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(373)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_public);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_protected);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_private);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_static);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_final);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_default);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_native);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_transient);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_line);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_extends);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_super);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_int);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_char);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_void);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_double);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_float);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(409);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(518);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(545);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(540);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(545);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(526);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(545);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(497);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(545);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(504);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(545);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'r') ADVANCE(491);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(545);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(527);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(545);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(534);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(545);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(463);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(545);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(535);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(545);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(523);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(502);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(499);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(386);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(394);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(484);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(531);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(529);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(536);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(470);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(438);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(388);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(402);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(539);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(445);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(444);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(440);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(404);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(390);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(412);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(467);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(464);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(468);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(508);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(516);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(447);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(446);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(520);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(533);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(544);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead == 'l') ADVANCE(515);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead == 'l') ADVANCE(453);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(466);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(541);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(462);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(459);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(460);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(509);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(480);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(501);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(396);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(515);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(472);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(528);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(475);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(492);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(461);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(522);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(525);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(449);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(486);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(530);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(476);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(465);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(539);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(488);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(507);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(489);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(452);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(398);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(457);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(436);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(450);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(513);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(454);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(495);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(537);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead == 'y') ADVANCE(503);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(434);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(490);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(442);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(400);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(392);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(406);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(481);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(471);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(478);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(496);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(474);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(477);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(521);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(493);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(458);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(500);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(473);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(455);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(532);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'z') ADVANCE(479);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(545);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(590);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(558);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(563);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(560);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(563);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_InterfaceMethodref);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(584);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(563);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(590);
      END_STATE();
    case 591:
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
  [9] = {.lex_state = 63},
  [10] = {.lex_state = 63},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 63},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15},
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
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 558},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 559},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 559},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 15},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 559},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 559},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 559},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 560},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 15},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 561},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 332},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 559},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 333},
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
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 334},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 12},
  [225] = {.lex_state = 335},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 336},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 561},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 12},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 334},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 334},
  [250] = {.lex_state = 334},
  [251] = {.lex_state = 334},
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
    [anon_sym_InterfaceMethodref] = ACTIONS(1),
    [anon_sym_NameAndType] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [sym_class_keyword] = ACTIONS(1),
    [anon_sym_Lastmodified] = ACTIONS(1),
    [anon_sym_MD5checksum] = ACTIONS(1),
    [anon_sym_Compiledfrom] = ACTIONS(1),
    [aux_sym_header_info_compile_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(248),
    [sym__source_file_verbose] = STATE(247),
    [sym__source_file_plain] = STATE(247),
    [sym_header_info_compile] = STATE(22),
    [sym_header_info] = STATE(151),
    [sym_header] = STATE(25),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(27), 1,
      sym_modifiers,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(102), 1,
      sym_generic_type,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(202), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(61), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
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
  [59] = 12,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym__identifier,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(27), 1,
      sym_modifiers,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(102), 1,
      sym_generic_type,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(202), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(61), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
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
  [118] = 12,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(27), 1,
      sym_modifiers,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(102), 1,
      sym_generic_type,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(202), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(61), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
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
  [177] = 12,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(7), 1,
      aux_sym_class_definition_repeat1,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(27), 1,
      sym_modifiers,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(102), 1,
      sym_generic_type,
    STATE(218), 1,
      sym_class_definition,
    STATE(213), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(61), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
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
  [235] = 12,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      sym__identifier,
    STATE(6), 1,
      aux_sym_class_definition_repeat1,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(27), 1,
      sym_modifiers,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(102), 1,
      sym_generic_type,
    STATE(213), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(61), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
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
  [293] = 12,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_class_definition_repeat1,
    STATE(16), 1,
      aux_sym_modifiers_repeat1,
    STATE(27), 1,
      sym_modifiers,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(102), 1,
      sym_generic_type,
    STATE(213), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(61), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
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
  [351] = 4,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(12), 1,
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
  [383] = 4,
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
  [415] = 4,
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
  [447] = 4,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(8), 1,
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
  [479] = 4,
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
  [511] = 4,
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
  [542] = 2,
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
  [569] = 4,
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
  [599] = 4,
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
  [629] = 2,
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
  [655] = 2,
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
  [680] = 2,
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
  [705] = 2,
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
  [730] = 2,
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
  [755] = 6,
    ACTIONS(110), 1,
      sym_interface_keyword,
    ACTIONS(114), 1,
      sym_class_keyword,
    STATE(28), 1,
      aux_sym_modifiers_repeat1,
    STATE(160), 1,
      sym_modifiers,
    STATE(240), 2,
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
  [786] = 9,
    ACTIONS(116), 1,
      anon_sym_GT,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(42), 1,
      sym_identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(137), 1,
      sym_wildcard,
    STATE(66), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [822] = 7,
    ACTIONS(122), 1,
      anon_sym_Utf8,
    ACTIONS(124), 1,
      anon_sym_Class,
    ACTIONS(126), 1,
      anon_sym_String,
    ACTIONS(130), 1,
      anon_sym_NameAndType,
    ACTIONS(132), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(128), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(115), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
  [853] = 5,
    ACTIONS(134), 1,
      sym_interface_keyword,
    STATE(28), 1,
      aux_sym_modifiers_repeat1,
    STATE(171), 1,
      sym_class_info_def,
    STATE(232), 1,
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
  [880] = 8,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(42), 1,
      sym_identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(146), 1,
      sym_wildcard,
    STATE(85), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [913] = 7,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(63), 1,
      sym_identifier,
    STATE(73), 1,
      sym_scoped_type_identifier,
    STATE(102), 1,
      sym_generic_type,
    STATE(62), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [943] = 3,
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
  [965] = 7,
    ACTIONS(120), 1,
      sym__identifier,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym_identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(72), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [995] = 3,
    STATE(30), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(77), 2,
      sym_interface_keyword,
      sym_class_keyword,
    ACTIONS(142), 12,
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
  [1017] = 6,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(42), 1,
      sym_identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(55), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1044] = 6,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(42), 1,
      sym_identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(70), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1071] = 6,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(42), 1,
      sym_identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(83), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1098] = 1,
    ACTIONS(145), 14,
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
  [1115] = 6,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(42), 1,
      sym_identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(71), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1142] = 6,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(42), 1,
      sym_identifier,
    STATE(45), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_generic_type,
    STATE(67), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(11), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1169] = 1,
    ACTIONS(147), 13,
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
  [1185] = 2,
    ACTIONS(151), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(149), 12,
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
  [1203] = 1,
    ACTIONS(153), 10,
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
  [1216] = 1,
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
  [1229] = 1,
    ACTIONS(157), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1241] = 4,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_type_arguments,
    ACTIONS(159), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1259] = 3,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(165), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1275] = 1,
    ACTIONS(170), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1287] = 4,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(44), 1,
      sym_type_arguments,
    ACTIONS(172), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1305] = 1,
    ACTIONS(176), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1317] = 1,
    ACTIONS(178), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1329] = 3,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(180), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1345] = 1,
    ACTIONS(184), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1357] = 1,
    ACTIONS(165), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1368] = 2,
    ACTIONS(188), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(186), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      anon_sym_DOT,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
  [1381] = 1,
    ACTIONS(190), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1392] = 1,
    ACTIONS(192), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1403] = 5,
    ACTIONS(194), 1,
      anon_sym_flags_COLON,
    ACTIONS(196), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(198), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(57), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(139), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1421] = 6,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_AMP,
    STATE(48), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(95), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1441] = 2,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(172), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1453] = 5,
    ACTIONS(194), 1,
      anon_sym_flags_COLON,
    ACTIONS(198), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(204), 1,
      anon_sym_Constantpool_COLON,
    STATE(60), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(139), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1471] = 5,
    ACTIONS(194), 1,
      anon_sym_flags_COLON,
    ACTIONS(198), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(204), 1,
      anon_sym_Constantpool_COLON,
    STATE(59), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(139), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1489] = 5,
    ACTIONS(194), 1,
      anon_sym_flags_COLON,
    ACTIONS(198), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(206), 1,
      anon_sym_Constantpool_COLON,
    STATE(60), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(139), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1507] = 5,
    ACTIONS(208), 1,
      anon_sym_flags_COLON,
    ACTIONS(211), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(213), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(60), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(139), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1525] = 7,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(48), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(131), 1,
      sym_args,
    STATE(176), 1,
      sym_identifier,
  [1547] = 7,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(48), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(114), 1,
      sym_args,
    STATE(125), 1,
      sym_identifier,
  [1569] = 4,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(220), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_type_arguments,
    ACTIONS(159), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1584] = 4,
    ACTIONS(224), 1,
      anon_sym_POUND,
    STATE(193), 1,
      sym__hash_number,
    ACTIONS(222), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(64), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1599] = 4,
    ACTIONS(229), 1,
      anon_sym_POUND,
    STATE(193), 1,
      sym__hash_number,
    ACTIONS(227), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(68), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1614] = 6,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_GT,
    STATE(48), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(132), 1,
      aux_sym_type_arguments_repeat1,
  [1633] = 4,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    ACTIONS(235), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [1648] = 4,
    ACTIONS(229), 1,
      anon_sym_POUND,
    STATE(193), 1,
      sym__hash_number,
    ACTIONS(237), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(64), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1663] = 5,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(74), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(241), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1680] = 4,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    ACTIONS(247), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1695] = 6,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(135), 1,
      aux_sym_method_throws_repeat1,
  [1714] = 6,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    STATE(129), 1,
      aux_sym_method_throws_repeat1,
  [1733] = 4,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(255), 1,
      anon_sym_DOT,
    STATE(44), 1,
      sym_type_arguments,
    ACTIONS(172), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1748] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(81), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(257), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1762] = 5,
    ACTIONS(261), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(263), 1,
      sym__path_segment,
    ACTIONS(265), 1,
      anon_sym_SLASH,
    STATE(243), 1,
      sym__rest_of_the_line,
    STATE(244), 1,
      sym_file_path,
  [1778] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(78), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(257), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1792] = 4,
    ACTIONS(62), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(60), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1806] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(81), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(269), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1820] = 1,
    ACTIONS(149), 5,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1828] = 4,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      sym_number,
    STATE(120), 1,
      aux_sym_code_info_repeat1,
    STATE(112), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1842] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(81), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(280), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1856] = 4,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      sym_number,
    STATE(80), 1,
      aux_sym_code_info_repeat1,
    STATE(106), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1870] = 4,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1884] = 4,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(220), 1,
      sym_source_file_def,
    STATE(96), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1898] = 4,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      aux_sym_dimensions_repeat1,
    STATE(52), 1,
      sym_dimensions,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1912] = 3,
    STATE(173), 1,
      sym__wildcard_bounds,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(294), 2,
      sym_extends,
      sym_super,
  [1924] = 4,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(196), 1,
      sym_source_file_def,
    STATE(84), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1938] = 4,
    ACTIONS(45), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(41), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1952] = 3,
    ACTIONS(298), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(296), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1964] = 4,
    ACTIONS(69), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1978] = 2,
    ACTIONS(307), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1987] = 3,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_method_throws_repeat1,
    ACTIONS(247), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1998] = 2,
    ACTIONS(314), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(312), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2007] = 2,
    ACTIONS(69), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(64), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2016] = 3,
    ACTIONS(202), 1,
      anon_sym_AMP,
    STATE(97), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2027] = 3,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(96), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [2038] = 3,
    ACTIONS(323), 1,
      anon_sym_AMP,
    STATE(97), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2049] = 4,
    ACTIONS(326), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(328), 1,
      anon_sym_SLASH,
    STATE(113), 1,
      aux_sym_file_path_repeat1,
    STATE(223), 1,
      sym__rest_of_the_line,
  [2062] = 1,
    ACTIONS(186), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [2069] = 4,
    ACTIONS(328), 1,
      anon_sym_SLASH,
    ACTIONS(330), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(128), 1,
      aux_sym_file_path_repeat1,
    STATE(195), 1,
      sym__rest_of_the_line,
  [2082] = 2,
    ACTIONS(334), 1,
      sym_comment,
    ACTIONS(332), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2091] = 2,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(172), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [2100] = 4,
    ACTIONS(336), 1,
      anon_sym_POUND,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__endl,
  [2113] = 2,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2122] = 2,
    ACTIONS(350), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2131] = 3,
    ACTIONS(275), 1,
      sym_number,
    ACTIONS(352), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(111), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2142] = 3,
    ACTIONS(356), 1,
      sym_extends,
    STATE(170), 1,
      sym_type_bound,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2153] = 4,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      anon_sym_LT,
    STATE(189), 1,
      sym_type_parameters,
    STATE(205), 1,
      sym_class_def_plain_body,
  [2166] = 4,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      anon_sym_LT,
    STATE(190), 1,
      sym_type_parameters,
    STATE(204), 1,
      sym_class_def_plain_body,
  [2179] = 4,
    ACTIONS(328), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(100), 1,
      aux_sym_file_path_repeat1,
    STATE(206), 1,
      sym__rest_of_the_line,
  [2192] = 3,
    ACTIONS(364), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(366), 1,
      sym_number,
    STATE(111), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2203] = 3,
    ACTIONS(275), 1,
      sym_number,
    ACTIONS(369), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(111), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2214] = 4,
    ACTIONS(328), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(128), 1,
      aux_sym_file_path_repeat1,
    STATE(206), 1,
      sym__rest_of_the_line,
  [2227] = 3,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(373), 1,
      anon_sym_throws,
    STATE(233), 1,
      sym_method_throws,
  [2237] = 1,
    ACTIONS(375), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2243] = 3,
    ACTIONS(373), 1,
      anon_sym_throws,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    STATE(209), 1,
      sym_method_throws,
  [2253] = 3,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(107), 1,
      sym_identifier,
    STATE(147), 1,
      sym_type_parameter,
  [2263] = 3,
    ACTIONS(381), 1,
      aux_sym_code_info_stat_token1,
    STATE(82), 1,
      sym_code_info_stat,
    STATE(188), 1,
      sym_code_info,
  [2273] = 1,
    ACTIONS(383), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2279] = 3,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      sym_number,
    STATE(120), 1,
      aux_sym_code_info_repeat1,
  [2289] = 3,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_GT,
    STATE(144), 1,
      aux_sym_type_parameters_repeat1,
  [2299] = 1,
    ACTIONS(394), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2305] = 2,
    ACTIONS(396), 1,
      anon_sym_line,
    STATE(9), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [2313] = 1,
    ACTIONS(398), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2319] = 3,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      sym_args,
  [2329] = 3,
    ACTIONS(402), 1,
      anon_sym_descriptor_COLON,
    STATE(19), 1,
      sym__method_def_verbose,
    STATE(165), 1,
      sym_descriptor_def,
  [2339] = 3,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(107), 1,
      sym_identifier,
    STATE(121), 1,
      sym_type_parameter,
  [2349] = 3,
    ACTIONS(404), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(406), 1,
      anon_sym_SLASH,
    STATE(128), 1,
      aux_sym_file_path_repeat1,
  [2359] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_method_throws_repeat1,
  [2369] = 1,
    ACTIONS(411), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2375] = 3,
    ACTIONS(373), 1,
      anon_sym_throws,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      sym_method_throws,
  [2385] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_GT,
    STATE(136), 1,
      aux_sym_type_arguments_repeat1,
  [2395] = 3,
    ACTIONS(326), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(417), 1,
      sym__path_segment,
    STATE(223), 1,
      sym__rest_of_the_line,
  [2405] = 1,
    ACTIONS(419), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2411] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_method_throws_repeat1,
  [2421] = 3,
    ACTIONS(290), 1,
      anon_sym_GT,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_type_arguments_repeat1,
  [2431] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_GT,
    STATE(132), 1,
      aux_sym_type_arguments_repeat1,
  [2441] = 1,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_extends,
  [2447] = 2,
    ACTIONS(428), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(426), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2455] = 3,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_GT,
    STATE(140), 1,
      aux_sym_type_parameters_repeat1,
  [2465] = 3,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(435), 1,
      sym_number,
    STATE(69), 1,
      sym__hash_number,
  [2475] = 1,
    ACTIONS(437), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2481] = 3,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_number,
    STATE(89), 1,
      sym__hash_number,
  [2491] = 3,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_GT,
    STATE(140), 1,
      aux_sym_type_parameters_repeat1,
  [2501] = 1,
    ACTIONS(443), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [2506] = 1,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2511] = 1,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2516] = 2,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(249), 1,
      sym__wrapped_hex_val,
  [2523] = 2,
    ACTIONS(229), 1,
      anon_sym_POUND,
    STATE(238), 1,
      sym__hash_number,
  [2530] = 2,
    ACTIONS(229), 1,
      anon_sym_POUND,
    STATE(237), 1,
      sym__hash_number,
  [2537] = 2,
    ACTIONS(447), 1,
      anon_sym_Lastmodified,
    STATE(162), 1,
      sym_header_info_last_mod,
  [2544] = 2,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(108), 1,
      sym_identifier,
  [2551] = 1,
    ACTIONS(449), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [2556] = 1,
    ACTIONS(451), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2561] = 2,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(172), 1,
      sym_identifier,
  [2568] = 2,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(39), 1,
      sym_identifier,
  [2575] = 2,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(40), 1,
      sym_identifier,
  [2582] = 2,
    ACTIONS(453), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym__hash_number,
  [2589] = 2,
    ACTIONS(453), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym__hash_number,
  [2596] = 2,
    ACTIONS(455), 1,
      sym_interface_keyword,
    ACTIONS(457), 1,
      sym_class_keyword,
  [2603] = 2,
    ACTIONS(459), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(216), 1,
      sym__rest_of_the_line,
  [2610] = 2,
    ACTIONS(461), 1,
      anon_sym_MD5checksum,
    STATE(182), 1,
      sym_header_info_md5,
  [2617] = 2,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
  [2624] = 2,
    ACTIONS(463), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym__endl,
  [2631] = 2,
    ACTIONS(467), 1,
      anon_sym_flags_COLON,
    STATE(13), 1,
      sym_flag_def,
  [2638] = 1,
    ACTIONS(469), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [2643] = 2,
    ACTIONS(471), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__endl,
  [2650] = 2,
    ACTIONS(475), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__endl,
  [2657] = 1,
    ACTIONS(479), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [2662] = 1,
    ACTIONS(481), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2667] = 2,
    ACTIONS(483), 1,
      anon_sym_Constantpool_COLON,
    STATE(87), 1,
      sym_constant_pool_def,
  [2674] = 2,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_class_def_plain_body,
  [2681] = 1,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2686] = 2,
    ACTIONS(487), 1,
      sym__identifier,
    STATE(39), 1,
      sym_identifier,
  [2693] = 2,
    ACTIONS(487), 1,
      sym__identifier,
    STATE(40), 1,
      sym_identifier,
  [2700] = 2,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_args,
  [2707] = 2,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(109), 1,
      sym_identifier,
  [2714] = 2,
    ACTIONS(489), 1,
      aux_sym_instruction_token1,
    STATE(168), 1,
      sym_instruction,
  [2721] = 1,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      sym_number,
  [2726] = 2,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(191), 1,
      sym_identifier,
  [2733] = 2,
    ACTIONS(381), 1,
      aux_sym_code_info_stat_token1,
    STATE(179), 1,
      sym_code_info_stat,
  [2740] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(37), 1,
      sym_header_info_compile,
  [2747] = 2,
    ACTIONS(218), 1,
      sym__identifier,
    STATE(58), 1,
      sym_identifier,
  [2754] = 2,
    ACTIONS(453), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym__hash_number,
  [2761] = 2,
    ACTIONS(453), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym__hash_number,
  [2768] = 1,
    ACTIONS(491), 2,
      anon_sym_COMMA,
      sym_number,
  [2773] = 1,
    ACTIONS(404), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [2778] = 2,
    ACTIONS(493), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(20), 1,
      sym_line_number_table_def,
  [2785] = 2,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_class_def_plain_body,
  [2792] = 2,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    STATE(230), 1,
      sym_class_def_plain_body,
  [2799] = 2,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_class_def_plain_body,
  [2806] = 2,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym__wrapped_hex_val,
  [2813] = 1,
    ACTIONS(495), 1,
      anon_sym_EQ,
  [2817] = 1,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
  [2821] = 1,
    ACTIONS(499), 1,
      anon_sym_Lastmodified,
  [2825] = 1,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
  [2829] = 1,
    ACTIONS(503), 1,
      aux_sym_source_file_def_token1,
  [2833] = 1,
    ACTIONS(371), 1,
      anon_sym_SEMI,
  [2837] = 1,
    ACTIONS(505), 1,
      sym_number,
  [2841] = 1,
    ACTIONS(507), 1,
      anon_sym_LBRACE,
  [2845] = 1,
    ACTIONS(509), 1,
      anon_sym_Compiledfrom,
  [2849] = 1,
    ACTIONS(511), 1,
      anon_sym_SEMI,
  [2853] = 1,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
  [2857] = 1,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
  [2861] = 1,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
  [2865] = 1,
    ACTIONS(519), 1,
      anon_sym_Lastmodified,
  [2869] = 1,
    ACTIONS(521), 1,
      sym_number,
  [2873] = 1,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
  [2877] = 1,
    ACTIONS(525), 1,
      anon_sym_SEMI,
  [2881] = 1,
    ACTIONS(527), 1,
      sym_hex_value,
  [2885] = 1,
    ACTIONS(529), 1,
      anon_sym_flags_COLON,
  [2889] = 1,
    ACTIONS(531), 1,
      sym_flag_value,
  [2893] = 1,
    ACTIONS(533), 1,
      anon_sym_SEMI,
  [2897] = 1,
    ACTIONS(535), 1,
      anon_sym_COLON2,
  [2901] = 1,
    ACTIONS(537), 1,
      sym_md5,
  [2905] = 1,
    ACTIONS(539), 1,
      anon_sym_MD5checksum,
  [2909] = 1,
    ACTIONS(541), 1,
      sym_number,
  [2913] = 1,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [2917] = 1,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
  [2921] = 1,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
  [2925] = 1,
    ACTIONS(549), 1,
      anon_sym_SEMI,
  [2929] = 1,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
  [2933] = 1,
    ACTIONS(553), 1,
      anon_sym_Lastmodified,
  [2937] = 1,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [2941] = 1,
    ACTIONS(557), 1,
      sym__path_segment,
  [2945] = 1,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
  [2949] = 1,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
  [2953] = 1,
    ACTIONS(563), 1,
      sym_number,
  [2957] = 1,
    ACTIONS(565), 1,
      sym_number,
  [2961] = 1,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
  [2965] = 1,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [2969] = 1,
    ACTIONS(571), 1,
      sym_class_keyword,
  [2973] = 1,
    ACTIONS(377), 1,
      anon_sym_SEMI,
  [2977] = 1,
    ACTIONS(573), 1,
      aux_sym_class_info_item_simple_token1,
  [2981] = 1,
    ACTIONS(575), 1,
      sym_descriptor_value,
  [2985] = 1,
    ACTIONS(577), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [2989] = 1,
    ACTIONS(579), 1,
      anon_sym_COLON,
  [2993] = 1,
    ACTIONS(581), 1,
      anon_sym_DOT,
  [2997] = 1,
    ACTIONS(583), 1,
      aux_sym_header_info_compile_token1,
  [3001] = 1,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
  [3005] = 1,
    ACTIONS(587), 1,
      ts_builtin_sym_end,
  [3009] = 1,
    ACTIONS(589), 1,
      sym_decimal_floating_point_literal,
  [3013] = 1,
    ACTIONS(591), 1,
      anon_sym_Lastmodified,
  [3017] = 1,
    ACTIONS(593), 1,
      anon_sym_Lastmodified,
  [3021] = 1,
    ACTIONS(595), 1,
      sym_number,
  [3025] = 1,
    ACTIONS(597), 1,
      sym_flag_value,
  [3029] = 1,
    ACTIONS(599), 1,
      ts_builtin_sym_end,
  [3033] = 1,
    ACTIONS(601), 1,
      ts_builtin_sym_end,
  [3037] = 1,
    ACTIONS(603), 1,
      sym_flag_value,
  [3041] = 1,
    ACTIONS(605), 1,
      sym_flag_value,
  [3045] = 1,
    ACTIONS(607), 1,
      sym_flag_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 235,
  [SMALL_STATE(7)] = 293,
  [SMALL_STATE(8)] = 351,
  [SMALL_STATE(9)] = 383,
  [SMALL_STATE(10)] = 415,
  [SMALL_STATE(11)] = 447,
  [SMALL_STATE(12)] = 479,
  [SMALL_STATE(13)] = 511,
  [SMALL_STATE(14)] = 542,
  [SMALL_STATE(15)] = 569,
  [SMALL_STATE(16)] = 599,
  [SMALL_STATE(17)] = 629,
  [SMALL_STATE(18)] = 655,
  [SMALL_STATE(19)] = 680,
  [SMALL_STATE(20)] = 705,
  [SMALL_STATE(21)] = 730,
  [SMALL_STATE(22)] = 755,
  [SMALL_STATE(23)] = 786,
  [SMALL_STATE(24)] = 822,
  [SMALL_STATE(25)] = 853,
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 913,
  [SMALL_STATE(28)] = 943,
  [SMALL_STATE(29)] = 965,
  [SMALL_STATE(30)] = 995,
  [SMALL_STATE(31)] = 1017,
  [SMALL_STATE(32)] = 1044,
  [SMALL_STATE(33)] = 1071,
  [SMALL_STATE(34)] = 1098,
  [SMALL_STATE(35)] = 1115,
  [SMALL_STATE(36)] = 1142,
  [SMALL_STATE(37)] = 1169,
  [SMALL_STATE(38)] = 1185,
  [SMALL_STATE(39)] = 1203,
  [SMALL_STATE(40)] = 1216,
  [SMALL_STATE(41)] = 1229,
  [SMALL_STATE(42)] = 1241,
  [SMALL_STATE(43)] = 1259,
  [SMALL_STATE(44)] = 1275,
  [SMALL_STATE(45)] = 1287,
  [SMALL_STATE(46)] = 1305,
  [SMALL_STATE(47)] = 1317,
  [SMALL_STATE(48)] = 1329,
  [SMALL_STATE(49)] = 1345,
  [SMALL_STATE(50)] = 1357,
  [SMALL_STATE(51)] = 1368,
  [SMALL_STATE(52)] = 1381,
  [SMALL_STATE(53)] = 1392,
  [SMALL_STATE(54)] = 1403,
  [SMALL_STATE(55)] = 1421,
  [SMALL_STATE(56)] = 1441,
  [SMALL_STATE(57)] = 1453,
  [SMALL_STATE(58)] = 1471,
  [SMALL_STATE(59)] = 1489,
  [SMALL_STATE(60)] = 1507,
  [SMALL_STATE(61)] = 1525,
  [SMALL_STATE(62)] = 1547,
  [SMALL_STATE(63)] = 1569,
  [SMALL_STATE(64)] = 1584,
  [SMALL_STATE(65)] = 1599,
  [SMALL_STATE(66)] = 1614,
  [SMALL_STATE(67)] = 1633,
  [SMALL_STATE(68)] = 1648,
  [SMALL_STATE(69)] = 1663,
  [SMALL_STATE(70)] = 1680,
  [SMALL_STATE(71)] = 1695,
  [SMALL_STATE(72)] = 1714,
  [SMALL_STATE(73)] = 1733,
  [SMALL_STATE(74)] = 1748,
  [SMALL_STATE(75)] = 1762,
  [SMALL_STATE(76)] = 1778,
  [SMALL_STATE(77)] = 1792,
  [SMALL_STATE(78)] = 1806,
  [SMALL_STATE(79)] = 1820,
  [SMALL_STATE(80)] = 1828,
  [SMALL_STATE(81)] = 1842,
  [SMALL_STATE(82)] = 1856,
  [SMALL_STATE(83)] = 1870,
  [SMALL_STATE(84)] = 1884,
  [SMALL_STATE(85)] = 1898,
  [SMALL_STATE(86)] = 1912,
  [SMALL_STATE(87)] = 1924,
  [SMALL_STATE(88)] = 1938,
  [SMALL_STATE(89)] = 1952,
  [SMALL_STATE(90)] = 1964,
  [SMALL_STATE(91)] = 1978,
  [SMALL_STATE(92)] = 1987,
  [SMALL_STATE(93)] = 1998,
  [SMALL_STATE(94)] = 2007,
  [SMALL_STATE(95)] = 2016,
  [SMALL_STATE(96)] = 2027,
  [SMALL_STATE(97)] = 2038,
  [SMALL_STATE(98)] = 2049,
  [SMALL_STATE(99)] = 2062,
  [SMALL_STATE(100)] = 2069,
  [SMALL_STATE(101)] = 2082,
  [SMALL_STATE(102)] = 2091,
  [SMALL_STATE(103)] = 2100,
  [SMALL_STATE(104)] = 2113,
  [SMALL_STATE(105)] = 2122,
  [SMALL_STATE(106)] = 2131,
  [SMALL_STATE(107)] = 2142,
  [SMALL_STATE(108)] = 2153,
  [SMALL_STATE(109)] = 2166,
  [SMALL_STATE(110)] = 2179,
  [SMALL_STATE(111)] = 2192,
  [SMALL_STATE(112)] = 2203,
  [SMALL_STATE(113)] = 2214,
  [SMALL_STATE(114)] = 2227,
  [SMALL_STATE(115)] = 2237,
  [SMALL_STATE(116)] = 2243,
  [SMALL_STATE(117)] = 2253,
  [SMALL_STATE(118)] = 2263,
  [SMALL_STATE(119)] = 2273,
  [SMALL_STATE(120)] = 2279,
  [SMALL_STATE(121)] = 2289,
  [SMALL_STATE(122)] = 2299,
  [SMALL_STATE(123)] = 2305,
  [SMALL_STATE(124)] = 2313,
  [SMALL_STATE(125)] = 2319,
  [SMALL_STATE(126)] = 2329,
  [SMALL_STATE(127)] = 2339,
  [SMALL_STATE(128)] = 2349,
  [SMALL_STATE(129)] = 2359,
  [SMALL_STATE(130)] = 2369,
  [SMALL_STATE(131)] = 2375,
  [SMALL_STATE(132)] = 2385,
  [SMALL_STATE(133)] = 2395,
  [SMALL_STATE(134)] = 2405,
  [SMALL_STATE(135)] = 2411,
  [SMALL_STATE(136)] = 2421,
  [SMALL_STATE(137)] = 2431,
  [SMALL_STATE(138)] = 2441,
  [SMALL_STATE(139)] = 2447,
  [SMALL_STATE(140)] = 2455,
  [SMALL_STATE(141)] = 2465,
  [SMALL_STATE(142)] = 2475,
  [SMALL_STATE(143)] = 2481,
  [SMALL_STATE(144)] = 2491,
  [SMALL_STATE(145)] = 2501,
  [SMALL_STATE(146)] = 2506,
  [SMALL_STATE(147)] = 2511,
  [SMALL_STATE(148)] = 2516,
  [SMALL_STATE(149)] = 2523,
  [SMALL_STATE(150)] = 2530,
  [SMALL_STATE(151)] = 2537,
  [SMALL_STATE(152)] = 2544,
  [SMALL_STATE(153)] = 2551,
  [SMALL_STATE(154)] = 2556,
  [SMALL_STATE(155)] = 2561,
  [SMALL_STATE(156)] = 2568,
  [SMALL_STATE(157)] = 2575,
  [SMALL_STATE(158)] = 2582,
  [SMALL_STATE(159)] = 2589,
  [SMALL_STATE(160)] = 2596,
  [SMALL_STATE(161)] = 2603,
  [SMALL_STATE(162)] = 2610,
  [SMALL_STATE(163)] = 2617,
  [SMALL_STATE(164)] = 2624,
  [SMALL_STATE(165)] = 2631,
  [SMALL_STATE(166)] = 2638,
  [SMALL_STATE(167)] = 2643,
  [SMALL_STATE(168)] = 2650,
  [SMALL_STATE(169)] = 2657,
  [SMALL_STATE(170)] = 2662,
  [SMALL_STATE(171)] = 2667,
  [SMALL_STATE(172)] = 2674,
  [SMALL_STATE(173)] = 2681,
  [SMALL_STATE(174)] = 2686,
  [SMALL_STATE(175)] = 2693,
  [SMALL_STATE(176)] = 2700,
  [SMALL_STATE(177)] = 2707,
  [SMALL_STATE(178)] = 2714,
  [SMALL_STATE(179)] = 2721,
  [SMALL_STATE(180)] = 2726,
  [SMALL_STATE(181)] = 2733,
  [SMALL_STATE(182)] = 2740,
  [SMALL_STATE(183)] = 2747,
  [SMALL_STATE(184)] = 2754,
  [SMALL_STATE(185)] = 2761,
  [SMALL_STATE(186)] = 2768,
  [SMALL_STATE(187)] = 2773,
  [SMALL_STATE(188)] = 2778,
  [SMALL_STATE(189)] = 2785,
  [SMALL_STATE(190)] = 2792,
  [SMALL_STATE(191)] = 2799,
  [SMALL_STATE(192)] = 2806,
  [SMALL_STATE(193)] = 2813,
  [SMALL_STATE(194)] = 2817,
  [SMALL_STATE(195)] = 2821,
  [SMALL_STATE(196)] = 2825,
  [SMALL_STATE(197)] = 2829,
  [SMALL_STATE(198)] = 2833,
  [SMALL_STATE(199)] = 2837,
  [SMALL_STATE(200)] = 2841,
  [SMALL_STATE(201)] = 2845,
  [SMALL_STATE(202)] = 2849,
  [SMALL_STATE(203)] = 2853,
  [SMALL_STATE(204)] = 2857,
  [SMALL_STATE(205)] = 2861,
  [SMALL_STATE(206)] = 2865,
  [SMALL_STATE(207)] = 2869,
  [SMALL_STATE(208)] = 2873,
  [SMALL_STATE(209)] = 2877,
  [SMALL_STATE(210)] = 2881,
  [SMALL_STATE(211)] = 2885,
  [SMALL_STATE(212)] = 2889,
  [SMALL_STATE(213)] = 2893,
  [SMALL_STATE(214)] = 2897,
  [SMALL_STATE(215)] = 2901,
  [SMALL_STATE(216)] = 2905,
  [SMALL_STATE(217)] = 2909,
  [SMALL_STATE(218)] = 2913,
  [SMALL_STATE(219)] = 2917,
  [SMALL_STATE(220)] = 2921,
  [SMALL_STATE(221)] = 2925,
  [SMALL_STATE(222)] = 2929,
  [SMALL_STATE(223)] = 2933,
  [SMALL_STATE(224)] = 2937,
  [SMALL_STATE(225)] = 2941,
  [SMALL_STATE(226)] = 2945,
  [SMALL_STATE(227)] = 2949,
  [SMALL_STATE(228)] = 2953,
  [SMALL_STATE(229)] = 2957,
  [SMALL_STATE(230)] = 2961,
  [SMALL_STATE(231)] = 2965,
  [SMALL_STATE(232)] = 2969,
  [SMALL_STATE(233)] = 2973,
  [SMALL_STATE(234)] = 2977,
  [SMALL_STATE(235)] = 2981,
  [SMALL_STATE(236)] = 2985,
  [SMALL_STATE(237)] = 2989,
  [SMALL_STATE(238)] = 2993,
  [SMALL_STATE(239)] = 2997,
  [SMALL_STATE(240)] = 3001,
  [SMALL_STATE(241)] = 3005,
  [SMALL_STATE(242)] = 3009,
  [SMALL_STATE(243)] = 3013,
  [SMALL_STATE(244)] = 3017,
  [SMALL_STATE(245)] = 3021,
  [SMALL_STATE(246)] = 3025,
  [SMALL_STATE(247)] = 3029,
  [SMALL_STATE(248)] = 3033,
  [SMALL_STATE(249)] = 3037,
  [SMALL_STATE(250)] = 3041,
  [SMALL_STATE(251)] = 3045,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(16),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(53),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(79),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(79),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(217),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(250),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
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
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(30),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(194),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(192),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(141),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(199),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(234),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(246),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2), SHIFT_REPEAT(32),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(36),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(214),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(181),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(225),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(26),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(117),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 5),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [601] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
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
