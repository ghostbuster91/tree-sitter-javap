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
#define STATE_COUNT 303
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 173
#define ALIAS_COUNT 1
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum {
  sym__identifier = 1,
  sym_interface_keyword = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  anon_sym_throws = 6,
  anon_sym_COMMA = 7,
  anon_sym_Exceptions_COLON = 8,
  anon_sym_LBRACE_RBRACE = 9,
  anon_sym_LT = 10,
  anon_sym_GT = 11,
  anon_sym_AMP = 12,
  anon_sym_public = 13,
  anon_sym_protected = 14,
  anon_sym_private = 15,
  anon_sym_abstract = 16,
  anon_sym_static = 17,
  anon_sym_final = 18,
  anon_sym_strictfp = 19,
  anon_sym_default = 20,
  anon_sym_synchronized = 21,
  anon_sym_native = 22,
  anon_sym_transient = 23,
  anon_sym_volatile = 24,
  anon_sym_Code_COLON = 25,
  anon_sym_LineNumberTable_COLON = 26,
  anon_sym_line = 27,
  anon_sym_COLON = 28,
  anon_sym_COLON2 = 29,
  aux_sym_instruction_token1 = 30,
  anon_sym_POUND = 31,
  aux_sym_code_info_stat_token1 = 32,
  anon_sym_descriptor_COLON = 33,
  sym_descriptor_value = 34,
  anon_sym_flags_COLON = 35,
  sym_flag_value = 36,
  anon_sym_LPAREN = 37,
  anon_sym_RPAREN = 38,
  sym_hex_value = 39,
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  anon_sym_DOT = 42,
  anon_sym_QMARK = 43,
  sym_extends = 44,
  sym_super = 45,
  anon_sym_int = 46,
  anon_sym_char = 47,
  anon_sym_void = 48,
  anon_sym_double = 49,
  anon_sym_float = 50,
  anon_sym_byte = 51,
  sym_number = 52,
  anon_sym_Signature_COLON = 53,
  anon_sym_SourceFile_COLON_DQUOTE = 54,
  aux_sym_source_file_def_token1 = 55,
  anon_sym_DQUOTE = 56,
  anon_sym_NestMembers_COLON = 57,
  anon_sym_InnerClasses_COLON = 58,
  anon_sym_EQ = 59,
  anon_sym_of = 60,
  anon_sym_NestHost_COLON = 61,
  anon_sym_class = 62,
  sym_comment = 63,
  anon_sym_Constantpool_COLON = 64,
  anon_sym_Utf8 = 65,
  aux_sym__constant_pool_item_type_utf8_token1 = 66,
  anon_sym_Class = 67,
  anon_sym_String = 68,
  anon_sym_Methodref = 69,
  anon_sym_Fieldref = 70,
  anon_sym_InterfaceMethodref = 71,
  anon_sym_NameAndType = 72,
  anon_sym_Double = 73,
  anon_sym_Float = 74,
  sym_decimal_floating_point_literal = 75,
  aux_sym_class_info_item_simple_token1 = 76,
  anon_sym_Lastmodified = 77,
  sym_md5 = 78,
  anon_sym_MD5checksum = 79,
  anon_sym_Compiledfrom = 80,
  aux_sym_header_info_compile_token1 = 81,
  sym__path_segment = 82,
  anon_sym_SLASH = 83,
  sym__endl = 84,
  anon_sym_Classfile = 85,
  sym_source_file = 86,
  sym__source_file_verbose = 87,
  sym__source_file_plain = 88,
  sym_class_def_plain = 89,
  sym_interface_def_plain = 90,
  sym_class_def_plain_body = 91,
  sym_class_def_plain_body_item = 92,
  sym_field_def = 93,
  sym_method_def = 94,
  sym_method_throws = 95,
  sym__method_def_verbose = 96,
  sym_exceptions = 97,
  sym_static_block_def = 98,
  sym_type_parameters = 99,
  sym_type_parameter = 100,
  sym_type_bound = 101,
  sym_modifiers = 102,
  sym_class_definition = 103,
  sym_code_def = 104,
  sym_code_info = 105,
  sym_line_number_table_def = 106,
  sym_numered_line = 107,
  sym_numered_instruction = 108,
  sym_instruction = 109,
  sym_code_info_stat = 110,
  sym_descriptor_def = 111,
  sym_flag_def = 112,
  sym__wrapped_hex_val = 113,
  sym_args = 114,
  sym__type = 115,
  sym__simple_type = 116,
  sym_array_type = 117,
  sym_dimensions = 118,
  sym_scoped_type_identifier = 119,
  sym_generic_type = 120,
  sym_type_arguments = 121,
  sym_wildcard = 122,
  sym__wildcard_bounds = 123,
  sym_primitive_type = 124,
  sym_block = 125,
  sym_identifier = 126,
  sym_footer = 127,
  sym_signature = 128,
  sym_source_file_def = 129,
  sym_nested_members = 130,
  sym_inner_classes = 131,
  sym_nest_host = 132,
  sym_constant_pool_def = 133,
  sym__hash_number = 134,
  sym_constant_pool_item = 135,
  sym__constant_pool_item_type = 136,
  sym__constant_pool_item_type_utf8 = 137,
  sym__constant_pool_item_type_class = 138,
  sym__constant_pool_item_type_string = 139,
  sym__constant_pool_item_type_ref = 140,
  sym__constant_pool_item_type_name_and_type = 141,
  sym__constant_pool_item_type_double = 142,
  sym_class_keyword = 143,
  sym_class_info_def = 144,
  sym_class_info_item = 145,
  sym_class_info_item_simple = 146,
  sym_header_info_last_mod = 147,
  sym_header_info_md5 = 148,
  sym_header_info_compile = 149,
  sym_file_path = 150,
  sym__rest_of_the_line = 151,
  sym_header_info = 152,
  sym_header = 153,
  aux_sym__source_file_verbose_repeat1 = 154,
  aux_sym_class_def_plain_body_repeat1 = 155,
  aux_sym_method_throws_repeat1 = 156,
  aux_sym_type_parameters_repeat1 = 157,
  aux_sym_type_bound_repeat1 = 158,
  aux_sym_modifiers_repeat1 = 159,
  aux_sym_class_definition_repeat1 = 160,
  aux_sym_code_info_repeat1 = 161,
  aux_sym_code_info_repeat2 = 162,
  aux_sym_line_number_table_def_repeat1 = 163,
  aux_sym_flag_def_repeat1 = 164,
  aux_sym_dimensions_repeat1 = 165,
  aux_sym_type_arguments_repeat1 = 166,
  aux_sym_nested_members_repeat1 = 167,
  aux_sym_inner_classes_repeat1 = 168,
  aux_sym_constant_pool_def_repeat1 = 169,
  aux_sym_class_info_def_repeat1 = 170,
  aux_sym_class_info_item_simple_repeat1 = 171,
  aux_sym_file_path_repeat1 = 172,
  alias_sym_type_identifier = 173,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_interface_keyword] = "interface_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_throws] = "throws",
  [anon_sym_COMMA] = ",",
  [anon_sym_Exceptions_COLON] = "Exceptions:",
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
  [sym_number] = "number",
  [anon_sym_Signature_COLON] = "Signature:",
  [anon_sym_SourceFile_COLON_DQUOTE] = "SourceFile: \"",
  [aux_sym_source_file_def_token1] = "source_file_def_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_NestMembers_COLON] = "NestMembers:",
  [anon_sym_InnerClasses_COLON] = "InnerClasses:",
  [anon_sym_EQ] = "=",
  [anon_sym_of] = "of",
  [anon_sym_NestHost_COLON] = "NestHost:",
  [anon_sym_class] = "class",
  [sym_comment] = "comment",
  [anon_sym_Constantpool_COLON] = "Constant pool:",
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
  [sym_exceptions] = "exceptions",
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
  [sym_footer] = "footer",
  [sym_signature] = "signature",
  [sym_source_file_def] = "source_file_def",
  [sym_nested_members] = "nested_members",
  [sym_inner_classes] = "inner_classes",
  [sym_nest_host] = "nest_host",
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
  [sym_class_keyword] = "class_keyword",
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
  [aux_sym_nested_members_repeat1] = "nested_members_repeat1",
  [aux_sym_inner_classes_repeat1] = "inner_classes_repeat1",
  [aux_sym_constant_pool_def_repeat1] = "constant_pool_def_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_file_path_repeat1] = "file_path_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym_interface_keyword] = sym_interface_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_throws] = anon_sym_throws,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_Exceptions_COLON] = anon_sym_Exceptions_COLON,
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
  [sym_number] = sym_number,
  [anon_sym_Signature_COLON] = anon_sym_Signature_COLON,
  [anon_sym_SourceFile_COLON_DQUOTE] = anon_sym_SourceFile_COLON_DQUOTE,
  [aux_sym_source_file_def_token1] = aux_sym_source_file_def_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_NestMembers_COLON] = anon_sym_NestMembers_COLON,
  [anon_sym_InnerClasses_COLON] = anon_sym_InnerClasses_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_NestHost_COLON] = anon_sym_NestHost_COLON,
  [anon_sym_class] = anon_sym_class,
  [sym_comment] = sym_comment,
  [anon_sym_Constantpool_COLON] = anon_sym_Constantpool_COLON,
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
  [sym_exceptions] = sym_exceptions,
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
  [sym_footer] = sym_footer,
  [sym_signature] = sym_signature,
  [sym_source_file_def] = sym_source_file_def,
  [sym_nested_members] = sym_nested_members,
  [sym_inner_classes] = sym_inner_classes,
  [sym_nest_host] = sym_nest_host,
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
  [sym_class_keyword] = sym_class_keyword,
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
  [aux_sym_nested_members_repeat1] = aux_sym_nested_members_repeat1,
  [aux_sym_inner_classes_repeat1] = aux_sym_inner_classes_repeat1,
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
  [anon_sym_throws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Exceptions_COLON] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Signature_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_NestMembers_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InnerClasses_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NestHost_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
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
  [sym_exceptions] = {
    .visible = true,
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
  [sym_footer] = {
    .visible = true,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file_def] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_members] = {
    .visible = true,
    .named = true,
  },
  [sym_inner_classes] = {
    .visible = true,
    .named = true,
  },
  [sym_nest_host] = {
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
  [sym_class_keyword] = {
    .visible = true,
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
  [aux_sym_nested_members_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inner_classes_repeat1] = {
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
  [50] = 41,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 38,
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
  [66] = 62,
  [67] = 63,
  [68] = 19,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 22,
  [73] = 73,
  [74] = 21,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 25,
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
  [94] = 24,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 71,
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
  [112] = 26,
  [113] = 29,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 28,
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
  [129] = 34,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 19,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 36,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 33,
  [148] = 148,
  [149] = 35,
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
  [168] = 32,
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
  [227] = 206,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 213,
  [233] = 233,
  [234] = 234,
  [235] = 212,
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
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 249,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 294,
  [301] = 267,
  [302] = 236,
};

static inline bool sym__identifier_character_set_1(int32_t c) {
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

static inline bool sym__identifier_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1519
          ? (c < 890
            ? (c < 248
              ? (c < 186
                ? (c < 170
                  ? c == '$'
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : c <= 246)))
              : (c <= 705 || (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : c <= 887)))))
            : (c <= 893 || (c < 1015
              ? (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))
              : (c <= 1153 || (c < 1369
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))))))
          : (c <= 1522 || (c < 2036
            ? (c < 1786
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : c <= 1775)))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1994
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2144
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))
              : (c <= 2154 || (c < 2208
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3205
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
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
  return (c < 6512
    ? (c < 3024
      ? (c < 2417
        ? (c < 1632
          ? (c < 895
            ? (c < 710
              ? (c < 186
                ? (c < 170
                  ? c == '$'
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : c <= 893)))))
            : (c <= 895 || (c < 1162
              ? (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)))
              : (c <= 1327 || (c < 1488
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : c <= 1610)))))))
          : (c <= 1641 || (c < 2048
            ? (c < 1808
              ? (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : c <= 1791)))
              : (c <= 1808 || (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)))))
            : (c <= 2069 || (c < 2185
              ? (c < 2112
                ? (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))
              : (c <= 2190 || (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2415)))))))))
        : (c <= 2432 || (c < 2738
          ? (c < 2575
            ? (c < 2493
              ? (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : c <= 2489)))
              : (c <= 2493 || (c < 2534
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2565
                  ? c == 2556
                  : c <= 2570)))))
            : (c <= 2576 || (c < 2654
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))
              : (c <= 2654 || (c < 2703
                ? (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2908
            ? (c < 2821
              ? (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : c <= 2809)))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2962
              ? (c < 2947
                ? (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 3976
        ? (c < 3430
          ? (c < 3242
            ? (c < 3165
              ? (c < 3090
                ? (c < 3077
                  ? (c >= 3046 && c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3183 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3332
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3439 || (c < 3718
            ? (c < 3558
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3881 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4824
          ? (c < 4304
            ? (c < 4206
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : c <= 4198)))
              : (c <= 4208 || (c < 4256
                ? (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))
            : (c <= 4346 || (c < 4746
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))
              : (c <= 4749 || (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5905 || (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : c <= 5969)))))
            : (c <= 5996 || (c < 6176
              ? (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6160
                  ? (c >= 6112 && c <= 6121)
                  : c <= 6169)))
              : (c <= 6264 || (c < 6320
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43250
      ? (c < 8508
        ? (c < 8016
          ? (c < 7232
            ? (c < 6823
              ? (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6617)))
                : (c <= 6678 || (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))))
              : (c <= 6823 || (c < 7043
                ? (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))
                : (c <= 7072 || (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : c <= 7203)))))
            : (c <= 7241 || (c < 7413
              ? (c < 7357
                ? (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : c <= 7411)))
              : (c <= 7414 || (c < 7960
                ? (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : c <= 8013)))))))
          : (c <= 8023 || (c < 8182
            ? (c < 8126
              ? (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8124)))
              : (c <= 8126 || (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : c <= 8180)))))
            : (c <= 8188 || (c < 8469
              ? (c < 8450
                ? (c < 8319
                  ? c == 8305
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : c <= 8467)))
              : (c <= 8469 || (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))))))))
        : (c <= 8511 || (c < 12540
          ? (c < 11688
            ? (c < 11520
              ? (c < 11264
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8579 && c <= 8580)))
                : (c <= 11492 || (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : c <= 11507)))
              : (c <= 11557 || (c < 11631
                ? (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))))
            : (c <= 11694 || (c < 11823
              ? (c < 11720
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : c <= 11742)))
              : (c <= 11823 || (c < 12353
                ? (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : (c <= 12341 || (c >= 12347 && c <= 12348)))
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42656
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43072
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43123 || (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43225)))))))))))
      : (c <= 43255 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43264 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(183);
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(187);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(368);
      if (lookahead == '>') ADVANCE(191);
      if (lookahead == '?') ADVANCE(242);
      if (lookahead == 'C') ADVANCE(317);
      if (lookahead == 'E') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(311);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(259);
      if (lookahead == 'N') ADVANCE(292);
      if (lookahead == 'S') ADVANCE(298);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == ']') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(358);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(362);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == 'C') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(358);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(358);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(298);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(358);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(187);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(368);
      if (lookahead == '>') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(220);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(382);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(177);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(382);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(371);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 17:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(369);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(361);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(201);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(366);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(367);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(372);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(372);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(358);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'F') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'H') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(133);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(387);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 135:
      if (lookahead == '}') ADVANCE(189);
      END_STATE();
    case 136:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 138:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 139:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 140:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 141:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 142:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 143:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 179:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 180:
      if (eof) ADVANCE(183);
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(187);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(368);
      if (lookahead == '>') ADVANCE(191);
      if (lookahead == '?') ADVANCE(242);
      if (lookahead == 'C') ADVANCE(317);
      if (lookahead == 'E') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(311);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(259);
      if (lookahead == 'N') ADVANCE(292);
      if (lookahead == 'S') ADVANCE(298);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == ']') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(358);
      END_STATE();
    case 181:
      if (eof) ADVANCE(183);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(187);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '>') ADVANCE(191);
      if (lookahead == '?') ADVANCE(242);
      if (lookahead == 'C') ADVANCE(319);
      if (lookahead == 'E') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(311);
      if (lookahead == 'N') ADVANCE(294);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(181)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(358);
      END_STATE();
    case 182:
      if (eof) ADVANCE(183);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(182)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_Exceptions_COLON);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'g') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 's') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'x') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(358);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(50);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(88);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(72);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(106);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '5') ADVANCE(243);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(193);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(204);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(369);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(361);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(188);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(5);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(201);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(366);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(367);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(194);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(304);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(247);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(301);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(322);
      if (lookahead == 'M') ADVANCE(295);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(322);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(355);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(267);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'i') ADVANCE(314);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(358);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(297);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(358);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(273);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(358);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(316);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(358);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(339);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(358);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(358);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(288);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(289);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(307);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(285);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(328);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(282);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'm') ADVANCE(323);
      if (lookahead == 'n') ADVANCE(337);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(280);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(245);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(334);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(324);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(326);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(251);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(327);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(332);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(253);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(335);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(343);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(341);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(310);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(312);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(336);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(354);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(305);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(320);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(306);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(325);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(266);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(269);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(283);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(290);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(291);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(323);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(271);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(272);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(313);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(270);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(286);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(281);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(338);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(352);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(277);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(308);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(278);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(315);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(329);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(340);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(299);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(350);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(351);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(258);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(264);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(302);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(254);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(287);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(276);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(342);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(347);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(275);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(345);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(249);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(348);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(252);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(344);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(349);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(346);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(255);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(256);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(293);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(261);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(262);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(244);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(268);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(250);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(300);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(321);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(246);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(356);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(331);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(309);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(330);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(274);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_Signature_COLON);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_NestMembers_COLON);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_InnerClasses_COLON);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_NestHost_COLON);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(395);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(392);
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
      if (lookahead == '/') ADVANCE(393);
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
          lookahead == '\r') ADVANCE(390);
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
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(378);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(395);
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
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'M') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(6);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == '8') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 105:
      if (lookahead == 'v') ADVANCE(133);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(144);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_super);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 161:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 167:
      if (lookahead == 'f') ADVANCE(182);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(185);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_extends);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(195);
      END_STATE();
    case 185:
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    case 194:
      if (lookahead == 'M') ADVANCE(201);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 199:
      if (lookahead == 'z') ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 207:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_InterfaceMethodref);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 181},
  [3] = {.lex_state = 181},
  [4] = {.lex_state = 181},
  [5] = {.lex_state = 181},
  [6] = {.lex_state = 181},
  [7] = {.lex_state = 181},
  [8] = {.lex_state = 181},
  [9] = {.lex_state = 181},
  [10] = {.lex_state = 181},
  [11] = {.lex_state = 181},
  [12] = {.lex_state = 181},
  [13] = {.lex_state = 181},
  [14] = {.lex_state = 181},
  [15] = {.lex_state = 181},
  [16] = {.lex_state = 181},
  [17] = {.lex_state = 181},
  [18] = {.lex_state = 181},
  [19] = {.lex_state = 181},
  [20] = {.lex_state = 181},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 181},
  [23] = {.lex_state = 181},
  [24] = {.lex_state = 181},
  [25] = {.lex_state = 181},
  [26] = {.lex_state = 181},
  [27] = {.lex_state = 181},
  [28] = {.lex_state = 181},
  [29] = {.lex_state = 181},
  [30] = {.lex_state = 181},
  [31] = {.lex_state = 181},
  [32] = {.lex_state = 181},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 181},
  [36] = {.lex_state = 181},
  [37] = {.lex_state = 181},
  [38] = {.lex_state = 181},
  [39] = {.lex_state = 181},
  [40] = {.lex_state = 181},
  [41] = {.lex_state = 181},
  [42] = {.lex_state = 181},
  [43] = {.lex_state = 181},
  [44] = {.lex_state = 181},
  [45] = {.lex_state = 181},
  [46] = {.lex_state = 181},
  [47] = {.lex_state = 181},
  [48] = {.lex_state = 181},
  [49] = {.lex_state = 181},
  [50] = {.lex_state = 181},
  [51] = {.lex_state = 181},
  [52] = {.lex_state = 181},
  [53] = {.lex_state = 181},
  [54] = {.lex_state = 181},
  [55] = {.lex_state = 181},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 181},
  [58] = {.lex_state = 181},
  [59] = {.lex_state = 181},
  [60] = {.lex_state = 181},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 181},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 181},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 181},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 182},
  [76] = {.lex_state = 182},
  [77] = {.lex_state = 182},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 181},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 182},
  [82] = {.lex_state = 182},
  [83] = {.lex_state = 182},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 181},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 182},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 181},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 181},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 182},
  [103] = {.lex_state = 182},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 182},
  [111] = {.lex_state = 182},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 181},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 182},
  [120] = {.lex_state = 373},
  [121] = {.lex_state = 182},
  [122] = {.lex_state = 374},
  [123] = {.lex_state = 182},
  [124] = {.lex_state = 182},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 182},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 181},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 181},
  [134] = {.lex_state = 374},
  [135] = {.lex_state = 374},
  [136] = {.lex_state = 182},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 182},
  [139] = {.lex_state = 182},
  [140] = {.lex_state = 374},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 182},
  [144] = {.lex_state = 182},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 182},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 182},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 181},
  [153] = {.lex_state = 181},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 181},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 138},
  [162] = {.lex_state = 181},
  [163] = {.lex_state = 181},
  [164] = {.lex_state = 182},
  [165] = {.lex_state = 182},
  [166] = {.lex_state = 181},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 181},
  [172] = {.lex_state = 181},
  [173] = {.lex_state = 375},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 374},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 181},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 182},
  [183] = {.lex_state = 139},
  [184] = {.lex_state = 182},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 138},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 181},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 182},
  [201] = {.lex_state = 181},
  [202] = {.lex_state = 181},
  [203] = {.lex_state = 181},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 182},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 181},
  [212] = {.lex_state = 181},
  [213] = {.lex_state = 181},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 181},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 376},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 181},
  [226] = {.lex_state = 181},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 182},
  [230] = {.lex_state = 374},
  [231] = {.lex_state = 181},
  [232] = {.lex_state = 181},
  [233] = {.lex_state = 181},
  [234] = {.lex_state = 182},
  [235] = {.lex_state = 181},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 181},
  [242] = {.lex_state = 182},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 140},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 182},
  [248] = {.lex_state = 182},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 141},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 181},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 182},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 7},
  [266] = {.lex_state = 181},
  [267] = {.lex_state = 143},
  [268] = {.lex_state = 7},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 182},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 142},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 181},
  [282] = {.lex_state = 182},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 376},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 181},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 182},
  [291] = {.lex_state = 182},
  [292] = {.lex_state = 138},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 143},
  [302] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_interface_keyword] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_throws] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_Exceptions_COLON] = ACTIONS(1),
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
    [anon_sym_Signature_COLON] = ACTIONS(1),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_NestMembers_COLON] = ACTIONS(1),
    [anon_sym_InnerClasses_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_NestHost_COLON] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_Constantpool_COLON] = ACTIONS(1),
    [anon_sym_Utf8] = ACTIONS(1),
    [anon_sym_Class] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Methodref] = ACTIONS(1),
    [anon_sym_Fieldref] = ACTIONS(1),
    [anon_sym_InterfaceMethodref] = ACTIONS(1),
    [anon_sym_NameAndType] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Lastmodified] = ACTIONS(1),
    [anon_sym_MD5checksum] = ACTIONS(1),
    [anon_sym_Compiledfrom] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(299),
    [sym__source_file_verbose] = STATE(298),
    [sym__source_file_plain] = STATE(298),
    [sym_header_info_compile] = STATE(47),
    [sym_header_info] = STATE(229),
    [sym_header] = STATE(48),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(10), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_scoped_type_identifier,
    STATE(25), 1,
      sym_generic_type,
    STATE(38), 1,
      aux_sym_modifiers_repeat1,
    STATE(58), 1,
      sym_modifiers,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(264), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(79), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(15), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(12), 12,
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
    ACTIONS(18), 1,
      sym__identifier,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_scoped_type_identifier,
    STATE(25), 1,
      sym_generic_type,
    STATE(38), 1,
      aux_sym_modifiers_repeat1,
    STATE(58), 1,
      sym_modifiers,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(264), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(79), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(22), 12,
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
    ACTIONS(18), 1,
      sym__identifier,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_scoped_type_identifier,
    STATE(25), 1,
      sym_generic_type,
    STATE(38), 1,
      aux_sym_modifiers_repeat1,
    STATE(58), 1,
      sym_modifiers,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(264), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(79), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(22), 12,
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
    ACTIONS(18), 1,
      sym__identifier,
    STATE(7), 1,
      aux_sym_class_definition_repeat1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_scoped_type_identifier,
    STATE(25), 1,
      sym_generic_type,
    STATE(38), 1,
      aux_sym_modifiers_repeat1,
    STATE(58), 1,
      sym_modifiers,
    STATE(276), 1,
      sym_class_definition,
    STATE(274), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(79), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(22), 12,
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
      sym__identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_class_definition_repeat1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_scoped_type_identifier,
    STATE(25), 1,
      sym_generic_type,
    STATE(38), 1,
      aux_sym_modifiers_repeat1,
    STATE(58), 1,
      sym_modifiers,
    STATE(274), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(79), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(36), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [293] = 12,
    ACTIONS(18), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_class_definition_repeat1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_scoped_type_identifier,
    STATE(25), 1,
      sym_generic_type,
    STATE(38), 1,
      aux_sym_modifiers_repeat1,
    STATE(58), 1,
      sym_modifiers,
    STATE(274), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(79), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(22), 12,
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
  [351] = 2,
    ACTIONS(43), 11,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(41), 19,
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
  [386] = 2,
    ACTIONS(47), 11,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [421] = 2,
    ACTIONS(51), 10,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [455] = 2,
    ACTIONS(55), 10,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(53), 19,
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
  [489] = 2,
    ACTIONS(59), 10,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(57), 19,
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
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(63), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(61), 19,
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
  [561] = 2,
    ACTIONS(70), 10,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(68), 19,
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
  [595] = 2,
    ACTIONS(74), 10,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(72), 19,
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
  [629] = 4,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(78), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(76), 19,
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
  [667] = 2,
    ACTIONS(63), 9,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(61), 19,
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
  [700] = 2,
    ACTIONS(84), 9,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(82), 19,
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
  [733] = 2,
    ACTIONS(88), 8,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(86), 20,
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
      sym_extends,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [766] = 2,
    ACTIONS(92), 9,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(90), 19,
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
  [799] = 5,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_type_arguments,
    ACTIONS(96), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(94), 19,
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
  [837] = 5,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      anon_sym_DOT,
    STATE(14), 1,
      sym_type_arguments,
    ACTIONS(104), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(102), 19,
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
  [875] = 5,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    ACTIONS(110), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_Code_COLON,
      anon_sym_RPAREN,
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
  [913] = 7,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    STATE(32), 1,
      aux_sym_method_throws_repeat1,
    ACTIONS(114), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(112), 19,
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
  [954] = 3,
    ACTIONS(106), 1,
      anon_sym_DOT,
    ACTIONS(104), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(102), 19,
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
  [986] = 4,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(120), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(118), 19,
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
  [1019] = 6,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(130), 1,
      anon_sym_Code_COLON,
    STATE(37), 1,
      sym_exceptions,
    STATE(44), 1,
      sym_code_def,
    ACTIONS(124), 19,
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
  [1056] = 4,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(134), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(132), 19,
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
  [1089] = 4,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(138), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(136), 19,
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
  [1122] = 4,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      anon_sym_line,
    STATE(31), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(143), 19,
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
  [1154] = 4,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_line,
    STATE(31), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(149), 19,
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
  [1186] = 4,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_method_throws_repeat1,
    ACTIONS(158), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(156), 19,
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
  [1218] = 3,
    ACTIONS(164), 1,
      sym_flag_value,
    ACTIONS(162), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(160), 19,
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
  [1248] = 2,
    ACTIONS(168), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(166), 20,
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
      sym_flag_value,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1276] = 2,
    ACTIONS(138), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(136), 19,
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
  [1304] = 4,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_method_throws_repeat1,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
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
  [1336] = 4,
    ACTIONS(130), 1,
      anon_sym_Code_COLON,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_code_def,
    ACTIONS(173), 19,
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
  [1367] = 4,
    ACTIONS(179), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(41), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(177), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(181), 12,
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
  [1397] = 2,
    ACTIONS(185), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(183), 19,
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
  [1423] = 2,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 20,
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
  [1449] = 4,
    ACTIONS(193), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(41), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(191), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(195), 12,
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
  [1479] = 2,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 19,
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
  [1504] = 2,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 19,
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
  [1529] = 2,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(173), 19,
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
  [1554] = 2,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 19,
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
  [1579] = 2,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 19,
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
  [1604] = 7,
    ACTIONS(214), 1,
      sym_interface_keyword,
    ACTIONS(218), 1,
      anon_sym_class,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(172), 1,
      sym_modifiers,
    STATE(225), 1,
      sym_class_keyword,
    STATE(287), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(216), 12,
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
  [1638] = 7,
    ACTIONS(218), 1,
      anon_sym_class,
    ACTIONS(220), 1,
      sym_interface_keyword,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(153), 1,
      sym_modifiers,
    STATE(210), 1,
      sym_class_info_def,
    STATE(211), 1,
      sym_class_keyword,
    ACTIONS(216), 12,
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
  [1671] = 9,
    ACTIONS(222), 1,
      sym__identifier,
    ACTIONS(224), 1,
      anon_sym_GT,
    ACTIONS(226), 1,
      anon_sym_QMARK,
    STATE(72), 1,
      sym_scoped_type_identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(80), 1,
      sym_generic_type,
    STATE(170), 1,
      sym_wildcard,
    STATE(95), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1707] = 3,
    STATE(50), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(193), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(228), 12,
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
  [1730] = 7,
    ACTIONS(231), 1,
      anon_sym_Utf8,
    ACTIONS(233), 1,
      anon_sym_Class,
    ACTIONS(235), 1,
      anon_sym_String,
    ACTIONS(239), 1,
      anon_sym_NameAndType,
    ACTIONS(241), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(237), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(146), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
  [1761] = 8,
    ACTIONS(222), 1,
      sym__identifier,
    ACTIONS(226), 1,
      anon_sym_QMARK,
    STATE(72), 1,
      sym_scoped_type_identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(80), 1,
      sym_generic_type,
    STATE(224), 1,
      sym_wildcard,
    STATE(100), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1794] = 5,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym_inner_classes_repeat1,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(208), 1,
      sym_modifiers,
    ACTIONS(216), 12,
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
  [1821] = 5,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym_inner_classes_repeat1,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(208), 1,
      sym_modifiers,
    ACTIONS(247), 12,
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
  [1848] = 3,
    STATE(50), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(179), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(250), 12,
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
  [1871] = 4,
    STATE(53), 1,
      aux_sym_inner_classes_repeat1,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(208), 1,
      sym_modifiers,
    ACTIONS(216), 12,
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
  [1895] = 7,
    ACTIONS(222), 1,
      sym__identifier,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_scoped_type_identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(80), 1,
      sym_generic_type,
    STATE(97), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1925] = 7,
    ACTIONS(18), 1,
      sym__identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_scoped_type_identifier,
    STATE(25), 1,
      sym_generic_type,
    STATE(86), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1955] = 6,
    ACTIONS(222), 1,
      sym__identifier,
    STATE(72), 1,
      sym_scoped_type_identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(80), 1,
      sym_generic_type,
    STATE(99), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1982] = 1,
    ACTIONS(256), 14,
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
      anon_sym_class,
  [1999] = 6,
    ACTIONS(222), 1,
      sym__identifier,
    STATE(72), 1,
      sym_scoped_type_identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(80), 1,
      sym_generic_type,
    STATE(105), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2026] = 6,
    ACTIONS(222), 1,
      sym__identifier,
    STATE(72), 1,
      sym_scoped_type_identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(80), 1,
      sym_generic_type,
    STATE(94), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2053] = 6,
    ACTIONS(222), 1,
      sym__identifier,
    STATE(72), 1,
      sym_scoped_type_identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(80), 1,
      sym_generic_type,
    STATE(23), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2080] = 1,
    ACTIONS(258), 14,
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
      anon_sym_class,
  [2097] = 6,
    ACTIONS(222), 1,
      sym__identifier,
    STATE(72), 1,
      sym_scoped_type_identifier,
    STATE(74), 1,
      sym_identifier,
    STATE(80), 1,
      sym_generic_type,
    STATE(85), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2124] = 6,
    ACTIONS(18), 1,
      sym__identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_scoped_type_identifier,
    STATE(25), 1,
      sym_generic_type,
    STATE(24), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2151] = 6,
    ACTIONS(18), 1,
      sym__identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_scoped_type_identifier,
    STATE(25), 1,
      sym_generic_type,
    STATE(23), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(24), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2178] = 2,
    ACTIONS(86), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(88), 12,
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
  [2196] = 1,
    ACTIONS(260), 13,
      ts_builtin_sym_end,
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
  [2212] = 7,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(264), 1,
      anon_sym_flags_COLON,
    ACTIONS(266), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(268), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(88), 1,
      sym_type_parameters,
    STATE(91), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(157), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2236] = 2,
    ACTIONS(272), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(270), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      anon_sym_DOT,
      anon_sym_EQ,
      sym_comment,
      anon_sym_Constantpool_COLON,
  [2250] = 4,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_DOT,
    STATE(14), 1,
      sym_type_arguments,
    ACTIONS(104), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [2268] = 7,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(264), 1,
      anon_sym_flags_COLON,
    ACTIONS(268), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(276), 1,
      anon_sym_Constantpool_COLON,
    STATE(87), 1,
      sym_type_parameters,
    STATE(84), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(157), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2292] = 4,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(278), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_type_arguments,
    ACTIONS(96), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [2310] = 7,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_Signature_COLON,
    ACTIONS(284), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(83), 1,
      sym_source_file_def,
    STATE(184), 1,
      sym_signature,
    STATE(261), 1,
      sym_footer,
    STATE(76), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [2333] = 7,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_Signature_COLON,
    ACTIONS(284), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(83), 1,
      sym_source_file_def,
    STATE(184), 1,
      sym_signature,
    STATE(286), 1,
      sym_footer,
    STATE(110), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [2356] = 4,
    ACTIONS(288), 1,
      anon_sym_POUND,
    STATE(251), 1,
      sym__hash_number,
    STATE(77), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(286), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2372] = 5,
    ACTIONS(291), 1,
      anon_sym_flags_COLON,
    ACTIONS(294), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(296), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(78), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(157), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2390] = 7,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      sym__identifier,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    STATE(166), 1,
      sym_args,
    STATE(186), 1,
      sym_identifier,
  [2412] = 2,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(104), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [2424] = 4,
    ACTIONS(305), 1,
      anon_sym_POUND,
    STATE(251), 1,
      sym__hash_number,
    STATE(77), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(303), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2440] = 7,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(311), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(313), 1,
      anon_sym_NestHost_COLON,
    STATE(101), 1,
      sym_nested_members,
    STATE(154), 1,
      sym_nest_host,
    STATE(280), 1,
      sym_inner_classes,
  [2462] = 7,
    ACTIONS(309), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(311), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(313), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_nested_members,
    STATE(169), 1,
      sym_nest_host,
    STATE(283), 1,
      sym_inner_classes,
  [2484] = 5,
    ACTIONS(264), 1,
      anon_sym_flags_COLON,
    ACTIONS(266), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(268), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(78), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(157), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2502] = 6,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      anon_sym_AMP,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    STATE(151), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2522] = 7,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      sym__identifier,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    STATE(159), 1,
      sym_args,
    STATE(160), 1,
      sym_identifier,
  [2544] = 5,
    ACTIONS(264), 1,
      anon_sym_flags_COLON,
    ACTIONS(266), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(268), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(91), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(157), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2562] = 5,
    ACTIONS(264), 1,
      anon_sym_flags_COLON,
    ACTIONS(268), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(321), 1,
      anon_sym_Constantpool_COLON,
    STATE(89), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(157), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2580] = 5,
    ACTIONS(264), 1,
      anon_sym_flags_COLON,
    ACTIONS(268), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(323), 1,
      anon_sym_Constantpool_COLON,
    STATE(78), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(157), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2598] = 4,
    ACTIONS(305), 1,
      anon_sym_POUND,
    STATE(251), 1,
      sym__hash_number,
    STATE(81), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(325), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2614] = 5,
    ACTIONS(264), 1,
      anon_sym_flags_COLON,
    ACTIONS(268), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(321), 1,
      anon_sym_Constantpool_COLON,
    STATE(78), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(157), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2632] = 5,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(108), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(329), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2649] = 3,
    ACTIONS(337), 1,
      sym__identifier,
    STATE(96), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(335), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [2662] = 6,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    STATE(168), 1,
      aux_sym_method_throws_repeat1,
  [2681] = 6,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_GT,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    STATE(155), 1,
      aux_sym_type_arguments_repeat1,
  [2700] = 3,
    ACTIONS(347), 1,
      sym__identifier,
    STATE(96), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [2713] = 6,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    STATE(158), 1,
      aux_sym_method_throws_repeat1,
  [2732] = 1,
    ACTIONS(270), 6,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_of,
      sym_comment,
  [2741] = 4,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    ACTIONS(352), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [2756] = 4,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2770] = 5,
    ACTIONS(311), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(313), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_nest_host,
    STATE(253), 1,
      sym_inner_classes,
  [2786] = 2,
    ACTIONS(360), 1,
      sym_comment,
    ACTIONS(358), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2796] = 2,
    ACTIONS(364), 1,
      sym_comment,
    ACTIONS(362), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2806] = 4,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(117), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(366), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2820] = 4,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      aux_sym_dimensions_repeat1,
    STATE(20), 1,
      sym_dimensions,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2834] = 5,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(313), 1,
      anon_sym_NestHost_COLON,
    STATE(154), 1,
      sym_nest_host,
    STATE(280), 1,
      sym_inner_classes,
  [2850] = 3,
    ACTIONS(374), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(372), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2862] = 4,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(117), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(378), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2876] = 4,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(104), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(378), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2890] = 3,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(385), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(110), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [2902] = 2,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(387), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2912] = 4,
    ACTIONS(118), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(120), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2926] = 4,
    ACTIONS(136), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(138), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2940] = 3,
    STATE(205), 1,
      sym__wildcard_bounds,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(398), 2,
      sym_extends,
      sym_super,
  [2952] = 4,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      sym_number,
    STATE(116), 1,
      aux_sym_code_info_repeat1,
    STATE(138), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2966] = 4,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      sym_number,
    STATE(181), 1,
      aux_sym_code_info_repeat1,
    STATE(124), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2980] = 4,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(117), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(407), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2994] = 4,
    ACTIONS(132), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(134), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3008] = 2,
    ACTIONS(413), 1,
      sym_comment,
    ACTIONS(411), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3018] = 5,
    ACTIONS(415), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(417), 1,
      sym__path_segment,
    ACTIONS(419), 1,
      anon_sym_SLASH,
    STATE(290), 1,
      sym__rest_of_the_line,
    STATE(291), 1,
      sym_file_path,
  [3034] = 1,
    ACTIONS(421), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [3041] = 4,
    ACTIONS(423), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(425), 1,
      anon_sym_SLASH,
    STATE(177), 1,
      aux_sym_file_path_repeat1,
    STATE(262), 1,
      sym__rest_of_the_line,
  [3054] = 1,
    ACTIONS(427), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3061] = 3,
    ACTIONS(402), 1,
      sym_number,
    ACTIONS(429), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(127), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [3072] = 2,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(431), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3081] = 3,
    ACTIONS(435), 1,
      anon_sym_AMP,
    STATE(126), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3092] = 3,
    ACTIONS(438), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(440), 1,
      sym_number,
    STATE(127), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [3103] = 2,
    ACTIONS(445), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(443), 3,
      anon_sym_LBRACE,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3112] = 2,
    ACTIONS(166), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(168), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3121] = 3,
    ACTIONS(449), 1,
      sym_extends,
    STATE(228), 1,
      sym_type_bound,
    ACTIONS(447), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3132] = 2,
    ACTIONS(453), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(451), 3,
      anon_sym_LBRACE,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3141] = 4,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym_type_parameters,
    STATE(238), 1,
      sym_class_def_plain_body,
  [3154] = 2,
    ACTIONS(86), 1,
      sym__identifier,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [3163] = 4,
    ACTIONS(425), 1,
      anon_sym_SLASH,
    ACTIONS(457), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(140), 1,
      aux_sym_file_path_repeat1,
    STATE(275), 1,
      sym__rest_of_the_line,
  [3176] = 4,
    ACTIONS(425), 1,
      anon_sym_SLASH,
    ACTIONS(459), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(122), 1,
      aux_sym_file_path_repeat1,
    STATE(242), 1,
      sym__rest_of_the_line,
  [3189] = 1,
    ACTIONS(461), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3196] = 4,
    ACTIONS(463), 1,
      anon_sym_POUND,
    ACTIONS(465), 1,
      sym_number,
    ACTIONS(467), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__endl,
  [3209] = 3,
    ACTIONS(402), 1,
      sym_number,
    ACTIONS(471), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(127), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [3220] = 1,
    ACTIONS(473), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3227] = 4,
    ACTIONS(425), 1,
      anon_sym_SLASH,
    ACTIONS(459), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(177), 1,
      aux_sym_file_path_repeat1,
    STATE(242), 1,
      sym__rest_of_the_line,
  [3240] = 3,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_method_throws_repeat1,
    ACTIONS(110), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [3251] = 4,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_type_parameters,
    STATE(269), 1,
      sym_class_def_plain_body,
  [3264] = 1,
    ACTIONS(478), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3271] = 1,
    ACTIONS(480), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3278] = 4,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym_type_parameters,
    STATE(270), 1,
      sym_class_def_plain_body,
  [3291] = 1,
    ACTIONS(482), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3298] = 3,
    ACTIONS(160), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(484), 1,
      sym_flag_value,
    ACTIONS(162), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3309] = 4,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym_type_parameters,
    STATE(239), 1,
      sym_class_def_plain_body,
  [3322] = 2,
    ACTIONS(136), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(138), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3331] = 1,
    ACTIONS(486), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3338] = 3,
    ACTIONS(319), 1,
      anon_sym_AMP,
    STATE(126), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(488), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3349] = 2,
    ACTIONS(490), 1,
      sym__identifier,
    STATE(93), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [3357] = 3,
    ACTIONS(218), 1,
      anon_sym_class,
    ACTIONS(492), 1,
      sym_interface_keyword,
    STATE(233), 1,
      sym_class_keyword,
  [3367] = 3,
    ACTIONS(311), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    STATE(253), 1,
      sym_inner_classes,
  [3377] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_GT,
    STATE(174), 1,
      aux_sym_type_arguments_repeat1,
  [3387] = 3,
    ACTIONS(305), 1,
      anon_sym_POUND,
    ACTIONS(496), 1,
      sym_number,
    STATE(92), 1,
      sym__hash_number,
  [3397] = 2,
    ACTIONS(500), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(498), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3405] = 3,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_method_throws_repeat1,
  [3415] = 3,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    ACTIONS(506), 1,
      anon_sym_throws,
    STATE(250), 1,
      sym_method_throws,
  [3425] = 3,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      sym_args,
  [3435] = 3,
    ACTIONS(510), 1,
      aux_sym_code_info_stat_token1,
    STATE(115), 1,
      sym_code_info_stat,
    STATE(207), 1,
      sym_code_info,
  [3445] = 3,
    ACTIONS(506), 1,
      anon_sym_throws,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    STATE(237), 1,
      sym_method_throws,
  [3455] = 2,
    ACTIONS(514), 1,
      anon_sym_line,
    STATE(30), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [3463] = 1,
    ACTIONS(516), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3469] = 3,
    ACTIONS(518), 1,
      anon_sym_descriptor_COLON,
    STATE(42), 1,
      sym__method_def_verbose,
    STATE(191), 1,
      sym_descriptor_def,
  [3479] = 3,
    ACTIONS(506), 1,
      anon_sym_throws,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    STATE(273), 1,
      sym_method_throws,
  [3489] = 3,
    ACTIONS(311), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    STATE(240), 1,
      sym_inner_classes,
  [3499] = 3,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_method_throws_repeat1,
  [3509] = 3,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      anon_sym_InnerClasses_COLON,
    STATE(280), 1,
      sym_inner_classes,
  [3519] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_GT,
    STATE(155), 1,
      aux_sym_type_arguments_repeat1,
  [3529] = 3,
    ACTIONS(524), 1,
      sym__identifier,
    STATE(130), 1,
      sym_identifier,
    STATE(176), 1,
      sym_type_parameter,
  [3539] = 3,
    ACTIONS(218), 1,
      anon_sym_class,
    ACTIONS(526), 1,
      sym_interface_keyword,
    STATE(192), 1,
      sym_class_keyword,
  [3549] = 3,
    ACTIONS(457), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(528), 1,
      sym__path_segment,
    STATE(275), 1,
      sym__rest_of_the_line,
  [3559] = 3,
    ACTIONS(354), 1,
      anon_sym_GT,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_type_arguments_repeat1,
  [3569] = 3,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_GT,
    STATE(175), 1,
      aux_sym_type_parameters_repeat1,
  [3579] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_GT,
    STATE(178), 1,
      aux_sym_type_parameters_repeat1,
  [3589] = 3,
    ACTIONS(542), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(544), 1,
      anon_sym_SLASH,
    STATE(177), 1,
      aux_sym_file_path_repeat1,
  [3599] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_GT,
    STATE(175), 1,
      aux_sym_type_parameters_repeat1,
  [3609] = 3,
    ACTIONS(524), 1,
      sym__identifier,
    STATE(130), 1,
      sym_identifier,
    STATE(187), 1,
      sym_type_parameter,
  [3619] = 3,
    ACTIONS(305), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      sym_number,
    STATE(107), 1,
      sym__hash_number,
  [3629] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      sym_number,
    STATE(181), 1,
      aux_sym_code_info_repeat1,
  [3639] = 2,
    ACTIONS(556), 1,
      anon_sym_MD5checksum,
    STATE(234), 1,
      sym_header_info_md5,
  [3646] = 2,
    ACTIONS(558), 1,
      aux_sym_instruction_token1,
    STATE(193), 1,
      sym_instruction,
  [3653] = 2,
    ACTIONS(284), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(82), 1,
      sym_source_file_def,
  [3660] = 1,
    ACTIONS(554), 2,
      anon_sym_COMMA,
      sym_number,
  [3665] = 2,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_args,
  [3672] = 1,
    ACTIONS(536), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3677] = 2,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(297), 1,
      sym_class_def_plain_body,
  [3684] = 2,
    ACTIONS(299), 1,
      sym__identifier,
    STATE(142), 1,
      sym_identifier,
  [3691] = 2,
    ACTIONS(510), 1,
      aux_sym_code_info_stat_token1,
    STATE(185), 1,
      sym_code_info_stat,
  [3698] = 2,
    ACTIONS(560), 1,
      anon_sym_flags_COLON,
    STATE(27), 1,
      sym_flag_def,
  [3705] = 2,
    ACTIONS(299), 1,
      sym__identifier,
    STATE(145), 1,
      sym_identifier,
  [3712] = 2,
    ACTIONS(562), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__endl,
  [3719] = 2,
    ACTIONS(305), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym__hash_number,
  [3726] = 2,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(295), 1,
      sym_class_def_plain_body,
  [3733] = 1,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      sym_number,
  [3738] = 1,
    ACTIONS(568), 2,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
  [3743] = 2,
    ACTIONS(305), 1,
      anon_sym_POUND,
    STATE(257), 1,
      sym__hash_number,
  [3750] = 2,
    ACTIONS(570), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__endl,
  [3757] = 1,
    ACTIONS(574), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [3762] = 1,
    ACTIONS(576), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [3767] = 1,
    ACTIONS(578), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [3772] = 2,
    ACTIONS(490), 1,
      sym__identifier,
    STATE(197), 1,
      sym_identifier,
  [3779] = 2,
    ACTIONS(580), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__endl,
  [3786] = 1,
    ACTIONS(584), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3791] = 2,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym__wrapped_hex_val,
  [3798] = 2,
    ACTIONS(588), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(43), 1,
      sym_line_number_table_def,
  [3805] = 2,
    ACTIONS(305), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym__hash_number,
  [3812] = 2,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(270), 1,
      sym_class_def_plain_body,
  [3819] = 2,
    ACTIONS(590), 1,
      anon_sym_Constantpool_COLON,
    STATE(75), 1,
      sym_constant_pool_def,
  [3826] = 2,
    ACTIONS(299), 1,
      sym__identifier,
    STATE(73), 1,
      sym_identifier,
  [3833] = 2,
    ACTIONS(299), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
  [3840] = 2,
    ACTIONS(299), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
  [3847] = 2,
    ACTIONS(305), 1,
      anon_sym_POUND,
    STATE(259), 1,
      sym__hash_number,
  [3854] = 2,
    ACTIONS(592), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym__hash_number,
  [3861] = 2,
    ACTIONS(592), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym__hash_number,
  [3868] = 2,
    ACTIONS(305), 1,
      anon_sym_POUND,
    STATE(260), 1,
      sym__hash_number,
  [3875] = 2,
    ACTIONS(592), 1,
      anon_sym_POUND,
    STATE(241), 1,
      sym__hash_number,
  [3882] = 2,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_class_def_plain_body,
  [3889] = 1,
    ACTIONS(594), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [3894] = 2,
    ACTIONS(592), 1,
      anon_sym_POUND,
    STATE(102), 1,
      sym__hash_number,
  [3901] = 2,
    ACTIONS(592), 1,
      anon_sym_POUND,
    STATE(119), 1,
      sym__hash_number,
  [3908] = 2,
    ACTIONS(596), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(247), 1,
      sym__rest_of_the_line,
  [3915] = 1,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3920] = 2,
    ACTIONS(299), 1,
      sym__identifier,
    STATE(148), 1,
      sym_identifier,
  [3927] = 2,
    ACTIONS(299), 1,
      sym__identifier,
    STATE(132), 1,
      sym_identifier,
  [3934] = 2,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym__wrapped_hex_val,
  [3941] = 1,
    ACTIONS(600), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3946] = 2,
    ACTIONS(602), 1,
      anon_sym_Lastmodified,
    STATE(182), 1,
      sym_header_info_last_mod,
  [3953] = 1,
    ACTIONS(542), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [3958] = 2,
    ACTIONS(604), 1,
      anon_sym_throws,
    STATE(39), 1,
      sym_method_throws,
  [3965] = 2,
    ACTIONS(524), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
  [3972] = 2,
    ACTIONS(299), 1,
      sym__identifier,
    STATE(70), 1,
      sym_identifier,
  [3979] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(60), 1,
      sym_header_info_compile,
  [3986] = 2,
    ACTIONS(524), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
  [3993] = 1,
    ACTIONS(606), 1,
      sym_hex_value,
  [3997] = 1,
    ACTIONS(608), 1,
      anon_sym_SEMI,
  [4001] = 1,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
  [4005] = 1,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
  [4009] = 1,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
  [4013] = 1,
    ACTIONS(616), 1,
      anon_sym_of,
  [4017] = 1,
    ACTIONS(618), 1,
      anon_sym_Lastmodified,
  [4021] = 1,
    ACTIONS(620), 1,
      anon_sym_flags_COLON,
  [4025] = 1,
    ACTIONS(622), 1,
      sym_md5,
  [4029] = 1,
    ACTIONS(624), 1,
      sym_number,
  [4033] = 1,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
  [4037] = 1,
    ACTIONS(628), 1,
      anon_sym_MD5checksum,
  [4041] = 1,
    ACTIONS(630), 1,
      anon_sym_Compiledfrom,
  [4045] = 1,
    ACTIONS(632), 1,
      sym_number,
  [4049] = 1,
    ACTIONS(512), 1,
      anon_sym_SEMI,
  [4053] = 1,
    ACTIONS(634), 1,
      anon_sym_EQ,
  [4057] = 1,
    ACTIONS(636), 1,
      anon_sym_EQ,
  [4061] = 1,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
  [4065] = 1,
    ACTIONS(638), 1,
      anon_sym_COLON2,
  [4069] = 1,
    ACTIONS(640), 1,
      aux_sym_source_file_def_token1,
  [4073] = 1,
    ACTIONS(642), 1,
      sym_descriptor_value,
  [4077] = 1,
    ACTIONS(644), 1,
      anon_sym_SEMI,
  [4081] = 1,
    ACTIONS(646), 1,
      sym_number,
  [4085] = 1,
    ACTIONS(648), 1,
      anon_sym_COLON,
  [4089] = 1,
    ACTIONS(650), 1,
      anon_sym_DOT,
  [4093] = 1,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
  [4097] = 1,
    ACTIONS(654), 1,
      anon_sym_Lastmodified,
  [4101] = 1,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
  [4105] = 1,
    ACTIONS(658), 1,
      anon_sym_SEMI,
  [4109] = 1,
    ACTIONS(660), 1,
      sym_comment,
  [4113] = 1,
    ACTIONS(662), 1,
      anon_sym_COLON,
  [4117] = 1,
    ACTIONS(664), 1,
      sym_flag_value,
  [4121] = 1,
    ACTIONS(666), 1,
      aux_sym_header_info_compile_token1,
  [4125] = 1,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
  [4129] = 1,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
  [4133] = 1,
    ACTIONS(672), 1,
      sym_number,
  [4137] = 1,
    ACTIONS(674), 1,
      sym_number,
  [4141] = 1,
    ACTIONS(504), 1,
      anon_sym_SEMI,
  [4145] = 1,
    ACTIONS(676), 1,
      anon_sym_SEMI,
  [4149] = 1,
    ACTIONS(678), 1,
      anon_sym_Lastmodified,
  [4153] = 1,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
  [4157] = 1,
    ACTIONS(682), 1,
      sym__path_segment,
  [4161] = 1,
    ACTIONS(684), 1,
      sym_comment,
  [4165] = 1,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
  [4169] = 1,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
  [4173] = 1,
    ACTIONS(688), 1,
      anon_sym_class,
  [4177] = 1,
    ACTIONS(690), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4181] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [4185] = 1,
    ACTIONS(692), 1,
      sym_decimal_floating_point_literal,
  [4189] = 1,
    ACTIONS(694), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [4193] = 1,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
  [4197] = 1,
    ACTIONS(698), 1,
      ts_builtin_sym_end,
  [4201] = 1,
    ACTIONS(700), 1,
      sym__identifier,
  [4205] = 1,
    ACTIONS(702), 1,
      anon_sym_SEMI,
  [4209] = 1,
    ACTIONS(704), 1,
      anon_sym_Lastmodified,
  [4213] = 1,
    ACTIONS(706), 1,
      anon_sym_Lastmodified,
  [4217] = 1,
    ACTIONS(708), 1,
      aux_sym_class_info_item_simple_token1,
  [4221] = 1,
    ACTIONS(710), 1,
      anon_sym_RBRACK,
  [4225] = 1,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
  [4229] = 1,
    ACTIONS(714), 1,
      ts_builtin_sym_end,
  [4233] = 1,
    ACTIONS(716), 1,
      sym_number,
  [4237] = 1,
    ACTIONS(718), 1,
      ts_builtin_sym_end,
  [4241] = 1,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
  [4245] = 1,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
  [4249] = 1,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
  [4253] = 1,
    ACTIONS(726), 1,
      sym_flag_value,
  [4257] = 1,
    ACTIONS(728), 1,
      sym_hex_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 235,
  [SMALL_STATE(7)] = 293,
  [SMALL_STATE(8)] = 351,
  [SMALL_STATE(9)] = 386,
  [SMALL_STATE(10)] = 421,
  [SMALL_STATE(11)] = 455,
  [SMALL_STATE(12)] = 489,
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 561,
  [SMALL_STATE(15)] = 595,
  [SMALL_STATE(16)] = 629,
  [SMALL_STATE(17)] = 667,
  [SMALL_STATE(18)] = 700,
  [SMALL_STATE(19)] = 733,
  [SMALL_STATE(20)] = 766,
  [SMALL_STATE(21)] = 799,
  [SMALL_STATE(22)] = 837,
  [SMALL_STATE(23)] = 875,
  [SMALL_STATE(24)] = 913,
  [SMALL_STATE(25)] = 954,
  [SMALL_STATE(26)] = 986,
  [SMALL_STATE(27)] = 1019,
  [SMALL_STATE(28)] = 1056,
  [SMALL_STATE(29)] = 1089,
  [SMALL_STATE(30)] = 1122,
  [SMALL_STATE(31)] = 1154,
  [SMALL_STATE(32)] = 1186,
  [SMALL_STATE(33)] = 1218,
  [SMALL_STATE(34)] = 1248,
  [SMALL_STATE(35)] = 1276,
  [SMALL_STATE(36)] = 1304,
  [SMALL_STATE(37)] = 1336,
  [SMALL_STATE(38)] = 1367,
  [SMALL_STATE(39)] = 1397,
  [SMALL_STATE(40)] = 1423,
  [SMALL_STATE(41)] = 1449,
  [SMALL_STATE(42)] = 1479,
  [SMALL_STATE(43)] = 1504,
  [SMALL_STATE(44)] = 1529,
  [SMALL_STATE(45)] = 1554,
  [SMALL_STATE(46)] = 1579,
  [SMALL_STATE(47)] = 1604,
  [SMALL_STATE(48)] = 1638,
  [SMALL_STATE(49)] = 1671,
  [SMALL_STATE(50)] = 1707,
  [SMALL_STATE(51)] = 1730,
  [SMALL_STATE(52)] = 1761,
  [SMALL_STATE(53)] = 1794,
  [SMALL_STATE(54)] = 1821,
  [SMALL_STATE(55)] = 1848,
  [SMALL_STATE(56)] = 1871,
  [SMALL_STATE(57)] = 1895,
  [SMALL_STATE(58)] = 1925,
  [SMALL_STATE(59)] = 1955,
  [SMALL_STATE(60)] = 1982,
  [SMALL_STATE(61)] = 1999,
  [SMALL_STATE(62)] = 2026,
  [SMALL_STATE(63)] = 2053,
  [SMALL_STATE(64)] = 2080,
  [SMALL_STATE(65)] = 2097,
  [SMALL_STATE(66)] = 2124,
  [SMALL_STATE(67)] = 2151,
  [SMALL_STATE(68)] = 2178,
  [SMALL_STATE(69)] = 2196,
  [SMALL_STATE(70)] = 2212,
  [SMALL_STATE(71)] = 2236,
  [SMALL_STATE(72)] = 2250,
  [SMALL_STATE(73)] = 2268,
  [SMALL_STATE(74)] = 2292,
  [SMALL_STATE(75)] = 2310,
  [SMALL_STATE(76)] = 2333,
  [SMALL_STATE(77)] = 2356,
  [SMALL_STATE(78)] = 2372,
  [SMALL_STATE(79)] = 2390,
  [SMALL_STATE(80)] = 2412,
  [SMALL_STATE(81)] = 2424,
  [SMALL_STATE(82)] = 2440,
  [SMALL_STATE(83)] = 2462,
  [SMALL_STATE(84)] = 2484,
  [SMALL_STATE(85)] = 2502,
  [SMALL_STATE(86)] = 2522,
  [SMALL_STATE(87)] = 2544,
  [SMALL_STATE(88)] = 2562,
  [SMALL_STATE(89)] = 2580,
  [SMALL_STATE(90)] = 2598,
  [SMALL_STATE(91)] = 2614,
  [SMALL_STATE(92)] = 2632,
  [SMALL_STATE(93)] = 2649,
  [SMALL_STATE(94)] = 2662,
  [SMALL_STATE(95)] = 2681,
  [SMALL_STATE(96)] = 2700,
  [SMALL_STATE(97)] = 2713,
  [SMALL_STATE(98)] = 2732,
  [SMALL_STATE(99)] = 2741,
  [SMALL_STATE(100)] = 2756,
  [SMALL_STATE(101)] = 2770,
  [SMALL_STATE(102)] = 2786,
  [SMALL_STATE(103)] = 2796,
  [SMALL_STATE(104)] = 2806,
  [SMALL_STATE(105)] = 2820,
  [SMALL_STATE(106)] = 2834,
  [SMALL_STATE(107)] = 2850,
  [SMALL_STATE(108)] = 2862,
  [SMALL_STATE(109)] = 2876,
  [SMALL_STATE(110)] = 2890,
  [SMALL_STATE(111)] = 2902,
  [SMALL_STATE(112)] = 2912,
  [SMALL_STATE(113)] = 2926,
  [SMALL_STATE(114)] = 2940,
  [SMALL_STATE(115)] = 2952,
  [SMALL_STATE(116)] = 2966,
  [SMALL_STATE(117)] = 2980,
  [SMALL_STATE(118)] = 2994,
  [SMALL_STATE(119)] = 3008,
  [SMALL_STATE(120)] = 3018,
  [SMALL_STATE(121)] = 3034,
  [SMALL_STATE(122)] = 3041,
  [SMALL_STATE(123)] = 3054,
  [SMALL_STATE(124)] = 3061,
  [SMALL_STATE(125)] = 3072,
  [SMALL_STATE(126)] = 3081,
  [SMALL_STATE(127)] = 3092,
  [SMALL_STATE(128)] = 3103,
  [SMALL_STATE(129)] = 3112,
  [SMALL_STATE(130)] = 3121,
  [SMALL_STATE(131)] = 3132,
  [SMALL_STATE(132)] = 3141,
  [SMALL_STATE(133)] = 3154,
  [SMALL_STATE(134)] = 3163,
  [SMALL_STATE(135)] = 3176,
  [SMALL_STATE(136)] = 3189,
  [SMALL_STATE(137)] = 3196,
  [SMALL_STATE(138)] = 3209,
  [SMALL_STATE(139)] = 3220,
  [SMALL_STATE(140)] = 3227,
  [SMALL_STATE(141)] = 3240,
  [SMALL_STATE(142)] = 3251,
  [SMALL_STATE(143)] = 3264,
  [SMALL_STATE(144)] = 3271,
  [SMALL_STATE(145)] = 3278,
  [SMALL_STATE(146)] = 3291,
  [SMALL_STATE(147)] = 3298,
  [SMALL_STATE(148)] = 3309,
  [SMALL_STATE(149)] = 3322,
  [SMALL_STATE(150)] = 3331,
  [SMALL_STATE(151)] = 3338,
  [SMALL_STATE(152)] = 3349,
  [SMALL_STATE(153)] = 3357,
  [SMALL_STATE(154)] = 3367,
  [SMALL_STATE(155)] = 3377,
  [SMALL_STATE(156)] = 3387,
  [SMALL_STATE(157)] = 3397,
  [SMALL_STATE(158)] = 3405,
  [SMALL_STATE(159)] = 3415,
  [SMALL_STATE(160)] = 3425,
  [SMALL_STATE(161)] = 3435,
  [SMALL_STATE(162)] = 3445,
  [SMALL_STATE(163)] = 3455,
  [SMALL_STATE(164)] = 3463,
  [SMALL_STATE(165)] = 3469,
  [SMALL_STATE(166)] = 3479,
  [SMALL_STATE(167)] = 3489,
  [SMALL_STATE(168)] = 3499,
  [SMALL_STATE(169)] = 3509,
  [SMALL_STATE(170)] = 3519,
  [SMALL_STATE(171)] = 3529,
  [SMALL_STATE(172)] = 3539,
  [SMALL_STATE(173)] = 3549,
  [SMALL_STATE(174)] = 3559,
  [SMALL_STATE(175)] = 3569,
  [SMALL_STATE(176)] = 3579,
  [SMALL_STATE(177)] = 3589,
  [SMALL_STATE(178)] = 3599,
  [SMALL_STATE(179)] = 3609,
  [SMALL_STATE(180)] = 3619,
  [SMALL_STATE(181)] = 3629,
  [SMALL_STATE(182)] = 3639,
  [SMALL_STATE(183)] = 3646,
  [SMALL_STATE(184)] = 3653,
  [SMALL_STATE(185)] = 3660,
  [SMALL_STATE(186)] = 3665,
  [SMALL_STATE(187)] = 3672,
  [SMALL_STATE(188)] = 3677,
  [SMALL_STATE(189)] = 3684,
  [SMALL_STATE(190)] = 3691,
  [SMALL_STATE(191)] = 3698,
  [SMALL_STATE(192)] = 3705,
  [SMALL_STATE(193)] = 3712,
  [SMALL_STATE(194)] = 3719,
  [SMALL_STATE(195)] = 3726,
  [SMALL_STATE(196)] = 3733,
  [SMALL_STATE(197)] = 3738,
  [SMALL_STATE(198)] = 3743,
  [SMALL_STATE(199)] = 3750,
  [SMALL_STATE(200)] = 3757,
  [SMALL_STATE(201)] = 3762,
  [SMALL_STATE(202)] = 3767,
  [SMALL_STATE(203)] = 3772,
  [SMALL_STATE(204)] = 3779,
  [SMALL_STATE(205)] = 3786,
  [SMALL_STATE(206)] = 3791,
  [SMALL_STATE(207)] = 3798,
  [SMALL_STATE(208)] = 3805,
  [SMALL_STATE(209)] = 3812,
  [SMALL_STATE(210)] = 3819,
  [SMALL_STATE(211)] = 3826,
  [SMALL_STATE(212)] = 3833,
  [SMALL_STATE(213)] = 3840,
  [SMALL_STATE(214)] = 3847,
  [SMALL_STATE(215)] = 3854,
  [SMALL_STATE(216)] = 3861,
  [SMALL_STATE(217)] = 3868,
  [SMALL_STATE(218)] = 3875,
  [SMALL_STATE(219)] = 3882,
  [SMALL_STATE(220)] = 3889,
  [SMALL_STATE(221)] = 3894,
  [SMALL_STATE(222)] = 3901,
  [SMALL_STATE(223)] = 3908,
  [SMALL_STATE(224)] = 3915,
  [SMALL_STATE(225)] = 3920,
  [SMALL_STATE(226)] = 3927,
  [SMALL_STATE(227)] = 3934,
  [SMALL_STATE(228)] = 3941,
  [SMALL_STATE(229)] = 3946,
  [SMALL_STATE(230)] = 3953,
  [SMALL_STATE(231)] = 3958,
  [SMALL_STATE(232)] = 3965,
  [SMALL_STATE(233)] = 3972,
  [SMALL_STATE(234)] = 3979,
  [SMALL_STATE(235)] = 3986,
  [SMALL_STATE(236)] = 3993,
  [SMALL_STATE(237)] = 3997,
  [SMALL_STATE(238)] = 4001,
  [SMALL_STATE(239)] = 4005,
  [SMALL_STATE(240)] = 4009,
  [SMALL_STATE(241)] = 4013,
  [SMALL_STATE(242)] = 4017,
  [SMALL_STATE(243)] = 4021,
  [SMALL_STATE(244)] = 4025,
  [SMALL_STATE(245)] = 4029,
  [SMALL_STATE(246)] = 4033,
  [SMALL_STATE(247)] = 4037,
  [SMALL_STATE(248)] = 4041,
  [SMALL_STATE(249)] = 4045,
  [SMALL_STATE(250)] = 4049,
  [SMALL_STATE(251)] = 4053,
  [SMALL_STATE(252)] = 4057,
  [SMALL_STATE(253)] = 4061,
  [SMALL_STATE(254)] = 4065,
  [SMALL_STATE(255)] = 4069,
  [SMALL_STATE(256)] = 4073,
  [SMALL_STATE(257)] = 4077,
  [SMALL_STATE(258)] = 4081,
  [SMALL_STATE(259)] = 4085,
  [SMALL_STATE(260)] = 4089,
  [SMALL_STATE(261)] = 4093,
  [SMALL_STATE(262)] = 4097,
  [SMALL_STATE(263)] = 4101,
  [SMALL_STATE(264)] = 4105,
  [SMALL_STATE(265)] = 4109,
  [SMALL_STATE(266)] = 4113,
  [SMALL_STATE(267)] = 4117,
  [SMALL_STATE(268)] = 4121,
  [SMALL_STATE(269)] = 4125,
  [SMALL_STATE(270)] = 4129,
  [SMALL_STATE(271)] = 4133,
  [SMALL_STATE(272)] = 4137,
  [SMALL_STATE(273)] = 4141,
  [SMALL_STATE(274)] = 4145,
  [SMALL_STATE(275)] = 4149,
  [SMALL_STATE(276)] = 4153,
  [SMALL_STATE(277)] = 4157,
  [SMALL_STATE(278)] = 4161,
  [SMALL_STATE(279)] = 4165,
  [SMALL_STATE(280)] = 4169,
  [SMALL_STATE(281)] = 4173,
  [SMALL_STATE(282)] = 4177,
  [SMALL_STATE(283)] = 4181,
  [SMALL_STATE(284)] = 4185,
  [SMALL_STATE(285)] = 4189,
  [SMALL_STATE(286)] = 4193,
  [SMALL_STATE(287)] = 4197,
  [SMALL_STATE(288)] = 4201,
  [SMALL_STATE(289)] = 4205,
  [SMALL_STATE(290)] = 4209,
  [SMALL_STATE(291)] = 4213,
  [SMALL_STATE(292)] = 4217,
  [SMALL_STATE(293)] = 4221,
  [SMALL_STATE(294)] = 4225,
  [SMALL_STATE(295)] = 4229,
  [SMALL_STATE(296)] = 4233,
  [SMALL_STATE(297)] = 4237,
  [SMALL_STATE(298)] = 4241,
  [SMALL_STATE(299)] = 4245,
  [SMALL_STATE(300)] = 4249,
  [SMALL_STATE(301)] = 4253,
  [SMALL_STATE(302)] = 4257,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(19),
  [10] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(38),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(18),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(38),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(293),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_throws_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(301),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(258),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2), SHIFT_REPEAT(67),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exceptions, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exceptions, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(41),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(50),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(55),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(249),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(206),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(156),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(133),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(267),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(292),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(59),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(254),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2), SHIFT_REPEAT(63),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(52),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(179),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(277),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(190),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nest_host, 3),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_keyword, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [722] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
