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
#define STATE_COUNT 571
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 234
#define ALIAS_COUNT 2
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 26

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
  anon_sym_Signature_COLON = 10,
  anon_sym_AnnotationDefault_COLON = 11,
  anon_sym_default_value_COLON = 12,
  aux_sym_annotation_default_token1 = 13,
  anon_sym_Deprecated_COLON = 14,
  anon_sym_COLON = 15,
  anon_sym_LPAREN_RPAREN = 16,
  anon_sym_RuntimeVisibleAnnotations_COLON = 17,
  anon_sym_RuntimeVisibleTypeAnnotations_COLON = 18,
  anon_sym_COLON2 = 19,
  aux_sym_runtime_visible_type_annotation_token1 = 20,
  anon_sym_EQ = 21,
  anon_sym_RuntimeVisibleParameterAnnotations_COLON = 22,
  anon_sym_parameter = 23,
  anon_sym_Exceptions_COLON = 24,
  anon_sym_LBRACE_RBRACE = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_AMP = 28,
  anon_sym_public = 29,
  anon_sym_protected = 30,
  anon_sym_private = 31,
  anon_sym_abstract = 32,
  anon_sym_static = 33,
  anon_sym_final = 34,
  anon_sym_strictfp = 35,
  anon_sym_default = 36,
  anon_sym_synchronized = 37,
  anon_sym_native = 38,
  anon_sym_transient = 39,
  anon_sym_volatile = 40,
  anon_sym_Code_COLON = 41,
  anon_sym_LineNumberTable_COLON = 42,
  anon_sym_line = 43,
  aux_sym_instruction_token1 = 44,
  anon_sym_POUND = 45,
  aux_sym_code_info_stat_token1 = 46,
  anon_sym_descriptor_COLON = 47,
  sym_descriptor_value = 48,
  anon_sym_flags_COLON = 49,
  sym_flag_value = 50,
  anon_sym_LPAREN = 51,
  anon_sym_RPAREN = 52,
  sym_hex_value = 53,
  anon_sym_LBRACK = 54,
  anon_sym_RBRACK = 55,
  anon_sym_DOT_DOT_DOT = 56,
  anon_sym_DOT = 57,
  anon_sym_QMARK = 58,
  sym_super = 59,
  anon_sym_int = 60,
  anon_sym_char = 61,
  anon_sym_void = 62,
  anon_sym_double = 63,
  anon_sym_float = 64,
  anon_sym_byte = 65,
  anon_sym_open = 66,
  anon_sym_module = 67,
  sym_number = 68,
  anon_sym_SourceFile_COLON_DQUOTE = 69,
  aux_sym_source_file_def_token1 = 70,
  anon_sym_DQUOTE = 71,
  anon_sym_NestMembers_COLON = 72,
  anon_sym_InnerClasses_COLON = 73,
  anon_sym_EQ2 = 74,
  anon_sym_of = 75,
  anon_sym_NestHost_COLON = 76,
  anon_sym_class = 77,
  anon_sym_e = 78,
  anon_sym_s = 79,
  anon_sym_c = 80,
  anon_sym_AT = 81,
  sym_comment = 82,
  anon_sym_Constantpool_COLON = 83,
  anon_sym_Utf8 = 84,
  aux_sym__constant_pool_item_type_utf8_token1 = 85,
  anon_sym_Class = 86,
  anon_sym_String = 87,
  anon_sym_Methodref = 88,
  anon_sym_Fieldref = 89,
  anon_sym_InterfaceMethodref = 90,
  anon_sym_NameAndType = 91,
  anon_sym_Double = 92,
  anon_sym_Float = 93,
  anon_sym_Integer = 94,
  sym_decimal_floating_point_literal = 95,
  aux_sym_class_info_item_simple_token1 = 96,
  anon_sym_Lastmodified = 97,
  sym_md5 = 98,
  anon_sym_MD5checksum = 99,
  anon_sym_Compiledfrom = 100,
  aux_sym_header_info_compile_token1 = 101,
  sym__path_segment = 102,
  anon_sym_SLASH = 103,
  sym__endl = 104,
  anon_sym_Classfile = 105,
  anon_sym_true = 106,
  anon_sym_false = 107,
  sym_source_file = 108,
  sym__source_file_verbose = 109,
  sym__source_file_plain = 110,
  sym_class_def_plain = 111,
  sym_interface_def_plain = 112,
  sym_superclass = 113,
  sym_super_interfaces = 114,
  sym_interface_type_list = 115,
  sym_class_def_plain_body = 116,
  sym_class_def_plain_body_item = 117,
  sym_field_def = 118,
  sym_method_def = 119,
  sym_method_throws = 120,
  sym__method_def_verbose = 121,
  sym_method_def_verbose_sig = 122,
  sym_annotation_default = 123,
  sym_deprecated = 124,
  sym__runtime_index = 125,
  sym_runtime_visible_annotations = 126,
  sym_runtime_visible_annotation = 127,
  sym_runtime_visible_type_annotations = 128,
  sym_runtime_visible_type_annotation = 129,
  sym_runtime_visible_paramter_annotations = 130,
  sym_runtime_visible_parameter_annotation = 131,
  sym_runtime_visible_parameter_annotation_param = 132,
  sym_exceptions = 133,
  sym_static_block_def = 134,
  sym_type_parameters = 135,
  sym_type_parameter = 136,
  sym_type_bound = 137,
  sym_modifiers = 138,
  sym_code_def = 139,
  sym_code_info = 140,
  sym_line_number_table_def = 141,
  sym_numered_line = 142,
  sym_numered_instruction = 143,
  sym_instruction = 144,
  sym_code_info_stat = 145,
  sym_descriptor_def = 146,
  sym_flag_def = 147,
  sym__wrapped_hex_val = 148,
  sym_args = 149,
  sym__type = 150,
  sym__simple_type = 151,
  sym_array_type = 152,
  sym_dimensions = 153,
  sym_vararg = 154,
  sym_scoped_type_identifier = 155,
  sym_generic_type = 156,
  sym_type_arguments = 157,
  sym_wildcard = 158,
  sym__wildcard_bounds = 159,
  sym_extends = 160,
  sym_primitive_type = 161,
  sym_block = 162,
  sym__block_item = 163,
  sym_identifier = 164,
  sym_scoped_identifier = 165,
  sym__name = 166,
  sym__reserved_identifier = 167,
  sym_footer = 168,
  sym_signature = 169,
  sym_source_file_def = 170,
  sym_nested_members = 171,
  sym_inner_classes = 172,
  sym_nest_host = 173,
  sym_footer_annotations = 174,
  sym_footer_runtime_annotation = 175,
  sym_footer_runtime_annotation_element_args = 176,
  sym_footer_runtime_annotation_element_arg = 177,
  sym_runtime_annotation_element_value = 178,
  sym_runtime_annotation_element_value_array = 179,
  sym__runtime_annotation_element_value_simple = 180,
  sym_runtime_annotation_element_value_tag = 181,
  sym_runtime_annotation_args = 182,
  sym_constant_pool_def = 183,
  sym__hash_number = 184,
  sym_constant_pool_item = 185,
  sym_ref_const_pool_item = 186,
  sym__constant_pool_item_type = 187,
  sym__constant_pool_item_type_utf8 = 188,
  sym__constant_pool_item_type_class = 189,
  sym__constant_pool_item_type_string = 190,
  sym__constant_pool_item_type_ref = 191,
  sym__constant_pool_item_type_name_and_type = 192,
  sym__constant_pool_item_type_double = 193,
  sym__constant_pool_item_type_int = 194,
  sym_class_keyword = 195,
  sym_class_info_def = 196,
  sym_class_info_item = 197,
  sym_class_info_item_simple = 198,
  sym_header_info_last_mod = 199,
  sym_header_info_md5 = 200,
  sym_header_info_compile = 201,
  sym_file_path = 202,
  sym__rest_of_the_line = 203,
  sym_header_info = 204,
  sym_header = 205,
  sym_boolean_literal = 206,
  aux_sym__source_file_verbose_repeat1 = 207,
  aux_sym_interface_type_list_repeat1 = 208,
  aux_sym_class_def_plain_body_repeat1 = 209,
  aux_sym_runtime_visible_annotations_repeat1 = 210,
  aux_sym_runtime_visible_type_annotations_repeat1 = 211,
  aux_sym_runtime_visible_type_annotation_repeat1 = 212,
  aux_sym_runtime_visible_paramter_annotations_repeat1 = 213,
  aux_sym_type_parameters_repeat1 = 214,
  aux_sym_type_bound_repeat1 = 215,
  aux_sym_modifiers_repeat1 = 216,
  aux_sym_code_info_repeat1 = 217,
  aux_sym_code_info_repeat2 = 218,
  aux_sym_line_number_table_def_repeat1 = 219,
  aux_sym_flag_def_repeat1 = 220,
  aux_sym_args_repeat1 = 221,
  aux_sym_dimensions_repeat1 = 222,
  aux_sym_type_arguments_repeat1 = 223,
  aux_sym_block_repeat1 = 224,
  aux_sym_nested_members_repeat1 = 225,
  aux_sym_inner_classes_repeat1 = 226,
  aux_sym_footer_annotations_repeat1 = 227,
  aux_sym_footer_runtime_annotation_element_args_repeat1 = 228,
  aux_sym_runtime_annotation_element_value_array_repeat1 = 229,
  aux_sym_constant_pool_def_repeat1 = 230,
  aux_sym_class_info_def_repeat1 = 231,
  aux_sym_class_info_item_simple_repeat1 = 232,
  aux_sym_file_path_repeat1 = 233,
  alias_sym_target_kind = 234,
  alias_sym_type_identifier = 235,
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
  [anon_sym_Signature_COLON] = "Signature:",
  [anon_sym_AnnotationDefault_COLON] = "AnnotationDefault:",
  [anon_sym_default_value_COLON] = "default_value:",
  [aux_sym_annotation_default_token1] = "annotation_default_token1",
  [anon_sym_Deprecated_COLON] = "Deprecated:",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_RuntimeVisibleAnnotations_COLON] = "RuntimeVisibleAnnotations:",
  [anon_sym_RuntimeVisibleTypeAnnotations_COLON] = "RuntimeVisibleTypeAnnotations:",
  [anon_sym_COLON2] = ":",
  [aux_sym_runtime_visible_type_annotation_token1] = "runtime_visible_type_annotation_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_RuntimeVisibleParameterAnnotations_COLON] = "RuntimeVisibleParameterAnnotations:",
  [anon_sym_parameter] = "parameter",
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
  [anon_sym_SourceFile_COLON_DQUOTE] = "SourceFile: \"",
  [aux_sym_source_file_def_token1] = "source_file_def_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_NestMembers_COLON] = "NestMembers:",
  [anon_sym_InnerClasses_COLON] = "InnerClasses:",
  [anon_sym_EQ2] = "=",
  [anon_sym_of] = "of",
  [anon_sym_NestHost_COLON] = "NestHost:",
  [anon_sym_class] = "class",
  [anon_sym_e] = "e",
  [anon_sym_s] = "s",
  [anon_sym_c] = "c",
  [anon_sym_AT] = "@",
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
  [sym_method_def_verbose_sig] = "method_def_verbose_sig",
  [sym_annotation_default] = "annotation_default",
  [sym_deprecated] = "deprecated",
  [sym__runtime_index] = "_runtime_index",
  [sym_runtime_visible_annotations] = "runtime_visible_annotations",
  [sym_runtime_visible_annotation] = "runtime_visible_annotation",
  [sym_runtime_visible_type_annotations] = "runtime_visible_type_annotations",
  [sym_runtime_visible_type_annotation] = "runtime_visible_type_annotation",
  [sym_runtime_visible_paramter_annotations] = "runtime_visible_paramter_annotations",
  [sym_runtime_visible_parameter_annotation] = "runtime_visible_parameter_annotation",
  [sym_runtime_visible_parameter_annotation_param] = "runtime_visible_parameter_annotation_param",
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
  [sym_footer_runtime_annotation_element_args] = "footer_runtime_annotation_element_args",
  [sym_footer_runtime_annotation_element_arg] = "footer_runtime_annotation_element_arg",
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
  [aux_sym_runtime_visible_type_annotations_repeat1] = "runtime_visible_type_annotations_repeat1",
  [aux_sym_runtime_visible_type_annotation_repeat1] = "runtime_visible_type_annotation_repeat1",
  [aux_sym_runtime_visible_paramter_annotations_repeat1] = "runtime_visible_paramter_annotations_repeat1",
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
  [aux_sym_footer_runtime_annotation_element_args_repeat1] = "footer_runtime_annotation_element_args_repeat1",
  [aux_sym_runtime_annotation_element_value_array_repeat1] = "runtime_annotation_element_value_array_repeat1",
  [aux_sym_constant_pool_def_repeat1] = "constant_pool_def_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_file_path_repeat1] = "file_path_repeat1",
  [alias_sym_target_kind] = "target_kind",
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
  [anon_sym_Signature_COLON] = anon_sym_Signature_COLON,
  [anon_sym_AnnotationDefault_COLON] = anon_sym_AnnotationDefault_COLON,
  [anon_sym_default_value_COLON] = anon_sym_default_value_COLON,
  [aux_sym_annotation_default_token1] = aux_sym_annotation_default_token1,
  [anon_sym_Deprecated_COLON] = anon_sym_Deprecated_COLON,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_RuntimeVisibleAnnotations_COLON] = anon_sym_RuntimeVisibleAnnotations_COLON,
  [anon_sym_RuntimeVisibleTypeAnnotations_COLON] = anon_sym_RuntimeVisibleTypeAnnotations_COLON,
  [anon_sym_COLON2] = anon_sym_COLON,
  [aux_sym_runtime_visible_type_annotation_token1] = aux_sym_runtime_visible_type_annotation_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RuntimeVisibleParameterAnnotations_COLON] = anon_sym_RuntimeVisibleParameterAnnotations_COLON,
  [anon_sym_parameter] = anon_sym_parameter,
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
  [anon_sym_SourceFile_COLON_DQUOTE] = anon_sym_SourceFile_COLON_DQUOTE,
  [aux_sym_source_file_def_token1] = aux_sym_source_file_def_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_NestMembers_COLON] = anon_sym_NestMembers_COLON,
  [anon_sym_InnerClasses_COLON] = anon_sym_InnerClasses_COLON,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_NestHost_COLON] = anon_sym_NestHost_COLON,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_AT] = anon_sym_AT,
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
  [sym_method_def_verbose_sig] = sym_method_def_verbose_sig,
  [sym_annotation_default] = sym_annotation_default,
  [sym_deprecated] = sym_deprecated,
  [sym__runtime_index] = sym__runtime_index,
  [sym_runtime_visible_annotations] = sym_runtime_visible_annotations,
  [sym_runtime_visible_annotation] = sym_runtime_visible_annotation,
  [sym_runtime_visible_type_annotations] = sym_runtime_visible_type_annotations,
  [sym_runtime_visible_type_annotation] = sym_runtime_visible_type_annotation,
  [sym_runtime_visible_paramter_annotations] = sym_runtime_visible_paramter_annotations,
  [sym_runtime_visible_parameter_annotation] = sym_runtime_visible_parameter_annotation,
  [sym_runtime_visible_parameter_annotation_param] = sym_runtime_visible_parameter_annotation_param,
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
  [sym_footer_runtime_annotation_element_args] = sym_footer_runtime_annotation_element_args,
  [sym_footer_runtime_annotation_element_arg] = sym_footer_runtime_annotation_element_arg,
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
  [aux_sym_runtime_visible_type_annotations_repeat1] = aux_sym_runtime_visible_type_annotations_repeat1,
  [aux_sym_runtime_visible_type_annotation_repeat1] = aux_sym_runtime_visible_type_annotation_repeat1,
  [aux_sym_runtime_visible_paramter_annotations_repeat1] = aux_sym_runtime_visible_paramter_annotations_repeat1,
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
  [aux_sym_footer_runtime_annotation_element_args_repeat1] = aux_sym_footer_runtime_annotation_element_args_repeat1,
  [aux_sym_runtime_annotation_element_value_array_repeat1] = aux_sym_runtime_annotation_element_value_array_repeat1,
  [aux_sym_constant_pool_def_repeat1] = aux_sym_constant_pool_def_repeat1,
  [aux_sym_class_info_def_repeat1] = aux_sym_class_info_def_repeat1,
  [aux_sym_class_info_item_simple_repeat1] = aux_sym_class_info_item_simple_repeat1,
  [aux_sym_file_path_repeat1] = aux_sym_file_path_repeat1,
  [alias_sym_target_kind] = alias_sym_target_kind,
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
  [anon_sym_Signature_COLON] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RuntimeVisibleAnnotations_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RuntimeVisibleTypeAnnotations_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_runtime_visible_type_annotation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RuntimeVisibleParameterAnnotations_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
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
  [anon_sym_EQ2] = {
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
  [sym_method_def_verbose_sig] = {
    .visible = true,
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
  [sym__runtime_index] = {
    .visible = false,
    .named = true,
  },
  [sym_runtime_visible_annotations] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_visible_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_visible_type_annotations] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_visible_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_visible_paramter_annotations] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_visible_parameter_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_visible_parameter_annotation_param] = {
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
  [sym_footer_runtime_annotation_element_args] = {
    .visible = true,
    .named = true,
  },
  [sym_footer_runtime_annotation_element_arg] = {
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
  [aux_sym_runtime_visible_type_annotations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_runtime_visible_type_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_runtime_visible_paramter_annotations_repeat1] = {
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
  [aux_sym_footer_runtime_annotation_element_args_repeat1] = {
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
  [alias_sym_target_kind] = {
    .visible = true,
    .named = true,
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
    [2] = sym_decimal_floating_point_literal,
  },
  [19] = {
    [5] = sym_decimal_floating_point_literal,
  },
  [20] = {
    [1] = alias_sym_target_kind,
  },
  [21] = {
    [2] = alias_sym_target_kind,
    [4] = sym_decimal_floating_point_literal,
  },
  [22] = {
    [2] = alias_sym_target_kind,
    [5] = sym_decimal_floating_point_literal,
  },
  [23] = {
    [6] = sym_decimal_floating_point_literal,
  },
  [24] = {
    [3] = sym_decimal_floating_point_literal,
  },
  [25] = {
    [7] = sym_decimal_floating_point_literal,
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
  [104] = 103,
  [105] = 103,
  [106] = 106,
  [107] = 86,
  [108] = 108,
  [109] = 87,
  [110] = 110,
  [111] = 111,
  [112] = 28,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 114,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 121,
  [126] = 126,
  [127] = 124,
  [128] = 122,
  [129] = 122,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 20,
  [134] = 12,
  [135] = 15,
  [136] = 136,
  [137] = 24,
  [138] = 23,
  [139] = 139,
  [140] = 41,
  [141] = 35,
  [142] = 30,
  [143] = 43,
  [144] = 33,
  [145] = 37,
  [146] = 36,
  [147] = 38,
  [148] = 148,
  [149] = 47,
  [150] = 28,
  [151] = 151,
  [152] = 20,
  [153] = 48,
  [154] = 154,
  [155] = 155,
  [156] = 15,
  [157] = 45,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 23,
  [167] = 24,
  [168] = 168,
  [169] = 169,
  [170] = 43,
  [171] = 171,
  [172] = 172,
  [173] = 33,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 37,
  [178] = 178,
  [179] = 35,
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
  [191] = 30,
  [192] = 192,
  [193] = 193,
  [194] = 41,
  [195] = 195,
  [196] = 196,
  [197] = 38,
  [198] = 198,
  [199] = 36,
  [200] = 40,
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
  [212] = 25,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 164,
  [222] = 222,
  [223] = 47,
  [224] = 224,
  [225] = 225,
  [226] = 224,
  [227] = 48,
  [228] = 40,
  [229] = 45,
  [230] = 224,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 175,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 14,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 18,
  [255] = 56,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 22,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 27,
  [269] = 56,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 213,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 26,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 29,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 28,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 303,
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
  [316] = 31,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 253,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 310,
  [332] = 57,
  [333] = 310,
  [334] = 334,
  [335] = 308,
  [336] = 308,
  [337] = 337,
  [338] = 338,
  [339] = 314,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 306,
  [346] = 249,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 251,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
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
  [372] = 369,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 367,
  [388] = 388,
  [389] = 389,
  [390] = 371,
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
  [413] = 367,
  [414] = 414,
  [415] = 371,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 384,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 378,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
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
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 12,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 483,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 488,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 526,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 536,
  [557] = 557,
  [558] = 558,
  [559] = 524,
  [560] = 488,
  [561] = 549,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 549,
  [566] = 566,
  [567] = 503,
  [568] = 568,
  [569] = 569,
  [570] = 553,
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
      if (eof) ADVANCE(284);
      if (lookahead == '"') ADVANCE(694);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '&') ADVANCE(330);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(475);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == '>') ADVANCE(329);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '@') ADVANCE(699);
      if (lookahead == 'A') ADVANCE(308);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'D') ADVANCE(302);
      if (lookahead == 'E') ADVANCE(312);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(301);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'N') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == 'S') ADVANCE(305);
      if (lookahead == '[') ADVANCE(471);
      if (lookahead == ']') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(303);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(688);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(691);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(228);
      if (lookahead == 'R') ADVANCE(682);
      if (lookahead == 'S') ADVANCE(563);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(688);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(228);
      if (lookahead == 'R') ADVANCE(682);
      if (lookahead == 'S') ADVANCE(563);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(688);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(335);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '=') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(335);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(697);
      if (lookahead == 'C') ADVANCE(76);
      if (lookahead == '[') ADVANCE(471);
      if (lookahead == ']') ADVANCE(472);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(318);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '>') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(688);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(473);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(712);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(232);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(701);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(700);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(340);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(698);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(296);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(337);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(695);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(696);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(702);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(702);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(332);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(319);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(298);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '=') ADVANCE(336);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(336);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(414);
      if (lookahead == 'C') ADVANCE(425);
      if (lookahead == 'D') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(464);
      if (lookahead == 'R') ADVANCE(462);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(688);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(166);
      END_STATE();
    case 65:
      if (lookahead == 'C') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 66:
      if (lookahead == 'C') ADVANCE(143);
      END_STATE();
    case 67:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 68:
      if (lookahead == 'F') ADVANCE(139);
      END_STATE();
    case 69:
      if (lookahead == 'H') ADVANCE(179);
      if (lookahead == 'M') ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(225);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'V') ADVANCE(137);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 94:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(714);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(193);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(716);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(717);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 227:
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 228:
      if (lookahead == 'x') ADVANCE(274);
      END_STATE();
    case 229:
      if (lookahead == 'x') ADVANCE(216);
      END_STATE();
    case 230:
      if (lookahead == '}') ADVANCE(327);
      END_STATE();
    case 231:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 232:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(233)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(234)
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(719);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(240)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(715);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 276:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 277:
      if (eof) ADVANCE(284);
      if (lookahead == '"') ADVANCE(694);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '&') ADVANCE(330);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(697);
      if (lookahead == '>') ADVANCE(329);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '@') ADVANCE(699);
      if (lookahead == 'A') ADVANCE(308);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'D') ADVANCE(302);
      if (lookahead == 'E') ADVANCE(312);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(301);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'N') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == 'S') ADVANCE(305);
      if (lookahead == '[') ADVANCE(471);
      if (lookahead == ']') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(303);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(688);
      END_STATE();
    case 278:
      if (eof) ADVANCE(284);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == 'C') ADVANCE(610);
      if (lookahead == 'I') ADVANCE(593);
      if (lookahead == 'N') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(688);
      END_STATE();
    case 279:
      if (eof) ADVANCE(284);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'C') ADVANCE(610);
      if (lookahead == 'I') ADVANCE(593);
      if (lookahead == 'N') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(688);
      END_STATE();
    case 280:
      if (eof) ADVANCE(284);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '&') ADVANCE(330);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(475);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == '>') ADVANCE(329);
      if (lookahead == 'C') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(160);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'M') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == 'R') ADVANCE(222);
      if (lookahead == 'S') ADVANCE(130);
      if (lookahead == '[') ADVANCE(471);
      if (lookahead == ']') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(281)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      END_STATE();
    case 281:
      if (eof) ADVANCE(284);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '&') ADVANCE(330);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '>') ADVANCE(329);
      if (lookahead == 'C') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(160);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'M') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == 'R') ADVANCE(222);
      if (lookahead == 'S') ADVANCE(130);
      if (lookahead == '[') ADVANCE(471);
      if (lookahead == ']') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(281)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      END_STATE();
    case 282:
      if (eof) ADVANCE(284);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(697);
      if (lookahead == '>') ADVANCE(329);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '@') ADVANCE(699);
      if (lookahead == 'A') ADVANCE(589);
      if (lookahead == 'C') ADVANCE(611);
      if (lookahead == 'D') ADVANCE(534);
      if (lookahead == 'E') ADVANCE(685);
      if (lookahead == 'I') ADVANCE(593);
      if (lookahead == 'N') ADVANCE(558);
      if (lookahead == 'R') ADVANCE(682);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == '[') ADVANCE(471);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(688);
      END_STATE();
    case 283:
      if (eof) ADVANCE(284);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(697);
      if (lookahead == '>') ADVANCE(329);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '@') ADVANCE(699);
      if (lookahead == 'A') ADVANCE(589);
      if (lookahead == 'C') ADVANCE(611);
      if (lookahead == 'D') ADVANCE(534);
      if (lookahead == 'E') ADVANCE(685);
      if (lookahead == 'I') ADVANCE(593);
      if (lookahead == 'N') ADVANCE(558);
      if (lookahead == 'R') ADVANCE(682);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == '[') ADVANCE(471);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(688);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_extends);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_implements);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_implements);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Signature_COLON);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_AnnotationDefault_COLON);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_default_value_COLON);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'D') ADVANCE(481);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'i') ADVANCE(597);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(623);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(641);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(644);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(680);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'l') ADVANCE(508);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'm') ADVANCE(624);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'n') ADVANCE(590);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'n') ADVANCE(595);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'o') ADVANCE(529);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'u') ADVANCE(596);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'x') ADVANCE(525);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'x') ADVANCE(666);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_Deprecated_COLON);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_RuntimeVisibleAnnotations_COLON);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_RuntimeVisibleTypeAnnotations_COLON);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_runtime_visible_type_annotation_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_RuntimeVisibleParameterAnnotations_COLON);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_Exceptions_COLON);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'g') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(713);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'A') ADVANCE(422);
      if (lookahead == 'P') ADVANCE(369);
      if (lookahead == 'T') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'A') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'A') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'D') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'V') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'f') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'g') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'm') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'm') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'x') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'y') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(688);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(95);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(151);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(124);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(181);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '5') ADVANCE(477);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(331);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(340);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(698);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(296);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(316);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(326);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(6);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(337);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(695);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(696);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(332);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(297);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(319);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(320);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(325);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(607);
      if (lookahead == 'P') ADVANCE(514);
      if (lookahead == 'T') ADVANCE(687);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(688);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(608);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(688);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(609);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(688);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(576);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(539);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(568);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(617);
      if (lookahead == 'M') ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(617);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(681);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(510);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(569);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(561);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(683);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(524);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(647);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(600);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(670);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(634);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(669);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(672);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(587);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(675);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(676);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(677);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(688);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(549);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(580);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(550);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(582);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(546);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(515);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(631);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(537);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == 'm') ADVANCE(625);
      if (lookahead == 'n') ADVANCE(645);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(535);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(479);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(639);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(486);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(623);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(482);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(505);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(502);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(507);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(560);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(497);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(498);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(531);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(526);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(629);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(533);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(626);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(485);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(591);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(630);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(637);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(488);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(638);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(492);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(586);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(599);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(674);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(651);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(652);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(588);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(509);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(643);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(594);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(680);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(562);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(585);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(522);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(613);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(581);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(648);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(578);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(614);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(627);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(616);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(619);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(620);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(511);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(554);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(542);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(668);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(540);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(551);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(553);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(521);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(625);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(538);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(556);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(523);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(590);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(612);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(532);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(501);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(595);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(513);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(544);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(660);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(536);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(646);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(667);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(664);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(653);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(655);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(656);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(618);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(621);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(622);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(604);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(605);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(606);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(584);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(530);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(671);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(598);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(592);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(633);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(601);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(649);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(673);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(602);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(603);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(678);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(679);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(632);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(577);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(570);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(665);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(663);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(541);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(500);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(506);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(572);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(543);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(489);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(517);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(528);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(547);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(650);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(499);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(287);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(290);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(527);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(659);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(483);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(657);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(661);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(487);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(654);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(566);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(662);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(490);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(491);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(658);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(494);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(557);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(495);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(496);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(503);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(504);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(478);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(565);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(512);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(484);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(615);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(480);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(567);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(548);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(640);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(493);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(545);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(684);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(516);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(571);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(518);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(552);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(573);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(574);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(575);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(519);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(520);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(635);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(583);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(596);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(579);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(636);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(525);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(666);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(628);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(693);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_NestMembers_COLON);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_InnerClasses_COLON);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_NestHost_COLON);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(725);
      if (lookahead != 0) ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(701);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(703);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      if (lookahead != 0) ADVANCE(708);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(708);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(705);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(705);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      if (lookahead != 0) ADVANCE(708);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(708);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      if (lookahead != 0) ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(719);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      if (lookahead != 0) ADVANCE(708);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(708);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(335);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(725);
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
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == '8') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 81:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 114:
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 124:
      if (lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_super);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 178:
      if (lookahead == 'f') ADVANCE(195);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(203);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 'f') ADVANCE(214);
      END_STATE();
    case 203:
      if (lookahead == 'y') ADVANCE(215);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    case 213:
      if (lookahead == 'M') ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_interface_keyword);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 219:
      if (lookahead == 'z') ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 227:
      if (lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_InterfaceMethodref);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 278},
  [2] = {.lex_state = 282},
  [3] = {.lex_state = 282},
  [4] = {.lex_state = 282},
  [5] = {.lex_state = 282},
  [6] = {.lex_state = 282},
  [7] = {.lex_state = 282},
  [8] = {.lex_state = 282},
  [9] = {.lex_state = 282},
  [10] = {.lex_state = 282},
  [11] = {.lex_state = 282},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 282},
  [14] = {.lex_state = 282},
  [15] = {.lex_state = 282},
  [16] = {.lex_state = 282},
  [17] = {.lex_state = 282},
  [18] = {.lex_state = 282},
  [19] = {.lex_state = 282},
  [20] = {.lex_state = 282},
  [21] = {.lex_state = 282},
  [22] = {.lex_state = 282},
  [23] = {.lex_state = 282},
  [24] = {.lex_state = 282},
  [25] = {.lex_state = 282},
  [26] = {.lex_state = 63},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 282},
  [29] = {.lex_state = 282},
  [30] = {.lex_state = 282},
  [31] = {.lex_state = 282},
  [32] = {.lex_state = 282},
  [33] = {.lex_state = 282},
  [34] = {.lex_state = 282},
  [35] = {.lex_state = 282},
  [36] = {.lex_state = 282},
  [37] = {.lex_state = 282},
  [38] = {.lex_state = 282},
  [39] = {.lex_state = 282},
  [40] = {.lex_state = 282},
  [41] = {.lex_state = 282},
  [42] = {.lex_state = 282},
  [43] = {.lex_state = 282},
  [44] = {.lex_state = 282},
  [45] = {.lex_state = 282},
  [46] = {.lex_state = 282},
  [47] = {.lex_state = 282},
  [48] = {.lex_state = 282},
  [49] = {.lex_state = 282},
  [50] = {.lex_state = 282},
  [51] = {.lex_state = 282},
  [52] = {.lex_state = 282},
  [53] = {.lex_state = 282},
  [54] = {.lex_state = 282},
  [55] = {.lex_state = 282},
  [56] = {.lex_state = 282},
  [57] = {.lex_state = 282},
  [58] = {.lex_state = 282},
  [59] = {.lex_state = 282},
  [60] = {.lex_state = 282},
  [61] = {.lex_state = 282},
  [62] = {.lex_state = 282},
  [63] = {.lex_state = 282},
  [64] = {.lex_state = 282},
  [65] = {.lex_state = 282},
  [66] = {.lex_state = 282},
  [67] = {.lex_state = 282},
  [68] = {.lex_state = 282},
  [69] = {.lex_state = 282},
  [70] = {.lex_state = 282},
  [71] = {.lex_state = 282},
  [72] = {.lex_state = 282},
  [73] = {.lex_state = 282},
  [74] = {.lex_state = 282},
  [75] = {.lex_state = 282},
  [76] = {.lex_state = 282},
  [77] = {.lex_state = 282},
  [78] = {.lex_state = 282},
  [79] = {.lex_state = 282},
  [80] = {.lex_state = 282},
  [81] = {.lex_state = 282},
  [82] = {.lex_state = 282},
  [83] = {.lex_state = 282},
  [84] = {.lex_state = 282},
  [85] = {.lex_state = 282},
  [86] = {.lex_state = 282},
  [87] = {.lex_state = 282},
  [88] = {.lex_state = 282},
  [89] = {.lex_state = 282},
  [90] = {.lex_state = 282},
  [91] = {.lex_state = 282},
  [92] = {.lex_state = 282},
  [93] = {.lex_state = 282},
  [94] = {.lex_state = 282},
  [95] = {.lex_state = 282},
  [96] = {.lex_state = 282},
  [97] = {.lex_state = 282},
  [98] = {.lex_state = 282},
  [99] = {.lex_state = 282},
  [100] = {.lex_state = 282},
  [101] = {.lex_state = 282},
  [102] = {.lex_state = 282},
  [103] = {.lex_state = 282},
  [104] = {.lex_state = 282},
  [105] = {.lex_state = 282},
  [106] = {.lex_state = 282},
  [107] = {.lex_state = 282},
  [108] = {.lex_state = 282},
  [109] = {.lex_state = 282},
  [110] = {.lex_state = 282},
  [111] = {.lex_state = 282},
  [112] = {.lex_state = 280},
  [113] = {.lex_state = 282},
  [114] = {.lex_state = 282},
  [115] = {.lex_state = 282},
  [116] = {.lex_state = 282},
  [117] = {.lex_state = 282},
  [118] = {.lex_state = 282},
  [119] = {.lex_state = 282},
  [120] = {.lex_state = 282},
  [121] = {.lex_state = 282},
  [122] = {.lex_state = 282},
  [123] = {.lex_state = 282},
  [124] = {.lex_state = 282},
  [125] = {.lex_state = 282},
  [126] = {.lex_state = 282},
  [127] = {.lex_state = 282},
  [128] = {.lex_state = 282},
  [129] = {.lex_state = 282},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 282},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 280},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 280},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 280},
  [138] = {.lex_state = 280},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 280},
  [141] = {.lex_state = 280},
  [142] = {.lex_state = 280},
  [143] = {.lex_state = 280},
  [144] = {.lex_state = 280},
  [145] = {.lex_state = 280},
  [146] = {.lex_state = 280},
  [147] = {.lex_state = 280},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 280},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 282},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 280},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 280},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 280},
  [158] = {.lex_state = 280},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 280},
  [161] = {.lex_state = 280},
  [162] = {.lex_state = 280},
  [163] = {.lex_state = 280},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 280},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 280},
  [169] = {.lex_state = 280},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 280},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 282},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 280},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 280},
  [196] = {.lex_state = 282},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 282},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 282},
  [205] = {.lex_state = 280},
  [206] = {.lex_state = 280},
  [207] = {.lex_state = 280},
  [208] = {.lex_state = 280},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 280},
  [214] = {.lex_state = 280},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 282},
  [217] = {.lex_state = 280},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 282},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 282},
  [223] = {.lex_state = 14},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 16},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 282},
  [232] = {.lex_state = 280},
  [233] = {.lex_state = 280},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 280},
  [236] = {.lex_state = 278},
  [237] = {.lex_state = 278},
  [238] = {.lex_state = 280},
  [239] = {.lex_state = 278},
  [240] = {.lex_state = 703},
  [241] = {.lex_state = 280},
  [242] = {.lex_state = 280},
  [243] = {.lex_state = 278},
  [244] = {.lex_state = 280},
  [245] = {.lex_state = 14},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 280},
  [249] = {.lex_state = 14},
  [250] = {.lex_state = 280},
  [251] = {.lex_state = 14},
  [252] = {.lex_state = 278},
  [253] = {.lex_state = 14},
  [254] = {.lex_state = 14},
  [255] = {.lex_state = 14},
  [256] = {.lex_state = 14},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 14},
  [259] = {.lex_state = 280},
  [260] = {.lex_state = 280},
  [261] = {.lex_state = 280},
  [262] = {.lex_state = 14},
  [263] = {.lex_state = 14},
  [264] = {.lex_state = 12},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 704},
  [267] = {.lex_state = 12},
  [268] = {.lex_state = 65},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 280},
  [271] = {.lex_state = 280},
  [272] = {.lex_state = 280},
  [273] = {.lex_state = 280},
  [274] = {.lex_state = 280},
  [275] = {.lex_state = 704},
  [276] = {.lex_state = 704},
  [277] = {.lex_state = 280},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 704},
  [280] = {.lex_state = 280},
  [281] = {.lex_state = 280},
  [282] = {.lex_state = 65},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 280},
  [285] = {.lex_state = 280},
  [286] = {.lex_state = 280},
  [287] = {.lex_state = 278},
  [288] = {.lex_state = 278},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 14},
  [291] = {.lex_state = 280},
  [292] = {.lex_state = 280},
  [293] = {.lex_state = 280},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 280},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 280},
  [298] = {.lex_state = 282},
  [299] = {.lex_state = 280},
  [300] = {.lex_state = 12},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 12},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 278},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 12},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 278},
  [314] = {.lex_state = 282},
  [315] = {.lex_state = 280},
  [316] = {.lex_state = 280},
  [317] = {.lex_state = 278},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 12},
  [320] = {.lex_state = 12},
  [321] = {.lex_state = 282},
  [322] = {.lex_state = 14},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 282},
  [325] = {.lex_state = 280},
  [326] = {.lex_state = 233},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 278},
  [330] = {.lex_state = 282},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 282},
  [340] = {.lex_state = 704},
  [341] = {.lex_state = 280},
  [342] = {.lex_state = 278},
  [343] = {.lex_state = 282},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 280},
  [347] = {.lex_state = 282},
  [348] = {.lex_state = 282},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 282},
  [353] = {.lex_state = 282},
  [354] = {.lex_state = 278},
  [355] = {.lex_state = 278},
  [356] = {.lex_state = 282},
  [357] = {.lex_state = 282},
  [358] = {.lex_state = 280},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 705},
  [363] = {.lex_state = 278},
  [364] = {.lex_state = 278},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 12},
  [367] = {.lex_state = 282},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 706},
  [371] = {.lex_state = 282},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 282},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 278},
  [377] = {.lex_state = 282},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 233},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 280},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 280},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 282},
  [387] = {.lex_state = 282},
  [388] = {.lex_state = 282},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 282},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 706},
  [393] = {.lex_state = 280},
  [394] = {.lex_state = 282},
  [395] = {.lex_state = 280},
  [396] = {.lex_state = 280},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 282},
  [399] = {.lex_state = 282},
  [400] = {.lex_state = 280},
  [401] = {.lex_state = 282},
  [402] = {.lex_state = 278},
  [403] = {.lex_state = 234},
  [404] = {.lex_state = 704},
  [405] = {.lex_state = 278},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 282},
  [414] = {.lex_state = 282},
  [415] = {.lex_state = 282},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 282},
  [421] = {.lex_state = 282},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 706},
  [425] = {.lex_state = 280},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 706},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 706},
  [431] = {.lex_state = 12},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 12},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 706},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 706},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 282},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 706},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 706},
  [452] = {.lex_state = 282},
  [453] = {.lex_state = 280},
  [454] = {.lex_state = 12},
  [455] = {.lex_state = 278},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 280},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 278},
  [464] = {.lex_state = 278},
  [465] = {.lex_state = 280},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 278},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 278},
  [474] = {.lex_state = 233},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 280},
  [478] = {.lex_state = 12},
  [479] = {.lex_state = 278},
  [480] = {.lex_state = 238},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 280},
  [483] = {.lex_state = 12},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 235},
  [486] = {.lex_state = 278},
  [487] = {.lex_state = 282},
  [488] = {.lex_state = 278},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 706},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 280},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 12},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 12},
  [498] = {.lex_state = 278},
  [499] = {.lex_state = 12},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 10},
  [504] = {.lex_state = 239},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 16},
  [509] = {.lex_state = 280},
  [510] = {.lex_state = 282},
  [511] = {.lex_state = 278},
  [512] = {.lex_state = 278},
  [513] = {.lex_state = 282},
  [514] = {.lex_state = 282},
  [515] = {.lex_state = 236},
  [516] = {.lex_state = 280},
  [517] = {.lex_state = 278},
  [518] = {.lex_state = 12},
  [519] = {.lex_state = 278},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 280},
  [522] = {.lex_state = 278},
  [523] = {.lex_state = 237},
  [524] = {.lex_state = 278},
  [525] = {.lex_state = 12},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 1},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 12},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 278},
  [534] = {.lex_state = 278},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 240},
  [537] = {.lex_state = 282},
  [538] = {.lex_state = 282},
  [539] = {.lex_state = 280},
  [540] = {.lex_state = 280},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 278},
  [547] = {.lex_state = 12},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 282},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 240},
  [557] = {.lex_state = 282},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 278},
  [560] = {.lex_state = 278},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 278},
  [564] = {.lex_state = 282},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 282},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 238},
  [570] = {.lex_state = 282},
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
    [anon_sym_Signature_COLON] = ACTIONS(1),
    [anon_sym_AnnotationDefault_COLON] = ACTIONS(1),
    [aux_sym_annotation_default_token1] = ACTIONS(1),
    [anon_sym_Deprecated_COLON] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RuntimeVisibleAnnotations_COLON] = ACTIONS(1),
    [anon_sym_RuntimeVisibleTypeAnnotations_COLON] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RuntimeVisibleParameterAnnotations_COLON] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
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
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_NestMembers_COLON] = ACTIONS(1),
    [anon_sym_InnerClasses_COLON] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_NestHost_COLON] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
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
    [sym_source_file] = STATE(555),
    [sym__source_file_verbose] = STATE(550),
    [sym__source_file_plain] = STATE(550),
    [sym_header_info_compile] = STATE(100),
    [sym_header_info] = STATE(383),
    [sym_header] = STATE(102),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(13), 1,
      anon_sym_AnnotationDefault_COLON,
    ACTIONS(15), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(25), 1,
      anon_sym_Code_COLON,
    STATE(7), 1,
      sym_code_def,
    STATE(10), 1,
      sym_annotation_default,
    STATE(13), 1,
      sym_deprecated,
    STATE(34), 1,
      sym_exceptions,
    STATE(58), 1,
      sym_method_def_verbose_sig,
    STATE(66), 1,
      sym_runtime_visible_annotations,
    STATE(84), 1,
      sym_runtime_visible_type_annotations,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(7), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [73] = 12,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(35), 1,
      sym_generic_type,
    STATE(87), 1,
      aux_sym_modifiers_repeat1,
    STATE(115), 1,
      sym_modifiers,
    STATE(8), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(470), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(196), 4,
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
    ACTIONS(31), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [132] = 12,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(35), 1,
      sym_generic_type,
    STATE(87), 1,
      aux_sym_modifiers_repeat1,
    STATE(115), 1,
      sym_modifiers,
    STATE(4), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(558), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(196), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(43), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
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
  [191] = 12,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(35), 1,
      sym_generic_type,
    STATE(87), 1,
      aux_sym_modifiers_repeat1,
    STATE(115), 1,
      sym_modifiers,
    STATE(6), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(558), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(196), 4,
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
    ACTIONS(31), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [250] = 12,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(35), 1,
      sym_generic_type,
    STATE(87), 1,
      aux_sym_modifiers_repeat1,
    STATE(115), 1,
      sym_modifiers,
    STATE(4), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(558), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(196), 4,
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
    ACTIONS(31), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [309] = 16,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(13), 1,
      anon_sym_AnnotationDefault_COLON,
    ACTIONS(15), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_annotation_default,
    STATE(16), 1,
      sym_deprecated,
    STATE(44), 1,
      sym_exceptions,
    STATE(49), 1,
      sym_method_def_verbose_sig,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(93), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(50), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [376] = 12,
    ACTIONS(54), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(35), 1,
      sym_generic_type,
    STATE(87), 1,
      aux_sym_modifiers_repeat1,
    STATE(115), 1,
      sym_modifiers,
    STATE(8), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(470), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(196), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(62), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(59), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [435] = 12,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(35), 1,
      sym_generic_type,
    STATE(87), 1,
      aux_sym_modifiers_repeat1,
    STATE(115), 1,
      sym_modifiers,
    STATE(3), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(470), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(196), 4,
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
    ACTIONS(31), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [494] = 14,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(15), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_deprecated,
    STATE(44), 1,
      sym_exceptions,
    STATE(49), 1,
      sym_method_def_verbose_sig,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(93), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(50), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [555] = 14,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(15), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_deprecated,
    STATE(32), 1,
      sym_exceptions,
    STATE(55), 1,
      sym_method_def_verbose_sig,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
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
  [616] = 2,
    ACTIONS(73), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
    ACTIONS(71), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
      anon_sym_of,
  [652] = 12,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_exceptions,
    STATE(49), 1,
      sym_method_def_verbose_sig,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(93), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(50), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [707] = 4,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(79), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [746] = 5,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_DOT,
    STATE(38), 1,
      sym_type_arguments,
    ACTIONS(83), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [787] = 12,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_exceptions,
    STATE(55), 1,
      sym_method_def_verbose_sig,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
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
  [842] = 4,
    ACTIONS(93), 1,
      anon_sym_line,
    STATE(17), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(91), 8,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(89), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [881] = 4,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(98), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [920] = 4,
    ACTIONS(104), 1,
      anon_sym_line,
    STATE(17), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(102), 8,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [959] = 5,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(41), 1,
      sym_type_arguments,
    ACTIONS(108), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [1000] = 12,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_exceptions,
    STATE(54), 1,
      sym_method_def_verbose_sig,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(77), 1,
      sym_runtime_visible_type_annotations,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
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
  [1055] = 4,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(121), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(116), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1094] = 2,
    ACTIONS(125), 10,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
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
  [1128] = 2,
    ACTIONS(129), 10,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [1162] = 7,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(57), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(135), 5,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(131), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1206] = 3,
    ACTIONS(143), 1,
      sym_flag_value,
    ACTIONS(141), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [1242] = 2,
    ACTIONS(147), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(145), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    ACTIONS(151), 10,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [1310] = 2,
    ACTIONS(121), 10,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(116), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1344] = 2,
    ACTIONS(155), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(153), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1377] = 2,
    ACTIONS(159), 8,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      sym_number,
    ACTIONS(157), 20,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1410] = 10,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_method_def_verbose_sig,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(77), 1,
      sym_runtime_visible_type_annotations,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
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
  [1459] = 2,
    ACTIONS(163), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(161), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1492] = 10,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_method_def_verbose_sig,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(93), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(50), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1541] = 3,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(83), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [1576] = 4,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(167), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
    ACTIONS(165), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1613] = 2,
    ACTIONS(171), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(169), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1646] = 2,
    ACTIONS(175), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [1679] = 10,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_method_def_verbose_sig,
    STATE(67), 1,
      sym_runtime_visible_annotations,
    STATE(83), 1,
      sym_runtime_visible_type_annotations,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(177), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1728] = 5,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    ACTIONS(183), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(181), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1767] = 2,
    ACTIONS(187), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(185), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1800] = 2,
    ACTIONS(191), 8,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(189), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1833] = 4,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(195), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
    ACTIONS(193), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1870] = 10,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_method_def_verbose_sig,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
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
  [1919] = 2,
    ACTIONS(195), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(193), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1951] = 2,
    ACTIONS(202), 8,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(200), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1983] = 2,
    ACTIONS(206), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(204), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2015] = 2,
    ACTIONS(210), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(208), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2047] = 8,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
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
  [2090] = 5,
    ACTIONS(216), 1,
      sym_number,
    STATE(547), 1,
      sym__runtime_index,
    STATE(50), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(214), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(212), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2127] = 2,
    ACTIONS(221), 7,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(219), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2158] = 5,
    ACTIONS(227), 1,
      sym_number,
    STATE(547), 1,
      sym__runtime_index,
    STATE(50), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(225), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(223), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2195] = 8,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_runtime_visible_annotations,
    STATE(80), 1,
      sym_runtime_visible_type_annotations,
    STATE(97), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(229), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2238] = 8,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_runtime_visible_annotations,
    STATE(83), 1,
      sym_runtime_visible_type_annotations,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(177), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2281] = 8,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(77), 1,
      sym_runtime_visible_type_annotations,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
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
  [2324] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(183), 5,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(181), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2359] = 4,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(238), 5,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(236), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2394] = 8,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(93), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(50), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2437] = 5,
    ACTIONS(244), 1,
      sym_number,
    STATE(533), 1,
      sym__runtime_index,
    ACTIONS(242), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(61), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(240), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2473] = 2,
    ACTIONS(248), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(246), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2503] = 5,
    ACTIONS(254), 1,
      sym_number,
    STATE(533), 1,
      sym__runtime_index,
    ACTIONS(252), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(61), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(250), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2539] = 2,
    ACTIONS(259), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(257), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2569] = 2,
    ACTIONS(263), 5,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(261), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2598] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_runtime_visible_type_annotations,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(177), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2635] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_runtime_visible_type_annotations,
    STATE(92), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(265), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2672] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(93), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(50), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2709] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_runtime_visible_type_annotations,
    STATE(97), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(229), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2746] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_runtime_visible_type_annotations,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
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
  [2783] = 3,
    ACTIONS(273), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(269), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2814] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
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
  [2851] = 2,
    ACTIONS(277), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(275), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2879] = 2,
    ACTIONS(281), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      sym_number,
    ACTIONS(279), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2907] = 4,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      anon_sym_parameter,
    STATE(74), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
    ACTIONS(283), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2939] = 4,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 1,
      anon_sym_parameter,
    STATE(74), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
    ACTIONS(289), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [2971] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(296), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3002] = 2,
    ACTIONS(302), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      sym_number,
    ACTIONS(300), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3029] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(177), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3060] = 2,
    ACTIONS(306), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      sym_number,
    ACTIONS(304), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3087] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
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
  [3118] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(265), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3149] = 2,
    ACTIONS(310), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      sym_number,
    ACTIONS(308), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3176] = 2,
    ACTIONS(314), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      sym_number,
    ACTIONS(312), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3203] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(229), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3234] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(50), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3265] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
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
  [3296] = 4,
    ACTIONS(318), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(86), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(316), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(320), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3326] = 4,
    ACTIONS(325), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(86), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(323), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(327), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3356] = 2,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(329), 20,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3382] = 2,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 20,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3408] = 2,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3433] = 2,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3458] = 2,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3483] = 2,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
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
  [3508] = 2,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3533] = 2,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3558] = 2,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3583] = 2,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3608] = 2,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
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
  [3633] = 2,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [3658] = 7,
    ACTIONS(349), 1,
      sym_interface_keyword,
    ACTIONS(353), 1,
      anon_sym_class,
    STATE(109), 1,
      aux_sym_modifiers_repeat1,
    STATE(356), 1,
      sym_modifiers,
    STATE(388), 1,
      sym_class_keyword,
    STATE(535), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(351), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3692] = 8,
    ACTIONS(355), 1,
      anon_sym_Utf8,
    ACTIONS(357), 1,
      anon_sym_Class,
    ACTIONS(359), 1,
      anon_sym_String,
    ACTIONS(363), 1,
      anon_sym_NameAndType,
    ACTIONS(367), 1,
      anon_sym_Integer,
    ACTIONS(365), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(361), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(299), 8,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
      sym__constant_pool_item_type_int,
  [3727] = 7,
    ACTIONS(353), 1,
      anon_sym_class,
    ACTIONS(369), 1,
      sym_interface_keyword,
    STATE(109), 1,
      aux_sym_modifiers_repeat1,
    STATE(343), 1,
      sym_modifiers,
    STATE(394), 1,
      sym_class_keyword,
    STATE(395), 1,
      sym_class_info_def,
    ACTIONS(351), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3760] = 9,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(373), 1,
      anon_sym_GT,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(331), 1,
      sym_wildcard,
    STATE(224), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [3796] = 9,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_GT,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(333), 1,
      sym_wildcard,
    STATE(226), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [3832] = 9,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_GT,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(310), 1,
      sym_wildcard,
    STATE(230), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [3868] = 5,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      aux_sym_inner_classes_repeat1,
    STATE(109), 1,
      aux_sym_modifiers_repeat1,
    STATE(373), 1,
      sym_modifiers,
    ACTIONS(351), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3895] = 3,
    STATE(107), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(318), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(385), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3918] = 5,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      aux_sym_inner_classes_repeat1,
    STATE(109), 1,
      aux_sym_modifiers_repeat1,
    STATE(373), 1,
      sym_modifiers,
    ACTIONS(390), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3945] = 3,
    STATE(107), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(325), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(393), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3968] = 8,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(441), 1,
      sym_wildcard,
    STATE(246), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4001] = 8,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(344), 1,
      sym_vararg,
    STATE(202), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4034] = 2,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(151), 15,
      ts_builtin_sym_end,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_InnerClasses_COLON,
  [4055] = 4,
    STATE(106), 1,
      aux_sym_inner_classes_repeat1,
    STATE(109), 1,
      aux_sym_modifiers_repeat1,
    STATE(373), 1,
      sym_modifiers,
    ACTIONS(351), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4079] = 7,
    ACTIONS(397), 1,
      sym__identifier,
    STATE(152), 1,
      sym_identifier,
    STATE(156), 1,
      sym_scoped_type_identifier,
    STATE(179), 1,
      sym_generic_type,
    STATE(294), 1,
      sym_interface_type_list,
    STATE(164), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(399), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4109] = 7,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(401), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(15), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(35), 1,
      sym_generic_type,
    STATE(198), 4,
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
  [4139] = 7,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(447), 1,
      sym_vararg,
    STATE(219), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4169] = 7,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(294), 1,
      sym_interface_type_list,
    STATE(221), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4199] = 1,
    ACTIONS(403), 14,
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
  [4216] = 1,
    ACTIONS(405), 14,
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
  [4233] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(203), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4260] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(212), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4287] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(228), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4314] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(218), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4341] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(235), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4368] = 6,
    ACTIONS(27), 1,
      sym__identifier,
    STATE(15), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(35), 1,
      sym_generic_type,
    STATE(25), 4,
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
  [4395] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(141), 1,
      sym_generic_type,
    STATE(247), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(377), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4422] = 6,
    ACTIONS(397), 1,
      sym__identifier,
    STATE(152), 1,
      sym_identifier,
    STATE(156), 1,
      sym_scoped_type_identifier,
    STATE(179), 1,
      sym_generic_type,
    STATE(175), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(399), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4449] = 6,
    ACTIONS(397), 1,
      sym__identifier,
    STATE(152), 1,
      sym_identifier,
    STATE(156), 1,
      sym_scoped_type_identifier,
    STATE(179), 1,
      sym_generic_type,
    STATE(200), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(399), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4476] = 6,
    ACTIONS(27), 1,
      sym__identifier,
    STATE(15), 1,
      sym_scoped_type_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(35), 1,
      sym_generic_type,
    STATE(40), 4,
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
  [4503] = 11,
    ACTIONS(407), 1,
      anon_sym_extends,
    ACTIONS(409), 1,
      anon_sym_implements,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(415), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(136), 1,
      sym_type_parameters,
    STATE(159), 1,
      sym_superclass,
    STATE(174), 1,
      sym_super_interfaces,
    STATE(178), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4539] = 1,
    ACTIONS(419), 13,
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
  [4555] = 11,
    ACTIONS(407), 1,
      anon_sym_extends,
    ACTIONS(409), 1,
      anon_sym_implements,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(421), 1,
      anon_sym_Constantpool_COLON,
    STATE(139), 1,
      sym_type_parameters,
    STATE(148), 1,
      sym_superclass,
    STATE(172), 1,
      sym_super_interfaces,
    STATE(193), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4591] = 4,
    ACTIONS(423), 1,
      anon_sym_LT,
    ACTIONS(425), 1,
      anon_sym_DOT,
    STATE(140), 1,
      sym_type_arguments,
    ACTIONS(108), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4612] = 2,
    ACTIONS(71), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(73), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON2,
      anon_sym_flags_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_EQ2,
      sym_comment,
      anon_sym_Constantpool_COLON,
  [4629] = 4,
    ACTIONS(423), 1,
      anon_sym_LT,
    ACTIONS(427), 1,
      anon_sym_DOT,
    STATE(147), 1,
      sym_type_arguments,
    ACTIONS(83), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4650] = 9,
    ACTIONS(407), 1,
      anon_sym_extends,
    ACTIONS(409), 1,
      anon_sym_implements,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(429), 1,
      anon_sym_Constantpool_COLON,
    STATE(154), 1,
      sym_superclass,
    STATE(188), 1,
      sym_super_interfaces,
    STATE(189), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4680] = 2,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(129), 10,
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
  [4696] = 2,
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
  [4712] = 9,
    ACTIONS(407), 1,
      anon_sym_extends,
    ACTIONS(409), 1,
      anon_sym_implements,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(415), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(159), 1,
      sym_superclass,
    STATE(174), 1,
      sym_super_interfaces,
    STATE(178), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4742] = 2,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(187), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4757] = 2,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(83), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4772] = 2,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(155), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4787] = 3,
    ACTIONS(431), 1,
      anon_sym_LBRACK,
    STATE(143), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(195), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [4804] = 2,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4819] = 2,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(171), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4834] = 3,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    STATE(143), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(167), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [4851] = 2,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4866] = 7,
    ACTIONS(409), 1,
      anon_sym_implements,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(436), 1,
      anon_sym_Constantpool_COLON,
    STATE(182), 1,
      sym_super_interfaces,
    STATE(181), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4890] = 1,
    ACTIONS(206), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4902] = 2,
    ACTIONS(149), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(151), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4916] = 5,
    ACTIONS(438), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(417), 1,
      sym_runtime_annotation_element_value,
    STATE(418), 2,
      sym_runtime_annotation_element_value_array,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(440), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [4936] = 5,
    ACTIONS(442), 1,
      anon_sym_LT,
    ACTIONS(444), 1,
      anon_sym_DOT,
    STATE(194), 1,
      sym_type_arguments,
    ACTIONS(106), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(108), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4956] = 1,
    ACTIONS(210), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4968] = 7,
    ACTIONS(409), 1,
      anon_sym_implements,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(446), 1,
      anon_sym_Constantpool_COLON,
    STATE(201), 1,
      sym_super_interfaces,
    STATE(209), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4992] = 9,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(452), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(456), 1,
      anon_sym_NestHost_COLON,
    STATE(206), 1,
      sym_footer_annotations,
    STATE(243), 1,
      sym_nested_members,
    STATE(309), 1,
      sym_nest_host,
    STATE(568), 1,
      sym_inner_classes,
  [5020] = 5,
    ACTIONS(442), 1,
      anon_sym_LT,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(197), 1,
      sym_type_arguments,
    ACTIONS(81), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(83), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5040] = 1,
    ACTIONS(195), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5052] = 9,
    ACTIONS(450), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(452), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(456), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_footer_annotations,
    STATE(236), 1,
      sym_nested_members,
    STATE(355), 1,
      sym_nest_host,
    STATE(545), 1,
      sym_inner_classes,
  [5080] = 7,
    ACTIONS(409), 1,
      anon_sym_implements,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(462), 1,
      anon_sym_Constantpool_COLON,
    STATE(184), 1,
      sym_super_interfaces,
    STATE(185), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5104] = 7,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    ACTIONS(466), 1,
      anon_sym_Signature_COLON,
    ACTIONS(468), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(158), 1,
      sym_source_file_def,
    STATE(425), 1,
      sym_signature,
    STATE(484), 1,
      sym_footer,
    STATE(162), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [5127] = 8,
    ACTIONS(470), 1,
      anon_sym_extends,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LT,
    STATE(233), 1,
      sym_type_parameters,
    STATE(285), 1,
      sym_superclass,
    STATE(416), 1,
      sym_super_interfaces,
    STATE(495), 1,
      sym_class_def_plain_body,
  [5152] = 7,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    ACTIONS(466), 1,
      anon_sym_Signature_COLON,
    ACTIONS(468), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(158), 1,
      sym_source_file_def,
    STATE(425), 1,
      sym_signature,
    STATE(456), 1,
      sym_footer,
    STATE(238), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [5175] = 8,
    ACTIONS(470), 1,
      anon_sym_extends,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LT,
    STATE(232), 1,
      sym_type_parameters,
    STATE(281), 1,
      sym_superclass,
    STATE(408), 1,
      sym_super_interfaces,
    STATE(501), 1,
      sym_class_def_plain_body,
  [5200] = 7,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_LBRACK,
    ACTIONS(484), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(199), 1,
      aux_sym_dimensions_repeat1,
    STATE(227), 1,
      sym_dimensions,
    STATE(251), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(480), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5223] = 8,
    ACTIONS(470), 1,
      anon_sym_extends,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LT,
    STATE(214), 1,
      sym_type_parameters,
    STATE(286), 1,
      sym_superclass,
    STATE(438), 1,
      sym_super_interfaces,
    STATE(467), 1,
      sym_class_def_plain_body,
  [5248] = 2,
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
  [5261] = 2,
    ACTIONS(127), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(129), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5274] = 1,
    ACTIONS(486), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [5285] = 8,
    ACTIONS(470), 1,
      anon_sym_extends,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LT,
    STATE(217), 1,
      sym_type_parameters,
    STATE(297), 1,
      sym_superclass,
    STATE(448), 1,
      sym_super_interfaces,
    STATE(460), 1,
      sym_class_def_plain_body,
  [5310] = 4,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    STATE(170), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(193), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(195), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5326] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(491), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5344] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(493), 1,
      anon_sym_Constantpool_COLON,
    STATE(176), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5362] = 2,
    ACTIONS(161), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(163), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5374] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(495), 1,
      anon_sym_Constantpool_COLON,
    STATE(186), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5392] = 5,
    ACTIONS(482), 1,
      anon_sym_LBRACK,
    STATE(199), 1,
      aux_sym_dimensions_repeat1,
    STATE(227), 1,
      sym_dimensions,
    ACTIONS(497), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(499), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5410] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(501), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5428] = 2,
    ACTIONS(169), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(171), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5440] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(429), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5458] = 3,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(81), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(83), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5472] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(503), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5490] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(505), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5508] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(507), 1,
      anon_sym_Constantpool_COLON,
    STATE(183), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5526] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(509), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5544] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(511), 1,
      anon_sym_Constantpool_COLON,
    STATE(171), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5562] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(513), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5580] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(515), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5598] = 7,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(456), 1,
      anon_sym_NestHost_COLON,
    STATE(243), 1,
      sym_nested_members,
    STATE(309), 1,
      sym_nest_host,
    STATE(568), 1,
      sym_inner_classes,
  [5620] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(517), 1,
      anon_sym_Constantpool_COLON,
    STATE(210), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5638] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(519), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5656] = 1,
    ACTIONS(521), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [5666] = 2,
    ACTIONS(153), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(155), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5678] = 4,
    ACTIONS(525), 1,
      anon_sym_POUND,
    STATE(487), 1,
      sym__hash_number,
    STATE(205), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(523), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5694] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(415), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5712] = 2,
    ACTIONS(185), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(187), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5724] = 3,
    ACTIONS(529), 1,
      sym_number,
    STATE(195), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
    ACTIONS(527), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5738] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      sym__identifier,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(348), 1,
      sym_args,
    STATE(389), 1,
      sym_identifier,
  [5760] = 2,
    ACTIONS(173), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(175), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5772] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      sym__identifier,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(351), 1,
      sym_identifier,
    STATE(353), 1,
      sym_args,
  [5794] = 4,
    ACTIONS(482), 1,
      anon_sym_LBRACK,
    STATE(170), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(165), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(167), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5810] = 5,
    ACTIONS(181), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(482), 1,
      anon_sym_LBRACK,
    STATE(199), 1,
      aux_sym_dimensions_repeat1,
    STATE(227), 1,
      sym_dimensions,
    ACTIONS(183), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5828] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(536), 1,
      anon_sym_Constantpool_COLON,
    STATE(180), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5846] = 7,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    STATE(323), 1,
      aux_sym_args_repeat1,
  [5868] = 6,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    STATE(289), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(544), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5888] = 3,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(548), 2,
      anon_sym_open,
      anon_sym_module,
    STATE(361), 4,
      sym_identifier,
      sym_scoped_identifier,
      sym__name,
      sym__reserved_identifier,
  [5902] = 4,
    ACTIONS(525), 1,
      anon_sym_POUND,
    STATE(487), 1,
      sym__hash_number,
    STATE(207), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(550), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5918] = 7,
    ACTIONS(452), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(456), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    STATE(252), 1,
      sym_nested_members,
    STATE(342), 1,
      sym_nest_host,
    STATE(520), 1,
      sym_inner_classes,
  [5940] = 4,
    ACTIONS(556), 1,
      anon_sym_POUND,
    STATE(487), 1,
      sym__hash_number,
    STATE(207), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(554), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5956] = 3,
    ACTIONS(561), 1,
      sym_number,
    STATE(195), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
    ACTIONS(559), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5970] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(563), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5988] = 5,
    ACTIONS(413), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(565), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6006] = 5,
    ACTIONS(567), 1,
      anon_sym_flags_COLON,
    ACTIONS(570), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(572), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(322), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6024] = 6,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    STATE(332), 1,
      aux_sym_interface_type_list_repeat1,
  [6043] = 2,
    ACTIONS(579), 1,
      anon_sym_DOT,
    ACTIONS(577), 5,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [6054] = 6,
    ACTIONS(470), 1,
      anon_sym_extends,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(284), 1,
      sym_superclass,
    STATE(440), 1,
      sym_super_interfaces,
    STATE(506), 1,
      sym_class_def_plain_body,
  [6073] = 5,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      sym_comment,
    ACTIONS(587), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(262), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(583), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6090] = 3,
    STATE(305), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(328), 1,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(440), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [6103] = 6,
    ACTIONS(470), 1,
      anon_sym_extends,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_superclass,
    STATE(409), 1,
      sym_super_interfaces,
    STATE(491), 1,
      sym_class_def_plain_body,
  [6122] = 4,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    ACTIONS(589), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [6137] = 5,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    ACTIONS(591), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6154] = 3,
    STATE(305), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(434), 1,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(440), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [6167] = 6,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    STATE(350), 1,
      aux_sym_interface_type_list_repeat1,
  [6186] = 3,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(231), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(593), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6199] = 2,
    ACTIONS(204), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(206), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6210] = 6,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_GT,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    STATE(308), 1,
      aux_sym_type_arguments_repeat1,
  [6229] = 5,
    ACTIONS(601), 1,
      anon_sym_extends,
    ACTIONS(605), 1,
      sym_super,
    STATE(126), 1,
      sym_extends,
    STATE(407), 1,
      sym__wildcard_bounds,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6246] = 6,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_GT,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    STATE(336), 1,
      aux_sym_type_arguments_repeat1,
  [6265] = 2,
    ACTIONS(208), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(210), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6276] = 4,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    ACTIONS(183), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [6291] = 2,
    ACTIONS(193), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(195), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6302] = 6,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_GT,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    STATE(335), 1,
      aux_sym_type_arguments_repeat1,
  [6321] = 3,
    ACTIONS(613), 1,
      sym__identifier,
    STATE(231), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(611), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6334] = 6,
    ACTIONS(470), 1,
      anon_sym_extends,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(297), 1,
      sym_superclass,
    STATE(448), 1,
      sym_super_interfaces,
    STATE(460), 1,
      sym_class_def_plain_body,
  [6353] = 6,
    ACTIONS(470), 1,
      anon_sym_extends,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(286), 1,
      sym_superclass,
    STATE(438), 1,
      sym_super_interfaces,
    STATE(467), 1,
      sym_class_def_plain_body,
  [6372] = 3,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(616), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6384] = 4,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    ACTIONS(499), 2,
      anon_sym_implements,
      anon_sym_LBRACE,
  [6398] = 5,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(456), 1,
      anon_sym_NestHost_COLON,
    STATE(309), 1,
      sym_nest_host,
    STATE(568), 1,
      sym_inner_classes,
  [6414] = 4,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      sym_number,
    STATE(364), 1,
      aux_sym_code_info_repeat1,
    STATE(291), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [6428] = 3,
    ACTIONS(626), 1,
      anon_sym_LBRACE,
    ACTIONS(629), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(238), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [6440] = 4,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      sym_number,
    STATE(237), 1,
      aux_sym_code_info_repeat1,
    STATE(270), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [6454] = 5,
    ACTIONS(631), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(633), 1,
      sym__path_segment,
    ACTIONS(635), 1,
      anon_sym_SLASH,
    STATE(539), 1,
      sym__rest_of_the_line,
    STATE(540), 1,
      sym_file_path,
  [6470] = 1,
    ACTIONS(637), 5,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6478] = 1,
    ACTIONS(639), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6486] = 5,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(456), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    STATE(342), 1,
      sym_nest_host,
    STATE(520), 1,
      sym_inner_classes,
  [6502] = 2,
    ACTIONS(643), 1,
      sym_comment,
    ACTIONS(641), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6512] = 4,
    ACTIONS(75), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(79), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6526] = 4,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    ACTIONS(647), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6540] = 4,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(153), 1,
      sym_dimensions,
    ACTIONS(649), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6554] = 4,
    ACTIONS(601), 1,
      anon_sym_extends,
    STATE(120), 1,
      sym_extends,
    STATE(375), 1,
      sym_type_bound,
    ACTIONS(651), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6568] = 2,
    ACTIONS(655), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(653), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [6578] = 1,
    ACTIONS(657), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6586] = 4,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(255), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(659), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6600] = 5,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(456), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(663), 1,
      ts_builtin_sym_end,
    STATE(313), 1,
      sym_nest_host,
    STATE(468), 1,
      sym_inner_classes,
  [6616] = 2,
    ACTIONS(667), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(665), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [6626] = 4,
    ACTIONS(96), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(98), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6640] = 4,
    ACTIONS(181), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(183), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6654] = 4,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(257), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(672), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6668] = 4,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(257), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(679), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6682] = 4,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(256), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(683), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6696] = 2,
    ACTIONS(689), 1,
      sym_comment,
    ACTIONS(687), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6706] = 2,
    ACTIONS(693), 1,
      sym_comment,
    ACTIONS(691), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6716] = 2,
    ACTIONS(697), 1,
      sym_comment,
    ACTIONS(695), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6726] = 4,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(257), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(683), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6740] = 4,
    ACTIONS(116), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(121), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6754] = 4,
    ACTIONS(702), 1,
      anon_sym_POUND,
    ACTIONS(704), 1,
      sym_number,
    ACTIONS(706), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__endl,
  [6767] = 2,
    ACTIONS(712), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(710), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6776] = 4,
    ACTIONS(631), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(714), 1,
      anon_sym_SLASH,
    STATE(275), 1,
      aux_sym_file_path_repeat1,
    STATE(521), 1,
      sym__rest_of_the_line,
  [6789] = 4,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_EQ,
    ACTIONS(720), 1,
      sym__endl,
    STATE(300), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [6802] = 2,
    ACTIONS(145), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(147), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6811] = 3,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(183), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [6822] = 3,
    ACTIONS(624), 1,
      sym_number,
    ACTIONS(725), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(274), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [6833] = 1,
    ACTIONS(727), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6840] = 1,
    ACTIONS(729), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6847] = 1,
    ACTIONS(731), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6854] = 3,
    ACTIONS(733), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(735), 1,
      sym_number,
    STATE(274), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [6865] = 4,
    ACTIONS(631), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(714), 1,
      anon_sym_SLASH,
    STATE(340), 1,
      aux_sym_file_path_repeat1,
    STATE(509), 1,
      sym__rest_of_the_line,
  [6878] = 4,
    ACTIONS(631), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(714), 1,
      anon_sym_SLASH,
    STATE(279), 1,
      aux_sym_file_path_repeat1,
    STATE(509), 1,
      sym__rest_of_the_line,
  [6891] = 4,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(382), 1,
      sym_super_interfaces,
    STATE(551), 1,
      sym_class_def_plain_body,
  [6904] = 2,
    ACTIONS(738), 1,
      anon_sym_DOT,
    ACTIONS(577), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6913] = 4,
    ACTIONS(631), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(714), 1,
      anon_sym_SLASH,
    STATE(340), 1,
      aux_sym_file_path_repeat1,
    STATE(482), 1,
      sym__rest_of_the_line,
  [6926] = 1,
    ACTIONS(740), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6933] = 4,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(439), 1,
      sym_super_interfaces,
    STATE(458), 1,
      sym_class_def_plain_body,
  [6946] = 3,
    ACTIONS(139), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(742), 1,
      sym_flag_value,
    ACTIONS(141), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6957] = 4,
    ACTIONS(525), 1,
      anon_sym_POUND,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(349), 1,
      sym_footer_runtime_annotation_element_arg,
    STATE(510), 1,
      sym__hash_number,
  [6970] = 4,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(385), 1,
      sym_super_interfaces,
    STATE(542), 1,
      sym_class_def_plain_body,
  [6983] = 4,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(433), 1,
      sym_super_interfaces,
    STATE(476), 1,
      sym_class_def_plain_body,
  [6996] = 4,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(429), 1,
      sym_super_interfaces,
    STATE(472), 1,
      sym_class_def_plain_body,
  [7009] = 3,
    ACTIONS(244), 1,
      sym_number,
    STATE(533), 1,
      sym__runtime_index,
    STATE(59), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
  [7020] = 3,
    ACTIONS(227), 1,
      sym_number,
    STATE(547), 1,
      sym__runtime_index,
    STATE(52), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
  [7031] = 3,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(296), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(746), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7042] = 2,
    ACTIONS(116), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(121), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7051] = 3,
    ACTIONS(624), 1,
      sym_number,
    ACTIONS(748), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(274), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7062] = 1,
    ACTIONS(750), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7069] = 1,
    ACTIONS(752), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7076] = 2,
    ACTIONS(756), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(754), 3,
      anon_sym_LBRACE,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7085] = 1,
    ACTIONS(758), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7092] = 3,
    ACTIONS(760), 1,
      anon_sym_AMP,
    STATE(296), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7103] = 4,
    ACTIONS(472), 1,
      anon_sym_implements,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(391), 1,
      sym_super_interfaces,
    STATE(543), 1,
      sym_class_def_plain_body,
  [7116] = 2,
    ACTIONS(149), 1,
      sym__identifier,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7125] = 1,
    ACTIONS(763), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7132] = 3,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(765), 1,
      sym__endl,
    STATE(311), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7142] = 3,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [7152] = 3,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      sym__endl,
    STATE(311), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7162] = 3,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_GT,
    STATE(345), 1,
      aux_sym_type_parameters_repeat1,
  [7172] = 3,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_GT,
    STATE(306), 1,
      aux_sym_type_parameters_repeat1,
  [7182] = 3,
    ACTIONS(525), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym__hash_number,
    STATE(327), 1,
      sym_ref_const_pool_item,
  [7192] = 3,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(780), 1,
      anon_sym_GT,
    STATE(318), 1,
      aux_sym_type_parameters_repeat1,
  [7202] = 3,
    ACTIONS(647), 1,
      anon_sym_GT,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_type_arguments_repeat1,
  [7212] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_GT,
    STATE(307), 1,
      aux_sym_type_arguments_repeat1,
  [7222] = 3,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    STATE(520), 1,
      sym_inner_classes,
  [7232] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_GT,
    STATE(335), 1,
      aux_sym_type_arguments_repeat1,
  [7242] = 3,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      sym__endl,
    STATE(311), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7252] = 3,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_args_repeat1,
  [7262] = 3,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(795), 1,
      ts_builtin_sym_end,
    STATE(493), 1,
      sym_inner_classes,
  [7272] = 3,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(248), 1,
      sym_identifier,
    STATE(304), 1,
      sym_type_parameter,
  [7282] = 3,
    ACTIONS(797), 1,
      anon_sym_descriptor_COLON,
    STATE(96), 1,
      sym__method_def_verbose,
    STATE(396), 1,
      sym_descriptor_def,
  [7292] = 1,
    ACTIONS(159), 3,
      anon_sym_RPAREN,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
  [7298] = 2,
    ACTIONS(561), 1,
      sym_number,
    STATE(208), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
  [7306] = 3,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    ACTIONS(802), 1,
      anon_sym_GT,
    STATE(318), 1,
      aux_sym_type_parameters_repeat1,
  [7316] = 3,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(804), 1,
      sym__endl,
    STATE(302), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7326] = 3,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_EQ,
    ACTIONS(810), 1,
      sym__endl,
  [7336] = 2,
    STATE(60), 1,
      sym_boolean_literal,
    ACTIONS(812), 2,
      anon_sym_true,
      anon_sym_false,
  [7344] = 2,
    ACTIONS(816), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(814), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7352] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      aux_sym_args_repeat1,
  [7362] = 2,
    ACTIONS(820), 1,
      anon_sym_parameter,
    STATE(73), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
  [7370] = 1,
    ACTIONS(667), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [7376] = 3,
    ACTIONS(822), 1,
      aux_sym_code_info_stat_token1,
    STATE(239), 1,
      sym_code_info_stat,
    STATE(381), 1,
      sym_code_info,
  [7386] = 1,
    ACTIONS(824), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7392] = 3,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    ACTIONS(828), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [7402] = 3,
    ACTIONS(525), 1,
      anon_sym_POUND,
    ACTIONS(830), 1,
      sym_number,
    STATE(215), 1,
      sym__hash_number,
  [7412] = 3,
    ACTIONS(832), 1,
      anon_sym_SEMI,
    ACTIONS(834), 1,
      anon_sym_throws,
    STATE(461), 1,
      sym_method_throws,
  [7422] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_GT,
    STATE(308), 1,
      aux_sym_type_arguments_repeat1,
  [7432] = 3,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_interface_type_list_repeat1,
  [7442] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_GT,
    STATE(336), 1,
      aux_sym_type_arguments_repeat1,
  [7452] = 3,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [7462] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_GT,
    STATE(307), 1,
      aux_sym_type_arguments_repeat1,
  [7472] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_GT,
    STATE(307), 1,
      aux_sym_type_arguments_repeat1,
  [7482] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      aux_sym_footer_runtime_annotation_element_args_repeat1,
  [7492] = 3,
    ACTIONS(847), 1,
      anon_sym_POUND,
    STATE(213), 1,
      sym__hash_number,
    STATE(261), 1,
      sym_ref_const_pool_item,
  [7502] = 3,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(248), 1,
      sym_identifier,
    STATE(303), 1,
      sym_type_parameter,
  [7512] = 3,
    ACTIONS(849), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(851), 1,
      anon_sym_SLASH,
    STATE(340), 1,
      aux_sym_file_path_repeat1,
  [7522] = 1,
    ACTIONS(854), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7528] = 3,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(663), 1,
      ts_builtin_sym_end,
    STATE(468), 1,
      sym_inner_classes,
  [7538] = 3,
    ACTIONS(353), 1,
      anon_sym_class,
    ACTIONS(856), 1,
      sym_interface_keyword,
    STATE(401), 1,
      sym_class_keyword,
  [7548] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_args_repeat1,
  [7558] = 3,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_GT,
    STATE(318), 1,
      aux_sym_type_parameters_repeat1,
  [7568] = 1,
    ACTIONS(655), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [7574] = 3,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(248), 1,
      sym_identifier,
    STATE(380), 1,
      sym_type_parameter,
  [7584] = 3,
    ACTIONS(834), 1,
      anon_sym_throws,
    ACTIONS(860), 1,
      anon_sym_SEMI,
    STATE(562), 1,
      sym_method_throws,
  [7594] = 3,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_footer_runtime_annotation_element_args_repeat1,
  [7604] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      aux_sym_interface_type_list_repeat1,
  [7614] = 3,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    ACTIONS(866), 1,
      anon_sym_SEMI,
    STATE(330), 1,
      sym_args,
  [7624] = 2,
    ACTIONS(868), 1,
      anon_sym_line,
    STATE(19), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [7632] = 3,
    ACTIONS(834), 1,
      anon_sym_throws,
    ACTIONS(870), 1,
      anon_sym_SEMI,
    STATE(502), 1,
      sym_method_throws,
  [7642] = 3,
    ACTIONS(525), 1,
      anon_sym_POUND,
    ACTIONS(872), 1,
      sym_number,
    STATE(234), 1,
      sym__hash_number,
  [7652] = 3,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(454), 1,
      anon_sym_InnerClasses_COLON,
    STATE(568), 1,
      sym_inner_classes,
  [7662] = 3,
    ACTIONS(353), 1,
      anon_sym_class,
    ACTIONS(874), 1,
      sym_interface_keyword,
    STATE(399), 1,
      sym_class_keyword,
  [7672] = 2,
    ACTIONS(876), 1,
      sym__identifier,
    STATE(222), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [7680] = 1,
    ACTIONS(878), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7686] = 3,
    ACTIONS(525), 1,
      anon_sym_POUND,
    STATE(412), 1,
      sym_footer_runtime_annotation_element_arg,
    STATE(510), 1,
      sym__hash_number,
  [7696] = 3,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      aux_sym_footer_runtime_annotation_element_args_repeat1,
  [7706] = 3,
    ACTIONS(882), 1,
      anon_sym_LPAREN,
    ACTIONS(884), 1,
      anon_sym_DOT,
    STATE(242), 1,
      sym_runtime_annotation_args,
  [7716] = 3,
    ACTIONS(631), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(886), 1,
      sym__path_segment,
    STATE(521), 1,
      sym__rest_of_the_line,
  [7726] = 3,
    ACTIONS(227), 1,
      sym_number,
    STATE(89), 1,
      sym_runtime_visible_parameter_annotation_param,
    STATE(478), 1,
      sym__runtime_index,
  [7736] = 3,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      sym_number,
    STATE(364), 1,
      aux_sym_code_info_repeat1,
  [7746] = 2,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    STATE(497), 1,
      sym_footer_runtime_annotation_element_args,
  [7753] = 2,
    ACTIONS(895), 1,
      sym_comment,
    ACTIONS(897), 1,
      sym__endl,
  [7760] = 2,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(137), 1,
      sym_identifier,
  [7767] = 2,
    ACTIONS(899), 1,
      anon_sym_POUND,
    STATE(525), 1,
      sym__hash_number,
  [7774] = 2,
    ACTIONS(847), 1,
      anon_sym_POUND,
    STATE(524), 1,
      sym__hash_number,
  [7781] = 2,
    ACTIONS(901), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(72), 1,
      sym__rest_of_the_line,
  [7788] = 2,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(138), 1,
      sym_identifier,
  [7795] = 2,
    ACTIONS(847), 1,
      anon_sym_POUND,
    STATE(559), 1,
      sym__hash_number,
  [7802] = 2,
    ACTIONS(525), 1,
      anon_sym_POUND,
    STATE(514), 1,
      sym__hash_number,
  [7809] = 2,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(405), 1,
      sym_identifier,
  [7816] = 1,
    ACTIONS(903), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7821] = 1,
    ACTIONS(905), 2,
      anon_sym_COMMA,
      sym_number,
  [7826] = 1,
    ACTIONS(907), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [7831] = 2,
    ACTIONS(525), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym__hash_number,
  [7838] = 2,
    ACTIONS(822), 1,
      aux_sym_code_info_stat_token1,
    STATE(402), 1,
      sym_code_info_stat,
  [7845] = 1,
    ACTIONS(802), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7850] = 2,
    ACTIONS(909), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(46), 1,
      sym_line_number_table_def,
  [7857] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(489), 1,
      sym_class_def_plain_body,
  [7864] = 2,
    ACTIONS(911), 1,
      anon_sym_Lastmodified,
    STATE(393), 1,
      sym_header_info_last_mod,
  [7871] = 2,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__wrapped_hex_val,
  [7878] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(481), 1,
      sym_class_def_plain_body,
  [7885] = 2,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(163), 1,
      sym_identifier,
  [7892] = 2,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(167), 1,
      sym_identifier,
  [7899] = 2,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(161), 1,
      sym_identifier,
  [7906] = 2,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    STATE(353), 1,
      sym_args,
  [7913] = 2,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(166), 1,
      sym_identifier,
  [7920] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(554), 1,
      sym_class_def_plain_body,
  [7927] = 2,
    ACTIONS(917), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(516), 1,
      sym__rest_of_the_line,
  [7934] = 2,
    ACTIONS(919), 1,
      anon_sym_MD5checksum,
    STATE(400), 1,
      sym_header_info_md5,
  [7941] = 2,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(132), 1,
      sym_identifier,
  [7948] = 2,
    ACTIONS(921), 1,
      anon_sym_Constantpool_COLON,
    STATE(160), 1,
      sym_constant_pool_def,
  [7955] = 2,
    ACTIONS(923), 1,
      anon_sym_flags_COLON,
    STATE(2), 1,
      sym_flag_def,
  [7962] = 2,
    ACTIONS(525), 1,
      anon_sym_POUND,
    STATE(365), 1,
      sym__hash_number,
  [7969] = 2,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(169), 1,
      sym_identifier,
  [7976] = 2,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(165), 1,
      sym_identifier,
  [7983] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(118), 1,
      sym_header_info_compile,
  [7990] = 2,
    ACTIONS(915), 1,
      sym__identifier,
    STATE(130), 1,
      sym_identifier,
  [7997] = 1,
    ACTIONS(891), 2,
      anon_sym_COMMA,
      sym_number,
  [8002] = 2,
    ACTIONS(925), 1,
      aux_sym_instruction_token1,
    STATE(435), 1,
      sym_instruction,
  [8009] = 1,
    ACTIONS(849), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [8014] = 1,
    ACTIONS(927), 2,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
  [8019] = 2,
    ACTIONS(525), 1,
      anon_sym_POUND,
    STATE(534), 1,
      sym__hash_number,
  [8026] = 1,
    ACTIONS(929), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8031] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(457), 1,
      sym_class_def_plain_body,
  [8038] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(548), 1,
      sym_class_def_plain_body,
  [8045] = 2,
    ACTIONS(847), 1,
      anon_sym_POUND,
    STATE(260), 1,
      sym__hash_number,
  [8052] = 2,
    ACTIONS(847), 1,
      anon_sym_POUND,
    STATE(259), 1,
      sym__hash_number,
  [8059] = 1,
    ACTIONS(845), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8064] = 2,
    ACTIONS(931), 1,
      sym__identifier,
    STATE(24), 1,
      sym_identifier,
  [8071] = 1,
    ACTIONS(933), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [8076] = 2,
    ACTIONS(931), 1,
      sym__identifier,
    STATE(23), 1,
      sym_identifier,
  [8083] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(500), 1,
      sym_class_def_plain_body,
  [8090] = 1,
    ACTIONS(935), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8095] = 1,
    ACTIONS(937), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8100] = 1,
    ACTIONS(939), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8105] = 2,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(464), 1,
      sym_identifier,
  [8112] = 2,
    ACTIONS(532), 1,
      sym__identifier,
    STATE(443), 1,
      sym_identifier,
  [8119] = 2,
    ACTIONS(941), 1,
      anon_sym_LPAREN,
    STATE(282), 1,
      sym__wrapped_hex_val,
  [8126] = 2,
    ACTIONS(525), 1,
      anon_sym_POUND,
    STATE(519), 1,
      sym__hash_number,
  [8133] = 2,
    ACTIONS(901), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(51), 1,
      sym__rest_of_the_line,
  [8140] = 2,
    ACTIONS(468), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(155), 1,
      sym_source_file_def,
  [8147] = 2,
    ACTIONS(847), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym__hash_number,
  [8154] = 2,
    ACTIONS(847), 1,
      anon_sym_POUND,
    STATE(244), 1,
      sym__hash_number,
  [8161] = 2,
    ACTIONS(901), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(78), 1,
      sym__rest_of_the_line,
  [8168] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(544), 1,
      sym_class_def_plain_body,
  [8175] = 2,
    ACTIONS(901), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(82), 1,
      sym__rest_of_the_line,
  [8182] = 2,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      sym__endl,
  [8189] = 1,
    ACTIONS(947), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8194] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(462), 1,
      sym_class_def_plain_body,
  [8201] = 1,
    ACTIONS(770), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8206] = 2,
    ACTIONS(949), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym__endl,
  [8213] = 2,
    ACTIONS(525), 1,
      anon_sym_POUND,
    STATE(527), 1,
      sym__hash_number,
  [8220] = 2,
    ACTIONS(847), 1,
      anon_sym_POUND,
    STATE(513), 1,
      sym__hash_number,
  [8227] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(466), 1,
      sym_class_def_plain_body,
  [8234] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(507), 1,
      sym_class_def_plain_body,
  [8241] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(541), 1,
      sym_class_def_plain_body,
  [8248] = 1,
    ACTIONS(647), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8253] = 2,
    ACTIONS(901), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(76), 1,
      sym__rest_of_the_line,
  [8260] = 1,
    ACTIONS(953), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [8265] = 2,
    ACTIONS(917), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(475), 1,
      sym__rest_of_the_line,
  [8272] = 1,
    ACTIONS(955), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8277] = 2,
    ACTIONS(957), 1,
      anon_sym_throws,
    STATE(63), 1,
      sym_method_throws,
  [8284] = 1,
    ACTIONS(591), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8289] = 2,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(505), 1,
      sym_class_def_plain_body,
  [8296] = 2,
    ACTIONS(901), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(81), 1,
      sym__rest_of_the_line,
  [8303] = 2,
    ACTIONS(847), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym__hash_number,
  [8310] = 2,
    ACTIONS(901), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(88), 1,
      sym__rest_of_the_line,
  [8317] = 1,
    ACTIONS(959), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [8322] = 1,
    ACTIONS(961), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [8327] = 2,
    ACTIONS(963), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__endl,
  [8334] = 1,
    ACTIONS(967), 1,
      sym_number,
  [8338] = 1,
    ACTIONS(969), 1,
      ts_builtin_sym_end,
  [8342] = 1,
    ACTIONS(971), 1,
      ts_builtin_sym_end,
  [8346] = 1,
    ACTIONS(973), 1,
      ts_builtin_sym_end,
  [8350] = 1,
    ACTIONS(975), 1,
      anon_sym_default_value_COLON,
  [8354] = 1,
    ACTIONS(977), 1,
      ts_builtin_sym_end,
  [8358] = 1,
    ACTIONS(979), 1,
      anon_sym_SEMI,
  [8362] = 1,
    ACTIONS(981), 1,
      ts_builtin_sym_end,
  [8366] = 1,
    ACTIONS(983), 1,
      sym_number,
  [8370] = 1,
    ACTIONS(985), 1,
      anon_sym_EQ,
  [8374] = 1,
    ACTIONS(987), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
  [8378] = 1,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
  [8382] = 1,
    ACTIONS(991), 1,
      ts_builtin_sym_end,
  [8386] = 1,
    ACTIONS(795), 1,
      ts_builtin_sym_end,
  [8390] = 1,
    ACTIONS(993), 1,
      aux_sym_header_info_compile_token1,
  [8394] = 1,
    ACTIONS(995), 1,
      anon_sym_SEMI,
  [8398] = 1,
    ACTIONS(997), 1,
      ts_builtin_sym_end,
  [8402] = 1,
    ACTIONS(999), 1,
      ts_builtin_sym_end,
  [8406] = 1,
    ACTIONS(1001), 1,
      anon_sym_COLON2,
  [8410] = 1,
    ACTIONS(1003), 1,
      aux_sym_class_info_item_simple_token1,
  [8414] = 1,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
  [8418] = 1,
    ACTIONS(1007), 1,
      ts_builtin_sym_end,
  [8422] = 1,
    ACTIONS(1009), 1,
      anon_sym_flags_COLON,
  [8426] = 1,
    ACTIONS(1011), 1,
      sym__endl,
  [8430] = 1,
    ACTIONS(1013), 1,
      sym_number,
  [8434] = 1,
    ACTIONS(1015), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [8438] = 1,
    ACTIONS(1017), 1,
      ts_builtin_sym_end,
  [8442] = 1,
    ACTIONS(1019), 1,
      anon_sym_Lastmodified,
  [8446] = 1,
    ACTIONS(1021), 1,
      sym__endl,
  [8450] = 1,
    ACTIONS(1023), 1,
      ts_builtin_sym_end,
  [8454] = 1,
    ACTIONS(1025), 1,
      aux_sym_source_file_def_token1,
  [8458] = 1,
    ACTIONS(1027), 1,
      sym_comment,
  [8462] = 1,
    ACTIONS(1029), 1,
      anon_sym_EQ2,
  [8466] = 1,
    ACTIONS(1031), 1,
      sym_number,
  [8470] = 1,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
  [8474] = 1,
    ACTIONS(1035), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [8478] = 1,
    ACTIONS(1037), 1,
      ts_builtin_sym_end,
  [8482] = 1,
    ACTIONS(1039), 1,
      anon_sym_Compiledfrom,
  [8486] = 1,
    ACTIONS(1041), 1,
      ts_builtin_sym_end,
  [8490] = 1,
    ACTIONS(73), 1,
      sym__endl,
  [8494] = 1,
    ACTIONS(1043), 1,
      ts_builtin_sym_end,
  [8498] = 1,
    ACTIONS(1045), 1,
      anon_sym_POUND,
  [8502] = 1,
    ACTIONS(1047), 1,
      sym__endl,
  [8506] = 1,
    ACTIONS(1049), 1,
      sym_number,
  [8510] = 1,
    ACTIONS(1051), 1,
      sym__endl,
  [8514] = 1,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
  [8518] = 1,
    ACTIONS(1055), 1,
      ts_builtin_sym_end,
  [8522] = 1,
    ACTIONS(832), 1,
      anon_sym_SEMI,
  [8526] = 1,
    ACTIONS(1057), 1,
      sym_hex_value,
  [8530] = 1,
    ACTIONS(1059), 1,
      aux_sym_annotation_default_token1,
  [8534] = 1,
    ACTIONS(1061), 1,
      ts_builtin_sym_end,
  [8538] = 1,
    ACTIONS(1063), 1,
      ts_builtin_sym_end,
  [8542] = 1,
    ACTIONS(1065), 1,
      ts_builtin_sym_end,
  [8546] = 1,
    ACTIONS(1067), 1,
      sym_decimal_floating_point_literal,
  [8550] = 1,
    ACTIONS(1069), 1,
      anon_sym_Lastmodified,
  [8554] = 1,
    ACTIONS(1071), 1,
      anon_sym_EQ2,
  [8558] = 1,
    ACTIONS(1073), 1,
      sym_number,
  [8562] = 1,
    ACTIONS(1075), 1,
      sym_number,
  [8566] = 1,
    ACTIONS(1077), 1,
      anon_sym_of,
  [8570] = 1,
    ACTIONS(1079), 1,
      anon_sym_EQ2,
  [8574] = 1,
    ACTIONS(1081), 1,
      sym_md5,
  [8578] = 1,
    ACTIONS(1083), 1,
      anon_sym_MD5checksum,
  [8582] = 1,
    ACTIONS(1085), 1,
      sym_number,
  [8586] = 1,
    ACTIONS(1087), 1,
      sym__endl,
  [8590] = 1,
    ACTIONS(1089), 1,
      sym_comment,
  [8594] = 1,
    ACTIONS(663), 1,
      ts_builtin_sym_end,
  [8598] = 1,
    ACTIONS(1091), 1,
      anon_sym_Lastmodified,
  [8602] = 1,
    ACTIONS(1021), 1,
      anon_sym_COLON2,
  [8606] = 1,
    ACTIONS(1093), 1,
      sym__path_segment,
  [8610] = 1,
    ACTIONS(1095), 1,
      anon_sym_LPAREN_RPAREN,
  [8614] = 1,
    ACTIONS(1097), 1,
      sym__endl,
  [8618] = 1,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
  [8622] = 1,
    ACTIONS(1101), 1,
      anon_sym_SEMI,
  [8626] = 1,
    ACTIONS(1103), 1,
      anon_sym_SEMI,
  [8630] = 1,
    ACTIONS(1105), 1,
      sym_descriptor_value,
  [8634] = 1,
    ACTIONS(1107), 1,
      anon_sym_DQUOTE,
  [8638] = 1,
    ACTIONS(1109), 1,
      sym__endl,
  [8642] = 1,
    ACTIONS(1111), 1,
      ts_builtin_sym_end,
  [8646] = 1,
    ACTIONS(1113), 1,
      anon_sym_COLON2,
  [8650] = 1,
    ACTIONS(1115), 1,
      anon_sym_COLON2,
  [8654] = 1,
    ACTIONS(1117), 1,
      ts_builtin_sym_end,
  [8658] = 1,
    ACTIONS(1119), 1,
      sym_flag_value,
  [8662] = 1,
    ACTIONS(1121), 1,
      sym__identifier,
  [8666] = 1,
    ACTIONS(1123), 1,
      anon_sym_class,
  [8670] = 1,
    ACTIONS(1125), 1,
      anon_sym_Lastmodified,
  [8674] = 1,
    ACTIONS(1127), 1,
      anon_sym_Lastmodified,
  [8678] = 1,
    ACTIONS(1129), 1,
      ts_builtin_sym_end,
  [8682] = 1,
    ACTIONS(1131), 1,
      ts_builtin_sym_end,
  [8686] = 1,
    ACTIONS(1133), 1,
      ts_builtin_sym_end,
  [8690] = 1,
    ACTIONS(1135), 1,
      ts_builtin_sym_end,
  [8694] = 1,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
  [8698] = 1,
    ACTIONS(1137), 1,
      sym_number,
  [8702] = 1,
    ACTIONS(1139), 1,
      sym__endl,
  [8706] = 1,
    ACTIONS(1141), 1,
      ts_builtin_sym_end,
  [8710] = 1,
    ACTIONS(1143), 1,
      anon_sym_RBRACK,
  [8714] = 1,
    ACTIONS(1145), 1,
      ts_builtin_sym_end,
  [8718] = 1,
    ACTIONS(1147), 1,
      ts_builtin_sym_end,
  [8722] = 1,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
  [8726] = 1,
    ACTIONS(1151), 1,
      anon_sym_COLON,
  [8730] = 1,
    ACTIONS(1153), 1,
      ts_builtin_sym_end,
  [8734] = 1,
    ACTIONS(1155), 1,
      ts_builtin_sym_end,
  [8738] = 1,
    ACTIONS(1157), 1,
      sym_flag_value,
  [8742] = 1,
    ACTIONS(1159), 1,
      anon_sym_COLON,
  [8746] = 1,
    ACTIONS(1161), 1,
      anon_sym_SEMI,
  [8750] = 1,
    ACTIONS(1163), 1,
      anon_sym_LPAREN_RPAREN,
  [8754] = 1,
    ACTIONS(1165), 1,
      sym_number,
  [8758] = 1,
    ACTIONS(1167), 1,
      anon_sym_RBRACK,
  [8762] = 1,
    ACTIONS(870), 1,
      anon_sym_SEMI,
  [8766] = 1,
    ACTIONS(1169), 1,
      sym_number,
  [8770] = 1,
    ACTIONS(1171), 1,
      anon_sym_COLON,
  [8774] = 1,
    ACTIONS(1173), 1,
      anon_sym_RBRACK,
  [8778] = 1,
    ACTIONS(1175), 1,
      anon_sym_COLON,
  [8782] = 1,
    ACTIONS(1177), 1,
      sym_hex_value,
  [8786] = 1,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [8790] = 1,
    ACTIONS(1179), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [8794] = 1,
    ACTIONS(1181), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 191,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 309,
  [SMALL_STATE(8)] = 376,
  [SMALL_STATE(9)] = 435,
  [SMALL_STATE(10)] = 494,
  [SMALL_STATE(11)] = 555,
  [SMALL_STATE(12)] = 616,
  [SMALL_STATE(13)] = 652,
  [SMALL_STATE(14)] = 707,
  [SMALL_STATE(15)] = 746,
  [SMALL_STATE(16)] = 787,
  [SMALL_STATE(17)] = 842,
  [SMALL_STATE(18)] = 881,
  [SMALL_STATE(19)] = 920,
  [SMALL_STATE(20)] = 959,
  [SMALL_STATE(21)] = 1000,
  [SMALL_STATE(22)] = 1055,
  [SMALL_STATE(23)] = 1094,
  [SMALL_STATE(24)] = 1128,
  [SMALL_STATE(25)] = 1162,
  [SMALL_STATE(26)] = 1206,
  [SMALL_STATE(27)] = 1242,
  [SMALL_STATE(28)] = 1276,
  [SMALL_STATE(29)] = 1310,
  [SMALL_STATE(30)] = 1344,
  [SMALL_STATE(31)] = 1377,
  [SMALL_STATE(32)] = 1410,
  [SMALL_STATE(33)] = 1459,
  [SMALL_STATE(34)] = 1492,
  [SMALL_STATE(35)] = 1541,
  [SMALL_STATE(36)] = 1576,
  [SMALL_STATE(37)] = 1613,
  [SMALL_STATE(38)] = 1646,
  [SMALL_STATE(39)] = 1679,
  [SMALL_STATE(40)] = 1728,
  [SMALL_STATE(41)] = 1767,
  [SMALL_STATE(42)] = 1800,
  [SMALL_STATE(43)] = 1833,
  [SMALL_STATE(44)] = 1870,
  [SMALL_STATE(45)] = 1919,
  [SMALL_STATE(46)] = 1951,
  [SMALL_STATE(47)] = 1983,
  [SMALL_STATE(48)] = 2015,
  [SMALL_STATE(49)] = 2047,
  [SMALL_STATE(50)] = 2090,
  [SMALL_STATE(51)] = 2127,
  [SMALL_STATE(52)] = 2158,
  [SMALL_STATE(53)] = 2195,
  [SMALL_STATE(54)] = 2238,
  [SMALL_STATE(55)] = 2281,
  [SMALL_STATE(56)] = 2324,
  [SMALL_STATE(57)] = 2359,
  [SMALL_STATE(58)] = 2394,
  [SMALL_STATE(59)] = 2437,
  [SMALL_STATE(60)] = 2473,
  [SMALL_STATE(61)] = 2503,
  [SMALL_STATE(62)] = 2539,
  [SMALL_STATE(63)] = 2569,
  [SMALL_STATE(64)] = 2598,
  [SMALL_STATE(65)] = 2635,
  [SMALL_STATE(66)] = 2672,
  [SMALL_STATE(67)] = 2709,
  [SMALL_STATE(68)] = 2746,
  [SMALL_STATE(69)] = 2783,
  [SMALL_STATE(70)] = 2814,
  [SMALL_STATE(71)] = 2851,
  [SMALL_STATE(72)] = 2879,
  [SMALL_STATE(73)] = 2907,
  [SMALL_STATE(74)] = 2939,
  [SMALL_STATE(75)] = 2971,
  [SMALL_STATE(76)] = 3002,
  [SMALL_STATE(77)] = 3029,
  [SMALL_STATE(78)] = 3060,
  [SMALL_STATE(79)] = 3087,
  [SMALL_STATE(80)] = 3118,
  [SMALL_STATE(81)] = 3149,
  [SMALL_STATE(82)] = 3176,
  [SMALL_STATE(83)] = 3203,
  [SMALL_STATE(84)] = 3234,
  [SMALL_STATE(85)] = 3265,
  [SMALL_STATE(86)] = 3296,
  [SMALL_STATE(87)] = 3326,
  [SMALL_STATE(88)] = 3356,
  [SMALL_STATE(89)] = 3382,
  [SMALL_STATE(90)] = 3408,
  [SMALL_STATE(91)] = 3433,
  [SMALL_STATE(92)] = 3458,
  [SMALL_STATE(93)] = 3483,
  [SMALL_STATE(94)] = 3508,
  [SMALL_STATE(95)] = 3533,
  [SMALL_STATE(96)] = 3558,
  [SMALL_STATE(97)] = 3583,
  [SMALL_STATE(98)] = 3608,
  [SMALL_STATE(99)] = 3633,
  [SMALL_STATE(100)] = 3658,
  [SMALL_STATE(101)] = 3692,
  [SMALL_STATE(102)] = 3727,
  [SMALL_STATE(103)] = 3760,
  [SMALL_STATE(104)] = 3796,
  [SMALL_STATE(105)] = 3832,
  [SMALL_STATE(106)] = 3868,
  [SMALL_STATE(107)] = 3895,
  [SMALL_STATE(108)] = 3918,
  [SMALL_STATE(109)] = 3945,
  [SMALL_STATE(110)] = 3968,
  [SMALL_STATE(111)] = 4001,
  [SMALL_STATE(112)] = 4034,
  [SMALL_STATE(113)] = 4055,
  [SMALL_STATE(114)] = 4079,
  [SMALL_STATE(115)] = 4109,
  [SMALL_STATE(116)] = 4139,
  [SMALL_STATE(117)] = 4169,
  [SMALL_STATE(118)] = 4199,
  [SMALL_STATE(119)] = 4216,
  [SMALL_STATE(120)] = 4233,
  [SMALL_STATE(121)] = 4260,
  [SMALL_STATE(122)] = 4287,
  [SMALL_STATE(123)] = 4314,
  [SMALL_STATE(124)] = 4341,
  [SMALL_STATE(125)] = 4368,
  [SMALL_STATE(126)] = 4395,
  [SMALL_STATE(127)] = 4422,
  [SMALL_STATE(128)] = 4449,
  [SMALL_STATE(129)] = 4476,
  [SMALL_STATE(130)] = 4503,
  [SMALL_STATE(131)] = 4539,
  [SMALL_STATE(132)] = 4555,
  [SMALL_STATE(133)] = 4591,
  [SMALL_STATE(134)] = 4612,
  [SMALL_STATE(135)] = 4629,
  [SMALL_STATE(136)] = 4650,
  [SMALL_STATE(137)] = 4680,
  [SMALL_STATE(138)] = 4696,
  [SMALL_STATE(139)] = 4712,
  [SMALL_STATE(140)] = 4742,
  [SMALL_STATE(141)] = 4757,
  [SMALL_STATE(142)] = 4772,
  [SMALL_STATE(143)] = 4787,
  [SMALL_STATE(144)] = 4804,
  [SMALL_STATE(145)] = 4819,
  [SMALL_STATE(146)] = 4834,
  [SMALL_STATE(147)] = 4851,
  [SMALL_STATE(148)] = 4866,
  [SMALL_STATE(149)] = 4890,
  [SMALL_STATE(150)] = 4902,
  [SMALL_STATE(151)] = 4916,
  [SMALL_STATE(152)] = 4936,
  [SMALL_STATE(153)] = 4956,
  [SMALL_STATE(154)] = 4968,
  [SMALL_STATE(155)] = 4992,
  [SMALL_STATE(156)] = 5020,
  [SMALL_STATE(157)] = 5040,
  [SMALL_STATE(158)] = 5052,
  [SMALL_STATE(159)] = 5080,
  [SMALL_STATE(160)] = 5104,
  [SMALL_STATE(161)] = 5127,
  [SMALL_STATE(162)] = 5152,
  [SMALL_STATE(163)] = 5175,
  [SMALL_STATE(164)] = 5200,
  [SMALL_STATE(165)] = 5223,
  [SMALL_STATE(166)] = 5248,
  [SMALL_STATE(167)] = 5261,
  [SMALL_STATE(168)] = 5274,
  [SMALL_STATE(169)] = 5285,
  [SMALL_STATE(170)] = 5310,
  [SMALL_STATE(171)] = 5326,
  [SMALL_STATE(172)] = 5344,
  [SMALL_STATE(173)] = 5362,
  [SMALL_STATE(174)] = 5374,
  [SMALL_STATE(175)] = 5392,
  [SMALL_STATE(176)] = 5410,
  [SMALL_STATE(177)] = 5428,
  [SMALL_STATE(178)] = 5440,
  [SMALL_STATE(179)] = 5458,
  [SMALL_STATE(180)] = 5472,
  [SMALL_STATE(181)] = 5490,
  [SMALL_STATE(182)] = 5508,
  [SMALL_STATE(183)] = 5526,
  [SMALL_STATE(184)] = 5544,
  [SMALL_STATE(185)] = 5562,
  [SMALL_STATE(186)] = 5580,
  [SMALL_STATE(187)] = 5598,
  [SMALL_STATE(188)] = 5620,
  [SMALL_STATE(189)] = 5638,
  [SMALL_STATE(190)] = 5656,
  [SMALL_STATE(191)] = 5666,
  [SMALL_STATE(192)] = 5678,
  [SMALL_STATE(193)] = 5694,
  [SMALL_STATE(194)] = 5712,
  [SMALL_STATE(195)] = 5724,
  [SMALL_STATE(196)] = 5738,
  [SMALL_STATE(197)] = 5760,
  [SMALL_STATE(198)] = 5772,
  [SMALL_STATE(199)] = 5794,
  [SMALL_STATE(200)] = 5810,
  [SMALL_STATE(201)] = 5828,
  [SMALL_STATE(202)] = 5846,
  [SMALL_STATE(203)] = 5868,
  [SMALL_STATE(204)] = 5888,
  [SMALL_STATE(205)] = 5902,
  [SMALL_STATE(206)] = 5918,
  [SMALL_STATE(207)] = 5940,
  [SMALL_STATE(208)] = 5956,
  [SMALL_STATE(209)] = 5970,
  [SMALL_STATE(210)] = 5988,
  [SMALL_STATE(211)] = 6006,
  [SMALL_STATE(212)] = 6024,
  [SMALL_STATE(213)] = 6043,
  [SMALL_STATE(214)] = 6054,
  [SMALL_STATE(215)] = 6073,
  [SMALL_STATE(216)] = 6090,
  [SMALL_STATE(217)] = 6103,
  [SMALL_STATE(218)] = 6122,
  [SMALL_STATE(219)] = 6137,
  [SMALL_STATE(220)] = 6154,
  [SMALL_STATE(221)] = 6167,
  [SMALL_STATE(222)] = 6186,
  [SMALL_STATE(223)] = 6199,
  [SMALL_STATE(224)] = 6210,
  [SMALL_STATE(225)] = 6229,
  [SMALL_STATE(226)] = 6246,
  [SMALL_STATE(227)] = 6265,
  [SMALL_STATE(228)] = 6276,
  [SMALL_STATE(229)] = 6291,
  [SMALL_STATE(230)] = 6302,
  [SMALL_STATE(231)] = 6321,
  [SMALL_STATE(232)] = 6334,
  [SMALL_STATE(233)] = 6353,
  [SMALL_STATE(234)] = 6372,
  [SMALL_STATE(235)] = 6384,
  [SMALL_STATE(236)] = 6398,
  [SMALL_STATE(237)] = 6414,
  [SMALL_STATE(238)] = 6428,
  [SMALL_STATE(239)] = 6440,
  [SMALL_STATE(240)] = 6454,
  [SMALL_STATE(241)] = 6470,
  [SMALL_STATE(242)] = 6478,
  [SMALL_STATE(243)] = 6486,
  [SMALL_STATE(244)] = 6502,
  [SMALL_STATE(245)] = 6512,
  [SMALL_STATE(246)] = 6526,
  [SMALL_STATE(247)] = 6540,
  [SMALL_STATE(248)] = 6554,
  [SMALL_STATE(249)] = 6568,
  [SMALL_STATE(250)] = 6578,
  [SMALL_STATE(251)] = 6586,
  [SMALL_STATE(252)] = 6600,
  [SMALL_STATE(253)] = 6616,
  [SMALL_STATE(254)] = 6626,
  [SMALL_STATE(255)] = 6640,
  [SMALL_STATE(256)] = 6654,
  [SMALL_STATE(257)] = 6668,
  [SMALL_STATE(258)] = 6682,
  [SMALL_STATE(259)] = 6696,
  [SMALL_STATE(260)] = 6706,
  [SMALL_STATE(261)] = 6716,
  [SMALL_STATE(262)] = 6726,
  [SMALL_STATE(263)] = 6740,
  [SMALL_STATE(264)] = 6754,
  [SMALL_STATE(265)] = 6767,
  [SMALL_STATE(266)] = 6776,
  [SMALL_STATE(267)] = 6789,
  [SMALL_STATE(268)] = 6802,
  [SMALL_STATE(269)] = 6811,
  [SMALL_STATE(270)] = 6822,
  [SMALL_STATE(271)] = 6833,
  [SMALL_STATE(272)] = 6840,
  [SMALL_STATE(273)] = 6847,
  [SMALL_STATE(274)] = 6854,
  [SMALL_STATE(275)] = 6865,
  [SMALL_STATE(276)] = 6878,
  [SMALL_STATE(277)] = 6891,
  [SMALL_STATE(278)] = 6904,
  [SMALL_STATE(279)] = 6913,
  [SMALL_STATE(280)] = 6926,
  [SMALL_STATE(281)] = 6933,
  [SMALL_STATE(282)] = 6946,
  [SMALL_STATE(283)] = 6957,
  [SMALL_STATE(284)] = 6970,
  [SMALL_STATE(285)] = 6983,
  [SMALL_STATE(286)] = 6996,
  [SMALL_STATE(287)] = 7009,
  [SMALL_STATE(288)] = 7020,
  [SMALL_STATE(289)] = 7031,
  [SMALL_STATE(290)] = 7042,
  [SMALL_STATE(291)] = 7051,
  [SMALL_STATE(292)] = 7062,
  [SMALL_STATE(293)] = 7069,
  [SMALL_STATE(294)] = 7076,
  [SMALL_STATE(295)] = 7085,
  [SMALL_STATE(296)] = 7092,
  [SMALL_STATE(297)] = 7103,
  [SMALL_STATE(298)] = 7116,
  [SMALL_STATE(299)] = 7125,
  [SMALL_STATE(300)] = 7132,
  [SMALL_STATE(301)] = 7142,
  [SMALL_STATE(302)] = 7152,
  [SMALL_STATE(303)] = 7162,
  [SMALL_STATE(304)] = 7172,
  [SMALL_STATE(305)] = 7182,
  [SMALL_STATE(306)] = 7192,
  [SMALL_STATE(307)] = 7202,
  [SMALL_STATE(308)] = 7212,
  [SMALL_STATE(309)] = 7222,
  [SMALL_STATE(310)] = 7232,
  [SMALL_STATE(311)] = 7242,
  [SMALL_STATE(312)] = 7252,
  [SMALL_STATE(313)] = 7262,
  [SMALL_STATE(314)] = 7272,
  [SMALL_STATE(315)] = 7282,
  [SMALL_STATE(316)] = 7292,
  [SMALL_STATE(317)] = 7298,
  [SMALL_STATE(318)] = 7306,
  [SMALL_STATE(319)] = 7316,
  [SMALL_STATE(320)] = 7326,
  [SMALL_STATE(321)] = 7336,
  [SMALL_STATE(322)] = 7344,
  [SMALL_STATE(323)] = 7352,
  [SMALL_STATE(324)] = 7362,
  [SMALL_STATE(325)] = 7370,
  [SMALL_STATE(326)] = 7376,
  [SMALL_STATE(327)] = 7386,
  [SMALL_STATE(328)] = 7392,
  [SMALL_STATE(329)] = 7402,
  [SMALL_STATE(330)] = 7412,
  [SMALL_STATE(331)] = 7422,
  [SMALL_STATE(332)] = 7432,
  [SMALL_STATE(333)] = 7442,
  [SMALL_STATE(334)] = 7452,
  [SMALL_STATE(335)] = 7462,
  [SMALL_STATE(336)] = 7472,
  [SMALL_STATE(337)] = 7482,
  [SMALL_STATE(338)] = 7492,
  [SMALL_STATE(339)] = 7502,
  [SMALL_STATE(340)] = 7512,
  [SMALL_STATE(341)] = 7522,
  [SMALL_STATE(342)] = 7528,
  [SMALL_STATE(343)] = 7538,
  [SMALL_STATE(344)] = 7548,
  [SMALL_STATE(345)] = 7558,
  [SMALL_STATE(346)] = 7568,
  [SMALL_STATE(347)] = 7574,
  [SMALL_STATE(348)] = 7584,
  [SMALL_STATE(349)] = 7594,
  [SMALL_STATE(350)] = 7604,
  [SMALL_STATE(351)] = 7614,
  [SMALL_STATE(352)] = 7624,
  [SMALL_STATE(353)] = 7632,
  [SMALL_STATE(354)] = 7642,
  [SMALL_STATE(355)] = 7652,
  [SMALL_STATE(356)] = 7662,
  [SMALL_STATE(357)] = 7672,
  [SMALL_STATE(358)] = 7680,
  [SMALL_STATE(359)] = 7686,
  [SMALL_STATE(360)] = 7696,
  [SMALL_STATE(361)] = 7706,
  [SMALL_STATE(362)] = 7716,
  [SMALL_STATE(363)] = 7726,
  [SMALL_STATE(364)] = 7736,
  [SMALL_STATE(365)] = 7746,
  [SMALL_STATE(366)] = 7753,
  [SMALL_STATE(367)] = 7760,
  [SMALL_STATE(368)] = 7767,
  [SMALL_STATE(369)] = 7774,
  [SMALL_STATE(370)] = 7781,
  [SMALL_STATE(371)] = 7788,
  [SMALL_STATE(372)] = 7795,
  [SMALL_STATE(373)] = 7802,
  [SMALL_STATE(374)] = 7809,
  [SMALL_STATE(375)] = 7816,
  [SMALL_STATE(376)] = 7821,
  [SMALL_STATE(377)] = 7826,
  [SMALL_STATE(378)] = 7831,
  [SMALL_STATE(379)] = 7838,
  [SMALL_STATE(380)] = 7845,
  [SMALL_STATE(381)] = 7850,
  [SMALL_STATE(382)] = 7857,
  [SMALL_STATE(383)] = 7864,
  [SMALL_STATE(384)] = 7871,
  [SMALL_STATE(385)] = 7878,
  [SMALL_STATE(386)] = 7885,
  [SMALL_STATE(387)] = 7892,
  [SMALL_STATE(388)] = 7899,
  [SMALL_STATE(389)] = 7906,
  [SMALL_STATE(390)] = 7913,
  [SMALL_STATE(391)] = 7920,
  [SMALL_STATE(392)] = 7927,
  [SMALL_STATE(393)] = 7934,
  [SMALL_STATE(394)] = 7941,
  [SMALL_STATE(395)] = 7948,
  [SMALL_STATE(396)] = 7955,
  [SMALL_STATE(397)] = 7962,
  [SMALL_STATE(398)] = 7969,
  [SMALL_STATE(399)] = 7976,
  [SMALL_STATE(400)] = 7983,
  [SMALL_STATE(401)] = 7990,
  [SMALL_STATE(402)] = 7997,
  [SMALL_STATE(403)] = 8002,
  [SMALL_STATE(404)] = 8009,
  [SMALL_STATE(405)] = 8014,
  [SMALL_STATE(406)] = 8019,
  [SMALL_STATE(407)] = 8026,
  [SMALL_STATE(408)] = 8031,
  [SMALL_STATE(409)] = 8038,
  [SMALL_STATE(410)] = 8045,
  [SMALL_STATE(411)] = 8052,
  [SMALL_STATE(412)] = 8059,
  [SMALL_STATE(413)] = 8064,
  [SMALL_STATE(414)] = 8071,
  [SMALL_STATE(415)] = 8076,
  [SMALL_STATE(416)] = 8083,
  [SMALL_STATE(417)] = 8090,
  [SMALL_STATE(418)] = 8095,
  [SMALL_STATE(419)] = 8100,
  [SMALL_STATE(420)] = 8105,
  [SMALL_STATE(421)] = 8112,
  [SMALL_STATE(422)] = 8119,
  [SMALL_STATE(423)] = 8126,
  [SMALL_STATE(424)] = 8133,
  [SMALL_STATE(425)] = 8140,
  [SMALL_STATE(426)] = 8147,
  [SMALL_STATE(427)] = 8154,
  [SMALL_STATE(428)] = 8161,
  [SMALL_STATE(429)] = 8168,
  [SMALL_STATE(430)] = 8175,
  [SMALL_STATE(431)] = 8182,
  [SMALL_STATE(432)] = 8189,
  [SMALL_STATE(433)] = 8194,
  [SMALL_STATE(434)] = 8201,
  [SMALL_STATE(435)] = 8206,
  [SMALL_STATE(436)] = 8213,
  [SMALL_STATE(437)] = 8220,
  [SMALL_STATE(438)] = 8227,
  [SMALL_STATE(439)] = 8234,
  [SMALL_STATE(440)] = 8241,
  [SMALL_STATE(441)] = 8248,
  [SMALL_STATE(442)] = 8253,
  [SMALL_STATE(443)] = 8260,
  [SMALL_STATE(444)] = 8265,
  [SMALL_STATE(445)] = 8272,
  [SMALL_STATE(446)] = 8277,
  [SMALL_STATE(447)] = 8284,
  [SMALL_STATE(448)] = 8289,
  [SMALL_STATE(449)] = 8296,
  [SMALL_STATE(450)] = 8303,
  [SMALL_STATE(451)] = 8310,
  [SMALL_STATE(452)] = 8317,
  [SMALL_STATE(453)] = 8322,
  [SMALL_STATE(454)] = 8327,
  [SMALL_STATE(455)] = 8334,
  [SMALL_STATE(456)] = 8338,
  [SMALL_STATE(457)] = 8342,
  [SMALL_STATE(458)] = 8346,
  [SMALL_STATE(459)] = 8350,
  [SMALL_STATE(460)] = 8354,
  [SMALL_STATE(461)] = 8358,
  [SMALL_STATE(462)] = 8362,
  [SMALL_STATE(463)] = 8366,
  [SMALL_STATE(464)] = 8370,
  [SMALL_STATE(465)] = 8374,
  [SMALL_STATE(466)] = 8378,
  [SMALL_STATE(467)] = 8382,
  [SMALL_STATE(468)] = 8386,
  [SMALL_STATE(469)] = 8390,
  [SMALL_STATE(470)] = 8394,
  [SMALL_STATE(471)] = 8398,
  [SMALL_STATE(472)] = 8402,
  [SMALL_STATE(473)] = 8406,
  [SMALL_STATE(474)] = 8410,
  [SMALL_STATE(475)] = 8414,
  [SMALL_STATE(476)] = 8418,
  [SMALL_STATE(477)] = 8422,
  [SMALL_STATE(478)] = 8426,
  [SMALL_STATE(479)] = 8430,
  [SMALL_STATE(480)] = 8434,
  [SMALL_STATE(481)] = 8438,
  [SMALL_STATE(482)] = 8442,
  [SMALL_STATE(483)] = 8446,
  [SMALL_STATE(484)] = 8450,
  [SMALL_STATE(485)] = 8454,
  [SMALL_STATE(486)] = 8458,
  [SMALL_STATE(487)] = 8462,
  [SMALL_STATE(488)] = 8466,
  [SMALL_STATE(489)] = 8470,
  [SMALL_STATE(490)] = 8474,
  [SMALL_STATE(491)] = 8478,
  [SMALL_STATE(492)] = 8482,
  [SMALL_STATE(493)] = 8486,
  [SMALL_STATE(494)] = 8490,
  [SMALL_STATE(495)] = 8494,
  [SMALL_STATE(496)] = 8498,
  [SMALL_STATE(497)] = 8502,
  [SMALL_STATE(498)] = 8506,
  [SMALL_STATE(499)] = 8510,
  [SMALL_STATE(500)] = 8514,
  [SMALL_STATE(501)] = 8518,
  [SMALL_STATE(502)] = 8522,
  [SMALL_STATE(503)] = 8526,
  [SMALL_STATE(504)] = 8530,
  [SMALL_STATE(505)] = 8534,
  [SMALL_STATE(506)] = 8538,
  [SMALL_STATE(507)] = 8542,
  [SMALL_STATE(508)] = 8546,
  [SMALL_STATE(509)] = 8550,
  [SMALL_STATE(510)] = 8554,
  [SMALL_STATE(511)] = 8558,
  [SMALL_STATE(512)] = 8562,
  [SMALL_STATE(513)] = 8566,
  [SMALL_STATE(514)] = 8570,
  [SMALL_STATE(515)] = 8574,
  [SMALL_STATE(516)] = 8578,
  [SMALL_STATE(517)] = 8582,
  [SMALL_STATE(518)] = 8586,
  [SMALL_STATE(519)] = 8590,
  [SMALL_STATE(520)] = 8594,
  [SMALL_STATE(521)] = 8598,
  [SMALL_STATE(522)] = 8602,
  [SMALL_STATE(523)] = 8606,
  [SMALL_STATE(524)] = 8610,
  [SMALL_STATE(525)] = 8614,
  [SMALL_STATE(526)] = 8618,
  [SMALL_STATE(527)] = 8622,
  [SMALL_STATE(528)] = 8626,
  [SMALL_STATE(529)] = 8630,
  [SMALL_STATE(530)] = 8634,
  [SMALL_STATE(531)] = 8638,
  [SMALL_STATE(532)] = 8642,
  [SMALL_STATE(533)] = 8646,
  [SMALL_STATE(534)] = 8650,
  [SMALL_STATE(535)] = 8654,
  [SMALL_STATE(536)] = 8658,
  [SMALL_STATE(537)] = 8662,
  [SMALL_STATE(538)] = 8666,
  [SMALL_STATE(539)] = 8670,
  [SMALL_STATE(540)] = 8674,
  [SMALL_STATE(541)] = 8678,
  [SMALL_STATE(542)] = 8682,
  [SMALL_STATE(543)] = 8686,
  [SMALL_STATE(544)] = 8690,
  [SMALL_STATE(545)] = 8694,
  [SMALL_STATE(546)] = 8698,
  [SMALL_STATE(547)] = 8702,
  [SMALL_STATE(548)] = 8706,
  [SMALL_STATE(549)] = 8710,
  [SMALL_STATE(550)] = 8714,
  [SMALL_STATE(551)] = 8718,
  [SMALL_STATE(552)] = 8722,
  [SMALL_STATE(553)] = 8726,
  [SMALL_STATE(554)] = 8730,
  [SMALL_STATE(555)] = 8734,
  [SMALL_STATE(556)] = 8738,
  [SMALL_STATE(557)] = 8742,
  [SMALL_STATE(558)] = 8746,
  [SMALL_STATE(559)] = 8750,
  [SMALL_STATE(560)] = 8754,
  [SMALL_STATE(561)] = 8758,
  [SMALL_STATE(562)] = 8762,
  [SMALL_STATE(563)] = 8766,
  [SMALL_STATE(564)] = 8770,
  [SMALL_STATE(565)] = 8774,
  [SMALL_STATE(566)] = 8778,
  [SMALL_STATE(567)] = 8782,
  [SMALL_STATE(568)] = 8786,
  [SMALL_STATE(569)] = 8790,
  [SMALL_STATE(570)] = 8794,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(28),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(87),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(47),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(511),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(556),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 11),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 11),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_the_line, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_the_line, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(549),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 7),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 7),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2), SHIFT_REPEAT(553),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_default, 6, .production_id = 19),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_default, 6, .production_id = 19),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotations, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotations, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 7),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 7),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(129),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotations, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotations, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprecated, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2), SHIFT_REPEAT(570),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exceptions, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exceptions, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 8),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 8),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_def_verbose_sig, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def_verbose_sig, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_def_verbose_sig, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def_verbose_sig, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotation, 3, .production_id = 17),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotation, 3, .production_id = 17),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_paramter_annotations, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_paramter_annotations, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2), SHIFT_REPEAT(517),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 9),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 9),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 7, .production_id = 23),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 7, .production_id = 23),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 5, .production_id = 21),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 5, .production_id = 21),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 6, .production_id = 22),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 6, .production_id = 22),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 8, .production_id = 25),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 8, .production_id = 25),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(86),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_parameter_annotation_param, 3, .production_id = 17),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_parameter_annotation_param, 3, .production_id = 17),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_parameter_annotation, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_parameter_annotation, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 10),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 10),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_item, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_item, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(107),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(109),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(565),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 9),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 3),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(561),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 8),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 6),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superclass, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superclass, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 7, .production_id = 13),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 8),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 6),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 10),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_annotations_repeat1, 2),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_annotations_repeat1, 2), SHIFT_REPEAT(566),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 13),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(488),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_annotations, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 9),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 10),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(422),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(329),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(298),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(5),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_annotation, 7),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4, .production_id = 16),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_args, 5, .production_id = 24),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 2),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(128),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(474),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2, .production_id = 15),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2, .production_id = 15),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(536),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(122),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2, .production_id = 14),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_int, 2, .production_id = 14),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(557),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5, .production_id = 16),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3, .production_id = 15),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3, .production_id = 15),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_interfaces, 2),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_super_interfaces, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 3),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(123),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2), SHIFT_REPEAT(220),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(110),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [787] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2), SHIFT_REPEAT(480),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(116),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(347),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2, .production_id = 20),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2, .production_id = 20),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_annotation_element_value_simple, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_runtime_annotation_element_args_repeat1, 2), SHIFT_REPEAT(359),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_runtime_annotation_element_args_repeat1, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [851] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(523),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(379),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 3),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nest_host, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_annotation_element_arg, 3),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 4),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 4),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 4),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 18),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 4),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 6),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 5),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 1),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 7, .production_id = 13),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_index, 4),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 7, .production_id = 13),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_tag, 1),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_annotation_element_args, 4),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 6),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 4),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_annotation_element_args, 2),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_annotation_element_args, 3),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_keyword, 1),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 10),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 9),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 5),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 8),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 10),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 9),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 8),
  [1155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
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
