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
#define STATE_COUNT 613
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 235
#define ALIAS_COUNT 3
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 28

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
  sym_footer_runtime_visible_annotations = 174,
  sym_footer_runtime_visible_annotation = 175,
  sym_footer_runtime_visible_annotation_element_args = 176,
  sym_footer_runtime_visible_annotation_element_arg = 177,
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
  aux_sym_footer_runtime_visible_annotations_repeat1 = 227,
  aux_sym_footer_runtime_visible_annotation_element_args_repeat1 = 228,
  aux_sym_runtime_annotation_element_value_array_repeat1 = 229,
  aux_sym_runtime_annotation_args_repeat1 = 230,
  aux_sym_constant_pool_def_repeat1 = 231,
  aux_sym_class_info_def_repeat1 = 232,
  aux_sym_class_info_item_simple_repeat1 = 233,
  aux_sym_file_path_repeat1 = 234,
  alias_sym_footer_runtime_visible_type_annotations = 235,
  alias_sym_target_kind = 236,
  alias_sym_type_identifier = 237,
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
  [sym_footer_runtime_visible_annotations] = "footer_runtime_visible_annotations",
  [sym_footer_runtime_visible_annotation] = "footer_runtime_visible_annotation",
  [sym_footer_runtime_visible_annotation_element_args] = "footer_runtime_visible_annotation_element_args",
  [sym_footer_runtime_visible_annotation_element_arg] = "footer_runtime_visible_annotation_element_arg",
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
  [aux_sym_footer_runtime_visible_annotations_repeat1] = "footer_runtime_visible_annotations_repeat1",
  [aux_sym_footer_runtime_visible_annotation_element_args_repeat1] = "footer_runtime_visible_annotation_element_args_repeat1",
  [aux_sym_runtime_annotation_element_value_array_repeat1] = "runtime_annotation_element_value_array_repeat1",
  [aux_sym_runtime_annotation_args_repeat1] = "runtime_annotation_args_repeat1",
  [aux_sym_constant_pool_def_repeat1] = "constant_pool_def_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_file_path_repeat1] = "file_path_repeat1",
  [alias_sym_footer_runtime_visible_type_annotations] = "footer_runtime_visible_type_annotations",
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
  [sym_footer_runtime_visible_annotations] = sym_footer_runtime_visible_annotations,
  [sym_footer_runtime_visible_annotation] = sym_footer_runtime_visible_annotation,
  [sym_footer_runtime_visible_annotation_element_args] = sym_footer_runtime_visible_annotation_element_args,
  [sym_footer_runtime_visible_annotation_element_arg] = sym_footer_runtime_visible_annotation_element_arg,
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
  [aux_sym_footer_runtime_visible_annotations_repeat1] = aux_sym_footer_runtime_visible_annotations_repeat1,
  [aux_sym_footer_runtime_visible_annotation_element_args_repeat1] = aux_sym_footer_runtime_visible_annotation_element_args_repeat1,
  [aux_sym_runtime_annotation_element_value_array_repeat1] = aux_sym_runtime_annotation_element_value_array_repeat1,
  [aux_sym_runtime_annotation_args_repeat1] = aux_sym_runtime_annotation_args_repeat1,
  [aux_sym_constant_pool_def_repeat1] = aux_sym_constant_pool_def_repeat1,
  [aux_sym_class_info_def_repeat1] = aux_sym_class_info_def_repeat1,
  [aux_sym_class_info_item_simple_repeat1] = aux_sym_class_info_item_simple_repeat1,
  [aux_sym_file_path_repeat1] = aux_sym_file_path_repeat1,
  [alias_sym_footer_runtime_visible_type_annotations] = alias_sym_footer_runtime_visible_type_annotations,
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
  [sym_footer_runtime_visible_annotations] = {
    .visible = true,
    .named = true,
  },
  [sym_footer_runtime_visible_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_footer_runtime_visible_annotation_element_args] = {
    .visible = true,
    .named = true,
  },
  [sym_footer_runtime_visible_annotation_element_arg] = {
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
  [aux_sym_footer_runtime_visible_annotations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_footer_runtime_visible_annotation_element_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_runtime_annotation_element_value_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_runtime_annotation_args_repeat1] = {
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
  [alias_sym_footer_runtime_visible_type_annotations] = {
    .visible = true,
    .named = true,
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
  [8] = {.index = 6, .length = 2},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [15] = {.index = 12, .length = 2},
  [25] = {.index = 14, .length = 2},
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
  [7] = {
    [1] = alias_sym_footer_runtime_visible_type_annotations,
  },
  [12] = {
    [2] = alias_sym_footer_runtime_visible_type_annotations,
  },
  [13] = {
    [2] = alias_sym_type_identifier,
  },
  [14] = {
    [0] = alias_sym_type_identifier,
    [2] = alias_sym_type_identifier,
  },
  [16] = {
    [1] = sym_decimal_floating_point_literal,
  },
  [17] = {
    [1] = sym_ref_const_pool_item,
  },
  [18] = {
    [3] = alias_sym_footer_runtime_visible_type_annotations,
  },
  [19] = {
    [1] = sym_ref_const_pool_item,
    [3] = sym_ref_const_pool_item,
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
    [2] = sym_decimal_floating_point_literal,
  },
  [24] = {
    [6] = sym_decimal_floating_point_literal,
  },
  [26] = {
    [7] = sym_decimal_floating_point_literal,
  },
  [27] = {
    [5] = sym_decimal_floating_point_literal,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_runtime_visible_type_annotations, 2,
    sym_runtime_visible_type_annotations,
    alias_sym_footer_runtime_visible_type_annotations,
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
  [107] = 89,
  [108] = 24,
  [109] = 109,
  [110] = 88,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 118,
  [123] = 123,
  [124] = 124,
  [125] = 123,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 123,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 12,
  [134] = 16,
  [135] = 14,
  [136] = 29,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 28,
  [142] = 44,
  [143] = 38,
  [144] = 41,
  [145] = 34,
  [146] = 36,
  [147] = 37,
  [148] = 35,
  [149] = 40,
  [150] = 150,
  [151] = 151,
  [152] = 14,
  [153] = 24,
  [154] = 154,
  [155] = 47,
  [156] = 16,
  [157] = 157,
  [158] = 158,
  [159] = 46,
  [160] = 48,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 60,
  [166] = 166,
  [167] = 167,
  [168] = 28,
  [169] = 62,
  [170] = 170,
  [171] = 29,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 33,
  [182] = 182,
  [183] = 41,
  [184] = 30,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 44,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 36,
  [199] = 35,
  [200] = 40,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 34,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 37,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 38,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 25,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 46,
  [228] = 226,
  [229] = 229,
  [230] = 33,
  [231] = 48,
  [232] = 232,
  [233] = 162,
  [234] = 234,
  [235] = 235,
  [236] = 226,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 47,
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
  [252] = 15,
  [253] = 19,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 77,
  [259] = 259,
  [260] = 21,
  [261] = 80,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 76,
  [270] = 270,
  [271] = 85,
  [272] = 272,
  [273] = 182,
  [274] = 53,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 26,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 235,
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
  [294] = 53,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 279,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 23,
  [309] = 27,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 24,
  [315] = 315,
  [316] = 315,
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
  [327] = 275,
  [328] = 328,
  [329] = 323,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 49,
  [340] = 340,
  [341] = 259,
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
  [352] = 272,
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
  [364] = 337,
  [365] = 365,
  [366] = 328,
  [367] = 367,
  [368] = 368,
  [369] = 354,
  [370] = 359,
  [371] = 371,
  [372] = 321,
  [373] = 321,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 365,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 337,
  [388] = 388,
  [389] = 388,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 397,
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
  [419] = 393,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 423,
  [425] = 425,
  [426] = 426,
  [427] = 421,
  [428] = 394,
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
  [459] = 407,
  [460] = 413,
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
  [471] = 469,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 423,
  [480] = 421,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 398,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
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
  [518] = 12,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
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
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 548,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 534,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 491,
  [585] = 585,
  [586] = 586,
  [587] = 532,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 591,
  [594] = 583,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 534,
  [600] = 491,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 508,
  [607] = 607,
  [608] = 608,
  [609] = 608,
  [610] = 562,
  [611] = 552,
  [612] = 554,
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
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(708);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '&') ADVANCE(344);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == ':') ADVANCE(331);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == '?') ADVANCE(490);
      if (lookahead == '@') ADVANCE(713);
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == 'C') ADVANCE(324);
      if (lookahead == 'D') ADVANCE(316);
      if (lookahead == 'E') ADVANCE(326);
      if (lookahead == 'I') ADVANCE(323);
      if (lookahead == 'L') ADVANCE(315);
      if (lookahead == 'M') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(318);
      if (lookahead == 'R') ADVANCE(325);
      if (lookahead == 'S') ADVANCE(319);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(292)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(702);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(190);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(705);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == 'R') ADVANCE(696);
      if (lookahead == 'S') ADVANCE(577);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(702);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == 'R') ADVANCE(696);
      if (lookahead == 'S') ADVANCE(577);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(702);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(332);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(702);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(487);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(726);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(715);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(354);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(712);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(310);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(351);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(709);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(710);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(716);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(716);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(346);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(333);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(334);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(312);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'g') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(428);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'D') ADVANCE(397);
      if (lookahead == 'E') ADVANCE(478);
      if (lookahead == 'R') ADVANCE(476);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(702);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(244);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(178);
      END_STATE();
    case 67:
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(148);
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 70:
      if (lookahead == 'F') ADVANCE(143);
      END_STATE();
    case 71:
      if (lookahead == 'H') ADVANCE(187);
      if (lookahead == 'M') ADVANCE(127);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(239);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'V') ADVANCE(141);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(241);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(724);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 94:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 95:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(728);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(198);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(207);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 145:
      if (lookahead == 'k') ADVANCE(204);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(730);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(731);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 241:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 242:
      if (lookahead == 'x') ADVANCE(289);
      END_STATE();
    case 243:
      if (lookahead == 'x') ADVANCE(228);
      END_STATE();
    case 244:
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 245:
      if (lookahead == '}') ADVANCE(341);
      END_STATE();
    case 246:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 247:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 248:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 249:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 250:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 251:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 252:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(733);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(734);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 255:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(724);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(729);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(484);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 291:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 292:
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(708);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '&') ADVANCE(344);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == '?') ADVANCE(490);
      if (lookahead == '@') ADVANCE(713);
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == 'C') ADVANCE(324);
      if (lookahead == 'D') ADVANCE(316);
      if (lookahead == 'E') ADVANCE(326);
      if (lookahead == 'I') ADVANCE(323);
      if (lookahead == 'L') ADVANCE(315);
      if (lookahead == 'M') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(318);
      if (lookahead == 'R') ADVANCE(325);
      if (lookahead == 'S') ADVANCE(319);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(292)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(702);
      END_STATE();
    case 293:
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(331);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead == 'C') ADVANCE(624);
      if (lookahead == 'I') ADVANCE(607);
      if (lookahead == 'N') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(702);
      END_STATE();
    case 294:
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(624);
      if (lookahead == 'I') ADVANCE(607);
      if (lookahead == 'N') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(702);
      END_STATE();
    case 295:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '&') ADVANCE(344);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == 'S') ADVANCE(134);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      END_STATE();
    case 296:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '&') ADVANCE(344);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == 'S') ADVANCE(134);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      END_STATE();
    case 297:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == '?') ADVANCE(490);
      if (lookahead == '@') ADVANCE(713);
      if (lookahead == 'A') ADVANCE(603);
      if (lookahead == 'C') ADVANCE(625);
      if (lookahead == 'D') ADVANCE(548);
      if (lookahead == 'E') ADVANCE(699);
      if (lookahead == 'I') ADVANCE(607);
      if (lookahead == 'N') ADVANCE(572);
      if (lookahead == 'R') ADVANCE(696);
      if (lookahead == 'S') ADVANCE(578);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(297)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(702);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_extends);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_implements);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_implements);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_Signature_COLON);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_AnnotationDefault_COLON);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_default_value_COLON);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'D') ADVANCE(495);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'i') ADVANCE(611);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(637);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(655);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(658);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead == 'o') ADVANCE(694);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'l') ADVANCE(522);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'm') ADVANCE(638);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'n') ADVANCE(604);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'n') ADVANCE(609);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'o') ADVANCE(543);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'u') ADVANCE(610);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'x') ADVANCE(539);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'x') ADVANCE(680);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Deprecated_COLON);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_RuntimeVisibleAnnotations_COLON);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_RuntimeVisibleTypeAnnotations_COLON);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_runtime_visible_type_annotation_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_RuntimeVisibleParameterAnnotations_COLON);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Exceptions_COLON);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ' ') ADVANCE(190);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 'g') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'A') ADVANCE(436);
      if (lookahead == 'P') ADVANCE(383);
      if (lookahead == 'T') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'A') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'A') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'D') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'V') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'f') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'g') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'm') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'm') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'x') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'y') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(702);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(98);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(156);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(128);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(191);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '5') ADVANCE(491);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(345);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(354);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(712);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(310);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(330);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(340);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(6);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(351);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(709);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(710);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(346);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(311);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(333);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(334);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(339);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(621);
      if (lookahead == 'P') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(701);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(702);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(622);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(702);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(623);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(702);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(590);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(553);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(582);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(631);
      if (lookahead == 'M') ADVANCE(573);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(631);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(695);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(524);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(583);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(575);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(697);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(538);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(661);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(614);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(684);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(648);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(683);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(686);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(601);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(689);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(690);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(691);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(702);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(563);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(594);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(564);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(596);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(560);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(529);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(645);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(551);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(639);
      if (lookahead == 'n') ADVANCE(659);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(549);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(493);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(653);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(500);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(637);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(496);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(519);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(516);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(521);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(574);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(511);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(512);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(545);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(540);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(643);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(547);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(640);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(499);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(605);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(644);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(651);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(502);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(652);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(506);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(600);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(613);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(688);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(665);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(666);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(602);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(523);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(657);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(608);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead == 'o') ADVANCE(694);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(576);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(599);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(536);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(627);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(595);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(662);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(592);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(628);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(641);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(630);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(633);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(634);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(525);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(568);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(556);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(682);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(554);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(565);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(567);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(535);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(639);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(552);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(569);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(570);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(537);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(604);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(626);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(546);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(515);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(609);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(527);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(558);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(674);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(550);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(660);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(681);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(678);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(667);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(669);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(670);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(632);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(635);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(636);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(618);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(619);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(620);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(598);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(544);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(685);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(612);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(606);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(647);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(615);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(663);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(687);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(616);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(617);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(692);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(693);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(646);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(591);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(584);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(679);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(677);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(514);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(520);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(586);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(557);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(503);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(531);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(542);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(561);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(664);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(513);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(301);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(304);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(541);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(673);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(497);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(671);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(675);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(501);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(668);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(580);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(676);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(504);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(505);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(672);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(508);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(571);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(509);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(510);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(517);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(518);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(492);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(579);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(526);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(498);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(629);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(494);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(581);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(562);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(654);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(507);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(698);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(530);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(585);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(532);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(566);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(587);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(588);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(589);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(533);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(534);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(649);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(597);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(610);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(593);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(650);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(539);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(680);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(642);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_NestMembers_COLON);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_InnerClasses_COLON);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_NestHost_COLON);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(715);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
      if (lookahead != 0) ADVANCE(714);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(717);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(721);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(737);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(722);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(719);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(719);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(721);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(722);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(721);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(722);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(724);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(733);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(734);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(721);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(722);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
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
  [1] = {.lex_state = 293},
  [2] = {.lex_state = 297},
  [3] = {.lex_state = 297},
  [4] = {.lex_state = 297},
  [5] = {.lex_state = 297},
  [6] = {.lex_state = 297},
  [7] = {.lex_state = 297},
  [8] = {.lex_state = 297},
  [9] = {.lex_state = 297},
  [10] = {.lex_state = 297},
  [11] = {.lex_state = 297},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 297},
  [14] = {.lex_state = 297},
  [15] = {.lex_state = 297},
  [16] = {.lex_state = 297},
  [17] = {.lex_state = 297},
  [18] = {.lex_state = 297},
  [19] = {.lex_state = 297},
  [20] = {.lex_state = 297},
  [21] = {.lex_state = 297},
  [22] = {.lex_state = 297},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 297},
  [25] = {.lex_state = 297},
  [26] = {.lex_state = 297},
  [27] = {.lex_state = 64},
  [28] = {.lex_state = 297},
  [29] = {.lex_state = 297},
  [30] = {.lex_state = 297},
  [31] = {.lex_state = 297},
  [32] = {.lex_state = 297},
  [33] = {.lex_state = 297},
  [34] = {.lex_state = 297},
  [35] = {.lex_state = 297},
  [36] = {.lex_state = 297},
  [37] = {.lex_state = 297},
  [38] = {.lex_state = 297},
  [39] = {.lex_state = 297},
  [40] = {.lex_state = 297},
  [41] = {.lex_state = 297},
  [42] = {.lex_state = 297},
  [43] = {.lex_state = 297},
  [44] = {.lex_state = 297},
  [45] = {.lex_state = 297},
  [46] = {.lex_state = 297},
  [47] = {.lex_state = 297},
  [48] = {.lex_state = 297},
  [49] = {.lex_state = 297},
  [50] = {.lex_state = 297},
  [51] = {.lex_state = 297},
  [52] = {.lex_state = 297},
  [53] = {.lex_state = 297},
  [54] = {.lex_state = 297},
  [55] = {.lex_state = 297},
  [56] = {.lex_state = 297},
  [57] = {.lex_state = 297},
  [58] = {.lex_state = 297},
  [59] = {.lex_state = 297},
  [60] = {.lex_state = 297},
  [61] = {.lex_state = 297},
  [62] = {.lex_state = 297},
  [63] = {.lex_state = 297},
  [64] = {.lex_state = 297},
  [65] = {.lex_state = 297},
  [66] = {.lex_state = 297},
  [67] = {.lex_state = 297},
  [68] = {.lex_state = 297},
  [69] = {.lex_state = 297},
  [70] = {.lex_state = 297},
  [71] = {.lex_state = 297},
  [72] = {.lex_state = 297},
  [73] = {.lex_state = 297},
  [74] = {.lex_state = 297},
  [75] = {.lex_state = 297},
  [76] = {.lex_state = 297},
  [77] = {.lex_state = 297},
  [78] = {.lex_state = 297},
  [79] = {.lex_state = 297},
  [80] = {.lex_state = 297},
  [81] = {.lex_state = 297},
  [82] = {.lex_state = 297},
  [83] = {.lex_state = 297},
  [84] = {.lex_state = 297},
  [85] = {.lex_state = 297},
  [86] = {.lex_state = 297},
  [87] = {.lex_state = 297},
  [88] = {.lex_state = 297},
  [89] = {.lex_state = 297},
  [90] = {.lex_state = 297},
  [91] = {.lex_state = 297},
  [92] = {.lex_state = 297},
  [93] = {.lex_state = 297},
  [94] = {.lex_state = 297},
  [95] = {.lex_state = 297},
  [96] = {.lex_state = 297},
  [97] = {.lex_state = 297},
  [98] = {.lex_state = 297},
  [99] = {.lex_state = 297},
  [100] = {.lex_state = 297},
  [101] = {.lex_state = 297},
  [102] = {.lex_state = 297},
  [103] = {.lex_state = 297},
  [104] = {.lex_state = 297},
  [105] = {.lex_state = 297},
  [106] = {.lex_state = 297},
  [107] = {.lex_state = 297},
  [108] = {.lex_state = 295},
  [109] = {.lex_state = 297},
  [110] = {.lex_state = 297},
  [111] = {.lex_state = 297},
  [112] = {.lex_state = 297},
  [113] = {.lex_state = 297},
  [114] = {.lex_state = 297},
  [115] = {.lex_state = 297},
  [116] = {.lex_state = 297},
  [117] = {.lex_state = 297},
  [118] = {.lex_state = 297},
  [119] = {.lex_state = 297},
  [120] = {.lex_state = 297},
  [121] = {.lex_state = 297},
  [122] = {.lex_state = 297},
  [123] = {.lex_state = 297},
  [124] = {.lex_state = 297},
  [125] = {.lex_state = 297},
  [126] = {.lex_state = 297},
  [127] = {.lex_state = 297},
  [128] = {.lex_state = 297},
  [129] = {.lex_state = 297},
  [130] = {.lex_state = 297},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 295},
  [135] = {.lex_state = 295},
  [136] = {.lex_state = 295},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 295},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 295},
  [141] = {.lex_state = 295},
  [142] = {.lex_state = 295},
  [143] = {.lex_state = 295},
  [144] = {.lex_state = 295},
  [145] = {.lex_state = 295},
  [146] = {.lex_state = 295},
  [147] = {.lex_state = 295},
  [148] = {.lex_state = 295},
  [149] = {.lex_state = 295},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 295},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 295},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 295},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 295},
  [160] = {.lex_state = 295},
  [161] = {.lex_state = 297},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 295},
  [164] = {.lex_state = 295},
  [165] = {.lex_state = 295},
  [166] = {.lex_state = 295},
  [167] = {.lex_state = 295},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 295},
  [170] = {.lex_state = 295},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 295},
  [173] = {.lex_state = 295},
  [174] = {.lex_state = 295},
  [175] = {.lex_state = 295},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 297},
  [178] = {.lex_state = 297},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 295},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 295},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 295},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 297},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 295},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 295},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 14},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 297},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 295},
  [214] = {.lex_state = 14},
  [215] = {.lex_state = 295},
  [216] = {.lex_state = 14},
  [217] = {.lex_state = 14},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 295},
  [220] = {.lex_state = 297},
  [221] = {.lex_state = 297},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 297},
  [224] = {.lex_state = 295},
  [225] = {.lex_state = 16},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 295},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 14},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 295},
  [235] = {.lex_state = 295},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 295},
  [238] = {.lex_state = 295},
  [239] = {.lex_state = 295},
  [240] = {.lex_state = 297},
  [241] = {.lex_state = 14},
  [242] = {.lex_state = 295},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 295},
  [246] = {.lex_state = 295},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 293},
  [249] = {.lex_state = 293},
  [250] = {.lex_state = 293},
  [251] = {.lex_state = 14},
  [252] = {.lex_state = 14},
  [253] = {.lex_state = 14},
  [254] = {.lex_state = 717},
  [255] = {.lex_state = 14},
  [256] = {.lex_state = 14},
  [257] = {.lex_state = 295},
  [258] = {.lex_state = 295},
  [259] = {.lex_state = 14},
  [260] = {.lex_state = 14},
  [261] = {.lex_state = 295},
  [262] = {.lex_state = 295},
  [263] = {.lex_state = 293},
  [264] = {.lex_state = 295},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 293},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 293},
  [269] = {.lex_state = 295},
  [270] = {.lex_state = 295},
  [271] = {.lex_state = 295},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 295},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 293},
  [277] = {.lex_state = 293},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 295},
  [281] = {.lex_state = 297},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 295},
  [284] = {.lex_state = 295},
  [285] = {.lex_state = 295},
  [286] = {.lex_state = 718},
  [287] = {.lex_state = 295},
  [288] = {.lex_state = 295},
  [289] = {.lex_state = 14},
  [290] = {.lex_state = 718},
  [291] = {.lex_state = 718},
  [292] = {.lex_state = 295},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 295},
  [296] = {.lex_state = 295},
  [297] = {.lex_state = 293},
  [298] = {.lex_state = 295},
  [299] = {.lex_state = 14},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 295},
  [302] = {.lex_state = 295},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 12},
  [305] = {.lex_state = 297},
  [306] = {.lex_state = 295},
  [307] = {.lex_state = 295},
  [308] = {.lex_state = 67},
  [309] = {.lex_state = 67},
  [310] = {.lex_state = 295},
  [311] = {.lex_state = 295},
  [312] = {.lex_state = 12},
  [313] = {.lex_state = 295},
  [314] = {.lex_state = 297},
  [315] = {.lex_state = 293},
  [316] = {.lex_state = 293},
  [317] = {.lex_state = 718},
  [318] = {.lex_state = 297},
  [319] = {.lex_state = 297},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 293},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 719},
  [325] = {.lex_state = 293},
  [326] = {.lex_state = 293},
  [327] = {.lex_state = 295},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 12},
  [335] = {.lex_state = 295},
  [336] = {.lex_state = 293},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 293},
  [341] = {.lex_state = 295},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 297},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 293},
  [346] = {.lex_state = 293},
  [347] = {.lex_state = 297},
  [348] = {.lex_state = 297},
  [349] = {.lex_state = 297},
  [350] = {.lex_state = 293},
  [351] = {.lex_state = 248},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 297},
  [354] = {.lex_state = 12},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 297},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 297},
  [359] = {.lex_state = 12},
  [360] = {.lex_state = 297},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 293},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 12},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 293},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 12},
  [370] = {.lex_state = 12},
  [371] = {.lex_state = 293},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 14},
  [375] = {.lex_state = 293},
  [376] = {.lex_state = 293},
  [377] = {.lex_state = 297},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 12},
  [380] = {.lex_state = 12},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 293},
  [383] = {.lex_state = 718},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 295},
  [386] = {.lex_state = 295},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 297},
  [389] = {.lex_state = 297},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 293},
  [392] = {.lex_state = 718},
  [393] = {.lex_state = 720},
  [394] = {.lex_state = 720},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 295},
  [397] = {.lex_state = 720},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 720},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 720},
  [406] = {.lex_state = 297},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 293},
  [410] = {.lex_state = 297},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 248},
  [413] = {.lex_state = 720},
  [414] = {.lex_state = 295},
  [415] = {.lex_state = 297},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 295},
  [418] = {.lex_state = 297},
  [419] = {.lex_state = 720},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 297},
  [422] = {.lex_state = 295},
  [423] = {.lex_state = 297},
  [424] = {.lex_state = 297},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 297},
  [428] = {.lex_state = 720},
  [429] = {.lex_state = 297},
  [430] = {.lex_state = 297},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 297},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 293},
  [438] = {.lex_state = 249},
  [439] = {.lex_state = 295},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 720},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 297},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 297},
  [449] = {.lex_state = 297},
  [450] = {.lex_state = 297},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 297},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 12},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 720},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 720},
  [463] = {.lex_state = 12},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 295},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 12},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 297},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 293},
  [476] = {.lex_state = 720},
  [477] = {.lex_state = 295},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 297},
  [480] = {.lex_state = 297},
  [481] = {.lex_state = 720},
  [482] = {.lex_state = 12},
  [483] = {.lex_state = 295},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 293},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 297},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 293},
  [493] = {.lex_state = 293},
  [494] = {.lex_state = 293},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 293},
  [498] = {.lex_state = 297},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 293},
  [501] = {.lex_state = 12},
  [502] = {.lex_state = 293},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 12},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 10},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 293},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 12},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 12},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 293},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 12},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 295},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 250},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 297},
  [534] = {.lex_state = 293},
  [535] = {.lex_state = 248},
  [536] = {.lex_state = 720},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 295},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 293},
  [541] = {.lex_state = 16},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 293},
  [544] = {.lex_state = 297},
  [545] = {.lex_state = 12},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 295},
  [548] = {.lex_state = 12},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 295},
  [551] = {.lex_state = 293},
  [552] = {.lex_state = 293},
  [553] = {.lex_state = 293},
  [554] = {.lex_state = 297},
  [555] = {.lex_state = 293},
  [556] = {.lex_state = 12},
  [557] = {.lex_state = 251},
  [558] = {.lex_state = 295},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 253},
  [561] = {.lex_state = 297},
  [562] = {.lex_state = 293},
  [563] = {.lex_state = 295},
  [564] = {.lex_state = 252},
  [565] = {.lex_state = 254},
  [566] = {.lex_state = 297},
  [567] = {.lex_state = 12},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 295},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 297},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 295},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 293},
  [581] = {.lex_state = 295},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 293},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 255},
  [592] = {.lex_state = 295},
  [593] = {.lex_state = 255},
  [594] = {.lex_state = 293},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 293},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 297},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 297},
  [608] = {.lex_state = 254},
  [609] = {.lex_state = 254},
  [610] = {.lex_state = 293},
  [611] = {.lex_state = 293},
  [612] = {.lex_state = 297},
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
    [sym_source_file] = STATE(602),
    [sym__source_file_verbose] = STATE(601),
    [sym__source_file_plain] = STATE(601),
    [sym_header_info_compile] = STATE(100),
    [sym_header_info] = STATE(466),
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
    STATE(6), 1,
      sym_code_def,
    STATE(10), 1,
      sym_annotation_default,
    STATE(13), 1,
      sym_deprecated,
    STATE(42), 1,
      sym_exceptions,
    STATE(51), 1,
      sym_method_def_verbose_sig,
    STATE(66), 1,
      sym_runtime_visible_annotations,
    STATE(83), 1,
      sym_runtime_visible_type_annotations,
    STATE(93), 1,
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
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(16), 1,
      sym_identifier,
    STATE(44), 1,
      sym_generic_type,
    STATE(88), 1,
      aux_sym_modifiers_repeat1,
    STATE(117), 1,
      sym_modifiers,
    STATE(8), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(505), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(178), 4,
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
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(16), 1,
      sym_identifier,
    STATE(44), 1,
      sym_generic_type,
    STATE(88), 1,
      aux_sym_modifiers_repeat1,
    STATE(117), 1,
      sym_modifiers,
    STATE(7), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(525), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(178), 4,
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
  [191] = 12,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(16), 1,
      sym_identifier,
    STATE(44), 1,
      sym_generic_type,
    STATE(88), 1,
      aux_sym_modifiers_repeat1,
    STATE(117), 1,
      sym_modifiers,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(525), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(178), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(45), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(42), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [250] = 16,
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
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_annotation_default,
    STATE(22), 1,
      sym_deprecated,
    STATE(39), 1,
      sym_exceptions,
    STATE(54), 1,
      sym_method_def_verbose_sig,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(75), 1,
      sym_runtime_visible_type_annotations,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(48), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [317] = 12,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(16), 1,
      sym_identifier,
    STATE(44), 1,
      sym_generic_type,
    STATE(88), 1,
      aux_sym_modifiers_repeat1,
    STATE(117), 1,
      sym_modifiers,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(525), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(178), 4,
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
  [376] = 12,
    ACTIONS(54), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(16), 1,
      sym_identifier,
    STATE(44), 1,
      sym_generic_type,
    STATE(88), 1,
      aux_sym_modifiers_repeat1,
    STATE(117), 1,
      sym_modifiers,
    STATE(8), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(505), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(178), 4,
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
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(16), 1,
      sym_identifier,
    STATE(44), 1,
      sym_generic_type,
    STATE(88), 1,
      aux_sym_modifiers_repeat1,
    STATE(117), 1,
      sym_modifiers,
    STATE(3), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(505), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(178), 4,
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
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_deprecated,
    STATE(39), 1,
      sym_exceptions,
    STATE(54), 1,
      sym_method_def_verbose_sig,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(75), 1,
      sym_runtime_visible_type_annotations,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(48), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
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
    STATE(20), 1,
      sym_deprecated,
    STATE(32), 1,
      sym_exceptions,
    STATE(50), 1,
      sym_method_def_verbose_sig,
    STATE(63), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(92), 1,
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
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_exceptions,
    STATE(54), 1,
      sym_method_def_verbose_sig,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(75), 1,
      sym_runtime_visible_type_annotations,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(48), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [707] = 5,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(35), 1,
      sym_type_arguments,
    ACTIONS(77), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
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
  [748] = 4,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(88), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [787] = 5,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym_type_arguments,
    ACTIONS(92), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
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
  [828] = 4,
    ACTIONS(100), 1,
      anon_sym_line,
    STATE(17), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(98), 8,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [867] = 4,
    ACTIONS(107), 1,
      anon_sym_line,
    STATE(17), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(105), 8,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(103), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [906] = 4,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(113), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(109), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [945] = 12,
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
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_exceptions,
    STATE(56), 1,
      sym_method_def_verbose_sig,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(81), 1,
      sym_runtime_visible_type_annotations,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(115), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1000] = 4,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(19), 1,
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
  [1039] = 12,
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
    STATE(50), 1,
      sym_method_def_verbose_sig,
    STATE(63), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(92), 1,
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
  [1094] = 3,
    ACTIONS(127), 1,
      sym_flag_value,
    ACTIONS(125), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [1130] = 2,
    ACTIONS(131), 10,
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
  [1164] = 7,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(49), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(137), 5,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(133), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1208] = 2,
    ACTIONS(88), 10,
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
  [1242] = 2,
    ACTIONS(143), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(141), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    ACTIONS(147), 10,
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
    ACTIONS(145), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
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
  [1344] = 2,
    ACTIONS(155), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_RPAREN,
      sym_number,
    ACTIONS(153), 20,
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
  [1378] = 2,
    ACTIONS(159), 8,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(157), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1411] = 10,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_method_def_verbose_sig,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(81), 1,
      sym_runtime_visible_type_annotations,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(115), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1460] = 5,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    ACTIONS(163), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
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
  [1499] = 4,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
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
  [1536] = 2,
    ACTIONS(174), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(172), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1569] = 4,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(178), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
    ACTIONS(176), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1606] = 2,
    ACTIONS(182), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(180), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1639] = 2,
    ACTIONS(186), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(184), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1672] = 10,
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
    STATE(50), 1,
      sym_method_def_verbose_sig,
    STATE(63), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(92), 1,
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
  [1721] = 2,
    ACTIONS(190), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(188), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1754] = 2,
    ACTIONS(194), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(192), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1787] = 10,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_method_def_verbose_sig,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(75), 1,
      sym_runtime_visible_type_annotations,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(48), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1836] = 10,
    ACTIONS(11), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_method_def_verbose_sig,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(78), 1,
      sym_runtime_visible_type_annotations,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(196), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1885] = 3,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(77), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
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
  [1920] = 2,
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
  [1952] = 2,
    ACTIONS(167), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [1984] = 2,
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
  [2016] = 2,
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
  [2048] = 4,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(214), 5,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
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
  [2083] = 8,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(81), 1,
      sym_runtime_visible_type_annotations,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(115), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2126] = 8,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(75), 1,
      sym_runtime_visible_type_annotations,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(48), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2169] = 5,
    ACTIONS(220), 1,
      sym_number,
    STATE(556), 1,
      sym__runtime_index,
    STATE(55), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(218), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(216), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2206] = 4,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(163), 5,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
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
  [2241] = 8,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(92), 1,
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
  [2284] = 5,
    ACTIONS(229), 1,
      sym_number,
    STATE(556), 1,
      sym__runtime_index,
    STATE(55), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(227), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(225), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2321] = 8,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(78), 1,
      sym_runtime_visible_type_annotations,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(196), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2364] = 8,
    ACTIONS(17), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_runtime_visible_annotations,
    STATE(82), 1,
      sym_runtime_visible_type_annotations,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(232), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2407] = 2,
    ACTIONS(238), 7,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [2438] = 2,
    ACTIONS(242), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [2468] = 5,
    ACTIONS(248), 1,
      sym_number,
    STATE(612), 1,
      sym__runtime_index,
    ACTIONS(246), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(60), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(244), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2504] = 2,
    ACTIONS(253), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [2534] = 5,
    ACTIONS(259), 1,
      sym_number,
    STATE(612), 1,
      sym__runtime_index,
    ACTIONS(257), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(60), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
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
  [2570] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_runtime_visible_type_annotations,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(115), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2607] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(92), 1,
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
  [2644] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_runtime_visible_type_annotations,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
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
  [2681] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_runtime_visible_type_annotations,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(48), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2718] = 3,
    ACTIONS(269), 1,
      sym_comment,
    ACTIONS(267), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
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
  [2749] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_runtime_visible_type_annotations,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(196), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2786] = 2,
    ACTIONS(273), 5,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(271), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2815] = 6,
    ACTIONS(19), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_runtime_visible_type_annotations,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(232), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2852] = 2,
    ACTIONS(277), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      sym_number,
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
  [2880] = 4,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      anon_sym_parameter,
    STATE(73), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
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
  [2912] = 4,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      anon_sym_parameter,
    STATE(73), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
    ACTIONS(285), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2944] = 2,
    ACTIONS(294), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(292), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2972] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
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
  [3003] = 2,
    ACTIONS(298), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      sym_number,
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
  [3030] = 2,
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
  [3057] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(232), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3088] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(115), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3119] = 2,
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
  [3146] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(196), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3177] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
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
  [3208] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(48), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3239] = 4,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_runtime_visible_paramter_annotations,
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
  [3270] = 2,
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
  [3297] = 2,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 20,
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
  [3323] = 2,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 20,
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
  [3349] = 4,
    ACTIONS(326), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(89), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(324), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(328), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3379] = 4,
    ACTIONS(332), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(89), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(330), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(334), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3409] = 2,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
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
  [3434] = 2,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3459] = 2,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3484] = 2,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3509] = 2,
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
  [3534] = 2,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3559] = 2,
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
  [3584] = 2,
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
  [3609] = 2,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
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
  [3634] = 2,
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
  [3659] = 7,
    ACTIONS(349), 1,
      sym_interface_keyword,
    ACTIONS(353), 1,
      anon_sym_class,
    STATE(110), 1,
      aux_sym_modifiers_repeat1,
    STATE(319), 1,
      sym_modifiers,
    STATE(449), 1,
      sym_class_keyword,
    STATE(574), 2,
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
  [3693] = 8,
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
    STATE(285), 8,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
      sym__constant_pool_item_type_int,
  [3728] = 7,
    ACTIONS(353), 1,
      anon_sym_class,
    ACTIONS(369), 1,
      sym_interface_keyword,
    STATE(110), 1,
      aux_sym_modifiers_repeat1,
    STATE(360), 1,
      sym_modifiers,
    STATE(422), 1,
      sym_class_info_def,
    STATE(430), 1,
      sym_class_keyword,
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
  [3761] = 9,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(373), 1,
      anon_sym_GT,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(321), 1,
      sym_wildcard,
    STATE(236), 4,
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
  [3797] = 9,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_GT,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(373), 1,
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
  [3833] = 9,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_GT,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(372), 1,
      sym_wildcard,
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
  [3869] = 8,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(375), 1,
      anon_sym_QMARK,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(454), 1,
      sym_wildcard,
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
  [3902] = 3,
    STATE(107), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(332), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(383), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3925] = 2,
    ACTIONS(129), 1,
      anon_sym_DOT,
    ACTIONS(131), 15,
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
  [3946] = 5,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      aux_sym_inner_classes_repeat1,
    STATE(110), 1,
      aux_sym_modifiers_repeat1,
    STATE(401), 1,
      sym_modifiers,
    ACTIONS(388), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3973] = 3,
    STATE(107), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(326), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(391), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3996] = 8,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(355), 1,
      sym_vararg,
    STATE(176), 4,
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
  [4029] = 5,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      aux_sym_inner_classes_repeat1,
    STATE(110), 1,
      aux_sym_modifiers_repeat1,
    STATE(401), 1,
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
  [4056] = 4,
    STATE(110), 1,
      aux_sym_modifiers_repeat1,
    STATE(112), 1,
      aux_sym_inner_classes_repeat1,
    STATE(401), 1,
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
  [4080] = 7,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(445), 1,
      sym_vararg,
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
  [4110] = 7,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(289), 1,
      sym_interface_type_list,
    STATE(233), 4,
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
  [4140] = 7,
    ACTIONS(397), 1,
      sym__identifier,
    STATE(152), 1,
      sym_scoped_type_identifier,
    STATE(156), 1,
      sym_identifier,
    STATE(193), 1,
      sym_generic_type,
    STATE(289), 1,
      sym_interface_type_list,
    STATE(162), 4,
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
  [4170] = 7,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(401), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(16), 1,
      sym_identifier,
    STATE(44), 1,
      sym_generic_type,
    STATE(210), 4,
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
  [4200] = 6,
    ACTIONS(27), 1,
      sym__identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(16), 1,
      sym_identifier,
    STATE(44), 1,
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
  [4227] = 6,
    ACTIONS(397), 1,
      sym__identifier,
    STATE(152), 1,
      sym_scoped_type_identifier,
    STATE(156), 1,
      sym_identifier,
    STATE(193), 1,
      sym_generic_type,
    STATE(182), 4,
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
  [4254] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(273), 4,
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
  [4281] = 1,
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
  [4298] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(222), 4,
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
  [4325] = 6,
    ACTIONS(27), 1,
      sym__identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(16), 1,
      sym_identifier,
    STATE(44), 1,
      sym_generic_type,
    STATE(33), 4,
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
  [4352] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(179), 4,
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
  [4379] = 6,
    ACTIONS(397), 1,
      sym__identifier,
    STATE(152), 1,
      sym_scoped_type_identifier,
    STATE(156), 1,
      sym_identifier,
    STATE(193), 1,
      sym_generic_type,
    STATE(181), 4,
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
  [4406] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(243), 4,
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
  [4433] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
    STATE(244), 4,
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
  [4460] = 1,
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
  [4477] = 6,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(142), 1,
      sym_generic_type,
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
  [4504] = 1,
    ACTIONS(407), 13,
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
  [4520] = 11,
    ACTIONS(409), 1,
      anon_sym_extends,
    ACTIONS(411), 1,
      anon_sym_implements,
    ACTIONS(413), 1,
      anon_sym_LT,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(139), 1,
      sym_type_parameters,
    STATE(158), 1,
      sym_superclass,
    STATE(204), 1,
      sym_super_interfaces,
    STATE(216), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4556] = 11,
    ACTIONS(409), 1,
      anon_sym_extends,
    ACTIONS(411), 1,
      anon_sym_implements,
    ACTIONS(413), 1,
      anon_sym_LT,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(421), 1,
      anon_sym_Constantpool_COLON,
    STATE(137), 1,
      sym_type_parameters,
    STATE(150), 1,
      sym_superclass,
    STATE(189), 1,
      sym_super_interfaces,
    STATE(214), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4592] = 2,
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
  [4609] = 4,
    ACTIONS(423), 1,
      anon_sym_LT,
    ACTIONS(425), 1,
      anon_sym_DOT,
    STATE(149), 1,
      sym_type_arguments,
    ACTIONS(92), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4630] = 4,
    ACTIONS(423), 1,
      anon_sym_LT,
    ACTIONS(427), 1,
      anon_sym_DOT,
    STATE(148), 1,
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
  [4651] = 2,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(151), 10,
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
  [4667] = 9,
    ACTIONS(409), 1,
      anon_sym_extends,
    ACTIONS(411), 1,
      anon_sym_implements,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(158), 1,
      sym_superclass,
    STATE(204), 1,
      sym_super_interfaces,
    STATE(216), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4697] = 11,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(431), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(433), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(435), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    STATE(151), 1,
      sym_footer_runtime_visible_annotations,
    STATE(205), 1,
      sym_runtime_visible_type_annotations,
    STATE(277), 1,
      sym_nested_members,
    STATE(382), 1,
      sym_nest_host,
    STATE(549), 1,
      sym_inner_classes,
  [4731] = 9,
    ACTIONS(409), 1,
      anon_sym_extends,
    ACTIONS(411), 1,
      anon_sym_implements,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(441), 1,
      anon_sym_Constantpool_COLON,
    STATE(154), 1,
      sym_superclass,
    STATE(190), 1,
      sym_super_interfaces,
    STATE(191), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4761] = 11,
    ACTIONS(431), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(433), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(435), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_footer_runtime_visible_annotations,
    STATE(215), 1,
      sym_runtime_visible_type_annotations,
    STATE(276), 1,
      sym_nested_members,
    STATE(336), 1,
      sym_nest_host,
    STATE(489), 1,
      sym_inner_classes,
  [4795] = 2,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(147), 10,
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
  [4811] = 2,
    ACTIONS(427), 1,
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
  [4826] = 2,
    ACTIONS(184), 1,
      anon_sym_DOT,
    ACTIONS(186), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4841] = 2,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(194), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4856] = 3,
    ACTIONS(445), 1,
      anon_sym_LBRACK,
    STATE(145), 1,
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
  [4873] = 3,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    STATE(145), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(178), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [4890] = 2,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(182), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4905] = 2,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(174), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4920] = 2,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(190), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4935] = 7,
    ACTIONS(411), 1,
      anon_sym_implements,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(450), 1,
      anon_sym_Constantpool_COLON,
    STATE(195), 1,
      sym_super_interfaces,
    STATE(196), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4959] = 9,
    ACTIONS(433), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(435), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    STATE(213), 1,
      sym_runtime_visible_type_annotations,
    STATE(268), 1,
      sym_nested_members,
    STATE(350), 1,
      sym_nest_host,
    STATE(598), 1,
      sym_inner_classes,
  [4987] = 5,
    ACTIONS(454), 1,
      anon_sym_LT,
    ACTIONS(456), 1,
      anon_sym_DOT,
    STATE(199), 1,
      sym_type_arguments,
    ACTIONS(75), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5007] = 2,
    ACTIONS(129), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(131), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5021] = 7,
    ACTIONS(411), 1,
      anon_sym_implements,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(458), 1,
      anon_sym_Constantpool_COLON,
    STATE(206), 1,
      sym_super_interfaces,
    STATE(209), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5045] = 1,
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
  [5057] = 5,
    ACTIONS(454), 1,
      anon_sym_LT,
    ACTIONS(460), 1,
      anon_sym_DOT,
    STATE(200), 1,
      sym_type_arguments,
    ACTIONS(90), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(92), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5077] = 9,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(435), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    STATE(205), 1,
      sym_runtime_visible_type_annotations,
    STATE(277), 1,
      sym_nested_members,
    STATE(382), 1,
      sym_nest_host,
    STATE(549), 1,
      sym_inner_classes,
  [5105] = 7,
    ACTIONS(411), 1,
      anon_sym_implements,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(462), 1,
      anon_sym_Constantpool_COLON,
    STATE(186), 1,
      sym_super_interfaces,
    STATE(187), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5129] = 1,
    ACTIONS(167), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5141] = 1,
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
  [5153] = 5,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(330), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(452), 1,
      sym_runtime_annotation_element_value,
    STATE(453), 2,
      sym_runtime_annotation_element_value_array,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(466), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [5173] = 7,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_LBRACK,
    ACTIONS(474), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(198), 1,
      aux_sym_dimensions_repeat1,
    STATE(231), 1,
      sym_dimensions,
    STATE(272), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(470), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5196] = 3,
    ACTIONS(478), 1,
      sym_number,
    STATE(164), 2,
      sym_footer_runtime_visible_annotation,
      aux_sym_footer_runtime_visible_annotations_repeat1,
    ACTIONS(476), 5,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5211] = 3,
    ACTIONS(482), 1,
      sym_number,
    STATE(164), 2,
      sym_footer_runtime_visible_annotation,
      aux_sym_footer_runtime_visible_annotations_repeat1,
    ACTIONS(480), 5,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5226] = 4,
    ACTIONS(248), 1,
      sym_number,
    STATE(554), 1,
      sym__runtime_index,
    STATE(165), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(246), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5243] = 8,
    ACTIONS(485), 1,
      anon_sym_extends,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      anon_sym_LT,
    STATE(234), 1,
      sym_type_parameters,
    STATE(296), 1,
      sym_superclass,
    STATE(435), 1,
      sym_super_interfaces,
    STATE(512), 1,
      sym_class_def_plain_body,
  [5268] = 8,
    ACTIONS(485), 1,
      anon_sym_extends,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      anon_sym_LT,
    STATE(238), 1,
      sym_type_parameters,
    STATE(295), 1,
      sym_superclass,
    STATE(431), 1,
      sym_super_interfaces,
    STATE(515), 1,
      sym_class_def_plain_body,
  [5293] = 2,
    ACTIONS(145), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(147), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5306] = 4,
    ACTIONS(259), 1,
      sym_number,
    STATE(554), 1,
      sym__runtime_index,
    STATE(165), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(257), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5323] = 8,
    ACTIONS(485), 1,
      anon_sym_extends,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      anon_sym_LT,
    STATE(237), 1,
      sym_type_parameters,
    STATE(280), 1,
      sym_superclass,
    STATE(399), 1,
      sym_super_interfaces,
    STATE(539), 1,
      sym_class_def_plain_body,
  [5348] = 2,
    ACTIONS(149), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(151), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5361] = 7,
    ACTIONS(493), 1,
      anon_sym_LBRACE,
    ACTIONS(495), 1,
      anon_sym_Signature_COLON,
    ACTIONS(497), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(140), 1,
      sym_source_file_def,
    STATE(417), 1,
      sym_signature,
    STATE(487), 1,
      sym_footer,
    STATE(270), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [5384] = 7,
    ACTIONS(493), 1,
      anon_sym_LBRACE,
    ACTIONS(495), 1,
      anon_sym_Signature_COLON,
    ACTIONS(497), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(140), 1,
      sym_source_file_def,
    STATE(417), 1,
      sym_signature,
    STATE(530), 1,
      sym_footer,
    STATE(172), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [5407] = 8,
    ACTIONS(485), 1,
      anon_sym_extends,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      anon_sym_LT,
    STATE(242), 1,
      sym_type_parameters,
    STATE(284), 1,
      sym_superclass,
    STATE(395), 1,
      sym_super_interfaces,
    STATE(542), 1,
      sym_class_def_plain_body,
  [5432] = 1,
    ACTIONS(499), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [5443] = 7,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    STATE(342), 1,
      aux_sym_args_repeat1,
  [5465] = 3,
    ACTIONS(371), 1,
      sym__identifier,
    ACTIONS(507), 2,
      anon_sym_open,
      anon_sym_module,
    STATE(320), 4,
      sym_identifier,
      sym_scoped_identifier,
      sym__name,
      sym__reserved_identifier,
  [5479] = 7,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(509), 1,
      sym__identifier,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(343), 1,
      sym_args,
    STATE(470), 1,
      sym_identifier,
  [5501] = 6,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      anon_sym_AMP,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    STATE(303), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(513), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5521] = 4,
    ACTIONS(519), 1,
      anon_sym_POUND,
    STATE(533), 1,
      sym__hash_number,
    STATE(192), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(517), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5537] = 5,
    ACTIONS(161), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(472), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      aux_sym_dimensions_repeat1,
    STATE(231), 1,
      sym_dimensions,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5555] = 5,
    ACTIONS(472), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      aux_sym_dimensions_repeat1,
    STATE(231), 1,
      sym_dimensions,
    ACTIONS(521), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(523), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5573] = 2,
    ACTIONS(192), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(194), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5585] = 1,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
  [5595] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(525), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5613] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(527), 1,
      anon_sym_Constantpool_COLON,
    STATE(202), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5631] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(529), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5649] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(531), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5667] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(533), 1,
      anon_sym_Constantpool_COLON,
    STATE(201), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5685] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(535), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5703] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(537), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5721] = 4,
    ACTIONS(519), 1,
      anon_sym_POUND,
    STATE(533), 1,
      sym__hash_number,
    STATE(203), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(539), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5737] = 3,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(75), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5751] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(541), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5769] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(543), 1,
      anon_sym_Constantpool_COLON,
    STATE(185), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5787] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(545), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5805] = 1,
    ACTIONS(547), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [5815] = 4,
    ACTIONS(472), 1,
      anon_sym_LBRACK,
    STATE(208), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(176), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(178), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5831] = 2,
    ACTIONS(172), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(174), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5843] = 2,
    ACTIONS(188), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(190), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5855] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(549), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5873] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(551), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5891] = 4,
    ACTIONS(555), 1,
      anon_sym_POUND,
    STATE(533), 1,
      sym__hash_number,
    STATE(203), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(553), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5907] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(558), 1,
      anon_sym_Constantpool_COLON,
    STATE(188), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5925] = 7,
    ACTIONS(435), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    STATE(266), 1,
      sym_nested_members,
    STATE(367), 1,
      sym_nest_host,
    STATE(603), 1,
      sym_inner_classes,
  [5947] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(562), 1,
      anon_sym_Constantpool_COLON,
    STATE(194), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5965] = 5,
    ACTIONS(564), 1,
      anon_sym_flags_COLON,
    ACTIONS(567), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(569), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5983] = 4,
    ACTIONS(572), 1,
      anon_sym_LBRACK,
    STATE(208), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(165), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(167), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5999] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(575), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6017] = 7,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(509), 1,
      sym__identifier,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(357), 1,
      sym_identifier,
    STATE(358), 1,
      sym_args,
  [6039] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(577), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6057] = 2,
    ACTIONS(180), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(182), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [6069] = 7,
    ACTIONS(435), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    STATE(249), 1,
      sym_nested_members,
    STATE(325), 1,
      sym_nest_host,
    STATE(585), 1,
      sym_inner_classes,
  [6091] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(417), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6109] = 7,
    ACTIONS(435), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    STATE(248), 1,
      sym_nested_members,
    STATE(375), 1,
      sym_nest_host,
    STATE(559), 1,
      sym_inner_classes,
  [6131] = 5,
    ACTIONS(415), 1,
      anon_sym_flags_COLON,
    ACTIONS(419), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(441), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(374), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6149] = 2,
    ACTIONS(184), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(186), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [6161] = 5,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(505), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6178] = 1,
    ACTIONS(585), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6187] = 3,
    ACTIONS(589), 1,
      sym__identifier,
    STATE(223), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(587), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6200] = 3,
    STATE(330), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(461), 1,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(466), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [6213] = 6,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    STATE(339), 1,
      aux_sym_interface_type_list_repeat1,
  [6232] = 3,
    ACTIONS(595), 1,
      sym__identifier,
    STATE(223), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(593), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6245] = 1,
    ACTIONS(598), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6254] = 5,
    ACTIONS(600), 1,
      anon_sym_extends,
    ACTIONS(604), 1,
      sym_super,
    STATE(127), 1,
      sym_extends,
    STATE(474), 1,
      sym__wildcard_bounds,
    ACTIONS(602), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6271] = 6,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_GT,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    STATE(364), 1,
      aux_sym_type_arguments_repeat1,
  [6290] = 2,
    ACTIONS(165), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(167), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6301] = 6,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_GT,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    STATE(387), 1,
      aux_sym_type_arguments_repeat1,
  [6320] = 1,
    ACTIONS(612), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6329] = 4,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [6344] = 2,
    ACTIONS(208), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(210), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6355] = 5,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(267), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(616), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6372] = 6,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    STATE(352), 1,
      aux_sym_interface_type_list_repeat1,
  [6391] = 6,
    ACTIONS(485), 1,
      anon_sym_extends,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(292), 1,
      sym_superclass,
    STATE(420), 1,
      sym_super_interfaces,
    STATE(527), 1,
      sym_class_def_plain_body,
  [6410] = 2,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(622), 5,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [6421] = 6,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_GT,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    STATE(337), 1,
      aux_sym_type_arguments_repeat1,
  [6440] = 6,
    ACTIONS(485), 1,
      anon_sym_extends,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(296), 1,
      sym_superclass,
    STATE(435), 1,
      sym_super_interfaces,
    STATE(512), 1,
      sym_class_def_plain_body,
  [6459] = 6,
    ACTIONS(485), 1,
      anon_sym_extends,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(307), 1,
      sym_superclass,
    STATE(442), 1,
      sym_super_interfaces,
    STATE(513), 1,
      sym_class_def_plain_body,
  [6478] = 1,
    ACTIONS(628), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6487] = 3,
    STATE(330), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(368), 1,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(466), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [6500] = 2,
    ACTIONS(204), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(206), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6511] = 6,
    ACTIONS(485), 1,
      anon_sym_extends,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(295), 1,
      sym_superclass,
    STATE(431), 1,
      sym_super_interfaces,
    STATE(515), 1,
      sym_class_def_plain_body,
  [6530] = 4,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    ACTIONS(630), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [6545] = 4,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6559] = 2,
    ACTIONS(636), 1,
      sym_comment,
    ACTIONS(634), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6569] = 4,
    ACTIONS(600), 1,
      anon_sym_extends,
    STATE(124), 1,
      sym_extends,
    STATE(457), 1,
      sym_type_bound,
    ACTIONS(638), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6583] = 4,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6597] = 5,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(371), 1,
      sym_nest_host,
    STATE(604), 1,
      sym_inner_classes,
  [6613] = 5,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
    STATE(362), 1,
      sym_nest_host,
    STATE(486), 1,
      sym_inner_classes,
  [6629] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      sym_number,
    STATE(263), 1,
      aux_sym_code_info_repeat1,
    STATE(288), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [6643] = 3,
    ACTIONS(652), 1,
      sym_comment,
    ACTIONS(654), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(650), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6655] = 4,
    ACTIONS(83), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(88), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6669] = 4,
    ACTIONS(109), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(113), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6683] = 5,
    ACTIONS(661), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(663), 1,
      sym__path_segment,
    ACTIONS(665), 1,
      anon_sym_SLASH,
    STATE(577), 1,
      sym__rest_of_the_line,
    STATE(581), 1,
      sym_file_path,
  [6699] = 4,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(256), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(667), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6713] = 4,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(256), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(674), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6727] = 2,
    ACTIONS(680), 1,
      sym_comment,
    ACTIONS(678), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6737] = 1,
    ACTIONS(302), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6745] = 2,
    ACTIONS(684), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(682), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [6755] = 4,
    ACTIONS(119), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(121), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6769] = 1,
    ACTIONS(306), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6777] = 2,
    ACTIONS(688), 1,
      sym_comment,
    ACTIONS(686), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6787] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      sym_number,
    STATE(345), 1,
      aux_sym_code_info_repeat1,
    STATE(298), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [6801] = 2,
    ACTIONS(692), 1,
      sym_comment,
    ACTIONS(690), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6811] = 4,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(255), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(694), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6825] = 5,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(698), 1,
      ts_builtin_sym_end,
    STATE(322), 1,
      sym_nest_host,
    STATE(589), 1,
      sym_inner_classes,
  [6841] = 4,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(256), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(694), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6855] = 5,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(700), 1,
      ts_builtin_sym_end,
    STATE(326), 1,
      sym_nest_host,
    STATE(588), 1,
      sym_inner_classes,
  [6871] = 1,
    ACTIONS(298), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6879] = 3,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    ACTIONS(705), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(270), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [6891] = 1,
    ACTIONS(314), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6899] = 4,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(274), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(707), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6913] = 4,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym_dimensions_repeat1,
    STATE(160), 1,
      sym_dimensions,
    ACTIONS(523), 2,
      anon_sym_implements,
      anon_sym_LBRACE,
  [6927] = 4,
    ACTIONS(161), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(163), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6941] = 2,
    ACTIONS(716), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(714), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [6951] = 5,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    STATE(382), 1,
      sym_nest_host,
    STATE(549), 1,
      sym_inner_classes,
  [6967] = 5,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(439), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    STATE(350), 1,
      sym_nest_host,
    STATE(598), 1,
      sym_inner_classes,
  [6983] = 2,
    ACTIONS(83), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(88), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6992] = 4,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_EQ,
    ACTIONS(722), 1,
      sym__endl,
    STATE(370), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7005] = 4,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(436), 1,
      sym_super_interfaces,
    STATE(510), 1,
      sym_class_def_plain_body,
  [7018] = 4,
    ACTIONS(509), 1,
      sym__identifier,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_runtime_annotation_args_repeat1,
    STATE(494), 1,
      sym_identifier,
  [7031] = 2,
    ACTIONS(726), 1,
      anon_sym_DOT,
    ACTIONS(622), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7040] = 1,
    ACTIONS(728), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7047] = 4,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(425), 1,
      sym_super_interfaces,
    STATE(520), 1,
      sym_class_def_plain_body,
  [7060] = 1,
    ACTIONS(730), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7067] = 4,
    ACTIONS(661), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(732), 1,
      anon_sym_SLASH,
    STATE(383), 1,
      aux_sym_file_path_repeat1,
    STATE(528), 1,
      sym__rest_of_the_line,
  [7080] = 1,
    ACTIONS(734), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7087] = 3,
    ACTIONS(648), 1,
      sym_number,
    ACTIONS(736), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(306), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7098] = 2,
    ACTIONS(740), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(738), 3,
      anon_sym_LBRACE,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7107] = 4,
    ACTIONS(661), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(732), 1,
      anon_sym_SLASH,
    STATE(286), 1,
      aux_sym_file_path_repeat1,
    STATE(550), 1,
      sym__rest_of_the_line,
  [7120] = 4,
    ACTIONS(661), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(732), 1,
      anon_sym_SLASH,
    STATE(383), 1,
      aux_sym_file_path_repeat1,
    STATE(550), 1,
      sym__rest_of_the_line,
  [7133] = 4,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(455), 1,
      sym_super_interfaces,
    STATE(586), 1,
      sym_class_def_plain_body,
  [7146] = 4,
    ACTIONS(519), 1,
      anon_sym_POUND,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_footer_runtime_visible_annotation_element_arg,
    STATE(544), 1,
      sym__hash_number,
  [7159] = 3,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(163), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [7170] = 4,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(446), 1,
      sym_super_interfaces,
    STATE(507), 1,
      sym_class_def_plain_body,
  [7183] = 4,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(433), 1,
      sym_super_interfaces,
    STATE(521), 1,
      sym_class_def_plain_body,
  [7196] = 3,
    ACTIONS(220), 1,
      sym_number,
    STATE(556), 1,
      sym__runtime_index,
    STATE(52), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
  [7207] = 3,
    ACTIONS(648), 1,
      sym_number,
    ACTIONS(747), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(306), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7218] = 2,
    ACTIONS(751), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(749), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7227] = 3,
    ACTIONS(753), 1,
      anon_sym_AMP,
    STATE(300), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(630), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7238] = 1,
    ACTIONS(756), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7245] = 1,
    ACTIONS(758), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7252] = 3,
    ACTIONS(515), 1,
      anon_sym_AMP,
    STATE(300), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(760), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7263] = 4,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_EQ,
    ACTIONS(764), 1,
      sym__endl,
    STATE(359), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7276] = 4,
    ACTIONS(766), 1,
      sym__identifier,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_runtime_annotation_args_repeat1,
    STATE(494), 1,
      sym_identifier,
  [7289] = 3,
    ACTIONS(771), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(773), 1,
      sym_number,
    STATE(306), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7300] = 4,
    ACTIONS(487), 1,
      anon_sym_implements,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(443), 1,
      sym_super_interfaces,
    STATE(573), 1,
      sym_class_def_plain_body,
  [7313] = 3,
    ACTIONS(123), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(776), 1,
      sym_flag_value,
    ACTIONS(125), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7324] = 2,
    ACTIONS(141), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(143), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7333] = 1,
    ACTIONS(778), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7340] = 1,
    ACTIONS(780), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7347] = 4,
    ACTIONS(782), 1,
      anon_sym_POUND,
    ACTIONS(784), 1,
      sym_number,
    ACTIONS(786), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym__endl,
  [7360] = 1,
    ACTIONS(790), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7367] = 2,
    ACTIONS(129), 1,
      sym__identifier,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7376] = 3,
    ACTIONS(259), 1,
      sym_number,
    STATE(554), 1,
      sym__runtime_index,
    STATE(169), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
  [7387] = 3,
    ACTIONS(259), 1,
      sym_number,
    STATE(612), 1,
      sym__runtime_index,
    STATE(62), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
  [7398] = 4,
    ACTIONS(661), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(732), 1,
      anon_sym_SLASH,
    STATE(291), 1,
      aux_sym_file_path_repeat1,
    STATE(563), 1,
      sym__rest_of_the_line,
  [7411] = 4,
    ACTIONS(509), 1,
      sym__identifier,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      aux_sym_runtime_annotation_args_repeat1,
    STATE(494), 1,
      sym_identifier,
  [7424] = 3,
    ACTIONS(353), 1,
      anon_sym_class,
    ACTIONS(794), 1,
      sym_interface_keyword,
    STATE(415), 1,
      sym_class_keyword,
  [7434] = 3,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      anon_sym_DOT,
    STATE(239), 1,
      sym_runtime_annotation_args,
  [7444] = 3,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_GT,
    STATE(337), 1,
      aux_sym_type_arguments_repeat1,
  [7454] = 3,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(800), 1,
      ts_builtin_sym_end,
    STATE(569), 1,
      sym_inner_classes,
  [7464] = 3,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    ACTIONS(804), 1,
      anon_sym_GT,
    STATE(344), 1,
      aux_sym_type_parameters_repeat1,
  [7474] = 3,
    ACTIONS(661), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(806), 1,
      sym__path_segment,
    STATE(563), 1,
      sym__rest_of_the_line,
  [7484] = 3,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
    STATE(486), 1,
      sym_inner_classes,
  [7494] = 3,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(808), 1,
      ts_builtin_sym_end,
    STATE(568), 1,
      sym_inner_classes,
  [7504] = 1,
    ACTIONS(716), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [7510] = 3,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_GT,
    STATE(323), 1,
      aux_sym_type_parameters_repeat1,
  [7520] = 3,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_GT,
    STATE(344), 1,
      aux_sym_type_parameters_repeat1,
  [7530] = 3,
    ACTIONS(519), 1,
      anon_sym_POUND,
    STATE(282), 1,
      sym__hash_number,
    STATE(384), 1,
      sym_ref_const_pool_item,
  [7540] = 3,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [7550] = 3,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_footer_runtime_visible_annotation_element_args_repeat1,
  [7560] = 3,
    ACTIONS(640), 1,
      anon_sym_GT,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_type_arguments_repeat1,
  [7570] = 3,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_EQ,
    ACTIONS(831), 1,
      sym__endl,
  [7580] = 1,
    ACTIONS(833), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7586] = 3,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    STATE(549), 1,
      sym_inner_classes,
  [7596] = 3,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_GT,
    STATE(333), 1,
      aux_sym_type_arguments_repeat1,
  [7606] = 3,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(837), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_args_repeat1,
  [7616] = 3,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_interface_type_list_repeat1,
  [7626] = 3,
    ACTIONS(519), 1,
      anon_sym_POUND,
    ACTIONS(840), 1,
      sym_number,
    STATE(251), 1,
      sym__hash_number,
  [7636] = 1,
    ACTIONS(684), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [7642] = 3,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      aux_sym_args_repeat1,
  [7652] = 3,
    ACTIONS(844), 1,
      anon_sym_SEMI,
    ACTIONS(846), 1,
      anon_sym_throws,
    STATE(570), 1,
      sym_method_throws,
  [7662] = 3,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      anon_sym_GT,
    STATE(344), 1,
      aux_sym_type_parameters_repeat1,
  [7672] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      sym_number,
    STATE(345), 1,
      aux_sym_code_info_repeat1,
  [7682] = 3,
    ACTIONS(220), 1,
      sym_number,
    STATE(87), 1,
      sym_runtime_visible_parameter_annotation_param,
    STATE(501), 1,
      sym__runtime_index,
  [7692] = 2,
    STATE(61), 1,
      sym_boolean_literal,
    ACTIONS(858), 2,
      anon_sym_true,
      anon_sym_false,
  [7700] = 2,
    ACTIONS(860), 1,
      sym__identifier,
    STATE(220), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [7708] = 2,
    ACTIONS(862), 1,
      anon_sym_parameter,
    STATE(72), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
  [7716] = 3,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(700), 1,
      ts_builtin_sym_end,
    STATE(588), 1,
      sym_inner_classes,
  [7726] = 3,
    ACTIONS(864), 1,
      aux_sym_code_info_stat_token1,
    STATE(250), 1,
      sym_code_info_stat,
    STATE(396), 1,
      sym_code_info,
  [7736] = 3,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_LBRACE,
    STATE(294), 1,
      aux_sym_interface_type_list_repeat1,
  [7746] = 3,
    ACTIONS(846), 1,
      anon_sym_throws,
    ACTIONS(866), 1,
      anon_sym_SEMI,
    STATE(576), 1,
      sym_method_throws,
  [7756] = 3,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      sym__endl,
    STATE(379), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7766] = 3,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      aux_sym_args_repeat1,
  [7776] = 3,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(246), 1,
      sym_identifier,
    STATE(432), 1,
      sym_type_parameter,
  [7786] = 3,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(870), 1,
      anon_sym_SEMI,
    STATE(353), 1,
      sym_args,
  [7796] = 3,
    ACTIONS(846), 1,
      anon_sym_throws,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    STATE(597), 1,
      sym_method_throws,
  [7806] = 3,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      sym__endl,
    STATE(379), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7816] = 3,
    ACTIONS(353), 1,
      anon_sym_class,
    ACTIONS(876), 1,
      sym_interface_keyword,
    STATE(406), 1,
      sym_class_keyword,
  [7826] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_footer_runtime_visible_annotation_element_args_repeat1,
  [7836] = 3,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(882), 1,
      ts_builtin_sym_end,
    STATE(546), 1,
      sym_inner_classes,
  [7846] = 3,
    ACTIONS(519), 1,
      anon_sym_POUND,
    STATE(447), 1,
      sym_footer_runtime_visible_annotation_element_arg,
    STATE(544), 1,
      sym__hash_number,
  [7856] = 3,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_GT,
    STATE(333), 1,
      aux_sym_type_arguments_repeat1,
  [7866] = 3,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      sym__endl,
    STATE(369), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7876] = 3,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_GT,
    STATE(329), 1,
      aux_sym_type_parameters_repeat1,
  [7886] = 3,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(698), 1,
      ts_builtin_sym_end,
    STATE(589), 1,
      sym_inner_classes,
  [7896] = 3,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
    STATE(381), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [7906] = 3,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      sym__endl,
    STATE(379), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7916] = 3,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      sym__endl,
    STATE(379), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7926] = 3,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(898), 1,
      ts_builtin_sym_end,
    STATE(582), 1,
      sym_inner_classes,
  [7936] = 3,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_GT,
    STATE(387), 1,
      aux_sym_type_arguments_repeat1,
  [7946] = 3,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_GT,
    STATE(364), 1,
      aux_sym_type_arguments_repeat1,
  [7956] = 2,
    ACTIONS(902), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(900), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7964] = 3,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(604), 1,
      sym_inner_classes,
  [7974] = 3,
    ACTIONS(519), 1,
      anon_sym_POUND,
    ACTIONS(904), 1,
      sym_number,
    STATE(232), 1,
      sym__hash_number,
  [7984] = 2,
    ACTIONS(906), 1,
      anon_sym_line,
    STATE(18), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [7992] = 3,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(235), 1,
      sym__hash_number,
    STATE(264), 1,
      sym_ref_const_pool_item,
  [8002] = 3,
    ACTIONS(910), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      sym__endl,
    STATE(379), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8012] = 3,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      sym__endl,
    STATE(354), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8022] = 3,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [8032] = 3,
    ACTIONS(437), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    STATE(598), 1,
      sym_inner_classes,
  [8042] = 3,
    ACTIONS(919), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(921), 1,
      anon_sym_SLASH,
    STATE(383), 1,
      aux_sym_file_path_repeat1,
  [8052] = 1,
    ACTIONS(924), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8058] = 1,
    ACTIONS(926), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [8064] = 3,
    ACTIONS(928), 1,
      anon_sym_descriptor_COLON,
    STATE(97), 1,
      sym__method_def_verbose,
    STATE(477), 1,
      sym_descriptor_def,
  [8074] = 3,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_GT,
    STATE(333), 1,
      aux_sym_type_arguments_repeat1,
  [8084] = 3,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(246), 1,
      sym_identifier,
    STATE(366), 1,
      sym_type_parameter,
  [8094] = 3,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(246), 1,
      sym_identifier,
    STATE(328), 1,
      sym_type_parameter,
  [8104] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_footer_runtime_visible_annotation_element_args_repeat1,
  [8114] = 2,
    ACTIONS(478), 1,
      sym_number,
    STATE(163), 2,
      sym_footer_runtime_visible_annotation,
      aux_sym_footer_runtime_visible_annotations_repeat1,
  [8122] = 1,
    ACTIONS(919), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [8127] = 2,
    ACTIONS(934), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(85), 1,
      sym__rest_of_the_line,
  [8134] = 2,
    ACTIONS(934), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(77), 1,
      sym__rest_of_the_line,
  [8141] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(519), 1,
      sym_class_def_plain_body,
  [8148] = 2,
    ACTIONS(936), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(45), 1,
      sym_line_number_table_def,
  [8155] = 2,
    ACTIONS(934), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(80), 1,
      sym__rest_of_the_line,
  [8162] = 2,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(594), 1,
      sym__hash_number,
  [8169] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(509), 1,
      sym_class_def_plain_body,
  [8176] = 2,
    ACTIONS(938), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(261), 1,
      sym__rest_of_the_line,
  [8183] = 2,
    ACTIONS(519), 1,
      anon_sym_POUND,
    STATE(607), 1,
      sym__hash_number,
  [8190] = 2,
    ACTIONS(519), 1,
      anon_sym_POUND,
    STATE(517), 1,
      sym__hash_number,
  [8197] = 2,
    ACTIONS(519), 1,
      anon_sym_POUND,
    STATE(605), 1,
      sym__hash_number,
  [8204] = 2,
    ACTIONS(940), 1,
      anon_sym_POUND,
    STATE(516), 1,
      sym__hash_number,
  [8211] = 2,
    ACTIONS(934), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(71), 1,
      sym__rest_of_the_line,
  [8218] = 2,
    ACTIONS(942), 1,
      sym__identifier,
    STATE(131), 1,
      sym_identifier,
  [8225] = 2,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__wrapped_hex_val,
  [8232] = 2,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(262), 1,
      sym__hash_number,
  [8239] = 1,
    ACTIONS(946), 2,
      anon_sym_COMMA,
      sym_number,
  [8244] = 2,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(475), 1,
      sym_identifier,
  [8251] = 2,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym__hash_number,
  [8258] = 2,
    ACTIONS(864), 1,
      aux_sym_code_info_stat_token1,
    STATE(437), 1,
      sym_code_info_stat,
  [8265] = 2,
    ACTIONS(934), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(76), 1,
      sym__rest_of_the_line,
  [8272] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(128), 1,
      sym_header_info_compile,
  [8279] = 2,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(166), 1,
      sym_identifier,
  [8286] = 2,
    ACTIONS(519), 1,
      anon_sym_POUND,
    STATE(500), 1,
      sym__hash_number,
  [8293] = 2,
    ACTIONS(497), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(138), 1,
      sym_source_file_def,
  [8300] = 2,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(167), 1,
      sym_identifier,
  [8307] = 2,
    ACTIONS(938), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(271), 1,
      sym__rest_of_the_line,
  [8314] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(590), 1,
      sym_class_def_plain_body,
  [8321] = 2,
    ACTIONS(942), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
  [8328] = 2,
    ACTIONS(948), 1,
      anon_sym_Constantpool_COLON,
    STATE(173), 1,
      sym_constant_pool_def,
  [8335] = 2,
    ACTIONS(950), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
  [8342] = 2,
    ACTIONS(942), 1,
      sym__identifier,
    STATE(171), 1,
      sym_identifier,
  [8349] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(504), 1,
      sym_class_def_plain_body,
  [8356] = 2,
    ACTIONS(519), 1,
      anon_sym_POUND,
    STATE(465), 1,
      sym__hash_number,
  [8363] = 2,
    ACTIONS(950), 1,
      sym__identifier,
    STATE(28), 1,
      sym_identifier,
  [8370] = 2,
    ACTIONS(938), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(258), 1,
      sym__rest_of_the_line,
  [8377] = 1,
    ACTIONS(952), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [8382] = 2,
    ACTIONS(942), 1,
      sym__identifier,
    STATE(132), 1,
      sym_identifier,
  [8389] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(511), 1,
      sym_class_def_plain_body,
  [8396] = 1,
    ACTIONS(851), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8401] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(579), 1,
      sym_class_def_plain_body,
  [8408] = 2,
    ACTIONS(954), 1,
      anon_sym_throws,
    STATE(69), 1,
      sym_method_throws,
  [8415] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(523), 1,
      sym_class_def_plain_body,
  [8422] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(529), 1,
      sym_class_def_plain_body,
  [8429] = 1,
    ACTIONS(856), 2,
      anon_sym_COMMA,
      sym_number,
  [8434] = 2,
    ACTIONS(956), 1,
      aux_sym_instruction_token1,
    STATE(468), 1,
      sym_instruction,
  [8441] = 2,
    ACTIONS(958), 1,
      anon_sym_MD5checksum,
    STATE(414), 1,
      sym_header_info_md5,
  [8448] = 2,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym__hash_number,
  [8455] = 2,
    ACTIONS(938), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(558), 1,
      sym__rest_of_the_line,
  [8462] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(578), 1,
      sym_class_def_plain_body,
  [8469] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(596), 1,
      sym_class_def_plain_body,
  [8476] = 1,
    ACTIONS(960), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [8481] = 1,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8486] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(572), 1,
      sym_class_def_plain_body,
  [8493] = 1,
    ACTIONS(822), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8498] = 1,
    ACTIONS(962), 2,
      anon_sym_RPAREN,
      sym__identifier,
  [8503] = 2,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(170), 1,
      sym_identifier,
  [8510] = 2,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(174), 1,
      sym_identifier,
  [8517] = 1,
    ACTIONS(964), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8522] = 1,
    ACTIONS(966), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8527] = 1,
    ACTIONS(968), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8532] = 1,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8537] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(595), 1,
      sym_class_def_plain_body,
  [8544] = 2,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(478), 1,
      sym_identifier,
  [8551] = 1,
    ACTIONS(970), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8556] = 2,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    ACTIONS(974), 1,
      sym__endl,
  [8563] = 2,
    ACTIONS(976), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__wrapped_hex_val,
  [8570] = 2,
    ACTIONS(938), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(269), 1,
      sym__rest_of_the_line,
  [8577] = 1,
    ACTIONS(817), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8582] = 2,
    ACTIONS(934), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(58), 1,
      sym__rest_of_the_line,
  [8589] = 2,
    ACTIONS(978), 1,
      sym_comment,
    ACTIONS(980), 1,
      sym__endl,
  [8596] = 2,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(561), 1,
      sym__hash_number,
  [8603] = 2,
    ACTIONS(982), 1,
      anon_sym_LPAREN,
    STATE(567), 1,
      sym_footer_runtime_visible_annotation_element_args,
  [8610] = 2,
    ACTIONS(984), 1,
      anon_sym_Lastmodified,
    STATE(439), 1,
      sym_header_info_last_mod,
  [8617] = 2,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(257), 1,
      sym__hash_number,
  [8624] = 2,
    ACTIONS(986), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym__endl,
  [8631] = 2,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym__hash_number,
  [8638] = 2,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(358), 1,
      sym_args,
  [8645] = 2,
    ACTIONS(519), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym__hash_number,
  [8652] = 1,
    ACTIONS(990), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8657] = 1,
    ACTIONS(992), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [8662] = 1,
    ACTIONS(994), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8667] = 1,
    ACTIONS(996), 2,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
  [8672] = 2,
    ACTIONS(934), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(448), 1,
      sym__rest_of_the_line,
  [8679] = 2,
    ACTIONS(998), 1,
      anon_sym_flags_COLON,
    STATE(2), 1,
      sym_flag_def,
  [8686] = 1,
    ACTIONS(1000), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [8691] = 2,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(136), 1,
      sym_identifier,
  [8698] = 2,
    ACTIONS(509), 1,
      sym__identifier,
    STATE(141), 1,
      sym_identifier,
  [8705] = 2,
    ACTIONS(934), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(86), 1,
      sym__rest_of_the_line,
  [8712] = 2,
    ACTIONS(1002), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym__endl,
  [8719] = 1,
    ACTIONS(1006), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [8724] = 2,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(583), 1,
      sym__hash_number,
  [8731] = 1,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8736] = 1,
    ACTIONS(882), 1,
      ts_builtin_sym_end,
  [8740] = 1,
    ACTIONS(1010), 1,
      ts_builtin_sym_end,
  [8744] = 1,
    ACTIONS(1012), 1,
      sym_number,
  [8748] = 1,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
  [8752] = 1,
    ACTIONS(1014), 1,
      anon_sym_class,
  [8756] = 1,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
  [8760] = 1,
    ACTIONS(1018), 1,
      sym_number,
  [8764] = 1,
    ACTIONS(1020), 1,
      anon_sym_COLON,
  [8768] = 1,
    ACTIONS(1022), 1,
      anon_sym_EQ,
  [8772] = 1,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
  [8776] = 1,
    ACTIONS(1026), 1,
      ts_builtin_sym_end,
  [8780] = 1,
    ACTIONS(1028), 1,
      aux_sym_header_info_compile_token1,
  [8784] = 1,
    ACTIONS(1030), 1,
      anon_sym_COLON2,
  [8788] = 1,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE,
  [8792] = 1,
    ACTIONS(1034), 1,
      sym_comment,
  [8796] = 1,
    ACTIONS(1036), 1,
      sym__endl,
  [8800] = 1,
    ACTIONS(1038), 1,
      sym_comment,
  [8804] = 1,
    ACTIONS(1040), 1,
      anon_sym_POUND,
  [8808] = 1,
    ACTIONS(1042), 1,
      ts_builtin_sym_end,
  [8812] = 1,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
  [8816] = 1,
    ACTIONS(1046), 1,
      sym__endl,
  [8820] = 1,
    ACTIONS(1048), 1,
      ts_builtin_sym_end,
  [8824] = 1,
    ACTIONS(1050), 1,
      sym_hex_value,
  [8828] = 1,
    ACTIONS(1052), 1,
      ts_builtin_sym_end,
  [8832] = 1,
    ACTIONS(1054), 1,
      ts_builtin_sym_end,
  [8836] = 1,
    ACTIONS(1056), 1,
      ts_builtin_sym_end,
  [8840] = 1,
    ACTIONS(1058), 1,
      ts_builtin_sym_end,
  [8844] = 1,
    ACTIONS(1060), 1,
      ts_builtin_sym_end,
  [8848] = 1,
    ACTIONS(1062), 1,
      sym_number,
  [8852] = 1,
    ACTIONS(1064), 1,
      ts_builtin_sym_end,
  [8856] = 1,
    ACTIONS(1066), 1,
      sym__endl,
  [8860] = 1,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
  [8864] = 1,
    ACTIONS(73), 1,
      sym__endl,
  [8868] = 1,
    ACTIONS(1070), 1,
      ts_builtin_sym_end,
  [8872] = 1,
    ACTIONS(1072), 1,
      ts_builtin_sym_end,
  [8876] = 1,
    ACTIONS(1074), 1,
      ts_builtin_sym_end,
  [8880] = 1,
    ACTIONS(1076), 1,
      sym_number,
  [8884] = 1,
    ACTIONS(1078), 1,
      ts_builtin_sym_end,
  [8888] = 1,
    ACTIONS(1080), 1,
      sym__endl,
  [8892] = 1,
    ACTIONS(1082), 1,
      anon_sym_SEMI,
  [8896] = 1,
    ACTIONS(1084), 1,
      ts_builtin_sym_end,
  [8900] = 1,
    ACTIONS(1086), 1,
      ts_builtin_sym_end,
  [8904] = 1,
    ACTIONS(1088), 1,
      anon_sym_Lastmodified,
  [8908] = 1,
    ACTIONS(1090), 1,
      ts_builtin_sym_end,
  [8912] = 1,
    ACTIONS(1092), 1,
      ts_builtin_sym_end,
  [8916] = 1,
    ACTIONS(1094), 1,
      aux_sym_source_file_def_token1,
  [8920] = 1,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
  [8924] = 1,
    ACTIONS(1098), 1,
      anon_sym_EQ2,
  [8928] = 1,
    ACTIONS(1100), 1,
      sym_number,
  [8932] = 1,
    ACTIONS(1102), 1,
      aux_sym_class_info_item_simple_token1,
  [8936] = 1,
    ACTIONS(1104), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [8940] = 1,
    ACTIONS(1106), 1,
      sym_descriptor_value,
  [8944] = 1,
    ACTIONS(1108), 1,
      anon_sym_Compiledfrom,
  [8948] = 1,
    ACTIONS(1110), 1,
      ts_builtin_sym_end,
  [8952] = 1,
    ACTIONS(1112), 1,
      anon_sym_COLON,
  [8956] = 1,
    ACTIONS(1114), 1,
      sym_decimal_floating_point_literal,
  [8960] = 1,
    ACTIONS(1116), 1,
      ts_builtin_sym_end,
  [8964] = 1,
    ACTIONS(1118), 1,
      sym_number,
  [8968] = 1,
    ACTIONS(1120), 1,
      anon_sym_EQ2,
  [8972] = 1,
    ACTIONS(1122), 1,
      sym__endl,
  [8976] = 1,
    ACTIONS(1124), 1,
      ts_builtin_sym_end,
  [8980] = 1,
    ACTIONS(1126), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
  [8984] = 1,
    ACTIONS(1128), 1,
      sym__endl,
  [8988] = 1,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
  [8992] = 1,
    ACTIONS(1130), 1,
      anon_sym_Lastmodified,
  [8996] = 1,
    ACTIONS(1132), 1,
      anon_sym_COLON,
  [9000] = 1,
    ACTIONS(1134), 1,
      anon_sym_COLON,
  [9004] = 1,
    ACTIONS(1136), 1,
      sym_number,
  [9008] = 1,
    ACTIONS(1138), 1,
      anon_sym_COLON2,
  [9012] = 1,
    ACTIONS(1140), 1,
      sym_number,
  [9016] = 1,
    ACTIONS(1142), 1,
      sym__endl,
  [9020] = 1,
    ACTIONS(1144), 1,
      sym_md5,
  [9024] = 1,
    ACTIONS(1146), 1,
      anon_sym_MD5checksum,
  [9028] = 1,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
  [9032] = 1,
    ACTIONS(1148), 1,
      aux_sym_annotation_default_token1,
  [9036] = 1,
    ACTIONS(1150), 1,
      anon_sym_of,
  [9040] = 1,
    ACTIONS(1152), 1,
      sym_number,
  [9044] = 1,
    ACTIONS(1154), 1,
      anon_sym_Lastmodified,
  [9048] = 1,
    ACTIONS(1156), 1,
      sym__path_segment,
  [9052] = 1,
    ACTIONS(1158), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [9056] = 1,
    ACTIONS(1128), 1,
      anon_sym_COLON2,
  [9060] = 1,
    ACTIONS(1160), 1,
      sym__endl,
  [9064] = 1,
    ACTIONS(1162), 1,
      ts_builtin_sym_end,
  [9068] = 1,
    ACTIONS(1164), 1,
      ts_builtin_sym_end,
  [9072] = 1,
    ACTIONS(872), 1,
      anon_sym_SEMI,
  [9076] = 1,
    ACTIONS(1166), 1,
      anon_sym_default_value_COLON,
  [9080] = 1,
    ACTIONS(1168), 1,
      ts_builtin_sym_end,
  [9084] = 1,
    ACTIONS(1170), 1,
      ts_builtin_sym_end,
  [9088] = 1,
    ACTIONS(1172), 1,
      ts_builtin_sym_end,
  [9092] = 1,
    ACTIONS(1174), 1,
      sym__identifier,
  [9096] = 1,
    ACTIONS(1176), 1,
      anon_sym_SEMI,
  [9100] = 1,
    ACTIONS(1178), 1,
      anon_sym_Lastmodified,
  [9104] = 1,
    ACTIONS(1180), 1,
      ts_builtin_sym_end,
  [9108] = 1,
    ACTIONS(1182), 1,
      ts_builtin_sym_end,
  [9112] = 1,
    ACTIONS(1184), 1,
      sym_number,
  [9116] = 1,
    ACTIONS(1186), 1,
      anon_sym_Lastmodified,
  [9120] = 1,
    ACTIONS(1188), 1,
      ts_builtin_sym_end,
  [9124] = 1,
    ACTIONS(1190), 1,
      anon_sym_LPAREN_RPAREN,
  [9128] = 1,
    ACTIONS(1192), 1,
      anon_sym_RBRACK,
  [9132] = 1,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
  [9136] = 1,
    ACTIONS(1194), 1,
      ts_builtin_sym_end,
  [9140] = 1,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
  [9144] = 1,
    ACTIONS(808), 1,
      ts_builtin_sym_end,
  [9148] = 1,
    ACTIONS(800), 1,
      ts_builtin_sym_end,
  [9152] = 1,
    ACTIONS(1198), 1,
      ts_builtin_sym_end,
  [9156] = 1,
    ACTIONS(1200), 1,
      sym_flag_value,
  [9160] = 1,
    ACTIONS(1202), 1,
      anon_sym_flags_COLON,
  [9164] = 1,
    ACTIONS(1204), 1,
      sym_flag_value,
  [9168] = 1,
    ACTIONS(1206), 1,
      anon_sym_LPAREN_RPAREN,
  [9172] = 1,
    ACTIONS(1208), 1,
      ts_builtin_sym_end,
  [9176] = 1,
    ACTIONS(1210), 1,
      ts_builtin_sym_end,
  [9180] = 1,
    ACTIONS(866), 1,
      anon_sym_SEMI,
  [9184] = 1,
    ACTIONS(700), 1,
      ts_builtin_sym_end,
  [9188] = 1,
    ACTIONS(1212), 1,
      sym_number,
  [9192] = 1,
    ACTIONS(1214), 1,
      anon_sym_RBRACK,
  [9196] = 1,
    ACTIONS(1216), 1,
      ts_builtin_sym_end,
  [9200] = 1,
    ACTIONS(1218), 1,
      ts_builtin_sym_end,
  [9204] = 1,
    ACTIONS(698), 1,
      ts_builtin_sym_end,
  [9208] = 1,
    ACTIONS(898), 1,
      ts_builtin_sym_end,
  [9212] = 1,
    ACTIONS(1220), 1,
      anon_sym_COLON2,
  [9216] = 1,
    ACTIONS(1222), 1,
      sym_hex_value,
  [9220] = 1,
    ACTIONS(1224), 1,
      anon_sym_EQ2,
  [9224] = 1,
    ACTIONS(1226), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [9228] = 1,
    ACTIONS(1228), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [9232] = 1,
    ACTIONS(1230), 1,
      sym_number,
  [9236] = 1,
    ACTIONS(1232), 1,
      anon_sym_COLON,
  [9240] = 1,
    ACTIONS(1234), 1,
      anon_sym_COLON2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 191,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 317,
  [SMALL_STATE(8)] = 376,
  [SMALL_STATE(9)] = 435,
  [SMALL_STATE(10)] = 494,
  [SMALL_STATE(11)] = 555,
  [SMALL_STATE(12)] = 616,
  [SMALL_STATE(13)] = 652,
  [SMALL_STATE(14)] = 707,
  [SMALL_STATE(15)] = 748,
  [SMALL_STATE(16)] = 787,
  [SMALL_STATE(17)] = 828,
  [SMALL_STATE(18)] = 867,
  [SMALL_STATE(19)] = 906,
  [SMALL_STATE(20)] = 945,
  [SMALL_STATE(21)] = 1000,
  [SMALL_STATE(22)] = 1039,
  [SMALL_STATE(23)] = 1094,
  [SMALL_STATE(24)] = 1130,
  [SMALL_STATE(25)] = 1164,
  [SMALL_STATE(26)] = 1208,
  [SMALL_STATE(27)] = 1242,
  [SMALL_STATE(28)] = 1276,
  [SMALL_STATE(29)] = 1310,
  [SMALL_STATE(30)] = 1344,
  [SMALL_STATE(31)] = 1378,
  [SMALL_STATE(32)] = 1411,
  [SMALL_STATE(33)] = 1460,
  [SMALL_STATE(34)] = 1499,
  [SMALL_STATE(35)] = 1536,
  [SMALL_STATE(36)] = 1569,
  [SMALL_STATE(37)] = 1606,
  [SMALL_STATE(38)] = 1639,
  [SMALL_STATE(39)] = 1672,
  [SMALL_STATE(40)] = 1721,
  [SMALL_STATE(41)] = 1754,
  [SMALL_STATE(42)] = 1787,
  [SMALL_STATE(43)] = 1836,
  [SMALL_STATE(44)] = 1885,
  [SMALL_STATE(45)] = 1920,
  [SMALL_STATE(46)] = 1952,
  [SMALL_STATE(47)] = 1984,
  [SMALL_STATE(48)] = 2016,
  [SMALL_STATE(49)] = 2048,
  [SMALL_STATE(50)] = 2083,
  [SMALL_STATE(51)] = 2126,
  [SMALL_STATE(52)] = 2169,
  [SMALL_STATE(53)] = 2206,
  [SMALL_STATE(54)] = 2241,
  [SMALL_STATE(55)] = 2284,
  [SMALL_STATE(56)] = 2321,
  [SMALL_STATE(57)] = 2364,
  [SMALL_STATE(58)] = 2407,
  [SMALL_STATE(59)] = 2438,
  [SMALL_STATE(60)] = 2468,
  [SMALL_STATE(61)] = 2504,
  [SMALL_STATE(62)] = 2534,
  [SMALL_STATE(63)] = 2570,
  [SMALL_STATE(64)] = 2607,
  [SMALL_STATE(65)] = 2644,
  [SMALL_STATE(66)] = 2681,
  [SMALL_STATE(67)] = 2718,
  [SMALL_STATE(68)] = 2749,
  [SMALL_STATE(69)] = 2786,
  [SMALL_STATE(70)] = 2815,
  [SMALL_STATE(71)] = 2852,
  [SMALL_STATE(72)] = 2880,
  [SMALL_STATE(73)] = 2912,
  [SMALL_STATE(74)] = 2944,
  [SMALL_STATE(75)] = 2972,
  [SMALL_STATE(76)] = 3003,
  [SMALL_STATE(77)] = 3030,
  [SMALL_STATE(78)] = 3057,
  [SMALL_STATE(79)] = 3088,
  [SMALL_STATE(80)] = 3119,
  [SMALL_STATE(81)] = 3146,
  [SMALL_STATE(82)] = 3177,
  [SMALL_STATE(83)] = 3208,
  [SMALL_STATE(84)] = 3239,
  [SMALL_STATE(85)] = 3270,
  [SMALL_STATE(86)] = 3297,
  [SMALL_STATE(87)] = 3323,
  [SMALL_STATE(88)] = 3349,
  [SMALL_STATE(89)] = 3379,
  [SMALL_STATE(90)] = 3409,
  [SMALL_STATE(91)] = 3434,
  [SMALL_STATE(92)] = 3459,
  [SMALL_STATE(93)] = 3484,
  [SMALL_STATE(94)] = 3509,
  [SMALL_STATE(95)] = 3534,
  [SMALL_STATE(96)] = 3559,
  [SMALL_STATE(97)] = 3584,
  [SMALL_STATE(98)] = 3609,
  [SMALL_STATE(99)] = 3634,
  [SMALL_STATE(100)] = 3659,
  [SMALL_STATE(101)] = 3693,
  [SMALL_STATE(102)] = 3728,
  [SMALL_STATE(103)] = 3761,
  [SMALL_STATE(104)] = 3797,
  [SMALL_STATE(105)] = 3833,
  [SMALL_STATE(106)] = 3869,
  [SMALL_STATE(107)] = 3902,
  [SMALL_STATE(108)] = 3925,
  [SMALL_STATE(109)] = 3946,
  [SMALL_STATE(110)] = 3973,
  [SMALL_STATE(111)] = 3996,
  [SMALL_STATE(112)] = 4029,
  [SMALL_STATE(113)] = 4056,
  [SMALL_STATE(114)] = 4080,
  [SMALL_STATE(115)] = 4110,
  [SMALL_STATE(116)] = 4140,
  [SMALL_STATE(117)] = 4170,
  [SMALL_STATE(118)] = 4200,
  [SMALL_STATE(119)] = 4227,
  [SMALL_STATE(120)] = 4254,
  [SMALL_STATE(121)] = 4281,
  [SMALL_STATE(122)] = 4298,
  [SMALL_STATE(123)] = 4325,
  [SMALL_STATE(124)] = 4352,
  [SMALL_STATE(125)] = 4379,
  [SMALL_STATE(126)] = 4406,
  [SMALL_STATE(127)] = 4433,
  [SMALL_STATE(128)] = 4460,
  [SMALL_STATE(129)] = 4477,
  [SMALL_STATE(130)] = 4504,
  [SMALL_STATE(131)] = 4520,
  [SMALL_STATE(132)] = 4556,
  [SMALL_STATE(133)] = 4592,
  [SMALL_STATE(134)] = 4609,
  [SMALL_STATE(135)] = 4630,
  [SMALL_STATE(136)] = 4651,
  [SMALL_STATE(137)] = 4667,
  [SMALL_STATE(138)] = 4697,
  [SMALL_STATE(139)] = 4731,
  [SMALL_STATE(140)] = 4761,
  [SMALL_STATE(141)] = 4795,
  [SMALL_STATE(142)] = 4811,
  [SMALL_STATE(143)] = 4826,
  [SMALL_STATE(144)] = 4841,
  [SMALL_STATE(145)] = 4856,
  [SMALL_STATE(146)] = 4873,
  [SMALL_STATE(147)] = 4890,
  [SMALL_STATE(148)] = 4905,
  [SMALL_STATE(149)] = 4920,
  [SMALL_STATE(150)] = 4935,
  [SMALL_STATE(151)] = 4959,
  [SMALL_STATE(152)] = 4987,
  [SMALL_STATE(153)] = 5007,
  [SMALL_STATE(154)] = 5021,
  [SMALL_STATE(155)] = 5045,
  [SMALL_STATE(156)] = 5057,
  [SMALL_STATE(157)] = 5077,
  [SMALL_STATE(158)] = 5105,
  [SMALL_STATE(159)] = 5129,
  [SMALL_STATE(160)] = 5141,
  [SMALL_STATE(161)] = 5153,
  [SMALL_STATE(162)] = 5173,
  [SMALL_STATE(163)] = 5196,
  [SMALL_STATE(164)] = 5211,
  [SMALL_STATE(165)] = 5226,
  [SMALL_STATE(166)] = 5243,
  [SMALL_STATE(167)] = 5268,
  [SMALL_STATE(168)] = 5293,
  [SMALL_STATE(169)] = 5306,
  [SMALL_STATE(170)] = 5323,
  [SMALL_STATE(171)] = 5348,
  [SMALL_STATE(172)] = 5361,
  [SMALL_STATE(173)] = 5384,
  [SMALL_STATE(174)] = 5407,
  [SMALL_STATE(175)] = 5432,
  [SMALL_STATE(176)] = 5443,
  [SMALL_STATE(177)] = 5465,
  [SMALL_STATE(178)] = 5479,
  [SMALL_STATE(179)] = 5501,
  [SMALL_STATE(180)] = 5521,
  [SMALL_STATE(181)] = 5537,
  [SMALL_STATE(182)] = 5555,
  [SMALL_STATE(183)] = 5573,
  [SMALL_STATE(184)] = 5585,
  [SMALL_STATE(185)] = 5595,
  [SMALL_STATE(186)] = 5613,
  [SMALL_STATE(187)] = 5631,
  [SMALL_STATE(188)] = 5649,
  [SMALL_STATE(189)] = 5667,
  [SMALL_STATE(190)] = 5685,
  [SMALL_STATE(191)] = 5703,
  [SMALL_STATE(192)] = 5721,
  [SMALL_STATE(193)] = 5737,
  [SMALL_STATE(194)] = 5751,
  [SMALL_STATE(195)] = 5769,
  [SMALL_STATE(196)] = 5787,
  [SMALL_STATE(197)] = 5805,
  [SMALL_STATE(198)] = 5815,
  [SMALL_STATE(199)] = 5831,
  [SMALL_STATE(200)] = 5843,
  [SMALL_STATE(201)] = 5855,
  [SMALL_STATE(202)] = 5873,
  [SMALL_STATE(203)] = 5891,
  [SMALL_STATE(204)] = 5907,
  [SMALL_STATE(205)] = 5925,
  [SMALL_STATE(206)] = 5947,
  [SMALL_STATE(207)] = 5965,
  [SMALL_STATE(208)] = 5983,
  [SMALL_STATE(209)] = 5999,
  [SMALL_STATE(210)] = 6017,
  [SMALL_STATE(211)] = 6039,
  [SMALL_STATE(212)] = 6057,
  [SMALL_STATE(213)] = 6069,
  [SMALL_STATE(214)] = 6091,
  [SMALL_STATE(215)] = 6109,
  [SMALL_STATE(216)] = 6131,
  [SMALL_STATE(217)] = 6149,
  [SMALL_STATE(218)] = 6161,
  [SMALL_STATE(219)] = 6178,
  [SMALL_STATE(220)] = 6187,
  [SMALL_STATE(221)] = 6200,
  [SMALL_STATE(222)] = 6213,
  [SMALL_STATE(223)] = 6232,
  [SMALL_STATE(224)] = 6245,
  [SMALL_STATE(225)] = 6254,
  [SMALL_STATE(226)] = 6271,
  [SMALL_STATE(227)] = 6290,
  [SMALL_STATE(228)] = 6301,
  [SMALL_STATE(229)] = 6320,
  [SMALL_STATE(230)] = 6329,
  [SMALL_STATE(231)] = 6344,
  [SMALL_STATE(232)] = 6355,
  [SMALL_STATE(233)] = 6372,
  [SMALL_STATE(234)] = 6391,
  [SMALL_STATE(235)] = 6410,
  [SMALL_STATE(236)] = 6421,
  [SMALL_STATE(237)] = 6440,
  [SMALL_STATE(238)] = 6459,
  [SMALL_STATE(239)] = 6478,
  [SMALL_STATE(240)] = 6487,
  [SMALL_STATE(241)] = 6500,
  [SMALL_STATE(242)] = 6511,
  [SMALL_STATE(243)] = 6530,
  [SMALL_STATE(244)] = 6545,
  [SMALL_STATE(245)] = 6559,
  [SMALL_STATE(246)] = 6569,
  [SMALL_STATE(247)] = 6583,
  [SMALL_STATE(248)] = 6597,
  [SMALL_STATE(249)] = 6613,
  [SMALL_STATE(250)] = 6629,
  [SMALL_STATE(251)] = 6643,
  [SMALL_STATE(252)] = 6655,
  [SMALL_STATE(253)] = 6669,
  [SMALL_STATE(254)] = 6683,
  [SMALL_STATE(255)] = 6699,
  [SMALL_STATE(256)] = 6713,
  [SMALL_STATE(257)] = 6727,
  [SMALL_STATE(258)] = 6737,
  [SMALL_STATE(259)] = 6745,
  [SMALL_STATE(260)] = 6755,
  [SMALL_STATE(261)] = 6769,
  [SMALL_STATE(262)] = 6777,
  [SMALL_STATE(263)] = 6787,
  [SMALL_STATE(264)] = 6801,
  [SMALL_STATE(265)] = 6811,
  [SMALL_STATE(266)] = 6825,
  [SMALL_STATE(267)] = 6841,
  [SMALL_STATE(268)] = 6855,
  [SMALL_STATE(269)] = 6871,
  [SMALL_STATE(270)] = 6879,
  [SMALL_STATE(271)] = 6891,
  [SMALL_STATE(272)] = 6899,
  [SMALL_STATE(273)] = 6913,
  [SMALL_STATE(274)] = 6927,
  [SMALL_STATE(275)] = 6941,
  [SMALL_STATE(276)] = 6951,
  [SMALL_STATE(277)] = 6967,
  [SMALL_STATE(278)] = 6983,
  [SMALL_STATE(279)] = 6992,
  [SMALL_STATE(280)] = 7005,
  [SMALL_STATE(281)] = 7018,
  [SMALL_STATE(282)] = 7031,
  [SMALL_STATE(283)] = 7040,
  [SMALL_STATE(284)] = 7047,
  [SMALL_STATE(285)] = 7060,
  [SMALL_STATE(286)] = 7067,
  [SMALL_STATE(287)] = 7080,
  [SMALL_STATE(288)] = 7087,
  [SMALL_STATE(289)] = 7098,
  [SMALL_STATE(290)] = 7107,
  [SMALL_STATE(291)] = 7120,
  [SMALL_STATE(292)] = 7133,
  [SMALL_STATE(293)] = 7146,
  [SMALL_STATE(294)] = 7159,
  [SMALL_STATE(295)] = 7170,
  [SMALL_STATE(296)] = 7183,
  [SMALL_STATE(297)] = 7196,
  [SMALL_STATE(298)] = 7207,
  [SMALL_STATE(299)] = 7218,
  [SMALL_STATE(300)] = 7227,
  [SMALL_STATE(301)] = 7238,
  [SMALL_STATE(302)] = 7245,
  [SMALL_STATE(303)] = 7252,
  [SMALL_STATE(304)] = 7263,
  [SMALL_STATE(305)] = 7276,
  [SMALL_STATE(306)] = 7289,
  [SMALL_STATE(307)] = 7300,
  [SMALL_STATE(308)] = 7313,
  [SMALL_STATE(309)] = 7324,
  [SMALL_STATE(310)] = 7333,
  [SMALL_STATE(311)] = 7340,
  [SMALL_STATE(312)] = 7347,
  [SMALL_STATE(313)] = 7360,
  [SMALL_STATE(314)] = 7367,
  [SMALL_STATE(315)] = 7376,
  [SMALL_STATE(316)] = 7387,
  [SMALL_STATE(317)] = 7398,
  [SMALL_STATE(318)] = 7411,
  [SMALL_STATE(319)] = 7424,
  [SMALL_STATE(320)] = 7434,
  [SMALL_STATE(321)] = 7444,
  [SMALL_STATE(322)] = 7454,
  [SMALL_STATE(323)] = 7464,
  [SMALL_STATE(324)] = 7474,
  [SMALL_STATE(325)] = 7484,
  [SMALL_STATE(326)] = 7494,
  [SMALL_STATE(327)] = 7504,
  [SMALL_STATE(328)] = 7510,
  [SMALL_STATE(329)] = 7520,
  [SMALL_STATE(330)] = 7530,
  [SMALL_STATE(331)] = 7540,
  [SMALL_STATE(332)] = 7550,
  [SMALL_STATE(333)] = 7560,
  [SMALL_STATE(334)] = 7570,
  [SMALL_STATE(335)] = 7580,
  [SMALL_STATE(336)] = 7586,
  [SMALL_STATE(337)] = 7596,
  [SMALL_STATE(338)] = 7606,
  [SMALL_STATE(339)] = 7616,
  [SMALL_STATE(340)] = 7626,
  [SMALL_STATE(341)] = 7636,
  [SMALL_STATE(342)] = 7642,
  [SMALL_STATE(343)] = 7652,
  [SMALL_STATE(344)] = 7662,
  [SMALL_STATE(345)] = 7672,
  [SMALL_STATE(346)] = 7682,
  [SMALL_STATE(347)] = 7692,
  [SMALL_STATE(348)] = 7700,
  [SMALL_STATE(349)] = 7708,
  [SMALL_STATE(350)] = 7716,
  [SMALL_STATE(351)] = 7726,
  [SMALL_STATE(352)] = 7736,
  [SMALL_STATE(353)] = 7746,
  [SMALL_STATE(354)] = 7756,
  [SMALL_STATE(355)] = 7766,
  [SMALL_STATE(356)] = 7776,
  [SMALL_STATE(357)] = 7786,
  [SMALL_STATE(358)] = 7796,
  [SMALL_STATE(359)] = 7806,
  [SMALL_STATE(360)] = 7816,
  [SMALL_STATE(361)] = 7826,
  [SMALL_STATE(362)] = 7836,
  [SMALL_STATE(363)] = 7846,
  [SMALL_STATE(364)] = 7856,
  [SMALL_STATE(365)] = 7866,
  [SMALL_STATE(366)] = 7876,
  [SMALL_STATE(367)] = 7886,
  [SMALL_STATE(368)] = 7896,
  [SMALL_STATE(369)] = 7906,
  [SMALL_STATE(370)] = 7916,
  [SMALL_STATE(371)] = 7926,
  [SMALL_STATE(372)] = 7936,
  [SMALL_STATE(373)] = 7946,
  [SMALL_STATE(374)] = 7956,
  [SMALL_STATE(375)] = 7964,
  [SMALL_STATE(376)] = 7974,
  [SMALL_STATE(377)] = 7984,
  [SMALL_STATE(378)] = 7992,
  [SMALL_STATE(379)] = 8002,
  [SMALL_STATE(380)] = 8012,
  [SMALL_STATE(381)] = 8022,
  [SMALL_STATE(382)] = 8032,
  [SMALL_STATE(383)] = 8042,
  [SMALL_STATE(384)] = 8052,
  [SMALL_STATE(385)] = 8058,
  [SMALL_STATE(386)] = 8064,
  [SMALL_STATE(387)] = 8074,
  [SMALL_STATE(388)] = 8084,
  [SMALL_STATE(389)] = 8094,
  [SMALL_STATE(390)] = 8104,
  [SMALL_STATE(391)] = 8114,
  [SMALL_STATE(392)] = 8122,
  [SMALL_STATE(393)] = 8127,
  [SMALL_STATE(394)] = 8134,
  [SMALL_STATE(395)] = 8141,
  [SMALL_STATE(396)] = 8148,
  [SMALL_STATE(397)] = 8155,
  [SMALL_STATE(398)] = 8162,
  [SMALL_STATE(399)] = 8169,
  [SMALL_STATE(400)] = 8176,
  [SMALL_STATE(401)] = 8183,
  [SMALL_STATE(402)] = 8190,
  [SMALL_STATE(403)] = 8197,
  [SMALL_STATE(404)] = 8204,
  [SMALL_STATE(405)] = 8211,
  [SMALL_STATE(406)] = 8218,
  [SMALL_STATE(407)] = 8225,
  [SMALL_STATE(408)] = 8232,
  [SMALL_STATE(409)] = 8239,
  [SMALL_STATE(410)] = 8244,
  [SMALL_STATE(411)] = 8251,
  [SMALL_STATE(412)] = 8258,
  [SMALL_STATE(413)] = 8265,
  [SMALL_STATE(414)] = 8272,
  [SMALL_STATE(415)] = 8279,
  [SMALL_STATE(416)] = 8286,
  [SMALL_STATE(417)] = 8293,
  [SMALL_STATE(418)] = 8300,
  [SMALL_STATE(419)] = 8307,
  [SMALL_STATE(420)] = 8314,
  [SMALL_STATE(421)] = 8321,
  [SMALL_STATE(422)] = 8328,
  [SMALL_STATE(423)] = 8335,
  [SMALL_STATE(424)] = 8342,
  [SMALL_STATE(425)] = 8349,
  [SMALL_STATE(426)] = 8356,
  [SMALL_STATE(427)] = 8363,
  [SMALL_STATE(428)] = 8370,
  [SMALL_STATE(429)] = 8377,
  [SMALL_STATE(430)] = 8382,
  [SMALL_STATE(431)] = 8389,
  [SMALL_STATE(432)] = 8396,
  [SMALL_STATE(433)] = 8401,
  [SMALL_STATE(434)] = 8408,
  [SMALL_STATE(435)] = 8415,
  [SMALL_STATE(436)] = 8422,
  [SMALL_STATE(437)] = 8429,
  [SMALL_STATE(438)] = 8434,
  [SMALL_STATE(439)] = 8441,
  [SMALL_STATE(440)] = 8448,
  [SMALL_STATE(441)] = 8455,
  [SMALL_STATE(442)] = 8462,
  [SMALL_STATE(443)] = 8469,
  [SMALL_STATE(444)] = 8476,
  [SMALL_STATE(445)] = 8481,
  [SMALL_STATE(446)] = 8486,
  [SMALL_STATE(447)] = 8493,
  [SMALL_STATE(448)] = 8498,
  [SMALL_STATE(449)] = 8503,
  [SMALL_STATE(450)] = 8510,
  [SMALL_STATE(451)] = 8517,
  [SMALL_STATE(452)] = 8522,
  [SMALL_STATE(453)] = 8527,
  [SMALL_STATE(454)] = 8532,
  [SMALL_STATE(455)] = 8537,
  [SMALL_STATE(456)] = 8544,
  [SMALL_STATE(457)] = 8551,
  [SMALL_STATE(458)] = 8556,
  [SMALL_STATE(459)] = 8563,
  [SMALL_STATE(460)] = 8570,
  [SMALL_STATE(461)] = 8577,
  [SMALL_STATE(462)] = 8582,
  [SMALL_STATE(463)] = 8589,
  [SMALL_STATE(464)] = 8596,
  [SMALL_STATE(465)] = 8603,
  [SMALL_STATE(466)] = 8610,
  [SMALL_STATE(467)] = 8617,
  [SMALL_STATE(468)] = 8624,
  [SMALL_STATE(469)] = 8631,
  [SMALL_STATE(470)] = 8638,
  [SMALL_STATE(471)] = 8645,
  [SMALL_STATE(472)] = 8652,
  [SMALL_STATE(473)] = 8657,
  [SMALL_STATE(474)] = 8662,
  [SMALL_STATE(475)] = 8667,
  [SMALL_STATE(476)] = 8672,
  [SMALL_STATE(477)] = 8679,
  [SMALL_STATE(478)] = 8686,
  [SMALL_STATE(479)] = 8691,
  [SMALL_STATE(480)] = 8698,
  [SMALL_STATE(481)] = 8705,
  [SMALL_STATE(482)] = 8712,
  [SMALL_STATE(483)] = 8719,
  [SMALL_STATE(484)] = 8724,
  [SMALL_STATE(485)] = 8731,
  [SMALL_STATE(486)] = 8736,
  [SMALL_STATE(487)] = 8740,
  [SMALL_STATE(488)] = 8744,
  [SMALL_STATE(489)] = 8748,
  [SMALL_STATE(490)] = 8752,
  [SMALL_STATE(491)] = 8756,
  [SMALL_STATE(492)] = 8760,
  [SMALL_STATE(493)] = 8764,
  [SMALL_STATE(494)] = 8768,
  [SMALL_STATE(495)] = 8772,
  [SMALL_STATE(496)] = 8776,
  [SMALL_STATE(497)] = 8780,
  [SMALL_STATE(498)] = 8784,
  [SMALL_STATE(499)] = 8788,
  [SMALL_STATE(500)] = 8792,
  [SMALL_STATE(501)] = 8796,
  [SMALL_STATE(502)] = 8800,
  [SMALL_STATE(503)] = 8804,
  [SMALL_STATE(504)] = 8808,
  [SMALL_STATE(505)] = 8812,
  [SMALL_STATE(506)] = 8816,
  [SMALL_STATE(507)] = 8820,
  [SMALL_STATE(508)] = 8824,
  [SMALL_STATE(509)] = 8828,
  [SMALL_STATE(510)] = 8832,
  [SMALL_STATE(511)] = 8836,
  [SMALL_STATE(512)] = 8840,
  [SMALL_STATE(513)] = 8844,
  [SMALL_STATE(514)] = 8848,
  [SMALL_STATE(515)] = 8852,
  [SMALL_STATE(516)] = 8856,
  [SMALL_STATE(517)] = 8860,
  [SMALL_STATE(518)] = 8864,
  [SMALL_STATE(519)] = 8868,
  [SMALL_STATE(520)] = 8872,
  [SMALL_STATE(521)] = 8876,
  [SMALL_STATE(522)] = 8880,
  [SMALL_STATE(523)] = 8884,
  [SMALL_STATE(524)] = 8888,
  [SMALL_STATE(525)] = 8892,
  [SMALL_STATE(526)] = 8896,
  [SMALL_STATE(527)] = 8900,
  [SMALL_STATE(528)] = 8904,
  [SMALL_STATE(529)] = 8908,
  [SMALL_STATE(530)] = 8912,
  [SMALL_STATE(531)] = 8916,
  [SMALL_STATE(532)] = 8920,
  [SMALL_STATE(533)] = 8924,
  [SMALL_STATE(534)] = 8928,
  [SMALL_STATE(535)] = 8932,
  [SMALL_STATE(536)] = 8936,
  [SMALL_STATE(537)] = 8940,
  [SMALL_STATE(538)] = 8944,
  [SMALL_STATE(539)] = 8948,
  [SMALL_STATE(540)] = 8952,
  [SMALL_STATE(541)] = 8956,
  [SMALL_STATE(542)] = 8960,
  [SMALL_STATE(543)] = 8964,
  [SMALL_STATE(544)] = 8968,
  [SMALL_STATE(545)] = 8972,
  [SMALL_STATE(546)] = 8976,
  [SMALL_STATE(547)] = 8980,
  [SMALL_STATE(548)] = 8984,
  [SMALL_STATE(549)] = 8988,
  [SMALL_STATE(550)] = 8992,
  [SMALL_STATE(551)] = 8996,
  [SMALL_STATE(552)] = 9000,
  [SMALL_STATE(553)] = 9004,
  [SMALL_STATE(554)] = 9008,
  [SMALL_STATE(555)] = 9012,
  [SMALL_STATE(556)] = 9016,
  [SMALL_STATE(557)] = 9020,
  [SMALL_STATE(558)] = 9024,
  [SMALL_STATE(559)] = 9028,
  [SMALL_STATE(560)] = 9032,
  [SMALL_STATE(561)] = 9036,
  [SMALL_STATE(562)] = 9040,
  [SMALL_STATE(563)] = 9044,
  [SMALL_STATE(564)] = 9048,
  [SMALL_STATE(565)] = 9052,
  [SMALL_STATE(566)] = 9056,
  [SMALL_STATE(567)] = 9060,
  [SMALL_STATE(568)] = 9064,
  [SMALL_STATE(569)] = 9068,
  [SMALL_STATE(570)] = 9072,
  [SMALL_STATE(571)] = 9076,
  [SMALL_STATE(572)] = 9080,
  [SMALL_STATE(573)] = 9084,
  [SMALL_STATE(574)] = 9088,
  [SMALL_STATE(575)] = 9092,
  [SMALL_STATE(576)] = 9096,
  [SMALL_STATE(577)] = 9100,
  [SMALL_STATE(578)] = 9104,
  [SMALL_STATE(579)] = 9108,
  [SMALL_STATE(580)] = 9112,
  [SMALL_STATE(581)] = 9116,
  [SMALL_STATE(582)] = 9120,
  [SMALL_STATE(583)] = 9124,
  [SMALL_STATE(584)] = 9128,
  [SMALL_STATE(585)] = 9132,
  [SMALL_STATE(586)] = 9136,
  [SMALL_STATE(587)] = 9140,
  [SMALL_STATE(588)] = 9144,
  [SMALL_STATE(589)] = 9148,
  [SMALL_STATE(590)] = 9152,
  [SMALL_STATE(591)] = 9156,
  [SMALL_STATE(592)] = 9160,
  [SMALL_STATE(593)] = 9164,
  [SMALL_STATE(594)] = 9168,
  [SMALL_STATE(595)] = 9172,
  [SMALL_STATE(596)] = 9176,
  [SMALL_STATE(597)] = 9180,
  [SMALL_STATE(598)] = 9184,
  [SMALL_STATE(599)] = 9188,
  [SMALL_STATE(600)] = 9192,
  [SMALL_STATE(601)] = 9196,
  [SMALL_STATE(602)] = 9200,
  [SMALL_STATE(603)] = 9204,
  [SMALL_STATE(604)] = 9208,
  [SMALL_STATE(605)] = 9212,
  [SMALL_STATE(606)] = 9216,
  [SMALL_STATE(607)] = 9220,
  [SMALL_STATE(608)] = 9224,
  [SMALL_STATE(609)] = 9228,
  [SMALL_STATE(610)] = 9232,
  [SMALL_STATE(611)] = 9236,
  [SMALL_STATE(612)] = 9240,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(24),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(88),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(47),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(591),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(514),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 13),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 13),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 14),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 14),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_the_line, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_the_line, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(584),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 6),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 8),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotations, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotations, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(123),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2), SHIFT_REPEAT(611),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 7),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 7),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_default, 6, .production_id = 27),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_default, 6, .production_id = 27),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2), SHIFT_REPEAT(552),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprecated, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotations, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotations, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 8),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 8),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_def_verbose_sig, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def_verbose_sig, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exceptions, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exceptions, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotation, 3, .production_id = 23),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotation, 3, .production_id = 23),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_paramter_annotations, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_paramter_annotations, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2), SHIFT_REPEAT(555),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_def_verbose_sig, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def_verbose_sig, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 8, .production_id = 26),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 8, .production_id = 26),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 7, .production_id = 24),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 7, .production_id = 24),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 6, .production_id = 22),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 6, .production_id = 22),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 9),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 9),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 5, .production_id = 21),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 5, .production_id = 21),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_parameter_annotation_param, 3, .production_id = 23),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_parameter_annotation_param, 3, .production_id = 23),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_parameter_annotation, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_parameter_annotation, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(89),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_item, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_item, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 10),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 10),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(107),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(110),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(491),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 10),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotations, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotations_repeat1, 2),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotations_repeat1, 2), SHIFT_REPEAT(551),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superclass, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superclass, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 9),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 6),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 11),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 7, .production_id = 15),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 9),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(534),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 6),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3, .production_id = 12),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 15),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(407),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(376),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(600),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 10),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 11),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4, .production_id = 18),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2, .production_id = 7),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_args, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(314),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_args, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation, 7),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2, .production_id = 17),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3, .production_id = 7),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5, .production_id = 18),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(593),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(535),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4, .production_id = 19),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2, .production_id = 17),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4, .production_id = 12),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(9),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 2),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(125),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2, .production_id = 16),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5, .production_id = 19),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_interfaces, 2),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_super_interfaces, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(129),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(126),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_int, 2, .production_id = 16),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_args_repeat1, 2), SHIFT_REPEAT(108),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_args_repeat1, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(493),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3, .production_id = 17),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3, .production_id = 17),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5, .production_id = 12),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2), SHIFT_REPEAT(221),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotation_element_args_repeat1, 2), SHIFT_REPEAT(363),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotation_element_args_repeat1, 2),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(106),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2, .production_id = 20),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2, .production_id = 20),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(114),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(356),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(412),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6, .production_id = 18),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4, .production_id = 7),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2), SHIFT_REPEAT(565),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [921] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(564),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_annotation_element_value_simple, 2),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_args_repeat1, 3, .production_id = 23),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 4),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_arg, 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 3),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 4),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 4),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg, 2),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nest_host, 3),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 25),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 3),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_tag, 1),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 4),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_args, 4),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 5),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 1),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 6),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 2),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 5),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 6),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_args, 3),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 4),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_args, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 7, .production_id = 18),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_index, 4),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6, .production_id = 12),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 9),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 10),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_keyword, 1),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 11),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 9),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5, .production_id = 7),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 10),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 11),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 7, .production_id = 15),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 7, .production_id = 15),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1218] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
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
