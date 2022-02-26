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
#define STATE_COUNT 643
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 235
#define ALIAS_COUNT 3
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 59

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
  sym_constructor_def = 119,
  sym_method_def = 120,
  sym_method_throws = 121,
  sym__method_def_verbose = 122,
  sym_method_def_verbose_sig = 123,
  sym_annotation_default = 124,
  sym_deprecated = 125,
  sym__runtime_index = 126,
  sym_runtime_visible_annotations = 127,
  sym_runtime_visible_annotation = 128,
  sym_runtime_visible_type_annotations = 129,
  sym_runtime_visible_type_annotation = 130,
  sym_runtime_visible_paramter_annotations = 131,
  sym_runtime_visible_parameter_annotation = 132,
  sym_runtime_visible_parameter_annotation_param = 133,
  sym_exceptions = 134,
  sym_static_block_def = 135,
  sym_type_parameters = 136,
  sym_type_parameter = 137,
  sym_type_bound = 138,
  sym_modifiers = 139,
  sym_code_def = 140,
  sym_code_info = 141,
  sym_line_number_table_def = 142,
  sym_numered_line = 143,
  sym_numered_instruction = 144,
  sym_instruction = 145,
  sym_code_info_stat = 146,
  sym_descriptor_def = 147,
  sym_flag_def = 148,
  sym__wrapped_hex_val = 149,
  sym_args = 150,
  sym__type = 151,
  sym__simple_type = 152,
  sym_array_type = 153,
  sym_dimensions = 154,
  sym_vararg = 155,
  sym_scoped_type_identifier = 156,
  sym_generic_type = 157,
  sym_type_arguments = 158,
  sym_wildcard = 159,
  sym__wildcard_bounds = 160,
  sym_extends = 161,
  sym_primitive_type = 162,
  sym_block = 163,
  sym__block_item = 164,
  sym_identifier = 165,
  sym_scoped_identifier = 166,
  sym__name = 167,
  sym__reserved_identifier = 168,
  sym_footer = 169,
  sym_signature = 170,
  sym_source_file_def = 171,
  sym_nested_members = 172,
  sym_inner_classes = 173,
  sym_nest_host = 174,
  sym_footer_runtime_visible_annotations = 175,
  sym_footer_runtime_visible_annotation = 176,
  sym_footer_runtime_visible_annotation_element_args = 177,
  sym_footer_runtime_visible_annotation_element_arg = 178,
  sym_runtime_annotation_element_value = 179,
  sym_runtime_annotation_element_value_array = 180,
  sym__runtime_annotation_element_value_simple = 181,
  sym_runtime_annotation_element_value_tag = 182,
  sym_runtime_annotation_args = 183,
  sym_constant_pool_def = 184,
  sym__hash_number = 185,
  sym_constant_pool_item = 186,
  sym_ref_const_pool_item = 187,
  sym__constant_pool_item_type = 188,
  sym__constant_pool_item_type_utf8 = 189,
  sym__constant_pool_item_type_class = 190,
  sym__constant_pool_item_type_string = 191,
  sym__constant_pool_item_type_ref = 192,
  sym__constant_pool_item_type_name_and_type = 193,
  sym__constant_pool_item_type_double = 194,
  sym__constant_pool_item_type_int = 195,
  sym_class_keyword = 196,
  sym_class_info_def = 197,
  sym_class_info_item = 198,
  sym_class_info_item_simple = 199,
  sym_header_info_last_mod = 200,
  sym_header_info_md5 = 201,
  sym_header_info_compile = 202,
  sym_file_path = 203,
  sym__rest_of_the_line = 204,
  sym_header_info = 205,
  sym_header = 206,
  sym_boolean_literal = 207,
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
  [sym_constructor_def] = "constructor_def",
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
  [sym_constructor_def] = sym_constructor_def,
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
  [sym_constructor_def] = {
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
  field_body = 1,
  field_dimensions = 2,
  field_element = 3,
  field_interfaces = 4,
  field_name = 5,
  field_paramters = 6,
  field_return_type = 7,
  field_scope = 8,
  field_superclass = 9,
  field_type = 10,
  field_type_parameters = 11,
  field_type_paramters = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_dimensions] = "dimensions",
  [field_element] = "element",
  [field_interfaces] = "interfaces",
  [field_name] = "name",
  [field_paramters] = "paramters",
  [field_return_type] = "return_type",
  [field_scope] = "scope",
  [field_superclass] = "superclass",
  [field_type] = "type",
  [field_type_parameters] = "type_parameters",
  [field_type_paramters] = "type_paramters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 3},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 1},
  [16] = {.index = 25, .length = 4},
  [17] = {.index = 29, .length = 4},
  [18] = {.index = 33, .length = 4},
  [19] = {.index = 37, .length = 3},
  [20] = {.index = 40, .length = 3},
  [21] = {.index = 43, .length = 3},
  [22] = {.index = 46, .length = 3},
  [23] = {.index = 49, .length = 4},
  [24] = {.index = 53, .length = 4},
  [25] = {.index = 57, .length = 2},
  [26] = {.index = 59, .length = 1},
  [27] = {.index = 60, .length = 1},
  [31] = {.index = 61, .length = 1},
  [32] = {.index = 62, .length = 2},
  [33] = {.index = 64, .length = 3},
  [34] = {.index = 67, .length = 5},
  [35] = {.index = 72, .length = 4},
  [36] = {.index = 76, .length = 4},
  [37] = {.index = 80, .length = 4},
  [38] = {.index = 84, .length = 4},
  [39] = {.index = 88, .length = 4},
  [40] = {.index = 92, .length = 5},
  [41] = {.index = 97, .length = 2},
  [45] = {.index = 99, .length = 4},
  [46] = {.index = 103, .length = 3},
  [47] = {.index = 106, .length = 5},
  [48] = {.index = 111, .length = 5},
  [49] = {.index = 116, .length = 4},
  [56] = {.index = 120, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_superclass, 2},
  [3] =
    {field_interfaces, 2},
  [4] =
    {field_body, 3},
    {field_name, 1},
    {field_superclass, 2},
  [7] =
    {field_body, 3},
    {field_interfaces, 2},
    {field_name, 1},
  [10] =
    {field_body, 3},
    {field_name, 1},
    {field_type_paramters, 2},
  [13] =
    {field_body, 3},
    {field_name, 2},
  [15] =
    {field_body, 3},
    {field_name, 1},
    {field_type_parameters, 2},
  [18] =
    {field_interfaces, 3},
    {field_superclass, 2},
  [20] =
    {field_superclass, 3},
  [21] =
    {field_interfaces, 3},
  [22] =
    {field_dimensions, 1},
    {field_element, 0},
  [24] =
    {field_paramters, 1},
  [25] =
    {field_body, 4},
    {field_interfaces, 3},
    {field_name, 1},
    {field_superclass, 2},
  [29] =
    {field_body, 4},
    {field_name, 1},
    {field_superclass, 3},
    {field_type_paramters, 2},
  [33] =
    {field_body, 4},
    {field_interfaces, 3},
    {field_name, 1},
    {field_type_paramters, 2},
  [37] =
    {field_body, 4},
    {field_name, 2},
    {field_superclass, 3},
  [40] =
    {field_body, 4},
    {field_interfaces, 3},
    {field_name, 2},
  [43] =
    {field_body, 4},
    {field_name, 2},
    {field_type_paramters, 3},
  [46] =
    {field_body, 4},
    {field_name, 2},
    {field_type_parameters, 3},
  [49] =
    {field_body, 4},
    {field_name, 1},
    {field_superclass, 3},
    {field_type_parameters, 2},
  [53] =
    {field_body, 4},
    {field_interfaces, 3},
    {field_name, 1},
    {field_type_parameters, 2},
  [57] =
    {field_interfaces, 4},
    {field_superclass, 3},
  [59] =
    {field_superclass, 4},
  [60] =
    {field_interfaces, 4},
  [61] =
    {field_paramters, 2},
  [62] =
    {field_name, 2},
    {field_type, 1},
  [64] =
    {field_name, 1},
    {field_paramters, 2},
    {field_return_type, 0},
  [67] =
    {field_body, 5},
    {field_interfaces, 4},
    {field_name, 1},
    {field_superclass, 3},
    {field_type_paramters, 2},
  [72] =
    {field_body, 5},
    {field_interfaces, 4},
    {field_name, 2},
    {field_superclass, 3},
  [76] =
    {field_body, 5},
    {field_name, 2},
    {field_superclass, 4},
    {field_type_paramters, 3},
  [80] =
    {field_body, 5},
    {field_interfaces, 4},
    {field_name, 2},
    {field_type_paramters, 3},
  [84] =
    {field_body, 5},
    {field_name, 2},
    {field_superclass, 4},
    {field_type_parameters, 3},
  [88] =
    {field_body, 5},
    {field_interfaces, 4},
    {field_name, 2},
    {field_type_parameters, 3},
  [92] =
    {field_body, 5},
    {field_interfaces, 4},
    {field_name, 1},
    {field_superclass, 3},
    {field_type_parameters, 2},
  [97] =
    {field_interfaces, 5},
    {field_superclass, 4},
  [99] =
    {field_name, 2},
    {field_paramters, 3},
    {field_return_type, 1},
    {field_type_parameters, 0},
  [103] =
    {field_name, 2},
    {field_paramters, 3},
    {field_return_type, 1},
  [106] =
    {field_body, 6},
    {field_interfaces, 5},
    {field_name, 2},
    {field_superclass, 4},
    {field_type_paramters, 3},
  [111] =
    {field_body, 6},
    {field_interfaces, 5},
    {field_name, 2},
    {field_superclass, 4},
    {field_type_parameters, 3},
  [116] =
    {field_name, 3},
    {field_paramters, 4},
    {field_return_type, 2},
    {field_type_parameters, 1},
  [120] =
    {field_name, 2},
    {field_scope, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_type_identifier,
  },
  [13] = {
    [1] = alias_sym_footer_runtime_visible_type_annotations,
  },
  [28] = {
    [2] = alias_sym_footer_runtime_visible_type_annotations,
  },
  [29] = {
    [2] = alias_sym_type_identifier,
  },
  [30] = {
    [0] = alias_sym_type_identifier,
    [2] = alias_sym_type_identifier,
  },
  [42] = {
    [1] = sym_decimal_floating_point_literal,
  },
  [43] = {
    [1] = sym_ref_const_pool_item,
  },
  [44] = {
    [3] = alias_sym_footer_runtime_visible_type_annotations,
  },
  [50] = {
    [1] = sym_ref_const_pool_item,
    [3] = sym_ref_const_pool_item,
  },
  [51] = {
    [1] = alias_sym_target_kind,
  },
  [52] = {
    [2] = alias_sym_target_kind,
    [4] = sym_decimal_floating_point_literal,
  },
  [53] = {
    [2] = alias_sym_target_kind,
    [5] = sym_decimal_floating_point_literal,
  },
  [54] = {
    [2] = sym_decimal_floating_point_literal,
  },
  [55] = {
    [6] = sym_decimal_floating_point_literal,
  },
  [57] = {
    [7] = sym_decimal_floating_point_literal,
  },
  [58] = {
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
  [104] = 104,
  [105] = 104,
  [106] = 104,
  [107] = 86,
  [108] = 40,
  [109] = 87,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 118,
  [130] = 125,
  [131] = 126,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 41,
  [136] = 39,
  [137] = 12,
  [138] = 138,
  [139] = 43,
  [140] = 29,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 36,
  [145] = 37,
  [146] = 31,
  [147] = 26,
  [148] = 44,
  [149] = 38,
  [150] = 32,
  [151] = 42,
  [152] = 152,
  [153] = 46,
  [154] = 154,
  [155] = 45,
  [156] = 39,
  [157] = 157,
  [158] = 48,
  [159] = 159,
  [160] = 160,
  [161] = 41,
  [162] = 162,
  [163] = 40,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 60,
  [168] = 168,
  [169] = 62,
  [170] = 170,
  [171] = 29,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 43,
  [176] = 37,
  [177] = 27,
  [178] = 178,
  [179] = 44,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 31,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 26,
  [190] = 190,
  [191] = 23,
  [192] = 192,
  [193] = 193,
  [194] = 36,
  [195] = 195,
  [196] = 42,
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
  [212] = 32,
  [213] = 38,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 45,
  [223] = 223,
  [224] = 224,
  [225] = 48,
  [226] = 226,
  [227] = 227,
  [228] = 25,
  [229] = 229,
  [230] = 230,
  [231] = 41,
  [232] = 232,
  [233] = 164,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 232,
  [241] = 39,
  [242] = 232,
  [243] = 243,
  [244] = 27,
  [245] = 245,
  [246] = 246,
  [247] = 46,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 15,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 14,
  [260] = 260,
  [261] = 78,
  [262] = 182,
  [263] = 51,
  [264] = 264,
  [265] = 190,
  [266] = 266,
  [267] = 208,
  [268] = 268,
  [269] = 77,
  [270] = 13,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 76,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 75,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 21,
  [289] = 221,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 51,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 22,
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
  [323] = 40,
  [324] = 292,
  [325] = 24,
  [326] = 326,
  [327] = 317,
  [328] = 328,
  [329] = 190,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 331,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 334,
  [345] = 345,
  [346] = 335,
  [347] = 347,
  [348] = 338,
  [349] = 182,
  [350] = 350,
  [351] = 351,
  [352] = 339,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 331,
  [361] = 334,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 339,
  [367] = 367,
  [368] = 335,
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
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 266,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 342,
  [392] = 392,
  [393] = 393,
  [394] = 50,
  [395] = 341,
  [396] = 396,
  [397] = 340,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 338,
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
  [414] = 411,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 403,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
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
  [452] = 432,
  [453] = 451,
  [454] = 405,
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
  [467] = 434,
  [468] = 438,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 434,
  [473] = 438,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 406,
  [483] = 449,
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
  [518] = 518,
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
  [541] = 12,
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
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 546,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 558,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 552,
  [612] = 612,
  [613] = 613,
  [614] = 517,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 548,
  [619] = 619,
  [620] = 620,
  [621] = 609,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 558,
  [627] = 627,
  [628] = 552,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 512,
  [636] = 636,
  [637] = 637,
  [638] = 539,
  [639] = 523,
  [640] = 640,
  [641] = 608,
  [642] = 581,
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
      if (eof) ADVANCE(299);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '.') ADVANCE(490);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '?') ADVANCE(491);
      if (lookahead == '@') ADVANCE(714);
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == 'C') ADVANCE(325);
      if (lookahead == 'D') ADVANCE(317);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == 'I') ADVANCE(324);
      if (lookahead == 'L') ADVANCE(316);
      if (lookahead == 'M') ADVANCE(315);
      if (lookahead == 'N') ADVANCE(319);
      if (lookahead == 'R') ADVANCE(326);
      if (lookahead == 'S') ADVANCE(320);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == ']') ADVANCE(487);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'f') ADVANCE(321);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(292)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(703);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0) ADVANCE(354);
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
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(706);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == 'R') ADVANCE(697);
      if (lookahead == 'S') ADVANCE(578);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(703);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == 'R') ADVANCE(697);
      if (lookahead == 'S') ADVANCE(578);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(703);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(336);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(712);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == ']') ADVANCE(487);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == '{') ADVANCE(308);
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
      if (lookahead == ')') ADVANCE(333);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(703);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(488);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(716);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(355);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(355);
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
      if (lookahead == ':') ADVANCE(713);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(311);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(352);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(710);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(711);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(717);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(717);
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
      if (lookahead == ':') ADVANCE(347);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(334);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(335);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(313);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '=') ADVANCE(351);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'E') ADVANCE(479);
      if (lookahead == 'R') ADVANCE(477);
      if (lookahead == 'S') ADVANCE(412);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(703);
      END_STATE();
    case 64:
      if (lookahead == '=') ADVANCE(351);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(244);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(178);
      END_STATE();
    case 67:
      if (lookahead == 'C') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
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
      if (lookahead == 'd') ADVANCE(729);
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
      if (lookahead == 'm') ADVANCE(731);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(732);
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
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(303);
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
      if (lookahead == '}') ADVANCE(342);
      END_STATE();
    case 246:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 247:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 248:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 249:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 250:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
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
          lookahead == ' ') ADVANCE(734);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 255:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(730);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
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
      if (eof) ADVANCE(299);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == ':') ADVANCE(336);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(712);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '?') ADVANCE(491);
      if (lookahead == '@') ADVANCE(714);
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == 'C') ADVANCE(325);
      if (lookahead == 'D') ADVANCE(317);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == 'I') ADVANCE(324);
      if (lookahead == 'L') ADVANCE(316);
      if (lookahead == 'M') ADVANCE(315);
      if (lookahead == 'N') ADVANCE(319);
      if (lookahead == 'R') ADVANCE(326);
      if (lookahead == 'S') ADVANCE(320);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == ']') ADVANCE(487);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'f') ADVANCE(321);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(292)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(703);
      END_STATE();
    case 293:
      if (eof) ADVANCE(299);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(336);
      if (lookahead == '=') ADVANCE(712);
      if (lookahead == 'C') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(703);
      END_STATE();
    case 294:
      if (eof) ADVANCE(299);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(336);
      if (lookahead == '=') ADVANCE(712);
      if (lookahead == 'C') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(703);
      END_STATE();
    case 295:
      if (eof) ADVANCE(299);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '.') ADVANCE(490);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == 'S') ADVANCE(134);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == ']') ADVANCE(487);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      END_STATE();
    case 296:
      if (eof) ADVANCE(299);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == 'S') ADVANCE(134);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == ']') ADVANCE(487);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      END_STATE();
    case 297:
      if (eof) ADVANCE(299);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '?') ADVANCE(491);
      if (lookahead == '@') ADVANCE(714);
      if (lookahead == 'A') ADVANCE(604);
      if (lookahead == 'C') ADVANCE(626);
      if (lookahead == 'D') ADVANCE(549);
      if (lookahead == 'E') ADVANCE(700);
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(573);
      if (lookahead == 'R') ADVANCE(697);
      if (lookahead == 'S') ADVANCE(579);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(298)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(703);
      END_STATE();
    case 298:
      if (eof) ADVANCE(299);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '?') ADVANCE(491);
      if (lookahead == '@') ADVANCE(714);
      if (lookahead == 'A') ADVANCE(604);
      if (lookahead == 'C') ADVANCE(626);
      if (lookahead == 'D') ADVANCE(549);
      if (lookahead == 'E') ADVANCE(700);
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(573);
      if (lookahead == 'R') ADVANCE(697);
      if (lookahead == 'S') ADVANCE(579);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(298)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(703);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_extends);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_implements);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_implements);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_Signature_COLON);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_AnnotationDefault_COLON);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_default_value_COLON);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'D') ADVANCE(496);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'i') ADVANCE(612);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(638);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(656);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(659);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == 'o') ADVANCE(695);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'l') ADVANCE(523);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'm') ADVANCE(639);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'n') ADVANCE(605);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'n') ADVANCE(610);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'o') ADVANCE(544);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'u') ADVANCE(611);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'x') ADVANCE(540);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'x') ADVANCE(681);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Deprecated_COLON);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_RuntimeVisibleAnnotations_COLON);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_RuntimeVisibleTypeAnnotations_COLON);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_runtime_visible_type_annotation_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_RuntimeVisibleParameterAnnotations_COLON);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Exceptions_COLON);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ' ') ADVANCE(190);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(355);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 's') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'P') ADVANCE(384);
      if (lookahead == 'T') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'A') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'A') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'D') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'V') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'f') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'g') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'm') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'm') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'x') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'y') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(703);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(98);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(156);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(128);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(191);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '5') ADVANCE(492);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(346);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(355);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(713);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(311);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(331);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(341);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(6);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(352);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(710);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(711);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(347);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(312);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(334);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(335);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(340);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(622);
      if (lookahead == 'P') ADVANCE(529);
      if (lookahead == 'T') ADVANCE(702);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(703);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(623);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(703);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(624);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(703);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(591);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(554);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(583);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(632);
      if (lookahead == 'M') ADVANCE(574);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(632);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(696);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(525);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(584);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(576);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(698);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(539);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(662);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(615);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(685);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(649);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(684);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(687);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(602);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(690);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(691);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(692);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(703);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(564);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(595);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(565);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(597);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(561);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(530);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(646);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(552);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(550);
      if (lookahead == 'm') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(660);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(550);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(494);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(654);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(501);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(638);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(497);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(520);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(517);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(522);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(575);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(512);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(513);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(546);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(541);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(644);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(548);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(641);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(500);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(606);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(645);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(652);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(503);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(653);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(507);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(601);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(614);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(689);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(666);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(667);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(603);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(524);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(658);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(609);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == 'o') ADVANCE(695);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(577);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(600);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(537);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(628);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(596);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(663);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(593);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(629);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(642);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(631);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(634);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(635);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(526);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(569);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(557);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(683);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(566);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(568);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(536);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(640);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(553);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(570);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(571);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(538);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(605);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(627);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(547);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(516);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(610);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(528);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(675);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(551);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(661);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(682);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(679);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(668);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(670);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(671);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(633);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(636);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(637);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(619);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(620);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(621);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(599);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(545);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(686);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(613);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(607);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(648);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(616);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(664);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(688);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(617);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(618);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(693);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(694);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(647);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(592);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(585);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(680);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(678);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(556);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(515);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(521);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(587);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(558);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(504);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(532);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(543);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(562);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(665);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(514);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(302);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(305);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(542);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(674);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(498);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(672);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(676);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(502);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(669);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(581);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(677);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(505);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(506);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(673);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(509);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(572);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(510);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(511);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(518);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(519);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(493);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(580);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(527);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(499);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(630);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(495);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(582);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(563);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(655);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(508);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(560);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(699);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(531);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(586);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(533);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(567);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(588);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(589);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(590);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(534);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(535);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(650);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(598);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(611);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(594);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(651);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(540);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(681);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(643);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_NestMembers_COLON);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_InnerClasses_COLON);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_NestHost_COLON);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(716);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(740);
      if (lookahead != 0) ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(737);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(718);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(718);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(723);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(720);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(720);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(723);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(735);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(734);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(735);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(723);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(740);
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
  [21] = {.lex_state = 63},
  [22] = {.lex_state = 63},
  [23] = {.lex_state = 297},
  [24] = {.lex_state = 297},
  [25] = {.lex_state = 297},
  [26] = {.lex_state = 297},
  [27] = {.lex_state = 297},
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
  [131] = {.lex_state = 297},
  [132] = {.lex_state = 297},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 295},
  [136] = {.lex_state = 295},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 295},
  [140] = {.lex_state = 295},
  [141] = {.lex_state = 295},
  [142] = {.lex_state = 295},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 295},
  [145] = {.lex_state = 295},
  [146] = {.lex_state = 295},
  [147] = {.lex_state = 295},
  [148] = {.lex_state = 295},
  [149] = {.lex_state = 295},
  [150] = {.lex_state = 295},
  [151] = {.lex_state = 295},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 295},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 295},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 295},
  [158] = {.lex_state = 295},
  [159] = {.lex_state = 295},
  [160] = {.lex_state = 297},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 295},
  [166] = {.lex_state = 295},
  [167] = {.lex_state = 295},
  [168] = {.lex_state = 295},
  [169] = {.lex_state = 295},
  [170] = {.lex_state = 295},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 295},
  [173] = {.lex_state = 295},
  [174] = {.lex_state = 295},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 297},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 295},
  [181] = {.lex_state = 297},
  [182] = {.lex_state = 297},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 297},
  [191] = {.lex_state = 295},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 297},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 297},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 295},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 14},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 14},
  [214] = {.lex_state = 14},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 295},
  [217] = {.lex_state = 295},
  [218] = {.lex_state = 295},
  [219] = {.lex_state = 295},
  [220] = {.lex_state = 295},
  [221] = {.lex_state = 295},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 295},
  [224] = {.lex_state = 297},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 297},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 297},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 297},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 295},
  [235] = {.lex_state = 295},
  [236] = {.lex_state = 14},
  [237] = {.lex_state = 297},
  [238] = {.lex_state = 295},
  [239] = {.lex_state = 16},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 297},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 295},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 295},
  [246] = {.lex_state = 295},
  [247] = {.lex_state = 14},
  [248] = {.lex_state = 295},
  [249] = {.lex_state = 297},
  [250] = {.lex_state = 14},
  [251] = {.lex_state = 14},
  [252] = {.lex_state = 718},
  [253] = {.lex_state = 14},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 293},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 295},
  [258] = {.lex_state = 293},
  [259] = {.lex_state = 14},
  [260] = {.lex_state = 293},
  [261] = {.lex_state = 295},
  [262] = {.lex_state = 14},
  [263] = {.lex_state = 14},
  [264] = {.lex_state = 295},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 14},
  [267] = {.lex_state = 295},
  [268] = {.lex_state = 293},
  [269] = {.lex_state = 295},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 295},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 14},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 297},
  [276] = {.lex_state = 293},
  [277] = {.lex_state = 295},
  [278] = {.lex_state = 293},
  [279] = {.lex_state = 295},
  [280] = {.lex_state = 295},
  [281] = {.lex_state = 293},
  [282] = {.lex_state = 295},
  [283] = {.lex_state = 295},
  [284] = {.lex_state = 293},
  [285] = {.lex_state = 297},
  [286] = {.lex_state = 295},
  [287] = {.lex_state = 295},
  [288] = {.lex_state = 67},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 295},
  [291] = {.lex_state = 297},
  [292] = {.lex_state = 293},
  [293] = {.lex_state = 12},
  [294] = {.lex_state = 295},
  [295] = {.lex_state = 295},
  [296] = {.lex_state = 295},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 297},
  [299] = {.lex_state = 295},
  [300] = {.lex_state = 295},
  [301] = {.lex_state = 295},
  [302] = {.lex_state = 295},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 67},
  [305] = {.lex_state = 295},
  [306] = {.lex_state = 295},
  [307] = {.lex_state = 295},
  [308] = {.lex_state = 295},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 295},
  [311] = {.lex_state = 295},
  [312] = {.lex_state = 295},
  [313] = {.lex_state = 295},
  [314] = {.lex_state = 295},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 14},
  [317] = {.lex_state = 12},
  [318] = {.lex_state = 293},
  [319] = {.lex_state = 719},
  [320] = {.lex_state = 719},
  [321] = {.lex_state = 719},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 297},
  [324] = {.lex_state = 293},
  [325] = {.lex_state = 14},
  [326] = {.lex_state = 719},
  [327] = {.lex_state = 12},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 295},
  [330] = {.lex_state = 297},
  [331] = {.lex_state = 297},
  [332] = {.lex_state = 297},
  [333] = {.lex_state = 297},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 12},
  [341] = {.lex_state = 12},
  [342] = {.lex_state = 12},
  [343] = {.lex_state = 297},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 295},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 293},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 295},
  [350] = {.lex_state = 293},
  [351] = {.lex_state = 293},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 720},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 297},
  [356] = {.lex_state = 297},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 719},
  [359] = {.lex_state = 297},
  [360] = {.lex_state = 297},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 293},
  [363] = {.lex_state = 14},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 293},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 297},
  [371] = {.lex_state = 297},
  [372] = {.lex_state = 293},
  [373] = {.lex_state = 248},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 293},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 293},
  [380] = {.lex_state = 293},
  [381] = {.lex_state = 293},
  [382] = {.lex_state = 297},
  [383] = {.lex_state = 293},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 293},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 293},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 297},
  [391] = {.lex_state = 12},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 12},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 12},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 12},
  [398] = {.lex_state = 12},
  [399] = {.lex_state = 297},
  [400] = {.lex_state = 293},
  [401] = {.lex_state = 293},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 721},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 297},
  [408] = {.lex_state = 297},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 295},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 295},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 295},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 297},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 297},
  [428] = {.lex_state = 721},
  [429] = {.lex_state = 295},
  [430] = {.lex_state = 297},
  [431] = {.lex_state = 295},
  [432] = {.lex_state = 721},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 297},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 721},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 297},
  [439] = {.lex_state = 297},
  [440] = {.lex_state = 293},
  [441] = {.lex_state = 297},
  [442] = {.lex_state = 248},
  [443] = {.lex_state = 295},
  [444] = {.lex_state = 293},
  [445] = {.lex_state = 297},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 719},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 721},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 721},
  [452] = {.lex_state = 721},
  [453] = {.lex_state = 721},
  [454] = {.lex_state = 721},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 297},
  [460] = {.lex_state = 293},
  [461] = {.lex_state = 249},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 297},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 297},
  [468] = {.lex_state = 297},
  [469] = {.lex_state = 295},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 297},
  [473] = {.lex_state = 297},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 297},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 12},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 721},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 721},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 297},
  [489] = {.lex_state = 297},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 12},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 12},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 295},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 721},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 295},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 12},
  [503] = {.lex_state = 721},
  [504] = {.lex_state = 295},
  [505] = {.lex_state = 293},
  [506] = {.lex_state = 295},
  [507] = {.lex_state = 293},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 293},
  [511] = {.lex_state = 721},
  [512] = {.lex_state = 10},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 293},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 248},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 293},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 297},
  [527] = {.lex_state = 293},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 12},
  [530] = {.lex_state = 1},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 293},
  [533] = {.lex_state = 293},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 293},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 253},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 12},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 12},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 293},
  [547] = {.lex_state = 12},
  [548] = {.lex_state = 254},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 295},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 250},
  [556] = {.lex_state = 253},
  [557] = {.lex_state = 293},
  [558] = {.lex_state = 293},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 16},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 293},
  [564] = {.lex_state = 295},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 12},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 12},
  [571] = {.lex_state = 293},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 297},
  [574] = {.lex_state = 293},
  [575] = {.lex_state = 295},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 12},
  [579] = {.lex_state = 295},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 293},
  [582] = {.lex_state = 297},
  [583] = {.lex_state = 251},
  [584] = {.lex_state = 295},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 297},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 295},
  [592] = {.lex_state = 252},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 293},
  [597] = {.lex_state = 12},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 297},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 295},
  [605] = {.lex_state = 295},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 293},
  [608] = {.lex_state = 297},
  [609] = {.lex_state = 293},
  [610] = {.lex_state = 293},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 293},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 254},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 293},
  [622] = {.lex_state = 295},
  [623] = {.lex_state = 12},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 255},
  [626] = {.lex_state = 293},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 297},
  [635] = {.lex_state = 10},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 297},
  [638] = {.lex_state = 253},
  [639] = {.lex_state = 293},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 297},
  [642] = {.lex_state = 293},
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
    [sym_source_file] = STATE(629),
    [sym__source_file_verbose] = STATE(617),
    [sym__source_file_plain] = STATE(617),
    [sym_header_info_compile] = STATE(100),
    [sym_header_info] = STATE(415),
    [sym_header] = STATE(102),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym_generic_type,
    STATE(86), 1,
      aux_sym_modifiers_repeat1,
    STATE(103), 1,
      sym_modifiers,
    STATE(124), 1,
      sym_type_parameters,
    STATE(231), 1,
      sym_scoped_type_identifier,
    STATE(241), 1,
      sym_identifier,
    STATE(6), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(197), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(508), 4,
      sym_field_def,
      sym_constructor_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(15), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(13), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [66] = 14,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym_generic_type,
    STATE(86), 1,
      aux_sym_modifiers_repeat1,
    STATE(103), 1,
      sym_modifiers,
    STATE(124), 1,
      sym_type_parameters,
    STATE(231), 1,
      sym_scoped_type_identifier,
    STATE(241), 1,
      sym_identifier,
    STATE(3), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(197), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(508), 4,
      sym_field_def,
      sym_constructor_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(28), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(25), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [132] = 18,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(37), 1,
      anon_sym_AnnotationDefault_COLON,
    ACTIONS(39), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(47), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(49), 1,
      anon_sym_Code_COLON,
    STATE(9), 1,
      sym_code_def,
    STATE(10), 1,
      sym_annotation_default,
    STATE(18), 1,
      sym_deprecated,
    STATE(33), 1,
      sym_exceptions,
    STATE(55), 1,
      sym_method_def_verbose_sig,
    STATE(69), 1,
      sym_runtime_visible_annotations,
    STATE(80), 1,
      sym_runtime_visible_type_annotations,
    STATE(99), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(33), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(31), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [206] = 14,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym_generic_type,
    STATE(86), 1,
      aux_sym_modifiers_repeat1,
    STATE(103), 1,
      sym_modifiers,
    STATE(124), 1,
      sym_type_parameters,
    STATE(231), 1,
      sym_scoped_type_identifier,
    STATE(241), 1,
      sym_identifier,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(197), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(543), 4,
      sym_field_def,
      sym_constructor_def,
      sym_method_def,
      sym_static_block_def,
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
  [272] = 14,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_generic_type,
    STATE(86), 1,
      aux_sym_modifiers_repeat1,
    STATE(103), 1,
      sym_modifiers,
    STATE(124), 1,
      sym_type_parameters,
    STATE(231), 1,
      sym_scoped_type_identifier,
    STATE(241), 1,
      sym_identifier,
    STATE(3), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(197), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(508), 4,
      sym_field_def,
      sym_constructor_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(15), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(13), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [338] = 14,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_generic_type,
    STATE(86), 1,
      aux_sym_modifiers_repeat1,
    STATE(103), 1,
      sym_modifiers,
    STATE(124), 1,
      sym_type_parameters,
    STATE(231), 1,
      sym_scoped_type_identifier,
    STATE(241), 1,
      sym_identifier,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(197), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(543), 4,
      sym_field_def,
      sym_constructor_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(15), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(13), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [404] = 14,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_generic_type,
    STATE(86), 1,
      aux_sym_modifiers_repeat1,
    STATE(103), 1,
      sym_modifiers,
    STATE(124), 1,
      sym_type_parameters,
    STATE(231), 1,
      sym_scoped_type_identifier,
    STATE(241), 1,
      sym_identifier,
    STATE(7), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(197), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(543), 4,
      sym_field_def,
      sym_constructor_def,
      sym_method_def,
      sym_static_block_def,
    ACTIONS(15), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(13), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [470] = 16,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(37), 1,
      anon_sym_AnnotationDefault_COLON,
    ACTIONS(39), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(47), 1,
      anon_sym_Exceptions_COLON,
    STATE(11), 1,
      sym_annotation_default,
    STATE(16), 1,
      sym_deprecated,
    STATE(34), 1,
      sym_exceptions,
    STATE(54), 1,
      sym_method_def_verbose_sig,
    STATE(67), 1,
      sym_runtime_visible_annotations,
    STATE(84), 1,
      sym_runtime_visible_type_annotations,
    STATE(97), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(73), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(71), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [538] = 14,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(39), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(47), 1,
      anon_sym_Exceptions_COLON,
    STATE(16), 1,
      sym_deprecated,
    STATE(34), 1,
      sym_exceptions,
    STATE(54), 1,
      sym_method_def_verbose_sig,
    STATE(67), 1,
      sym_runtime_visible_annotations,
    STATE(84), 1,
      sym_runtime_visible_type_annotations,
    STATE(97), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(73), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(71), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [600] = 14,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(39), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(47), 1,
      anon_sym_Exceptions_COLON,
    STATE(19), 1,
      sym_deprecated,
    STATE(28), 1,
      sym_exceptions,
    STATE(49), 1,
      sym_method_def_verbose_sig,
    STATE(65), 1,
      sym_runtime_visible_annotations,
    STATE(82), 1,
      sym_runtime_visible_type_annotations,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [662] = 2,
    ACTIONS(81), 12,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
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
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
      anon_sym_of,
  [699] = 4,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(87), 10,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
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
  [739] = 4,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(91), 10,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
      anon_sym_Code_COLON,
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
  [779] = 4,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(98), 10,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
      anon_sym_Code_COLON,
    ACTIONS(93), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [819] = 12,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(47), 1,
      anon_sym_Exceptions_COLON,
    STATE(28), 1,
      sym_exceptions,
    STATE(49), 1,
      sym_method_def_verbose_sig,
    STATE(65), 1,
      sym_runtime_visible_annotations,
    STATE(82), 1,
      sym_runtime_visible_type_annotations,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [875] = 4,
    ACTIONS(104), 1,
      anon_sym_line,
    STATE(17), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(102), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
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
  [915] = 12,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(47), 1,
      anon_sym_Exceptions_COLON,
    STATE(34), 1,
      sym_exceptions,
    STATE(54), 1,
      sym_method_def_verbose_sig,
    STATE(67), 1,
      sym_runtime_visible_annotations,
    STATE(84), 1,
      sym_runtime_visible_type_annotations,
    STATE(97), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(73), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(71), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [971] = 12,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(47), 1,
      anon_sym_Exceptions_COLON,
    STATE(30), 1,
      sym_exceptions,
    STATE(57), 1,
      sym_method_def_verbose_sig,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(81), 1,
      sym_runtime_visible_type_annotations,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(107), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1027] = 4,
    ACTIONS(115), 1,
      anon_sym_line,
    STATE(17), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(113), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
    ACTIONS(111), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1067] = 3,
    ACTIONS(121), 1,
      sym_flag_value,
    ACTIONS(119), 10,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
      anon_sym_Code_COLON,
    ACTIONS(117), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1104] = 2,
    ACTIONS(125), 10,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
      anon_sym_Code_COLON,
    ACTIONS(123), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1139] = 2,
    ACTIONS(129), 10,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
      anon_sym_RPAREN,
      sym_number,
    ACTIONS(127), 20,
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
  [1174] = 2,
    ACTIONS(98), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
      anon_sym_Code_COLON,
    ACTIONS(93), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1209] = 7,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(50), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(135), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [1254] = 2,
    ACTIONS(141), 10,
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
  [1288] = 5,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    ACTIONS(145), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [1328] = 10,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(57), 1,
      sym_method_def_verbose_sig,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(81), 1,
      sym_runtime_visible_type_annotations,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(107), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
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
    ACTIONS(149), 10,
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
    ACTIONS(147), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1412] = 10,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(56), 1,
      sym_method_def_verbose_sig,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(83), 1,
      sym_runtime_visible_type_annotations,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [1462] = 2,
    ACTIONS(157), 10,
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
  [1496] = 4,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(161), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
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
  [1534] = 10,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(54), 1,
      sym_method_def_verbose_sig,
    STATE(67), 1,
      sym_runtime_visible_annotations,
    STATE(84), 1,
      sym_runtime_visible_type_annotations,
    STATE(97), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(73), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(71), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1584] = 10,
    ACTIONS(35), 1,
      anon_sym_Signature_COLON,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(49), 1,
      sym_method_def_verbose_sig,
    STATE(65), 1,
      sym_runtime_visible_annotations,
    STATE(82), 1,
      sym_runtime_visible_type_annotations,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [1634] = 2,
    ACTIONS(165), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
    ACTIONS(163), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1668] = 2,
    ACTIONS(169), 10,
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
  [1702] = 3,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(173), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [1738] = 4,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(179), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
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
  [1776] = 5,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_DOT,
    STATE(36), 1,
      sym_type_arguments,
    ACTIONS(186), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LBRACK,
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
  [1816] = 2,
    ACTIONS(195), 10,
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
  [1850] = 5,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_LT,
    STATE(42), 1,
      sym_type_arguments,
    ACTIONS(173), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
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
  [1890] = 2,
    ACTIONS(202), 10,
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
  [1924] = 2,
    ACTIONS(206), 10,
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
  [1958] = 2,
    ACTIONS(210), 10,
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
  [1992] = 2,
    ACTIONS(214), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [2025] = 2,
    ACTIONS(179), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [2058] = 2,
    ACTIONS(218), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
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
  [2091] = 2,
    ACTIONS(222), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [2124] = 8,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(81), 1,
      sym_runtime_visible_type_annotations,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(107), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2168] = 4,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(226), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [2204] = 4,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(145), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [2240] = 2,
    ACTIONS(233), 8,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
    ACTIONS(231), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2272] = 5,
    ACTIONS(239), 1,
      sym_number,
    STATE(623), 1,
      sym__runtime_index,
    STATE(58), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(237), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(235), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2310] = 8,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(65), 1,
      sym_runtime_visible_annotations,
    STATE(82), 1,
      sym_runtime_visible_type_annotations,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [2354] = 8,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(67), 1,
      sym_runtime_visible_annotations,
    STATE(84), 1,
      sym_runtime_visible_type_annotations,
    STATE(97), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(73), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(71), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2398] = 8,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(66), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(243), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [2442] = 8,
    ACTIONS(41), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(83), 1,
      sym_runtime_visible_type_annotations,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [2486] = 5,
    ACTIONS(249), 1,
      sym_number,
    STATE(623), 1,
      sym__runtime_index,
    STATE(58), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(247), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(245), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2524] = 2,
    ACTIONS(254), 7,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
    ACTIONS(252), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2555] = 5,
    ACTIONS(260), 1,
      sym_number,
    STATE(642), 1,
      sym__runtime_index,
    STATE(60), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(258), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(256), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2592] = 2,
    ACTIONS(265), 7,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
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
  [2623] = 5,
    ACTIONS(271), 1,
      sym_number,
    STATE(642), 1,
      sym__runtime_index,
    STATE(60), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(269), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(267), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2660] = 2,
    ACTIONS(275), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(273), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2690] = 3,
    ACTIONS(281), 1,
      sym_comment,
    ACTIONS(279), 5,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(277), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2722] = 6,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(81), 1,
      sym_runtime_visible_type_annotations,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(107), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2760] = 6,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(93), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(285), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [2798] = 6,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(82), 1,
      sym_runtime_visible_type_annotations,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [2836] = 6,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(83), 1,
      sym_runtime_visible_type_annotations,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [2874] = 6,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(84), 1,
      sym_runtime_visible_type_annotations,
    STATE(97), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(73), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(71), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2912] = 6,
    ACTIONS(43), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(243), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [2950] = 4,
    ACTIONS(291), 1,
      anon_sym_parameter,
    ACTIONS(289), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    STATE(74), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
    ACTIONS(287), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2983] = 2,
    ACTIONS(295), 5,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      sym_number,
    ACTIONS(293), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3012] = 2,
    ACTIONS(299), 5,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(297), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3041] = 4,
    ACTIONS(305), 1,
      anon_sym_parameter,
    ACTIONS(303), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    STATE(74), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
    ACTIONS(301), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3074] = 2,
    ACTIONS(310), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [3102] = 2,
    ACTIONS(314), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [3130] = 2,
    ACTIONS(318), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      sym_number,
    ACTIONS(316), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3158] = 2,
    ACTIONS(322), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      sym_number,
    ACTIONS(320), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3186] = 4,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(326), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(324), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3218] = 4,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(97), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(73), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(71), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3250] = 4,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(90), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3282] = 4,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(107), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3314] = 4,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(243), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3346] = 4,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3378] = 4,
    ACTIONS(45), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(93), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(285), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3410] = 4,
    STATE(87), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(330), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LT,
    ACTIONS(328), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(332), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3441] = 4,
    STATE(87), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(336), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LT,
    ACTIONS(334), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(338), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3472] = 2,
    ACTIONS(343), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(341), 20,
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
  [3499] = 2,
    ACTIONS(347), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(345), 20,
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
  [3526] = 2,
    ACTIONS(243), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3552] = 2,
    ACTIONS(285), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3578] = 2,
    ACTIONS(351), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(349), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3604] = 2,
    ACTIONS(326), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(324), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3630] = 2,
    ACTIONS(355), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(353), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3656] = 2,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3682] = 2,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(107), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3708] = 2,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3734] = 2,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(357), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3760] = 2,
    ACTIONS(73), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(71), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3786] = 7,
    ACTIONS(361), 1,
      sym_interface_keyword,
    ACTIONS(365), 1,
      anon_sym_class,
    STATE(107), 1,
      aux_sym_modifiers_repeat1,
    STATE(355), 1,
      sym_modifiers,
    STATE(427), 1,
      sym_class_keyword,
    STATE(600), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(363), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3820] = 8,
    ACTIONS(367), 1,
      anon_sym_Utf8,
    ACTIONS(369), 1,
      anon_sym_Class,
    ACTIONS(371), 1,
      anon_sym_String,
    ACTIONS(375), 1,
      anon_sym_NameAndType,
    ACTIONS(379), 1,
      anon_sym_Integer,
    ACTIONS(377), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(373), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(313), 8,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
      sym__constant_pool_item_type_int,
  [3855] = 7,
    ACTIONS(365), 1,
      anon_sym_class,
    ACTIONS(381), 1,
      sym_interface_keyword,
    STATE(107), 1,
      aux_sym_modifiers_repeat1,
    STATE(356), 1,
      sym_modifiers,
    STATE(430), 1,
      sym_class_keyword,
    STATE(431), 1,
      sym_class_info_def,
    ACTIONS(363), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3888] = 9,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(383), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(37), 1,
      sym_generic_type,
    STATE(121), 1,
      sym_type_parameters,
    STATE(231), 1,
      sym_scoped_type_identifier,
    STATE(241), 1,
      sym_identifier,
    STATE(193), 4,
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
  [3924] = 9,
    ACTIONS(385), 1,
      sym__identifier,
    ACTIONS(387), 1,
      anon_sym_GT,
    ACTIONS(389), 1,
      anon_sym_QMARK,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(346), 1,
      sym_wildcard,
    STATE(232), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [3960] = 9,
    ACTIONS(385), 1,
      sym__identifier,
    ACTIONS(389), 1,
      anon_sym_QMARK,
    ACTIONS(393), 1,
      anon_sym_GT,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(368), 1,
      sym_wildcard,
    STATE(240), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [3996] = 9,
    ACTIONS(385), 1,
      sym__identifier,
    ACTIONS(389), 1,
      anon_sym_QMARK,
    ACTIONS(395), 1,
      anon_sym_GT,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(335), 1,
      sym_wildcard,
    STATE(242), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4032] = 3,
    STATE(109), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(330), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(397), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4055] = 2,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(195), 15,
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
  [4076] = 3,
    STATE(109), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(336), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(399), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4099] = 8,
    ACTIONS(385), 1,
      sym__identifier,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(337), 1,
      sym_vararg,
    STATE(187), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4132] = 8,
    ACTIONS(385), 1,
      sym__identifier,
    ACTIONS(389), 1,
      anon_sym_QMARK,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(425), 1,
      sym_wildcard,
    STATE(254), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4165] = 5,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      aux_sym_modifiers_repeat1,
    STATE(112), 1,
      aux_sym_inner_classes_repeat1,
    STATE(463), 1,
      sym_modifiers,
    ACTIONS(406), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4192] = 5,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      aux_sym_modifiers_repeat1,
    STATE(112), 1,
      aux_sym_inner_classes_repeat1,
    STATE(463), 1,
      sym_modifiers,
    ACTIONS(363), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4219] = 4,
    STATE(107), 1,
      aux_sym_modifiers_repeat1,
    STATE(113), 1,
      aux_sym_inner_classes_repeat1,
    STATE(463), 1,
      sym_modifiers,
    ACTIONS(363), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4243] = 7,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(156), 1,
      sym_identifier,
    STATE(161), 1,
      sym_scoped_type_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(303), 1,
      sym_interface_type_list,
    STATE(164), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(413), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4273] = 7,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(303), 1,
      sym_interface_type_list,
    STATE(233), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4303] = 7,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(458), 1,
      sym_vararg,
    STATE(226), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4333] = 6,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(244), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4360] = 6,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(184), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4387] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(37), 1,
      sym_generic_type,
    STATE(39), 1,
      sym_identifier,
    STATE(41), 1,
      sym_scoped_type_identifier,
    STATE(27), 4,
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
  [4414] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(37), 1,
      sym_generic_type,
    STATE(231), 1,
      sym_scoped_type_identifier,
    STATE(241), 1,
      sym_identifier,
    STATE(275), 4,
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
  [4441] = 1,
    ACTIONS(415), 14,
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
  [4458] = 1,
    ACTIONS(417), 14,
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
  [4475] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(37), 1,
      sym_generic_type,
    STATE(231), 1,
      sym_scoped_type_identifier,
    STATE(241), 1,
      sym_identifier,
    STATE(249), 4,
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
  [4502] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(37), 1,
      sym_generic_type,
    STATE(39), 1,
      sym_identifier,
    STATE(41), 1,
      sym_scoped_type_identifier,
    STATE(25), 4,
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
  [4529] = 6,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(156), 1,
      sym_identifier,
    STATE(161), 1,
      sym_scoped_type_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(208), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(413), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4556] = 6,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(230), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4583] = 6,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(256), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4610] = 6,
    ACTIONS(411), 1,
      sym__identifier,
    STATE(156), 1,
      sym_identifier,
    STATE(161), 1,
      sym_scoped_type_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(177), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(413), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4637] = 6,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(228), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4664] = 6,
    ACTIONS(385), 1,
      sym__identifier,
    STATE(135), 1,
      sym_scoped_type_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(145), 1,
      sym_generic_type,
    STATE(267), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(391), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4691] = 1,
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
  [4707] = 11,
    ACTIONS(421), 1,
      anon_sym_extends,
    ACTIONS(423), 1,
      anon_sym_implements,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(429), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(138), 1,
      sym_type_parameters,
    STATE(152), 1,
      sym_superclass,
    STATE(210), 1,
      sym_super_interfaces,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4743] = 11,
    ACTIONS(421), 1,
      anon_sym_extends,
    ACTIONS(423), 1,
      anon_sym_implements,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(433), 1,
      anon_sym_Constantpool_COLON,
    STATE(143), 1,
      sym_type_parameters,
    STATE(162), 1,
      sym_superclass,
    STATE(188), 1,
      sym_super_interfaces,
    STATE(185), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4779] = 4,
    ACTIONS(435), 1,
      anon_sym_LT,
    ACTIONS(437), 1,
      anon_sym_DOT,
    STATE(151), 1,
      sym_type_arguments,
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
  [4800] = 4,
    ACTIONS(435), 1,
      anon_sym_LT,
    ACTIONS(439), 1,
      anon_sym_DOT,
    STATE(144), 1,
      sym_type_arguments,
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
  [4821] = 2,
    ACTIONS(79), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(81), 11,
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
  [4838] = 9,
    ACTIONS(421), 1,
      anon_sym_extends,
    ACTIONS(423), 1,
      anon_sym_implements,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(441), 1,
      anon_sym_Constantpool_COLON,
    STATE(154), 1,
      sym_superclass,
    STATE(204), 1,
      sym_super_interfaces,
    STATE(205), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4868] = 2,
    ACTIONS(204), 1,
      anon_sym_DOT,
    ACTIONS(206), 10,
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
  [4884] = 2,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(149), 10,
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
  [4900] = 11,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(447), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    STATE(157), 1,
      sym_footer_runtime_visible_annotations,
    STATE(218), 1,
      sym_runtime_visible_type_annotations,
    STATE(281), 1,
      sym_nested_members,
    STATE(385), 1,
      sym_nest_host,
    STATE(535), 1,
      sym_inner_classes,
  [4934] = 11,
    ACTIONS(445), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(447), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    STATE(159), 1,
      sym_footer_runtime_visible_annotations,
    STATE(219), 1,
      sym_runtime_visible_type_annotations,
    STATE(258), 1,
      sym_nested_members,
    STATE(379), 1,
      sym_nest_host,
    STATE(640), 1,
      sym_inner_classes,
  [4968] = 9,
    ACTIONS(421), 1,
      anon_sym_extends,
    ACTIONS(423), 1,
      anon_sym_implements,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(429), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(152), 1,
      sym_superclass,
    STATE(210), 1,
      sym_super_interfaces,
    STATE(211), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4998] = 2,
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
  [5013] = 2,
    ACTIONS(437), 1,
      anon_sym_DOT,
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
  [5028] = 2,
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
  [5043] = 2,
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
  [5058] = 2,
    ACTIONS(208), 1,
      anon_sym_DOT,
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
  [5073] = 3,
    ACTIONS(457), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(179), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [5090] = 3,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(161), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [5107] = 2,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(202), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5122] = 7,
    ACTIONS(423), 1,
      anon_sym_implements,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(462), 1,
      anon_sym_Constantpool_COLON,
    STATE(200), 1,
      sym_super_interfaces,
    STATE(201), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5146] = 1,
    ACTIONS(179), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5158] = 7,
    ACTIONS(423), 1,
      anon_sym_implements,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(464), 1,
      anon_sym_Constantpool_COLON,
    STATE(192), 1,
      sym_super_interfaces,
    STATE(195), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5182] = 1,
    ACTIONS(214), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5194] = 5,
    ACTIONS(466), 1,
      anon_sym_LT,
    ACTIONS(468), 1,
      anon_sym_DOT,
    STATE(194), 1,
      sym_type_arguments,
    ACTIONS(184), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(186), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5214] = 9,
    ACTIONS(447), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    STATE(219), 1,
      sym_runtime_visible_type_annotations,
    STATE(258), 1,
      sym_nested_members,
    STATE(379), 1,
      sym_nest_host,
    STATE(640), 1,
      sym_inner_classes,
  [5242] = 1,
    ACTIONS(222), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5254] = 9,
    ACTIONS(447), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    STATE(206), 1,
      sym_runtime_visible_type_annotations,
    STATE(278), 1,
      sym_nested_members,
    STATE(381), 1,
      sym_nest_host,
    STATE(509), 1,
      sym_inner_classes,
  [5282] = 5,
    ACTIONS(472), 1,
      anon_sym_LBRACK,
    STATE(384), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(475), 1,
      sym_runtime_annotation_element_value,
    STATE(476), 2,
      sym_runtime_annotation_element_value_array,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(474), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [5302] = 5,
    ACTIONS(466), 1,
      anon_sym_LT,
    ACTIONS(476), 1,
      anon_sym_DOT,
    STATE(196), 1,
      sym_type_arguments,
    ACTIONS(171), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(173), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5322] = 7,
    ACTIONS(423), 1,
      anon_sym_implements,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(478), 1,
      anon_sym_Constantpool_COLON,
    STATE(203), 1,
      sym_super_interfaces,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5346] = 2,
    ACTIONS(193), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(195), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5360] = 7,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(212), 1,
      aux_sym_dimensions_repeat1,
    STATE(225), 1,
      sym_dimensions,
    STATE(266), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(482), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5383] = 8,
    ACTIONS(488), 1,
      anon_sym_extends,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_LT,
    STATE(248), 1,
      sym_type_parameters,
    STATE(295), 1,
      sym_superclass,
    STATE(484), 1,
      sym_super_interfaces,
    STATE(531), 1,
      sym_class_def_plain_body,
  [5408] = 3,
    ACTIONS(498), 1,
      sym_number,
    STATE(166), 2,
      sym_footer_runtime_visible_annotation,
      aux_sym_footer_runtime_visible_annotations_repeat1,
    ACTIONS(496), 5,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5423] = 4,
    ACTIONS(260), 1,
      sym_number,
    STATE(581), 1,
      sym__runtime_index,
    STATE(167), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(258), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5440] = 1,
    ACTIONS(501), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [5451] = 4,
    ACTIONS(271), 1,
      sym_number,
    STATE(581), 1,
      sym__runtime_index,
    STATE(167), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(269), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5468] = 8,
    ACTIONS(488), 1,
      anon_sym_extends,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_LT,
    STATE(246), 1,
      sym_type_parameters,
    STATE(310), 1,
      sym_superclass,
    STATE(455), 1,
      sym_super_interfaces,
    STATE(568), 1,
      sym_class_def_plain_body,
  [5493] = 2,
    ACTIONS(147), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(149), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5506] = 3,
    ACTIONS(505), 1,
      sym_number,
    STATE(166), 2,
      sym_footer_runtime_visible_annotation,
      aux_sym_footer_runtime_visible_annotations_repeat1,
    ACTIONS(503), 5,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5521] = 8,
    ACTIONS(488), 1,
      anon_sym_extends,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_LT,
    STATE(245), 1,
      sym_type_parameters,
    STATE(307), 1,
      sym_superclass,
    STATE(456), 1,
      sym_super_interfaces,
    STATE(565), 1,
      sym_class_def_plain_body,
  [5546] = 8,
    ACTIONS(488), 1,
      anon_sym_extends,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_LT,
    STATE(243), 1,
      sym_type_parameters,
    STATE(294), 1,
      sym_superclass,
    STATE(486), 1,
      sym_super_interfaces,
    STATE(528), 1,
      sym_class_def_plain_body,
  [5571] = 2,
    ACTIONS(204), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(206), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5584] = 3,
    ACTIONS(476), 1,
      anon_sym_DOT,
    ACTIONS(171), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(173), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5598] = 5,
    ACTIONS(143), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(212), 1,
      aux_sym_dimensions_repeat1,
    STATE(225), 1,
      sym_dimensions,
    ACTIONS(145), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5616] = 1,
    ACTIONS(507), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [5626] = 2,
    ACTIONS(208), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(210), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5638] = 4,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(557), 1,
      sym__hash_number,
    STATE(216), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(509), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5654] = 3,
    ACTIONS(385), 1,
      sym__identifier,
    ACTIONS(513), 2,
      anon_sym_open,
      anon_sym_module,
    STATE(396), 4,
      sym_identifier,
      sym_scoped_identifier,
      sym__name,
      sym__reserved_identifier,
  [5668] = 1,
    ACTIONS(515), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [5678] = 2,
    ACTIONS(155), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(157), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5690] = 6,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(519), 1,
      anon_sym_AMP,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    STATE(322), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5710] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(429), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5728] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(521), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5746] = 7,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    STATE(336), 1,
      aux_sym_args_repeat1,
  [5768] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(529), 1,
      anon_sym_Constantpool_COLON,
    STATE(209), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5786] = 2,
    ACTIONS(139), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(141), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5798] = 1,
    ACTIONS(531), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [5808] = 1,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
  [5818] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(533), 1,
      anon_sym_Constantpool_COLON,
    STATE(214), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5836] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(535), 1,
      sym__identifier,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(375), 1,
      sym_identifier,
    STATE(576), 1,
      sym_args,
  [5858] = 2,
    ACTIONS(167), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(169), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5870] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(539), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5888] = 2,
    ACTIONS(200), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(202), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5900] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(535), 1,
      sym__identifier,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(457), 1,
      sym_identifier,
    STATE(562), 1,
      sym_args,
  [5922] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(541), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5940] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(543), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5958] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(545), 1,
      anon_sym_Constantpool_COLON,
    STATE(186), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5976] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(547), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5994] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(549), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6012] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(551), 1,
      anon_sym_Constantpool_COLON,
    STATE(199), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6030] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(553), 1,
      anon_sym_Constantpool_COLON,
    STATE(198), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6048] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(555), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6066] = 7,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(557), 1,
      ts_builtin_sym_end,
    STATE(255), 1,
      sym_nested_members,
    STATE(350), 1,
      sym_nest_host,
    STATE(613), 1,
      sym_inner_classes,
  [6088] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(559), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6106] = 5,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(212), 1,
      aux_sym_dimensions_repeat1,
    STATE(225), 1,
      sym_dimensions,
    ACTIONS(561), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(563), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6124] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(565), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6142] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(567), 1,
      anon_sym_Constantpool_COLON,
    STATE(202), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6160] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(441), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6178] = 4,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(159), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(161), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6194] = 4,
    ACTIONS(569), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(177), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(179), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6210] = 5,
    ACTIONS(427), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(572), 1,
      anon_sym_Constantpool_COLON,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6228] = 5,
    ACTIONS(574), 1,
      anon_sym_flags_COLON,
    ACTIONS(577), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(579), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(215), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(363), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6246] = 4,
    ACTIONS(584), 1,
      anon_sym_POUND,
    STATE(557), 1,
      sym__hash_number,
    STATE(216), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(582), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6262] = 4,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(557), 1,
      sym__hash_number,
    STATE(180), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(587), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6278] = 7,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      sym_nested_members,
    STATE(372), 1,
      sym_nest_host,
    STATE(525), 1,
      sym_inner_classes,
  [6300] = 7,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    STATE(284), 1,
      sym_nested_members,
    STATE(376), 1,
      sym_nest_host,
    STATE(540), 1,
      sym_inner_classes,
  [6322] = 7,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    ACTIONS(595), 1,
      anon_sym_Signature_COLON,
    ACTIONS(597), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(141), 1,
      sym_source_file_def,
    STATE(264), 1,
      sym_block,
    STATE(469), 1,
      sym_signature,
    STATE(553), 1,
      sym_footer,
  [6344] = 2,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(599), 5,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [6355] = 2,
    ACTIONS(212), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(214), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6366] = 1,
    ACTIONS(603), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6375] = 3,
    STATE(378), 1,
      sym__runtime_annotation_element_value_simple,
    STATE(384), 1,
      sym_runtime_annotation_element_value_tag,
    ACTIONS(474), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [6388] = 2,
    ACTIONS(220), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(222), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6399] = 5,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    ACTIONS(605), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6416] = 3,
    ACTIONS(609), 1,
      sym__identifier,
    STATE(227), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(607), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6429] = 6,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    STATE(394), 1,
      aux_sym_interface_type_list_repeat1,
  [6448] = 3,
    ACTIONS(616), 1,
      sym__identifier,
    STATE(227), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(614), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6461] = 4,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    ACTIONS(618), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [6476] = 4,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(620), 1,
      anon_sym_LT,
    STATE(42), 1,
      sym_type_arguments,
    ACTIONS(173), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [6491] = 6,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_GT,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    STATE(344), 1,
      aux_sym_type_arguments_repeat1,
  [6510] = 6,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    STATE(387), 1,
      aux_sym_interface_type_list_repeat1,
  [6529] = 1,
    ACTIONS(626), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6538] = 1,
    ACTIONS(628), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6547] = 5,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      sym_comment,
    ACTIONS(636), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(274), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(632), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6564] = 3,
    STATE(384), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(492), 1,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(474), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [6577] = 1,
    ACTIONS(638), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6586] = 5,
    ACTIONS(640), 1,
      anon_sym_extends,
    ACTIONS(644), 1,
      sym_super,
    STATE(128), 1,
      sym_extends,
    STATE(420), 1,
      sym__wildcard_bounds,
    ACTIONS(642), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6603] = 6,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_GT,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    STATE(361), 1,
      aux_sym_type_arguments_repeat1,
  [6622] = 4,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(620), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym_type_arguments,
    ACTIONS(186), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__identifier,
  [6637] = 6,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_GT,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    STATE(334), 1,
      aux_sym_type_arguments_repeat1,
  [6656] = 6,
    ACTIONS(488), 1,
      anon_sym_extends,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(286), 1,
      sym_superclass,
    STATE(417), 1,
      sym_super_interfaces,
    STATE(612), 1,
      sym_class_def_plain_body,
  [6675] = 4,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    ACTIONS(145), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [6690] = 6,
    ACTIONS(488), 1,
      anon_sym_extends,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym_superclass,
    STATE(496), 1,
      sym_super_interfaces,
    STATE(513), 1,
      sym_class_def_plain_body,
  [6709] = 6,
    ACTIONS(488), 1,
      anon_sym_extends,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(301), 1,
      sym_superclass,
    STATE(480), 1,
      sym_super_interfaces,
    STATE(534), 1,
      sym_class_def_plain_body,
  [6728] = 2,
    ACTIONS(177), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(179), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6739] = 6,
    ACTIONS(488), 1,
      anon_sym_extends,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(305), 1,
      sym_superclass,
    STATE(426), 1,
      sym_super_interfaces,
    STATE(599), 1,
      sym_class_def_plain_body,
  [6758] = 5,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(32), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(477), 1,
      sym_identifier,
  [6774] = 4,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(272), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(650), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6788] = 3,
    ACTIONS(656), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(654), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6800] = 5,
    ACTIONS(660), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(662), 1,
      sym__path_segment,
    ACTIONS(664), 1,
      anon_sym_SLASH,
    STATE(604), 1,
      sym__rest_of_the_line,
    STATE(605), 1,
      sym_file_path,
  [6816] = 4,
    ACTIONS(93), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(666), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(98), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6830] = 4,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    ACTIONS(669), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6844] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(671), 1,
      ts_builtin_sym_end,
    STATE(383), 1,
      sym_nest_host,
    STATE(521), 1,
      sym_inner_classes,
  [6860] = 4,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    ACTIONS(673), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6874] = 2,
    ACTIONS(677), 1,
      sym_comment,
    ACTIONS(675), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6884] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    STATE(381), 1,
      sym_nest_host,
    STATE(509), 1,
      sym_inner_classes,
  [6900] = 4,
    ACTIONS(89), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(91), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6914] = 4,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      sym_number,
    STATE(268), 1,
      aux_sym_code_info_repeat1,
    STATE(302), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [6928] = 1,
    ACTIONS(322), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6936] = 2,
    ACTIONS(685), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(515), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [6946] = 4,
    ACTIONS(143), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6960] = 5,
    ACTIONS(595), 1,
      anon_sym_Signature_COLON,
    ACTIONS(597), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(141), 1,
      sym_source_file_def,
    STATE(469), 1,
      sym_signature,
    STATE(518), 1,
      sym_footer,
  [6976] = 2,
    ACTIONS(690), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(531), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [6986] = 4,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(263), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(692), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7000] = 4,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      aux_sym_dimensions_repeat1,
    STATE(158), 1,
      sym_dimensions,
    ACTIONS(563), 2,
      anon_sym_implements,
      anon_sym_LBRACE,
  [7014] = 4,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      sym_number,
    STATE(388), 1,
      aux_sym_code_info_repeat1,
    STATE(300), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7028] = 1,
    ACTIONS(318), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7036] = 4,
    ACTIONS(83), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(87), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7050] = 4,
    ACTIONS(640), 1,
      anon_sym_extends,
    STATE(119), 1,
      sym_extends,
    STATE(448), 1,
      sym_type_bound,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7064] = 4,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(273), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(698), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7078] = 4,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(273), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(705), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7092] = 4,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(273), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(650), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7106] = 5,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(32), 1,
      aux_sym_dimensions_repeat1,
    STATE(48), 1,
      sym_dimensions,
    STATE(498), 1,
      sym_identifier,
  [7122] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(709), 1,
      ts_builtin_sym_end,
    STATE(401), 1,
      sym_nest_host,
    STATE(593), 1,
      sym_inner_classes,
  [7138] = 1,
    ACTIONS(314), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7146] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(351), 1,
      sym_nest_host,
    STATE(616), 1,
      sym_inner_classes,
  [7162] = 2,
    ACTIONS(715), 1,
      sym_comment,
    ACTIONS(713), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7172] = 2,
    ACTIONS(719), 1,
      sym_comment,
    ACTIONS(717), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7182] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    STATE(379), 1,
      sym_nest_host,
    STATE(640), 1,
      sym_inner_classes,
  [7198] = 2,
    ACTIONS(723), 1,
      sym_comment,
    ACTIONS(721), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7208] = 1,
    ACTIONS(310), 5,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7216] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    STATE(347), 1,
      sym_nest_host,
    STATE(619), 1,
      sym_inner_classes,
  [7232] = 4,
    ACTIONS(727), 1,
      sym__identifier,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym_runtime_annotation_args_repeat1,
    STATE(573), 1,
      sym_identifier,
  [7245] = 4,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(465), 1,
      sym_super_interfaces,
    STATE(554), 1,
      sym_class_def_plain_body,
  [7258] = 4,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(412), 1,
      sym_super_interfaces,
    STATE(624), 1,
      sym_class_def_plain_body,
  [7271] = 3,
    ACTIONS(117), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(732), 1,
      sym_flag_value,
    ACTIONS(119), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7282] = 2,
    ACTIONS(734), 1,
      anon_sym_DOT,
    ACTIONS(599), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7291] = 1,
    ACTIONS(736), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7298] = 4,
    ACTIONS(535), 1,
      sym__identifier,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym_runtime_annotation_args_repeat1,
    STATE(573), 1,
      sym_identifier,
  [7311] = 3,
    ACTIONS(271), 1,
      sym_number,
    STATE(581), 1,
      sym__runtime_index,
    STATE(169), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
  [7322] = 4,
    ACTIONS(740), 1,
      anon_sym_POUND,
    ACTIONS(742), 1,
      sym_number,
    ACTIONS(744), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym__endl,
  [7335] = 4,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(424), 1,
      sym_super_interfaces,
    STATE(602), 1,
      sym_class_def_plain_body,
  [7348] = 4,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(437), 1,
      sym_super_interfaces,
    STATE(590), 1,
      sym_class_def_plain_body,
  [7361] = 1,
    ACTIONS(748), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7368] = 3,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [7379] = 4,
    ACTIONS(535), 1,
      sym__identifier,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_runtime_annotation_args_repeat1,
    STATE(573), 1,
      sym_identifier,
  [7392] = 3,
    ACTIONS(755), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(757), 1,
      sym_number,
    STATE(299), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7403] = 3,
    ACTIONS(683), 1,
      sym_number,
    ACTIONS(760), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(299), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7414] = 4,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(446), 1,
      sym_super_interfaces,
    STATE(585), 1,
      sym_class_def_plain_body,
  [7427] = 3,
    ACTIONS(683), 1,
      sym_number,
    ACTIONS(762), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(299), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7438] = 2,
    ACTIONS(766), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(764), 3,
      anon_sym_LBRACE,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7447] = 2,
    ACTIONS(123), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(125), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7456] = 4,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(450), 1,
      sym_super_interfaces,
    STATE(572), 1,
      sym_class_def_plain_body,
  [7469] = 1,
    ACTIONS(768), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7476] = 4,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(404), 1,
      sym_super_interfaces,
    STATE(522), 1,
      sym_class_def_plain_body,
  [7489] = 1,
    ACTIONS(770), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7496] = 4,
    ACTIONS(511), 1,
      anon_sym_POUND,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym_footer_runtime_visible_annotation_element_arg,
    STATE(596), 1,
      sym__hash_number,
  [7509] = 4,
    ACTIONS(490), 1,
      anon_sym_implements,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(478), 1,
      sym_super_interfaces,
    STATE(538), 1,
      sym_class_def_plain_body,
  [7522] = 1,
    ACTIONS(774), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7529] = 1,
    ACTIONS(776), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7536] = 1,
    ACTIONS(778), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7543] = 1,
    ACTIONS(780), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7550] = 3,
    ACTIONS(782), 1,
      anon_sym_AMP,
    STATE(315), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7561] = 2,
    ACTIONS(787), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(785), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7570] = 4,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_EQ,
    ACTIONS(793), 1,
      sym__endl,
    STATE(391), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7583] = 3,
    ACTIONS(239), 1,
      sym_number,
    STATE(623), 1,
      sym__runtime_index,
    STATE(53), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
  [7594] = 4,
    ACTIONS(660), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(795), 1,
      anon_sym_SLASH,
    STATE(358), 1,
      aux_sym_file_path_repeat1,
    STATE(551), 1,
      sym__rest_of_the_line,
  [7607] = 4,
    ACTIONS(660), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(795), 1,
      anon_sym_SLASH,
    STATE(319), 1,
      aux_sym_file_path_repeat1,
    STATE(579), 1,
      sym__rest_of_the_line,
  [7620] = 4,
    ACTIONS(660), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(795), 1,
      anon_sym_SLASH,
    STATE(358), 1,
      aux_sym_file_path_repeat1,
    STATE(579), 1,
      sym__rest_of_the_line,
  [7633] = 3,
    ACTIONS(519), 1,
      anon_sym_AMP,
    STATE(315), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(797), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7644] = 2,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7653] = 3,
    ACTIONS(271), 1,
      sym_number,
    STATE(642), 1,
      sym__runtime_index,
    STATE(62), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
  [7664] = 2,
    ACTIONS(93), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(98), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7673] = 4,
    ACTIONS(660), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(795), 1,
      anon_sym_SLASH,
    STATE(321), 1,
      aux_sym_file_path_repeat1,
    STATE(591), 1,
      sym__rest_of_the_line,
  [7686] = 4,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(801), 1,
      sym__endl,
    STATE(342), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7699] = 3,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      aux_sym_footer_runtime_visible_annotation_element_args_repeat1,
  [7709] = 1,
    ACTIONS(690), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [7715] = 3,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    ACTIONS(809), 1,
      anon_sym_throws,
    STATE(594), 1,
      sym_method_throws,
  [7725] = 3,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(271), 1,
      sym_identifier,
    STATE(339), 1,
      sym_type_parameter,
  [7735] = 3,
    ACTIONS(809), 1,
      anon_sym_throws,
    ACTIONS(811), 1,
      anon_sym_SEMI,
    STATE(577), 1,
      sym_method_throws,
  [7745] = 3,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(271), 1,
      sym_identifier,
    STATE(352), 1,
      sym_type_parameter,
  [7755] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_GT,
    STATE(357), 1,
      aux_sym_type_arguments_repeat1,
  [7765] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_GT,
    STATE(334), 1,
      aux_sym_type_arguments_repeat1,
  [7775] = 3,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      aux_sym_args_repeat1,
  [7785] = 3,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      aux_sym_args_repeat1,
  [7795] = 3,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_GT,
    STATE(354), 1,
      aux_sym_type_parameters_repeat1,
  [7805] = 3,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(821), 1,
      anon_sym_GT,
    STATE(338), 1,
      aux_sym_type_parameters_repeat1,
  [7815] = 3,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      sym__endl,
    STATE(398), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7825] = 3,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      sym__endl,
    STATE(340), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7835] = 3,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      sym__endl,
    STATE(398), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7845] = 3,
    ACTIONS(809), 1,
      anon_sym_throws,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    STATE(632), 1,
      sym_method_throws,
  [7855] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_GT,
    STATE(357), 1,
      aux_sym_type_arguments_repeat1,
  [7865] = 3,
    ACTIONS(833), 1,
      anon_sym_descriptor_COLON,
    STATE(92), 1,
      sym__method_def_verbose,
    STATE(495), 1,
      sym_descriptor_def,
  [7875] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_GT,
    STATE(344), 1,
      aux_sym_type_arguments_repeat1,
  [7885] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(835), 1,
      ts_builtin_sym_end,
    STATE(519), 1,
      sym_inner_classes,
  [7895] = 3,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_GT,
    STATE(354), 1,
      aux_sym_type_parameters_repeat1,
  [7905] = 1,
    ACTIONS(685), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [7911] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(671), 1,
      ts_builtin_sym_end,
    STATE(521), 1,
      sym_inner_classes,
  [7921] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(839), 1,
      ts_builtin_sym_end,
    STATE(524), 1,
      sym_inner_classes,
  [7931] = 3,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(841), 1,
      anon_sym_GT,
    STATE(348), 1,
      aux_sym_type_parameters_repeat1,
  [7941] = 3,
    ACTIONS(660), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(843), 1,
      sym__path_segment,
    STATE(591), 1,
      sym__rest_of_the_line,
  [7951] = 3,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(848), 1,
      anon_sym_GT,
    STATE(354), 1,
      aux_sym_type_parameters_repeat1,
  [7961] = 3,
    ACTIONS(365), 1,
      anon_sym_class,
    ACTIONS(850), 1,
      sym_interface_keyword,
    STATE(441), 1,
      sym_class_keyword,
  [7971] = 3,
    ACTIONS(365), 1,
      anon_sym_class,
    ACTIONS(852), 1,
      sym_interface_keyword,
    STATE(445), 1,
      sym_class_keyword,
  [7981] = 3,
    ACTIONS(669), 1,
      anon_sym_GT,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_type_arguments_repeat1,
  [7991] = 3,
    ACTIONS(857), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(859), 1,
      anon_sym_SLASH,
    STATE(358), 1,
      aux_sym_file_path_repeat1,
  [8001] = 3,
    ACTIONS(809), 1,
      anon_sym_throws,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    STATE(636), 1,
      sym_method_throws,
  [8011] = 3,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(271), 1,
      sym_identifier,
    STATE(366), 1,
      sym_type_parameter,
  [8021] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_GT,
    STATE(357), 1,
      aux_sym_type_arguments_repeat1,
  [8031] = 3,
    ACTIONS(511), 1,
      anon_sym_POUND,
    ACTIONS(866), 1,
      sym_number,
    STATE(236), 1,
      sym__hash_number,
  [8041] = 2,
    ACTIONS(870), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(868), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [8049] = 3,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_args_repeat1,
  [8059] = 3,
    ACTIONS(511), 1,
      anon_sym_POUND,
    ACTIONS(875), 1,
      sym_number,
    STATE(251), 1,
      sym__hash_number,
  [8069] = 3,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(877), 1,
      anon_sym_GT,
    STATE(402), 1,
      aux_sym_type_parameters_repeat1,
  [8079] = 3,
    ACTIONS(879), 1,
      anon_sym_POUND,
    STATE(221), 1,
      sym__hash_number,
    STATE(282), 1,
      sym_ref_const_pool_item,
  [8089] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_GT,
    STATE(361), 1,
      aux_sym_type_arguments_repeat1,
  [8099] = 3,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [8109] = 2,
    STATE(61), 1,
      sym_boolean_literal,
    ACTIONS(886), 2,
      anon_sym_true,
      anon_sym_false,
  [8117] = 2,
    ACTIONS(888), 1,
      anon_sym_parameter,
    STATE(71), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
  [8125] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(709), 1,
      ts_builtin_sym_end,
    STATE(593), 1,
      sym_inner_classes,
  [8135] = 3,
    ACTIONS(890), 1,
      aux_sym_code_info_stat_token1,
    STATE(260), 1,
      sym_code_info_stat,
    STATE(419), 1,
      sym_code_info,
  [8145] = 3,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [8155] = 3,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(896), 1,
      anon_sym_SEMI,
    STATE(332), 1,
      sym_args,
  [8165] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    STATE(619), 1,
      sym_inner_classes,
  [8175] = 1,
    ACTIONS(898), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8181] = 3,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [8191] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    STATE(509), 1,
      sym_inner_classes,
  [8201] = 2,
    ACTIONS(505), 1,
      sym_number,
    STATE(172), 2,
      sym_footer_runtime_visible_annotation,
      aux_sym_footer_runtime_visible_annotations_repeat1,
  [8209] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(616), 1,
      sym_inner_classes,
  [8219] = 2,
    ACTIONS(902), 1,
      sym__identifier,
    STATE(229), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [8227] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(904), 1,
      ts_builtin_sym_end,
    STATE(598), 1,
      sym_inner_classes,
  [8237] = 3,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(289), 1,
      sym__hash_number,
    STATE(377), 1,
      sym_ref_const_pool_item,
  [8247] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    STATE(640), 1,
      sym_inner_classes,
  [8257] = 3,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      aux_sym_footer_runtime_visible_annotation_element_args_repeat1,
  [8267] = 3,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
    STATE(297), 1,
      aux_sym_interface_type_list_repeat1,
  [8277] = 3,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    ACTIONS(914), 1,
      sym_number,
    STATE(388), 1,
      aux_sym_code_info_repeat1,
  [8287] = 3,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_footer_runtime_visible_annotation_element_args_repeat1,
  [8297] = 3,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(271), 1,
      sym_identifier,
    STATE(416), 1,
      sym_type_parameter,
  [8307] = 3,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      sym__endl,
    STATE(398), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8317] = 3,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(470), 1,
      sym_footer_runtime_visible_annotation_element_arg,
    STATE(596), 1,
      sym__hash_number,
  [8327] = 3,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_EQ,
    ACTIONS(924), 1,
      sym__endl,
  [8337] = 3,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_interface_type_list_repeat1,
  [8347] = 3,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      sym__endl,
    STATE(397), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8357] = 3,
    ACTIONS(928), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      anon_sym_DOT,
    STATE(235), 1,
      sym_runtime_annotation_args,
  [8367] = 3,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      sym__endl,
    STATE(398), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8377] = 3,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(937), 1,
      sym__endl,
    STATE(398), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8387] = 2,
    ACTIONS(939), 1,
      anon_sym_line,
    STATE(20), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [8395] = 3,
    ACTIONS(239), 1,
      sym_number,
    STATE(89), 1,
      sym_runtime_visible_parameter_annotation_param,
    STATE(529), 1,
      sym__runtime_index,
  [8405] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
    STATE(603), 1,
      sym_inner_classes,
  [8415] = 3,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(943), 1,
      anon_sym_GT,
    STATE(354), 1,
      aux_sym_type_parameters_repeat1,
  [8425] = 2,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(288), 1,
      sym__wrapped_hex_val,
  [8432] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(620), 1,
      sym_class_def_plain_body,
  [8439] = 2,
    ACTIONS(947), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(261), 1,
      sym__rest_of_the_line,
  [8446] = 2,
    ACTIONS(879), 1,
      anon_sym_POUND,
    STATE(621), 1,
      sym__hash_number,
  [8453] = 1,
    ACTIONS(949), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [8458] = 1,
    ACTIONS(951), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [8463] = 1,
    ACTIONS(953), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8468] = 1,
    ACTIONS(955), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [8473] = 2,
    ACTIONS(879), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym__hash_number,
  [8480] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(549), 1,
      sym_class_def_plain_body,
  [8487] = 2,
    ACTIONS(879), 1,
      anon_sym_POUND,
    STATE(257), 1,
      sym__hash_number,
  [8494] = 2,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym__hash_number,
  [8501] = 2,
    ACTIONS(957), 1,
      anon_sym_Lastmodified,
    STATE(429), 1,
      sym_header_info_last_mod,
  [8508] = 1,
    ACTIONS(848), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8513] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(550), 1,
      sym_class_def_plain_body,
  [8520] = 2,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    STATE(544), 1,
      sym_footer_runtime_visible_annotation_element_args,
  [8527] = 2,
    ACTIONS(961), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(47), 1,
      sym_line_number_table_def,
  [8534] = 1,
    ACTIONS(963), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8539] = 2,
    ACTIONS(879), 1,
      anon_sym_POUND,
    STATE(637), 1,
      sym__hash_number,
  [8546] = 2,
    ACTIONS(965), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym__wrapped_hex_val,
  [8553] = 2,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(170), 1,
      sym_identifier,
  [8560] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(560), 1,
      sym_class_def_plain_body,
  [8567] = 1,
    ACTIONS(669), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8572] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(567), 1,
      sym_class_def_plain_body,
  [8579] = 2,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(173), 1,
      sym_identifier,
  [8586] = 2,
    ACTIONS(947), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(584), 1,
      sym__rest_of_the_line,
  [8593] = 2,
    ACTIONS(967), 1,
      anon_sym_MD5checksum,
    STATE(443), 1,
      sym_header_info_md5,
  [8600] = 2,
    ACTIONS(969), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
  [8607] = 2,
    ACTIONS(971), 1,
      anon_sym_Constantpool_COLON,
    STATE(220), 1,
      sym_constant_pool_def,
  [8614] = 2,
    ACTIONS(947), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(269), 1,
      sym__rest_of_the_line,
  [8621] = 2,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(569), 1,
      sym__hash_number,
  [8628] = 2,
    ACTIONS(969), 1,
      sym__identifier,
    STATE(175), 1,
      sym_identifier,
  [8635] = 2,
    ACTIONS(973), 1,
      anon_sym_POUND,
    STATE(566), 1,
      sym__hash_number,
  [8642] = 2,
    ACTIONS(975), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(72), 1,
      sym__rest_of_the_line,
  [8649] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(587), 1,
      sym_class_def_plain_body,
  [8656] = 2,
    ACTIONS(969), 1,
      sym__identifier,
    STATE(171), 1,
      sym_identifier,
  [8663] = 2,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(165), 1,
      sym_identifier,
  [8670] = 1,
    ACTIONS(977), 2,
      anon_sym_COMMA,
      sym_number,
  [8675] = 2,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(174), 1,
      sym_identifier,
  [8682] = 2,
    ACTIONS(890), 1,
      aux_sym_code_info_stat_token1,
    STATE(460), 1,
      sym_code_info_stat,
  [8689] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(123), 1,
      sym_header_info_compile,
  [8696] = 1,
    ACTIONS(979), 2,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
  [8701] = 2,
    ACTIONS(969), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
  [8708] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(589), 1,
      sym_class_def_plain_body,
  [8715] = 1,
    ACTIONS(857), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [8720] = 1,
    ACTIONS(981), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8725] = 2,
    ACTIONS(975), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(75), 1,
      sym__rest_of_the_line,
  [8732] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(630), 1,
      sym_class_def_plain_body,
  [8739] = 2,
    ACTIONS(975), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(76), 1,
      sym__rest_of_the_line,
  [8746] = 2,
    ACTIONS(975), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(77), 1,
      sym__rest_of_the_line,
  [8753] = 2,
    ACTIONS(947), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(277), 1,
      sym__rest_of_the_line,
  [8760] = 2,
    ACTIONS(975), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(78), 1,
      sym__rest_of_the_line,
  [8767] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(537), 1,
      sym_class_def_plain_body,
  [8774] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(520), 1,
      sym_class_def_plain_body,
  [8781] = 2,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(343), 1,
      sym_args,
  [8788] = 1,
    ACTIONS(605), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8793] = 1,
    ACTIONS(983), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [8798] = 1,
    ACTIONS(914), 2,
      anon_sym_COMMA,
      sym_number,
  [8803] = 2,
    ACTIONS(985), 1,
      aux_sym_instruction_token1,
    STATE(491), 1,
      sym_instruction,
  [8810] = 2,
    ACTIONS(879), 1,
      anon_sym_POUND,
    STATE(279), 1,
      sym__hash_number,
  [8817] = 2,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(571), 1,
      sym__hash_number,
  [8824] = 2,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(444), 1,
      sym_identifier,
  [8831] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(627), 1,
      sym_class_def_plain_body,
  [8838] = 2,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(514), 1,
      sym__hash_number,
  [8845] = 2,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(139), 1,
      sym_identifier,
  [8852] = 2,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(140), 1,
      sym_identifier,
  [8859] = 2,
    ACTIONS(597), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(142), 1,
      sym_source_file_def,
  [8866] = 1,
    ACTIONS(909), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8871] = 2,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(533), 1,
      sym__hash_number,
  [8878] = 2,
    ACTIONS(987), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
  [8885] = 2,
    ACTIONS(987), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
  [8892] = 2,
    ACTIONS(879), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym__hash_number,
  [8899] = 1,
    ACTIONS(989), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8904] = 1,
    ACTIONS(991), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8909] = 2,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(330), 1,
      sym_args,
  [8916] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(580), 1,
      sym_class_def_plain_body,
  [8923] = 2,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(501), 1,
      sym_identifier,
  [8930] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(586), 1,
      sym_class_def_plain_body,
  [8937] = 2,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      sym__endl,
  [8944] = 2,
    ACTIONS(879), 1,
      anon_sym_POUND,
    STATE(609), 1,
      sym__hash_number,
  [8951] = 2,
    ACTIONS(947), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(283), 1,
      sym__rest_of_the_line,
  [8958] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(595), 1,
      sym_class_def_plain_body,
  [8965] = 2,
    ACTIONS(975), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(52), 1,
      sym__rest_of_the_line,
  [8972] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(606), 1,
      sym_class_def_plain_body,
  [8979] = 2,
    ACTIONS(511), 1,
      anon_sym_POUND,
    STATE(418), 1,
      sym__hash_number,
  [8986] = 1,
    ACTIONS(997), 2,
      anon_sym_RPAREN,
      sym__identifier,
  [8991] = 2,
    ACTIONS(999), 1,
      anon_sym_throws,
    STATE(63), 1,
      sym_method_throws,
  [8998] = 1,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9003] = 2,
    ACTIONS(1003), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym__endl,
  [9010] = 1,
    ACTIONS(884), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9015] = 2,
    ACTIONS(1007), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym__endl,
  [9022] = 2,
    ACTIONS(879), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym__hash_number,
  [9029] = 2,
    ACTIONS(1011), 1,
      anon_sym_flags_COLON,
    STATE(4), 1,
      sym_flag_def,
  [9036] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(633), 1,
      sym_class_def_plain_body,
  [9043] = 2,
    ACTIONS(975), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(488), 1,
      sym__rest_of_the_line,
  [9050] = 2,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
      sym_args,
  [9057] = 1,
    ACTIONS(1013), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9062] = 1,
    ACTIONS(1015), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [9067] = 1,
    ACTIONS(1017), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [9072] = 2,
    ACTIONS(1019), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym__endl,
  [9079] = 2,
    ACTIONS(975), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(88), 1,
      sym__rest_of_the_line,
  [9086] = 1,
    ACTIONS(1023), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [9091] = 1,
    ACTIONS(1025), 1,
      sym_number,
  [9095] = 1,
    ACTIONS(1027), 1,
      anon_sym_default_value_COLON,
  [9099] = 1,
    ACTIONS(1029), 1,
      sym_number,
  [9103] = 1,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
  [9107] = 1,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
  [9111] = 1,
    ACTIONS(1033), 1,
      aux_sym_header_info_compile_token1,
  [9115] = 1,
    ACTIONS(1035), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [9119] = 1,
    ACTIONS(1037), 1,
      sym_hex_value,
  [9123] = 1,
    ACTIONS(1039), 1,
      ts_builtin_sym_end,
  [9127] = 1,
    ACTIONS(1041), 1,
      sym_comment,
  [9131] = 1,
    ACTIONS(1043), 1,
      anon_sym_DQUOTE,
  [9135] = 1,
    ACTIONS(1045), 1,
      aux_sym_class_info_item_simple_token1,
  [9139] = 1,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
  [9143] = 1,
    ACTIONS(1049), 1,
      ts_builtin_sym_end,
  [9147] = 1,
    ACTIONS(1051), 1,
      ts_builtin_sym_end,
  [9151] = 1,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
  [9155] = 1,
    ACTIONS(904), 1,
      ts_builtin_sym_end,
  [9159] = 1,
    ACTIONS(1055), 1,
      ts_builtin_sym_end,
  [9163] = 1,
    ACTIONS(1057), 1,
      sym_number,
  [9167] = 1,
    ACTIONS(1059), 1,
      ts_builtin_sym_end,
  [9171] = 1,
    ACTIONS(709), 1,
      ts_builtin_sym_end,
  [9175] = 1,
    ACTIONS(1061), 1,
      anon_sym_class,
  [9179] = 1,
    ACTIONS(1063), 1,
      anon_sym_COLON2,
  [9183] = 1,
    ACTIONS(1065), 1,
      ts_builtin_sym_end,
  [9187] = 1,
    ACTIONS(1067), 1,
      sym__endl,
  [9191] = 1,
    ACTIONS(1069), 1,
      sym_descriptor_value,
  [9195] = 1,
    ACTIONS(1071), 1,
      ts_builtin_sym_end,
  [9199] = 1,
    ACTIONS(1073), 1,
      sym_comment,
  [9203] = 1,
    ACTIONS(1075), 1,
      anon_sym_COLON2,
  [9207] = 1,
    ACTIONS(1077), 1,
      ts_builtin_sym_end,
  [9211] = 1,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
  [9215] = 1,
    ACTIONS(1079), 1,
      sym_number,
  [9219] = 1,
    ACTIONS(1081), 1,
      ts_builtin_sym_end,
  [9223] = 1,
    ACTIONS(1083), 1,
      ts_builtin_sym_end,
  [9227] = 1,
    ACTIONS(1085), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [9231] = 1,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
  [9235] = 1,
    ACTIONS(81), 1,
      sym__endl,
  [9239] = 1,
    ACTIONS(1087), 1,
      anon_sym_POUND,
  [9243] = 1,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
  [9247] = 1,
    ACTIONS(1091), 1,
      sym__endl,
  [9251] = 1,
    ACTIONS(1093), 1,
      ts_builtin_sym_end,
  [9255] = 1,
    ACTIONS(1095), 1,
      anon_sym_COLON2,
  [9259] = 1,
    ACTIONS(1097), 1,
      sym__endl,
  [9263] = 1,
    ACTIONS(1099), 1,
      sym_flag_value,
  [9267] = 1,
    ACTIONS(1101), 1,
      ts_builtin_sym_end,
  [9271] = 1,
    ACTIONS(1103), 1,
      ts_builtin_sym_end,
  [9275] = 1,
    ACTIONS(1105), 1,
      anon_sym_Lastmodified,
  [9279] = 1,
    ACTIONS(1107), 1,
      anon_sym_RBRACK,
  [9283] = 1,
    ACTIONS(1109), 1,
      ts_builtin_sym_end,
  [9287] = 1,
    ACTIONS(1111), 1,
      ts_builtin_sym_end,
  [9291] = 1,
    ACTIONS(1113), 1,
      aux_sym_source_file_def_token1,
  [9295] = 1,
    ACTIONS(1115), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [9299] = 1,
    ACTIONS(1117), 1,
      anon_sym_EQ2,
  [9303] = 1,
    ACTIONS(1119), 1,
      sym_number,
  [9307] = 1,
    ACTIONS(1121), 1,
      anon_sym_SEMI,
  [9311] = 1,
    ACTIONS(1123), 1,
      ts_builtin_sym_end,
  [9315] = 1,
    ACTIONS(1125), 1,
      sym_decimal_floating_point_literal,
  [9319] = 1,
    ACTIONS(1127), 1,
      anon_sym_SEMI,
  [9323] = 1,
    ACTIONS(1129), 1,
      sym_number,
  [9327] = 1,
    ACTIONS(1131), 1,
      anon_sym_Compiledfrom,
  [9331] = 1,
    ACTIONS(1133), 1,
      ts_builtin_sym_end,
  [9335] = 1,
    ACTIONS(1135), 1,
      sym__endl,
  [9339] = 1,
    ACTIONS(1137), 1,
      ts_builtin_sym_end,
  [9343] = 1,
    ACTIONS(1139), 1,
      ts_builtin_sym_end,
  [9347] = 1,
    ACTIONS(1141), 1,
      anon_sym_SEMI,
  [9351] = 1,
    ACTIONS(1095), 1,
      sym__endl,
  [9355] = 1,
    ACTIONS(1143), 1,
      anon_sym_EQ2,
  [9359] = 1,
    ACTIONS(1145), 1,
      ts_builtin_sym_end,
  [9363] = 1,
    ACTIONS(1147), 1,
      anon_sym_EQ,
  [9367] = 1,
    ACTIONS(1149), 1,
      sym_number,
  [9371] = 1,
    ACTIONS(1151), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
  [9375] = 1,
    ACTIONS(1153), 1,
      anon_sym_SEMI,
  [9379] = 1,
    ACTIONS(1155), 1,
      anon_sym_SEMI,
  [9383] = 1,
    ACTIONS(1157), 1,
      sym__endl,
  [9387] = 1,
    ACTIONS(1159), 1,
      anon_sym_Lastmodified,
  [9391] = 1,
    ACTIONS(1161), 1,
      ts_builtin_sym_end,
  [9395] = 1,
    ACTIONS(1163), 1,
      anon_sym_COLON2,
  [9399] = 1,
    ACTIONS(1165), 1,
      anon_sym_COLON,
  [9403] = 1,
    ACTIONS(1167), 1,
      sym_md5,
  [9407] = 1,
    ACTIONS(1169), 1,
      anon_sym_MD5checksum,
  [9411] = 1,
    ACTIONS(1171), 1,
      ts_builtin_sym_end,
  [9415] = 1,
    ACTIONS(1173), 1,
      ts_builtin_sym_end,
  [9419] = 1,
    ACTIONS(1175), 1,
      ts_builtin_sym_end,
  [9423] = 1,
    ACTIONS(1177), 1,
      anon_sym_COLON,
  [9427] = 1,
    ACTIONS(1179), 1,
      ts_builtin_sym_end,
  [9431] = 1,
    ACTIONS(1181), 1,
      ts_builtin_sym_end,
  [9435] = 1,
    ACTIONS(1183), 1,
      anon_sym_Lastmodified,
  [9439] = 1,
    ACTIONS(1185), 1,
      sym__path_segment,
  [9443] = 1,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
  [9447] = 1,
    ACTIONS(1187), 1,
      anon_sym_SEMI,
  [9451] = 1,
    ACTIONS(1189), 1,
      ts_builtin_sym_end,
  [9455] = 1,
    ACTIONS(1191), 1,
      anon_sym_EQ2,
  [9459] = 1,
    ACTIONS(1193), 1,
      sym__endl,
  [9463] = 1,
    ACTIONS(1195), 1,
      ts_builtin_sym_end,
  [9467] = 1,
    ACTIONS(1197), 1,
      ts_builtin_sym_end,
  [9471] = 1,
    ACTIONS(1199), 1,
      ts_builtin_sym_end,
  [9475] = 1,
    ACTIONS(1201), 1,
      sym__identifier,
  [9479] = 1,
    ACTIONS(1203), 1,
      ts_builtin_sym_end,
  [9483] = 1,
    ACTIONS(1205), 1,
      ts_builtin_sym_end,
  [9487] = 1,
    ACTIONS(1207), 1,
      anon_sym_Lastmodified,
  [9491] = 1,
    ACTIONS(1209), 1,
      anon_sym_Lastmodified,
  [9495] = 1,
    ACTIONS(1211), 1,
      ts_builtin_sym_end,
  [9499] = 1,
    ACTIONS(1213), 1,
      sym_number,
  [9503] = 1,
    ACTIONS(1215), 1,
      anon_sym_COLON,
  [9507] = 1,
    ACTIONS(1217), 1,
      anon_sym_LPAREN_RPAREN,
  [9511] = 1,
    ACTIONS(1219), 1,
      sym_number,
  [9515] = 1,
    ACTIONS(1221), 1,
      anon_sym_RBRACK,
  [9519] = 1,
    ACTIONS(1223), 1,
      ts_builtin_sym_end,
  [9523] = 1,
    ACTIONS(671), 1,
      ts_builtin_sym_end,
  [9527] = 1,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
  [9531] = 1,
    ACTIONS(1227), 1,
      sym_number,
  [9535] = 1,
    ACTIONS(839), 1,
      ts_builtin_sym_end,
  [9539] = 1,
    ACTIONS(1229), 1,
      ts_builtin_sym_end,
  [9543] = 1,
    ACTIONS(1231), 1,
      sym_flag_value,
  [9547] = 1,
    ACTIONS(835), 1,
      ts_builtin_sym_end,
  [9551] = 1,
    ACTIONS(1233), 1,
      ts_builtin_sym_end,
  [9555] = 1,
    ACTIONS(1235), 1,
      anon_sym_LPAREN_RPAREN,
  [9559] = 1,
    ACTIONS(1237), 1,
      anon_sym_flags_COLON,
  [9563] = 1,
    ACTIONS(1239), 1,
      sym__endl,
  [9567] = 1,
    ACTIONS(1241), 1,
      ts_builtin_sym_end,
  [9571] = 1,
    ACTIONS(1243), 1,
      aux_sym_annotation_default_token1,
  [9575] = 1,
    ACTIONS(1245), 1,
      sym_number,
  [9579] = 1,
    ACTIONS(1247), 1,
      ts_builtin_sym_end,
  [9583] = 1,
    ACTIONS(1249), 1,
      anon_sym_RBRACK,
  [9587] = 1,
    ACTIONS(1251), 1,
      ts_builtin_sym_end,
  [9591] = 1,
    ACTIONS(1253), 1,
      ts_builtin_sym_end,
  [9595] = 1,
    ACTIONS(1255), 1,
      ts_builtin_sym_end,
  [9599] = 1,
    ACTIONS(1257), 1,
      anon_sym_SEMI,
  [9603] = 1,
    ACTIONS(1259), 1,
      ts_builtin_sym_end,
  [9607] = 1,
    ACTIONS(1261), 1,
      anon_sym_COLON,
  [9611] = 1,
    ACTIONS(1263), 1,
      sym_hex_value,
  [9615] = 1,
    ACTIONS(1265), 1,
      anon_sym_SEMI,
  [9619] = 1,
    ACTIONS(1267), 1,
      anon_sym_of,
  [9623] = 1,
    ACTIONS(1269), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [9627] = 1,
    ACTIONS(1271), 1,
      sym_number,
  [9631] = 1,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
  [9635] = 1,
    ACTIONS(1273), 1,
      anon_sym_COLON,
  [9639] = 1,
    ACTIONS(1275), 1,
      anon_sym_COLON2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 206,
  [SMALL_STATE(6)] = 272,
  [SMALL_STATE(7)] = 338,
  [SMALL_STATE(8)] = 404,
  [SMALL_STATE(9)] = 470,
  [SMALL_STATE(10)] = 538,
  [SMALL_STATE(11)] = 600,
  [SMALL_STATE(12)] = 662,
  [SMALL_STATE(13)] = 699,
  [SMALL_STATE(14)] = 739,
  [SMALL_STATE(15)] = 779,
  [SMALL_STATE(16)] = 819,
  [SMALL_STATE(17)] = 875,
  [SMALL_STATE(18)] = 915,
  [SMALL_STATE(19)] = 971,
  [SMALL_STATE(20)] = 1027,
  [SMALL_STATE(21)] = 1067,
  [SMALL_STATE(22)] = 1104,
  [SMALL_STATE(23)] = 1139,
  [SMALL_STATE(24)] = 1174,
  [SMALL_STATE(25)] = 1209,
  [SMALL_STATE(26)] = 1254,
  [SMALL_STATE(27)] = 1288,
  [SMALL_STATE(28)] = 1328,
  [SMALL_STATE(29)] = 1378,
  [SMALL_STATE(30)] = 1412,
  [SMALL_STATE(31)] = 1462,
  [SMALL_STATE(32)] = 1496,
  [SMALL_STATE(33)] = 1534,
  [SMALL_STATE(34)] = 1584,
  [SMALL_STATE(35)] = 1634,
  [SMALL_STATE(36)] = 1668,
  [SMALL_STATE(37)] = 1702,
  [SMALL_STATE(38)] = 1738,
  [SMALL_STATE(39)] = 1776,
  [SMALL_STATE(40)] = 1816,
  [SMALL_STATE(41)] = 1850,
  [SMALL_STATE(42)] = 1890,
  [SMALL_STATE(43)] = 1924,
  [SMALL_STATE(44)] = 1958,
  [SMALL_STATE(45)] = 1992,
  [SMALL_STATE(46)] = 2025,
  [SMALL_STATE(47)] = 2058,
  [SMALL_STATE(48)] = 2091,
  [SMALL_STATE(49)] = 2124,
  [SMALL_STATE(50)] = 2168,
  [SMALL_STATE(51)] = 2204,
  [SMALL_STATE(52)] = 2240,
  [SMALL_STATE(53)] = 2272,
  [SMALL_STATE(54)] = 2310,
  [SMALL_STATE(55)] = 2354,
  [SMALL_STATE(56)] = 2398,
  [SMALL_STATE(57)] = 2442,
  [SMALL_STATE(58)] = 2486,
  [SMALL_STATE(59)] = 2524,
  [SMALL_STATE(60)] = 2555,
  [SMALL_STATE(61)] = 2592,
  [SMALL_STATE(62)] = 2623,
  [SMALL_STATE(63)] = 2660,
  [SMALL_STATE(64)] = 2690,
  [SMALL_STATE(65)] = 2722,
  [SMALL_STATE(66)] = 2760,
  [SMALL_STATE(67)] = 2798,
  [SMALL_STATE(68)] = 2836,
  [SMALL_STATE(69)] = 2874,
  [SMALL_STATE(70)] = 2912,
  [SMALL_STATE(71)] = 2950,
  [SMALL_STATE(72)] = 2983,
  [SMALL_STATE(73)] = 3012,
  [SMALL_STATE(74)] = 3041,
  [SMALL_STATE(75)] = 3074,
  [SMALL_STATE(76)] = 3102,
  [SMALL_STATE(77)] = 3130,
  [SMALL_STATE(78)] = 3158,
  [SMALL_STATE(79)] = 3186,
  [SMALL_STATE(80)] = 3218,
  [SMALL_STATE(81)] = 3250,
  [SMALL_STATE(82)] = 3282,
  [SMALL_STATE(83)] = 3314,
  [SMALL_STATE(84)] = 3346,
  [SMALL_STATE(85)] = 3378,
  [SMALL_STATE(86)] = 3410,
  [SMALL_STATE(87)] = 3441,
  [SMALL_STATE(88)] = 3472,
  [SMALL_STATE(89)] = 3499,
  [SMALL_STATE(90)] = 3526,
  [SMALL_STATE(91)] = 3552,
  [SMALL_STATE(92)] = 3578,
  [SMALL_STATE(93)] = 3604,
  [SMALL_STATE(94)] = 3630,
  [SMALL_STATE(95)] = 3656,
  [SMALL_STATE(96)] = 3682,
  [SMALL_STATE(97)] = 3708,
  [SMALL_STATE(98)] = 3734,
  [SMALL_STATE(99)] = 3760,
  [SMALL_STATE(100)] = 3786,
  [SMALL_STATE(101)] = 3820,
  [SMALL_STATE(102)] = 3855,
  [SMALL_STATE(103)] = 3888,
  [SMALL_STATE(104)] = 3924,
  [SMALL_STATE(105)] = 3960,
  [SMALL_STATE(106)] = 3996,
  [SMALL_STATE(107)] = 4032,
  [SMALL_STATE(108)] = 4055,
  [SMALL_STATE(109)] = 4076,
  [SMALL_STATE(110)] = 4099,
  [SMALL_STATE(111)] = 4132,
  [SMALL_STATE(112)] = 4165,
  [SMALL_STATE(113)] = 4192,
  [SMALL_STATE(114)] = 4219,
  [SMALL_STATE(115)] = 4243,
  [SMALL_STATE(116)] = 4273,
  [SMALL_STATE(117)] = 4303,
  [SMALL_STATE(118)] = 4333,
  [SMALL_STATE(119)] = 4360,
  [SMALL_STATE(120)] = 4387,
  [SMALL_STATE(121)] = 4414,
  [SMALL_STATE(122)] = 4441,
  [SMALL_STATE(123)] = 4458,
  [SMALL_STATE(124)] = 4475,
  [SMALL_STATE(125)] = 4502,
  [SMALL_STATE(126)] = 4529,
  [SMALL_STATE(127)] = 4556,
  [SMALL_STATE(128)] = 4583,
  [SMALL_STATE(129)] = 4610,
  [SMALL_STATE(130)] = 4637,
  [SMALL_STATE(131)] = 4664,
  [SMALL_STATE(132)] = 4691,
  [SMALL_STATE(133)] = 4707,
  [SMALL_STATE(134)] = 4743,
  [SMALL_STATE(135)] = 4779,
  [SMALL_STATE(136)] = 4800,
  [SMALL_STATE(137)] = 4821,
  [SMALL_STATE(138)] = 4838,
  [SMALL_STATE(139)] = 4868,
  [SMALL_STATE(140)] = 4884,
  [SMALL_STATE(141)] = 4900,
  [SMALL_STATE(142)] = 4934,
  [SMALL_STATE(143)] = 4968,
  [SMALL_STATE(144)] = 4998,
  [SMALL_STATE(145)] = 5013,
  [SMALL_STATE(146)] = 5028,
  [SMALL_STATE(147)] = 5043,
  [SMALL_STATE(148)] = 5058,
  [SMALL_STATE(149)] = 5073,
  [SMALL_STATE(150)] = 5090,
  [SMALL_STATE(151)] = 5107,
  [SMALL_STATE(152)] = 5122,
  [SMALL_STATE(153)] = 5146,
  [SMALL_STATE(154)] = 5158,
  [SMALL_STATE(155)] = 5182,
  [SMALL_STATE(156)] = 5194,
  [SMALL_STATE(157)] = 5214,
  [SMALL_STATE(158)] = 5242,
  [SMALL_STATE(159)] = 5254,
  [SMALL_STATE(160)] = 5282,
  [SMALL_STATE(161)] = 5302,
  [SMALL_STATE(162)] = 5322,
  [SMALL_STATE(163)] = 5346,
  [SMALL_STATE(164)] = 5360,
  [SMALL_STATE(165)] = 5383,
  [SMALL_STATE(166)] = 5408,
  [SMALL_STATE(167)] = 5423,
  [SMALL_STATE(168)] = 5440,
  [SMALL_STATE(169)] = 5451,
  [SMALL_STATE(170)] = 5468,
  [SMALL_STATE(171)] = 5493,
  [SMALL_STATE(172)] = 5506,
  [SMALL_STATE(173)] = 5521,
  [SMALL_STATE(174)] = 5546,
  [SMALL_STATE(175)] = 5571,
  [SMALL_STATE(176)] = 5584,
  [SMALL_STATE(177)] = 5598,
  [SMALL_STATE(178)] = 5616,
  [SMALL_STATE(179)] = 5626,
  [SMALL_STATE(180)] = 5638,
  [SMALL_STATE(181)] = 5654,
  [SMALL_STATE(182)] = 5668,
  [SMALL_STATE(183)] = 5678,
  [SMALL_STATE(184)] = 5690,
  [SMALL_STATE(185)] = 5710,
  [SMALL_STATE(186)] = 5728,
  [SMALL_STATE(187)] = 5746,
  [SMALL_STATE(188)] = 5768,
  [SMALL_STATE(189)] = 5786,
  [SMALL_STATE(190)] = 5798,
  [SMALL_STATE(191)] = 5808,
  [SMALL_STATE(192)] = 5818,
  [SMALL_STATE(193)] = 5836,
  [SMALL_STATE(194)] = 5858,
  [SMALL_STATE(195)] = 5870,
  [SMALL_STATE(196)] = 5888,
  [SMALL_STATE(197)] = 5900,
  [SMALL_STATE(198)] = 5922,
  [SMALL_STATE(199)] = 5940,
  [SMALL_STATE(200)] = 5958,
  [SMALL_STATE(201)] = 5976,
  [SMALL_STATE(202)] = 5994,
  [SMALL_STATE(203)] = 6012,
  [SMALL_STATE(204)] = 6030,
  [SMALL_STATE(205)] = 6048,
  [SMALL_STATE(206)] = 6066,
  [SMALL_STATE(207)] = 6088,
  [SMALL_STATE(208)] = 6106,
  [SMALL_STATE(209)] = 6124,
  [SMALL_STATE(210)] = 6142,
  [SMALL_STATE(211)] = 6160,
  [SMALL_STATE(212)] = 6178,
  [SMALL_STATE(213)] = 6194,
  [SMALL_STATE(214)] = 6210,
  [SMALL_STATE(215)] = 6228,
  [SMALL_STATE(216)] = 6246,
  [SMALL_STATE(217)] = 6262,
  [SMALL_STATE(218)] = 6278,
  [SMALL_STATE(219)] = 6300,
  [SMALL_STATE(220)] = 6322,
  [SMALL_STATE(221)] = 6344,
  [SMALL_STATE(222)] = 6355,
  [SMALL_STATE(223)] = 6366,
  [SMALL_STATE(224)] = 6375,
  [SMALL_STATE(225)] = 6388,
  [SMALL_STATE(226)] = 6399,
  [SMALL_STATE(227)] = 6416,
  [SMALL_STATE(228)] = 6429,
  [SMALL_STATE(229)] = 6448,
  [SMALL_STATE(230)] = 6461,
  [SMALL_STATE(231)] = 6476,
  [SMALL_STATE(232)] = 6491,
  [SMALL_STATE(233)] = 6510,
  [SMALL_STATE(234)] = 6529,
  [SMALL_STATE(235)] = 6538,
  [SMALL_STATE(236)] = 6547,
  [SMALL_STATE(237)] = 6564,
  [SMALL_STATE(238)] = 6577,
  [SMALL_STATE(239)] = 6586,
  [SMALL_STATE(240)] = 6603,
  [SMALL_STATE(241)] = 6622,
  [SMALL_STATE(242)] = 6637,
  [SMALL_STATE(243)] = 6656,
  [SMALL_STATE(244)] = 6675,
  [SMALL_STATE(245)] = 6690,
  [SMALL_STATE(246)] = 6709,
  [SMALL_STATE(247)] = 6728,
  [SMALL_STATE(248)] = 6739,
  [SMALL_STATE(249)] = 6758,
  [SMALL_STATE(250)] = 6774,
  [SMALL_STATE(251)] = 6788,
  [SMALL_STATE(252)] = 6800,
  [SMALL_STATE(253)] = 6816,
  [SMALL_STATE(254)] = 6830,
  [SMALL_STATE(255)] = 6844,
  [SMALL_STATE(256)] = 6860,
  [SMALL_STATE(257)] = 6874,
  [SMALL_STATE(258)] = 6884,
  [SMALL_STATE(259)] = 6900,
  [SMALL_STATE(260)] = 6914,
  [SMALL_STATE(261)] = 6928,
  [SMALL_STATE(262)] = 6936,
  [SMALL_STATE(263)] = 6946,
  [SMALL_STATE(264)] = 6960,
  [SMALL_STATE(265)] = 6976,
  [SMALL_STATE(266)] = 6986,
  [SMALL_STATE(267)] = 7000,
  [SMALL_STATE(268)] = 7014,
  [SMALL_STATE(269)] = 7028,
  [SMALL_STATE(270)] = 7036,
  [SMALL_STATE(271)] = 7050,
  [SMALL_STATE(272)] = 7064,
  [SMALL_STATE(273)] = 7078,
  [SMALL_STATE(274)] = 7092,
  [SMALL_STATE(275)] = 7106,
  [SMALL_STATE(276)] = 7122,
  [SMALL_STATE(277)] = 7138,
  [SMALL_STATE(278)] = 7146,
  [SMALL_STATE(279)] = 7162,
  [SMALL_STATE(280)] = 7172,
  [SMALL_STATE(281)] = 7182,
  [SMALL_STATE(282)] = 7198,
  [SMALL_STATE(283)] = 7208,
  [SMALL_STATE(284)] = 7216,
  [SMALL_STATE(285)] = 7232,
  [SMALL_STATE(286)] = 7245,
  [SMALL_STATE(287)] = 7258,
  [SMALL_STATE(288)] = 7271,
  [SMALL_STATE(289)] = 7282,
  [SMALL_STATE(290)] = 7291,
  [SMALL_STATE(291)] = 7298,
  [SMALL_STATE(292)] = 7311,
  [SMALL_STATE(293)] = 7322,
  [SMALL_STATE(294)] = 7335,
  [SMALL_STATE(295)] = 7348,
  [SMALL_STATE(296)] = 7361,
  [SMALL_STATE(297)] = 7368,
  [SMALL_STATE(298)] = 7379,
  [SMALL_STATE(299)] = 7392,
  [SMALL_STATE(300)] = 7403,
  [SMALL_STATE(301)] = 7414,
  [SMALL_STATE(302)] = 7427,
  [SMALL_STATE(303)] = 7438,
  [SMALL_STATE(304)] = 7447,
  [SMALL_STATE(305)] = 7456,
  [SMALL_STATE(306)] = 7469,
  [SMALL_STATE(307)] = 7476,
  [SMALL_STATE(308)] = 7489,
  [SMALL_STATE(309)] = 7496,
  [SMALL_STATE(310)] = 7509,
  [SMALL_STATE(311)] = 7522,
  [SMALL_STATE(312)] = 7529,
  [SMALL_STATE(313)] = 7536,
  [SMALL_STATE(314)] = 7543,
  [SMALL_STATE(315)] = 7550,
  [SMALL_STATE(316)] = 7561,
  [SMALL_STATE(317)] = 7570,
  [SMALL_STATE(318)] = 7583,
  [SMALL_STATE(319)] = 7594,
  [SMALL_STATE(320)] = 7607,
  [SMALL_STATE(321)] = 7620,
  [SMALL_STATE(322)] = 7633,
  [SMALL_STATE(323)] = 7644,
  [SMALL_STATE(324)] = 7653,
  [SMALL_STATE(325)] = 7664,
  [SMALL_STATE(326)] = 7673,
  [SMALL_STATE(327)] = 7686,
  [SMALL_STATE(328)] = 7699,
  [SMALL_STATE(329)] = 7709,
  [SMALL_STATE(330)] = 7715,
  [SMALL_STATE(331)] = 7725,
  [SMALL_STATE(332)] = 7735,
  [SMALL_STATE(333)] = 7745,
  [SMALL_STATE(334)] = 7755,
  [SMALL_STATE(335)] = 7765,
  [SMALL_STATE(336)] = 7775,
  [SMALL_STATE(337)] = 7785,
  [SMALL_STATE(338)] = 7795,
  [SMALL_STATE(339)] = 7805,
  [SMALL_STATE(340)] = 7815,
  [SMALL_STATE(341)] = 7825,
  [SMALL_STATE(342)] = 7835,
  [SMALL_STATE(343)] = 7845,
  [SMALL_STATE(344)] = 7855,
  [SMALL_STATE(345)] = 7865,
  [SMALL_STATE(346)] = 7875,
  [SMALL_STATE(347)] = 7885,
  [SMALL_STATE(348)] = 7895,
  [SMALL_STATE(349)] = 7905,
  [SMALL_STATE(350)] = 7911,
  [SMALL_STATE(351)] = 7921,
  [SMALL_STATE(352)] = 7931,
  [SMALL_STATE(353)] = 7941,
  [SMALL_STATE(354)] = 7951,
  [SMALL_STATE(355)] = 7961,
  [SMALL_STATE(356)] = 7971,
  [SMALL_STATE(357)] = 7981,
  [SMALL_STATE(358)] = 7991,
  [SMALL_STATE(359)] = 8001,
  [SMALL_STATE(360)] = 8011,
  [SMALL_STATE(361)] = 8021,
  [SMALL_STATE(362)] = 8031,
  [SMALL_STATE(363)] = 8041,
  [SMALL_STATE(364)] = 8049,
  [SMALL_STATE(365)] = 8059,
  [SMALL_STATE(366)] = 8069,
  [SMALL_STATE(367)] = 8079,
  [SMALL_STATE(368)] = 8089,
  [SMALL_STATE(369)] = 8099,
  [SMALL_STATE(370)] = 8109,
  [SMALL_STATE(371)] = 8117,
  [SMALL_STATE(372)] = 8125,
  [SMALL_STATE(373)] = 8135,
  [SMALL_STATE(374)] = 8145,
  [SMALL_STATE(375)] = 8155,
  [SMALL_STATE(376)] = 8165,
  [SMALL_STATE(377)] = 8175,
  [SMALL_STATE(378)] = 8181,
  [SMALL_STATE(379)] = 8191,
  [SMALL_STATE(380)] = 8201,
  [SMALL_STATE(381)] = 8209,
  [SMALL_STATE(382)] = 8219,
  [SMALL_STATE(383)] = 8227,
  [SMALL_STATE(384)] = 8237,
  [SMALL_STATE(385)] = 8247,
  [SMALL_STATE(386)] = 8257,
  [SMALL_STATE(387)] = 8267,
  [SMALL_STATE(388)] = 8277,
  [SMALL_STATE(389)] = 8287,
  [SMALL_STATE(390)] = 8297,
  [SMALL_STATE(391)] = 8307,
  [SMALL_STATE(392)] = 8317,
  [SMALL_STATE(393)] = 8327,
  [SMALL_STATE(394)] = 8337,
  [SMALL_STATE(395)] = 8347,
  [SMALL_STATE(396)] = 8357,
  [SMALL_STATE(397)] = 8367,
  [SMALL_STATE(398)] = 8377,
  [SMALL_STATE(399)] = 8387,
  [SMALL_STATE(400)] = 8395,
  [SMALL_STATE(401)] = 8405,
  [SMALL_STATE(402)] = 8415,
  [SMALL_STATE(403)] = 8425,
  [SMALL_STATE(404)] = 8432,
  [SMALL_STATE(405)] = 8439,
  [SMALL_STATE(406)] = 8446,
  [SMALL_STATE(407)] = 8453,
  [SMALL_STATE(408)] = 8458,
  [SMALL_STATE(409)] = 8463,
  [SMALL_STATE(410)] = 8468,
  [SMALL_STATE(411)] = 8473,
  [SMALL_STATE(412)] = 8480,
  [SMALL_STATE(413)] = 8487,
  [SMALL_STATE(414)] = 8494,
  [SMALL_STATE(415)] = 8501,
  [SMALL_STATE(416)] = 8508,
  [SMALL_STATE(417)] = 8513,
  [SMALL_STATE(418)] = 8520,
  [SMALL_STATE(419)] = 8527,
  [SMALL_STATE(420)] = 8534,
  [SMALL_STATE(421)] = 8539,
  [SMALL_STATE(422)] = 8546,
  [SMALL_STATE(423)] = 8553,
  [SMALL_STATE(424)] = 8560,
  [SMALL_STATE(425)] = 8567,
  [SMALL_STATE(426)] = 8572,
  [SMALL_STATE(427)] = 8579,
  [SMALL_STATE(428)] = 8586,
  [SMALL_STATE(429)] = 8593,
  [SMALL_STATE(430)] = 8600,
  [SMALL_STATE(431)] = 8607,
  [SMALL_STATE(432)] = 8614,
  [SMALL_STATE(433)] = 8621,
  [SMALL_STATE(434)] = 8628,
  [SMALL_STATE(435)] = 8635,
  [SMALL_STATE(436)] = 8642,
  [SMALL_STATE(437)] = 8649,
  [SMALL_STATE(438)] = 8656,
  [SMALL_STATE(439)] = 8663,
  [SMALL_STATE(440)] = 8670,
  [SMALL_STATE(441)] = 8675,
  [SMALL_STATE(442)] = 8682,
  [SMALL_STATE(443)] = 8689,
  [SMALL_STATE(444)] = 8696,
  [SMALL_STATE(445)] = 8701,
  [SMALL_STATE(446)] = 8708,
  [SMALL_STATE(447)] = 8715,
  [SMALL_STATE(448)] = 8720,
  [SMALL_STATE(449)] = 8725,
  [SMALL_STATE(450)] = 8732,
  [SMALL_STATE(451)] = 8739,
  [SMALL_STATE(452)] = 8746,
  [SMALL_STATE(453)] = 8753,
  [SMALL_STATE(454)] = 8760,
  [SMALL_STATE(455)] = 8767,
  [SMALL_STATE(456)] = 8774,
  [SMALL_STATE(457)] = 8781,
  [SMALL_STATE(458)] = 8788,
  [SMALL_STATE(459)] = 8793,
  [SMALL_STATE(460)] = 8798,
  [SMALL_STATE(461)] = 8803,
  [SMALL_STATE(462)] = 8810,
  [SMALL_STATE(463)] = 8817,
  [SMALL_STATE(464)] = 8824,
  [SMALL_STATE(465)] = 8831,
  [SMALL_STATE(466)] = 8838,
  [SMALL_STATE(467)] = 8845,
  [SMALL_STATE(468)] = 8852,
  [SMALL_STATE(469)] = 8859,
  [SMALL_STATE(470)] = 8866,
  [SMALL_STATE(471)] = 8871,
  [SMALL_STATE(472)] = 8878,
  [SMALL_STATE(473)] = 8885,
  [SMALL_STATE(474)] = 8892,
  [SMALL_STATE(475)] = 8899,
  [SMALL_STATE(476)] = 8904,
  [SMALL_STATE(477)] = 8909,
  [SMALL_STATE(478)] = 8916,
  [SMALL_STATE(479)] = 8923,
  [SMALL_STATE(480)] = 8930,
  [SMALL_STATE(481)] = 8937,
  [SMALL_STATE(482)] = 8944,
  [SMALL_STATE(483)] = 8951,
  [SMALL_STATE(484)] = 8958,
  [SMALL_STATE(485)] = 8965,
  [SMALL_STATE(486)] = 8972,
  [SMALL_STATE(487)] = 8979,
  [SMALL_STATE(488)] = 8986,
  [SMALL_STATE(489)] = 8991,
  [SMALL_STATE(490)] = 8998,
  [SMALL_STATE(491)] = 9003,
  [SMALL_STATE(492)] = 9010,
  [SMALL_STATE(493)] = 9015,
  [SMALL_STATE(494)] = 9022,
  [SMALL_STATE(495)] = 9029,
  [SMALL_STATE(496)] = 9036,
  [SMALL_STATE(497)] = 9043,
  [SMALL_STATE(498)] = 9050,
  [SMALL_STATE(499)] = 9057,
  [SMALL_STATE(500)] = 9062,
  [SMALL_STATE(501)] = 9067,
  [SMALL_STATE(502)] = 9072,
  [SMALL_STATE(503)] = 9079,
  [SMALL_STATE(504)] = 9086,
  [SMALL_STATE(505)] = 9091,
  [SMALL_STATE(506)] = 9095,
  [SMALL_STATE(507)] = 9099,
  [SMALL_STATE(508)] = 9103,
  [SMALL_STATE(509)] = 9107,
  [SMALL_STATE(510)] = 9111,
  [SMALL_STATE(511)] = 9115,
  [SMALL_STATE(512)] = 9119,
  [SMALL_STATE(513)] = 9123,
  [SMALL_STATE(514)] = 9127,
  [SMALL_STATE(515)] = 9131,
  [SMALL_STATE(516)] = 9135,
  [SMALL_STATE(517)] = 9139,
  [SMALL_STATE(518)] = 9143,
  [SMALL_STATE(519)] = 9147,
  [SMALL_STATE(520)] = 9151,
  [SMALL_STATE(521)] = 9155,
  [SMALL_STATE(522)] = 9159,
  [SMALL_STATE(523)] = 9163,
  [SMALL_STATE(524)] = 9167,
  [SMALL_STATE(525)] = 9171,
  [SMALL_STATE(526)] = 9175,
  [SMALL_STATE(527)] = 9179,
  [SMALL_STATE(528)] = 9183,
  [SMALL_STATE(529)] = 9187,
  [SMALL_STATE(530)] = 9191,
  [SMALL_STATE(531)] = 9195,
  [SMALL_STATE(532)] = 9199,
  [SMALL_STATE(533)] = 9203,
  [SMALL_STATE(534)] = 9207,
  [SMALL_STATE(535)] = 9211,
  [SMALL_STATE(536)] = 9215,
  [SMALL_STATE(537)] = 9219,
  [SMALL_STATE(538)] = 9223,
  [SMALL_STATE(539)] = 9227,
  [SMALL_STATE(540)] = 9231,
  [SMALL_STATE(541)] = 9235,
  [SMALL_STATE(542)] = 9239,
  [SMALL_STATE(543)] = 9243,
  [SMALL_STATE(544)] = 9247,
  [SMALL_STATE(545)] = 9251,
  [SMALL_STATE(546)] = 9255,
  [SMALL_STATE(547)] = 9259,
  [SMALL_STATE(548)] = 9263,
  [SMALL_STATE(549)] = 9267,
  [SMALL_STATE(550)] = 9271,
  [SMALL_STATE(551)] = 9275,
  [SMALL_STATE(552)] = 9279,
  [SMALL_STATE(553)] = 9283,
  [SMALL_STATE(554)] = 9287,
  [SMALL_STATE(555)] = 9291,
  [SMALL_STATE(556)] = 9295,
  [SMALL_STATE(557)] = 9299,
  [SMALL_STATE(558)] = 9303,
  [SMALL_STATE(559)] = 9307,
  [SMALL_STATE(560)] = 9311,
  [SMALL_STATE(561)] = 9315,
  [SMALL_STATE(562)] = 9319,
  [SMALL_STATE(563)] = 9323,
  [SMALL_STATE(564)] = 9327,
  [SMALL_STATE(565)] = 9331,
  [SMALL_STATE(566)] = 9335,
  [SMALL_STATE(567)] = 9339,
  [SMALL_STATE(568)] = 9343,
  [SMALL_STATE(569)] = 9347,
  [SMALL_STATE(570)] = 9351,
  [SMALL_STATE(571)] = 9355,
  [SMALL_STATE(572)] = 9359,
  [SMALL_STATE(573)] = 9363,
  [SMALL_STATE(574)] = 9367,
  [SMALL_STATE(575)] = 9371,
  [SMALL_STATE(576)] = 9375,
  [SMALL_STATE(577)] = 9379,
  [SMALL_STATE(578)] = 9383,
  [SMALL_STATE(579)] = 9387,
  [SMALL_STATE(580)] = 9391,
  [SMALL_STATE(581)] = 9395,
  [SMALL_STATE(582)] = 9399,
  [SMALL_STATE(583)] = 9403,
  [SMALL_STATE(584)] = 9407,
  [SMALL_STATE(585)] = 9411,
  [SMALL_STATE(586)] = 9415,
  [SMALL_STATE(587)] = 9419,
  [SMALL_STATE(588)] = 9423,
  [SMALL_STATE(589)] = 9427,
  [SMALL_STATE(590)] = 9431,
  [SMALL_STATE(591)] = 9435,
  [SMALL_STATE(592)] = 9439,
  [SMALL_STATE(593)] = 9443,
  [SMALL_STATE(594)] = 9447,
  [SMALL_STATE(595)] = 9451,
  [SMALL_STATE(596)] = 9455,
  [SMALL_STATE(597)] = 9459,
  [SMALL_STATE(598)] = 9463,
  [SMALL_STATE(599)] = 9467,
  [SMALL_STATE(600)] = 9471,
  [SMALL_STATE(601)] = 9475,
  [SMALL_STATE(602)] = 9479,
  [SMALL_STATE(603)] = 9483,
  [SMALL_STATE(604)] = 9487,
  [SMALL_STATE(605)] = 9491,
  [SMALL_STATE(606)] = 9495,
  [SMALL_STATE(607)] = 9499,
  [SMALL_STATE(608)] = 9503,
  [SMALL_STATE(609)] = 9507,
  [SMALL_STATE(610)] = 9511,
  [SMALL_STATE(611)] = 9515,
  [SMALL_STATE(612)] = 9519,
  [SMALL_STATE(613)] = 9523,
  [SMALL_STATE(614)] = 9527,
  [SMALL_STATE(615)] = 9531,
  [SMALL_STATE(616)] = 9535,
  [SMALL_STATE(617)] = 9539,
  [SMALL_STATE(618)] = 9543,
  [SMALL_STATE(619)] = 9547,
  [SMALL_STATE(620)] = 9551,
  [SMALL_STATE(621)] = 9555,
  [SMALL_STATE(622)] = 9559,
  [SMALL_STATE(623)] = 9563,
  [SMALL_STATE(624)] = 9567,
  [SMALL_STATE(625)] = 9571,
  [SMALL_STATE(626)] = 9575,
  [SMALL_STATE(627)] = 9579,
  [SMALL_STATE(628)] = 9583,
  [SMALL_STATE(629)] = 9587,
  [SMALL_STATE(630)] = 9591,
  [SMALL_STATE(631)] = 9595,
  [SMALL_STATE(632)] = 9599,
  [SMALL_STATE(633)] = 9603,
  [SMALL_STATE(634)] = 9607,
  [SMALL_STATE(635)] = 9611,
  [SMALL_STATE(636)] = 9615,
  [SMALL_STATE(637)] = 9619,
  [SMALL_STATE(638)] = 9623,
  [SMALL_STATE(639)] = 9627,
  [SMALL_STATE(640)] = 9631,
  [SMALL_STATE(641)] = 9635,
  [SMALL_STATE(642)] = 9639,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(331),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(86),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(40),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(331),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(86),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(45),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(618),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(563),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_the_line, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_the_line, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 29),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 29),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 6),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(611),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1, .production_id = 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 4),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 4), SHIFT(104),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_type, 1), SHIFT(104),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 30),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 30),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 14),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 14),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(120),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_default, 6, .production_id = 58),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_default, 6, .production_id = 58),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotations, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotations, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 7),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 7),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2), SHIFT_REPEAT(641),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2), SHIFT_REPEAT(608),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprecated, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotations, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotations, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exceptions, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exceptions, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_def_verbose_sig, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def_verbose_sig, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 8),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 8),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_paramter_annotations, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_paramter_annotations, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotation, 3, .production_id = 54),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotation, 3, .production_id = 54),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_def_verbose_sig, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def_verbose_sig, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2), SHIFT_REPEAT(615),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 8, .production_id = 57),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 8, .production_id = 57),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 7, .production_id = 55),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 7, .production_id = 55),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 6, .production_id = 53),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 6, .production_id = 53),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 5, .production_id = 52),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 5, .production_id = 52),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 9),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 9),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(87),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_parameter_annotation_param, 3, .production_id = 54),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_parameter_annotation_param, 3, .production_id = 54),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_parameter_annotation, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_parameter_annotation, 4),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_item, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_item, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 10),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 10),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(109),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(107),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(552),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 11),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 26),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotations_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotations_repeat1, 2), SHIFT_REPEAT(634),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotations, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 25),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 41),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 26),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 27),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 10),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 25),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 11),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 12),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 10),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 27),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4, .production_id = 44),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superclass, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superclass, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 12),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(628),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 7, .production_id = 41),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(403),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(362),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(558),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2, .production_id = 13),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3, .production_id = 28),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_args, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(323),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation, 7),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_args, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(548),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5, .production_id = 44),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4, .production_id = 50),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(129),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 2),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(516),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3, .production_id = 13),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2, .production_id = 43),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2, .production_id = 43),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4, .production_id = 28),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_args_repeat1, 2), SHIFT_REPEAT(108),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_args_repeat1, 2),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2, .production_id = 42),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(118),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(582),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_interfaces, 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_super_interfaces, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_int, 2, .production_id = 42),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5, .production_id = 50),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3, .production_id = 43),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3, .production_id = 43),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 3),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(127),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4, .production_id = 45),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4, .production_id = 46),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3, .production_id = 33),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5, .production_id = 28),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(390),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [859] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(592),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5, .production_id = 49),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(117),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2), SHIFT_REPEAT(237),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3, .production_id = 32),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_annotation_element_value_simple, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6, .production_id = 44),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotation_element_args_repeat1, 2), SHIFT_REPEAT(392),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotation_element_args_repeat1, 2),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(442),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2, .production_id = 51),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2, .production_id = 51),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2), SHIFT_REPEAT(556),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4, .production_id = 13),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg, 2),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nest_host, 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 4),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_arg, 3),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value, 1),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 4),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 4),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_args_repeat1, 3, .production_id = 54),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 4),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 3),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 56),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 9),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6, .production_id = 28),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 6),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 5),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 8),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 8),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 7),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 6),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 5),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_tag, 1),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_index, 4),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_args, 4),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 40),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 39),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 38),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 35),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_def, 2, .production_id = 15),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3, .production_id = 1),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 37),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3, .production_id = 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 36),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_def, 3, .production_id = 31),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5, .production_id = 46),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_args, 3),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 16),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 17),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 18),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 35),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 34),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 19),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5, .production_id = 45),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 20),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_args, 2),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 7, .production_id = 44),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 21),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_keyword, 1),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 19),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5, .production_id = 13),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 20),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 22),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 16),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 23),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 7, .production_id = 48),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1251] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 7, .production_id = 47),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4, .production_id = 33),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 24),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6, .production_id = 49),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
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
