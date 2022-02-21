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
#define STATE_COUNT 504
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 216
#define ALIAS_COUNT 1
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 20

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
  anon_sym_AnnotationDefault_COLON = 10,
  anon_sym_default_value_COLON = 11,
  aux_sym_annotation_default_token1 = 12,
  anon_sym_Deprecated_COLON = 13,
  anon_sym_RuntimeVisibleAnnotations_COLON = 14,
  anon_sym_COLON = 15,
  anon_sym_LPAREN_RPAREN = 16,
  anon_sym_Exceptions_COLON = 17,
  anon_sym_LBRACE_RBRACE = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_AMP = 21,
  anon_sym_public = 22,
  anon_sym_protected = 23,
  anon_sym_private = 24,
  anon_sym_abstract = 25,
  anon_sym_static = 26,
  anon_sym_final = 27,
  anon_sym_strictfp = 28,
  anon_sym_default = 29,
  anon_sym_synchronized = 30,
  anon_sym_native = 31,
  anon_sym_transient = 32,
  anon_sym_volatile = 33,
  anon_sym_Code_COLON = 34,
  anon_sym_LineNumberTable_COLON = 35,
  anon_sym_line = 36,
  anon_sym_COLON2 = 37,
  aux_sym_instruction_token1 = 38,
  anon_sym_POUND = 39,
  aux_sym_code_info_stat_token1 = 40,
  anon_sym_descriptor_COLON = 41,
  sym_descriptor_value = 42,
  anon_sym_flags_COLON = 43,
  sym_flag_value = 44,
  anon_sym_LPAREN = 45,
  anon_sym_RPAREN = 46,
  sym_hex_value = 47,
  anon_sym_LBRACK = 48,
  anon_sym_RBRACK = 49,
  anon_sym_DOT_DOT_DOT = 50,
  anon_sym_DOT = 51,
  anon_sym_QMARK = 52,
  sym_super = 53,
  anon_sym_int = 54,
  anon_sym_char = 55,
  anon_sym_void = 56,
  anon_sym_double = 57,
  anon_sym_float = 58,
  anon_sym_byte = 59,
  anon_sym_open = 60,
  anon_sym_module = 61,
  sym_number = 62,
  anon_sym_Signature_COLON = 63,
  anon_sym_SourceFile_COLON_DQUOTE = 64,
  aux_sym_source_file_def_token1 = 65,
  anon_sym_DQUOTE = 66,
  anon_sym_NestMembers_COLON = 67,
  anon_sym_InnerClasses_COLON = 68,
  anon_sym_EQ = 69,
  anon_sym_of = 70,
  anon_sym_NestHost_COLON = 71,
  anon_sym_class = 72,
  anon_sym_e = 73,
  anon_sym_s = 74,
  anon_sym_c = 75,
  anon_sym_AT = 76,
  anon_sym_EQ2 = 77,
  sym_comment = 78,
  anon_sym_Constantpool_COLON = 79,
  anon_sym_Utf8 = 80,
  aux_sym__constant_pool_item_type_utf8_token1 = 81,
  anon_sym_Class = 82,
  anon_sym_String = 83,
  anon_sym_Methodref = 84,
  anon_sym_Fieldref = 85,
  anon_sym_InterfaceMethodref = 86,
  anon_sym_NameAndType = 87,
  anon_sym_Double = 88,
  anon_sym_Float = 89,
  anon_sym_Integer = 90,
  sym_decimal_floating_point_literal = 91,
  aux_sym_class_info_item_simple_token1 = 92,
  anon_sym_Lastmodified = 93,
  sym_md5 = 94,
  anon_sym_MD5checksum = 95,
  anon_sym_Compiledfrom = 96,
  aux_sym_header_info_compile_token1 = 97,
  sym__path_segment = 98,
  anon_sym_SLASH = 99,
  sym__endl = 100,
  anon_sym_Classfile = 101,
  anon_sym_true = 102,
  anon_sym_false = 103,
  sym_source_file = 104,
  sym__source_file_verbose = 105,
  sym__source_file_plain = 106,
  sym_class_def_plain = 107,
  sym_interface_def_plain = 108,
  sym_superclass = 109,
  sym_super_interfaces = 110,
  sym_interface_type_list = 111,
  sym_class_def_plain_body = 112,
  sym_class_def_plain_body_item = 113,
  sym_field_def = 114,
  sym_method_def = 115,
  sym_method_throws = 116,
  sym__method_def_verbose = 117,
  sym_annotation_default = 118,
  sym_deprecated = 119,
  sym_runtime_visible_annotations = 120,
  sym_exceptions = 121,
  sym_static_block_def = 122,
  sym_type_parameters = 123,
  sym_type_parameter = 124,
  sym_type_bound = 125,
  sym_modifiers = 126,
  sym_code_def = 127,
  sym_code_info = 128,
  sym_line_number_table_def = 129,
  sym_numered_line = 130,
  sym_numered_instruction = 131,
  sym_instruction = 132,
  sym_code_info_stat = 133,
  sym_descriptor_def = 134,
  sym_flag_def = 135,
  sym__wrapped_hex_val = 136,
  sym_args = 137,
  sym__type = 138,
  sym__simple_type = 139,
  sym_array_type = 140,
  sym_dimensions = 141,
  sym_vararg = 142,
  sym_scoped_type_identifier = 143,
  sym_generic_type = 144,
  sym_type_arguments = 145,
  sym_wildcard = 146,
  sym__wildcard_bounds = 147,
  sym_extends = 148,
  sym_primitive_type = 149,
  sym_block = 150,
  sym__block_item = 151,
  sym_identifier = 152,
  sym_scoped_identifier = 153,
  sym__name = 154,
  sym__reserved_identifier = 155,
  sym_footer = 156,
  sym_signature = 157,
  sym_source_file_def = 158,
  sym_nested_members = 159,
  sym_inner_classes = 160,
  sym_nest_host = 161,
  sym_footer_annotations = 162,
  sym_footer_runtime_annotation = 163,
  sym_runtime_annotation_element_value = 164,
  sym_runtime_annotation_element_value_array = 165,
  sym__runtime_annotation_element_value_simple = 166,
  sym_runtime_annotation_element_value_tag = 167,
  sym_runtime_annotation_args = 168,
  sym_constant_pool_def = 169,
  sym__hash_number = 170,
  sym_constant_pool_item = 171,
  sym_ref_const_pool_item = 172,
  sym__constant_pool_item_type = 173,
  sym__constant_pool_item_type_utf8 = 174,
  sym__constant_pool_item_type_class = 175,
  sym__constant_pool_item_type_string = 176,
  sym__constant_pool_item_type_ref = 177,
  sym__constant_pool_item_type_name_and_type = 178,
  sym__constant_pool_item_type_double = 179,
  sym__constant_pool_item_type_int = 180,
  sym_class_keyword = 181,
  sym_class_info_def = 182,
  sym_class_info_item = 183,
  sym_class_info_item_simple = 184,
  sym_header_info_last_mod = 185,
  sym_header_info_md5 = 186,
  sym_header_info_compile = 187,
  sym_file_path = 188,
  sym__rest_of_the_line = 189,
  sym_header_info = 190,
  sym_header = 191,
  sym_boolean_literal = 192,
  aux_sym__source_file_verbose_repeat1 = 193,
  aux_sym_interface_type_list_repeat1 = 194,
  aux_sym_class_def_plain_body_repeat1 = 195,
  aux_sym_runtime_visible_annotations_repeat1 = 196,
  aux_sym_type_parameters_repeat1 = 197,
  aux_sym_type_bound_repeat1 = 198,
  aux_sym_modifiers_repeat1 = 199,
  aux_sym_code_info_repeat1 = 200,
  aux_sym_code_info_repeat2 = 201,
  aux_sym_line_number_table_def_repeat1 = 202,
  aux_sym_flag_def_repeat1 = 203,
  aux_sym_args_repeat1 = 204,
  aux_sym_dimensions_repeat1 = 205,
  aux_sym_type_arguments_repeat1 = 206,
  aux_sym_block_repeat1 = 207,
  aux_sym_nested_members_repeat1 = 208,
  aux_sym_inner_classes_repeat1 = 209,
  aux_sym_footer_annotations_repeat1 = 210,
  aux_sym_runtime_annotation_element_value_array_repeat1 = 211,
  aux_sym_constant_pool_def_repeat1 = 212,
  aux_sym_class_info_def_repeat1 = 213,
  aux_sym_class_info_item_simple_repeat1 = 214,
  aux_sym_file_path_repeat1 = 215,
  alias_sym_type_identifier = 216,
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
  [anon_sym_AnnotationDefault_COLON] = "AnnotationDefault:",
  [anon_sym_default_value_COLON] = "default_value:",
  [aux_sym_annotation_default_token1] = "annotation_default_token1",
  [anon_sym_Deprecated_COLON] = "Deprecated:",
  [anon_sym_RuntimeVisibleAnnotations_COLON] = "RuntimeVisibleAnnotations:",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN_RPAREN] = "()",
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
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK] = "\?",
  [sym_super] = "super",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_void] = "void",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_byte] = "byte",
  [anon_sym_open] = "identifier",
  [anon_sym_module] = "identifier",
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
  [anon_sym_e] = "e",
  [anon_sym_s] = "s",
  [anon_sym_c] = "c",
  [anon_sym_AT] = "@",
  [anon_sym_EQ2] = "=",
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
  [anon_sym_Integer] = "Integer",
  [sym_decimal_floating_point_literal] = "value",
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [sym_annotation_default] = "annotation_default",
  [sym_deprecated] = "deprecated",
  [sym_runtime_visible_annotations] = "runtime_visible_annotations",
  [sym_exceptions] = "exceptions",
  [sym_static_block_def] = "static_block_def",
  [sym_type_parameters] = "type_parameters",
  [sym_type_parameter] = "type_parameter",
  [sym_type_bound] = "type_bound",
  [sym_modifiers] = "modifiers",
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
  [sym_vararg] = "vararg",
  [sym_scoped_type_identifier] = "scoped_type_identifier",
  [sym_generic_type] = "generic_type",
  [sym_type_arguments] = "type_arguments",
  [sym_wildcard] = "wildcard",
  [sym__wildcard_bounds] = "_wildcard_bounds",
  [sym_extends] = "extends",
  [sym_primitive_type] = "primitive_type",
  [sym_block] = "block",
  [sym__block_item] = "_block_item",
  [sym_identifier] = "identifier",
  [sym_scoped_identifier] = "scoped_identifier",
  [sym__name] = "_name",
  [sym__reserved_identifier] = "_reserved_identifier",
  [sym_footer] = "footer",
  [sym_signature] = "signature",
  [sym_source_file_def] = "source_file_def",
  [sym_nested_members] = "nested_members",
  [sym_inner_classes] = "inner_classes",
  [sym_nest_host] = "nest_host",
  [sym_footer_annotations] = "footer_annotations",
  [sym_footer_runtime_annotation] = "footer_runtime_annotation",
  [sym_runtime_annotation_element_value] = "runtime_annotation_element_value",
  [sym_runtime_annotation_element_value_array] = "runtime_annotation_element_value_array",
  [sym__runtime_annotation_element_value_simple] = "_runtime_annotation_element_value_simple",
  [sym_runtime_annotation_element_value_tag] = "runtime_annotation_element_value_tag",
  [sym_runtime_annotation_args] = "runtime_annotation_args",
  [sym_constant_pool_def] = "constant_pool_def",
  [sym__hash_number] = "_hash_number",
  [sym_constant_pool_item] = "constant_pool_item",
  [sym_ref_const_pool_item] = "ref_const_pool_item",
  [sym__constant_pool_item_type] = "_constant_pool_item_type",
  [sym__constant_pool_item_type_utf8] = "_constant_pool_item_type_utf8",
  [sym__constant_pool_item_type_class] = "_constant_pool_item_type_class",
  [sym__constant_pool_item_type_string] = "_constant_pool_item_type_string",
  [sym__constant_pool_item_type_ref] = "_constant_pool_item_type_ref",
  [sym__constant_pool_item_type_name_and_type] = "_constant_pool_item_type_name_and_type",
  [sym__constant_pool_item_type_double] = "_constant_pool_item_type_double",
  [sym__constant_pool_item_type_int] = "_constant_pool_item_type_int",
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
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym__source_file_verbose_repeat1] = "_source_file_verbose_repeat1",
  [aux_sym_interface_type_list_repeat1] = "interface_type_list_repeat1",
  [aux_sym_class_def_plain_body_repeat1] = "class_def_plain_body_repeat1",
  [aux_sym_runtime_visible_annotations_repeat1] = "runtime_visible_annotations_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_type_bound_repeat1] = "type_bound_repeat1",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_code_info_repeat2] = "code_info_repeat2",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym_dimensions_repeat1] = "dimensions_repeat1",
  [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_nested_members_repeat1] = "nested_members_repeat1",
  [aux_sym_inner_classes_repeat1] = "inner_classes_repeat1",
  [aux_sym_footer_annotations_repeat1] = "footer_annotations_repeat1",
  [aux_sym_runtime_annotation_element_value_array_repeat1] = "runtime_annotation_element_value_array_repeat1",
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
  [anon_sym_AnnotationDefault_COLON] = anon_sym_AnnotationDefault_COLON,
  [anon_sym_default_value_COLON] = anon_sym_default_value_COLON,
  [aux_sym_annotation_default_token1] = aux_sym_annotation_default_token1,
  [anon_sym_Deprecated_COLON] = anon_sym_Deprecated_COLON,
  [anon_sym_RuntimeVisibleAnnotations_COLON] = anon_sym_RuntimeVisibleAnnotations_COLON,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
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
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_super] = sym_super,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_open] = sym_identifier,
  [anon_sym_module] = sym_identifier,
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
  [anon_sym_e] = anon_sym_e,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ2] = anon_sym_EQ,
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
  [anon_sym_Integer] = anon_sym_Integer,
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
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
  [sym_annotation_default] = sym_annotation_default,
  [sym_deprecated] = sym_deprecated,
  [sym_runtime_visible_annotations] = sym_runtime_visible_annotations,
  [sym_exceptions] = sym_exceptions,
  [sym_static_block_def] = sym_static_block_def,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_parameter] = sym_type_parameter,
  [sym_type_bound] = sym_type_bound,
  [sym_modifiers] = sym_modifiers,
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
  [sym_vararg] = sym_vararg,
  [sym_scoped_type_identifier] = sym_scoped_type_identifier,
  [sym_generic_type] = sym_generic_type,
  [sym_type_arguments] = sym_type_arguments,
  [sym_wildcard] = sym_wildcard,
  [sym__wildcard_bounds] = sym__wildcard_bounds,
  [sym_extends] = sym_extends,
  [sym_primitive_type] = sym_primitive_type,
  [sym_block] = sym_block,
  [sym__block_item] = sym__block_item,
  [sym_identifier] = sym_identifier,
  [sym_scoped_identifier] = sym_scoped_identifier,
  [sym__name] = sym__name,
  [sym__reserved_identifier] = sym__reserved_identifier,
  [sym_footer] = sym_footer,
  [sym_signature] = sym_signature,
  [sym_source_file_def] = sym_source_file_def,
  [sym_nested_members] = sym_nested_members,
  [sym_inner_classes] = sym_inner_classes,
  [sym_nest_host] = sym_nest_host,
  [sym_footer_annotations] = sym_footer_annotations,
  [sym_footer_runtime_annotation] = sym_footer_runtime_annotation,
  [sym_runtime_annotation_element_value] = sym_runtime_annotation_element_value,
  [sym_runtime_annotation_element_value_array] = sym_runtime_annotation_element_value_array,
  [sym__runtime_annotation_element_value_simple] = sym__runtime_annotation_element_value_simple,
  [sym_runtime_annotation_element_value_tag] = sym_runtime_annotation_element_value_tag,
  [sym_runtime_annotation_args] = sym_runtime_annotation_args,
  [sym_constant_pool_def] = sym_constant_pool_def,
  [sym__hash_number] = sym__hash_number,
  [sym_constant_pool_item] = sym_constant_pool_item,
  [sym_ref_const_pool_item] = sym_ref_const_pool_item,
  [sym__constant_pool_item_type] = sym__constant_pool_item_type,
  [sym__constant_pool_item_type_utf8] = sym__constant_pool_item_type_utf8,
  [sym__constant_pool_item_type_class] = sym__constant_pool_item_type_class,
  [sym__constant_pool_item_type_string] = sym__constant_pool_item_type_string,
  [sym__constant_pool_item_type_ref] = sym__constant_pool_item_type_ref,
  [sym__constant_pool_item_type_name_and_type] = sym__constant_pool_item_type_name_and_type,
  [sym__constant_pool_item_type_double] = sym__constant_pool_item_type_double,
  [sym__constant_pool_item_type_int] = sym__constant_pool_item_type_int,
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
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym__source_file_verbose_repeat1] = aux_sym__source_file_verbose_repeat1,
  [aux_sym_interface_type_list_repeat1] = aux_sym_interface_type_list_repeat1,
  [aux_sym_class_def_plain_body_repeat1] = aux_sym_class_def_plain_body_repeat1,
  [aux_sym_runtime_visible_annotations_repeat1] = aux_sym_runtime_visible_annotations_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_type_bound_repeat1] = aux_sym_type_bound_repeat1,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_code_info_repeat2] = aux_sym_code_info_repeat2,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
  [aux_sym_dimensions_repeat1] = aux_sym_dimensions_repeat1,
  [aux_sym_type_arguments_repeat1] = aux_sym_type_arguments_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_nested_members_repeat1] = aux_sym_nested_members_repeat1,
  [aux_sym_inner_classes_repeat1] = aux_sym_inner_classes_repeat1,
  [aux_sym_footer_annotations_repeat1] = aux_sym_footer_annotations_repeat1,
  [aux_sym_runtime_annotation_element_value_array_repeat1] = aux_sym_runtime_annotation_element_value_array_repeat1,
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
  [anon_sym_AnnotationDefault_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_value_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_annotation_default_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Deprecated_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RuntimeVisibleAnnotations_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
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
  [anon_sym_DOT_DOT_DOT] = {
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
  [anon_sym_open] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = true,
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
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
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
  [anon_sym_Integer] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [sym_annotation_default] = {
    .visible = true,
    .named = true,
  },
  [sym_deprecated] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_visible_annotations] = {
    .visible = true,
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
  [sym_vararg] = {
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
  [sym__block_item] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__reserved_identifier] = {
    .visible = false,
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
  [sym_footer_annotations] = {
    .visible = true,
    .named = true,
  },
  [sym_footer_runtime_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_annotation_element_value] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_annotation_element_value_array] = {
    .visible = true,
    .named = true,
  },
  [sym__runtime_annotation_element_value_simple] = {
    .visible = false,
    .named = true,
  },
  [sym_runtime_annotation_element_value_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_annotation_args] = {
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
  [sym_ref_const_pool_item] = {
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
  [sym__constant_pool_item_type_int] = {
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
  [sym_boolean_literal] = {
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
  [aux_sym_runtime_visible_annotations_repeat1] = {
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
  [aux_sym_dimensions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
  [aux_sym_footer_annotations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_runtime_annotation_element_value_array_repeat1] = {
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
  field_name = 4,
  field_scope = 5,
  field_superclass = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_dimensions] = "dimensions",
  [field_element] = "element",
  [field_interfaces] = "interfaces",
  [field_name] = "name",
  [field_scope] = "scope",
  [field_superclass] = "superclass",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 1},
  [13] = {.index = 12, .length = 2},
  [18] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_superclass, 2},
  [1] =
    {field_interfaces, 2},
  [2] =
    {field_interfaces, 3},
    {field_superclass, 2},
  [4] =
    {field_superclass, 3},
  [5] =
    {field_interfaces, 3},
  [6] =
    {field_dimensions, 1},
    {field_element, 0},
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
  [14] =
    {field_name, 2},
    {field_scope, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_type_identifier,
  },
  [11] = {
    [2] = alias_sym_type_identifier,
  },
  [12] = {
    [0] = alias_sym_type_identifier,
    [2] = alias_sym_type_identifier,
  },
  [14] = {
    [1] = sym_decimal_floating_point_literal,
  },
  [15] = {
    [1] = sym_ref_const_pool_item,
  },
  [16] = {
    [1] = sym_ref_const_pool_item,
    [3] = sym_ref_const_pool_item,
  },
  [17] = {
    [5] = sym_decimal_floating_point_literal,
  },
  [19] = {
    [4] = sym_decimal_floating_point_literal,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    alias_sym_type_identifier,
  sym__hash_number, 2,
    sym__hash_number,
    sym_ref_const_pool_item,
  sym__rest_of_the_line, 2,
    sym__rest_of_the_line,
    sym_decimal_floating_point_literal,
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
  [70] = 69,
  [71] = 69,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 57,
  [77] = 25,
  [78] = 55,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 80,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 85,
  [89] = 89,
  [90] = 90,
  [91] = 85,
  [92] = 90,
  [93] = 93,
  [94] = 87,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 11,
  [100] = 12,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 20,
  [105] = 21,
  [106] = 34,
  [107] = 32,
  [108] = 31,
  [109] = 26,
  [110] = 29,
  [111] = 30,
  [112] = 33,
  [113] = 35,
  [114] = 114,
  [115] = 115,
  [116] = 40,
  [117] = 117,
  [118] = 11,
  [119] = 119,
  [120] = 120,
  [121] = 37,
  [122] = 39,
  [123] = 25,
  [124] = 124,
  [125] = 12,
  [126] = 126,
  [127] = 20,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 21,
  [136] = 136,
  [137] = 26,
  [138] = 138,
  [139] = 33,
  [140] = 140,
  [141] = 32,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 35,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 101,
  [154] = 31,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 34,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 29,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 27,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 30,
  [177] = 177,
  [178] = 178,
  [179] = 40,
  [180] = 180,
  [181] = 37,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 39,
  [186] = 186,
  [187] = 27,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 190,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 134,
  [196] = 196,
  [197] = 197,
  [198] = 190,
  [199] = 17,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 10,
  [208] = 208,
  [209] = 209,
  [210] = 157,
  [211] = 211,
  [212] = 212,
  [213] = 13,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 45,
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
  [228] = 16,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 45,
  [235] = 22,
  [236] = 236,
  [237] = 237,
  [238] = 18,
  [239] = 239,
  [240] = 240,
  [241] = 25,
  [242] = 24,
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
  [264] = 261,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 38,
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
  [279] = 262,
  [280] = 262,
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
  [291] = 261,
  [292] = 292,
  [293] = 200,
  [294] = 294,
  [295] = 295,
  [296] = 211,
  [297] = 297,
  [298] = 292,
  [299] = 299,
  [300] = 300,
  [301] = 212,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 275,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 274,
  [311] = 311,
  [312] = 312,
  [313] = 46,
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
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 329,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 344,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 342,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 329,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 388,
  [390] = 388,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 101,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 481,
  [483] = 483,
  [484] = 484,
  [485] = 462,
  [486] = 486,
  [487] = 487,
  [488] = 451,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 436,
  [493] = 493,
  [494] = 494,
  [495] = 481,
  [496] = 462,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 468,
  [503] = 435,
};

static inline bool sym__identifier_character_set_1(int32_t c) {
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
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'B'
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

static inline bool sym__identifier_character_set_6(int32_t c) {
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
                  : (c <= '9' || (c >= 'B' && c <= 'Z')))
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(280);
      if (lookahead == '"') ADVANCE(604);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '&') ADVANCE(318);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == '/') ADVANCE(632);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '@') ADVANCE(609);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(304);
      if (lookahead == 'D') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(306);
      if (lookahead == 'I') ADVANCE(303);
      if (lookahead == 'L') ADVANCE(295);
      if (lookahead == 'M') ADVANCE(294);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'R') ADVANCE(305);
      if (lookahead == 'S') ADVANCE(299);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == ']') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(597);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(601);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == 'S') ADVANCE(497);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(597);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(75);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == ']') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(313);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(597);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(418);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(623);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(271);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(230);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(623);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(230);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(612);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(611);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(329);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(608);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(600);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(326);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(605);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(606);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(613);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(613);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(320);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(311);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(292);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'D') ADVANCE(362);
      if (lookahead == 'E') ADVANCE(410);
      if (lookahead == 'R') ADVANCE(409);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(597);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(165);
      END_STATE();
    case 64:
      if (lookahead == 'C') ADVANCE(351);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 65:
      if (lookahead == 'C') ADVANCE(142);
      END_STATE();
    case 66:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(138);
      END_STATE();
    case 68:
      if (lookahead == 'H') ADVANCE(178);
      if (lookahead == 'M') ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(224);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 'V') ADVANCE(136);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(186);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'k') ADVANCE(192);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(627);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(628);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 226:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 227:
      if (lookahead == 'x') ADVANCE(215);
      END_STATE();
    case 228:
      if (lookahead == '}') ADVANCE(315);
      END_STATE();
    case 229:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 230:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(231)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(232)
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(233)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(234)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(630);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 273:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 274:
      if (eof) ADVANCE(280);
      if (lookahead == '"') ADVANCE(604);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '&') ADVANCE(318);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '/') ADVANCE(632);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(607);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '@') ADVANCE(609);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(304);
      if (lookahead == 'D') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(306);
      if (lookahead == 'I') ADVANCE(303);
      if (lookahead == 'L') ADVANCE(295);
      if (lookahead == 'M') ADVANCE(294);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'R') ADVANCE(305);
      if (lookahead == 'S') ADVANCE(299);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == ']') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(597);
      END_STATE();
    case 275:
      if (eof) ADVANCE(280);
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(534);
      if (lookahead == 'I') ADVANCE(523);
      if (lookahead == 'N') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(597);
      END_STATE();
    case 276:
      if (eof) ADVANCE(280);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '&') ADVANCE(318);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == 'C') ADVANCE(172);
      if (lookahead == 'I') ADVANCE(159);
      if (lookahead == 'L') ADVANCE(81);
      if (lookahead == 'M') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(221);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == ']') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 277:
      if (eof) ADVANCE(280);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '&') ADVANCE(318);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == 'C') ADVANCE(172);
      if (lookahead == 'I') ADVANCE(159);
      if (lookahead == 'L') ADVANCE(81);
      if (lookahead == 'M') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(221);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == ']') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 278:
      if (eof) ADVANCE(280);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '@') ADVANCE(609);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(471);
      if (lookahead == 'E') ADVANCE(595);
      if (lookahead == 'I') ADVANCE(523);
      if (lookahead == 'N') ADVANCE(492);
      if (lookahead == 'R') ADVANCE(592);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(597);
      END_STATE();
    case 279:
      if (eof) ADVANCE(280);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '@') ADVANCE(609);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(471);
      if (lookahead == 'E') ADVANCE(595);
      if (lookahead == 'I') ADVANCE(523);
      if (lookahead == 'N') ADVANCE(492);
      if (lookahead == 'R') ADVANCE(592);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(597);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_extends);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_implements);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_implements);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_AnnotationDefault_COLON);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_default_value_COLON);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'D') ADVANCE(426);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'i') ADVANCE(527);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(597);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(543);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(558);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(561);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(590);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'l') ADVANCE(449);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'm') ADVANCE(544);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'n') ADVANCE(520);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'n') ADVANCE(525);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'o') ADVANCE(466);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'u') ADVANCE(526);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'x') ADVANCE(462);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'x') ADVANCE(581);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_Deprecated_COLON);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RuntimeVisibleAnnotations_COLON);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_Exceptions_COLON);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(624);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'A') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'D') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'V') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'f') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'm') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'x') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(597);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(94);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(150);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(123);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(180);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '5') ADVANCE(422);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(319);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(329);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(608);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(600);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(310);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(314);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(6);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(326);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(605);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(606);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(320);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(291);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(311);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(533);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(597);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(507);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(476);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(501);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(541);
      if (lookahead == 'M') ADVANCE(493);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(541);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(591);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(451);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(502);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(495);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(597);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(593);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(597);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(461);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(597);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(564);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(597);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(530);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(597);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(585);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(597);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(584);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(597);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(587);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(597);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(589);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(597);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(485);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(511);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(486);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(513);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(482);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(455);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(550);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(474);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'm') ADVANCE(545);
      if (lookahead == 'n') ADVANCE(562);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(472);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(424);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(556);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(431);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(543);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(427);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(446);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(443);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(448);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(494);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(440);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(468);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(463);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(548);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(470);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(546);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(430);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(521);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(549);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(433);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(437);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(517);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(529);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(568);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(569);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(518);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(450);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(560);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(524);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(590);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(516);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(459);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(537);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(512);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(565);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(509);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(538);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(547);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(540);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(452);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(489);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(478);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(583);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(477);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(487);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(488);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(458);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(545);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(475);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(490);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(460);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(520);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(536);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(469);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(442);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(525);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(454);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(480);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(575);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(473);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(563);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(582);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(579);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(570);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(542);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(532);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(515);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(467);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(586);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(528);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(522);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(552);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(531);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(566);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(588);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(551);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(508);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(503);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(580);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(578);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(441);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(447);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(505);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(479);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(434);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(465);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(483);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(567);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(283);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(286);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(464);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(574);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(428);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(572);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(576);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(432);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(571);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(499);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(577);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(435);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(436);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(573);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(439);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(491);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(444);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(445);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(423);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(498);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(453);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(429);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(539);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(425);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(500);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(484);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(557);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(438);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(481);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(594);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(456);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(504);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(457);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(506);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(553);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(514);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(526);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(510);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(554);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(462);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(581);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_Signature_COLON);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_NestMembers_COLON);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_InnerClasses_COLON);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_NestHost_COLON);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(612);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(636);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(614);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(614);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(619);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(616);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(616);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(619);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(619);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(630);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(619);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(636);
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
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 64:
      if (lookahead == '8') ADVANCE(99);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == 'v') ADVANCE(114);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 97:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_super);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 173:
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 179:
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(197);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 196:
      if (lookahead == 'f') ADVANCE(207);
      END_STATE();
    case 197:
      if (lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    case 206:
      if (lookahead == 'M') ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 211:
      if (lookahead == 'z') ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 219:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_InterfaceMethodref);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 275},
  [2] = {.lex_state = 278},
  [3] = {.lex_state = 278},
  [4] = {.lex_state = 278},
  [5] = {.lex_state = 278},
  [6] = {.lex_state = 278},
  [7] = {.lex_state = 278},
  [8] = {.lex_state = 278},
  [9] = {.lex_state = 278},
  [10] = {.lex_state = 278},
  [11] = {.lex_state = 278},
  [12] = {.lex_state = 278},
  [13] = {.lex_state = 278},
  [14] = {.lex_state = 278},
  [15] = {.lex_state = 278},
  [16] = {.lex_state = 278},
  [17] = {.lex_state = 278},
  [18] = {.lex_state = 62},
  [19] = {.lex_state = 278},
  [20] = {.lex_state = 278},
  [21] = {.lex_state = 278},
  [22] = {.lex_state = 278},
  [23] = {.lex_state = 278},
  [24] = {.lex_state = 62},
  [25] = {.lex_state = 278},
  [26] = {.lex_state = 278},
  [27] = {.lex_state = 278},
  [28] = {.lex_state = 278},
  [29] = {.lex_state = 278},
  [30] = {.lex_state = 278},
  [31] = {.lex_state = 278},
  [32] = {.lex_state = 278},
  [33] = {.lex_state = 278},
  [34] = {.lex_state = 278},
  [35] = {.lex_state = 278},
  [36] = {.lex_state = 278},
  [37] = {.lex_state = 278},
  [38] = {.lex_state = 278},
  [39] = {.lex_state = 278},
  [40] = {.lex_state = 278},
  [41] = {.lex_state = 278},
  [42] = {.lex_state = 278},
  [43] = {.lex_state = 278},
  [44] = {.lex_state = 278},
  [45] = {.lex_state = 278},
  [46] = {.lex_state = 278},
  [47] = {.lex_state = 278},
  [48] = {.lex_state = 278},
  [49] = {.lex_state = 278},
  [50] = {.lex_state = 278},
  [51] = {.lex_state = 278},
  [52] = {.lex_state = 278},
  [53] = {.lex_state = 278},
  [54] = {.lex_state = 278},
  [55] = {.lex_state = 278},
  [56] = {.lex_state = 278},
  [57] = {.lex_state = 278},
  [58] = {.lex_state = 278},
  [59] = {.lex_state = 278},
  [60] = {.lex_state = 278},
  [61] = {.lex_state = 278},
  [62] = {.lex_state = 278},
  [63] = {.lex_state = 278},
  [64] = {.lex_state = 278},
  [65] = {.lex_state = 278},
  [66] = {.lex_state = 278},
  [67] = {.lex_state = 278},
  [68] = {.lex_state = 278},
  [69] = {.lex_state = 278},
  [70] = {.lex_state = 278},
  [71] = {.lex_state = 278},
  [72] = {.lex_state = 278},
  [73] = {.lex_state = 278},
  [74] = {.lex_state = 278},
  [75] = {.lex_state = 278},
  [76] = {.lex_state = 278},
  [77] = {.lex_state = 276},
  [78] = {.lex_state = 278},
  [79] = {.lex_state = 278},
  [80] = {.lex_state = 278},
  [81] = {.lex_state = 278},
  [82] = {.lex_state = 278},
  [83] = {.lex_state = 278},
  [84] = {.lex_state = 278},
  [85] = {.lex_state = 278},
  [86] = {.lex_state = 278},
  [87] = {.lex_state = 278},
  [88] = {.lex_state = 278},
  [89] = {.lex_state = 278},
  [90] = {.lex_state = 278},
  [91] = {.lex_state = 278},
  [92] = {.lex_state = 278},
  [93] = {.lex_state = 278},
  [94] = {.lex_state = 278},
  [95] = {.lex_state = 278},
  [96] = {.lex_state = 278},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 276},
  [100] = {.lex_state = 276},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 276},
  [105] = {.lex_state = 276},
  [106] = {.lex_state = 276},
  [107] = {.lex_state = 276},
  [108] = {.lex_state = 276},
  [109] = {.lex_state = 276},
  [110] = {.lex_state = 276},
  [111] = {.lex_state = 276},
  [112] = {.lex_state = 276},
  [113] = {.lex_state = 276},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 276},
  [116] = {.lex_state = 276},
  [117] = {.lex_state = 276},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 278},
  [121] = {.lex_state = 276},
  [122] = {.lex_state = 276},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 276},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 276},
  [129] = {.lex_state = 276},
  [130] = {.lex_state = 276},
  [131] = {.lex_state = 276},
  [132] = {.lex_state = 276},
  [133] = {.lex_state = 276},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 278},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 276},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 278},
  [151] = {.lex_state = 276},
  [152] = {.lex_state = 278},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 276},
  [156] = {.lex_state = 278},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 276},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 276},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 276},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 276},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 276},
  [183] = {.lex_state = 276},
  [184] = {.lex_state = 278},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 276},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 278},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 278},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 278},
  [197] = {.lex_state = 276},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 276},
  [202] = {.lex_state = 276},
  [203] = {.lex_state = 275},
  [204] = {.lex_state = 276},
  [205] = {.lex_state = 275},
  [206] = {.lex_state = 275},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 276},
  [209] = {.lex_state = 275},
  [210] = {.lex_state = 276},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 276},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 276},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 275},
  [221] = {.lex_state = 276},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 614},
  [224] = {.lex_state = 12},
  [225] = {.lex_state = 276},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 615},
  [230] = {.lex_state = 276},
  [231] = {.lex_state = 276},
  [232] = {.lex_state = 276},
  [233] = {.lex_state = 276},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 64},
  [239] = {.lex_state = 276},
  [240] = {.lex_state = 12},
  [241] = {.lex_state = 278},
  [242] = {.lex_state = 64},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 276},
  [245] = {.lex_state = 276},
  [246] = {.lex_state = 615},
  [247] = {.lex_state = 276},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 615},
  [250] = {.lex_state = 276},
  [251] = {.lex_state = 276},
  [252] = {.lex_state = 276},
  [253] = {.lex_state = 276},
  [254] = {.lex_state = 276},
  [255] = {.lex_state = 276},
  [256] = {.lex_state = 276},
  [257] = {.lex_state = 615},
  [258] = {.lex_state = 276},
  [259] = {.lex_state = 276},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 275},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 276},
  [269] = {.lex_state = 278},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 616},
  [272] = {.lex_state = 275},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 278},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 275},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 278},
  [282] = {.lex_state = 278},
  [283] = {.lex_state = 276},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 12},
  [286] = {.lex_state = 275},
  [287] = {.lex_state = 278},
  [288] = {.lex_state = 275},
  [289] = {.lex_state = 278},
  [290] = {.lex_state = 276},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 276},
  [294] = {.lex_state = 276},
  [295] = {.lex_state = 275},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 278},
  [300] = {.lex_state = 275},
  [301] = {.lex_state = 276},
  [302] = {.lex_state = 231},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 278},
  [305] = {.lex_state = 278},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 615},
  [309] = {.lex_state = 275},
  [310] = {.lex_state = 278},
  [311] = {.lex_state = 278},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 617},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 278},
  [321] = {.lex_state = 278},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 275},
  [324] = {.lex_state = 278},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 615},
  [327] = {.lex_state = 278},
  [328] = {.lex_state = 276},
  [329] = {.lex_state = 278},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 617},
  [334] = {.lex_state = 278},
  [335] = {.lex_state = 278},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 278},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 276},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 276},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 278},
  [346] = {.lex_state = 278},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 276},
  [351] = {.lex_state = 275},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 278},
  [354] = {.lex_state = 231},
  [355] = {.lex_state = 278},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 278},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 278},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 276},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 11},
  [366] = {.lex_state = 278},
  [367] = {.lex_state = 275},
  [368] = {.lex_state = 232},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 275},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 617},
  [377] = {.lex_state = 276},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 11},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 278},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 276},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 617},
  [386] = {.lex_state = 11},
  [387] = {.lex_state = 276},
  [388] = {.lex_state = 278},
  [389] = {.lex_state = 278},
  [390] = {.lex_state = 278},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 275},
  [394] = {.lex_state = 275},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 11},
  [397] = {.lex_state = 11},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 275},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 275},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 275},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 275},
  [407] = {.lex_state = 11},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 11},
  [410] = {.lex_state = 11},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 278},
  [413] = {.lex_state = 275},
  [414] = {.lex_state = 275},
  [415] = {.lex_state = 278},
  [416] = {.lex_state = 278},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 11},
  [419] = {.lex_state = 236},
  [420] = {.lex_state = 278},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 276},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 276},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 275},
  [431] = {.lex_state = 11},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 278},
  [434] = {.lex_state = 275},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 237},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 278},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 276},
  [447] = {.lex_state = 275},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 617},
  [450] = {.lex_state = 231},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 275},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 275},
  [468] = {.lex_state = 10},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 276},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 233},
  [480] = {.lex_state = 275},
  [481] = {.lex_state = 275},
  [482] = {.lex_state = 275},
  [483] = {.lex_state = 276},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 276},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 234},
  [490] = {.lex_state = 276},
  [491] = {.lex_state = 276},
  [492] = {.lex_state = 237},
  [493] = {.lex_state = 235},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 275},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 278},
  [498] = {.lex_state = 276},
  [499] = {.lex_state = 276},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 10},
  [503] = {.lex_state = 0},
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
    [anon_sym_AnnotationDefault_COLON] = ACTIONS(1),
    [aux_sym_annotation_default_token1] = ACTIONS(1),
    [anon_sym_Deprecated_COLON] = ACTIONS(1),
    [anon_sym_RuntimeVisibleAnnotations_COLON] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_descriptor_COLON] = ACTIONS(1),
    [anon_sym_flags_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_super] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
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
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
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
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_Lastmodified] = ACTIONS(1),
    [anon_sym_MD5checksum] = ACTIONS(1),
    [anon_sym_Compiledfrom] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(501),
    [sym__source_file_verbose] = STATE(500),
    [sym__source_file_plain] = STATE(500),
    [sym_header_info_compile] = STATE(66),
    [sym_header_info] = STATE(383),
    [sym_header] = STATE(67),
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
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(33), 1,
      sym_generic_type,
    STATE(57), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(4), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(392), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(156), 4,
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
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(33), 1,
      sym_generic_type,
    STATE(57), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(6), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(475), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(156), 4,
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
  [118] = 12,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(33), 1,
      sym_generic_type,
    STATE(57), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(7), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(392), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(156), 4,
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
  [177] = 12,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(33), 1,
      sym_generic_type,
    STATE(57), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(475), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(156), 4,
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
  [236] = 12,
    ACTIONS(21), 1,
      sym__identifier,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(33), 1,
      sym_generic_type,
    STATE(57), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(6), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(475), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(156), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(29), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [295] = 12,
    ACTIONS(32), 1,
      sym__identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(33), 1,
      sym_generic_type,
    STATE(57), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(7), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(392), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(156), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(40), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(37), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [354] = 12,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_AnnotationDefault_COLON,
    ACTIONS(49), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(53), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(55), 1,
      anon_sym_Code_COLON,
    STATE(9), 1,
      sym_code_def,
    STATE(19), 1,
      sym_annotation_default,
    STATE(42), 1,
      sym_deprecated,
    STATE(48), 1,
      sym_exceptions,
    STATE(62), 1,
      sym_runtime_visible_annotations,
    ACTIONS(43), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [409] = 10,
    ACTIONS(47), 1,
      anon_sym_AnnotationDefault_COLON,
    ACTIONS(49), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(53), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_annotation_default,
    STATE(36), 1,
      sym_deprecated,
    STATE(50), 1,
      sym_exceptions,
    STATE(64), 1,
      sym_runtime_visible_annotations,
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
  [458] = 4,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(65), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [494] = 5,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(32), 1,
      sym_type_arguments,
    ACTIONS(69), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(67), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [532] = 5,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(31), 1,
      sym_type_arguments,
    ACTIONS(77), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(75), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [570] = 4,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(83), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(81), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [606] = 4,
    ACTIONS(89), 1,
      anon_sym_line,
    STATE(14), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(87), 5,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(85), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [642] = 4,
    ACTIONS(96), 1,
      anon_sym_line,
    STATE(14), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(94), 5,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(92), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [678] = 4,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(103), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(98), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [714] = 7,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      aux_sym_dimensions_repeat1,
    STATE(37), 1,
      sym_dimensions,
    STATE(46), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(105), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [755] = 3,
    ACTIONS(117), 1,
      sym_flag_value,
    ACTIONS(115), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(113), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [788] = 8,
    ACTIONS(49), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(53), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_deprecated,
    STATE(50), 1,
      sym_exceptions,
    STATE(64), 1,
      sym_runtime_visible_annotations,
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
  [831] = 2,
    ACTIONS(121), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(119), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [862] = 2,
    ACTIONS(125), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(123), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [893] = 2,
    ACTIONS(103), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(98), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [924] = 8,
    ACTIONS(49), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(53), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_deprecated,
    STATE(53), 1,
      sym_exceptions,
    STATE(59), 1,
      sym_runtime_visible_annotations,
    ACTIONS(127), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [967] = 2,
    ACTIONS(133), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(131), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [998] = 2,
    ACTIONS(137), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [1029] = 2,
    ACTIONS(141), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(139), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1059] = 5,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      aux_sym_dimensions_repeat1,
    STATE(37), 1,
      sym_dimensions,
    ACTIONS(145), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
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
  [1095] = 2,
    ACTIONS(149), 5,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(147), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1125] = 4,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(153), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
    ACTIONS(151), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1159] = 2,
    ACTIONS(157), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(155), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1189] = 2,
    ACTIONS(161), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(159), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1219] = 2,
    ACTIONS(165), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(163), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1249] = 3,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(77), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(75), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1281] = 2,
    ACTIONS(169), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(167), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1311] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(173), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
    ACTIONS(171), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1345] = 6,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(53), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_exceptions,
    STATE(59), 1,
      sym_runtime_visible_annotations,
    ACTIONS(127), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1382] = 2,
    ACTIONS(180), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(178), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1411] = 2,
    ACTIONS(184), 5,
      anon_sym_RBRACE,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      sym_number,
    ACTIONS(182), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1440] = 2,
    ACTIONS(188), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(186), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1469] = 2,
    ACTIONS(173), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(171), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1498] = 6,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(53), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_exceptions,
    STATE(60), 1,
      sym_runtime_visible_annotations,
    ACTIONS(190), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1535] = 6,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(53), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_exceptions,
    STATE(64), 1,
      sym_runtime_visible_annotations,
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
  [1572] = 2,
    ACTIONS(196), 5,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [1601] = 2,
    ACTIONS(200), 4,
      anon_sym_RBRACE,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [1629] = 4,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
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
  [1661] = 4,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(207), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(205), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1693] = 2,
    ACTIONS(211), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(209), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1720] = 4,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_runtime_visible_annotations,
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
  [1751] = 4,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      sym_number,
    STATE(49), 1,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(213), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1782] = 4,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_runtime_visible_annotations,
    ACTIONS(127), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1813] = 4,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_runtime_visible_annotations,
    ACTIONS(220), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1844] = 4,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      sym_number,
    STATE(49), 1,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(224), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1875] = 4,
    ACTIONS(51), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_runtime_visible_annotations,
    ACTIONS(190), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1906] = 2,
    ACTIONS(232), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(230), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1933] = 4,
    ACTIONS(236), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(234), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(238), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [1963] = 2,
    ACTIONS(243), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(241), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1989] = 4,
    ACTIONS(247), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(245), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(249), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2019] = 2,
    ACTIONS(253), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(251), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2045] = 2,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2070] = 2,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2095] = 2,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2120] = 2,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
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
  [2145] = 2,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    ACTIONS(259), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2170] = 2,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2195] = 2,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2220] = 7,
    ACTIONS(267), 1,
      sym_interface_keyword,
    ACTIONS(271), 1,
      anon_sym_class,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(282), 1,
      sym_modifiers,
    STATE(358), 1,
      sym_class_keyword,
    STATE(494), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(269), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2254] = 7,
    ACTIONS(271), 1,
      anon_sym_class,
    ACTIONS(273), 1,
      sym_interface_keyword,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(289), 1,
      sym_modifiers,
    STATE(343), 1,
      sym_class_info_def,
    STATE(345), 1,
      sym_class_keyword,
    ACTIONS(269), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2287] = 8,
    ACTIONS(275), 1,
      anon_sym_Utf8,
    ACTIONS(277), 1,
      anon_sym_Class,
    ACTIONS(279), 1,
      anon_sym_String,
    ACTIONS(283), 1,
      anon_sym_NameAndType,
    ACTIONS(287), 1,
      anon_sym_Integer,
    ACTIONS(285), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(281), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(250), 8,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
      sym__constant_pool_item_type_int,
  [2322] = 9,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(291), 1,
      anon_sym_GT,
    ACTIONS(293), 1,
      anon_sym_QMARK,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(291), 1,
      sym_wildcard,
    STATE(198), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2358] = 9,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(293), 1,
      anon_sym_QMARK,
    ACTIONS(297), 1,
      anon_sym_GT,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(264), 1,
      sym_wildcard,
    STATE(191), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2394] = 9,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(293), 1,
      anon_sym_QMARK,
    ACTIONS(299), 1,
      anon_sym_GT,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(261), 1,
      sym_wildcard,
    STATE(190), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2430] = 5,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      aux_sym_inner_classes_repeat1,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(322), 1,
      sym_modifiers,
    ACTIONS(303), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2457] = 5,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      aux_sym_inner_classes_repeat1,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(322), 1,
      sym_modifiers,
    ACTIONS(269), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2484] = 8,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(297), 1,
      sym_vararg,
    STATE(159), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2517] = 8,
    ACTIONS(289), 1,
      sym__identifier,
    ACTIONS(293), 1,
      anon_sym_QMARK,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(317), 1,
      sym_wildcard,
    STATE(219), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2550] = 3,
    STATE(78), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(247), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(310), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2573] = 2,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(137), 15,
      ts_builtin_sym_end,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_InnerClasses_COLON,
      anon_sym_EQ2,
  [2594] = 3,
    STATE(78), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(236), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(312), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2617] = 7,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(315), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(33), 1,
      sym_generic_type,
    STATE(136), 4,
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
  [2647] = 7,
    ACTIONS(317), 1,
      sym__identifier,
    STATE(118), 1,
      sym_identifier,
    STATE(125), 1,
      sym_scoped_type_identifier,
    STATE(139), 1,
      sym_generic_type,
    STATE(243), 1,
      sym_interface_type_list,
    STATE(134), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(319), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2677] = 4,
    STATE(73), 1,
      aux_sym_inner_classes_repeat1,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(322), 1,
      sym_modifiers,
    ACTIONS(269), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2701] = 7,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(319), 1,
      sym_vararg,
    STATE(188), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2731] = 7,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(243), 1,
      sym_interface_type_list,
    STATE(195), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2761] = 6,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(146), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2788] = 6,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(187), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2815] = 6,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(222), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2842] = 6,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(199), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2869] = 6,
    ACTIONS(317), 1,
      sym__identifier,
    STATE(118), 1,
      sym_identifier,
    STATE(125), 1,
      sym_scoped_type_identifier,
    STATE(139), 1,
      sym_generic_type,
    STATE(169), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(319), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2896] = 1,
    ACTIONS(321), 14,
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
  [2913] = 6,
    ACTIONS(317), 1,
      sym__identifier,
    STATE(118), 1,
      sym_identifier,
    STATE(125), 1,
      sym_scoped_type_identifier,
    STATE(139), 1,
      sym_generic_type,
    STATE(157), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(319), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2940] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(33), 1,
      sym_generic_type,
    STATE(27), 4,
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
  [2967] = 6,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(210), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2994] = 6,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(100), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(194), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(295), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [3021] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(33), 1,
      sym_generic_type,
    STATE(17), 4,
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
  [3048] = 1,
    ACTIONS(323), 14,
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
  [3065] = 1,
    ACTIONS(325), 13,
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
  [3081] = 11,
    ACTIONS(327), 1,
      anon_sym_extends,
    ACTIONS(329), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_LT,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(103), 1,
      sym_type_parameters,
    STATE(119), 1,
      sym_superclass,
    STATE(172), 1,
      sym_super_interfaces,
    STATE(171), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3117] = 11,
    ACTIONS(327), 1,
      anon_sym_extends,
    ACTIONS(329), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_LT,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(339), 1,
      anon_sym_Constantpool_COLON,
    STATE(102), 1,
      sym_type_parameters,
    STATE(114), 1,
      sym_superclass,
    STATE(147), 1,
      sym_super_interfaces,
    STATE(145), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3153] = 4,
    ACTIONS(341), 1,
      anon_sym_LT,
    ACTIONS(343), 1,
      anon_sym_DOT,
    STATE(107), 1,
      sym_type_arguments,
    ACTIONS(69), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3174] = 4,
    ACTIONS(341), 1,
      anon_sym_LT,
    ACTIONS(345), 1,
      anon_sym_DOT,
    STATE(108), 1,
      sym_type_arguments,
    ACTIONS(77), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3195] = 2,
    ACTIONS(349), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(347), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON2,
      anon_sym_flags_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_EQ,
      sym_comment,
      anon_sym_Constantpool_COLON,
  [3212] = 9,
    ACTIONS(327), 1,
      anon_sym_extends,
    ACTIONS(329), 1,
      anon_sym_implements,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(119), 1,
      sym_superclass,
    STATE(172), 1,
      sym_super_interfaces,
    STATE(171), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3242] = 9,
    ACTIONS(327), 1,
      anon_sym_extends,
    ACTIONS(329), 1,
      anon_sym_implements,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(351), 1,
      anon_sym_Constantpool_COLON,
    STATE(124), 1,
      sym_superclass,
    STATE(166), 1,
      sym_super_interfaces,
    STATE(167), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3272] = 2,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(121), 10,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3288] = 2,
    ACTIONS(123), 1,
      anon_sym_DOT,
    ACTIONS(125), 10,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3304] = 2,
    ACTIONS(167), 1,
      anon_sym_DOT,
    ACTIONS(169), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3319] = 2,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3334] = 2,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(161), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3349] = 2,
    ACTIONS(139), 1,
      anon_sym_DOT,
    ACTIONS(141), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3364] = 3,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(153), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [3381] = 2,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3396] = 2,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(77), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3411] = 3,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(173), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [3428] = 7,
    ACTIONS(329), 1,
      anon_sym_implements,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(358), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 1,
      sym_super_interfaces,
    STATE(177), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3452] = 9,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(364), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(368), 1,
      anon_sym_NestHost_COLON,
    STATE(173), 1,
      sym_footer_annotations,
    STATE(203), 1,
      sym_nested_members,
    STATE(295), 1,
      sym_nest_host,
    STATE(445), 1,
      sym_inner_classes,
  [3480] = 1,
    ACTIONS(173), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3492] = 9,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(364), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(368), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_footer_annotations,
    STATE(220), 1,
      sym_nested_members,
    STATE(288), 1,
      sym_nest_host,
    STATE(464), 1,
      sym_inner_classes,
  [3520] = 5,
    ACTIONS(372), 1,
      anon_sym_LT,
    ACTIONS(374), 1,
      anon_sym_DOT,
    STATE(141), 1,
      sym_type_arguments,
    ACTIONS(67), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(69), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [3540] = 7,
    ACTIONS(329), 1,
      anon_sym_implements,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(376), 1,
      anon_sym_Constantpool_COLON,
    STATE(162), 1,
      sym_super_interfaces,
    STATE(163), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3564] = 5,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    STATE(270), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(395), 1,
      sym_runtime_annotation_element_value,
    STATE(400), 2,
      sym_runtime_annotation_element_value_array,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(380), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [3584] = 1,
    ACTIONS(180), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3596] = 1,
    ACTIONS(188), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3608] = 2,
    ACTIONS(135), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(137), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3622] = 7,
    ACTIONS(329), 1,
      anon_sym_implements,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(382), 1,
      anon_sym_Constantpool_COLON,
    STATE(142), 1,
      sym_super_interfaces,
    STATE(143), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3646] = 5,
    ACTIONS(372), 1,
      anon_sym_LT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    STATE(154), 1,
      sym_type_arguments,
    ACTIONS(75), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [3666] = 8,
    ACTIONS(386), 1,
      anon_sym_extends,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_LT,
    STATE(197), 1,
      sym_type_parameters,
    STATE(251), 1,
      sym_superclass,
    STATE(382), 1,
      sym_super_interfaces,
    STATE(471), 1,
      sym_class_def_plain_body,
  [3691] = 2,
    ACTIONS(119), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(121), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3704] = 8,
    ACTIONS(386), 1,
      anon_sym_extends,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_LT,
    STATE(183), 1,
      sym_type_parameters,
    STATE(244), 1,
      sym_superclass,
    STATE(318), 1,
      sym_super_interfaces,
    STATE(486), 1,
      sym_class_def_plain_body,
  [3729] = 7,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      anon_sym_Signature_COLON,
    ACTIONS(398), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(117), 1,
      sym_source_file_def,
    STATE(363), 1,
      sym_signature,
    STATE(463), 1,
      sym_footer,
    STATE(218), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [3752] = 8,
    ACTIONS(386), 1,
      anon_sym_extends,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_LT,
    STATE(182), 1,
      sym_type_parameters,
    STATE(233), 1,
      sym_superclass,
    STATE(331), 1,
      sym_super_interfaces,
    STATE(484), 1,
      sym_class_def_plain_body,
  [3777] = 7,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      anon_sym_Signature_COLON,
    ACTIONS(398), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(117), 1,
      sym_source_file_def,
    STATE(363), 1,
      sym_signature,
    STATE(478), 1,
      sym_footer,
    STATE(129), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [3800] = 8,
    ACTIONS(386), 1,
      anon_sym_extends,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_LT,
    STATE(186), 1,
      sym_type_parameters,
    STATE(239), 1,
      sym_superclass,
    STATE(380), 1,
      sym_super_interfaces,
    STATE(472), 1,
      sym_class_def_plain_body,
  [3825] = 1,
    ACTIONS(400), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [3836] = 7,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(165), 1,
      aux_sym_dimensions_repeat1,
    STATE(181), 1,
      sym_dimensions,
    STATE(211), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(404), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3859] = 2,
    ACTIONS(123), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(125), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3872] = 7,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      sym__identifier,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      aux_sym_dimensions_repeat1,
    STATE(37), 1,
      sym_dimensions,
    STATE(303), 1,
      sym_identifier,
    STATE(304), 1,
      sym_args,
  [3894] = 2,
    ACTIONS(139), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(141), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3906] = 7,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(368), 1,
      anon_sym_NestHost_COLON,
    STATE(203), 1,
      sym_nested_members,
    STATE(295), 1,
      sym_nest_host,
    STATE(445), 1,
      sym_inner_classes,
  [3928] = 3,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(75), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [3942] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(414), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3960] = 2,
    ACTIONS(163), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(165), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3972] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(416), 1,
      anon_sym_Constantpool_COLON,
    STATE(158), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3990] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(418), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4008] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(420), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4026] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4044] = 6,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_AMP,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(248), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4064] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(426), 1,
      anon_sym_Constantpool_COLON,
    STATE(174), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4082] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(428), 1,
      anon_sym_Constantpool_COLON,
    STATE(161), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4100] = 4,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(171), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(173), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4116] = 1,
    ACTIONS(433), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [4126] = 3,
    ACTIONS(437), 1,
      sym_number,
    STATE(151), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
    ACTIONS(435), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4140] = 4,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(278), 1,
      sym_scoped_identifier,
    ACTIONS(440), 2,
      anon_sym_open,
      anon_sym_module,
    STATE(408), 3,
      sym_identifier,
      sym__name,
      sym__reserved_identifier,
  [4156] = 1,
    ACTIONS(347), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_of,
      sym_comment,
  [4166] = 2,
    ACTIONS(159), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(161), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4178] = 4,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(480), 1,
      sym__hash_number,
    STATE(178), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(442), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4194] = 7,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      sym__identifier,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      aux_sym_dimensions_repeat1,
    STATE(37), 1,
      sym_dimensions,
    STATE(269), 1,
      sym_args,
    STATE(339), 1,
      sym_identifier,
  [4216] = 5,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      aux_sym_dimensions_repeat1,
    STATE(181), 1,
      sym_dimensions,
    ACTIONS(446), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(448), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4234] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(450), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4252] = 7,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(284), 1,
      aux_sym_args_repeat1,
  [4274] = 2,
    ACTIONS(167), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(169), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4286] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(458), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4304] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(460), 1,
      anon_sym_Constantpool_COLON,
    STATE(140), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4322] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(462), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4340] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(464), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4358] = 4,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(151), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(153), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4374] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(466), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4392] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(468), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4410] = 4,
    ACTIONS(472), 1,
      anon_sym_POUND,
    STATE(480), 1,
      sym__hash_number,
    STATE(168), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(470), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4426] = 5,
    ACTIONS(143), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      aux_sym_dimensions_repeat1,
    STATE(181), 1,
      sym_dimensions,
    ACTIONS(145), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4444] = 5,
    ACTIONS(475), 1,
      anon_sym_flags_COLON,
    ACTIONS(478), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(480), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4462] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(351), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4480] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(483), 1,
      anon_sym_Constantpool_COLON,
    STATE(164), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4498] = 7,
    ACTIONS(364), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(368), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    STATE(206), 1,
      sym_nested_members,
    STATE(272), 1,
      sym_nest_host,
    STATE(432), 1,
      sym_inner_classes,
  [4520] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(487), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4538] = 3,
    ACTIONS(491), 1,
      sym_number,
    STATE(151), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
    ACTIONS(489), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4552] = 2,
    ACTIONS(155), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(157), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4564] = 5,
    ACTIONS(333), 1,
      anon_sym_flags_COLON,
    ACTIONS(337), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(493), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(285), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4582] = 4,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(480), 1,
      sym__hash_number,
    STATE(168), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(495), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4598] = 2,
    ACTIONS(171), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(173), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4609] = 5,
    ACTIONS(497), 1,
      anon_sym_extends,
    ACTIONS(501), 1,
      sym_super,
    STATE(86), 1,
      sym_extends,
    STATE(369), 1,
      sym__wildcard_bounds,
    ACTIONS(499), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4626] = 2,
    ACTIONS(178), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(180), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4637] = 6,
    ACTIONS(386), 1,
      anon_sym_extends,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(251), 1,
      sym_superclass,
    STATE(382), 1,
      sym_super_interfaces,
    STATE(471), 1,
      sym_class_def_plain_body,
  [4656] = 6,
    ACTIONS(386), 1,
      anon_sym_extends,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(239), 1,
      sym_superclass,
    STATE(380), 1,
      sym_super_interfaces,
    STATE(472), 1,
      sym_class_def_plain_body,
  [4675] = 3,
    STATE(270), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(364), 1,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(380), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [4688] = 2,
    ACTIONS(186), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(188), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4699] = 6,
    ACTIONS(386), 1,
      anon_sym_extends,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_superclass,
    STATE(357), 1,
      sym_super_interfaces,
    STATE(456), 1,
      sym_class_def_plain_body,
  [4718] = 4,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(145), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [4733] = 5,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(503), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4750] = 3,
    STATE(267), 1,
      sym__runtime_annotation_element_value_simple,
    STATE(270), 1,
      sym_runtime_annotation_element_value_tag,
    ACTIONS(380), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [4763] = 6,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_GT,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(279), 1,
      aux_sym_type_arguments_repeat1,
  [4782] = 6,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_GT,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(262), 1,
      aux_sym_type_arguments_repeat1,
  [4801] = 3,
    ACTIONS(513), 1,
      sym__identifier,
    STATE(192), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(511), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4814] = 5,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      sym_comment,
    ACTIONS(522), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(224), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(518), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4831] = 4,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(524), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [4846] = 6,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(296), 1,
      aux_sym_interface_type_list_repeat1,
  [4865] = 3,
    ACTIONS(530), 1,
      sym__identifier,
    STATE(192), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(528), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4878] = 6,
    ACTIONS(386), 1,
      anon_sym_extends,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(245), 1,
      sym_superclass,
    STATE(314), 1,
      sym_super_interfaces,
    STATE(453), 1,
      sym_class_def_plain_body,
  [4897] = 6,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_GT,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(280), 1,
      aux_sym_type_arguments_repeat1,
  [4916] = 6,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(313), 1,
      aux_sym_interface_type_list_repeat1,
  [4935] = 2,
    ACTIONS(536), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(534), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [4945] = 2,
    ACTIONS(540), 1,
      sym_comment,
    ACTIONS(538), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4955] = 1,
    ACTIONS(542), 5,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4963] = 5,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(368), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    STATE(272), 1,
      sym_nest_host,
    STATE(432), 1,
      sym_inner_classes,
  [4979] = 1,
    ACTIONS(544), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4987] = 4,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      sym_number,
    STATE(209), 1,
      aux_sym_code_info_repeat1,
    STATE(254), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5001] = 5,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(368), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    STATE(300), 1,
      sym_nest_host,
    STATE(425), 1,
      sym_inner_classes,
  [5017] = 4,
    ACTIONS(61), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(65), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5031] = 2,
    ACTIONS(556), 1,
      sym_comment,
    ACTIONS(554), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5041] = 4,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      sym_number,
    STATE(276), 1,
      aux_sym_code_info_repeat1,
    STATE(255), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5055] = 4,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(448), 2,
      anon_sym_implements,
      anon_sym_LBRACE,
  [5069] = 4,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(217), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(558), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5083] = 2,
    ACTIONS(564), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(562), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [5093] = 4,
    ACTIONS(81), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(83), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5107] = 4,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(215), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(566), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5121] = 4,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(215), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(573), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5135] = 2,
    ACTIONS(579), 1,
      sym_comment,
    ACTIONS(577), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5145] = 4,
    ACTIONS(143), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5159] = 3,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(587), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(218), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [5171] = 4,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5185] = 5,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(368), 1,
      anon_sym_NestHost_COLON,
    STATE(295), 1,
      sym_nest_host,
    STATE(445), 1,
      sym_inner_classes,
  [5201] = 2,
    ACTIONS(593), 1,
      sym_comment,
    ACTIONS(591), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5211] = 4,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(595), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5225] = 5,
    ACTIONS(597), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(599), 1,
      sym__path_segment,
    ACTIONS(601), 1,
      anon_sym_SLASH,
    STATE(498), 1,
      sym__rest_of_the_line,
    STATE(499), 1,
      sym_file_path,
  [5241] = 4,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(215), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(603), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5255] = 4,
    ACTIONS(497), 1,
      anon_sym_extends,
    STATE(84), 1,
      sym_extends,
    STATE(391), 1,
      sym_type_bound,
    ACTIONS(607), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5269] = 4,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(214), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(603), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5283] = 3,
    ACTIONS(611), 1,
      sym_comment,
    ACTIONS(613), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(609), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5295] = 4,
    ACTIONS(98), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(103), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5309] = 4,
    ACTIONS(597), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(618), 1,
      anon_sym_SLASH,
    STATE(308), 1,
      aux_sym_file_path_repeat1,
    STATE(487), 1,
      sym__rest_of_the_line,
  [5322] = 1,
    ACTIONS(620), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5329] = 1,
    ACTIONS(622), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5336] = 1,
    ACTIONS(624), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5343] = 4,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(384), 1,
      sym_super_interfaces,
    STATE(470), 1,
      sym_class_def_plain_body,
  [5356] = 3,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [5367] = 2,
    ACTIONS(98), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(103), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5376] = 4,
    ACTIONS(629), 1,
      anon_sym_POUND,
    ACTIONS(631), 1,
      sym_number,
    ACTIONS(633), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym__endl,
  [5389] = 3,
    ACTIONS(637), 1,
      anon_sym_AMP,
    STATE(237), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(524), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5400] = 3,
    ACTIONS(113), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(640), 1,
      sym_flag_value,
    ACTIONS(115), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5411] = 4,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(378), 1,
      sym_super_interfaces,
    STATE(458), 1,
      sym_class_def_plain_body,
  [5424] = 2,
    ACTIONS(644), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(642), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5433] = 2,
    ACTIONS(135), 1,
      sym__identifier,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5442] = 2,
    ACTIONS(131), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(133), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5451] = 2,
    ACTIONS(648), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(646), 3,
      anon_sym_LBRACE,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5460] = 4,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(375), 1,
      sym_super_interfaces,
    STATE(474), 1,
      sym_class_def_plain_body,
  [5473] = 4,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(325), 1,
      sym_super_interfaces,
    STATE(438), 1,
      sym_class_def_plain_body,
  [5486] = 4,
    ACTIONS(597), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(618), 1,
      anon_sym_SLASH,
    STATE(308), 1,
      aux_sym_file_path_repeat1,
    STATE(477), 1,
      sym__rest_of_the_line,
  [5499] = 1,
    ACTIONS(650), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5506] = 3,
    ACTIONS(424), 1,
      anon_sym_AMP,
    STATE(237), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(652), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5517] = 4,
    ACTIONS(597), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(618), 1,
      anon_sym_SLASH,
    STATE(246), 1,
      aux_sym_file_path_repeat1,
    STATE(487), 1,
      sym__rest_of_the_line,
  [5530] = 1,
    ACTIONS(654), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5537] = 4,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(338), 1,
      sym_super_interfaces,
    STATE(455), 1,
      sym_class_def_plain_body,
  [5550] = 1,
    ACTIONS(656), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5557] = 4,
    ACTIONS(388), 1,
      anon_sym_implements,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(352), 1,
      sym_super_interfaces,
    STATE(441), 1,
      sym_class_def_plain_body,
  [5570] = 3,
    ACTIONS(548), 1,
      sym_number,
    ACTIONS(658), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(256), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5581] = 3,
    ACTIONS(548), 1,
      sym_number,
    ACTIONS(660), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(256), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5592] = 3,
    ACTIONS(662), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(664), 1,
      sym_number,
    STATE(256), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5603] = 4,
    ACTIONS(597), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(618), 1,
      anon_sym_SLASH,
    STATE(229), 1,
      aux_sym_file_path_repeat1,
    STATE(491), 1,
      sym__rest_of_the_line,
  [5616] = 1,
    ACTIONS(667), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5623] = 1,
    ACTIONS(669), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5630] = 3,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_GT,
    STATE(260), 1,
      aux_sym_type_parameters_repeat1,
  [5640] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_GT,
    STATE(279), 1,
      aux_sym_type_arguments_repeat1,
  [5650] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_GT,
    STATE(307), 1,
      aux_sym_type_arguments_repeat1,
  [5660] = 3,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [5670] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_GT,
    STATE(262), 1,
      aux_sym_type_arguments_repeat1,
  [5680] = 3,
    ACTIONS(444), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      sym_number,
    STATE(227), 1,
      sym__hash_number,
  [5690] = 1,
    ACTIONS(684), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5696] = 3,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [5706] = 1,
    ACTIONS(184), 3,
      anon_sym_RPAREN,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
  [5712] = 3,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    ACTIONS(690), 1,
      anon_sym_throws,
    STATE(443), 1,
      sym_method_throws,
  [5722] = 3,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(266), 1,
      sym_ref_const_pool_item,
    STATE(503), 1,
      sym__hash_number,
  [5732] = 3,
    ACTIONS(597), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(692), 1,
      sym__path_segment,
    STATE(491), 1,
      sym__rest_of_the_line,
  [5742] = 3,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    STATE(425), 1,
      sym_inner_classes,
  [5752] = 3,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(221), 1,
      sym_ref_const_pool_item,
    STATE(435), 1,
      sym__hash_number,
  [5762] = 3,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(225), 1,
      sym_identifier,
    STATE(306), 1,
      sym_type_parameter,
  [5772] = 3,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_GT,
    STATE(292), 1,
      aux_sym_type_parameters_repeat1,
  [5782] = 3,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      sym_number,
    STATE(276), 1,
      aux_sym_code_info_repeat1,
  [5792] = 3,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [5802] = 3,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    ACTIONS(710), 1,
      anon_sym_DOT,
    STATE(410), 1,
      sym_runtime_annotation_args,
  [5812] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      anon_sym_GT,
    STATE(307), 1,
      aux_sym_type_arguments_repeat1,
  [5822] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(714), 1,
      anon_sym_GT,
    STATE(307), 1,
      aux_sym_type_arguments_repeat1,
  [5832] = 3,
    ACTIONS(690), 1,
      anon_sym_throws,
    ACTIONS(716), 1,
      anon_sym_SEMI,
    STATE(423), 1,
      sym_method_throws,
  [5842] = 3,
    ACTIONS(271), 1,
      anon_sym_class,
    ACTIONS(718), 1,
      sym_interface_keyword,
    STATE(334), 1,
      sym_class_keyword,
  [5852] = 3,
    ACTIONS(720), 1,
      anon_sym_descriptor_COLON,
    STATE(63), 1,
      sym__method_def_verbose,
    STATE(377), 1,
      sym_descriptor_def,
  [5862] = 3,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      aux_sym_args_repeat1,
  [5872] = 2,
    ACTIONS(726), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(724), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5880] = 3,
    ACTIONS(444), 1,
      anon_sym_POUND,
    ACTIONS(728), 1,
      sym_number,
    STATE(193), 1,
      sym__hash_number,
  [5890] = 2,
    ACTIONS(730), 1,
      anon_sym_line,
    STATE(15), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [5898] = 3,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    STATE(445), 1,
      sym_inner_classes,
  [5908] = 3,
    ACTIONS(271), 1,
      anon_sym_class,
    ACTIONS(732), 1,
      sym_interface_keyword,
    STATE(327), 1,
      sym_class_keyword,
  [5918] = 1,
    ACTIONS(734), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5924] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_GT,
    STATE(280), 1,
      aux_sym_type_arguments_repeat1,
  [5934] = 3,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_GT,
    STATE(260), 1,
      aux_sym_type_parameters_repeat1,
  [5944] = 1,
    ACTIONS(536), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [5950] = 1,
    ACTIONS(738), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5956] = 3,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    STATE(432), 1,
      sym_inner_classes,
  [5966] = 3,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    STATE(234), 1,
      aux_sym_interface_type_list_repeat1,
  [5976] = 3,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_args_repeat1,
  [5986] = 3,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_GT,
    STATE(260), 1,
      aux_sym_type_parameters_repeat1,
  [5996] = 2,
    ACTIONS(742), 1,
      sym__identifier,
    STATE(196), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [6004] = 3,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(744), 1,
      ts_builtin_sym_end,
    STATE(421), 1,
      sym_inner_classes,
  [6014] = 1,
    ACTIONS(564), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [6020] = 3,
    ACTIONS(746), 1,
      aux_sym_code_info_stat_token1,
    STATE(205), 1,
      sym_code_info_stat,
    STATE(340), 1,
      sym_code_info,
  [6030] = 3,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(748), 1,
      anon_sym_SEMI,
    STATE(281), 1,
      sym_args,
  [6040] = 3,
    ACTIONS(690), 1,
      anon_sym_throws,
    ACTIONS(750), 1,
      anon_sym_SEMI,
    STATE(429), 1,
      sym_method_throws,
  [6050] = 3,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(225), 1,
      sym_identifier,
    STATE(341), 1,
      sym_type_parameter,
  [6060] = 3,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_GT,
    STATE(298), 1,
      aux_sym_type_parameters_repeat1,
  [6070] = 3,
    ACTIONS(589), 1,
      anon_sym_GT,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_type_arguments_repeat1,
  [6080] = 3,
    ACTIONS(757), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(759), 1,
      anon_sym_SLASH,
    STATE(308), 1,
      aux_sym_file_path_repeat1,
  [6090] = 2,
    ACTIONS(491), 1,
      sym_number,
    STATE(175), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
  [6098] = 3,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(225), 1,
      sym_identifier,
    STATE(275), 1,
      sym_type_parameter,
  [6108] = 2,
    STATE(47), 1,
      sym_boolean_literal,
    ACTIONS(762), 2,
      anon_sym_true,
      anon_sym_false,
  [6116] = 3,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_args_repeat1,
  [6126] = 3,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_interface_type_list_repeat1,
  [6136] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(437), 1,
      sym_class_def_plain_body,
  [6143] = 2,
    ACTIONS(767), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(490), 1,
      sym__rest_of_the_line,
  [6150] = 2,
    ACTIONS(769), 1,
      anon_sym_POUND,
    STATE(420), 1,
      sym__hash_number,
  [6157] = 1,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6162] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(473), 1,
      sym_class_def_plain_body,
  [6169] = 1,
    ACTIONS(503), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6174] = 1,
    ACTIONS(771), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [6179] = 2,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(371), 1,
      sym_identifier,
  [6186] = 2,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(430), 1,
      sym__hash_number,
  [6193] = 2,
    ACTIONS(228), 1,
      sym_number,
    STATE(52), 1,
      aux_sym_runtime_visible_annotations_repeat1,
  [6200] = 2,
    ACTIONS(773), 1,
      anon_sym_throws,
    STATE(56), 1,
      sym_method_throws,
  [6207] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(427), 1,
      sym_class_def_plain_body,
  [6214] = 1,
    ACTIONS(757), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [6219] = 2,
    ACTIONS(775), 1,
      sym__identifier,
    STATE(97), 1,
      sym_identifier,
  [6226] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(89), 1,
      sym_header_info_compile,
  [6233] = 2,
    ACTIONS(775), 1,
      sym__identifier,
    STATE(127), 1,
      sym_identifier,
  [6240] = 2,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(413), 1,
      sym__hash_number,
  [6247] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(469), 1,
      sym_class_def_plain_body,
  [6254] = 2,
    ACTIONS(769), 1,
      anon_sym_POUND,
    STATE(208), 1,
      sym__hash_number,
  [6261] = 2,
    ACTIONS(767), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(417), 1,
      sym__rest_of_the_line,
  [6268] = 2,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(126), 1,
      sym_identifier,
  [6275] = 2,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(132), 1,
      sym_identifier,
  [6282] = 1,
    ACTIONS(777), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [6287] = 2,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(104), 1,
      sym_identifier,
  [6294] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(439), 1,
      sym_class_def_plain_body,
  [6301] = 2,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym_args,
  [6308] = 2,
    ACTIONS(779), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(43), 1,
      sym_line_number_table_def,
  [6315] = 1,
    ACTIONS(674), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6320] = 2,
    ACTIONS(769), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym__hash_number,
  [6327] = 2,
    ACTIONS(781), 1,
      anon_sym_Constantpool_COLON,
    STATE(131), 1,
      sym_constant_pool_def,
  [6334] = 2,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__wrapped_hex_val,
  [6341] = 2,
    ACTIONS(775), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
  [6348] = 2,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(415), 1,
      sym_identifier,
  [6355] = 2,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(411), 1,
      sym__hash_number,
  [6362] = 2,
    ACTIONS(785), 1,
      anon_sym_POUND,
    STATE(407), 1,
      sym__hash_number,
  [6369] = 2,
    ACTIONS(769), 1,
      anon_sym_POUND,
    STATE(406), 1,
      sym__hash_number,
  [6376] = 2,
    ACTIONS(787), 1,
      anon_sym_MD5checksum,
    STATE(328), 1,
      sym_header_info_md5,
  [6383] = 1,
    ACTIONS(789), 2,
      anon_sym_COMMA,
      sym_number,
  [6388] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(428), 1,
      sym_class_def_plain_body,
  [6395] = 1,
    ACTIONS(791), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [6400] = 2,
    ACTIONS(746), 1,
      aux_sym_code_info_stat_token1,
    STATE(367), 1,
      sym_code_info_stat,
  [6407] = 2,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(336), 1,
      sym_identifier,
  [6414] = 2,
    ACTIONS(793), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      sym__wrapped_hex_val,
  [6421] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(440), 1,
      sym_class_def_plain_body,
  [6428] = 2,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(130), 1,
      sym_identifier,
  [6435] = 1,
    ACTIONS(795), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6440] = 1,
    ACTIONS(797), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [6445] = 2,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym__hash_number,
  [6452] = 2,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(467), 1,
      sym__hash_number,
  [6459] = 2,
    ACTIONS(398), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(115), 1,
      sym_source_file_def,
  [6466] = 1,
    ACTIONS(706), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6471] = 2,
    ACTIONS(799), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym__endl,
  [6478] = 2,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(128), 1,
      sym_identifier,
  [6485] = 1,
    ACTIONS(701), 2,
      anon_sym_COMMA,
      sym_number,
  [6490] = 2,
    ACTIONS(803), 1,
      aux_sym_instruction_token1,
    STATE(379), 1,
      sym_instruction,
  [6497] = 1,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6502] = 2,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(434), 1,
      sym__hash_number,
  [6509] = 1,
    ACTIONS(807), 2,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
  [6514] = 2,
    ACTIONS(769), 1,
      anon_sym_POUND,
    STATE(216), 1,
      sym__hash_number,
  [6521] = 2,
    ACTIONS(444), 1,
      anon_sym_POUND,
    STATE(424), 1,
      sym__hash_number,
  [6528] = 2,
    ACTIONS(769), 1,
      anon_sym_POUND,
    STATE(201), 1,
      sym__hash_number,
  [6535] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(459), 1,
      sym_class_def_plain_body,
  [6542] = 2,
    ACTIONS(809), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(44), 1,
      sym__rest_of_the_line,
  [6549] = 2,
    ACTIONS(811), 1,
      anon_sym_flags_COLON,
    STATE(8), 1,
      sym_flag_def,
  [6556] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(442), 1,
      sym_class_def_plain_body,
  [6563] = 2,
    ACTIONS(813), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym__endl,
  [6570] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(457), 1,
      sym_class_def_plain_body,
  [6577] = 2,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(20), 1,
      sym_identifier,
  [6584] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(454), 1,
      sym_class_def_plain_body,
  [6591] = 2,
    ACTIONS(819), 1,
      anon_sym_Lastmodified,
    STATE(350), 1,
      sym_header_info_last_mod,
  [6598] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(452), 1,
      sym_class_def_plain_body,
  [6605] = 2,
    ACTIONS(809), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(58), 1,
      sym__rest_of_the_line,
  [6612] = 2,
    ACTIONS(821), 1,
      sym_comment,
    ACTIONS(823), 1,
      sym__endl,
  [6619] = 1,
    ACTIONS(825), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [6624] = 2,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
  [6631] = 2,
    ACTIONS(775), 1,
      sym__identifier,
    STATE(135), 1,
      sym_identifier,
  [6638] = 2,
    ACTIONS(817), 1,
      sym__identifier,
    STATE(21), 1,
      sym_identifier,
  [6645] = 1,
    ACTIONS(827), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6650] = 1,
    ACTIONS(829), 1,
      anon_sym_SEMI,
  [6654] = 1,
    ACTIONS(831), 1,
      sym_number,
  [6658] = 1,
    ACTIONS(833), 1,
      sym_number,
  [6662] = 1,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [6666] = 1,
    ACTIONS(837), 1,
      sym__endl,
  [6670] = 1,
    ACTIONS(839), 1,
      sym__endl,
  [6674] = 1,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [6678] = 1,
    ACTIONS(843), 1,
      anon_sym_COLON2,
  [6682] = 1,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
  [6686] = 1,
    ACTIONS(847), 1,
      anon_sym_POUND,
  [6690] = 1,
    ACTIONS(849), 1,
      sym_comment,
  [6694] = 1,
    ACTIONS(851), 1,
      sym_descriptor_value,
  [6698] = 1,
    ACTIONS(853), 1,
      sym_number,
  [6702] = 1,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
  [6706] = 1,
    ACTIONS(857), 1,
      anon_sym_LPAREN_RPAREN,
  [6710] = 1,
    ACTIONS(859), 1,
      sym__endl,
  [6714] = 1,
    ACTIONS(861), 1,
      anon_sym_DOT,
  [6718] = 1,
    ACTIONS(863), 1,
      sym__endl,
  [6722] = 1,
    ACTIONS(865), 1,
      sym__endl,
  [6726] = 1,
    ACTIONS(867), 1,
      anon_sym_SEMI,
  [6730] = 1,
    ACTIONS(869), 1,
      anon_sym_COLON,
  [6734] = 1,
    ACTIONS(871), 1,
      anon_sym_EQ,
  [6738] = 1,
    ACTIONS(873), 1,
      sym_number,
  [6742] = 1,
    ACTIONS(875), 1,
      anon_sym_EQ2,
  [6746] = 1,
    ACTIONS(877), 1,
      anon_sym_COLON,
  [6750] = 1,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
  [6754] = 1,
    ACTIONS(881), 1,
      sym__endl,
  [6758] = 1,
    ACTIONS(883), 1,
      aux_sym_annotation_default_token1,
  [6762] = 1,
    ACTIONS(885), 1,
      anon_sym_of,
  [6766] = 1,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
  [6770] = 1,
    ACTIONS(889), 1,
      anon_sym_default_value_COLON,
  [6774] = 1,
    ACTIONS(891), 1,
      anon_sym_SEMI,
  [6778] = 1,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
  [6782] = 1,
    ACTIONS(744), 1,
      ts_builtin_sym_end,
  [6786] = 1,
    ACTIONS(895), 1,
      anon_sym_flags_COLON,
  [6790] = 1,
    ACTIONS(897), 1,
      ts_builtin_sym_end,
  [6794] = 1,
    ACTIONS(899), 1,
      ts_builtin_sym_end,
  [6798] = 1,
    ACTIONS(716), 1,
      anon_sym_SEMI,
  [6802] = 1,
    ACTIONS(901), 1,
      anon_sym_EQ,
  [6806] = 1,
    ACTIONS(347), 1,
      sym__endl,
  [6810] = 1,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
  [6814] = 1,
    ACTIONS(903), 1,
      anon_sym_class,
  [6818] = 1,
    ACTIONS(905), 1,
      anon_sym_COLON2,
  [6822] = 1,
    ACTIONS(907), 1,
      anon_sym_DOT,
  [6826] = 1,
    ACTIONS(909), 1,
      sym_flag_value,
  [6830] = 1,
    ACTIONS(911), 1,
      ts_builtin_sym_end,
  [6834] = 1,
    ACTIONS(913), 1,
      ts_builtin_sym_end,
  [6838] = 1,
    ACTIONS(915), 1,
      ts_builtin_sym_end,
  [6842] = 1,
    ACTIONS(917), 1,
      ts_builtin_sym_end,
  [6846] = 1,
    ACTIONS(919), 1,
      ts_builtin_sym_end,
  [6850] = 1,
    ACTIONS(921), 1,
      ts_builtin_sym_end,
  [6854] = 1,
    ACTIONS(750), 1,
      anon_sym_SEMI,
  [6858] = 1,
    ACTIONS(923), 1,
      anon_sym_COLON,
  [6862] = 1,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
  [6866] = 1,
    ACTIONS(925), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6870] = 1,
    ACTIONS(927), 1,
      sym_number,
  [6874] = 1,
    ACTIONS(929), 1,
      sym_decimal_floating_point_literal,
  [6878] = 1,
    ACTIONS(931), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [6882] = 1,
    ACTIONS(933), 1,
      aux_sym_class_info_item_simple_token1,
  [6886] = 1,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [6890] = 1,
    ACTIONS(937), 1,
      ts_builtin_sym_end,
  [6894] = 1,
    ACTIONS(939), 1,
      ts_builtin_sym_end,
  [6898] = 1,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
  [6902] = 1,
    ACTIONS(943), 1,
      ts_builtin_sym_end,
  [6906] = 1,
    ACTIONS(945), 1,
      ts_builtin_sym_end,
  [6910] = 1,
    ACTIONS(947), 1,
      ts_builtin_sym_end,
  [6914] = 1,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
  [6918] = 1,
    ACTIONS(951), 1,
      ts_builtin_sym_end,
  [6922] = 1,
    ACTIONS(953), 1,
      ts_builtin_sym_end,
  [6926] = 1,
    ACTIONS(955), 1,
      anon_sym_SEMI,
  [6930] = 1,
    ACTIONS(957), 1,
      anon_sym_RBRACK,
  [6934] = 1,
    ACTIONS(959), 1,
      ts_builtin_sym_end,
  [6938] = 1,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
  [6942] = 1,
    ACTIONS(961), 1,
      aux_sym_header_info_compile_token1,
  [6946] = 1,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
  [6950] = 1,
    ACTIONS(965), 1,
      sym_comment,
  [6954] = 1,
    ACTIONS(967), 1,
      sym_hex_value,
  [6958] = 1,
    ACTIONS(969), 1,
      ts_builtin_sym_end,
  [6962] = 1,
    ACTIONS(971), 1,
      ts_builtin_sym_end,
  [6966] = 1,
    ACTIONS(973), 1,
      ts_builtin_sym_end,
  [6970] = 1,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
  [6974] = 1,
    ACTIONS(977), 1,
      ts_builtin_sym_end,
  [6978] = 1,
    ACTIONS(979), 1,
      ts_builtin_sym_end,
  [6982] = 1,
    ACTIONS(981), 1,
      anon_sym_SEMI,
  [6986] = 1,
    ACTIONS(983), 1,
      ts_builtin_sym_end,
  [6990] = 1,
    ACTIONS(985), 1,
      anon_sym_Lastmodified,
  [6994] = 1,
    ACTIONS(987), 1,
      ts_builtin_sym_end,
  [6998] = 1,
    ACTIONS(989), 1,
      aux_sym_source_file_def_token1,
  [7002] = 1,
    ACTIONS(991), 1,
      anon_sym_EQ,
  [7006] = 1,
    ACTIONS(993), 1,
      sym_number,
  [7010] = 1,
    ACTIONS(995), 1,
      sym_number,
  [7014] = 1,
    ACTIONS(997), 1,
      anon_sym_Compiledfrom,
  [7018] = 1,
    ACTIONS(999), 1,
      ts_builtin_sym_end,
  [7022] = 1,
    ACTIONS(1001), 1,
      anon_sym_RBRACK,
  [7026] = 1,
    ACTIONS(1003), 1,
      ts_builtin_sym_end,
  [7030] = 1,
    ACTIONS(1005), 1,
      anon_sym_Lastmodified,
  [7034] = 1,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
  [7038] = 1,
    ACTIONS(1009), 1,
      sym_md5,
  [7042] = 1,
    ACTIONS(1011), 1,
      anon_sym_MD5checksum,
  [7046] = 1,
    ACTIONS(1013), 1,
      anon_sym_Lastmodified,
  [7050] = 1,
    ACTIONS(1015), 1,
      sym_flag_value,
  [7054] = 1,
    ACTIONS(1017), 1,
      sym__path_segment,
  [7058] = 1,
    ACTIONS(1019), 1,
      ts_builtin_sym_end,
  [7062] = 1,
    ACTIONS(1021), 1,
      sym_number,
  [7066] = 1,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
  [7070] = 1,
    ACTIONS(1025), 1,
      sym__identifier,
  [7074] = 1,
    ACTIONS(1027), 1,
      anon_sym_Lastmodified,
  [7078] = 1,
    ACTIONS(1029), 1,
      anon_sym_Lastmodified,
  [7082] = 1,
    ACTIONS(1031), 1,
      ts_builtin_sym_end,
  [7086] = 1,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
  [7090] = 1,
    ACTIONS(1035), 1,
      sym_hex_value,
  [7094] = 1,
    ACTIONS(1037), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 354,
  [SMALL_STATE(9)] = 409,
  [SMALL_STATE(10)] = 458,
  [SMALL_STATE(11)] = 494,
  [SMALL_STATE(12)] = 532,
  [SMALL_STATE(13)] = 570,
  [SMALL_STATE(14)] = 606,
  [SMALL_STATE(15)] = 642,
  [SMALL_STATE(16)] = 678,
  [SMALL_STATE(17)] = 714,
  [SMALL_STATE(18)] = 755,
  [SMALL_STATE(19)] = 788,
  [SMALL_STATE(20)] = 831,
  [SMALL_STATE(21)] = 862,
  [SMALL_STATE(22)] = 893,
  [SMALL_STATE(23)] = 924,
  [SMALL_STATE(24)] = 967,
  [SMALL_STATE(25)] = 998,
  [SMALL_STATE(26)] = 1029,
  [SMALL_STATE(27)] = 1059,
  [SMALL_STATE(28)] = 1095,
  [SMALL_STATE(29)] = 1125,
  [SMALL_STATE(30)] = 1159,
  [SMALL_STATE(31)] = 1189,
  [SMALL_STATE(32)] = 1219,
  [SMALL_STATE(33)] = 1249,
  [SMALL_STATE(34)] = 1281,
  [SMALL_STATE(35)] = 1311,
  [SMALL_STATE(36)] = 1345,
  [SMALL_STATE(37)] = 1382,
  [SMALL_STATE(38)] = 1411,
  [SMALL_STATE(39)] = 1440,
  [SMALL_STATE(40)] = 1469,
  [SMALL_STATE(41)] = 1498,
  [SMALL_STATE(42)] = 1535,
  [SMALL_STATE(43)] = 1572,
  [SMALL_STATE(44)] = 1601,
  [SMALL_STATE(45)] = 1629,
  [SMALL_STATE(46)] = 1661,
  [SMALL_STATE(47)] = 1693,
  [SMALL_STATE(48)] = 1720,
  [SMALL_STATE(49)] = 1751,
  [SMALL_STATE(50)] = 1782,
  [SMALL_STATE(51)] = 1813,
  [SMALL_STATE(52)] = 1844,
  [SMALL_STATE(53)] = 1875,
  [SMALL_STATE(54)] = 1906,
  [SMALL_STATE(55)] = 1933,
  [SMALL_STATE(56)] = 1963,
  [SMALL_STATE(57)] = 1989,
  [SMALL_STATE(58)] = 2019,
  [SMALL_STATE(59)] = 2045,
  [SMALL_STATE(60)] = 2070,
  [SMALL_STATE(61)] = 2095,
  [SMALL_STATE(62)] = 2120,
  [SMALL_STATE(63)] = 2145,
  [SMALL_STATE(64)] = 2170,
  [SMALL_STATE(65)] = 2195,
  [SMALL_STATE(66)] = 2220,
  [SMALL_STATE(67)] = 2254,
  [SMALL_STATE(68)] = 2287,
  [SMALL_STATE(69)] = 2322,
  [SMALL_STATE(70)] = 2358,
  [SMALL_STATE(71)] = 2394,
  [SMALL_STATE(72)] = 2430,
  [SMALL_STATE(73)] = 2457,
  [SMALL_STATE(74)] = 2484,
  [SMALL_STATE(75)] = 2517,
  [SMALL_STATE(76)] = 2550,
  [SMALL_STATE(77)] = 2573,
  [SMALL_STATE(78)] = 2594,
  [SMALL_STATE(79)] = 2617,
  [SMALL_STATE(80)] = 2647,
  [SMALL_STATE(81)] = 2677,
  [SMALL_STATE(82)] = 2701,
  [SMALL_STATE(83)] = 2731,
  [SMALL_STATE(84)] = 2761,
  [SMALL_STATE(85)] = 2788,
  [SMALL_STATE(86)] = 2815,
  [SMALL_STATE(87)] = 2842,
  [SMALL_STATE(88)] = 2869,
  [SMALL_STATE(89)] = 2896,
  [SMALL_STATE(90)] = 2913,
  [SMALL_STATE(91)] = 2940,
  [SMALL_STATE(92)] = 2967,
  [SMALL_STATE(93)] = 2994,
  [SMALL_STATE(94)] = 3021,
  [SMALL_STATE(95)] = 3048,
  [SMALL_STATE(96)] = 3065,
  [SMALL_STATE(97)] = 3081,
  [SMALL_STATE(98)] = 3117,
  [SMALL_STATE(99)] = 3153,
  [SMALL_STATE(100)] = 3174,
  [SMALL_STATE(101)] = 3195,
  [SMALL_STATE(102)] = 3212,
  [SMALL_STATE(103)] = 3242,
  [SMALL_STATE(104)] = 3272,
  [SMALL_STATE(105)] = 3288,
  [SMALL_STATE(106)] = 3304,
  [SMALL_STATE(107)] = 3319,
  [SMALL_STATE(108)] = 3334,
  [SMALL_STATE(109)] = 3349,
  [SMALL_STATE(110)] = 3364,
  [SMALL_STATE(111)] = 3381,
  [SMALL_STATE(112)] = 3396,
  [SMALL_STATE(113)] = 3411,
  [SMALL_STATE(114)] = 3428,
  [SMALL_STATE(115)] = 3452,
  [SMALL_STATE(116)] = 3480,
  [SMALL_STATE(117)] = 3492,
  [SMALL_STATE(118)] = 3520,
  [SMALL_STATE(119)] = 3540,
  [SMALL_STATE(120)] = 3564,
  [SMALL_STATE(121)] = 3584,
  [SMALL_STATE(122)] = 3596,
  [SMALL_STATE(123)] = 3608,
  [SMALL_STATE(124)] = 3622,
  [SMALL_STATE(125)] = 3646,
  [SMALL_STATE(126)] = 3666,
  [SMALL_STATE(127)] = 3691,
  [SMALL_STATE(128)] = 3704,
  [SMALL_STATE(129)] = 3729,
  [SMALL_STATE(130)] = 3752,
  [SMALL_STATE(131)] = 3777,
  [SMALL_STATE(132)] = 3800,
  [SMALL_STATE(133)] = 3825,
  [SMALL_STATE(134)] = 3836,
  [SMALL_STATE(135)] = 3859,
  [SMALL_STATE(136)] = 3872,
  [SMALL_STATE(137)] = 3894,
  [SMALL_STATE(138)] = 3906,
  [SMALL_STATE(139)] = 3928,
  [SMALL_STATE(140)] = 3942,
  [SMALL_STATE(141)] = 3960,
  [SMALL_STATE(142)] = 3972,
  [SMALL_STATE(143)] = 3990,
  [SMALL_STATE(144)] = 4008,
  [SMALL_STATE(145)] = 4026,
  [SMALL_STATE(146)] = 4044,
  [SMALL_STATE(147)] = 4064,
  [SMALL_STATE(148)] = 4082,
  [SMALL_STATE(149)] = 4100,
  [SMALL_STATE(150)] = 4116,
  [SMALL_STATE(151)] = 4126,
  [SMALL_STATE(152)] = 4140,
  [SMALL_STATE(153)] = 4156,
  [SMALL_STATE(154)] = 4166,
  [SMALL_STATE(155)] = 4178,
  [SMALL_STATE(156)] = 4194,
  [SMALL_STATE(157)] = 4216,
  [SMALL_STATE(158)] = 4234,
  [SMALL_STATE(159)] = 4252,
  [SMALL_STATE(160)] = 4274,
  [SMALL_STATE(161)] = 4286,
  [SMALL_STATE(162)] = 4304,
  [SMALL_STATE(163)] = 4322,
  [SMALL_STATE(164)] = 4340,
  [SMALL_STATE(165)] = 4358,
  [SMALL_STATE(166)] = 4374,
  [SMALL_STATE(167)] = 4392,
  [SMALL_STATE(168)] = 4410,
  [SMALL_STATE(169)] = 4426,
  [SMALL_STATE(170)] = 4444,
  [SMALL_STATE(171)] = 4462,
  [SMALL_STATE(172)] = 4480,
  [SMALL_STATE(173)] = 4498,
  [SMALL_STATE(174)] = 4520,
  [SMALL_STATE(175)] = 4538,
  [SMALL_STATE(176)] = 4552,
  [SMALL_STATE(177)] = 4564,
  [SMALL_STATE(178)] = 4582,
  [SMALL_STATE(179)] = 4598,
  [SMALL_STATE(180)] = 4609,
  [SMALL_STATE(181)] = 4626,
  [SMALL_STATE(182)] = 4637,
  [SMALL_STATE(183)] = 4656,
  [SMALL_STATE(184)] = 4675,
  [SMALL_STATE(185)] = 4688,
  [SMALL_STATE(186)] = 4699,
  [SMALL_STATE(187)] = 4718,
  [SMALL_STATE(188)] = 4733,
  [SMALL_STATE(189)] = 4750,
  [SMALL_STATE(190)] = 4763,
  [SMALL_STATE(191)] = 4782,
  [SMALL_STATE(192)] = 4801,
  [SMALL_STATE(193)] = 4814,
  [SMALL_STATE(194)] = 4831,
  [SMALL_STATE(195)] = 4846,
  [SMALL_STATE(196)] = 4865,
  [SMALL_STATE(197)] = 4878,
  [SMALL_STATE(198)] = 4897,
  [SMALL_STATE(199)] = 4916,
  [SMALL_STATE(200)] = 4935,
  [SMALL_STATE(201)] = 4945,
  [SMALL_STATE(202)] = 4955,
  [SMALL_STATE(203)] = 4963,
  [SMALL_STATE(204)] = 4979,
  [SMALL_STATE(205)] = 4987,
  [SMALL_STATE(206)] = 5001,
  [SMALL_STATE(207)] = 5017,
  [SMALL_STATE(208)] = 5031,
  [SMALL_STATE(209)] = 5041,
  [SMALL_STATE(210)] = 5055,
  [SMALL_STATE(211)] = 5069,
  [SMALL_STATE(212)] = 5083,
  [SMALL_STATE(213)] = 5093,
  [SMALL_STATE(214)] = 5107,
  [SMALL_STATE(215)] = 5121,
  [SMALL_STATE(216)] = 5135,
  [SMALL_STATE(217)] = 5145,
  [SMALL_STATE(218)] = 5159,
  [SMALL_STATE(219)] = 5171,
  [SMALL_STATE(220)] = 5185,
  [SMALL_STATE(221)] = 5201,
  [SMALL_STATE(222)] = 5211,
  [SMALL_STATE(223)] = 5225,
  [SMALL_STATE(224)] = 5241,
  [SMALL_STATE(225)] = 5255,
  [SMALL_STATE(226)] = 5269,
  [SMALL_STATE(227)] = 5283,
  [SMALL_STATE(228)] = 5295,
  [SMALL_STATE(229)] = 5309,
  [SMALL_STATE(230)] = 5322,
  [SMALL_STATE(231)] = 5329,
  [SMALL_STATE(232)] = 5336,
  [SMALL_STATE(233)] = 5343,
  [SMALL_STATE(234)] = 5356,
  [SMALL_STATE(235)] = 5367,
  [SMALL_STATE(236)] = 5376,
  [SMALL_STATE(237)] = 5389,
  [SMALL_STATE(238)] = 5400,
  [SMALL_STATE(239)] = 5411,
  [SMALL_STATE(240)] = 5424,
  [SMALL_STATE(241)] = 5433,
  [SMALL_STATE(242)] = 5442,
  [SMALL_STATE(243)] = 5451,
  [SMALL_STATE(244)] = 5460,
  [SMALL_STATE(245)] = 5473,
  [SMALL_STATE(246)] = 5486,
  [SMALL_STATE(247)] = 5499,
  [SMALL_STATE(248)] = 5506,
  [SMALL_STATE(249)] = 5517,
  [SMALL_STATE(250)] = 5530,
  [SMALL_STATE(251)] = 5537,
  [SMALL_STATE(252)] = 5550,
  [SMALL_STATE(253)] = 5557,
  [SMALL_STATE(254)] = 5570,
  [SMALL_STATE(255)] = 5581,
  [SMALL_STATE(256)] = 5592,
  [SMALL_STATE(257)] = 5603,
  [SMALL_STATE(258)] = 5616,
  [SMALL_STATE(259)] = 5623,
  [SMALL_STATE(260)] = 5630,
  [SMALL_STATE(261)] = 5640,
  [SMALL_STATE(262)] = 5650,
  [SMALL_STATE(263)] = 5660,
  [SMALL_STATE(264)] = 5670,
  [SMALL_STATE(265)] = 5680,
  [SMALL_STATE(266)] = 5690,
  [SMALL_STATE(267)] = 5696,
  [SMALL_STATE(268)] = 5706,
  [SMALL_STATE(269)] = 5712,
  [SMALL_STATE(270)] = 5722,
  [SMALL_STATE(271)] = 5732,
  [SMALL_STATE(272)] = 5742,
  [SMALL_STATE(273)] = 5752,
  [SMALL_STATE(274)] = 5762,
  [SMALL_STATE(275)] = 5772,
  [SMALL_STATE(276)] = 5782,
  [SMALL_STATE(277)] = 5792,
  [SMALL_STATE(278)] = 5802,
  [SMALL_STATE(279)] = 5812,
  [SMALL_STATE(280)] = 5822,
  [SMALL_STATE(281)] = 5832,
  [SMALL_STATE(282)] = 5842,
  [SMALL_STATE(283)] = 5852,
  [SMALL_STATE(284)] = 5862,
  [SMALL_STATE(285)] = 5872,
  [SMALL_STATE(286)] = 5880,
  [SMALL_STATE(287)] = 5890,
  [SMALL_STATE(288)] = 5898,
  [SMALL_STATE(289)] = 5908,
  [SMALL_STATE(290)] = 5918,
  [SMALL_STATE(291)] = 5924,
  [SMALL_STATE(292)] = 5934,
  [SMALL_STATE(293)] = 5944,
  [SMALL_STATE(294)] = 5950,
  [SMALL_STATE(295)] = 5956,
  [SMALL_STATE(296)] = 5966,
  [SMALL_STATE(297)] = 5976,
  [SMALL_STATE(298)] = 5986,
  [SMALL_STATE(299)] = 5996,
  [SMALL_STATE(300)] = 6004,
  [SMALL_STATE(301)] = 6014,
  [SMALL_STATE(302)] = 6020,
  [SMALL_STATE(303)] = 6030,
  [SMALL_STATE(304)] = 6040,
  [SMALL_STATE(305)] = 6050,
  [SMALL_STATE(306)] = 6060,
  [SMALL_STATE(307)] = 6070,
  [SMALL_STATE(308)] = 6080,
  [SMALL_STATE(309)] = 6090,
  [SMALL_STATE(310)] = 6098,
  [SMALL_STATE(311)] = 6108,
  [SMALL_STATE(312)] = 6116,
  [SMALL_STATE(313)] = 6126,
  [SMALL_STATE(314)] = 6136,
  [SMALL_STATE(315)] = 6143,
  [SMALL_STATE(316)] = 6150,
  [SMALL_STATE(317)] = 6157,
  [SMALL_STATE(318)] = 6162,
  [SMALL_STATE(319)] = 6169,
  [SMALL_STATE(320)] = 6174,
  [SMALL_STATE(321)] = 6179,
  [SMALL_STATE(322)] = 6186,
  [SMALL_STATE(323)] = 6193,
  [SMALL_STATE(324)] = 6200,
  [SMALL_STATE(325)] = 6207,
  [SMALL_STATE(326)] = 6214,
  [SMALL_STATE(327)] = 6219,
  [SMALL_STATE(328)] = 6226,
  [SMALL_STATE(329)] = 6233,
  [SMALL_STATE(330)] = 6240,
  [SMALL_STATE(331)] = 6247,
  [SMALL_STATE(332)] = 6254,
  [SMALL_STATE(333)] = 6261,
  [SMALL_STATE(334)] = 6268,
  [SMALL_STATE(335)] = 6275,
  [SMALL_STATE(336)] = 6282,
  [SMALL_STATE(337)] = 6287,
  [SMALL_STATE(338)] = 6294,
  [SMALL_STATE(339)] = 6301,
  [SMALL_STATE(340)] = 6308,
  [SMALL_STATE(341)] = 6315,
  [SMALL_STATE(342)] = 6320,
  [SMALL_STATE(343)] = 6327,
  [SMALL_STATE(344)] = 6334,
  [SMALL_STATE(345)] = 6341,
  [SMALL_STATE(346)] = 6348,
  [SMALL_STATE(347)] = 6355,
  [SMALL_STATE(348)] = 6362,
  [SMALL_STATE(349)] = 6369,
  [SMALL_STATE(350)] = 6376,
  [SMALL_STATE(351)] = 6383,
  [SMALL_STATE(352)] = 6388,
  [SMALL_STATE(353)] = 6395,
  [SMALL_STATE(354)] = 6400,
  [SMALL_STATE(355)] = 6407,
  [SMALL_STATE(356)] = 6414,
  [SMALL_STATE(357)] = 6421,
  [SMALL_STATE(358)] = 6428,
  [SMALL_STATE(359)] = 6435,
  [SMALL_STATE(360)] = 6440,
  [SMALL_STATE(361)] = 6445,
  [SMALL_STATE(362)] = 6452,
  [SMALL_STATE(363)] = 6459,
  [SMALL_STATE(364)] = 6466,
  [SMALL_STATE(365)] = 6471,
  [SMALL_STATE(366)] = 6478,
  [SMALL_STATE(367)] = 6485,
  [SMALL_STATE(368)] = 6490,
  [SMALL_STATE(369)] = 6497,
  [SMALL_STATE(370)] = 6502,
  [SMALL_STATE(371)] = 6509,
  [SMALL_STATE(372)] = 6514,
  [SMALL_STATE(373)] = 6521,
  [SMALL_STATE(374)] = 6528,
  [SMALL_STATE(375)] = 6535,
  [SMALL_STATE(376)] = 6542,
  [SMALL_STATE(377)] = 6549,
  [SMALL_STATE(378)] = 6556,
  [SMALL_STATE(379)] = 6563,
  [SMALL_STATE(380)] = 6570,
  [SMALL_STATE(381)] = 6577,
  [SMALL_STATE(382)] = 6584,
  [SMALL_STATE(383)] = 6591,
  [SMALL_STATE(384)] = 6598,
  [SMALL_STATE(385)] = 6605,
  [SMALL_STATE(386)] = 6612,
  [SMALL_STATE(387)] = 6619,
  [SMALL_STATE(388)] = 6624,
  [SMALL_STATE(389)] = 6631,
  [SMALL_STATE(390)] = 6638,
  [SMALL_STATE(391)] = 6645,
  [SMALL_STATE(392)] = 6650,
  [SMALL_STATE(393)] = 6654,
  [SMALL_STATE(394)] = 6658,
  [SMALL_STATE(395)] = 6662,
  [SMALL_STATE(396)] = 6666,
  [SMALL_STATE(397)] = 6670,
  [SMALL_STATE(398)] = 6674,
  [SMALL_STATE(399)] = 6678,
  [SMALL_STATE(400)] = 6682,
  [SMALL_STATE(401)] = 6686,
  [SMALL_STATE(402)] = 6690,
  [SMALL_STATE(403)] = 6694,
  [SMALL_STATE(404)] = 6698,
  [SMALL_STATE(405)] = 6702,
  [SMALL_STATE(406)] = 6706,
  [SMALL_STATE(407)] = 6710,
  [SMALL_STATE(408)] = 6714,
  [SMALL_STATE(409)] = 6718,
  [SMALL_STATE(410)] = 6722,
  [SMALL_STATE(411)] = 6726,
  [SMALL_STATE(412)] = 6730,
  [SMALL_STATE(413)] = 6734,
  [SMALL_STATE(414)] = 6738,
  [SMALL_STATE(415)] = 6742,
  [SMALL_STATE(416)] = 6746,
  [SMALL_STATE(417)] = 6750,
  [SMALL_STATE(418)] = 6754,
  [SMALL_STATE(419)] = 6758,
  [SMALL_STATE(420)] = 6762,
  [SMALL_STATE(421)] = 6766,
  [SMALL_STATE(422)] = 6770,
  [SMALL_STATE(423)] = 6774,
  [SMALL_STATE(424)] = 6778,
  [SMALL_STATE(425)] = 6782,
  [SMALL_STATE(426)] = 6786,
  [SMALL_STATE(427)] = 6790,
  [SMALL_STATE(428)] = 6794,
  [SMALL_STATE(429)] = 6798,
  [SMALL_STATE(430)] = 6802,
  [SMALL_STATE(431)] = 6806,
  [SMALL_STATE(432)] = 6810,
  [SMALL_STATE(433)] = 6814,
  [SMALL_STATE(434)] = 6818,
  [SMALL_STATE(435)] = 6822,
  [SMALL_STATE(436)] = 6826,
  [SMALL_STATE(437)] = 6830,
  [SMALL_STATE(438)] = 6834,
  [SMALL_STATE(439)] = 6838,
  [SMALL_STATE(440)] = 6842,
  [SMALL_STATE(441)] = 6846,
  [SMALL_STATE(442)] = 6850,
  [SMALL_STATE(443)] = 6854,
  [SMALL_STATE(444)] = 6858,
  [SMALL_STATE(445)] = 6862,
  [SMALL_STATE(446)] = 6866,
  [SMALL_STATE(447)] = 6870,
  [SMALL_STATE(448)] = 6874,
  [SMALL_STATE(449)] = 6878,
  [SMALL_STATE(450)] = 6882,
  [SMALL_STATE(451)] = 6886,
  [SMALL_STATE(452)] = 6890,
  [SMALL_STATE(453)] = 6894,
  [SMALL_STATE(454)] = 6898,
  [SMALL_STATE(455)] = 6902,
  [SMALL_STATE(456)] = 6906,
  [SMALL_STATE(457)] = 6910,
  [SMALL_STATE(458)] = 6914,
  [SMALL_STATE(459)] = 6918,
  [SMALL_STATE(460)] = 6922,
  [SMALL_STATE(461)] = 6926,
  [SMALL_STATE(462)] = 6930,
  [SMALL_STATE(463)] = 6934,
  [SMALL_STATE(464)] = 6938,
  [SMALL_STATE(465)] = 6942,
  [SMALL_STATE(466)] = 6946,
  [SMALL_STATE(467)] = 6950,
  [SMALL_STATE(468)] = 6954,
  [SMALL_STATE(469)] = 6958,
  [SMALL_STATE(470)] = 6962,
  [SMALL_STATE(471)] = 6966,
  [SMALL_STATE(472)] = 6970,
  [SMALL_STATE(473)] = 6974,
  [SMALL_STATE(474)] = 6978,
  [SMALL_STATE(475)] = 6982,
  [SMALL_STATE(476)] = 6986,
  [SMALL_STATE(477)] = 6990,
  [SMALL_STATE(478)] = 6994,
  [SMALL_STATE(479)] = 6998,
  [SMALL_STATE(480)] = 7002,
  [SMALL_STATE(481)] = 7006,
  [SMALL_STATE(482)] = 7010,
  [SMALL_STATE(483)] = 7014,
  [SMALL_STATE(484)] = 7018,
  [SMALL_STATE(485)] = 7022,
  [SMALL_STATE(486)] = 7026,
  [SMALL_STATE(487)] = 7030,
  [SMALL_STATE(488)] = 7034,
  [SMALL_STATE(489)] = 7038,
  [SMALL_STATE(490)] = 7042,
  [SMALL_STATE(491)] = 7046,
  [SMALL_STATE(492)] = 7050,
  [SMALL_STATE(493)] = 7054,
  [SMALL_STATE(494)] = 7058,
  [SMALL_STATE(495)] = 7062,
  [SMALL_STATE(496)] = 7066,
  [SMALL_STATE(497)] = 7070,
  [SMALL_STATE(498)] = 7074,
  [SMALL_STATE(499)] = 7078,
  [SMALL_STATE(500)] = 7082,
  [SMALL_STATE(501)] = 7086,
  [SMALL_STATE(502)] = 7090,
  [SMALL_STATE(503)] = 7094,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(25),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(57),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(39),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(39),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(404),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(492),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 11),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 11),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(485),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_the_line, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_the_line, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_default, 6, .production_id = 17),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_default, 6, .production_id = 17),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(91),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprecated, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2), SHIFT_REPEAT(416),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 6),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 6),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotations, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotations, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(55),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exceptions, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exceptions, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 6, .production_id = 17),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 6, .production_id = 17),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 7),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 7),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_item, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_item, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(76),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(78),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(462),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 9),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 8),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 13),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 9),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 10),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 4),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(496),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_annotations_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_annotations_repeat1, 2), SHIFT_REPEAT(444),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superclass, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superclass, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 7, .production_id = 13),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 8),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 6),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 10),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(481),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(356),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(286),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 6),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_annotations, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(241),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2, .production_id = 15),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_annotation, 12),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4, .production_id = 16),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(450),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2, .production_id = 15),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(88),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(436),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3, .production_id = 15),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3, .production_id = 15),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 3),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(85),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(93),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_interfaces, 2),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_super_interfaces, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5, .production_id = 16),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2, .production_id = 14),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(412),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_int, 2, .production_id = 14),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(305),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_annotation_element_value_simple, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(354),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2), SHIFT_REPEAT(184),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(75),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(493),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(82),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 18),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nest_host, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_tag, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 4),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_args, 6, .production_id = 19),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 7, .production_id = 13),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 7, .production_id = 13),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 10),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 9),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 8),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 10),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 9),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 8),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 4),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 6),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 5),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 6),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 5),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 4),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 2),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_keyword, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1033] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
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
