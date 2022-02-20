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
#define STATE_COUNT 274
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 1
#define TOKEN_COUNT 83
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
  sym_comment = 59,
  anon_sym_Constantpool_COLON = 60,
  anon_sym_Utf8 = 61,
  aux_sym__constant_pool_item_type_utf8_token1 = 62,
  anon_sym_Class = 63,
  anon_sym_String = 64,
  anon_sym_Methodref = 65,
  anon_sym_Fieldref = 66,
  anon_sym_InterfaceMethodref = 67,
  anon_sym_NameAndType = 68,
  anon_sym_Double = 69,
  anon_sym_Float = 70,
  sym_decimal_floating_point_literal = 71,
  sym_class_keyword = 72,
  aux_sym_class_info_item_simple_token1 = 73,
  anon_sym_Lastmodified = 74,
  sym_md5 = 75,
  anon_sym_MD5checksum = 76,
  anon_sym_Compiledfrom = 77,
  aux_sym_header_info_compile_token1 = 78,
  sym__path_segment = 79,
  anon_sym_SLASH = 80,
  sym__endl = 81,
  anon_sym_Classfile = 82,
  sym_source_file = 83,
  sym__source_file_verbose = 84,
  sym__source_file_plain = 85,
  sym_class_def_plain = 86,
  sym_interface_def_plain = 87,
  sym_class_def_plain_body = 88,
  sym_class_def_plain_body_item = 89,
  sym_field_def = 90,
  sym_method_def = 91,
  sym_method_throws = 92,
  sym__method_def_verbose = 93,
  sym_static_block_def = 94,
  sym_type_parameters = 95,
  sym_type_parameter = 96,
  sym_type_bound = 97,
  sym_modifiers = 98,
  sym_class_definition = 99,
  sym_code_def = 100,
  sym_code_info = 101,
  sym_line_number_table_def = 102,
  sym_numered_line = 103,
  sym_numered_instruction = 104,
  sym_instruction = 105,
  sym_code_info_stat = 106,
  sym_descriptor_def = 107,
  sym_flag_def = 108,
  sym__wrapped_hex_val = 109,
  sym_args = 110,
  sym__type = 111,
  sym__simple_type = 112,
  sym_array_type = 113,
  sym_dimensions = 114,
  sym_scoped_type_identifier = 115,
  sym_generic_type = 116,
  sym_type_arguments = 117,
  sym_wildcard = 118,
  sym__wildcard_bounds = 119,
  sym_primitive_type = 120,
  sym_block = 121,
  sym_identifier = 122,
  sym_footer = 123,
  sym_source_file_def = 124,
  sym_nested_members = 125,
  sym_inner_classes = 126,
  sym_constant_pool_def = 127,
  sym__hash_number = 128,
  sym_constant_pool_item = 129,
  sym__constant_pool_item_type = 130,
  sym__constant_pool_item_type_utf8 = 131,
  sym__constant_pool_item_type_class = 132,
  sym__constant_pool_item_type_string = 133,
  sym__constant_pool_item_type_ref = 134,
  sym__constant_pool_item_type_name_and_type = 135,
  sym__constant_pool_item_type_double = 136,
  sym_class_info_def = 137,
  sym_class_info_item = 138,
  sym_class_info_item_simple = 139,
  sym_header_info_last_mod = 140,
  sym_header_info_md5 = 141,
  sym_header_info_compile = 142,
  sym_file_path = 143,
  sym__rest_of_the_line = 144,
  sym_header_info = 145,
  sym_header = 146,
  aux_sym__source_file_verbose_repeat1 = 147,
  aux_sym_class_def_plain_body_repeat1 = 148,
  aux_sym_method_throws_repeat1 = 149,
  aux_sym_type_parameters_repeat1 = 150,
  aux_sym_type_bound_repeat1 = 151,
  aux_sym_modifiers_repeat1 = 152,
  aux_sym_class_definition_repeat1 = 153,
  aux_sym_code_info_repeat1 = 154,
  aux_sym_code_info_repeat2 = 155,
  aux_sym_line_number_table_def_repeat1 = 156,
  aux_sym_flag_def_repeat1 = 157,
  aux_sym_dimensions_repeat1 = 158,
  aux_sym_type_arguments_repeat1 = 159,
  aux_sym_nested_members_repeat1 = 160,
  aux_sym_inner_classes_repeat1 = 161,
  aux_sym_constant_pool_def_repeat1 = 162,
  aux_sym_class_info_def_repeat1 = 163,
  aux_sym_class_info_item_simple_repeat1 = 164,
  aux_sym_file_path_repeat1 = 165,
  alias_sym_type_identifier = 166,
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
  [sym_footer] = "footer",
  [sym_source_file_def] = "source_file_def",
  [sym_nested_members] = "nested_members",
  [sym_inner_classes] = "inner_classes",
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
  [sym_footer] = sym_footer,
  [sym_source_file_def] = sym_source_file_def,
  [sym_nested_members] = sym_nested_members,
  [sym_inner_classes] = sym_inner_classes,
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
  [26] = 19,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 17,
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
  [70] = 52,
  [71] = 56,
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
  [85] = 10,
  [86] = 86,
  [87] = 87,
  [88] = 53,
  [89] = 89,
  [90] = 90,
  [91] = 42,
  [92] = 8,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 9,
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
  [111] = 15,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 16,
  [120] = 120,
  [121] = 14,
  [122] = 122,
  [123] = 66,
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
  [138] = 42,
  [139] = 139,
  [140] = 42,
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
  [182] = 175,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 179,
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
  [202] = 201,
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
  [267] = 217,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 266,
  [272] = 253,
  [273] = 236,
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
      if (eof) ADVANCE(385);
      if (lookahead == '"') ADVANCE(701);
      if (lookahead == '#') ADVANCE(439);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == ')') ADVANCE(557);
      if (lookahead == ',') ADVANCE(391);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(704);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(562);
      if (lookahead == 'C') ADVANCE(191);
      if (lookahead == 'D') ADVANCE(231);
      if (lookahead == 'F') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(307);
      if (lookahead == '[') ADVANCE(559);
      if (lookahead == ']') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'v') ADVANCE(235);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(697);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(443);
      if (lookahead != 0) ADVANCE(444);
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
      if (lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(698);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '#') ADVANCE(439);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(334);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == 'S') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == 'v') ADVANCE(239);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(379);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '#') ADVANCE(439);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(334);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == 'S') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == 'v') ADVANCE(239);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(379);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == ')') ADVANCE(557);
      if (lookahead == ',') ADVANCE(391);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(704);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == 'C') ADVANCE(460);
      if (lookahead == '[') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(557);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(562);
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == 'c') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(657);
      if (lookahead == 'f') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'v') ADVANCE(660);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(695);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(391);
      if (lookahead == '.') ADVANCE(347);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead == 'C') ADVANCE(656);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == 'c') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(589);
      if (lookahead == 'p') ADVANCE(663);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(695);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(728);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(341);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(707);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(706);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(340);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(4);
      END_STATE();
    case 19:
      if (lookahead == '8') ADVANCE(709);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(432);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(445);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(442);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(702);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(703);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(708);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(433);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '=') ADVANCE(441);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(441);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(222);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(521);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'b') ADVANCE(552);
      if (lookahead == 'c') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead == 'f') ADVANCE(502);
      if (lookahead == 'i') ADVANCE(517);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == 'p') ADVANCE(526);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == 'v') ADVANCE(522);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(695);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(205);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == 'D') ADVANCE(231);
      if (lookahead == 'F') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(124);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(295);
      if (lookahead == 'U') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 40:
      if (lookahead == 'F') ADVANCE(188);
      END_STATE();
    case 41:
      if (lookahead == 'M') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(147);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(324);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(337);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(727);
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
      if (lookahead == 'a') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == 'c') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(637);
      if (lookahead == 'n') ADVANCE(589);
      if (lookahead == 'p') ADVANCE(663);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(695);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
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
      if (lookahead == 'b') ADVANCE(287);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(140);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(408);
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
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(571);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(420);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(731);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(705);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(720);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(719);
      END_STATE();
    case 152:
      if (lookahead == 'f') ADVANCE(721);
      END_STATE();
    case 153:
      if (lookahead == 'f') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(377);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(246);
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
      if (lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 159:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 160:
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(718);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 163:
      if (lookahead == 'h') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 164:
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 167:
      if (lookahead == 'h') ADVANCE(264);
      END_STATE();
    case 168:
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
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
      if (lookahead == 'k') ADVANCE(281);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(411);
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
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(135);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
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
      if (lookahead == 'm') ADVANCE(733);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(734);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(248);
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
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(299);
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
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == 't') ADVANCE(271);
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
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(414);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 252:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(729);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(563);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(724);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 324:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 325:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 326:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 327:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 328:
      if (lookahead == 'u') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 329:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 330:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 331:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 332:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 333:
      if (lookahead == 'w') ADVANCE(275);
      END_STATE();
    case 334:
      if (lookahead == 'x') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 335:
      if (lookahead == 'x') ADVANCE(313);
      END_STATE();
    case 336:
      if (lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 337:
      if (lookahead == 'y') ADVANCE(251);
      END_STATE();
    case 338:
      if (lookahead == 'z') ADVANCE(134);
      END_STATE();
    case 339:
      if (lookahead == '}') ADVANCE(392);
      END_STATE();
    case 340:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(340);
      END_STATE();
    case 341:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(727);
      END_STATE();
    case 342:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(342)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 343:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(343)
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 344:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(344)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(699);
      END_STATE();
    case 345:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(736);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 346:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(346)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 347:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 348:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(727);
      END_STATE();
    case 349:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(732);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(558);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 382:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 383:
      if (eof) ADVANCE(385);
      if (lookahead == '"') ADVANCE(701);
      if (lookahead == '#') ADVANCE(439);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == ')') ADVANCE(557);
      if (lookahead == ',') ADVANCE(391);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(704);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(562);
      if (lookahead == 'C') ADVANCE(191);
      if (lookahead == 'D') ADVANCE(231);
      if (lookahead == 'F') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(307);
      if (lookahead == '[') ADVANCE(559);
      if (lookahead == ']') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'v') ADVANCE(235);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(697);
      END_STATE();
    case 384:
      if (eof) ADVANCE(385);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '(') ADVANCE(556);
      if (lookahead == ')') ADVANCE(557);
      if (lookahead == ',') ADVANCE(391);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == 'I') ADVANCE(655);
      if (lookahead == '[') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(695);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_public);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_protected);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_private);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_static);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_final);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_default);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_native);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_transient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_transient);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_line);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(340);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(445);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 's') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead == 'o') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'f') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'f') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'h') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'h') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == 'l') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == 'u') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead == 'y') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'v') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'v') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'y') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'z') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_extends);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_super);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_int);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_char);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_void);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_double);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_float);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(695);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(432);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(703);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(643);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(664);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(690);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(671);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(676);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(640);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(648);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'r') ADVANCE(634);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(677);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(684);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(604);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(685);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(695);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(672);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(646);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(642);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(398);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(410);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(627);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(681);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(679);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(686);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(611);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(573);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(401);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(422);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead == 'o') ADVANCE(689);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(583);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(582);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(576);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(404);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(431);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(608);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(605);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(665);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(609);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(669);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(652);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(662);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(587);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(586);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(667);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(692);
      if (lookahead == 'o') ADVANCE(683);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(694);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(661);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead == 'l') ADVANCE(594);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(607);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(691);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(603);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(600);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(601);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(653);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(623);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(645);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(413);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(661);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(613);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(588);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(678);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(616);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(635);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(602);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(670);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(675);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(590);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(629);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(680);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(617);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(620);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(654);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(606);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(689);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(631);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(651);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(632);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(593);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(416);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(628);
      if (lookahead == 'u') ADVANCE(598);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(570);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(585);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(591);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(659);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(595);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(584);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(638);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(673);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(687);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(622);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(592);
      if (lookahead == 'y') ADVANCE(647);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(567);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(633);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(579);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(419);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(407);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(428);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(624);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(612);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(619);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(639);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(615);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(618);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(668);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(636);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(599);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(644);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(614);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(596);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(682);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'z') ADVANCE(621);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(695);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(695);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(340);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(699);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_NestMembers_COLON);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_InnerClasses_COLON);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(707);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(742);
      if (lookahead != 0) ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(739);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(710);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(710);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(714);
      if (lookahead != 0) ADVANCE(715);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(712);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(712);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(714);
      if (lookahead != 0) ADVANCE(715);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(737);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(714);
      if (lookahead != 0) ADVANCE(715);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_InterfaceMethodref);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(727);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(736);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(737);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(714);
      if (lookahead != 0) ADVANCE(715);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(340);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(742);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 384},
  [46] = {.lex_state = 384},
  [47] = {.lex_state = 384},
  [48] = {.lex_state = 384},
  [49] = {.lex_state = 384},
  [50] = {.lex_state = 384},
  [51] = {.lex_state = 384},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 384},
  [55] = {.lex_state = 384},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 384},
  [58] = {.lex_state = 384},
  [59] = {.lex_state = 384},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 384},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 384},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 384},
  [71] = {.lex_state = 384},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 384},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 384},
  [90] = {.lex_state = 710},
  [91] = {.lex_state = 384},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 711},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 711},
  [116] = {.lex_state = 711},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 711},
  [123] = {.lex_state = 384},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 384},
  [127] = {.lex_state = 342},
  [128] = {.lex_state = 711},
  [129] = {.lex_state = 384},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 384},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 712},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 384},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 713},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 384},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 384},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 384},
  [176] = {.lex_state = 343},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 384},
  [179] = {.lex_state = 384},
  [180] = {.lex_state = 342},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 384},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 384},
  [187] = {.lex_state = 384},
  [188] = {.lex_state = 384},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 384},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
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
  [210] = {.lex_state = 711},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 713},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 344},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 14},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 345},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 14},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 342},
  [253] = {.lex_state = 346},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 14},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 346},
  [273] = {.lex_state = 8},
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
    [sym_class_keyword] = ACTIONS(1),
    [anon_sym_Lastmodified] = ACTIONS(1),
    [anon_sym_MD5checksum] = ACTIONS(1),
    [anon_sym_Compiledfrom] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(270),
    [sym__source_file_verbose] = STATE(269),
    [sym__source_file_plain] = STATE(269),
    [sym_header_info_compile] = STATE(24),
    [sym_header_info] = STATE(168),
    [sym_header] = STATE(32),
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
    STATE(17), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(70), 1,
      sym_scoped_type_identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(123), 1,
      sym_generic_type,
    STATE(4), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(227), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
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
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(70), 1,
      sym_scoped_type_identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(123), 1,
      sym_generic_type,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(227), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
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
  [118] = 12,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      sym__identifier,
    STATE(17), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(70), 1,
      sym_scoped_type_identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(123), 1,
      sym_generic_type,
    STATE(4), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(227), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(65), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(22), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(19), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    STATE(17), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(70), 1,
      sym_scoped_type_identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(123), 1,
      sym_generic_type,
    STATE(238), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(65), 4,
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
    STATE(7), 1,
      aux_sym_class_definition_repeat1,
    STATE(17), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(70), 1,
      sym_scoped_type_identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(123), 1,
      sym_generic_type,
    STATE(239), 1,
      sym_class_definition,
    STATE(238), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
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
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_class_definition_repeat1,
    STATE(17), 1,
      aux_sym_modifiers_repeat1,
    STATE(33), 1,
      sym_modifiers,
    STATE(70), 1,
      sym_scoped_type_identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(123), 1,
      sym_generic_type,
    STATE(238), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
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
    STATE(8), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(46), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(48), 2,
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
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(54), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
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
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_line,
    STATE(12), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(60), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_line,
    STATE(12), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(66), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    STATE(22), 1,
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
    ACTIONS(41), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_Code_COLON,
    ACTIONS(46), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [569] = 2,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(79), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [596] = 3,
    ACTIONS(85), 1,
      sym_flag_value,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(83), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    STATE(19), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(91), 7,
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
  [655] = 2,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [681] = 4,
    ACTIONS(97), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(19), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(102), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(99), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
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
  [811] = 6,
    ACTIONS(120), 1,
      sym_interface_keyword,
    ACTIONS(124), 1,
      sym_class_keyword,
    STATE(31), 1,
      aux_sym_modifiers_repeat1,
    STATE(162), 1,
      sym_modifiers,
    STATE(256), 2,
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
  [842] = 9,
    ACTIONS(126), 1,
      anon_sym_GT,
    ACTIONS(128), 1,
      anon_sym_QMARK,
    ACTIONS(130), 1,
      sym__identifier,
    STATE(52), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(66), 1,
      sym_generic_type,
    STATE(153), 1,
      sym_wildcard,
    STATE(69), 4,
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
  [878] = 3,
    STATE(26), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(97), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      sym_class_keyword,
    ACTIONS(132), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [901] = 8,
    ACTIONS(128), 1,
      anon_sym_QMARK,
    ACTIONS(130), 1,
      sym__identifier,
    STATE(52), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(66), 1,
      sym_generic_type,
    STATE(204), 1,
      sym_wildcard,
    STATE(100), 4,
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
  [934] = 5,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_inner_classes_repeat1,
    STATE(31), 1,
      aux_sym_modifiers_repeat1,
    STATE(194), 1,
      sym_modifiers,
    ACTIONS(137), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [961] = 5,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_inner_classes_repeat1,
    STATE(31), 1,
      aux_sym_modifiers_repeat1,
    STATE(194), 1,
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
  [988] = 7,
    ACTIONS(142), 1,
      anon_sym_Utf8,
    ACTIONS(144), 1,
      anon_sym_Class,
    ACTIONS(146), 1,
      anon_sym_String,
    ACTIONS(150), 1,
      anon_sym_NameAndType,
    ACTIONS(152), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(148), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(133), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
  [1019] = 3,
    STATE(26), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(87), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      sym_class_keyword,
    ACTIONS(154), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [1042] = 5,
    ACTIONS(156), 1,
      sym_interface_keyword,
    STATE(31), 1,
      aux_sym_modifiers_repeat1,
    STATE(169), 1,
      sym_class_info_def,
    STATE(250), 1,
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
  [1069] = 7,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(158), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(70), 1,
      sym_scoped_type_identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(123), 1,
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
  [1099] = 4,
    STATE(29), 1,
      aux_sym_inner_classes_repeat1,
    STATE(31), 1,
      aux_sym_modifiers_repeat1,
    STATE(194), 1,
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
  [1123] = 7,
    ACTIONS(130), 1,
      sym__identifier,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(66), 1,
      sym_generic_type,
    STATE(81), 4,
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
  [1153] = 6,
    ACTIONS(130), 1,
      sym__identifier,
    STATE(52), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(66), 1,
      sym_generic_type,
    STATE(74), 4,
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
  [1180] = 6,
    ACTIONS(130), 1,
      sym__identifier,
    STATE(52), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(66), 1,
      sym_generic_type,
    STATE(80), 4,
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
  [1207] = 6,
    ACTIONS(130), 1,
      sym__identifier,
    STATE(52), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(66), 1,
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
  [1234] = 6,
    ACTIONS(130), 1,
      sym__identifier,
    STATE(52), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(66), 1,
      sym_generic_type,
    STATE(64), 4,
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
  [1261] = 6,
    ACTIONS(130), 1,
      sym__identifier,
    STATE(52), 1,
      sym_scoped_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(66), 1,
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
  [1288] = 1,
    ACTIONS(162), 14,
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
  [1305] = 2,
    ACTIONS(166), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(164), 12,
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
  [1323] = 1,
    ACTIONS(168), 13,
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
  [1339] = 1,
    ACTIONS(170), 13,
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
  [1355] = 1,
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
  [1368] = 1,
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
  [1381] = 3,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(176), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1397] = 1,
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
  [1409] = 1,
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
  [1421] = 1,
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
  [1433] = 1,
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
  [1445] = 4,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_type_arguments,
    ACTIONS(188), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1463] = 2,
    ACTIONS(196), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(194), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      anon_sym_DOT,
      anon_sym_EQ,
      sym_comment,
      anon_sym_Constantpool_COLON,
  [1477] = 1,
    ACTIONS(198), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [1489] = 3,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(200), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__identifier,
  [1505] = 4,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym_type_arguments,
    ACTIONS(205), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1523] = 1,
    ACTIONS(209), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1534] = 1,
    ACTIONS(211), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1545] = 1,
    ACTIONS(200), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1556] = 5,
    ACTIONS(213), 1,
      anon_sym_flags_COLON,
    ACTIONS(215), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(217), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(62), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(132), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1574] = 5,
    ACTIONS(213), 1,
      anon_sym_flags_COLON,
    ACTIONS(215), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(217), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(63), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(132), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1592] = 5,
    ACTIONS(219), 1,
      anon_sym_flags_COLON,
    ACTIONS(222), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(224), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(62), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(132), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1610] = 5,
    ACTIONS(213), 1,
      anon_sym_flags_COLON,
    ACTIONS(217), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(227), 1,
      anon_sym_Constantpool_COLON,
    STATE(62), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(132), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1628] = 6,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_AMP,
    STATE(47), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(109), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1648] = 7,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(47), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(155), 1,
      sym_args,
    STATE(171), 1,
      sym_identifier,
  [1670] = 2,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(188), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [1682] = 7,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(47), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(142), 1,
      sym_args,
    STATE(143), 1,
      sym_identifier,
  [1704] = 5,
    ACTIONS(213), 1,
      anon_sym_flags_COLON,
    ACTIONS(217), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(237), 1,
      anon_sym_Constantpool_COLON,
    STATE(60), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(132), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [1722] = 6,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_GT,
    STATE(47), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(144), 1,
      aux_sym_type_arguments_repeat1,
  [1741] = 4,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_type_arguments,
    ACTIONS(188), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1756] = 4,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(245), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym_type_arguments,
    ACTIONS(205), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [1771] = 4,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    ACTIONS(247), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [1786] = 4,
    ACTIONS(251), 1,
      anon_sym_POUND,
    STATE(222), 1,
      sym__hash_number,
    ACTIONS(249), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(76), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1801] = 6,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(125), 1,
      aux_sym_method_throws_repeat1,
  [1820] = 5,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(87), 1,
      sym_source_file_def,
    STATE(211), 1,
      sym_footer,
    STATE(110), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1837] = 4,
    ACTIONS(251), 1,
      anon_sym_POUND,
    STATE(222), 1,
      sym__hash_number,
    ACTIONS(261), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(78), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1852] = 5,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(84), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(265), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1869] = 4,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(222), 1,
      sym__hash_number,
    ACTIONS(271), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(78), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [1884] = 5,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(87), 1,
      sym_source_file_def,
    STATE(224), 1,
      sym_footer,
    STATE(75), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [1901] = 4,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    ACTIONS(276), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1916] = 6,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    STATE(148), 1,
      aux_sym_method_throws_repeat1,
  [1935] = 4,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(82), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(283), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1949] = 4,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1963] = 4,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(82), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(289), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1977] = 4,
    ACTIONS(56), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(54), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1991] = 3,
    ACTIONS(297), 1,
      sym__identifier,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
    STATE(89), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [2003] = 5,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(303), 1,
      anon_sym_InnerClasses_COLON,
    STATE(156), 1,
      sym_nested_members,
    STATE(251), 1,
      sym_inner_classes,
  [2019] = 1,
    ACTIONS(194), 5,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_of,
      sym_comment,
  [2027] = 3,
    ACTIONS(307), 1,
      sym__identifier,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
    STATE(89), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [2039] = 5,
    ACTIONS(310), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(312), 1,
      sym__path_segment,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(261), 1,
      sym__rest_of_the_line,
    STATE(262), 1,
      sym_file_path,
  [2055] = 1,
    ACTIONS(164), 5,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym__identifier,
  [2063] = 4,
    ACTIONS(46), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(41), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2077] = 4,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      sym_number,
    STATE(151), 1,
      aux_sym_code_info_repeat1,
    STATE(113), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2091] = 4,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(96), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(289), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2105] = 3,
    ACTIONS(325), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(323), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2117] = 4,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(82), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(329), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2131] = 4,
    ACTIONS(52), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(48), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2145] = 3,
    STATE(161), 1,
      sym__wildcard_bounds,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(335), 2,
      sym_extends,
      sym_super,
  [2157] = 4,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      sym_number,
    STATE(93), 1,
      aux_sym_code_info_repeat1,
    STATE(102), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2171] = 4,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      aux_sym_dimensions_repeat1,
    STATE(57), 1,
      sym_dimensions,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2185] = 2,
    ACTIONS(341), 1,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2194] = 3,
    ACTIONS(321), 1,
      sym_number,
    ACTIONS(343), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(117), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2205] = 4,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    ACTIONS(347), 1,
      anon_sym_LT,
    STATE(183), 1,
      sym_type_parameters,
    STATE(228), 1,
      sym_class_def_plain_body,
  [2218] = 3,
    ACTIONS(349), 1,
      anon_sym_AMP,
    STATE(104), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2229] = 4,
    ACTIONS(352), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(354), 1,
      anon_sym_SLASH,
    STATE(128), 1,
      aux_sym_file_path_repeat1,
    STATE(225), 1,
      sym__rest_of_the_line,
  [2242] = 2,
    ACTIONS(358), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(356), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2251] = 2,
    ACTIONS(362), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2260] = 2,
    ACTIONS(366), 1,
      sym_comment,
    ACTIONS(364), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2269] = 3,
    ACTIONS(231), 1,
      anon_sym_AMP,
    STATE(104), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2280] = 3,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(110), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [2291] = 2,
    ACTIONS(77), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(79), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
  [2300] = 3,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_method_throws_repeat1,
    ACTIONS(276), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2311] = 3,
    ACTIONS(321), 1,
      sym_number,
    ACTIONS(378), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(117), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2322] = 4,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    ACTIONS(347), 1,
      anon_sym_LT,
    STATE(206), 1,
      sym_type_parameters,
    STATE(212), 1,
      sym_class_def_plain_body,
  [2335] = 4,
    ACTIONS(354), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(105), 1,
      aux_sym_file_path_repeat1,
    STATE(215), 1,
      sym__rest_of_the_line,
  [2348] = 4,
    ACTIONS(354), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(128), 1,
      aux_sym_file_path_repeat1,
    STATE(215), 1,
      sym__rest_of_the_line,
  [2361] = 3,
    ACTIONS(382), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(384), 1,
      sym_number,
    STATE(117), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [2372] = 4,
    ACTIONS(387), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      sym_number,
    ACTIONS(391), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__endl,
  [2385] = 3,
    ACTIONS(83), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(395), 1,
      sym_flag_value,
    ACTIONS(81), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2396] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2405] = 2,
    ACTIONS(46), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(41), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2414] = 4,
    ACTIONS(354), 1,
      anon_sym_SLASH,
    ACTIONS(401), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(116), 1,
      aux_sym_file_path_repeat1,
    STATE(242), 1,
      sym__rest_of_the_line,
  [2427] = 2,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(188), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [2436] = 3,
    ACTIONS(405), 1,
      sym_extends,
    STATE(195), 1,
      sym_type_bound,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2447] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      aux_sym_method_throws_repeat1,
  [2457] = 2,
    ACTIONS(409), 1,
      sym__identifier,
    STATE(86), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [2465] = 3,
    ACTIONS(411), 1,
      aux_sym_code_info_stat_token1,
    STATE(99), 1,
      sym_code_info_stat,
    STATE(192), 1,
      sym_code_info,
  [2475] = 3,
    ACTIONS(413), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(415), 1,
      anon_sym_SLASH,
    STATE(128), 1,
      aux_sym_file_path_repeat1,
  [2485] = 3,
    ACTIONS(418), 1,
      sym__identifier,
    STATE(124), 1,
      sym_identifier,
    STATE(147), 1,
      sym_type_parameter,
  [2495] = 3,
    ACTIONS(337), 1,
      anon_sym_GT,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_type_arguments_repeat1,
  [2505] = 3,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(423), 1,
      sym_number,
    STATE(77), 1,
      sym__hash_number,
  [2515] = 2,
    ACTIONS(427), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(425), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [2523] = 1,
    ACTIONS(429), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2529] = 3,
    ACTIONS(431), 1,
      anon_sym_descriptor_COLON,
    STATE(20), 1,
      sym__method_def_verbose,
    STATE(174), 1,
      sym_descriptor_def,
  [2539] = 1,
    ACTIONS(433), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2545] = 1,
    ACTIONS(435), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2551] = 1,
    ACTIONS(437), 3,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
  [2557] = 2,
    ACTIONS(166), 1,
      sym__identifier,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
  [2565] = 1,
    ACTIONS(439), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2571] = 1,
    ACTIONS(164), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_extends,
  [2577] = 3,
    ACTIONS(401), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(441), 1,
      sym__path_segment,
    STATE(242), 1,
      sym__rest_of_the_line,
  [2587] = 3,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    ACTIONS(445), 1,
      anon_sym_throws,
    STATE(235), 1,
      sym_method_throws,
  [2597] = 3,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(447), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      sym_args,
  [2607] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_GT,
    STATE(130), 1,
      aux_sym_type_arguments_repeat1,
  [2617] = 2,
    ACTIONS(451), 1,
      anon_sym_line,
    STATE(11), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [2625] = 3,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_GT,
    STATE(158), 1,
      aux_sym_type_parameters_repeat1,
  [2635] = 3,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_GT,
    STATE(146), 1,
      aux_sym_type_parameters_repeat1,
  [2645] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_method_throws_repeat1,
  [2655] = 3,
    ACTIONS(418), 1,
      sym__identifier,
    STATE(124), 1,
      sym_identifier,
    STATE(185), 1,
      sym_type_parameter,
  [2665] = 3,
    ACTIONS(445), 1,
      anon_sym_throws,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    STATE(214), 1,
      sym_method_throws,
  [2675] = 3,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      sym_number,
    STATE(151), 1,
      aux_sym_code_info_repeat1,
  [2685] = 1,
    ACTIONS(468), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2691] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_GT,
    STATE(144), 1,
      aux_sym_type_arguments_repeat1,
  [2701] = 1,
    ACTIONS(470), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2707] = 3,
    ACTIONS(445), 1,
      anon_sym_throws,
    ACTIONS(472), 1,
      anon_sym_SEMI,
    STATE(259), 1,
      sym_method_throws,
  [2717] = 3,
    ACTIONS(303), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    STATE(264), 1,
      sym_inner_classes,
  [2727] = 1,
    ACTIONS(476), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [2733] = 3,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_GT,
    STATE(158), 1,
      aux_sym_type_parameters_repeat1,
  [2743] = 3,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(483), 1,
      sym_number,
    STATE(95), 1,
      sym__hash_number,
  [2753] = 2,
    ACTIONS(485), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__endl,
  [2760] = 1,
    ACTIONS(489), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2765] = 2,
    ACTIONS(491), 1,
      sym_interface_keyword,
    ACTIONS(493), 1,
      sym_class_keyword,
  [2772] = 2,
    ACTIONS(495), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(231), 1,
      sym__rest_of_the_line,
  [2779] = 2,
    ACTIONS(497), 1,
      anon_sym_MD5checksum,
    STATE(184), 1,
      sym_header_info_md5,
  [2786] = 2,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(68), 1,
      sym_identifier,
  [2793] = 2,
    ACTIONS(499), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__endl,
  [2800] = 1,
    ACTIONS(503), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [2805] = 2,
    ACTIONS(505), 1,
      anon_sym_Lastmodified,
    STATE(164), 1,
      sym_header_info_last_mod,
  [2812] = 2,
    ACTIONS(507), 1,
      anon_sym_Constantpool_COLON,
    STATE(79), 1,
      sym_constant_pool_def,
  [2819] = 2,
    ACTIONS(509), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym__endl,
  [2826] = 2,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_args,
  [2833] = 2,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_class_def_plain_body,
  [2840] = 2,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(103), 1,
      sym_identifier,
  [2847] = 2,
    ACTIONS(513), 1,
      anon_sym_flags_COLON,
    STATE(13), 1,
      sym_flag_def,
  [2854] = 2,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
  [2861] = 2,
    ACTIONS(517), 1,
      aux_sym_instruction_token1,
    STATE(170), 1,
      sym_instruction,
  [2868] = 1,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      sym_number,
  [2873] = 2,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(203), 1,
      sym_identifier,
  [2880] = 2,
    ACTIONS(515), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
  [2887] = 2,
    ACTIONS(411), 1,
      aux_sym_code_info_stat_token1,
    STATE(177), 1,
      sym_code_info_stat,
  [2894] = 1,
    ACTIONS(519), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [2899] = 2,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(45), 1,
      sym_identifier,
  [2906] = 2,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(265), 1,
      sym_class_def_plain_body,
  [2913] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(44), 1,
      sym_header_info_compile,
  [2920] = 1,
    ACTIONS(481), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2925] = 2,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
  [2932] = 2,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(172), 1,
      sym_identifier,
  [2939] = 2,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(114), 1,
      sym_identifier,
  [2946] = 1,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      sym_number,
  [2951] = 2,
    ACTIONS(251), 1,
      anon_sym_POUND,
    STATE(232), 1,
      sym__hash_number,
  [2958] = 2,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(61), 1,
      sym_identifier,
  [2965] = 2,
    ACTIONS(523), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(23), 1,
      sym_line_number_table_def,
  [2972] = 1,
    ACTIONS(525), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [2977] = 2,
    ACTIONS(251), 1,
      anon_sym_POUND,
    STATE(237), 1,
      sym__hash_number,
  [2984] = 1,
    ACTIONS(527), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2989] = 2,
    ACTIONS(529), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym__hash_number,
  [2996] = 2,
    ACTIONS(529), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym__hash_number,
  [3003] = 2,
    ACTIONS(529), 1,
      anon_sym_POUND,
    STATE(218), 1,
      sym__hash_number,
  [3010] = 1,
    ACTIONS(531), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3015] = 1,
    ACTIONS(533), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [3020] = 2,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym__wrapped_hex_val,
  [3027] = 2,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym__wrapped_hex_val,
  [3034] = 2,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(234), 1,
      sym_class_def_plain_body,
  [3041] = 1,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3046] = 2,
    ACTIONS(251), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym__hash_number,
  [3053] = 2,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_class_def_plain_body,
  [3060] = 2,
    ACTIONS(251), 1,
      anon_sym_POUND,
    STATE(248), 1,
      sym__hash_number,
  [3067] = 2,
    ACTIONS(529), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym__hash_number,
  [3074] = 2,
    ACTIONS(529), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym__hash_number,
  [3081] = 1,
    ACTIONS(413), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [3086] = 1,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
  [3090] = 1,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
  [3094] = 1,
    ACTIONS(543), 1,
      anon_sym_flags_COLON,
  [3098] = 1,
    ACTIONS(545), 1,
      anon_sym_SEMI,
  [3102] = 1,
    ACTIONS(547), 1,
      anon_sym_Lastmodified,
  [3106] = 1,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
  [3110] = 1,
    ACTIONS(551), 1,
      sym_number,
  [3114] = 1,
    ACTIONS(553), 1,
      anon_sym_of,
  [3118] = 1,
    ACTIONS(555), 1,
      anon_sym_Compiledfrom,
  [3122] = 1,
    ACTIONS(557), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [3126] = 1,
    ACTIONS(559), 1,
      sym_number,
  [3130] = 1,
    ACTIONS(561), 1,
      anon_sym_EQ,
  [3134] = 1,
    ACTIONS(563), 1,
      aux_sym_source_file_def_token1,
  [3138] = 1,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
  [3142] = 1,
    ACTIONS(567), 1,
      anon_sym_Lastmodified,
  [3146] = 1,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
  [3150] = 1,
    ACTIONS(571), 1,
      anon_sym_SEMI,
  [3154] = 1,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
  [3158] = 1,
    ACTIONS(575), 1,
      anon_sym_COLON2,
  [3162] = 1,
    ACTIONS(577), 1,
      sym_md5,
  [3166] = 1,
    ACTIONS(579), 1,
      anon_sym_MD5checksum,
  [3170] = 1,
    ACTIONS(581), 1,
      anon_sym_SEMI,
  [3174] = 1,
    ACTIONS(583), 1,
      sym_number,
  [3178] = 1,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
  [3182] = 1,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [3186] = 1,
    ACTIONS(587), 1,
      sym_hex_value,
  [3190] = 1,
    ACTIONS(589), 1,
      anon_sym_EQ,
  [3194] = 1,
    ACTIONS(591), 1,
      anon_sym_SEMI,
  [3198] = 1,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
  [3202] = 1,
    ACTIONS(595), 1,
      sym_comment,
  [3206] = 1,
    ACTIONS(597), 1,
      anon_sym_COLON,
  [3210] = 1,
    ACTIONS(599), 1,
      anon_sym_Lastmodified,
  [3214] = 1,
    ACTIONS(601), 1,
      sym__path_segment,
  [3218] = 1,
    ACTIONS(603), 1,
      sym_descriptor_value,
  [3222] = 1,
    ACTIONS(605), 1,
      anon_sym_COLON,
  [3226] = 1,
    ACTIONS(607), 1,
      sym_number,
  [3230] = 1,
    ACTIONS(609), 1,
      sym_number,
  [3234] = 1,
    ACTIONS(611), 1,
      anon_sym_DOT,
  [3238] = 1,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
  [3242] = 1,
    ACTIONS(615), 1,
      sym_class_keyword,
  [3246] = 1,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
  [3250] = 1,
    ACTIONS(617), 1,
      aux_sym_class_info_item_simple_token1,
  [3254] = 1,
    ACTIONS(619), 1,
      sym_flag_value,
  [3258] = 1,
    ACTIONS(621), 1,
      anon_sym_SEMI,
  [3262] = 1,
    ACTIONS(623), 1,
      anon_sym_RBRACK,
  [3266] = 1,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
  [3270] = 1,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
  [3274] = 1,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
  [3278] = 1,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [3282] = 1,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
  [3286] = 1,
    ACTIONS(633), 1,
      anon_sym_Lastmodified,
  [3290] = 1,
    ACTIONS(635), 1,
      anon_sym_Lastmodified,
  [3294] = 1,
    ACTIONS(637), 1,
      aux_sym_header_info_compile_token1,
  [3298] = 1,
    ACTIONS(639), 1,
      ts_builtin_sym_end,
  [3302] = 1,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
  [3306] = 1,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [3310] = 1,
    ACTIONS(645), 1,
      sym_number,
  [3314] = 1,
    ACTIONS(647), 1,
      sym_decimal_floating_point_literal,
  [3318] = 1,
    ACTIONS(649), 1,
      ts_builtin_sym_end,
  [3322] = 1,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
  [3326] = 1,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
  [3330] = 1,
    ACTIONS(655), 1,
      sym_flag_value,
  [3334] = 1,
    ACTIONS(657), 1,
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
  [SMALL_STATE(15)] = 569,
  [SMALL_STATE(16)] = 596,
  [SMALL_STATE(17)] = 625,
  [SMALL_STATE(18)] = 655,
  [SMALL_STATE(19)] = 681,
  [SMALL_STATE(20)] = 711,
  [SMALL_STATE(21)] = 736,
  [SMALL_STATE(22)] = 761,
  [SMALL_STATE(23)] = 786,
  [SMALL_STATE(24)] = 811,
  [SMALL_STATE(25)] = 842,
  [SMALL_STATE(26)] = 878,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 934,
  [SMALL_STATE(29)] = 961,
  [SMALL_STATE(30)] = 988,
  [SMALL_STATE(31)] = 1019,
  [SMALL_STATE(32)] = 1042,
  [SMALL_STATE(33)] = 1069,
  [SMALL_STATE(34)] = 1099,
  [SMALL_STATE(35)] = 1123,
  [SMALL_STATE(36)] = 1153,
  [SMALL_STATE(37)] = 1180,
  [SMALL_STATE(38)] = 1207,
  [SMALL_STATE(39)] = 1234,
  [SMALL_STATE(40)] = 1261,
  [SMALL_STATE(41)] = 1288,
  [SMALL_STATE(42)] = 1305,
  [SMALL_STATE(43)] = 1323,
  [SMALL_STATE(44)] = 1339,
  [SMALL_STATE(45)] = 1355,
  [SMALL_STATE(46)] = 1368,
  [SMALL_STATE(47)] = 1381,
  [SMALL_STATE(48)] = 1397,
  [SMALL_STATE(49)] = 1409,
  [SMALL_STATE(50)] = 1421,
  [SMALL_STATE(51)] = 1433,
  [SMALL_STATE(52)] = 1445,
  [SMALL_STATE(53)] = 1463,
  [SMALL_STATE(54)] = 1477,
  [SMALL_STATE(55)] = 1489,
  [SMALL_STATE(56)] = 1505,
  [SMALL_STATE(57)] = 1523,
  [SMALL_STATE(58)] = 1534,
  [SMALL_STATE(59)] = 1545,
  [SMALL_STATE(60)] = 1556,
  [SMALL_STATE(61)] = 1574,
  [SMALL_STATE(62)] = 1592,
  [SMALL_STATE(63)] = 1610,
  [SMALL_STATE(64)] = 1628,
  [SMALL_STATE(65)] = 1648,
  [SMALL_STATE(66)] = 1670,
  [SMALL_STATE(67)] = 1682,
  [SMALL_STATE(68)] = 1704,
  [SMALL_STATE(69)] = 1722,
  [SMALL_STATE(70)] = 1741,
  [SMALL_STATE(71)] = 1756,
  [SMALL_STATE(72)] = 1771,
  [SMALL_STATE(73)] = 1786,
  [SMALL_STATE(74)] = 1801,
  [SMALL_STATE(75)] = 1820,
  [SMALL_STATE(76)] = 1837,
  [SMALL_STATE(77)] = 1852,
  [SMALL_STATE(78)] = 1869,
  [SMALL_STATE(79)] = 1884,
  [SMALL_STATE(80)] = 1901,
  [SMALL_STATE(81)] = 1916,
  [SMALL_STATE(82)] = 1935,
  [SMALL_STATE(83)] = 1949,
  [SMALL_STATE(84)] = 1963,
  [SMALL_STATE(85)] = 1977,
  [SMALL_STATE(86)] = 1991,
  [SMALL_STATE(87)] = 2003,
  [SMALL_STATE(88)] = 2019,
  [SMALL_STATE(89)] = 2027,
  [SMALL_STATE(90)] = 2039,
  [SMALL_STATE(91)] = 2055,
  [SMALL_STATE(92)] = 2063,
  [SMALL_STATE(93)] = 2077,
  [SMALL_STATE(94)] = 2091,
  [SMALL_STATE(95)] = 2105,
  [SMALL_STATE(96)] = 2117,
  [SMALL_STATE(97)] = 2131,
  [SMALL_STATE(98)] = 2145,
  [SMALL_STATE(99)] = 2157,
  [SMALL_STATE(100)] = 2171,
  [SMALL_STATE(101)] = 2185,
  [SMALL_STATE(102)] = 2194,
  [SMALL_STATE(103)] = 2205,
  [SMALL_STATE(104)] = 2218,
  [SMALL_STATE(105)] = 2229,
  [SMALL_STATE(106)] = 2242,
  [SMALL_STATE(107)] = 2251,
  [SMALL_STATE(108)] = 2260,
  [SMALL_STATE(109)] = 2269,
  [SMALL_STATE(110)] = 2280,
  [SMALL_STATE(111)] = 2291,
  [SMALL_STATE(112)] = 2300,
  [SMALL_STATE(113)] = 2311,
  [SMALL_STATE(114)] = 2322,
  [SMALL_STATE(115)] = 2335,
  [SMALL_STATE(116)] = 2348,
  [SMALL_STATE(117)] = 2361,
  [SMALL_STATE(118)] = 2372,
  [SMALL_STATE(119)] = 2385,
  [SMALL_STATE(120)] = 2396,
  [SMALL_STATE(121)] = 2405,
  [SMALL_STATE(122)] = 2414,
  [SMALL_STATE(123)] = 2427,
  [SMALL_STATE(124)] = 2436,
  [SMALL_STATE(125)] = 2447,
  [SMALL_STATE(126)] = 2457,
  [SMALL_STATE(127)] = 2465,
  [SMALL_STATE(128)] = 2475,
  [SMALL_STATE(129)] = 2485,
  [SMALL_STATE(130)] = 2495,
  [SMALL_STATE(131)] = 2505,
  [SMALL_STATE(132)] = 2515,
  [SMALL_STATE(133)] = 2523,
  [SMALL_STATE(134)] = 2529,
  [SMALL_STATE(135)] = 2539,
  [SMALL_STATE(136)] = 2545,
  [SMALL_STATE(137)] = 2551,
  [SMALL_STATE(138)] = 2557,
  [SMALL_STATE(139)] = 2565,
  [SMALL_STATE(140)] = 2571,
  [SMALL_STATE(141)] = 2577,
  [SMALL_STATE(142)] = 2587,
  [SMALL_STATE(143)] = 2597,
  [SMALL_STATE(144)] = 2607,
  [SMALL_STATE(145)] = 2617,
  [SMALL_STATE(146)] = 2625,
  [SMALL_STATE(147)] = 2635,
  [SMALL_STATE(148)] = 2645,
  [SMALL_STATE(149)] = 2655,
  [SMALL_STATE(150)] = 2665,
  [SMALL_STATE(151)] = 2675,
  [SMALL_STATE(152)] = 2685,
  [SMALL_STATE(153)] = 2691,
  [SMALL_STATE(154)] = 2701,
  [SMALL_STATE(155)] = 2707,
  [SMALL_STATE(156)] = 2717,
  [SMALL_STATE(157)] = 2727,
  [SMALL_STATE(158)] = 2733,
  [SMALL_STATE(159)] = 2743,
  [SMALL_STATE(160)] = 2753,
  [SMALL_STATE(161)] = 2760,
  [SMALL_STATE(162)] = 2765,
  [SMALL_STATE(163)] = 2772,
  [SMALL_STATE(164)] = 2779,
  [SMALL_STATE(165)] = 2786,
  [SMALL_STATE(166)] = 2793,
  [SMALL_STATE(167)] = 2800,
  [SMALL_STATE(168)] = 2805,
  [SMALL_STATE(169)] = 2812,
  [SMALL_STATE(170)] = 2819,
  [SMALL_STATE(171)] = 2826,
  [SMALL_STATE(172)] = 2833,
  [SMALL_STATE(173)] = 2840,
  [SMALL_STATE(174)] = 2847,
  [SMALL_STATE(175)] = 2854,
  [SMALL_STATE(176)] = 2861,
  [SMALL_STATE(177)] = 2868,
  [SMALL_STATE(178)] = 2873,
  [SMALL_STATE(179)] = 2880,
  [SMALL_STATE(180)] = 2887,
  [SMALL_STATE(181)] = 2894,
  [SMALL_STATE(182)] = 2899,
  [SMALL_STATE(183)] = 2906,
  [SMALL_STATE(184)] = 2913,
  [SMALL_STATE(185)] = 2920,
  [SMALL_STATE(186)] = 2925,
  [SMALL_STATE(187)] = 2932,
  [SMALL_STATE(188)] = 2939,
  [SMALL_STATE(189)] = 2946,
  [SMALL_STATE(190)] = 2951,
  [SMALL_STATE(191)] = 2958,
  [SMALL_STATE(192)] = 2965,
  [SMALL_STATE(193)] = 2972,
  [SMALL_STATE(194)] = 2977,
  [SMALL_STATE(195)] = 2984,
  [SMALL_STATE(196)] = 2989,
  [SMALL_STATE(197)] = 2996,
  [SMALL_STATE(198)] = 3003,
  [SMALL_STATE(199)] = 3010,
  [SMALL_STATE(200)] = 3015,
  [SMALL_STATE(201)] = 3020,
  [SMALL_STATE(202)] = 3027,
  [SMALL_STATE(203)] = 3034,
  [SMALL_STATE(204)] = 3041,
  [SMALL_STATE(205)] = 3046,
  [SMALL_STATE(206)] = 3053,
  [SMALL_STATE(207)] = 3060,
  [SMALL_STATE(208)] = 3067,
  [SMALL_STATE(209)] = 3074,
  [SMALL_STATE(210)] = 3081,
  [SMALL_STATE(211)] = 3086,
  [SMALL_STATE(212)] = 3090,
  [SMALL_STATE(213)] = 3094,
  [SMALL_STATE(214)] = 3098,
  [SMALL_STATE(215)] = 3102,
  [SMALL_STATE(216)] = 3106,
  [SMALL_STATE(217)] = 3110,
  [SMALL_STATE(218)] = 3114,
  [SMALL_STATE(219)] = 3118,
  [SMALL_STATE(220)] = 3122,
  [SMALL_STATE(221)] = 3126,
  [SMALL_STATE(222)] = 3130,
  [SMALL_STATE(223)] = 3134,
  [SMALL_STATE(224)] = 3138,
  [SMALL_STATE(225)] = 3142,
  [SMALL_STATE(226)] = 3146,
  [SMALL_STATE(227)] = 3150,
  [SMALL_STATE(228)] = 3154,
  [SMALL_STATE(229)] = 3158,
  [SMALL_STATE(230)] = 3162,
  [SMALL_STATE(231)] = 3166,
  [SMALL_STATE(232)] = 3170,
  [SMALL_STATE(233)] = 3174,
  [SMALL_STATE(234)] = 3178,
  [SMALL_STATE(235)] = 3182,
  [SMALL_STATE(236)] = 3186,
  [SMALL_STATE(237)] = 3190,
  [SMALL_STATE(238)] = 3194,
  [SMALL_STATE(239)] = 3198,
  [SMALL_STATE(240)] = 3202,
  [SMALL_STATE(241)] = 3206,
  [SMALL_STATE(242)] = 3210,
  [SMALL_STATE(243)] = 3214,
  [SMALL_STATE(244)] = 3218,
  [SMALL_STATE(245)] = 3222,
  [SMALL_STATE(246)] = 3226,
  [SMALL_STATE(247)] = 3230,
  [SMALL_STATE(248)] = 3234,
  [SMALL_STATE(249)] = 3238,
  [SMALL_STATE(250)] = 3242,
  [SMALL_STATE(251)] = 3246,
  [SMALL_STATE(252)] = 3250,
  [SMALL_STATE(253)] = 3254,
  [SMALL_STATE(254)] = 3258,
  [SMALL_STATE(255)] = 3262,
  [SMALL_STATE(256)] = 3266,
  [SMALL_STATE(257)] = 3270,
  [SMALL_STATE(258)] = 3274,
  [SMALL_STATE(259)] = 3278,
  [SMALL_STATE(260)] = 3282,
  [SMALL_STATE(261)] = 3286,
  [SMALL_STATE(262)] = 3290,
  [SMALL_STATE(263)] = 3294,
  [SMALL_STATE(264)] = 3298,
  [SMALL_STATE(265)] = 3302,
  [SMALL_STATE(266)] = 3306,
  [SMALL_STATE(267)] = 3310,
  [SMALL_STATE(268)] = 3314,
  [SMALL_STATE(269)] = 3318,
  [SMALL_STATE(270)] = 3322,
  [SMALL_STATE(271)] = 3326,
  [SMALL_STATE(272)] = 3330,
  [SMALL_STATE(273)] = 3334,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(17),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(58),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(91),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(17),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(58),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(91),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(272),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(233),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(31),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(255),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(202),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(131),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(217),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(252),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(138),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(253),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(40),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(6),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_throws_repeat1, 2), SHIFT_REPEAT(37),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(229),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(243),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(27),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(180),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(149),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [651] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
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
