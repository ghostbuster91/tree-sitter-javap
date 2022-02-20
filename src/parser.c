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
#define STATE_COUNT 281
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 169
#define ALIAS_COUNT 1
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_NestMembers_COLON = 55,
  anon_sym_InnerClasses_COLON = 56,
  anon_sym_EQ = 57,
  anon_sym_of = 58,
  anon_sym_NestHost_COLON = 59,
  anon_sym_class = 60,
  sym_comment = 61,
  anon_sym_Constantpool_COLON = 62,
  anon_sym_Utf8 = 63,
  aux_sym__constant_pool_item_type_utf8_token1 = 64,
  anon_sym_Class = 65,
  anon_sym_String = 66,
  anon_sym_Methodref = 67,
  anon_sym_Fieldref = 68,
  anon_sym_InterfaceMethodref = 69,
  anon_sym_NameAndType = 70,
  anon_sym_Double = 71,
  anon_sym_Float = 72,
  sym_decimal_floating_point_literal = 73,
  aux_sym_class_info_item_simple_token1 = 74,
  anon_sym_Lastmodified = 75,
  sym_md5 = 76,
  anon_sym_MD5checksum = 77,
  anon_sym_Compiledfrom = 78,
  aux_sym_header_info_compile_token1 = 79,
  sym__path_segment = 80,
  anon_sym_SLASH = 81,
  sym__endl = 82,
  anon_sym_Classfile = 83,
  sym_source_file = 84,
  sym__source_file_verbose = 85,
  sym__source_file_plain = 86,
  sym_class_def_plain = 87,
  sym_interface_def_plain = 88,
  sym_class_def_plain_body = 89,
  sym_class_def_plain_body_item = 90,
  sym_field_def = 91,
  sym_method_def = 92,
  sym_method_throws = 93,
  sym__method_def_verbose = 94,
  sym_static_block_def = 95,
  sym_type_parameters = 96,
  sym_type_parameter = 97,
  sym_type_bound = 98,
  sym_modifiers = 99,
  sym_class_definition = 100,
  sym_code_def = 101,
  sym_code_info = 102,
  sym_line_number_table_def = 103,
  sym_numered_line = 104,
  sym_numered_instruction = 105,
  sym_instruction = 106,
  sym_code_info_stat = 107,
  sym_descriptor_def = 108,
  sym_flag_def = 109,
  sym__wrapped_hex_val = 110,
  sym_args = 111,
  sym__type = 112,
  sym__simple_type = 113,
  sym_array_type = 114,
  sym_dimensions = 115,
  sym_scoped_type_identifier = 116,
  sym_generic_type = 117,
  sym_type_arguments = 118,
  sym_wildcard = 119,
  sym__wildcard_bounds = 120,
  sym_primitive_type = 121,
  sym_block = 122,
  sym_identifier = 123,
  sym_footer = 124,
  sym_source_file_def = 125,
  sym_nested_members = 126,
  sym_inner_classes = 127,
  sym_nest_host = 128,
  sym_constant_pool_def = 129,
  sym__hash_number = 130,
  sym_constant_pool_item = 131,
  sym__constant_pool_item_type = 132,
  sym__constant_pool_item_type_utf8 = 133,
  sym__constant_pool_item_type_class = 134,
  sym__constant_pool_item_type_string = 135,
  sym__constant_pool_item_type_ref = 136,
  sym__constant_pool_item_type_name_and_type = 137,
  sym__constant_pool_item_type_double = 138,
  sym_class_keyword = 139,
  sym_class_info_def = 140,
  sym_class_info_item = 141,
  sym_class_info_item_simple = 142,
  sym_header_info_last_mod = 143,
  sym_header_info_md5 = 144,
  sym_header_info_compile = 145,
  sym_file_path = 146,
  sym__rest_of_the_line = 147,
  sym_header_info = 148,
  sym_header = 149,
  aux_sym__source_file_verbose_repeat1 = 150,
  aux_sym_class_def_plain_body_repeat1 = 151,
  aux_sym_method_throws_repeat1 = 152,
  aux_sym_type_parameters_repeat1 = 153,
  aux_sym_type_bound_repeat1 = 154,
  aux_sym_modifiers_repeat1 = 155,
  aux_sym_class_definition_repeat1 = 156,
  aux_sym_code_info_repeat1 = 157,
  aux_sym_code_info_repeat2 = 158,
  aux_sym_line_number_table_def_repeat1 = 159,
  aux_sym_flag_def_repeat1 = 160,
  aux_sym_dimensions_repeat1 = 161,
  aux_sym_type_arguments_repeat1 = 162,
  aux_sym_nested_members_repeat1 = 163,
  aux_sym_inner_classes_repeat1 = 164,
  aux_sym_constant_pool_def_repeat1 = 165,
  aux_sym_class_info_def_repeat1 = 166,
  aux_sym_class_info_item_simple_repeat1 = 167,
  aux_sym_file_path_repeat1 = 168,
  alias_sym_type_identifier = 169,
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
  [29] = 17,
  [30] = 30,
  [31] = 18,
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
  [74] = 51,
  [75] = 75,
  [76] = 53,
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
  [87] = 12,
  [88] = 9,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 8,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 37,
  [100] = 100,
  [101] = 47,
  [102] = 102,
  [103] = 103,
  [104] = 37,
  [105] = 105,
  [106] = 14,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 15,
  [111] = 111,
  [112] = 68,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 16,
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
  [140] = 37,
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
  [175] = 167,
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
  [189] = 170,
  [190] = 190,
  [191] = 169,
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
  [274] = 264,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 223,
  [279] = 259,
  [280] = 272,
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

static inline bool sym__identifier_character_set_3(int32_t c) {
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

static inline bool sym__identifier_character_set_4(int32_t c) {
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

static inline bool sym__identifier_character_set_6(int32_t c) {
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

static inline bool sym__identifier_character_set_7(int32_t c) {
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
      if (eof) ADVANCE(389);
      if (lookahead == '"') ADVANCE(713);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '&') ADVANCE(399);
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == ')') ADVANCE(561);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(751);
      if (lookahead == ':') ADVANCE(441);
      if (lookahead == ';') ADVANCE(393);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == '?') ADVANCE(566);
      if (lookahead == 'C') ADVANCE(191);
      if (lookahead == 'D') ADVANCE(231);
      if (lookahead == 'F') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == ']') ADVANCE(564);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(339);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'v') ADVANCE(235);
      if (lookahead == '{') ADVANCE(391);
      if (lookahead == '}') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(447);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(710);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(337);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == 'S') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'v') ADVANCE(239);
      if (lookahead == '{') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(382);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(561);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == '?') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(705);
      if (lookahead == 'c') ADVANCE(633);
      if (lookahead == 'd') ADVANCE(664);
      if (lookahead == 'f') ADVANCE(648);
      if (lookahead == 'i') ADVANCE(656);
      if (lookahead == 'v') ADVANCE(667);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(707);
      END_STATE();
    case 12:
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == ':') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(663);
      if (lookahead == 'a') ADVANCE(603);
      if (lookahead == 'b') ADVANCE(705);
      if (lookahead == 'c') ADVANCE(633);
      if (lookahead == 'd') ADVANCE(616);
      if (lookahead == 'f') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(656);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == 'v') ADVANCE(665);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '}') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(707);
      END_STATE();
    case 13:
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == 'C') ADVANCE(663);
      if (lookahead == 'a') ADVANCE(603);
      if (lookahead == 'b') ADVANCE(705);
      if (lookahead == 'c') ADVANCE(633);
      if (lookahead == 'd') ADVANCE(616);
      if (lookahead == 'f') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(656);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == 'v') ADVANCE(665);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '}') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(707);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(742);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(344);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(721);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(343);
      END_STATE();
    case 17:
      if (lookahead == '5') ADVANCE(4);
      END_STATE();
    case 18:
      if (lookahead == '8') ADVANCE(723);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(436);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(449);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(718);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(446);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(714);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(715);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(722);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(722);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(437);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(222);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead == 'b') ADVANCE(556);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(506);
      if (lookahead == 'i') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(526);
      if (lookahead == '}') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(707);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(205);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == 'D') ADVANCE(231);
      if (lookahead == 'F') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(297);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 40:
      if (lookahead == 'F') ADVANCE(188);
      END_STATE();
    case 41:
      if (lookahead == 'H') ADVANCE(244);
      if (lookahead == 'M') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(147);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(327);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(340);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(603);
      if (lookahead == 'b') ADVANCE(705);
      if (lookahead == 'c') ADVANCE(633);
      if (lookahead == 'd') ADVANCE(616);
      if (lookahead == 'f') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(656);
      if (lookahead == 'l') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == 'v') ADVANCE(665);
      if (lookahead == '}') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(707);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(194);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(288);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(575);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(403);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(744);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(249);
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(717);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(734);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(733);
      END_STATE();
    case 152:
      if (lookahead == 'f') ADVANCE(735);
      END_STATE();
    case 153:
      if (lookahead == 'f') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(380);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(247);
      END_STATE();
    case 155:
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 156:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 157:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 158:
      if (lookahead == 'f') ADVANCE(267);
      END_STATE();
    case 159:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 160:
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(732);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 163:
      if (lookahead == 'h') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 164:
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 167:
      if (lookahead == 'h') ADVANCE(265);
      END_STATE();
    case 168:
      if (lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 189:
      if (lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(415);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(746);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(747);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 214:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(418);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 252:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(719);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(394);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(738);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 327:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 328:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 329:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 330:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 331:
      if (lookahead == 'u') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 332:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 333:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 334:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 335:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 336:
      if (lookahead == 'w') ADVANCE(276);
      END_STATE();
    case 337:
      if (lookahead == 'x') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 338:
      if (lookahead == 'x') ADVANCE(316);
      END_STATE();
    case 339:
      if (lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 340:
      if (lookahead == 'y') ADVANCE(252);
      END_STATE();
    case 341:
      if (lookahead == 'z') ADVANCE(135);
      END_STATE();
    case 342:
      if (lookahead == '}') ADVANCE(396);
      END_STATE();
    case 343:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(343);
      END_STATE();
    case 344:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      END_STATE();
    case 345:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(345)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 346:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(346)
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 347:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(749);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(750);
      END_STATE();
    case 348:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(348)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 349:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(349)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 350:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      END_STATE();
    case 351:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      END_STATE();
    case 352:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(745);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 371:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 372:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      END_STATE();
    case 373:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 383:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(562);
      END_STATE();
    case 384:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 385:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 386:
      if (eof) ADVANCE(389);
      if (lookahead == '"') ADVANCE(713);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '&') ADVANCE(399);
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == ')') ADVANCE(561);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(751);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead == ';') ADVANCE(393);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == '?') ADVANCE(566);
      if (lookahead == 'C') ADVANCE(191);
      if (lookahead == 'D') ADVANCE(231);
      if (lookahead == 'F') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == ']') ADVANCE(564);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(339);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'v') ADVANCE(235);
      if (lookahead == '{') ADVANCE(391);
      if (lookahead == '}') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      END_STATE();
    case 387:
      if (eof) ADVANCE(389);
      if (lookahead == '&') ADVANCE(399);
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == ')') ADVANCE(561);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead == ';') ADVANCE(393);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == 'C') ADVANCE(464);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'f') ADVANCE(463);
      if (lookahead == '{') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      END_STATE();
    case 388:
      if (eof) ADVANCE(389);
      if (lookahead == '&') ADVANCE(399);
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == ')') ADVANCE(561);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ';') ADVANCE(393);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == 'I') ADVANCE(662);
      if (lookahead == 'N') ADVANCE(630);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(707);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_public);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_protected);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_private);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_static);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_final);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_default);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_native);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_transient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_transient);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_line);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(343);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(449);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 'g') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'r') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'f') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'f') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'h') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'h') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(522);
      if (lookahead == 'l') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == 'y') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'v') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'v') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'y') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'z') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_extends);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_super);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_int);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_char);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_void);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_double);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_float);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(707);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(436);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(718);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(715);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(650);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(669);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(672);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(702);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(679);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(686);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(647);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(655);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(641);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(687);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(696);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(610);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(697);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(707);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(680);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(653);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(649);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(402);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(414);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(634);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(692);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(689);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(698);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(617);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(577);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(405);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(426);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == 'o') ADVANCE(701);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(587);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(586);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(580);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(429);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(439);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(614);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(611);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(673);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(615);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(678);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(659);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(681);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(670);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(593);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(592);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(675);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(695);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(706);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(657);
      if (lookahead == 'l') ADVANCE(668);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'l') ADVANCE(600);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(613);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(703);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(609);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(606);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(607);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(660);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(629);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(652);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(417);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(668);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(619);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(594);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(688);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(622);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(642);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(608);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(677);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(685);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(596);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(636);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(690);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(623);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(626);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(661);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(612);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(701);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(638);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(658);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(639);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(599);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(682);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(420);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead == 'u') ADVANCE(604);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(574);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(590);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(597);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(666);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(601);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(645);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(589);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(683);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(699);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(691);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(694);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(628);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead == 'y') ADVANCE(654);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(571);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(640);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(583);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(423);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(411);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(432);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(591);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(631);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(618);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(588);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(625);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(646);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(621);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(624);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(676);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(643);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(605);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(651);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(620);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(602);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(693);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'z') ADVANCE(627);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(343);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(712);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_NestMembers_COLON);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_InnerClasses_COLON);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_NestHost_COLON);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(755);
      if (lookahead != 0) ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(724);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(724);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      if (lookahead != 0) ADVANCE(729);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(729);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(726);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(726);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      if (lookahead != 0) ADVANCE(729);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(729);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      if (lookahead != 0) ADVANCE(729);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(729);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_InterfaceMethodref);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(749);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(750);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(750);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      if (lookahead != 0) ADVANCE(729);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(729);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(343);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(755);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 387},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 388},
  [46] = {.lex_state = 388},
  [47] = {.lex_state = 387},
  [48] = {.lex_state = 388},
  [49] = {.lex_state = 388},
  [50] = {.lex_state = 388},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 388},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 388},
  [55] = {.lex_state = 388},
  [56] = {.lex_state = 388},
  [57] = {.lex_state = 388},
  [58] = {.lex_state = 388},
  [59] = {.lex_state = 388},
  [60] = {.lex_state = 387},
  [61] = {.lex_state = 387},
  [62] = {.lex_state = 387},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 387},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 388},
  [67] = {.lex_state = 388},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 387},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 387},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 388},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 388},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 388},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 388},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 724},
  [87] = {.lex_state = 387},
  [88] = {.lex_state = 387},
  [89] = {.lex_state = 387},
  [90] = {.lex_state = 387},
  [91] = {.lex_state = 387},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 387},
  [95] = {.lex_state = 387},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 388},
  [100] = {.lex_state = 387},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 388},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 387},
  [107] = {.lex_state = 725},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 387},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 388},
  [113] = {.lex_state = 725},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 387},
  [121] = {.lex_state = 725},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 387},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 725},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 345},
  [133] = {.lex_state = 387},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 388},
  [146] = {.lex_state = 725},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 388},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 388},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 726},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 388},
  [169] = {.lex_state = 388},
  [170] = {.lex_state = 388},
  [171] = {.lex_state = 388},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 727},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 388},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 346},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 388},
  [190] = {.lex_state = 345},
  [191] = {.lex_state = 388},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 388},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 725},
  [200] = {.lex_state = 388},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 388},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 388},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 727},
  [222] = {.lex_state = 345},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 347},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 349},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 388},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 348},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 349},
  [280] = {.lex_state = 8},
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
    [sym_source_file] = STATE(277),
    [sym__source_file_verbose] = STATE(276),
    [sym__source_file_plain] = STATE(276),
    [sym_header_info_compile] = STATE(24),
    [sym_header_info] = STATE(166),
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
    STATE(18), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(74), 1,
      sym_scoped_type_identifier,
    STATE(76), 1,
      sym_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(235), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
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
    STATE(18), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(74), 1,
      sym_scoped_type_identifier,
    STATE(76), 1,
      sym_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(235), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(66), 4,
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
    STATE(18), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(74), 1,
      sym_scoped_type_identifier,
    STATE(76), 1,
      sym_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(235), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
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
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      sym__identifier,
    STATE(5), 1,
      aux_sym_class_definition_repeat1,
    STATE(18), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(74), 1,
      sym_scoped_type_identifier,
    STATE(76), 1,
      sym_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(271), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(66), 4,
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
  [235] = 12,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_class_definition_repeat1,
    STATE(18), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(74), 1,
      sym_scoped_type_identifier,
    STATE(76), 1,
      sym_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(271), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
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
  [293] = 12,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(6), 1,
      aux_sym_class_definition_repeat1,
    STATE(18), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(74), 1,
      sym_scoped_type_identifier,
    STATE(76), 1,
      sym_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(270), 1,
      sym_class_definition,
    STATE(271), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
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
    ACTIONS(49), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(47), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(52), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_line,
    STATE(11), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(56), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_line,
    STATE(11), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
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
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(67), 2,
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
    STATE(23), 1,
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
  [542] = 3,
    ACTIONS(81), 1,
      sym_flag_value,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(79), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [571] = 2,
    ACTIONS(83), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(85), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [598] = 2,
    ACTIONS(47), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_Code_COLON,
    ACTIONS(52), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [625] = 4,
    ACTIONS(87), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(17), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(92), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
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
  [655] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(17), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(98), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(96), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [685] = 2,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [711] = 2,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [736] = 2,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [761] = 2,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [786] = 2,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
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
  [811] = 7,
    ACTIONS(120), 1,
      sym_interface_keyword,
    ACTIONS(124), 1,
      anon_sym_class,
    STATE(31), 1,
      aux_sym_modifiers_repeat1,
    STATE(161), 1,
      sym_modifiers,
    STATE(171), 1,
      sym_class_keyword,
    STATE(262), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(122), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [845] = 7,
    ACTIONS(124), 1,
      anon_sym_class,
    ACTIONS(126), 1,
      sym_interface_keyword,
    STATE(31), 1,
      aux_sym_modifiers_repeat1,
    STATE(151), 1,
      sym_modifiers,
    STATE(179), 1,
      sym_class_keyword,
    STATE(186), 1,
      sym_class_info_def,
    ACTIONS(122), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [878] = 9,
    ACTIONS(128), 1,
      anon_sym_GT,
    ACTIONS(130), 1,
      anon_sym_QMARK,
    ACTIONS(132), 1,
      sym__identifier,
    STATE(51), 1,
      sym_scoped_type_identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(68), 1,
      sym_generic_type,
    STATE(158), 1,
      sym_wildcard,
    STATE(78), 4,
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
  [914] = 5,
    STATE(27), 1,
      aux_sym_inner_classes_repeat1,
    STATE(31), 1,
      aux_sym_modifiers_repeat1,
    STATE(198), 1,
      sym_modifiers,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_NestHost_COLON,
    ACTIONS(136), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [942] = 5,
    STATE(27), 1,
      aux_sym_inner_classes_repeat1,
    STATE(31), 1,
      aux_sym_modifiers_repeat1,
    STATE(198), 1,
      sym_modifiers,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_NestHost_COLON,
    ACTIONS(122), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [970] = 3,
    STATE(29), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(87), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(141), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [993] = 7,
    ACTIONS(144), 1,
      anon_sym_Utf8,
    ACTIONS(146), 1,
      anon_sym_Class,
    ACTIONS(148), 1,
      anon_sym_String,
    ACTIONS(152), 1,
      anon_sym_NameAndType,
    ACTIONS(154), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(150), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(136), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
  [1024] = 3,
    STATE(29), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(94), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(156), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [1047] = 8,
    ACTIONS(130), 1,
      anon_sym_QMARK,
    ACTIONS(132), 1,
      sym__identifier,
    STATE(51), 1,
      sym_scoped_type_identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(68), 1,
      sym_generic_type,
    STATE(165), 1,
      sym_wildcard,
    STATE(93), 4,
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
  [1080] = 7,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(158), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(74), 1,
      sym_scoped_type_identifier,
    STATE(76), 1,
      sym_identifier,
    STATE(112), 1,
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
  [1110] = 4,
    STATE(28), 1,
      aux_sym_inner_classes_repeat1,
    STATE(31), 1,
      aux_sym_modifiers_repeat1,
    STATE(198), 1,
      sym_modifiers,
    ACTIONS(122), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [1134] = 7,
    ACTIONS(132), 1,
      sym__identifier,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_scoped_type_identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(68), 1,
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
  [1164] = 6,
    ACTIONS(132), 1,
      sym__identifier,
    STATE(51), 1,
      sym_scoped_type_identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(68), 1,
      sym_generic_type,
    STATE(84), 4,
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
  [1191] = 2,
    ACTIONS(164), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(162), 13,
      ts_builtin_sym_end,
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
  [1210] = 1,
    ACTIONS(166), 14,
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
  [1227] = 6,
    ACTIONS(132), 1,
      sym__identifier,
    STATE(51), 1,
      sym_scoped_type_identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(68), 1,
      sym_generic_type,
    STATE(65), 4,
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
  [1254] = 1,
    ACTIONS(168), 14,
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
  [1271] = 6,
    ACTIONS(132), 1,
      sym__identifier,
    STATE(51), 1,
      sym_scoped_type_identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(68), 1,
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
  [1298] = 6,
    ACTIONS(132), 1,
      sym__identifier,
    STATE(51), 1,
      sym_scoped_type_identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(68), 1,
      sym_generic_type,
    STATE(73), 4,
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
  [1325] = 6,
    ACTIONS(132), 1,
      sym__identifier,
    STATE(51), 1,
      sym_scoped_type_identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(68), 1,
      sym_generic_type,
    STATE(92), 4,
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
  [1352] = 1,
    ACTIONS(170), 14,
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
      anon_sym_NestHost_COLON,
  [1369] = 1,
    ACTIONS(172), 10,
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
  [1382] = 1,
    ACTIONS(174), 10,
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
  [1395] = 2,
    ACTIONS(178), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(176), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      anon_sym_DOT,
      anon_sym_EQ,
      sym_comment,
      anon_sym_Constantpool_COLON,
  [1409] = 1,
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
  [1421] = 1,
    ACTIONS(182), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1433] = 3,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(184), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1449] = 4,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      anon_sym_DOT,
    STATE(52), 1,
      sym_type_arguments,
    ACTIONS(188), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1467] = 1,
    ACTIONS(194), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1479] = 4,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(198), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_type_arguments,
    ACTIONS(196), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1497] = 1,
    ACTIONS(200), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1509] = 3,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(202), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1525] = 1,
    ACTIONS(207), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1537] = 1,
    ACTIONS(209), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1548] = 1,
    ACTIONS(202), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1559] = 1,
    ACTIONS(211), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1570] = 5,
    ACTIONS(213), 1,
      anon_sym_flags_COLON,
    ACTIONS(216), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(218), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(60), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(133), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1588] = 5,
    ACTIONS(221), 1,
      anon_sym_flags_COLON,
    ACTIONS(223), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(225), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(69), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(133), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1606] = 5,
    ACTIONS(221), 1,
      anon_sym_flags_COLON,
    ACTIONS(223), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(225), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(60), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(133), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1624] = 7,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(231), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(233), 1,
      anon_sym_NestHost_COLON,
    STATE(98), 1,
      sym_nested_members,
    STATE(153), 1,
      sym_inner_classes,
    STATE(250), 1,
      sym_nest_host,
  [1646] = 5,
    ACTIONS(221), 1,
      anon_sym_flags_COLON,
    ACTIONS(225), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(235), 1,
      anon_sym_Constantpool_COLON,
    STATE(62), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(133), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1664] = 6,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_AMP,
    STATE(50), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(118), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1684] = 7,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(50), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(143), 1,
      sym_args,
    STATE(183), 1,
      sym_identifier,
  [1706] = 7,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(50), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(147), 1,
      sym_args,
    STATE(148), 1,
      sym_identifier,
  [1728] = 2,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(188), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1740] = 5,
    ACTIONS(221), 1,
      anon_sym_flags_COLON,
    ACTIONS(225), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(245), 1,
      anon_sym_Constantpool_COLON,
    STATE(60), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(133), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1758] = 6,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(152), 1,
      aux_sym_method_throws_repeat1,
  [1777] = 5,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(100), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(253), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1794] = 4,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    ACTIONS(259), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [1809] = 4,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    ACTIONS(261), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1824] = 4,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      anon_sym_DOT,
    STATE(52), 1,
      sym_type_arguments,
    ACTIONS(188), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1839] = 4,
    ACTIONS(267), 1,
      anon_sym_POUND,
    STATE(265), 1,
      sym__hash_number,
    ACTIONS(265), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(75), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1854] = 4,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_type_arguments,
    ACTIONS(196), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1869] = 5,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(63), 1,
      sym_source_file_def,
    STATE(249), 1,
      sym_footer,
    STATE(115), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1886] = 6,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_GT,
    STATE(50), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(144), 1,
      aux_sym_type_arguments_repeat1,
  [1905] = 3,
    ACTIONS(282), 1,
      sym__identifier,
    STATE(83), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [1918] = 4,
    ACTIONS(286), 1,
      anon_sym_POUND,
    STATE(265), 1,
      sym__hash_number,
    ACTIONS(284), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(75), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1933] = 4,
    ACTIONS(286), 1,
      anon_sym_POUND,
    STATE(265), 1,
      sym__hash_number,
    ACTIONS(288), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(80), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1948] = 5,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(63), 1,
      sym_source_file_def,
    STATE(273), 1,
      sym_footer,
    STATE(77), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1965] = 3,
    ACTIONS(292), 1,
      sym__identifier,
    STATE(83), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(290), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [1978] = 6,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(134), 1,
      aux_sym_method_throws_repeat1,
  [1997] = 3,
    STATE(164), 1,
      sym__wildcard_bounds,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(299), 2,
      sym_extends,
      sym_super,
  [2009] = 5,
    ACTIONS(301), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(303), 1,
      sym__path_segment,
    ACTIONS(305), 1,
      anon_sym_SLASH,
    STATE(267), 1,
      sym__rest_of_the_line,
    STATE(268), 1,
      sym_file_path,
  [2025] = 4,
    ACTIONS(69), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(67), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2039] = 4,
    ACTIONS(52), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(47), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2053] = 3,
    ACTIONS(314), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(312), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2065] = 4,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(94), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(318), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2079] = 4,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(91), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(325), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2093] = 4,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2107] = 4,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2121] = 4,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(91), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(333), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2135] = 4,
    ACTIONS(45), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(41), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2149] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      sym_number,
    STATE(97), 1,
      aux_sym_code_info_repeat1,
    STATE(119), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2163] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      sym_number,
    STATE(149), 1,
      aux_sym_code_info_repeat1,
    STATE(116), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2177] = 5,
    ACTIONS(231), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(233), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_inner_classes,
    STATE(232), 1,
      sym_nest_host,
  [2193] = 1,
    ACTIONS(162), 5,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [2201] = 4,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(91), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(318), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2215] = 1,
    ACTIONS(176), 5,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_of,
      sym_comment,
  [2223] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_method_throws_repeat1,
    ACTIONS(261), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2234] = 2,
    ACTIONS(348), 1,
      sym_comment,
    ACTIONS(346), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2243] = 2,
    ACTIONS(164), 1,
      sym__identifier,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [2252] = 2,
    ACTIONS(352), 1,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2261] = 3,
    ACTIONS(79), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(354), 1,
      sym_flag_value,
    ACTIONS(77), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2272] = 4,
    ACTIONS(356), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(358), 1,
      anon_sym_SLASH,
    STATE(121), 1,
      aux_sym_file_path_repeat1,
    STATE(234), 1,
      sym__rest_of_the_line,
  [2285] = 2,
    ACTIONS(362), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2294] = 4,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 1,
      anon_sym_LT,
    STATE(192), 1,
      sym_type_parameters,
    STATE(229), 1,
      sym_class_def_plain_body,
  [2307] = 2,
    ACTIONS(83), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(85), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
  [2316] = 4,
    ACTIONS(368), 1,
      anon_sym_POUND,
    ACTIONS(370), 1,
      sym_number,
    ACTIONS(372), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__endl,
  [2329] = 2,
    ACTIONS(263), 1,
      anon_sym_DOT,
    ACTIONS(188), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [2338] = 4,
    ACTIONS(358), 1,
      anon_sym_SLASH,
    ACTIONS(376), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(146), 1,
      aux_sym_file_path_repeat1,
    STATE(275), 1,
      sym__rest_of_the_line,
  [2351] = 3,
    ACTIONS(378), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(380), 1,
      sym_number,
    STATE(114), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2362] = 3,
    ACTIONS(383), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(115), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [2373] = 3,
    ACTIONS(339), 1,
      sym_number,
    ACTIONS(388), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(114), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2384] = 3,
    ACTIONS(392), 1,
      sym_extends,
    STATE(201), 1,
      sym_type_bound,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2395] = 3,
    ACTIONS(239), 1,
      anon_sym_AMP,
    STATE(125), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2406] = 3,
    ACTIONS(339), 1,
      sym_number,
    ACTIONS(396), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(114), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2417] = 2,
    ACTIONS(52), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(47), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2426] = 4,
    ACTIONS(358), 1,
      anon_sym_SLASH,
    ACTIONS(398), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(146), 1,
      aux_sym_file_path_repeat1,
    STATE(231), 1,
      sym__rest_of_the_line,
  [2439] = 1,
    ACTIONS(400), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [2446] = 2,
    ACTIONS(404), 1,
      sym_comment,
    ACTIONS(402), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2455] = 2,
    ACTIONS(408), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(406), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2464] = 3,
    ACTIONS(410), 1,
      anon_sym_AMP,
    STATE(125), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(259), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2475] = 4,
    ACTIONS(358), 1,
      anon_sym_SLASH,
    ACTIONS(398), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(113), 1,
      aux_sym_file_path_repeat1,
    STATE(231), 1,
      sym__rest_of_the_line,
  [2488] = 4,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 1,
      anon_sym_LT,
    STATE(187), 1,
      sym_type_parameters,
    STATE(238), 1,
      sym_class_def_plain_body,
  [2501] = 3,
    ACTIONS(331), 1,
      anon_sym_GT,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_type_arguments_repeat1,
  [2511] = 3,
    ACTIONS(233), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    STATE(243), 1,
      sym_nest_host,
  [2521] = 1,
    ACTIONS(418), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2527] = 3,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_GT,
    STATE(163), 1,
      aux_sym_type_parameters_repeat1,
  [2537] = 3,
    ACTIONS(424), 1,
      aux_sym_code_info_stat_token1,
    STATE(96), 1,
      sym_code_info_stat,
    STATE(196), 1,
      sym_code_info,
  [2547] = 2,
    ACTIONS(428), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(426), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2555] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      aux_sym_method_throws_repeat1,
  [2565] = 1,
    ACTIONS(432), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2571] = 1,
    ACTIONS(434), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2577] = 3,
    ACTIONS(436), 1,
      anon_sym_descriptor_COLON,
    STATE(21), 1,
      sym__method_def_verbose,
    STATE(181), 1,
      sym_descriptor_def,
  [2587] = 1,
    ACTIONS(438), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2593] = 3,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_GT,
    STATE(131), 1,
      aux_sym_type_parameters_repeat1,
  [2603] = 1,
    ACTIONS(162), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_extends,
  [2609] = 1,
    ACTIONS(442), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2615] = 2,
    ACTIONS(444), 1,
      anon_sym_line,
    STATE(10), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [2623] = 3,
    ACTIONS(446), 1,
      anon_sym_SEMI,
    ACTIONS(448), 1,
      anon_sym_throws,
    STATE(233), 1,
      sym_method_throws,
  [2633] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_GT,
    STATE(128), 1,
      aux_sym_type_arguments_repeat1,
  [2643] = 3,
    ACTIONS(452), 1,
      sym__identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(172), 1,
      sym_type_parameter,
  [2653] = 3,
    ACTIONS(454), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    STATE(146), 1,
      aux_sym_file_path_repeat1,
  [2663] = 3,
    ACTIONS(448), 1,
      anon_sym_throws,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    STATE(242), 1,
      sym_method_throws,
  [2673] = 3,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    STATE(154), 1,
      sym_args,
  [2683] = 3,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      sym_number,
    STATE(149), 1,
      aux_sym_code_info_repeat1,
  [2693] = 3,
    ACTIONS(452), 1,
      sym__identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(139), 1,
      sym_type_parameter,
  [2703] = 3,
    ACTIONS(124), 1,
      anon_sym_class,
    ACTIONS(468), 1,
      sym_interface_keyword,
    STATE(200), 1,
      sym_class_keyword,
  [2713] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_method_throws_repeat1,
  [2723] = 3,
    ACTIONS(233), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    STATE(232), 1,
      sym_nest_host,
  [2733] = 3,
    ACTIONS(448), 1,
      anon_sym_throws,
    ACTIONS(472), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      sym_method_throws,
  [2743] = 3,
    ACTIONS(286), 1,
      anon_sym_POUND,
    ACTIONS(474), 1,
      sym_number,
    STATE(71), 1,
      sym__hash_number,
  [2753] = 3,
    ACTIONS(286), 1,
      anon_sym_POUND,
    ACTIONS(476), 1,
      sym_number,
    STATE(89), 1,
      sym__hash_number,
  [2763] = 2,
    ACTIONS(478), 1,
      sym__identifier,
    STATE(79), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [2771] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_GT,
    STATE(144), 1,
      aux_sym_type_arguments_repeat1,
  [2781] = 1,
    ACTIONS(480), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2787] = 1,
    ACTIONS(482), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2793] = 3,
    ACTIONS(124), 1,
      anon_sym_class,
    ACTIONS(484), 1,
      sym_interface_keyword,
    STATE(214), 1,
      sym_class_keyword,
  [2803] = 3,
    ACTIONS(356), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(486), 1,
      sym__path_segment,
    STATE(234), 1,
      sym__rest_of_the_line,
  [2813] = 3,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_GT,
    STATE(163), 1,
      aux_sym_type_parameters_repeat1,
  [2823] = 1,
    ACTIONS(493), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2828] = 1,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2833] = 2,
    ACTIONS(495), 1,
      anon_sym_Lastmodified,
    STATE(176), 1,
      sym_header_info_last_mod,
  [2840] = 2,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__wrapped_hex_val,
  [2847] = 2,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(127), 1,
      sym_identifier,
  [2854] = 2,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
  [2861] = 2,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
  [2868] = 2,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(213), 1,
      sym_identifier,
  [2875] = 1,
    ACTIONS(491), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2880] = 2,
    ACTIONS(499), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(219), 1,
      sym__rest_of_the_line,
  [2887] = 2,
    ACTIONS(501), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym__endl,
  [2894] = 2,
    ACTIONS(505), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym__wrapped_hex_val,
  [2901] = 2,
    ACTIONS(507), 1,
      anon_sym_MD5checksum,
    STATE(206), 1,
      sym_header_info_md5,
  [2908] = 1,
    ACTIONS(509), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [2913] = 2,
    ACTIONS(511), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__endl,
  [2920] = 2,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
  [2927] = 2,
    ACTIONS(515), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__endl,
  [2934] = 2,
    ACTIONS(519), 1,
      anon_sym_flags_COLON,
    STATE(13), 1,
      sym_flag_def,
  [2941] = 2,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_class_def_plain_body,
  [2948] = 2,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_args,
  [2955] = 2,
    ACTIONS(521), 1,
      aux_sym_instruction_token1,
    STATE(180), 1,
      sym_instruction,
  [2962] = 1,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      sym_number,
  [2967] = 2,
    ACTIONS(523), 1,
      anon_sym_Constantpool_COLON,
    STATE(82), 1,
      sym_constant_pool_def,
  [2974] = 2,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_class_def_plain_body,
  [2981] = 1,
    ACTIONS(525), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [2986] = 2,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
  [2993] = 2,
    ACTIONS(424), 1,
      aux_sym_code_info_stat_token1,
    STATE(185), 1,
      sym_code_info_stat,
  [3000] = 2,
    ACTIONS(527), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
  [3007] = 2,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(224), 1,
      sym_class_def_plain_body,
  [3014] = 1,
    ACTIONS(529), 2,
      anon_sym_COMMA,
      sym_number,
  [3019] = 1,
    ACTIONS(531), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [3024] = 2,
    ACTIONS(286), 1,
      anon_sym_POUND,
    STATE(239), 1,
      sym__hash_number,
  [3031] = 2,
    ACTIONS(533), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(22), 1,
      sym_line_number_table_def,
  [3038] = 2,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(244), 1,
      sym_identifier,
  [3045] = 2,
    ACTIONS(286), 1,
      anon_sym_POUND,
    STATE(251), 1,
      sym__hash_number,
  [3052] = 1,
    ACTIONS(454), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [3057] = 2,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(61), 1,
      sym_identifier,
  [3064] = 1,
    ACTIONS(535), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3069] = 1,
    ACTIONS(537), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3074] = 2,
    ACTIONS(539), 1,
      anon_sym_POUND,
    STATE(123), 1,
      sym__hash_number,
  [3081] = 2,
    ACTIONS(539), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym__hash_number,
  [3088] = 2,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(109), 1,
      sym_identifier,
  [3095] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(40), 1,
      sym_header_info_compile,
  [3102] = 2,
    ACTIONS(539), 1,
      anon_sym_POUND,
    STATE(225), 1,
      sym__hash_number,
  [3109] = 2,
    ACTIONS(286), 1,
      anon_sym_POUND,
    STATE(256), 1,
      sym__hash_number,
  [3116] = 2,
    ACTIONS(286), 1,
      anon_sym_POUND,
    STATE(257), 1,
      sym__hash_number,
  [3123] = 1,
    ACTIONS(541), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [3128] = 2,
    ACTIONS(539), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym__hash_number,
  [3135] = 2,
    ACTIONS(539), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym__hash_number,
  [3142] = 2,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(252), 1,
      sym_class_def_plain_body,
  [3149] = 2,
    ACTIONS(243), 1,
      sym__identifier,
    STATE(182), 1,
      sym_identifier,
  [3156] = 1,
    ACTIONS(543), 1,
      aux_sym_header_info_compile_token1,
  [3160] = 1,
    ACTIONS(545), 1,
      anon_sym_COLON,
  [3164] = 1,
    ACTIONS(547), 1,
      anon_sym_SEMI,
  [3168] = 1,
    ACTIONS(549), 1,
      sym_md5,
  [3172] = 1,
    ACTIONS(551), 1,
      anon_sym_MD5checksum,
  [3176] = 1,
    ACTIONS(553), 1,
      sym_decimal_floating_point_literal,
  [3180] = 1,
    ACTIONS(555), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [3184] = 1,
    ACTIONS(557), 1,
      aux_sym_class_info_item_simple_token1,
  [3188] = 1,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [3192] = 1,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
  [3196] = 1,
    ACTIONS(563), 1,
      anon_sym_of,
  [3200] = 1,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
  [3204] = 1,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
  [3208] = 1,
    ACTIONS(569), 1,
      sym_number,
  [3212] = 1,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
  [3216] = 1,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
  [3220] = 1,
    ACTIONS(575), 1,
      anon_sym_Lastmodified,
  [3224] = 1,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
  [3228] = 1,
    ACTIONS(459), 1,
      anon_sym_SEMI,
  [3232] = 1,
    ACTIONS(577), 1,
      anon_sym_Lastmodified,
  [3236] = 1,
    ACTIONS(579), 1,
      anon_sym_SEMI,
  [3240] = 1,
    ACTIONS(581), 1,
      anon_sym_COLON2,
  [3244] = 1,
    ACTIONS(583), 1,
      sym__path_segment,
  [3248] = 1,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
  [3252] = 1,
    ACTIONS(587), 1,
      anon_sym_SEMI,
  [3256] = 1,
    ACTIONS(589), 1,
      sym_number,
  [3260] = 1,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
  [3264] = 1,
    ACTIONS(472), 1,
      anon_sym_SEMI,
  [3268] = 1,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
  [3272] = 1,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
  [3276] = 1,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
  [3280] = 1,
    ACTIONS(599), 1,
      anon_sym_SEMI,
  [3284] = 1,
    ACTIONS(601), 1,
      sym_comment,
  [3288] = 1,
    ACTIONS(603), 1,
      anon_sym_flags_COLON,
  [3292] = 1,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
  [3296] = 1,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
  [3300] = 1,
    ACTIONS(607), 1,
      anon_sym_EQ,
  [3304] = 1,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
  [3308] = 1,
    ACTIONS(611), 1,
      sym_number,
  [3312] = 1,
    ACTIONS(613), 1,
      sym_number,
  [3316] = 1,
    ACTIONS(615), 1,
      sym_descriptor_value,
  [3320] = 1,
    ACTIONS(617), 1,
      anon_sym_COLON,
  [3324] = 1,
    ACTIONS(619), 1,
      anon_sym_DOT,
  [3328] = 1,
    ACTIONS(621), 1,
      anon_sym_Compiledfrom,
  [3332] = 1,
    ACTIONS(623), 1,
      sym_flag_value,
  [3336] = 1,
    ACTIONS(625), 1,
      anon_sym_LBRACE,
  [3340] = 1,
    ACTIONS(627), 1,
      anon_sym_class,
  [3344] = 1,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
  [3348] = 1,
    ACTIONS(631), 1,
      sym__identifier,
  [3352] = 1,
    ACTIONS(633), 1,
      sym_number,
  [3356] = 1,
    ACTIONS(635), 1,
      anon_sym_EQ,
  [3360] = 1,
    ACTIONS(637), 1,
      aux_sym_source_file_def_token1,
  [3364] = 1,
    ACTIONS(639), 1,
      anon_sym_Lastmodified,
  [3368] = 1,
    ACTIONS(641), 1,
      anon_sym_Lastmodified,
  [3372] = 1,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
  [3376] = 1,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
  [3380] = 1,
    ACTIONS(647), 1,
      anon_sym_SEMI,
  [3384] = 1,
    ACTIONS(649), 1,
      sym_hex_value,
  [3388] = 1,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
  [3392] = 1,
    ACTIONS(653), 1,
      sym_number,
  [3396] = 1,
    ACTIONS(655), 1,
      anon_sym_Lastmodified,
  [3400] = 1,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
  [3404] = 1,
    ACTIONS(659), 1,
      ts_builtin_sym_end,
  [3408] = 1,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
  [3412] = 1,
    ACTIONS(663), 1,
      sym_flag_value,
  [3416] = 1,
    ACTIONS(665), 1,
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
  [SMALL_STATE(9)] = 383,
  [SMALL_STATE(10)] = 415,
  [SMALL_STATE(11)] = 447,
  [SMALL_STATE(12)] = 479,
  [SMALL_STATE(13)] = 511,
  [SMALL_STATE(14)] = 542,
  [SMALL_STATE(15)] = 571,
  [SMALL_STATE(16)] = 598,
  [SMALL_STATE(17)] = 625,
  [SMALL_STATE(18)] = 655,
  [SMALL_STATE(19)] = 685,
  [SMALL_STATE(20)] = 711,
  [SMALL_STATE(21)] = 736,
  [SMALL_STATE(22)] = 761,
  [SMALL_STATE(23)] = 786,
  [SMALL_STATE(24)] = 811,
  [SMALL_STATE(25)] = 845,
  [SMALL_STATE(26)] = 878,
  [SMALL_STATE(27)] = 914,
  [SMALL_STATE(28)] = 942,
  [SMALL_STATE(29)] = 970,
  [SMALL_STATE(30)] = 993,
  [SMALL_STATE(31)] = 1024,
  [SMALL_STATE(32)] = 1047,
  [SMALL_STATE(33)] = 1080,
  [SMALL_STATE(34)] = 1110,
  [SMALL_STATE(35)] = 1134,
  [SMALL_STATE(36)] = 1164,
  [SMALL_STATE(37)] = 1191,
  [SMALL_STATE(38)] = 1210,
  [SMALL_STATE(39)] = 1227,
  [SMALL_STATE(40)] = 1254,
  [SMALL_STATE(41)] = 1271,
  [SMALL_STATE(42)] = 1298,
  [SMALL_STATE(43)] = 1325,
  [SMALL_STATE(44)] = 1352,
  [SMALL_STATE(45)] = 1369,
  [SMALL_STATE(46)] = 1382,
  [SMALL_STATE(47)] = 1395,
  [SMALL_STATE(48)] = 1409,
  [SMALL_STATE(49)] = 1421,
  [SMALL_STATE(50)] = 1433,
  [SMALL_STATE(51)] = 1449,
  [SMALL_STATE(52)] = 1467,
  [SMALL_STATE(53)] = 1479,
  [SMALL_STATE(54)] = 1497,
  [SMALL_STATE(55)] = 1509,
  [SMALL_STATE(56)] = 1525,
  [SMALL_STATE(57)] = 1537,
  [SMALL_STATE(58)] = 1548,
  [SMALL_STATE(59)] = 1559,
  [SMALL_STATE(60)] = 1570,
  [SMALL_STATE(61)] = 1588,
  [SMALL_STATE(62)] = 1606,
  [SMALL_STATE(63)] = 1624,
  [SMALL_STATE(64)] = 1646,
  [SMALL_STATE(65)] = 1664,
  [SMALL_STATE(66)] = 1684,
  [SMALL_STATE(67)] = 1706,
  [SMALL_STATE(68)] = 1728,
  [SMALL_STATE(69)] = 1740,
  [SMALL_STATE(70)] = 1758,
  [SMALL_STATE(71)] = 1777,
  [SMALL_STATE(72)] = 1794,
  [SMALL_STATE(73)] = 1809,
  [SMALL_STATE(74)] = 1824,
  [SMALL_STATE(75)] = 1839,
  [SMALL_STATE(76)] = 1854,
  [SMALL_STATE(77)] = 1869,
  [SMALL_STATE(78)] = 1886,
  [SMALL_STATE(79)] = 1905,
  [SMALL_STATE(80)] = 1918,
  [SMALL_STATE(81)] = 1933,
  [SMALL_STATE(82)] = 1948,
  [SMALL_STATE(83)] = 1965,
  [SMALL_STATE(84)] = 1978,
  [SMALL_STATE(85)] = 1997,
  [SMALL_STATE(86)] = 2009,
  [SMALL_STATE(87)] = 2025,
  [SMALL_STATE(88)] = 2039,
  [SMALL_STATE(89)] = 2053,
  [SMALL_STATE(90)] = 2065,
  [SMALL_STATE(91)] = 2079,
  [SMALL_STATE(92)] = 2093,
  [SMALL_STATE(93)] = 2107,
  [SMALL_STATE(94)] = 2121,
  [SMALL_STATE(95)] = 2135,
  [SMALL_STATE(96)] = 2149,
  [SMALL_STATE(97)] = 2163,
  [SMALL_STATE(98)] = 2177,
  [SMALL_STATE(99)] = 2193,
  [SMALL_STATE(100)] = 2201,
  [SMALL_STATE(101)] = 2215,
  [SMALL_STATE(102)] = 2223,
  [SMALL_STATE(103)] = 2234,
  [SMALL_STATE(104)] = 2243,
  [SMALL_STATE(105)] = 2252,
  [SMALL_STATE(106)] = 2261,
  [SMALL_STATE(107)] = 2272,
  [SMALL_STATE(108)] = 2285,
  [SMALL_STATE(109)] = 2294,
  [SMALL_STATE(110)] = 2307,
  [SMALL_STATE(111)] = 2316,
  [SMALL_STATE(112)] = 2329,
  [SMALL_STATE(113)] = 2338,
  [SMALL_STATE(114)] = 2351,
  [SMALL_STATE(115)] = 2362,
  [SMALL_STATE(116)] = 2373,
  [SMALL_STATE(117)] = 2384,
  [SMALL_STATE(118)] = 2395,
  [SMALL_STATE(119)] = 2406,
  [SMALL_STATE(120)] = 2417,
  [SMALL_STATE(121)] = 2426,
  [SMALL_STATE(122)] = 2439,
  [SMALL_STATE(123)] = 2446,
  [SMALL_STATE(124)] = 2455,
  [SMALL_STATE(125)] = 2464,
  [SMALL_STATE(126)] = 2475,
  [SMALL_STATE(127)] = 2488,
  [SMALL_STATE(128)] = 2501,
  [SMALL_STATE(129)] = 2511,
  [SMALL_STATE(130)] = 2521,
  [SMALL_STATE(131)] = 2527,
  [SMALL_STATE(132)] = 2537,
  [SMALL_STATE(133)] = 2547,
  [SMALL_STATE(134)] = 2555,
  [SMALL_STATE(135)] = 2565,
  [SMALL_STATE(136)] = 2571,
  [SMALL_STATE(137)] = 2577,
  [SMALL_STATE(138)] = 2587,
  [SMALL_STATE(139)] = 2593,
  [SMALL_STATE(140)] = 2603,
  [SMALL_STATE(141)] = 2609,
  [SMALL_STATE(142)] = 2615,
  [SMALL_STATE(143)] = 2623,
  [SMALL_STATE(144)] = 2633,
  [SMALL_STATE(145)] = 2643,
  [SMALL_STATE(146)] = 2653,
  [SMALL_STATE(147)] = 2663,
  [SMALL_STATE(148)] = 2673,
  [SMALL_STATE(149)] = 2683,
  [SMALL_STATE(150)] = 2693,
  [SMALL_STATE(151)] = 2703,
  [SMALL_STATE(152)] = 2713,
  [SMALL_STATE(153)] = 2723,
  [SMALL_STATE(154)] = 2733,
  [SMALL_STATE(155)] = 2743,
  [SMALL_STATE(156)] = 2753,
  [SMALL_STATE(157)] = 2763,
  [SMALL_STATE(158)] = 2771,
  [SMALL_STATE(159)] = 2781,
  [SMALL_STATE(160)] = 2787,
  [SMALL_STATE(161)] = 2793,
  [SMALL_STATE(162)] = 2803,
  [SMALL_STATE(163)] = 2813,
  [SMALL_STATE(164)] = 2823,
  [SMALL_STATE(165)] = 2828,
  [SMALL_STATE(166)] = 2833,
  [SMALL_STATE(167)] = 2840,
  [SMALL_STATE(168)] = 2847,
  [SMALL_STATE(169)] = 2854,
  [SMALL_STATE(170)] = 2861,
  [SMALL_STATE(171)] = 2868,
  [SMALL_STATE(172)] = 2875,
  [SMALL_STATE(173)] = 2880,
  [SMALL_STATE(174)] = 2887,
  [SMALL_STATE(175)] = 2894,
  [SMALL_STATE(176)] = 2901,
  [SMALL_STATE(177)] = 2908,
  [SMALL_STATE(178)] = 2913,
  [SMALL_STATE(179)] = 2920,
  [SMALL_STATE(180)] = 2927,
  [SMALL_STATE(181)] = 2934,
  [SMALL_STATE(182)] = 2941,
  [SMALL_STATE(183)] = 2948,
  [SMALL_STATE(184)] = 2955,
  [SMALL_STATE(185)] = 2962,
  [SMALL_STATE(186)] = 2967,
  [SMALL_STATE(187)] = 2974,
  [SMALL_STATE(188)] = 2981,
  [SMALL_STATE(189)] = 2986,
  [SMALL_STATE(190)] = 2993,
  [SMALL_STATE(191)] = 3000,
  [SMALL_STATE(192)] = 3007,
  [SMALL_STATE(193)] = 3014,
  [SMALL_STATE(194)] = 3019,
  [SMALL_STATE(195)] = 3024,
  [SMALL_STATE(196)] = 3031,
  [SMALL_STATE(197)] = 3038,
  [SMALL_STATE(198)] = 3045,
  [SMALL_STATE(199)] = 3052,
  [SMALL_STATE(200)] = 3057,
  [SMALL_STATE(201)] = 3064,
  [SMALL_STATE(202)] = 3069,
  [SMALL_STATE(203)] = 3074,
  [SMALL_STATE(204)] = 3081,
  [SMALL_STATE(205)] = 3088,
  [SMALL_STATE(206)] = 3095,
  [SMALL_STATE(207)] = 3102,
  [SMALL_STATE(208)] = 3109,
  [SMALL_STATE(209)] = 3116,
  [SMALL_STATE(210)] = 3123,
  [SMALL_STATE(211)] = 3128,
  [SMALL_STATE(212)] = 3135,
  [SMALL_STATE(213)] = 3142,
  [SMALL_STATE(214)] = 3149,
  [SMALL_STATE(215)] = 3156,
  [SMALL_STATE(216)] = 3160,
  [SMALL_STATE(217)] = 3164,
  [SMALL_STATE(218)] = 3168,
  [SMALL_STATE(219)] = 3172,
  [SMALL_STATE(220)] = 3176,
  [SMALL_STATE(221)] = 3180,
  [SMALL_STATE(222)] = 3184,
  [SMALL_STATE(223)] = 3188,
  [SMALL_STATE(224)] = 3192,
  [SMALL_STATE(225)] = 3196,
  [SMALL_STATE(226)] = 3200,
  [SMALL_STATE(227)] = 3204,
  [SMALL_STATE(228)] = 3208,
  [SMALL_STATE(229)] = 3212,
  [SMALL_STATE(230)] = 3216,
  [SMALL_STATE(231)] = 3220,
  [SMALL_STATE(232)] = 3224,
  [SMALL_STATE(233)] = 3228,
  [SMALL_STATE(234)] = 3232,
  [SMALL_STATE(235)] = 3236,
  [SMALL_STATE(236)] = 3240,
  [SMALL_STATE(237)] = 3244,
  [SMALL_STATE(238)] = 3248,
  [SMALL_STATE(239)] = 3252,
  [SMALL_STATE(240)] = 3256,
  [SMALL_STATE(241)] = 3260,
  [SMALL_STATE(242)] = 3264,
  [SMALL_STATE(243)] = 3268,
  [SMALL_STATE(244)] = 3272,
  [SMALL_STATE(245)] = 3276,
  [SMALL_STATE(246)] = 3280,
  [SMALL_STATE(247)] = 3284,
  [SMALL_STATE(248)] = 3288,
  [SMALL_STATE(249)] = 3292,
  [SMALL_STATE(250)] = 3296,
  [SMALL_STATE(251)] = 3300,
  [SMALL_STATE(252)] = 3304,
  [SMALL_STATE(253)] = 3308,
  [SMALL_STATE(254)] = 3312,
  [SMALL_STATE(255)] = 3316,
  [SMALL_STATE(256)] = 3320,
  [SMALL_STATE(257)] = 3324,
  [SMALL_STATE(258)] = 3328,
  [SMALL_STATE(259)] = 3332,
  [SMALL_STATE(260)] = 3336,
  [SMALL_STATE(261)] = 3340,
  [SMALL_STATE(262)] = 3344,
  [SMALL_STATE(263)] = 3348,
  [SMALL_STATE(264)] = 3352,
  [SMALL_STATE(265)] = 3356,
  [SMALL_STATE(266)] = 3360,
  [SMALL_STATE(267)] = 3364,
  [SMALL_STATE(268)] = 3368,
  [SMALL_STATE(269)] = 3372,
  [SMALL_STATE(270)] = 3376,
  [SMALL_STATE(271)] = 3380,
  [SMALL_STATE(272)] = 3384,
  [SMALL_STATE(273)] = 3388,
  [SMALL_STATE(274)] = 3392,
  [SMALL_STATE(275)] = 3396,
  [SMALL_STATE(276)] = 3400,
  [SMALL_STATE(277)] = 3404,
  [SMALL_STATE(278)] = 3408,
  [SMALL_STATE(279)] = 3412,
  [SMALL_STATE(280)] = 3416,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(18),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(59),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(99),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(18),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(59),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(99),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(279),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(240),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(17),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(31),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(245),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(175),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(155),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(264),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(104),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(259),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(222),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2), SHIFT_REPEAT(42),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(236),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(7),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(41),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(32),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(237),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(190),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(145),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nest_host, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_keyword, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [659] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
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
