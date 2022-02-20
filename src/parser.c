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
#define STATE_COUNT 341
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 1
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum {
  sym__identifier = 1,
  anon_sym_extends = 2,
  anon_sym_implements = 3,
  anon_sym_COMMA = 4,
  sym_interface_keyword = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_SEMI = 8,
  anon_sym_throws = 9,
  anon_sym_Exceptions_COLON = 10,
  anon_sym_LBRACE_RBRACE = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_AMP = 14,
  anon_sym_public = 15,
  anon_sym_protected = 16,
  anon_sym_private = 17,
  anon_sym_abstract = 18,
  anon_sym_static = 19,
  anon_sym_final = 20,
  anon_sym_strictfp = 21,
  anon_sym_default = 22,
  anon_sym_synchronized = 23,
  anon_sym_native = 24,
  anon_sym_transient = 25,
  anon_sym_volatile = 26,
  anon_sym_Code_COLON = 27,
  anon_sym_LineNumberTable_COLON = 28,
  anon_sym_line = 29,
  anon_sym_COLON = 30,
  anon_sym_COLON2 = 31,
  aux_sym_instruction_token1 = 32,
  anon_sym_POUND = 33,
  aux_sym_code_info_stat_token1 = 34,
  anon_sym_descriptor_COLON = 35,
  sym_descriptor_value = 36,
  anon_sym_flags_COLON = 37,
  sym_flag_value = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  sym_hex_value = 41,
  anon_sym_LBRACK = 42,
  anon_sym_RBRACK = 43,
  anon_sym_DOT = 44,
  anon_sym_QMARK = 45,
  sym_super = 46,
  anon_sym_int = 47,
  anon_sym_char = 48,
  anon_sym_void = 49,
  anon_sym_double = 50,
  anon_sym_float = 51,
  anon_sym_byte = 52,
  sym_number = 53,
  anon_sym_Signature_COLON = 54,
  anon_sym_SourceFile_COLON_DQUOTE = 55,
  aux_sym_source_file_def_token1 = 56,
  anon_sym_DQUOTE = 57,
  anon_sym_NestMembers_COLON = 58,
  anon_sym_InnerClasses_COLON = 59,
  anon_sym_EQ = 60,
  anon_sym_of = 61,
  anon_sym_NestHost_COLON = 62,
  anon_sym_class = 63,
  sym_comment = 64,
  anon_sym_Constantpool_COLON = 65,
  anon_sym_Utf8 = 66,
  aux_sym__constant_pool_item_type_utf8_token1 = 67,
  anon_sym_Class = 68,
  anon_sym_String = 69,
  anon_sym_Methodref = 70,
  anon_sym_Fieldref = 71,
  anon_sym_InterfaceMethodref = 72,
  anon_sym_NameAndType = 73,
  anon_sym_Double = 74,
  anon_sym_Float = 75,
  sym_decimal_floating_point_literal = 76,
  aux_sym_class_info_item_simple_token1 = 77,
  anon_sym_Lastmodified = 78,
  sym_md5 = 79,
  anon_sym_MD5checksum = 80,
  anon_sym_Compiledfrom = 81,
  aux_sym_header_info_compile_token1 = 82,
  sym__path_segment = 83,
  anon_sym_SLASH = 84,
  sym__endl = 85,
  anon_sym_Classfile = 86,
  sym_source_file = 87,
  sym__source_file_verbose = 88,
  sym__source_file_plain = 89,
  sym_class_def_plain = 90,
  sym_interface_def_plain = 91,
  sym_superclass = 92,
  sym_super_interfaces = 93,
  sym_interface_type_list = 94,
  sym_class_def_plain_body = 95,
  sym_class_def_plain_body_item = 96,
  sym_field_def = 97,
  sym_method_def = 98,
  sym_method_throws = 99,
  sym__method_def_verbose = 100,
  sym_exceptions = 101,
  sym_static_block_def = 102,
  sym_type_parameters = 103,
  sym_type_parameter = 104,
  sym_type_bound = 105,
  sym_modifiers = 106,
  sym_class_definition = 107,
  sym_code_def = 108,
  sym_code_info = 109,
  sym_line_number_table_def = 110,
  sym_numered_line = 111,
  sym_numered_instruction = 112,
  sym_instruction = 113,
  sym_code_info_stat = 114,
  sym_descriptor_def = 115,
  sym_flag_def = 116,
  sym__wrapped_hex_val = 117,
  sym_args = 118,
  sym__type = 119,
  sym__simple_type = 120,
  sym_array_type = 121,
  sym_dimensions = 122,
  sym_scoped_type_identifier = 123,
  sym_generic_type = 124,
  sym_type_arguments = 125,
  sym_wildcard = 126,
  sym__wildcard_bounds = 127,
  sym_extends = 128,
  sym_primitive_type = 129,
  sym_block = 130,
  sym_identifier = 131,
  sym_footer = 132,
  sym_signature = 133,
  sym_source_file_def = 134,
  sym_nested_members = 135,
  sym_inner_classes = 136,
  sym_nest_host = 137,
  sym_constant_pool_def = 138,
  sym__hash_number = 139,
  sym_constant_pool_item = 140,
  sym__constant_pool_item_type = 141,
  sym__constant_pool_item_type_utf8 = 142,
  sym__constant_pool_item_type_class = 143,
  sym__constant_pool_item_type_string = 144,
  sym__constant_pool_item_type_ref = 145,
  sym__constant_pool_item_type_name_and_type = 146,
  sym__constant_pool_item_type_double = 147,
  sym_class_keyword = 148,
  sym_class_info_def = 149,
  sym_class_info_item = 150,
  sym_class_info_item_simple = 151,
  sym_header_info_last_mod = 152,
  sym_header_info_md5 = 153,
  sym_header_info_compile = 154,
  sym_file_path = 155,
  sym__rest_of_the_line = 156,
  sym_header_info = 157,
  sym_header = 158,
  aux_sym__source_file_verbose_repeat1 = 159,
  aux_sym_interface_type_list_repeat1 = 160,
  aux_sym_class_def_plain_body_repeat1 = 161,
  aux_sym_type_parameters_repeat1 = 162,
  aux_sym_type_bound_repeat1 = 163,
  aux_sym_modifiers_repeat1 = 164,
  aux_sym_class_definition_repeat1 = 165,
  aux_sym_code_info_repeat1 = 166,
  aux_sym_code_info_repeat2 = 167,
  aux_sym_line_number_table_def_repeat1 = 168,
  aux_sym_flag_def_repeat1 = 169,
  aux_sym_dimensions_repeat1 = 170,
  aux_sym_type_arguments_repeat1 = 171,
  aux_sym_nested_members_repeat1 = 172,
  aux_sym_inner_classes_repeat1 = 173,
  aux_sym_constant_pool_def_repeat1 = 174,
  aux_sym_class_info_def_repeat1 = 175,
  aux_sym_class_info_item_simple_repeat1 = 176,
  aux_sym_file_path_repeat1 = 177,
  alias_sym_type_identifier = 178,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_extends] = "extends",
  [anon_sym_implements] = "implements",
  [anon_sym_COMMA] = ",",
  [sym_interface_keyword] = "interface_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_throws] = "throws",
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
  [sym_superclass] = "superclass",
  [sym_super_interfaces] = "super_interfaces",
  [sym_interface_type_list] = "interface_type_list",
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
  [sym_extends] = "extends",
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
  [aux_sym_interface_type_list_repeat1] = "interface_type_list_repeat1",
  [aux_sym_class_def_plain_body_repeat1] = "class_def_plain_body_repeat1",
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
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_implements] = anon_sym_implements,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_interface_keyword] = sym_interface_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_throws] = anon_sym_throws,
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
  [sym_superclass] = sym_superclass,
  [sym_super_interfaces] = sym_super_interfaces,
  [sym_interface_type_list] = sym_interface_type_list,
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
  [sym_extends] = sym_extends,
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
  [aux_sym_interface_type_list_repeat1] = aux_sym_interface_type_list_repeat1,
  [aux_sym_class_def_plain_body_repeat1] = aux_sym_class_def_plain_body_repeat1,
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
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [sym_superclass] = {
    .visible = true,
    .named = true,
  },
  [sym_super_interfaces] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_type_list] = {
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
  [sym_extends] = {
    .visible = true,
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
  [aux_sym_interface_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_def_plain_body_repeat1] = {
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
  field_interfaces = 3,
  field_superclass = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_dimensions] = "dimensions",
  [field_element] = "element",
  [field_interfaces] = "interfaces",
  [field_superclass] = "superclass",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [10] = {.index = 8, .length = 2},
  [11] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 1},
  [13] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_superclass, 2},
  [1] =
    {field_interfaces, 2},
  [2] =
    {field_dimensions, 1},
    {field_element, 0},
  [4] =
    {field_interfaces, 3},
    {field_superclass, 2},
  [6] =
    {field_superclass, 3},
  [7] =
    {field_interfaces, 3},
  [8] =
    {field_interfaces, 4},
    {field_superclass, 3},
  [10] =
    {field_superclass, 4},
  [11] =
    {field_interfaces, 4},
  [12] =
    {field_interfaces, 5},
    {field_superclass, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [8] = {
    [2] = alias_sym_type_identifier,
  },
  [9] = {
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
  [50] = 50,
  [51] = 51,
  [52] = 39,
  [53] = 53,
  [54] = 38,
  [55] = 55,
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
  [93] = 70,
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
  [113] = 30,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 29,
  [124] = 28,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 33,
  [133] = 133,
  [134] = 7,
  [135] = 36,
  [136] = 35,
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
  [152] = 7,
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
  [165] = 163,
  [166] = 159,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 161,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 177,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 173,
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
  [245] = 216,
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
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 322,
  [335] = 335,
  [336] = 336,
  [337] = 281,
  [338] = 256,
  [339] = 339,
  [340] = 305,
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
      if (eof) ADVANCE(184);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(369);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(243);
      if (lookahead == 'C') ADVANCE(318);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead == 'I') ADVANCE(312);
      if (lookahead == 'L') ADVANCE(266);
      if (lookahead == 'M') ADVANCE(260);
      if (lookahead == 'N') ADVANCE(293);
      if (lookahead == 'S') ADVANCE(299);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(359);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(363);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == 'C') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(359);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'S') ADVANCE(299);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(359);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(369);
      if (lookahead == 'C') ADVANCE(221);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(383);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(177);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(383);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(372);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 16:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(370);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(362);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(367);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(368);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(373);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(195);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(234);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(359);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'F') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'H') ADVANCE(102);
      if (lookahead == 'M') ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(132);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(387);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 134:
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(134)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(359);
      END_STATE();
    case 135:
      if (lookahead == '}') ADVANCE(190);
      END_STATE();
    case 136:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 138:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 139:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 140:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 141:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 142:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(390);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 143:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 179:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 180:
      if (eof) ADVANCE(184);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(369);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(243);
      if (lookahead == 'C') ADVANCE(318);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead == 'I') ADVANCE(312);
      if (lookahead == 'L') ADVANCE(266);
      if (lookahead == 'M') ADVANCE(260);
      if (lookahead == 'N') ADVANCE(293);
      if (lookahead == 'S') ADVANCE(299);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(359);
      END_STATE();
    case 181:
      if (eof) ADVANCE(184);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(243);
      if (lookahead == 'C') ADVANCE(320);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead == 'I') ADVANCE(312);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(182)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(359);
      END_STATE();
    case 182:
      if (eof) ADVANCE(184);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(243);
      if (lookahead == 'C') ADVANCE(320);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead == 'I') ADVANCE(312);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(182)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(359);
      END_STATE();
    case 183:
      if (eof) ADVANCE(184);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(183)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_Exceptions_COLON);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 'g') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'x') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(359);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(49);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(87);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(71);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(105);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '5') ADVANCE(244);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(194);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(205);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(370);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(362);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(189);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(5);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(202);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(367);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(368);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(195);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(305);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(248);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(302);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(323);
      if (lookahead == 'M') ADVANCE(296);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(323);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(356);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(268);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(315);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(359);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(298);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(359);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(274);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(359);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(317);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(359);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(340);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(359);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(354);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(359);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(289);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(290);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(308);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(286);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(329);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(283);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(338);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(281);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(246);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(249);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(264);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(280);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(335);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(325);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(327);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(252);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(333);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(254);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(336);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(344);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(342);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(311);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(313);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(337);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'o') ADVANCE(355);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(306);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(321);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(307);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(326);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(267);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(270);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(284);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(291);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(292);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(324);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(272);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(273);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(314);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(271);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(287);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(282);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(339);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(353);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(278);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(309);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(279);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(316);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(330);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(341);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(300);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(351);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(352);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(259);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(265);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(303);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(255);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(288);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(277);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(343);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(348);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(276);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(346);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(250);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(349);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(253);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(345);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(350);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(347);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(256);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(257);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(294);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(262);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(263);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(245);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(269);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(251);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(301);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(322);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(247);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(357);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(332);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(310);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(331);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(275);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_Signature_COLON);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_NestMembers_COLON);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_InnerClasses_COLON);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_NestHost_COLON);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(396);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(374);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(379);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(376);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(379);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(390);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(379);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(396);
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
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == '8') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(137);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 116:
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_super);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 166:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 172:
      if (lookahead == 'f') ADVANCE(188);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(191);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 190:
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 191:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    case 201:
      if (lookahead == 'M') ADVANCE(209);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 207:
      if (lookahead == 'z') ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 216:
      if (lookahead == 'h') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 223:
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
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 181},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 181},
  [38] = {.lex_state = 134},
  [39] = {.lex_state = 134},
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
  [59] = {.lex_state = 134},
  [60] = {.lex_state = 181},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 181},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 181},
  [68] = {.lex_state = 181},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 181},
  [73] = {.lex_state = 181},
  [74] = {.lex_state = 183},
  [75] = {.lex_state = 181},
  [76] = {.lex_state = 181},
  [77] = {.lex_state = 183},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 183},
  [80] = {.lex_state = 181},
  [81] = {.lex_state = 181},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 183},
  [84] = {.lex_state = 183},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 181},
  [89] = {.lex_state = 183},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 183},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 181},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 181},
  [99] = {.lex_state = 181},
  [100] = {.lex_state = 181},
  [101] = {.lex_state = 181},
  [102] = {.lex_state = 181},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 181},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 183},
  [108] = {.lex_state = 183},
  [109] = {.lex_state = 183},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 183},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 183},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 181},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 374},
  [127] = {.lex_state = 181},
  [128] = {.lex_state = 375},
  [129] = {.lex_state = 375},
  [130] = {.lex_state = 183},
  [131] = {.lex_state = 375},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 181},
  [138] = {.lex_state = 183},
  [139] = {.lex_state = 183},
  [140] = {.lex_state = 181},
  [141] = {.lex_state = 375},
  [142] = {.lex_state = 183},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 181},
  [145] = {.lex_state = 183},
  [146] = {.lex_state = 183},
  [147] = {.lex_state = 183},
  [148] = {.lex_state = 181},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 181},
  [151] = {.lex_state = 183},
  [152] = {.lex_state = 181},
  [153] = {.lex_state = 183},
  [154] = {.lex_state = 183},
  [155] = {.lex_state = 181},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 183},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 181},
  [161] = {.lex_state = 181},
  [162] = {.lex_state = 138},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 376},
  [168] = {.lex_state = 181},
  [169] = {.lex_state = 181},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 181},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 375},
  [177] = {.lex_state = 181},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 181},
  [181] = {.lex_state = 183},
  [182] = {.lex_state = 183},
  [183] = {.lex_state = 181},
  [184] = {.lex_state = 181},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 181},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 181},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 181},
  [197] = {.lex_state = 139},
  [198] = {.lex_state = 181},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 183},
  [206] = {.lex_state = 181},
  [207] = {.lex_state = 183},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 138},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 181},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 183},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 375},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 183},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 181},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 181},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 181},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 181},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 181},
  [240] = {.lex_state = 183},
  [241] = {.lex_state = 377},
  [242] = {.lex_state = 181},
  [243] = {.lex_state = 181},
  [244] = {.lex_state = 181},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 183},
  [251] = {.lex_state = 181},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 143},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 7},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 183},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 377},
  [280] = {.lex_state = 138},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 181},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 181},
  [298] = {.lex_state = 181},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 7},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 183},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 140},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 183},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 183},
  [327] = {.lex_state = 141},
  [328] = {.lex_state = 183},
  [329] = {.lex_state = 183},
  [330] = {.lex_state = 142},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 181},
  [333] = {.lex_state = 183},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 183},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 143},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_implements] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_interface_keyword] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_throws] = ACTIONS(1),
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
    [sym_source_file] = STATE(339),
    [sym__source_file_verbose] = STATE(336),
    [sym__source_file_plain] = STATE(336),
    [sym_header_info_compile] = STATE(47),
    [sym_header_info] = STATE(250),
    [sym_header] = STATE(48),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(39), 1,
      aux_sym_modifiers_repeat1,
    STATE(59), 1,
      sym_modifiers,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(316), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(88), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [59] = 12,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(39), 1,
      aux_sym_modifiers_repeat1,
    STATE(59), 1,
      sym_modifiers,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(316), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(88), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(23), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [118] = 12,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(39), 1,
      aux_sym_modifiers_repeat1,
    STATE(59), 1,
      sym_modifiers,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(316), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(88), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [177] = 5,
    ACTIONS(32), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_type_arguments,
    ACTIONS(30), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(28), 20,
      anon_sym_implements,
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
  [221] = 5,
    ACTIONS(32), 1,
      anon_sym_LT,
    ACTIONS(40), 1,
      anon_sym_DOT,
    STATE(13), 1,
      sym_type_arguments,
    ACTIONS(38), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(36), 20,
      anon_sym_implements,
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
  [265] = 2,
    ACTIONS(44), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(42), 21,
      anon_sym_extends,
      anon_sym_implements,
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
  [303] = 12,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(9), 1,
      aux_sym_class_definition_repeat1,
    STATE(20), 1,
      sym_generic_type,
    STATE(39), 1,
      aux_sym_modifiers_repeat1,
    STATE(59), 1,
      sym_modifiers,
    STATE(304), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(88), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [361] = 12,
    ACTIONS(48), 1,
      sym__identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(9), 1,
      aux_sym_class_definition_repeat1,
    STATE(20), 1,
      sym_generic_type,
    STATE(39), 1,
      aux_sym_modifiers_repeat1,
    STATE(59), 1,
      sym_modifiers,
    STATE(304), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(88), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(56), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(53), 12,
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
  [419] = 12,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(8), 1,
      aux_sym_class_definition_repeat1,
    STATE(20), 1,
      sym_generic_type,
    STATE(39), 1,
      aux_sym_modifiers_repeat1,
    STATE(59), 1,
      sym_modifiers,
    STATE(303), 1,
      sym_class_definition,
    STATE(304), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(88), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [477] = 2,
    ACTIONS(61), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(59), 20,
      anon_sym_implements,
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
  [514] = 2,
    ACTIONS(65), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(63), 20,
      anon_sym_implements,
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
  [551] = 2,
    ACTIONS(69), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(67), 20,
      anon_sym_implements,
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
  [587] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(73), 9,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(71), 20,
      anon_sym_implements,
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
  [627] = 2,
    ACTIONS(80), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(78), 20,
      anon_sym_implements,
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
  [663] = 2,
    ACTIONS(84), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(82), 20,
      anon_sym_implements,
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
  [699] = 2,
    ACTIONS(88), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(86), 20,
      anon_sym_implements,
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
  [735] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(92), 9,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(90), 20,
      anon_sym_implements,
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
  [775] = 2,
    ACTIONS(98), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(96), 20,
      anon_sym_implements,
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
  [811] = 3,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(38), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(36), 20,
      anon_sym_implements,
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
  [849] = 2,
    ACTIONS(102), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(100), 20,
      anon_sym_implements,
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
  [884] = 2,
    ACTIONS(106), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(104), 20,
      anon_sym_implements,
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
  [919] = 2,
    ACTIONS(73), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(71), 20,
      anon_sym_implements,
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
  [954] = 5,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    ACTIONS(110), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
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
  [993] = 7,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    STATE(31), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(116), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
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
  [1035] = 4,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(110), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
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
  [1070] = 6,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(127), 1,
      anon_sym_Code_COLON,
    STATE(37), 1,
      sym_exceptions,
    STATE(46), 1,
      sym_code_def,
    ACTIONS(121), 19,
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
  [1107] = 4,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(133), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(129), 19,
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
  [1140] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(140), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(135), 19,
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
  [1173] = 4,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(144), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(142), 19,
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
  [1206] = 4,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(148), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_Code_COLON,
    ACTIONS(146), 19,
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
  [1239] = 4,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      anon_sym_line,
    STATE(34), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(150), 19,
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
  [1271] = 3,
    ACTIONS(160), 1,
      sym_flag_value,
    ACTIONS(158), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
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
  [1301] = 4,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      anon_sym_line,
    STATE(34), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(162), 19,
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
  [1333] = 2,
    ACTIONS(140), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(135), 19,
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
  [1361] = 2,
    ACTIONS(171), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(169), 20,
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
  [1389] = 4,
    ACTIONS(127), 1,
      anon_sym_Code_COLON,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
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
  [1420] = 4,
    ACTIONS(179), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(38), 1,
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
  [1450] = 4,
    ACTIONS(186), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(38), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(184), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(188), 12,
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
  [1480] = 2,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 20,
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
  [1506] = 2,
    ACTIONS(196), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(194), 19,
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
  [1532] = 2,
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
  [1557] = 2,
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
  [1582] = 2,
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
  [1607] = 2,
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
  [1632] = 2,
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
  [1657] = 7,
    ACTIONS(214), 1,
      sym_interface_keyword,
    ACTIONS(218), 1,
      anon_sym_class,
    STATE(52), 1,
      aux_sym_modifiers_repeat1,
    STATE(168), 1,
      sym_modifiers,
    STATE(242), 1,
      sym_class_keyword,
    STATE(331), 2,
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
  [1691] = 7,
    ACTIONS(218), 1,
      anon_sym_class,
    ACTIONS(220), 1,
      sym_interface_keyword,
    STATE(52), 1,
      aux_sym_modifiers_repeat1,
    STATE(169), 1,
      sym_modifiers,
    STATE(233), 1,
      sym_class_info_def,
    STATE(239), 1,
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
  [1724] = 9,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(222), 1,
      anon_sym_GT,
    ACTIONS(224), 1,
      anon_sym_QMARK,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(192), 1,
      sym_wildcard,
    STATE(97), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1760] = 5,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      aux_sym_modifiers_repeat1,
    STATE(55), 1,
      aux_sym_inner_classes_repeat1,
    STATE(224), 1,
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
  [1787] = 8,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(224), 1,
      anon_sym_QMARK,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(252), 1,
      sym_wildcard,
    STATE(118), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1820] = 3,
    STATE(54), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(186), 3,
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
  [1843] = 7,
    ACTIONS(230), 1,
      anon_sym_Utf8,
    ACTIONS(232), 1,
      anon_sym_Class,
    ACTIONS(234), 1,
      anon_sym_String,
    ACTIONS(238), 1,
      anon_sym_NameAndType,
    ACTIONS(240), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(236), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(157), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
  [1874] = 3,
    STATE(54), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(179), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(242), 12,
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
  [1897] = 5,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      aux_sym_modifiers_repeat1,
    STATE(55), 1,
      aux_sym_inner_classes_repeat1,
    STATE(224), 1,
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
  [1924] = 7,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(104), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [1954] = 4,
    STATE(50), 1,
      aux_sym_inner_classes_repeat1,
    STATE(52), 1,
      aux_sym_modifiers_repeat1,
    STATE(224), 1,
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
  [1978] = 7,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_interface_type_list,
    STATE(95), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2008] = 7,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(252), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(80), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2038] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(25), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2065] = 1,
    ACTIONS(254), 14,
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
  [2082] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(24), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2109] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(125), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2136] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(96), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2163] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(127), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2190] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_generic_type,
    STATE(87), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(13), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2217] = 1,
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
  [2234] = 1,
    ACTIONS(258), 13,
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
  [2250] = 7,
    ACTIONS(260), 1,
      anon_sym_LT,
    ACTIONS(262), 1,
      anon_sym_flags_COLON,
    ACTIONS(264), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(266), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(86), 1,
      sym_type_parameters,
    STATE(78), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(179), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2274] = 2,
    ACTIONS(270), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(268), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      anon_sym_DOT,
      anon_sym_EQ,
      sym_comment,
      anon_sym_Constantpool_COLON,
  [2288] = 7,
    ACTIONS(260), 1,
      anon_sym_LT,
    ACTIONS(262), 1,
      anon_sym_flags_COLON,
    ACTIONS(266), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(272), 1,
      anon_sym_Constantpool_COLON,
    STATE(82), 1,
      sym_type_parameters,
    STATE(85), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(179), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2312] = 8,
    ACTIONS(274), 1,
      anon_sym_extends,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_LT,
    STATE(100), 1,
      sym_type_parameters,
    STATE(155), 1,
      sym_superclass,
    STATE(200), 1,
      sym_super_interfaces,
    STATE(310), 1,
      sym_class_def_plain_body,
  [2337] = 8,
    ACTIONS(274), 1,
      anon_sym_extends,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_LT,
    STATE(105), 1,
      sym_type_parameters,
    STATE(140), 1,
      sym_superclass,
    STATE(219), 1,
      sym_super_interfaces,
    STATE(325), 1,
      sym_class_def_plain_body,
  [2362] = 7,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_Signature_COLON,
    ACTIONS(286), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(79), 1,
      sym_source_file_def,
    STATE(207), 1,
      sym_signature,
    STATE(319), 1,
      sym_footer,
    STATE(77), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [2385] = 8,
    ACTIONS(274), 1,
      anon_sym_extends,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_LT,
    STATE(101), 1,
      sym_type_parameters,
    STATE(137), 1,
      sym_superclass,
    STATE(218), 1,
      sym_super_interfaces,
    STATE(324), 1,
      sym_class_def_plain_body,
  [2410] = 8,
    ACTIONS(274), 1,
      anon_sym_extends,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_LT,
    STATE(99), 1,
      sym_type_parameters,
    STATE(150), 1,
      sym_superclass,
    STATE(201), 1,
      sym_super_interfaces,
    STATE(311), 1,
      sym_class_def_plain_body,
  [2435] = 7,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_Signature_COLON,
    ACTIONS(286), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(79), 1,
      sym_source_file_def,
    STATE(207), 1,
      sym_signature,
    STATE(295), 1,
      sym_footer,
    STATE(107), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [2458] = 5,
    ACTIONS(262), 1,
      anon_sym_flags_COLON,
    ACTIONS(266), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(272), 1,
      anon_sym_Constantpool_COLON,
    STATE(92), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(179), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2476] = 7,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(292), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(294), 1,
      anon_sym_NestHost_COLON,
    STATE(106), 1,
      sym_nested_members,
    STATE(185), 1,
      sym_nest_host,
    STATE(296), 1,
      sym_inner_classes,
  [2498] = 7,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      sym__identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    STATE(190), 1,
      sym_identifier,
    STATE(194), 1,
      sym_args,
  [2520] = 1,
    ACTIONS(300), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2530] = 5,
    ACTIONS(262), 1,
      anon_sym_flags_COLON,
    ACTIONS(266), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(302), 1,
      anon_sym_Constantpool_COLON,
    STATE(90), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(179), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2548] = 4,
    ACTIONS(306), 1,
      anon_sym_POUND,
    STATE(321), 1,
      sym__hash_number,
    STATE(91), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(304), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2564] = 4,
    ACTIONS(306), 1,
      anon_sym_POUND,
    STATE(321), 1,
      sym__hash_number,
    STATE(83), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(308), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2580] = 5,
    ACTIONS(262), 1,
      anon_sym_flags_COLON,
    ACTIONS(266), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(302), 1,
      anon_sym_Constantpool_COLON,
    STATE(92), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(179), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2598] = 5,
    ACTIONS(262), 1,
      anon_sym_flags_COLON,
    ACTIONS(266), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(272), 1,
      anon_sym_Constantpool_COLON,
    STATE(85), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(179), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2616] = 6,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(312), 1,
      anon_sym_AMP,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    STATE(133), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2636] = 7,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      sym__identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    STATE(183), 1,
      sym_args,
    STATE(254), 1,
      sym_identifier,
  [2658] = 7,
    ACTIONS(290), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(292), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(294), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    STATE(122), 1,
      sym_nested_members,
    STATE(188), 1,
      sym_nest_host,
    STATE(276), 1,
      sym_inner_classes,
  [2680] = 5,
    ACTIONS(262), 1,
      anon_sym_flags_COLON,
    ACTIONS(266), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(316), 1,
      anon_sym_Constantpool_COLON,
    STATE(92), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(179), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2698] = 4,
    ACTIONS(320), 1,
      anon_sym_POUND,
    STATE(321), 1,
      sym__hash_number,
    STATE(91), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(318), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2714] = 5,
    ACTIONS(323), 1,
      anon_sym_flags_COLON,
    ACTIONS(326), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(328), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(92), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(179), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [2732] = 1,
    ACTIONS(268), 6,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_of,
      sym_comment,
  [2741] = 5,
    ACTIONS(331), 1,
      anon_sym_extends,
    ACTIONS(335), 1,
      sym_super,
    STATE(63), 1,
      sym_extends,
    STATE(231), 1,
      sym__wildcard_bounds,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2758] = 6,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    STATE(191), 1,
      aux_sym_interface_type_list_repeat1,
  [2777] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    ACTIONS(339), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [2792] = 6,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_GT,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    STATE(172), 1,
      aux_sym_type_arguments_repeat1,
  [2811] = 3,
    ACTIONS(347), 1,
      sym__identifier,
    STATE(98), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [2824] = 6,
    ACTIONS(274), 1,
      anon_sym_extends,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_superclass,
    STATE(210), 1,
      sym_super_interfaces,
    STATE(287), 1,
      sym_class_def_plain_body,
  [2843] = 6,
    ACTIONS(274), 1,
      anon_sym_extends,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_superclass,
    STATE(248), 1,
      sym_super_interfaces,
    STATE(283), 1,
      sym_class_def_plain_body,
  [2862] = 6,
    ACTIONS(274), 1,
      anon_sym_extends,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_superclass,
    STATE(200), 1,
      sym_super_interfaces,
    STATE(310), 1,
      sym_class_def_plain_body,
  [2881] = 3,
    ACTIONS(352), 1,
      sym__identifier,
    STATE(98), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [2894] = 5,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(110), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(356), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2911] = 6,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    STATE(170), 1,
      aux_sym_interface_type_list_repeat1,
  [2930] = 6,
    ACTIONS(274), 1,
      anon_sym_extends,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_superclass,
    STATE(201), 1,
      sym_super_interfaces,
    STATE(311), 1,
      sym_class_def_plain_body,
  [2949] = 5,
    ACTIONS(292), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(294), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    STATE(188), 1,
      sym_nest_host,
    STATE(276), 1,
      sym_inner_classes,
  [2965] = 3,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(367), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(107), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [2977] = 2,
    ACTIONS(371), 1,
      sym_comment,
    ACTIONS(369), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2987] = 2,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(373), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2997] = 4,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(117), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(377), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3011] = 4,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(119), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(377), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3025] = 2,
    ACTIONS(383), 1,
      sym_comment,
    ACTIONS(381), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3035] = 4,
    ACTIONS(142), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(144), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3049] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(391), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(387), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3061] = 2,
    ACTIONS(395), 1,
      sym_comment,
    ACTIONS(393), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3071] = 4,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      sym_number,
    STATE(120), 1,
      aux_sym_code_info_repeat1,
    STATE(139), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [3085] = 4,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(117), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(404), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3099] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3113] = 4,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(117), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(410), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3127] = 4,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      sym_number,
    STATE(193), 1,
      aux_sym_code_info_repeat1,
    STATE(153), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [3141] = 4,
    ACTIONS(331), 1,
      anon_sym_extends,
    STATE(66), 1,
      sym_extends,
    STATE(237), 1,
      sym_type_bound,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3155] = 5,
    ACTIONS(292), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(294), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      sym_nest_host,
    STATE(266), 1,
      sym_inner_classes,
  [3171] = 4,
    ACTIONS(135), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(140), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3185] = 4,
    ACTIONS(129), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(133), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3199] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    ACTIONS(421), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3213] = 5,
    ACTIONS(423), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(425), 1,
      sym__path_segment,
    ACTIONS(427), 1,
      anon_sym_SLASH,
    STATE(333), 1,
      sym__rest_of_the_line,
    STATE(335), 1,
      sym_file_path,
  [3229] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_dimensions_repeat1,
    STATE(21), 1,
      sym_dimensions,
    ACTIONS(429), 2,
      anon_sym_implements,
      anon_sym_LBRACE,
  [3243] = 4,
    ACTIONS(431), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(433), 1,
      anon_sym_SLASH,
    STATE(176), 1,
      aux_sym_file_path_repeat1,
    STATE(326), 1,
      sym__rest_of_the_line,
  [3256] = 4,
    ACTIONS(433), 1,
      anon_sym_SLASH,
    ACTIONS(435), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(176), 1,
      aux_sym_file_path_repeat1,
    STATE(318), 1,
      sym__rest_of_the_line,
  [3269] = 3,
    ACTIONS(437), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(439), 1,
      sym_number,
    STATE(130), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [3280] = 4,
    ACTIONS(431), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(433), 1,
      anon_sym_SLASH,
    STATE(129), 1,
      aux_sym_file_path_repeat1,
    STATE(326), 1,
      sym__rest_of_the_line,
  [3293] = 3,
    ACTIONS(156), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(442), 1,
      sym_flag_value,
    ACTIONS(158), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3304] = 3,
    ACTIONS(312), 1,
      anon_sym_AMP,
    STATE(143), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3315] = 2,
    ACTIONS(42), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(44), 3,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3324] = 2,
    ACTIONS(169), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(171), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3333] = 2,
    ACTIONS(135), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(140), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3342] = 4,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_super_interfaces,
    STATE(307), 1,
      sym_class_def_plain_body,
  [3355] = 1,
    ACTIONS(446), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [3362] = 3,
    ACTIONS(399), 1,
      sym_number,
    ACTIONS(448), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(130), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [3373] = 4,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_super_interfaces,
    STATE(313), 1,
      sym_class_def_plain_body,
  [3386] = 4,
    ACTIONS(433), 1,
      anon_sym_SLASH,
    ACTIONS(450), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(128), 1,
      aux_sym_file_path_repeat1,
    STATE(329), 1,
      sym__rest_of_the_line,
  [3399] = 1,
    ACTIONS(452), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3406] = 3,
    ACTIONS(454), 1,
      anon_sym_AMP,
    STATE(143), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3417] = 4,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym_super_interfaces,
    STATE(270), 1,
      sym_class_def_plain_body,
  [3430] = 1,
    ACTIONS(457), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3437] = 1,
    ACTIONS(459), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3444] = 1,
    ACTIONS(461), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3451] = 4,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(214), 1,
      sym_super_interfaces,
    STATE(267), 1,
      sym_class_def_plain_body,
  [3464] = 4,
    ACTIONS(463), 1,
      anon_sym_POUND,
    ACTIONS(465), 1,
      sym_number,
    ACTIONS(467), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__endl,
  [3477] = 4,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_super_interfaces,
    STATE(290), 1,
      sym_class_def_plain_body,
  [3490] = 1,
    ACTIONS(471), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3497] = 2,
    ACTIONS(42), 1,
      sym__identifier,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [3506] = 3,
    ACTIONS(399), 1,
      sym_number,
    ACTIONS(473), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(130), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [3517] = 1,
    ACTIONS(475), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3524] = 4,
    ACTIONS(276), 1,
      anon_sym_implements,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_super_interfaces,
    STATE(286), 1,
      sym_class_def_plain_body,
  [3537] = 2,
    ACTIONS(479), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(477), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3546] = 1,
    ACTIONS(481), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3553] = 3,
    ACTIONS(306), 1,
      anon_sym_POUND,
    ACTIONS(483), 1,
      sym_number,
    STATE(103), 1,
      sym__hash_number,
  [3563] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_GT,
    STATE(163), 1,
      aux_sym_type_parameters_repeat1,
  [3573] = 3,
    ACTIONS(296), 1,
      sym__identifier,
    STATE(121), 1,
      sym_identifier,
    STATE(209), 1,
      sym_type_parameter,
  [3583] = 1,
    ACTIONS(489), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [3589] = 3,
    ACTIONS(491), 1,
      aux_sym_code_info_stat_token1,
    STATE(116), 1,
      sym_code_info_stat,
    STATE(217), 1,
      sym_code_info,
  [3599] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_GT,
    STATE(186), 1,
      aux_sym_type_parameters_repeat1,
  [3609] = 3,
    ACTIONS(408), 1,
      anon_sym_GT,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_type_arguments_repeat1,
  [3619] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_GT,
    STATE(186), 1,
      aux_sym_type_parameters_repeat1,
  [3629] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_GT,
    STATE(165), 1,
      aux_sym_type_parameters_repeat1,
  [3639] = 3,
    ACTIONS(450), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(502), 1,
      sym__path_segment,
    STATE(329), 1,
      sym__rest_of_the_line,
  [3649] = 3,
    ACTIONS(218), 1,
      anon_sym_class,
    ACTIONS(504), 1,
      sym_interface_keyword,
    STATE(230), 1,
      sym_class_keyword,
  [3659] = 3,
    ACTIONS(218), 1,
      anon_sym_class,
    ACTIONS(506), 1,
      sym_interface_keyword,
    STATE(196), 1,
      sym_class_keyword,
  [3669] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_interface_type_list_repeat1,
  [3679] = 3,
    ACTIONS(510), 1,
      anon_sym_SEMI,
    ACTIONS(512), 1,
      anon_sym_throws,
    STATE(272), 1,
      sym_method_throws,
  [3689] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_GT,
    STATE(164), 1,
      aux_sym_type_arguments_repeat1,
  [3699] = 2,
    ACTIONS(518), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(516), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3707] = 3,
    ACTIONS(292), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    STATE(265), 1,
      sym_inner_classes,
  [3717] = 2,
    ACTIONS(522), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(489), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3725] = 3,
    ACTIONS(524), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(526), 1,
      anon_sym_SLASH,
    STATE(176), 1,
      aux_sym_file_path_repeat1,
  [3735] = 3,
    ACTIONS(296), 1,
      sym__identifier,
    STATE(121), 1,
      sym_identifier,
    STATE(159), 1,
      sym_type_parameter,
  [3745] = 3,
    ACTIONS(306), 1,
      anon_sym_POUND,
    ACTIONS(529), 1,
      sym_number,
    STATE(114), 1,
      sym__hash_number,
  [3755] = 2,
    ACTIONS(533), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(531), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3763] = 2,
    ACTIONS(535), 1,
      anon_sym_line,
    STATE(32), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [3771] = 3,
    ACTIONS(537), 1,
      anon_sym_descriptor_COLON,
    STATE(43), 1,
      sym__method_def_verbose,
    STATE(225), 1,
      sym_descriptor_def,
  [3781] = 1,
    ACTIONS(539), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3787] = 3,
    ACTIONS(512), 1,
      anon_sym_throws,
    ACTIONS(541), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      sym_method_throws,
  [3797] = 3,
    ACTIONS(296), 1,
      sym__identifier,
    STATE(121), 1,
      sym_identifier,
    STATE(166), 1,
      sym_type_parameter,
  [3807] = 3,
    ACTIONS(292), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      sym_inner_classes,
  [3817] = 3,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_GT,
    STATE(186), 1,
      aux_sym_type_parameters_repeat1,
  [3827] = 2,
    ACTIONS(548), 1,
      sym__identifier,
    STATE(102), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [3835] = 3,
    ACTIONS(292), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    STATE(266), 1,
      sym_inner_classes,
  [3845] = 1,
    ACTIONS(516), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [3851] = 3,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    STATE(171), 1,
      sym_args,
  [3861] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      aux_sym_interface_type_list_repeat1,
  [3871] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_GT,
    STATE(172), 1,
      aux_sym_type_arguments_repeat1,
  [3881] = 3,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      sym_number,
    STATE(193), 1,
      aux_sym_code_info_repeat1,
  [3891] = 3,
    ACTIONS(512), 1,
      anon_sym_throws,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    STATE(262), 1,
      sym_method_throws,
  [3901] = 2,
    ACTIONS(561), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym__endl,
  [3908] = 2,
    ACTIONS(565), 1,
      sym__identifier,
    STATE(71), 1,
      sym_identifier,
  [3915] = 2,
    ACTIONS(567), 1,
      aux_sym_instruction_token1,
    STATE(202), 1,
      sym_instruction,
  [3922] = 2,
    ACTIONS(548), 1,
      sym__identifier,
    STATE(229), 1,
      sym_identifier,
  [3929] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(282), 1,
      sym_class_def_plain_body,
  [3936] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(285), 1,
      sym_class_def_plain_body,
  [3943] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(289), 1,
      sym_class_def_plain_body,
  [3950] = 2,
    ACTIONS(569), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym__endl,
  [3957] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(291), 1,
      sym_class_def_plain_body,
  [3964] = 2,
    ACTIONS(573), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__endl,
  [3971] = 1,
    ACTIONS(577), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [3976] = 1,
    ACTIONS(579), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [3981] = 2,
    ACTIONS(286), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(89), 1,
      sym_source_file_def,
  [3988] = 2,
    ACTIONS(306), 1,
      anon_sym_POUND,
    STATE(302), 1,
      sym__hash_number,
  [3995] = 1,
    ACTIONS(546), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4000] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(259), 1,
      sym_class_def_plain_body,
  [4007] = 1,
    ACTIONS(557), 2,
      anon_sym_COMMA,
      sym_number,
  [4012] = 2,
    ACTIONS(491), 1,
      aux_sym_code_info_stat_token1,
    STATE(211), 1,
      sym_code_info_stat,
  [4019] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_class_def_plain_body,
  [4026] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(273), 1,
      sym_class_def_plain_body,
  [4033] = 1,
    ACTIONS(581), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [4038] = 2,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym__wrapped_hex_val,
  [4045] = 2,
    ACTIONS(585), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(45), 1,
      sym_line_number_table_def,
  [4052] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(306), 1,
      sym_class_def_plain_body,
  [4059] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(312), 1,
      sym_class_def_plain_body,
  [4066] = 2,
    ACTIONS(306), 1,
      anon_sym_POUND,
    STATE(258), 1,
      sym__hash_number,
  [4073] = 2,
    ACTIONS(306), 1,
      anon_sym_POUND,
    STATE(257), 1,
      sym__hash_number,
  [4080] = 2,
    ACTIONS(587), 1,
      anon_sym_POUND,
    STATE(109), 1,
      sym__hash_number,
  [4087] = 1,
    ACTIONS(524), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [4092] = 2,
    ACTIONS(306), 1,
      anon_sym_POUND,
    STATE(269), 1,
      sym__hash_number,
  [4099] = 2,
    ACTIONS(589), 1,
      anon_sym_flags_COLON,
    STATE(27), 1,
      sym_flag_def,
  [4106] = 2,
    ACTIONS(587), 1,
      anon_sym_POUND,
    STATE(115), 1,
      sym__hash_number,
  [4113] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(61), 1,
      sym_header_info_compile,
  [4120] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(264), 1,
      sym_class_def_plain_body,
  [4127] = 1,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
  [4132] = 2,
    ACTIONS(296), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
  [4139] = 1,
    ACTIONS(593), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4144] = 2,
    ACTIONS(296), 1,
      sym__identifier,
    STATE(76), 1,
      sym_identifier,
  [4151] = 2,
    ACTIONS(595), 1,
      anon_sym_Constantpool_COLON,
    STATE(74), 1,
      sym_constant_pool_def,
  [4158] = 2,
    ACTIONS(296), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
  [4165] = 2,
    ACTIONS(306), 1,
      anon_sym_POUND,
    STATE(300), 1,
      sym__hash_number,
  [4172] = 1,
    ACTIONS(597), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [4177] = 1,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4182] = 1,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      sym_number,
  [4187] = 2,
    ACTIONS(565), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
  [4194] = 2,
    ACTIONS(603), 1,
      anon_sym_MD5checksum,
    STATE(227), 1,
      sym_header_info_md5,
  [4201] = 2,
    ACTIONS(605), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(328), 1,
      sym__rest_of_the_line,
  [4208] = 2,
    ACTIONS(296), 1,
      sym__identifier,
    STATE(75), 1,
      sym_identifier,
  [4215] = 2,
    ACTIONS(512), 1,
      anon_sym_throws,
    STATE(41), 1,
      sym_method_throws,
  [4222] = 2,
    ACTIONS(296), 1,
      sym__identifier,
    STATE(73), 1,
      sym_identifier,
  [4229] = 2,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym__wrapped_hex_val,
  [4236] = 2,
    ACTIONS(587), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym__hash_number,
  [4243] = 2,
    ACTIONS(587), 1,
      anon_sym_POUND,
    STATE(112), 1,
      sym__hash_number,
  [4250] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(268), 1,
      sym_class_def_plain_body,
  [4257] = 2,
    ACTIONS(587), 1,
      anon_sym_POUND,
    STATE(284), 1,
      sym__hash_number,
  [4264] = 2,
    ACTIONS(609), 1,
      anon_sym_Lastmodified,
    STATE(240), 1,
      sym_header_info_last_mod,
  [4271] = 2,
    ACTIONS(296), 1,
      sym__identifier,
    STATE(12), 1,
      sym_identifier,
  [4278] = 1,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4283] = 2,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(261), 1,
      sym_class_def_plain_body,
  [4290] = 2,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_args,
  [4297] = 1,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
  [4301] = 1,
    ACTIONS(613), 1,
      sym_flag_value,
  [4305] = 1,
    ACTIONS(615), 1,
      anon_sym_DOT,
  [4309] = 1,
    ACTIONS(617), 1,
      anon_sym_COLON,
  [4313] = 1,
    ACTIONS(619), 1,
      ts_builtin_sym_end,
  [4317] = 1,
    ACTIONS(621), 1,
      sym_descriptor_value,
  [4321] = 1,
    ACTIONS(623), 1,
      ts_builtin_sym_end,
  [4325] = 1,
    ACTIONS(510), 1,
      anon_sym_SEMI,
  [4329] = 1,
    ACTIONS(625), 1,
      anon_sym_flags_COLON,
  [4333] = 1,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
  [4337] = 1,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
  [4341] = 1,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
  [4345] = 1,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
  [4349] = 1,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
  [4353] = 1,
    ACTIONS(635), 1,
      anon_sym_EQ,
  [4357] = 1,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
  [4361] = 1,
    ACTIONS(639), 1,
      ts_builtin_sym_end,
  [4365] = 1,
    ACTIONS(641), 1,
      anon_sym_SEMI,
  [4369] = 1,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
  [4373] = 1,
    ACTIONS(645), 1,
      anon_sym_RBRACK,
  [4377] = 1,
    ACTIONS(559), 1,
      anon_sym_SEMI,
  [4381] = 1,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
  [4385] = 1,
    ACTIONS(647), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4389] = 1,
    ACTIONS(649), 1,
      sym_decimal_floating_point_literal,
  [4393] = 1,
    ACTIONS(651), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [4397] = 1,
    ACTIONS(653), 1,
      aux_sym_class_info_item_simple_token1,
  [4401] = 1,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
  [4405] = 1,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
  [4409] = 1,
    ACTIONS(659), 1,
      ts_builtin_sym_end,
  [4413] = 1,
    ACTIONS(661), 1,
      anon_sym_of,
  [4417] = 1,
    ACTIONS(663), 1,
      ts_builtin_sym_end,
  [4421] = 1,
    ACTIONS(665), 1,
      ts_builtin_sym_end,
  [4425] = 1,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
  [4429] = 1,
    ACTIONS(669), 1,
      sym_number,
  [4433] = 1,
    ACTIONS(671), 1,
      ts_builtin_sym_end,
  [4437] = 1,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
  [4441] = 1,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
  [4445] = 1,
    ACTIONS(677), 1,
      ts_builtin_sym_end,
  [4449] = 1,
    ACTIONS(679), 1,
      anon_sym_SEMI,
  [4453] = 1,
    ACTIONS(681), 1,
      aux_sym_header_info_compile_token1,
  [4457] = 1,
    ACTIONS(683), 1,
      ts_builtin_sym_end,
  [4461] = 1,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
  [4465] = 1,
    ACTIONS(685), 1,
      anon_sym_COLON2,
  [4469] = 1,
    ACTIONS(687), 1,
      anon_sym_class,
  [4473] = 1,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
  [4477] = 1,
    ACTIONS(691), 1,
      anon_sym_SEMI,
  [4481] = 1,
    ACTIONS(693), 1,
      sym_number,
  [4485] = 1,
    ACTIONS(695), 1,
      sym_comment,
  [4489] = 1,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
  [4493] = 1,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [4497] = 1,
    ACTIONS(701), 1,
      sym_hex_value,
  [4501] = 1,
    ACTIONS(703), 1,
      ts_builtin_sym_end,
  [4505] = 1,
    ACTIONS(705), 1,
      ts_builtin_sym_end,
  [4509] = 1,
    ACTIONS(707), 1,
      sym_comment,
  [4513] = 1,
    ACTIONS(709), 1,
      anon_sym_COLON,
  [4517] = 1,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
  [4521] = 1,
    ACTIONS(713), 1,
      ts_builtin_sym_end,
  [4525] = 1,
    ACTIONS(715), 1,
      ts_builtin_sym_end,
  [4529] = 1,
    ACTIONS(717), 1,
      ts_builtin_sym_end,
  [4533] = 1,
    ACTIONS(719), 1,
      sym_number,
  [4537] = 1,
    ACTIONS(721), 1,
      sym_number,
  [4541] = 1,
    ACTIONS(723), 1,
      anon_sym_SEMI,
  [4545] = 1,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
  [4549] = 1,
    ACTIONS(727), 1,
      anon_sym_Lastmodified,
  [4553] = 1,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
  [4557] = 1,
    ACTIONS(731), 1,
      aux_sym_source_file_def_token1,
  [4561] = 1,
    ACTIONS(733), 1,
      anon_sym_EQ,
  [4565] = 1,
    ACTIONS(735), 1,
      sym_number,
  [4569] = 1,
    ACTIONS(737), 1,
      anon_sym_Compiledfrom,
  [4573] = 1,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
  [4577] = 1,
    ACTIONS(741), 1,
      ts_builtin_sym_end,
  [4581] = 1,
    ACTIONS(743), 1,
      anon_sym_Lastmodified,
  [4585] = 1,
    ACTIONS(745), 1,
      sym_md5,
  [4589] = 1,
    ACTIONS(747), 1,
      anon_sym_MD5checksum,
  [4593] = 1,
    ACTIONS(749), 1,
      anon_sym_Lastmodified,
  [4597] = 1,
    ACTIONS(751), 1,
      sym__path_segment,
  [4601] = 1,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
  [4605] = 1,
    ACTIONS(755), 1,
      sym__identifier,
  [4609] = 1,
    ACTIONS(757), 1,
      anon_sym_Lastmodified,
  [4613] = 1,
    ACTIONS(759), 1,
      sym_number,
  [4617] = 1,
    ACTIONS(761), 1,
      anon_sym_Lastmodified,
  [4621] = 1,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
  [4625] = 1,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
  [4629] = 1,
    ACTIONS(767), 1,
      sym_flag_value,
  [4633] = 1,
    ACTIONS(769), 1,
      ts_builtin_sym_end,
  [4637] = 1,
    ACTIONS(771), 1,
      sym_hex_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 221,
  [SMALL_STATE(7)] = 265,
  [SMALL_STATE(8)] = 303,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 419,
  [SMALL_STATE(11)] = 477,
  [SMALL_STATE(12)] = 514,
  [SMALL_STATE(13)] = 551,
  [SMALL_STATE(14)] = 587,
  [SMALL_STATE(15)] = 627,
  [SMALL_STATE(16)] = 663,
  [SMALL_STATE(17)] = 699,
  [SMALL_STATE(18)] = 735,
  [SMALL_STATE(19)] = 775,
  [SMALL_STATE(20)] = 811,
  [SMALL_STATE(21)] = 849,
  [SMALL_STATE(22)] = 884,
  [SMALL_STATE(23)] = 919,
  [SMALL_STATE(24)] = 954,
  [SMALL_STATE(25)] = 993,
  [SMALL_STATE(26)] = 1035,
  [SMALL_STATE(27)] = 1070,
  [SMALL_STATE(28)] = 1107,
  [SMALL_STATE(29)] = 1140,
  [SMALL_STATE(30)] = 1173,
  [SMALL_STATE(31)] = 1206,
  [SMALL_STATE(32)] = 1239,
  [SMALL_STATE(33)] = 1271,
  [SMALL_STATE(34)] = 1301,
  [SMALL_STATE(35)] = 1333,
  [SMALL_STATE(36)] = 1361,
  [SMALL_STATE(37)] = 1389,
  [SMALL_STATE(38)] = 1420,
  [SMALL_STATE(39)] = 1450,
  [SMALL_STATE(40)] = 1480,
  [SMALL_STATE(41)] = 1506,
  [SMALL_STATE(42)] = 1532,
  [SMALL_STATE(43)] = 1557,
  [SMALL_STATE(44)] = 1582,
  [SMALL_STATE(45)] = 1607,
  [SMALL_STATE(46)] = 1632,
  [SMALL_STATE(47)] = 1657,
  [SMALL_STATE(48)] = 1691,
  [SMALL_STATE(49)] = 1724,
  [SMALL_STATE(50)] = 1760,
  [SMALL_STATE(51)] = 1787,
  [SMALL_STATE(52)] = 1820,
  [SMALL_STATE(53)] = 1843,
  [SMALL_STATE(54)] = 1874,
  [SMALL_STATE(55)] = 1897,
  [SMALL_STATE(56)] = 1924,
  [SMALL_STATE(57)] = 1954,
  [SMALL_STATE(58)] = 1978,
  [SMALL_STATE(59)] = 2008,
  [SMALL_STATE(60)] = 2038,
  [SMALL_STATE(61)] = 2065,
  [SMALL_STATE(62)] = 2082,
  [SMALL_STATE(63)] = 2109,
  [SMALL_STATE(64)] = 2136,
  [SMALL_STATE(65)] = 2163,
  [SMALL_STATE(66)] = 2190,
  [SMALL_STATE(67)] = 2217,
  [SMALL_STATE(68)] = 2234,
  [SMALL_STATE(69)] = 2250,
  [SMALL_STATE(70)] = 2274,
  [SMALL_STATE(71)] = 2288,
  [SMALL_STATE(72)] = 2312,
  [SMALL_STATE(73)] = 2337,
  [SMALL_STATE(74)] = 2362,
  [SMALL_STATE(75)] = 2385,
  [SMALL_STATE(76)] = 2410,
  [SMALL_STATE(77)] = 2435,
  [SMALL_STATE(78)] = 2458,
  [SMALL_STATE(79)] = 2476,
  [SMALL_STATE(80)] = 2498,
  [SMALL_STATE(81)] = 2520,
  [SMALL_STATE(82)] = 2530,
  [SMALL_STATE(83)] = 2548,
  [SMALL_STATE(84)] = 2564,
  [SMALL_STATE(85)] = 2580,
  [SMALL_STATE(86)] = 2598,
  [SMALL_STATE(87)] = 2616,
  [SMALL_STATE(88)] = 2636,
  [SMALL_STATE(89)] = 2658,
  [SMALL_STATE(90)] = 2680,
  [SMALL_STATE(91)] = 2698,
  [SMALL_STATE(92)] = 2714,
  [SMALL_STATE(93)] = 2732,
  [SMALL_STATE(94)] = 2741,
  [SMALL_STATE(95)] = 2758,
  [SMALL_STATE(96)] = 2777,
  [SMALL_STATE(97)] = 2792,
  [SMALL_STATE(98)] = 2811,
  [SMALL_STATE(99)] = 2824,
  [SMALL_STATE(100)] = 2843,
  [SMALL_STATE(101)] = 2862,
  [SMALL_STATE(102)] = 2881,
  [SMALL_STATE(103)] = 2894,
  [SMALL_STATE(104)] = 2911,
  [SMALL_STATE(105)] = 2930,
  [SMALL_STATE(106)] = 2949,
  [SMALL_STATE(107)] = 2965,
  [SMALL_STATE(108)] = 2977,
  [SMALL_STATE(109)] = 2987,
  [SMALL_STATE(110)] = 2997,
  [SMALL_STATE(111)] = 3011,
  [SMALL_STATE(112)] = 3025,
  [SMALL_STATE(113)] = 3035,
  [SMALL_STATE(114)] = 3049,
  [SMALL_STATE(115)] = 3061,
  [SMALL_STATE(116)] = 3071,
  [SMALL_STATE(117)] = 3085,
  [SMALL_STATE(118)] = 3099,
  [SMALL_STATE(119)] = 3113,
  [SMALL_STATE(120)] = 3127,
  [SMALL_STATE(121)] = 3141,
  [SMALL_STATE(122)] = 3155,
  [SMALL_STATE(123)] = 3171,
  [SMALL_STATE(124)] = 3185,
  [SMALL_STATE(125)] = 3199,
  [SMALL_STATE(126)] = 3213,
  [SMALL_STATE(127)] = 3229,
  [SMALL_STATE(128)] = 3243,
  [SMALL_STATE(129)] = 3256,
  [SMALL_STATE(130)] = 3269,
  [SMALL_STATE(131)] = 3280,
  [SMALL_STATE(132)] = 3293,
  [SMALL_STATE(133)] = 3304,
  [SMALL_STATE(134)] = 3315,
  [SMALL_STATE(135)] = 3324,
  [SMALL_STATE(136)] = 3333,
  [SMALL_STATE(137)] = 3342,
  [SMALL_STATE(138)] = 3355,
  [SMALL_STATE(139)] = 3362,
  [SMALL_STATE(140)] = 3373,
  [SMALL_STATE(141)] = 3386,
  [SMALL_STATE(142)] = 3399,
  [SMALL_STATE(143)] = 3406,
  [SMALL_STATE(144)] = 3417,
  [SMALL_STATE(145)] = 3430,
  [SMALL_STATE(146)] = 3437,
  [SMALL_STATE(147)] = 3444,
  [SMALL_STATE(148)] = 3451,
  [SMALL_STATE(149)] = 3464,
  [SMALL_STATE(150)] = 3477,
  [SMALL_STATE(151)] = 3490,
  [SMALL_STATE(152)] = 3497,
  [SMALL_STATE(153)] = 3506,
  [SMALL_STATE(154)] = 3517,
  [SMALL_STATE(155)] = 3524,
  [SMALL_STATE(156)] = 3537,
  [SMALL_STATE(157)] = 3546,
  [SMALL_STATE(158)] = 3553,
  [SMALL_STATE(159)] = 3563,
  [SMALL_STATE(160)] = 3573,
  [SMALL_STATE(161)] = 3583,
  [SMALL_STATE(162)] = 3589,
  [SMALL_STATE(163)] = 3599,
  [SMALL_STATE(164)] = 3609,
  [SMALL_STATE(165)] = 3619,
  [SMALL_STATE(166)] = 3629,
  [SMALL_STATE(167)] = 3639,
  [SMALL_STATE(168)] = 3649,
  [SMALL_STATE(169)] = 3659,
  [SMALL_STATE(170)] = 3669,
  [SMALL_STATE(171)] = 3679,
  [SMALL_STATE(172)] = 3689,
  [SMALL_STATE(173)] = 3699,
  [SMALL_STATE(174)] = 3707,
  [SMALL_STATE(175)] = 3717,
  [SMALL_STATE(176)] = 3725,
  [SMALL_STATE(177)] = 3735,
  [SMALL_STATE(178)] = 3745,
  [SMALL_STATE(179)] = 3755,
  [SMALL_STATE(180)] = 3763,
  [SMALL_STATE(181)] = 3771,
  [SMALL_STATE(182)] = 3781,
  [SMALL_STATE(183)] = 3787,
  [SMALL_STATE(184)] = 3797,
  [SMALL_STATE(185)] = 3807,
  [SMALL_STATE(186)] = 3817,
  [SMALL_STATE(187)] = 3827,
  [SMALL_STATE(188)] = 3835,
  [SMALL_STATE(189)] = 3845,
  [SMALL_STATE(190)] = 3851,
  [SMALL_STATE(191)] = 3861,
  [SMALL_STATE(192)] = 3871,
  [SMALL_STATE(193)] = 3881,
  [SMALL_STATE(194)] = 3891,
  [SMALL_STATE(195)] = 3901,
  [SMALL_STATE(196)] = 3908,
  [SMALL_STATE(197)] = 3915,
  [SMALL_STATE(198)] = 3922,
  [SMALL_STATE(199)] = 3929,
  [SMALL_STATE(200)] = 3936,
  [SMALL_STATE(201)] = 3943,
  [SMALL_STATE(202)] = 3950,
  [SMALL_STATE(203)] = 3957,
  [SMALL_STATE(204)] = 3964,
  [SMALL_STATE(205)] = 3971,
  [SMALL_STATE(206)] = 3976,
  [SMALL_STATE(207)] = 3981,
  [SMALL_STATE(208)] = 3988,
  [SMALL_STATE(209)] = 3995,
  [SMALL_STATE(210)] = 4000,
  [SMALL_STATE(211)] = 4007,
  [SMALL_STATE(212)] = 4012,
  [SMALL_STATE(213)] = 4019,
  [SMALL_STATE(214)] = 4026,
  [SMALL_STATE(215)] = 4033,
  [SMALL_STATE(216)] = 4038,
  [SMALL_STATE(217)] = 4045,
  [SMALL_STATE(218)] = 4052,
  [SMALL_STATE(219)] = 4059,
  [SMALL_STATE(220)] = 4066,
  [SMALL_STATE(221)] = 4073,
  [SMALL_STATE(222)] = 4080,
  [SMALL_STATE(223)] = 4087,
  [SMALL_STATE(224)] = 4092,
  [SMALL_STATE(225)] = 4099,
  [SMALL_STATE(226)] = 4106,
  [SMALL_STATE(227)] = 4113,
  [SMALL_STATE(228)] = 4120,
  [SMALL_STATE(229)] = 4127,
  [SMALL_STATE(230)] = 4132,
  [SMALL_STATE(231)] = 4139,
  [SMALL_STATE(232)] = 4144,
  [SMALL_STATE(233)] = 4151,
  [SMALL_STATE(234)] = 4158,
  [SMALL_STATE(235)] = 4165,
  [SMALL_STATE(236)] = 4172,
  [SMALL_STATE(237)] = 4177,
  [SMALL_STATE(238)] = 4182,
  [SMALL_STATE(239)] = 4187,
  [SMALL_STATE(240)] = 4194,
  [SMALL_STATE(241)] = 4201,
  [SMALL_STATE(242)] = 4208,
  [SMALL_STATE(243)] = 4215,
  [SMALL_STATE(244)] = 4222,
  [SMALL_STATE(245)] = 4229,
  [SMALL_STATE(246)] = 4236,
  [SMALL_STATE(247)] = 4243,
  [SMALL_STATE(248)] = 4250,
  [SMALL_STATE(249)] = 4257,
  [SMALL_STATE(250)] = 4264,
  [SMALL_STATE(251)] = 4271,
  [SMALL_STATE(252)] = 4278,
  [SMALL_STATE(253)] = 4283,
  [SMALL_STATE(254)] = 4290,
  [SMALL_STATE(255)] = 4297,
  [SMALL_STATE(256)] = 4301,
  [SMALL_STATE(257)] = 4305,
  [SMALL_STATE(258)] = 4309,
  [SMALL_STATE(259)] = 4313,
  [SMALL_STATE(260)] = 4317,
  [SMALL_STATE(261)] = 4321,
  [SMALL_STATE(262)] = 4325,
  [SMALL_STATE(263)] = 4329,
  [SMALL_STATE(264)] = 4333,
  [SMALL_STATE(265)] = 4337,
  [SMALL_STATE(266)] = 4341,
  [SMALL_STATE(267)] = 4345,
  [SMALL_STATE(268)] = 4349,
  [SMALL_STATE(269)] = 4353,
  [SMALL_STATE(270)] = 4357,
  [SMALL_STATE(271)] = 4361,
  [SMALL_STATE(272)] = 4365,
  [SMALL_STATE(273)] = 4369,
  [SMALL_STATE(274)] = 4373,
  [SMALL_STATE(275)] = 4377,
  [SMALL_STATE(276)] = 4381,
  [SMALL_STATE(277)] = 4385,
  [SMALL_STATE(278)] = 4389,
  [SMALL_STATE(279)] = 4393,
  [SMALL_STATE(280)] = 4397,
  [SMALL_STATE(281)] = 4401,
  [SMALL_STATE(282)] = 4405,
  [SMALL_STATE(283)] = 4409,
  [SMALL_STATE(284)] = 4413,
  [SMALL_STATE(285)] = 4417,
  [SMALL_STATE(286)] = 4421,
  [SMALL_STATE(287)] = 4425,
  [SMALL_STATE(288)] = 4429,
  [SMALL_STATE(289)] = 4433,
  [SMALL_STATE(290)] = 4437,
  [SMALL_STATE(291)] = 4441,
  [SMALL_STATE(292)] = 4445,
  [SMALL_STATE(293)] = 4449,
  [SMALL_STATE(294)] = 4453,
  [SMALL_STATE(295)] = 4457,
  [SMALL_STATE(296)] = 4461,
  [SMALL_STATE(297)] = 4465,
  [SMALL_STATE(298)] = 4469,
  [SMALL_STATE(299)] = 4473,
  [SMALL_STATE(300)] = 4477,
  [SMALL_STATE(301)] = 4481,
  [SMALL_STATE(302)] = 4485,
  [SMALL_STATE(303)] = 4489,
  [SMALL_STATE(304)] = 4493,
  [SMALL_STATE(305)] = 4497,
  [SMALL_STATE(306)] = 4501,
  [SMALL_STATE(307)] = 4505,
  [SMALL_STATE(308)] = 4509,
  [SMALL_STATE(309)] = 4513,
  [SMALL_STATE(310)] = 4517,
  [SMALL_STATE(311)] = 4521,
  [SMALL_STATE(312)] = 4525,
  [SMALL_STATE(313)] = 4529,
  [SMALL_STATE(314)] = 4533,
  [SMALL_STATE(315)] = 4537,
  [SMALL_STATE(316)] = 4541,
  [SMALL_STATE(317)] = 4545,
  [SMALL_STATE(318)] = 4549,
  [SMALL_STATE(319)] = 4553,
  [SMALL_STATE(320)] = 4557,
  [SMALL_STATE(321)] = 4561,
  [SMALL_STATE(322)] = 4565,
  [SMALL_STATE(323)] = 4569,
  [SMALL_STATE(324)] = 4573,
  [SMALL_STATE(325)] = 4577,
  [SMALL_STATE(326)] = 4581,
  [SMALL_STATE(327)] = 4585,
  [SMALL_STATE(328)] = 4589,
  [SMALL_STATE(329)] = 4593,
  [SMALL_STATE(330)] = 4597,
  [SMALL_STATE(331)] = 4601,
  [SMALL_STATE(332)] = 4605,
  [SMALL_STATE(333)] = 4609,
  [SMALL_STATE(334)] = 4613,
  [SMALL_STATE(335)] = 4617,
  [SMALL_STATE(336)] = 4621,
  [SMALL_STATE(337)] = 4625,
  [SMALL_STATE(338)] = 4629,
  [SMALL_STATE(339)] = 4633,
  [SMALL_STATE(340)] = 4637,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(7),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(39),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(22),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1, .production_id = 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(39),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(22),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 9),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 9),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 8),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(274),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(62),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(338),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(301),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(38),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exceptions, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exceptions, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(54),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(52),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(322),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(216),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(158),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(152),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(10),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(280),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(256),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superclass, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(297),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(64),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(51),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(330),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(160),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(212),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nest_host, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_interfaces, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 12),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 10),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 10),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 11),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 12),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 11),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 7, .production_id = 13),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 7, .production_id = 13),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 5),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 7),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 6),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 7),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 6),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 5),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_keyword, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [769] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
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
