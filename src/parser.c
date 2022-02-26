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
#define STATE_COUNT 662
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 236
#define ALIAS_COUNT 3
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 69

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
  sym__number = 68,
  anon_sym_SourceFile_COLON_DQUOTE = 69,
  anon_sym_DQUOTE = 70,
  sym_file_name = 71,
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
  aux_sym_constant_pool_item_type_utf8_token1 = 85,
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
  sym__path_segment = 101,
  anon_sym_SLASH = 102,
  sym__endl = 103,
  anon_sym_Classfile = 104,
  anon_sym_true = 105,
  anon_sym_false = 106,
  sym_source_file = 107,
  sym__source_file_verbose = 108,
  sym__source_file_plain = 109,
  sym_class_declaration_plain = 110,
  sym_interface_def_plain = 111,
  sym_superclass = 112,
  sym_super_interfaces = 113,
  sym_interface_type_list = 114,
  sym_class_declaration_plain_body = 115,
  sym_class_declaration_plain_body_item = 116,
  sym_field_declaration = 117,
  sym_constructor_declaration = 118,
  sym_method_declaration = 119,
  sym_method_throws = 120,
  sym__method_declaration_verbose = 121,
  sym_method_declaration_verbose_sig = 122,
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
  sym_number = 168,
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
  sym_hash_number = 186,
  sym_constant_pool_item = 187,
  sym_ref_const_pool_item = 188,
  sym_constant_pool_item_type = 189,
  sym_constant_pool_item_type_utf8 = 190,
  sym_constant_pool_item_type_class = 191,
  sym_constant_pool_item_type_string = 192,
  sym_constant_pool_item_type_ref = 193,
  sym_constant_pool_item_type_name_and_type = 194,
  sym_constant_pool_item_type_double = 195,
  sym_constant_pool_item_type_int = 196,
  sym_class_keyword = 197,
  sym_class_info_def = 198,
  sym_class_info_item = 199,
  sym_class_info_item_simple = 200,
  sym_header_info_last_mod = 201,
  sym_header_info_md5 = 202,
  sym_header_info_compile = 203,
  sym_file_path = 204,
  sym__rest_of_the_line = 205,
  sym_header_info = 206,
  sym_header = 207,
  sym_boolean_literal = 208,
  aux_sym_interface_type_list_repeat1 = 209,
  aux_sym_class_declaration_plain_body_repeat1 = 210,
  aux_sym_runtime_visible_annotations_repeat1 = 211,
  aux_sym_runtime_visible_type_annotations_repeat1 = 212,
  aux_sym_runtime_visible_type_annotation_repeat1 = 213,
  aux_sym_runtime_visible_paramter_annotations_repeat1 = 214,
  aux_sym_type_parameters_repeat1 = 215,
  aux_sym_type_bound_repeat1 = 216,
  aux_sym_modifiers_repeat1 = 217,
  aux_sym_code_info_repeat1 = 218,
  aux_sym_code_info_repeat2 = 219,
  aux_sym_line_number_table_def_repeat1 = 220,
  aux_sym_flag_def_repeat1 = 221,
  aux_sym_args_repeat1 = 222,
  aux_sym_dimensions_repeat1 = 223,
  aux_sym_type_arguments_repeat1 = 224,
  aux_sym_block_repeat1 = 225,
  aux_sym_nested_members_repeat1 = 226,
  aux_sym_inner_classes_repeat1 = 227,
  aux_sym_footer_runtime_visible_annotations_repeat1 = 228,
  aux_sym_footer_runtime_visible_annotation_element_args_repeat1 = 229,
  aux_sym_runtime_annotation_element_value_array_repeat1 = 230,
  aux_sym_runtime_annotation_args_repeat1 = 231,
  aux_sym_constant_pool_def_repeat1 = 232,
  aux_sym_class_info_def_repeat1 = 233,
  aux_sym_class_info_item_simple_repeat1 = 234,
  aux_sym_file_path_repeat1 = 235,
  alias_sym_footer_runtime_visible_type_annotations = 236,
  alias_sym_target_kind = 237,
  alias_sym_type_identifier = 238,
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
  [aux_sym_instruction_token1] = "instruction_name",
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
  [sym__number] = "_number",
  [anon_sym_SourceFile_COLON_DQUOTE] = "SourceFile: \"",
  [anon_sym_DQUOTE] = "\"",
  [sym_file_name] = "file_name",
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
  [aux_sym_constant_pool_item_type_utf8_token1] = "constant_pool_item_type_utf8_token1",
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
  [sym__path_segment] = "_path_segment",
  [anon_sym_SLASH] = "/",
  [sym__endl] = "_endl",
  [anon_sym_Classfile] = "Classfile",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__source_file_verbose] = "_source_file_verbose",
  [sym__source_file_plain] = "_source_file_plain",
  [sym_class_declaration_plain] = "class_declaration_plain",
  [sym_interface_def_plain] = "interface_def_plain",
  [sym_superclass] = "superclass",
  [sym_super_interfaces] = "super_interfaces",
  [sym_interface_type_list] = "interface_type_list",
  [sym_class_declaration_plain_body] = "class_declaration_plain_body",
  [sym_class_declaration_plain_body_item] = "class_declaration_plain_body_item",
  [sym_field_declaration] = "field_declaration",
  [sym_constructor_declaration] = "constructor_declaration",
  [sym_method_declaration] = "method_declaration",
  [sym_method_throws] = "method_throws",
  [sym__method_declaration_verbose] = "_method_declaration_verbose",
  [sym_method_declaration_verbose_sig] = "method_declaration_verbose_sig",
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
  [sym_number] = "number",
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
  [sym_hash_number] = "hash_number",
  [sym_constant_pool_item] = "constant_pool_item",
  [sym_ref_const_pool_item] = "ref_const_pool_item",
  [sym_constant_pool_item_type] = "constant_pool_item_type",
  [sym_constant_pool_item_type_utf8] = "constant_pool_item_type_utf8",
  [sym_constant_pool_item_type_class] = "constant_pool_item_type_class",
  [sym_constant_pool_item_type_string] = "constant_pool_item_type_string",
  [sym_constant_pool_item_type_ref] = "constant_pool_item_type_ref",
  [sym_constant_pool_item_type_name_and_type] = "constant_pool_item_type_name_and_type",
  [sym_constant_pool_item_type_double] = "constant_pool_item_type_double",
  [sym_constant_pool_item_type_int] = "constant_pool_item_type_int",
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
  [aux_sym_class_declaration_plain_body_repeat1] = "class_declaration_plain_body_repeat1",
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
  [sym__number] = sym__number,
  [anon_sym_SourceFile_COLON_DQUOTE] = anon_sym_SourceFile_COLON_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_file_name] = sym_file_name,
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
  [aux_sym_constant_pool_item_type_utf8_token1] = aux_sym_constant_pool_item_type_utf8_token1,
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
  [sym__path_segment] = sym__path_segment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym__endl] = sym__endl,
  [anon_sym_Classfile] = anon_sym_Classfile,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym__source_file_verbose] = sym__source_file_verbose,
  [sym__source_file_plain] = sym__source_file_plain,
  [sym_class_declaration_plain] = sym_class_declaration_plain,
  [sym_interface_def_plain] = sym_interface_def_plain,
  [sym_superclass] = sym_superclass,
  [sym_super_interfaces] = sym_super_interfaces,
  [sym_interface_type_list] = sym_interface_type_list,
  [sym_class_declaration_plain_body] = sym_class_declaration_plain_body,
  [sym_class_declaration_plain_body_item] = sym_class_declaration_plain_body_item,
  [sym_field_declaration] = sym_field_declaration,
  [sym_constructor_declaration] = sym_constructor_declaration,
  [sym_method_declaration] = sym_method_declaration,
  [sym_method_throws] = sym_method_throws,
  [sym__method_declaration_verbose] = sym__method_declaration_verbose,
  [sym_method_declaration_verbose_sig] = sym_method_declaration_verbose_sig,
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
  [sym_number] = sym_number,
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
  [sym_hash_number] = sym_hash_number,
  [sym_constant_pool_item] = sym_constant_pool_item,
  [sym_ref_const_pool_item] = sym_ref_const_pool_item,
  [sym_constant_pool_item_type] = sym_constant_pool_item_type,
  [sym_constant_pool_item_type_utf8] = sym_constant_pool_item_type_utf8,
  [sym_constant_pool_item_type_class] = sym_constant_pool_item_type_class,
  [sym_constant_pool_item_type_string] = sym_constant_pool_item_type_string,
  [sym_constant_pool_item_type_ref] = sym_constant_pool_item_type_ref,
  [sym_constant_pool_item_type_name_and_type] = sym_constant_pool_item_type_name_and_type,
  [sym_constant_pool_item_type_double] = sym_constant_pool_item_type_double,
  [sym_constant_pool_item_type_int] = sym_constant_pool_item_type_int,
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
  [aux_sym_class_declaration_plain_body_repeat1] = aux_sym_class_declaration_plain_body_repeat1,
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
    .visible = true,
    .named = true,
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
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SourceFile_COLON_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_file_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym_constant_pool_item_type_utf8_token1] = {
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
  [sym_class_declaration_plain] = {
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
  [sym_class_declaration_plain_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration_plain_body_item] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_throws] = {
    .visible = true,
    .named = true,
  },
  [sym__method_declaration_verbose] = {
    .visible = false,
    .named = true,
  },
  [sym_method_declaration_verbose_sig] = {
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
  [sym_number] = {
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
  [sym_hash_number] = {
    .visible = true,
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
  [sym_constant_pool_item_type] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_pool_item_type_utf8] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_pool_item_type_class] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_pool_item_type_string] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_pool_item_type_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_pool_item_type_name_and_type] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_pool_item_type_double] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_pool_item_type_int] = {
    .visible = true,
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
  [aux_sym_class_declaration_plain_body_repeat1] = {
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
  field_value = 13,
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
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 3},
  [14] = {.index = 27, .length = 3},
  [15] = {.index = 30, .length = 3},
  [16] = {.index = 33, .length = 2},
  [17] = {.index = 35, .length = 2},
  [18] = {.index = 37, .length = 2},
  [20] = {.index = 39, .length = 2},
  [21] = {.index = 41, .length = 2},
  [22] = {.index = 43, .length = 4},
  [23] = {.index = 47, .length = 4},
  [24] = {.index = 51, .length = 4},
  [25] = {.index = 55, .length = 3},
  [26] = {.index = 58, .length = 3},
  [27] = {.index = 61, .length = 3},
  [28] = {.index = 64, .length = 3},
  [29] = {.index = 67, .length = 4},
  [30] = {.index = 71, .length = 4},
  [31] = {.index = 75, .length = 4},
  [32] = {.index = 79, .length = 3},
  [33] = {.index = 82, .length = 3},
  [34] = {.index = 85, .length = 3},
  [38] = {.index = 88, .length = 2},
  [39] = {.index = 90, .length = 2},
  [40] = {.index = 92, .length = 3},
  [41] = {.index = 95, .length = 5},
  [42] = {.index = 100, .length = 4},
  [43] = {.index = 104, .length = 4},
  [44] = {.index = 108, .length = 4},
  [45] = {.index = 112, .length = 4},
  [46] = {.index = 116, .length = 4},
  [47] = {.index = 120, .length = 5},
  [48] = {.index = 125, .length = 4},
  [49] = {.index = 129, .length = 2},
  [50] = {.index = 129, .length = 2},
  [51] = {.index = 129, .length = 2},
  [54] = {.index = 131, .length = 4},
  [55] = {.index = 135, .length = 3},
  [56] = {.index = 138, .length = 5},
  [57] = {.index = 143, .length = 5},
  [58] = {.index = 148, .length = 4},
  [59] = {.index = 152, .length = 4},
  [65] = {.index = 156, .length = 1},
  [66] = {.index = 157, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_name, 1},
    {field_superclass, 2},
  [5] =
    {field_interfaces, 2},
    {field_name, 1},
  [7] =
    {field_name, 1},
    {field_type_paramters, 2},
  [9] =
    {field_name, 2},
  [10] =
    {field_body, 3},
    {field_name, 1},
    {field_superclass, 2},
  [13] =
    {field_body, 3},
    {field_interfaces, 2},
    {field_name, 1},
  [16] =
    {field_body, 3},
    {field_name, 1},
    {field_type_paramters, 2},
  [19] =
    {field_body, 3},
    {field_name, 2},
  [21] =
    {field_body, 3},
    {field_name, 1},
    {field_type_parameters, 2},
  [24] =
    {field_interfaces, 3},
    {field_name, 1},
    {field_superclass, 2},
  [27] =
    {field_name, 1},
    {field_superclass, 3},
    {field_type_paramters, 2},
  [30] =
    {field_interfaces, 3},
    {field_name, 1},
    {field_type_paramters, 2},
  [33] =
    {field_name, 2},
    {field_superclass, 3},
  [35] =
    {field_interfaces, 3},
    {field_name, 2},
  [37] =
    {field_name, 2},
    {field_type_paramters, 3},
  [39] =
    {field_dimensions, 1},
    {field_element, 0},
  [41] =
    {field_name, 0},
    {field_paramters, 1},
  [43] =
    {field_body, 4},
    {field_interfaces, 3},
    {field_name, 1},
    {field_superclass, 2},
  [47] =
    {field_body, 4},
    {field_name, 1},
    {field_superclass, 3},
    {field_type_paramters, 2},
  [51] =
    {field_body, 4},
    {field_interfaces, 3},
    {field_name, 1},
    {field_type_paramters, 2},
  [55] =
    {field_body, 4},
    {field_name, 2},
    {field_superclass, 3},
  [58] =
    {field_body, 4},
    {field_interfaces, 3},
    {field_name, 2},
  [61] =
    {field_body, 4},
    {field_name, 2},
    {field_type_paramters, 3},
  [64] =
    {field_body, 4},
    {field_name, 2},
    {field_type_parameters, 3},
  [67] =
    {field_body, 4},
    {field_name, 1},
    {field_superclass, 3},
    {field_type_parameters, 2},
  [71] =
    {field_body, 4},
    {field_interfaces, 3},
    {field_name, 1},
    {field_type_parameters, 2},
  [75] =
    {field_interfaces, 4},
    {field_name, 1},
    {field_superclass, 3},
    {field_type_paramters, 2},
  [79] =
    {field_interfaces, 4},
    {field_name, 2},
    {field_superclass, 3},
  [82] =
    {field_name, 2},
    {field_superclass, 4},
    {field_type_paramters, 3},
  [85] =
    {field_interfaces, 4},
    {field_name, 2},
    {field_type_paramters, 3},
  [88] =
    {field_name, 2},
    {field_type, 1},
  [90] =
    {field_name, 1},
    {field_paramters, 2},
  [92] =
    {field_name, 1},
    {field_paramters, 2},
    {field_return_type, 0},
  [95] =
    {field_body, 5},
    {field_interfaces, 4},
    {field_name, 1},
    {field_superclass, 3},
    {field_type_paramters, 2},
  [100] =
    {field_body, 5},
    {field_interfaces, 4},
    {field_name, 2},
    {field_superclass, 3},
  [104] =
    {field_body, 5},
    {field_name, 2},
    {field_superclass, 4},
    {field_type_paramters, 3},
  [108] =
    {field_body, 5},
    {field_interfaces, 4},
    {field_name, 2},
    {field_type_paramters, 3},
  [112] =
    {field_body, 5},
    {field_name, 2},
    {field_superclass, 4},
    {field_type_parameters, 3},
  [116] =
    {field_body, 5},
    {field_interfaces, 4},
    {field_name, 2},
    {field_type_parameters, 3},
  [120] =
    {field_body, 5},
    {field_interfaces, 4},
    {field_name, 1},
    {field_superclass, 3},
    {field_type_parameters, 2},
  [125] =
    {field_interfaces, 5},
    {field_name, 2},
    {field_superclass, 4},
    {field_type_paramters, 3},
  [129] =
    {field_type, 0},
    {field_value, 1},
  [131] =
    {field_name, 2},
    {field_paramters, 3},
    {field_return_type, 1},
    {field_type_parameters, 0},
  [135] =
    {field_name, 2},
    {field_paramters, 3},
    {field_return_type, 1},
  [138] =
    {field_body, 6},
    {field_interfaces, 5},
    {field_name, 2},
    {field_superclass, 4},
    {field_type_paramters, 3},
  [143] =
    {field_body, 6},
    {field_interfaces, 5},
    {field_name, 2},
    {field_superclass, 4},
    {field_type_parameters, 3},
  [148] =
    {field_name, 3},
    {field_paramters, 4},
    {field_return_type, 2},
    {field_type_parameters, 1},
  [152] =
    {field_type, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
  [156] =
    {field_name, 0},
  [157] =
    {field_name, 2},
    {field_scope, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [0] = alias_sym_type_identifier,
  },
  [19] = {
    [1] = alias_sym_footer_runtime_visible_type_annotations,
  },
  [21] = {
    [0] = alias_sym_type_identifier,
  },
  [35] = {
    [2] = alias_sym_footer_runtime_visible_type_annotations,
  },
  [36] = {
    [2] = alias_sym_type_identifier,
  },
  [37] = {
    [0] = alias_sym_type_identifier,
    [2] = alias_sym_type_identifier,
  },
  [39] = {
    [1] = alias_sym_type_identifier,
  },
  [49] = {
    [1] = sym_decimal_floating_point_literal,
  },
  [50] = {
    [1] = sym_ref_const_pool_item,
  },
  [52] = {
    [1] = sym_decimal_floating_point_literal,
  },
  [53] = {
    [3] = alias_sym_footer_runtime_visible_type_annotations,
  },
  [59] = {
    [1] = sym_ref_const_pool_item,
    [3] = sym_ref_const_pool_item,
  },
  [60] = {
    [1] = alias_sym_target_kind,
  },
  [61] = {
    [2] = alias_sym_target_kind,
    [4] = sym_decimal_floating_point_literal,
  },
  [62] = {
    [2] = alias_sym_target_kind,
    [5] = sym_decimal_floating_point_literal,
  },
  [63] = {
    [2] = sym_decimal_floating_point_literal,
  },
  [64] = {
    [6] = sym_decimal_floating_point_literal,
  },
  [67] = {
    [7] = sym_decimal_floating_point_literal,
  },
  [68] = {
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
  sym_number, 2,
    sym_number,
    sym_decimal_floating_point_literal,
  sym_hash_number, 2,
    sym_hash_number,
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
  [105] = 105,
  [106] = 105,
  [107] = 105,
  [108] = 108,
  [109] = 87,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 89,
  [114] = 32,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 119,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 121,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 119,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 35,
  [137] = 31,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 37,
  [143] = 48,
  [144] = 39,
  [145] = 45,
  [146] = 36,
  [147] = 13,
  [148] = 46,
  [149] = 44,
  [150] = 42,
  [151] = 47,
  [152] = 43,
  [153] = 61,
  [154] = 154,
  [155] = 155,
  [156] = 50,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 59,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 35,
  [167] = 58,
  [168] = 2,
  [169] = 169,
  [170] = 32,
  [171] = 31,
  [172] = 57,
  [173] = 173,
  [174] = 174,
  [175] = 37,
  [176] = 176,
  [177] = 48,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 42,
  [186] = 36,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 43,
  [196] = 45,
  [197] = 46,
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
  [214] = 30,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 39,
  [224] = 47,
  [225] = 225,
  [226] = 44,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 23,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 57,
  [235] = 50,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 26,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 58,
  [248] = 180,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 246,
  [253] = 253,
  [254] = 246,
  [255] = 255,
  [256] = 30,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 15,
  [261] = 84,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 31,
  [270] = 270,
  [271] = 271,
  [272] = 19,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 190,
  [280] = 280,
  [281] = 35,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 217,
  [286] = 286,
  [287] = 77,
  [288] = 82,
  [289] = 60,
  [290] = 81,
  [291] = 222,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 18,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 294,
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
  [315] = 60,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 22,
  [326] = 326,
  [327] = 319,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 32,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 25,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 24,
  [346] = 346,
  [347] = 347,
  [348] = 190,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 2,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 349,
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
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 273,
  [377] = 377,
  [378] = 378,
  [379] = 222,
  [380] = 380,
  [381] = 363,
  [382] = 382,
  [383] = 383,
  [384] = 367,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 380,
  [395] = 395,
  [396] = 349,
  [397] = 397,
  [398] = 395,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 367,
  [404] = 380,
  [405] = 405,
  [406] = 406,
  [407] = 363,
  [408] = 385,
  [409] = 389,
  [410] = 410,
  [411] = 411,
  [412] = 52,
  [413] = 356,
  [414] = 414,
  [415] = 415,
  [416] = 356,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 422,
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
  [439] = 429,
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
  [451] = 420,
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
  [470] = 433,
  [471] = 469,
  [472] = 441,
  [473] = 442,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 440,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 429,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 459,
  [490] = 490,
  [491] = 491,
  [492] = 462,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 467,
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
  [516] = 459,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 462,
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
  [560] = 13,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
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
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 590,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 539,
  [632] = 632,
  [633] = 633,
  [634] = 616,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 630,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 550,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 539,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 547,
  [656] = 652,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 650,
  [661] = 657,
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

static inline bool sym__identifier_character_set_3(int32_t c) {
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
      if (lookahead == '"') ADVANCE(706);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '&') ADVANCE(344);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(734);
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
          lookahead == ' ') SKIP(291)
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
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(705);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == 'A') ADVANCE(603);
      if (lookahead == 'D') ADVANCE(548);
      if (lookahead == 'E') ADVANCE(699);
      if (lookahead == 'R') ADVANCE(696);
      if (lookahead == 'S') ADVANCE(577);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(702);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == 'A') ADVANCE(603);
      if (lookahead == 'D') ADVANCE(548);
      if (lookahead == 'E') ADVANCE(699);
      if (lookahead == 'R') ADVANCE(696);
      if (lookahead == 'S') ADVANCE(577);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(702);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(331);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(711);
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(332);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(702);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(487);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(726);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(726);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(715);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(354);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(712);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(310);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(351);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(709);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(710);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(716);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(716);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(346);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(333);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(334);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(312);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(727);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '<') ADVANCE(342);
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
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(244);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(179);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(149);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(144);
      END_STATE();
    case 72:
      if (lookahead == 'H') ADVANCE(188);
      if (lookahead == 'M') ADVANCE(128);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(240);
      END_STATE();
    case 74:
      if (lookahead == 'T') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'V') ADVANCE(142);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(242);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(724);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 95:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(728);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(199);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 146:
      if (lookahead == 'k') ADVANCE(205);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(730);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(731);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 242:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 243:
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 244:
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 245:
      if (lookahead == '}') ADVANCE(341);
      END_STATE();
    case 246:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(738);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
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
          lookahead == ' ') ADVANCE(732);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(733);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 255:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 291:
      if (eof) ADVANCE(298);
      if (lookahead == '"') ADVANCE(706);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '&') ADVANCE(344);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(734);
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
          lookahead == ' ') SKIP(291)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(702);
      END_STATE();
    case 292:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '&') ADVANCE(344);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == 'C') ADVANCE(182);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == 'L') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(70);
      if (lookahead == 'N') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(237);
      if (lookahead == 'S') ADVANCE(135);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(293)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      END_STATE();
    case 293:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '&') ADVANCE(344);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == 'C') ADVANCE(182);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == 'L') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(70);
      if (lookahead == 'N') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(237);
      if (lookahead == 'S') ADVANCE(135);
      if (lookahead == '[') ADVANCE(485);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(293)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      END_STATE();
    case 294:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(331);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
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
          lookahead == ' ') SKIP(295)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(702);
      END_STATE();
    case 295:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == '<') ADVANCE(342);
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
          lookahead == ' ') SKIP(295)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(702);
      END_STATE();
    case 296:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead == 'C') ADVANCE(624);
      if (lookahead == 'I') ADVANCE(607);
      if (lookahead == 'N') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(297)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(702);
      END_STATE();
    case 297:
      if (eof) ADVANCE(298);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == 'C') ADVANCE(624);
      if (lookahead == 'I') ADVANCE(607);
      if (lookahead == 'N') ADVANCE(572);
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
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
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
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
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
          lookahead == '\r') ADVANCE(738);
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
          lookahead == '\r') ADVANCE(738);
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
          lookahead == '\r') ADVANCE(738);
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
      if (lookahead == ' ') ADVANCE(191);
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
      if (lookahead == ' ') ADVANCE(99);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(157);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(129);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(702);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(192);
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
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_file_name);
      if (lookahead == '.') ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_file_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
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
          lookahead == '\r') ADVANCE(738);
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
      ACCEPT_TOKEN(aux_sym_constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(717);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(721);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(722);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(719);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(719);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(721);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(722);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(733);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(721);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(722);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(84);
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
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(732);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(733);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(733);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(733);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(721);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(722);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(738);
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
  [1] = {.lex_state = 296},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 294},
  [4] = {.lex_state = 294},
  [5] = {.lex_state = 294},
  [6] = {.lex_state = 294},
  [7] = {.lex_state = 294},
  [8] = {.lex_state = 294},
  [9] = {.lex_state = 294},
  [10] = {.lex_state = 294},
  [11] = {.lex_state = 294},
  [12] = {.lex_state = 294},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 294},
  [15] = {.lex_state = 294},
  [16] = {.lex_state = 294},
  [17] = {.lex_state = 294},
  [18] = {.lex_state = 294},
  [19] = {.lex_state = 294},
  [20] = {.lex_state = 294},
  [21] = {.lex_state = 294},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 294},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 294},
  [26] = {.lex_state = 294},
  [27] = {.lex_state = 294},
  [28] = {.lex_state = 294},
  [29] = {.lex_state = 294},
  [30] = {.lex_state = 294},
  [31] = {.lex_state = 294},
  [32] = {.lex_state = 294},
  [33] = {.lex_state = 294},
  [34] = {.lex_state = 294},
  [35] = {.lex_state = 294},
  [36] = {.lex_state = 294},
  [37] = {.lex_state = 294},
  [38] = {.lex_state = 294},
  [39] = {.lex_state = 294},
  [40] = {.lex_state = 294},
  [41] = {.lex_state = 294},
  [42] = {.lex_state = 294},
  [43] = {.lex_state = 294},
  [44] = {.lex_state = 294},
  [45] = {.lex_state = 294},
  [46] = {.lex_state = 294},
  [47] = {.lex_state = 294},
  [48] = {.lex_state = 294},
  [49] = {.lex_state = 294},
  [50] = {.lex_state = 294},
  [51] = {.lex_state = 294},
  [52] = {.lex_state = 294},
  [53] = {.lex_state = 294},
  [54] = {.lex_state = 294},
  [55] = {.lex_state = 294},
  [56] = {.lex_state = 294},
  [57] = {.lex_state = 294},
  [58] = {.lex_state = 294},
  [59] = {.lex_state = 294},
  [60] = {.lex_state = 294},
  [61] = {.lex_state = 294},
  [62] = {.lex_state = 294},
  [63] = {.lex_state = 294},
  [64] = {.lex_state = 294},
  [65] = {.lex_state = 294},
  [66] = {.lex_state = 294},
  [67] = {.lex_state = 294},
  [68] = {.lex_state = 294},
  [69] = {.lex_state = 294},
  [70] = {.lex_state = 294},
  [71] = {.lex_state = 294},
  [72] = {.lex_state = 294},
  [73] = {.lex_state = 294},
  [74] = {.lex_state = 294},
  [75] = {.lex_state = 294},
  [76] = {.lex_state = 294},
  [77] = {.lex_state = 294},
  [78] = {.lex_state = 294},
  [79] = {.lex_state = 294},
  [80] = {.lex_state = 294},
  [81] = {.lex_state = 294},
  [82] = {.lex_state = 294},
  [83] = {.lex_state = 294},
  [84] = {.lex_state = 294},
  [85] = {.lex_state = 294},
  [86] = {.lex_state = 294},
  [87] = {.lex_state = 294},
  [88] = {.lex_state = 294},
  [89] = {.lex_state = 294},
  [90] = {.lex_state = 294},
  [91] = {.lex_state = 294},
  [92] = {.lex_state = 294},
  [93] = {.lex_state = 294},
  [94] = {.lex_state = 294},
  [95] = {.lex_state = 294},
  [96] = {.lex_state = 294},
  [97] = {.lex_state = 294},
  [98] = {.lex_state = 294},
  [99] = {.lex_state = 294},
  [100] = {.lex_state = 294},
  [101] = {.lex_state = 294},
  [102] = {.lex_state = 294},
  [103] = {.lex_state = 294},
  [104] = {.lex_state = 294},
  [105] = {.lex_state = 294},
  [106] = {.lex_state = 294},
  [107] = {.lex_state = 294},
  [108] = {.lex_state = 294},
  [109] = {.lex_state = 294},
  [110] = {.lex_state = 294},
  [111] = {.lex_state = 294},
  [112] = {.lex_state = 294},
  [113] = {.lex_state = 294},
  [114] = {.lex_state = 292},
  [115] = {.lex_state = 294},
  [116] = {.lex_state = 294},
  [117] = {.lex_state = 294},
  [118] = {.lex_state = 294},
  [119] = {.lex_state = 294},
  [120] = {.lex_state = 294},
  [121] = {.lex_state = 294},
  [122] = {.lex_state = 294},
  [123] = {.lex_state = 294},
  [124] = {.lex_state = 294},
  [125] = {.lex_state = 294},
  [126] = {.lex_state = 294},
  [127] = {.lex_state = 294},
  [128] = {.lex_state = 294},
  [129] = {.lex_state = 294},
  [130] = {.lex_state = 294},
  [131] = {.lex_state = 294},
  [132] = {.lex_state = 294},
  [133] = {.lex_state = 294},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 292},
  [137] = {.lex_state = 292},
  [138] = {.lex_state = 292},
  [139] = {.lex_state = 292},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 292},
  [143] = {.lex_state = 292},
  [144] = {.lex_state = 292},
  [145] = {.lex_state = 292},
  [146] = {.lex_state = 292},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 292},
  [149] = {.lex_state = 292},
  [150] = {.lex_state = 292},
  [151] = {.lex_state = 292},
  [152] = {.lex_state = 292},
  [153] = {.lex_state = 292},
  [154] = {.lex_state = 294},
  [155] = {.lex_state = 292},
  [156] = {.lex_state = 292},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 292},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 292},
  [161] = {.lex_state = 292},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 292},
  [165] = {.lex_state = 292},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 292},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 292},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 292},
  [173] = {.lex_state = 292},
  [174] = {.lex_state = 292},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 292},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 292},
  [179] = {.lex_state = 292},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 292},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 292},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 294},
  [188] = {.lex_state = 292},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 294},
  [191] = {.lex_state = 13},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 292},
  [194] = {.lex_state = 292},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 13},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 294},
  [203] = {.lex_state = 13},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 294},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 13},
  [213] = {.lex_state = 13},
  [214] = {.lex_state = 13},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 13},
  [218] = {.lex_state = 13},
  [219] = {.lex_state = 13},
  [220] = {.lex_state = 294},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 294},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 13},
  [225] = {.lex_state = 292},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 292},
  [231] = {.lex_state = 292},
  [232] = {.lex_state = 292},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 13},
  [236] = {.lex_state = 294},
  [237] = {.lex_state = 292},
  [238] = {.lex_state = 292},
  [239] = {.lex_state = 296},
  [240] = {.lex_state = 294},
  [241] = {.lex_state = 294},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 292},
  [244] = {.lex_state = 292},
  [245] = {.lex_state = 294},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 13},
  [250] = {.lex_state = 292},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 292},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 292},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 296},
  [258] = {.lex_state = 292},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 13},
  [261] = {.lex_state = 292},
  [262] = {.lex_state = 294},
  [263] = {.lex_state = 13},
  [264] = {.lex_state = 296},
  [265] = {.lex_state = 292},
  [266] = {.lex_state = 13},
  [267] = {.lex_state = 294},
  [268] = {.lex_state = 294},
  [269] = {.lex_state = 294},
  [270] = {.lex_state = 13},
  [271] = {.lex_state = 13},
  [272] = {.lex_state = 13},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 292},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 292},
  [277] = {.lex_state = 292},
  [278] = {.lex_state = 292},
  [279] = {.lex_state = 13},
  [280] = {.lex_state = 292},
  [281] = {.lex_state = 294},
  [282] = {.lex_state = 296},
  [283] = {.lex_state = 294},
  [284] = {.lex_state = 296},
  [285] = {.lex_state = 292},
  [286] = {.lex_state = 292},
  [287] = {.lex_state = 292},
  [288] = {.lex_state = 292},
  [289] = {.lex_state = 13},
  [290] = {.lex_state = 292},
  [291] = {.lex_state = 13},
  [292] = {.lex_state = 296},
  [293] = {.lex_state = 296},
  [294] = {.lex_state = 296},
  [295] = {.lex_state = 13},
  [296] = {.lex_state = 13},
  [297] = {.lex_state = 292},
  [298] = {.lex_state = 292},
  [299] = {.lex_state = 296},
  [300] = {.lex_state = 717},
  [301] = {.lex_state = 296},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 296},
  [305] = {.lex_state = 294},
  [306] = {.lex_state = 292},
  [307] = {.lex_state = 292},
  [308] = {.lex_state = 292},
  [309] = {.lex_state = 292},
  [310] = {.lex_state = 296},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 292},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 296},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 292},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 13},
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 294},
  [322] = {.lex_state = 296},
  [323] = {.lex_state = 294},
  [324] = {.lex_state = 718},
  [325] = {.lex_state = 68},
  [326] = {.lex_state = 292},
  [327] = {.lex_state = 11},
  [328] = {.lex_state = 296},
  [329] = {.lex_state = 292},
  [330] = {.lex_state = 292},
  [331] = {.lex_state = 294},
  [332] = {.lex_state = 13},
  [333] = {.lex_state = 292},
  [334] = {.lex_state = 718},
  [335] = {.lex_state = 718},
  [336] = {.lex_state = 292},
  [337] = {.lex_state = 292},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 292},
  [340] = {.lex_state = 718},
  [341] = {.lex_state = 13},
  [342] = {.lex_state = 292},
  [343] = {.lex_state = 292},
  [344] = {.lex_state = 292},
  [345] = {.lex_state = 68},
  [346] = {.lex_state = 292},
  [347] = {.lex_state = 296},
  [348] = {.lex_state = 292},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 294},
  [351] = {.lex_state = 294},
  [352] = {.lex_state = 294},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 11},
  [355] = {.lex_state = 718},
  [356] = {.lex_state = 294},
  [357] = {.lex_state = 13},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 296},
  [360] = {.lex_state = 296},
  [361] = {.lex_state = 296},
  [362] = {.lex_state = 296},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 719},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 294},
  [369] = {.lex_state = 296},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 296},
  [372] = {.lex_state = 294},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 294},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 292},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 294},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 11},
  [386] = {.lex_state = 294},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 294},
  [389] = {.lex_state = 11},
  [390] = {.lex_state = 248},
  [391] = {.lex_state = 294},
  [392] = {.lex_state = 296},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 11},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 296},
  [398] = {.lex_state = 11},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 296},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 294},
  [406] = {.lex_state = 11},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 11},
  [409] = {.lex_state = 11},
  [410] = {.lex_state = 11},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 294},
  [414] = {.lex_state = 292},
  [415] = {.lex_state = 296},
  [416] = {.lex_state = 294},
  [417] = {.lex_state = 292},
  [418] = {.lex_state = 292},
  [419] = {.lex_state = 294},
  [420] = {.lex_state = 296},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 296},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 296},
  [428] = {.lex_state = 292},
  [429] = {.lex_state = 296},
  [430] = {.lex_state = 296},
  [431] = {.lex_state = 292},
  [432] = {.lex_state = 296},
  [433] = {.lex_state = 296},
  [434] = {.lex_state = 292},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 296},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 720},
  [442] = {.lex_state = 720},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 720},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 294},
  [449] = {.lex_state = 294},
  [450] = {.lex_state = 296},
  [451] = {.lex_state = 296},
  [452] = {.lex_state = 720},
  [453] = {.lex_state = 248},
  [454] = {.lex_state = 292},
  [455] = {.lex_state = 294},
  [456] = {.lex_state = 294},
  [457] = {.lex_state = 292},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 294},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 294},
  [463] = {.lex_state = 294},
  [464] = {.lex_state = 294},
  [465] = {.lex_state = 294},
  [466] = {.lex_state = 718},
  [467] = {.lex_state = 720},
  [468] = {.lex_state = 296},
  [469] = {.lex_state = 720},
  [470] = {.lex_state = 296},
  [471] = {.lex_state = 720},
  [472] = {.lex_state = 720},
  [473] = {.lex_state = 720},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 296},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 296},
  [479] = {.lex_state = 249},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 296},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 294},
  [490] = {.lex_state = 294},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 294},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 294},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 294},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 11},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 720},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 720},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 11},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 294},
  [513] = {.lex_state = 294},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 294},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 294},
  [521] = {.lex_state = 11},
  [522] = {.lex_state = 720},
  [523] = {.lex_state = 720},
  [524] = {.lex_state = 296},
  [525] = {.lex_state = 296},
  [526] = {.lex_state = 11},
  [527] = {.lex_state = 292},
  [528] = {.lex_state = 292},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 292},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 292},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 1},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 296},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 296},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 16},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 296},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 296},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 11},
  [556] = {.lex_state = 296},
  [557] = {.lex_state = 294},
  [558] = {.lex_state = 292},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 11},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 11},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 292},
  [573] = {.lex_state = 292},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 250},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 9},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 292},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 296},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 11},
  [590] = {.lex_state = 11},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 251},
  [603] = {.lex_state = 292},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 11},
  [606] = {.lex_state = 11},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 253},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 292},
  [612] = {.lex_state = 252},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 294},
  [618] = {.lex_state = 248},
  [619] = {.lex_state = 720},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 294},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 294},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 296},
  [627] = {.lex_state = 294},
  [628] = {.lex_state = 292},
  [629] = {.lex_state = 296},
  [630] = {.lex_state = 254},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 9},
  [633] = {.lex_state = 11},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 250},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 254},
  [639] = {.lex_state = 16},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 292},
  [642] = {.lex_state = 296},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 9},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 292},
  [647] = {.lex_state = 294},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 296},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 253},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 11},
  [655] = {.lex_state = 16},
  [656] = {.lex_state = 253},
  [657] = {.lex_state = 294},
  [658] = {.lex_state = 255},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 296},
  [661] = {.lex_state = 294},
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
    [sym__number] = ACTIONS(1),
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
    [sym_source_file] = STATE(651),
    [sym__source_file_verbose] = STATE(649),
    [sym__source_file_plain] = STATE(649),
    [sym_header_info_compile] = STATE(101),
    [sym_header_info] = STATE(434),
    [sym_header] = STATE(103),
    [anon_sym_Compiledfrom] = ACTIONS(3),
    [anon_sym_Classfile] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(9), 17,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_COLON2,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
      anon_sym_POUND,
      sym__number,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
    ACTIONS(7), 21,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
      anon_sym_of,
  [43] = 18,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_AnnotationDefault_COLON,
    ACTIONS(19), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(27), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(29), 1,
      anon_sym_Code_COLON,
    STATE(10), 1,
      sym_code_def,
    STATE(11), 1,
      sym_annotation_default,
    STATE(17), 1,
      sym_deprecated,
    STATE(29), 1,
      sym_exceptions,
    STATE(49), 1,
      sym_method_declaration_verbose_sig,
    STATE(65), 1,
      sym_runtime_visible_annotations,
    STATE(78), 1,
      sym_runtime_visible_type_annotations,
    STATE(94), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(13), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(11), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [117] = 14,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym_generic_type,
    STATE(89), 1,
      aux_sym_modifiers_repeat1,
    STATE(104), 1,
      sym_modifiers,
    STATE(127), 1,
      sym_type_parameters,
    STATE(206), 1,
      sym_identifier,
    STATE(281), 1,
      sym_scoped_type_identifier,
    STATE(6), 2,
      sym_class_declaration_plain_body_item,
      aux_sym_class_declaration_plain_body_repeat1,
    STATE(267), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(570), 4,
      sym_field_declaration,
      sym_constructor_declaration,
      sym_method_declaration,
      sym_static_block_def,
    ACTIONS(39), 6,
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
  [183] = 14,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_generic_type,
    STATE(89), 1,
      aux_sym_modifiers_repeat1,
    STATE(104), 1,
      sym_modifiers,
    STATE(127), 1,
      sym_type_parameters,
    STATE(206), 1,
      sym_identifier,
    STATE(281), 1,
      sym_scoped_type_identifier,
    STATE(7), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(267), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(540), 4,
      sym_field_declaration,
      sym_constructor_declaration,
      sym_method_declaration,
      sym_static_block_def,
    ACTIONS(39), 6,
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
  [249] = 14,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_generic_type,
    STATE(89), 1,
      aux_sym_modifiers_repeat1,
    STATE(104), 1,
      sym_modifiers,
    STATE(127), 1,
      sym_type_parameters,
    STATE(206), 1,
      sym_identifier,
    STATE(281), 1,
      sym_scoped_type_identifier,
    STATE(9), 2,
      sym_class_declaration_plain_body_item,
      aux_sym_class_declaration_plain_body_repeat1,
    STATE(267), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(570), 4,
      sym_field_declaration,
      sym_constructor_declaration,
      sym_method_declaration,
      sym_static_block_def,
    ACTIONS(39), 6,
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
  [315] = 14,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_generic_type,
    STATE(89), 1,
      aux_sym_modifiers_repeat1,
    STATE(104), 1,
      sym_modifiers,
    STATE(127), 1,
      sym_type_parameters,
    STATE(206), 1,
      sym_identifier,
    STATE(281), 1,
      sym_scoped_type_identifier,
    STATE(8), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(267), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(540), 4,
      sym_field_declaration,
      sym_constructor_declaration,
      sym_method_declaration,
      sym_static_block_def,
    ACTIONS(39), 6,
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
  [381] = 14,
    ACTIONS(47), 1,
      sym__identifier,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym_generic_type,
    STATE(89), 1,
      aux_sym_modifiers_repeat1,
    STATE(104), 1,
      sym_modifiers,
    STATE(127), 1,
      sym_type_parameters,
    STATE(206), 1,
      sym_identifier,
    STATE(281), 1,
      sym_scoped_type_identifier,
    STATE(8), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(267), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(540), 4,
      sym_field_declaration,
      sym_constructor_declaration,
      sym_method_declaration,
      sym_static_block_def,
    ACTIONS(58), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(55), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [447] = 14,
    ACTIONS(61), 1,
      sym__identifier,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym_generic_type,
    STATE(89), 1,
      aux_sym_modifiers_repeat1,
    STATE(104), 1,
      sym_modifiers,
    STATE(127), 1,
      sym_type_parameters,
    STATE(206), 1,
      sym_identifier,
    STATE(281), 1,
      sym_scoped_type_identifier,
    STATE(9), 2,
      sym_class_declaration_plain_body_item,
      aux_sym_class_declaration_plain_body_repeat1,
    STATE(267), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    STATE(570), 4,
      sym_field_declaration,
      sym_constructor_declaration,
      sym_method_declaration,
      sym_static_block_def,
    ACTIONS(72), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(69), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [513] = 16,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(17), 1,
      anon_sym_AnnotationDefault_COLON,
    ACTIONS(19), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(27), 1,
      anon_sym_Exceptions_COLON,
    STATE(12), 1,
      sym_annotation_default,
    STATE(16), 1,
      sym_deprecated,
    STATE(27), 1,
      sym_exceptions,
    STATE(54), 1,
      sym_method_declaration_verbose_sig,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(100), 1,
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
  [581] = 14,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(19), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(27), 1,
      anon_sym_Exceptions_COLON,
    STATE(16), 1,
      sym_deprecated,
    STATE(27), 1,
      sym_exceptions,
    STATE(54), 1,
      sym_method_declaration_verbose_sig,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(100), 1,
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
  [643] = 14,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(19), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(27), 1,
      anon_sym_Exceptions_COLON,
    STATE(20), 1,
      sym_deprecated,
    STATE(33), 1,
      sym_exceptions,
    STATE(55), 1,
      sym_method_declaration_verbose_sig,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [705] = 2,
    ACTIONS(85), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
    ACTIONS(83), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
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
  [741] = 4,
    ACTIONS(91), 1,
      anon_sym_line,
    STATE(14), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(89), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
    ACTIONS(87), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [781] = 4,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(18), 1,
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
  [821] = 12,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(27), 1,
      anon_sym_Exceptions_COLON,
    STATE(33), 1,
      sym_exceptions,
    STATE(55), 1,
      sym_method_declaration_verbose_sig,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [877] = 12,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(27), 1,
      anon_sym_Exceptions_COLON,
    STATE(27), 1,
      sym_exceptions,
    STATE(54), 1,
      sym_method_declaration_verbose_sig,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(100), 1,
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
  [933] = 4,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(105), 10,
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
  [973] = 4,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(109), 10,
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
  [1013] = 12,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    ACTIONS(27), 1,
      anon_sym_Exceptions_COLON,
    STATE(28), 1,
      sym_exceptions,
    STATE(53), 1,
      sym_method_declaration_verbose_sig,
    STATE(67), 1,
      sym_runtime_visible_annotations,
    STATE(76), 1,
      sym_runtime_visible_type_annotations,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
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
  [1069] = 4,
    ACTIONS(119), 1,
      anon_sym_line,
    STATE(14), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(117), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
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
  [1109] = 3,
    ACTIONS(125), 1,
      sym_flag_value,
    ACTIONS(123), 10,
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
  [1146] = 2,
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
      sym__number,
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
  [1181] = 2,
    ACTIONS(133), 10,
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
  [1216] = 2,
    ACTIONS(105), 11,
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
  [1251] = 7,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(50), 1,
      sym_dimensions,
    STATE(52), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(139), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [1296] = 10,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(55), 1,
      sym_method_declaration_verbose_sig,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [1346] = 10,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(51), 1,
      sym_method_declaration_verbose_sig,
    STATE(66), 1,
      sym_runtime_visible_annotations,
    STATE(80), 1,
      sym_runtime_visible_type_annotations,
    STATE(92), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
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
  [1396] = 10,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(54), 1,
      sym_method_declaration_verbose_sig,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(100), 1,
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
  [1446] = 5,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(50), 1,
      sym_dimensions,
    ACTIONS(149), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [1486] = 5,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(158), 1,
      anon_sym_DOT,
    STATE(42), 1,
      sym_type_arguments,
    ACTIONS(153), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LBRACK,
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
  [1526] = 2,
    ACTIONS(162), 10,
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
  [1560] = 10,
    ACTIONS(15), 1,
      anon_sym_Signature_COLON,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(53), 1,
      sym_method_declaration_verbose_sig,
    STATE(67), 1,
      sym_runtime_visible_annotations,
    STATE(76), 1,
      sym_runtime_visible_type_annotations,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
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
  [1610] = 2,
    ACTIONS(166), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
    ACTIONS(164), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1644] = 5,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(44), 1,
      sym_type_arguments,
    ACTIONS(170), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LBRACK,
    ACTIONS(168), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1684] = 3,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(170), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
    ACTIONS(168), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1719] = 2,
    ACTIONS(179), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [1752] = 6,
    ACTIONS(185), 1,
      sym__number,
    STATE(654), 1,
      sym__runtime_index,
    STATE(661), 1,
      sym_number,
    STATE(40), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(183), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [1793] = 2,
    ACTIONS(189), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(187), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1826] = 6,
    ACTIONS(195), 1,
      sym__number,
    STATE(654), 1,
      sym__runtime_index,
    STATE(661), 1,
      sym_number,
    STATE(40), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(193), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(191), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1867] = 2,
    ACTIONS(200), 9,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
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
  [1900] = 2,
    ACTIONS(204), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [1933] = 4,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(208), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [1970] = 2,
    ACTIONS(215), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [2003] = 2,
    ACTIONS(219), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(217), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2036] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(223), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(221), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2073] = 2,
    ACTIONS(227), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [2106] = 2,
    ACTIONS(231), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [2139] = 8,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(64), 1,
      sym_runtime_visible_annotations,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(100), 1,
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
  [2183] = 2,
    ACTIONS(235), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
    ACTIONS(233), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2215] = 8,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(68), 1,
      sym_runtime_visible_annotations,
    STATE(83), 1,
      sym_runtime_visible_type_annotations,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(239), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(237), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2259] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(243), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
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
  [2295] = 8,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(66), 1,
      sym_runtime_visible_annotations,
    STATE(80), 1,
      sym_runtime_visible_type_annotations,
    STATE(92), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
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
  [2339] = 8,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(70), 1,
      sym_runtime_visible_annotations,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [2383] = 8,
    ACTIONS(21), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(67), 1,
      sym_runtime_visible_annotations,
    STATE(76), 1,
      sym_runtime_visible_type_annotations,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
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
  [2427] = 2,
    ACTIONS(247), 8,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [2459] = 2,
    ACTIONS(251), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
    ACTIONS(249), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2491] = 2,
    ACTIONS(208), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LBRACK,
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
  [2523] = 6,
    ACTIONS(185), 1,
      sym__number,
    STATE(657), 1,
      sym_number,
    STATE(660), 1,
      sym__runtime_index,
    STATE(61), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(255), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(253), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2563] = 4,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(149), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [2599] = 6,
    ACTIONS(264), 1,
      sym__number,
    STATE(657), 1,
      sym_number,
    STATE(660), 1,
      sym__runtime_index,
    STATE(61), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(262), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(260), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2639] = 2,
    ACTIONS(269), 7,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [2670] = 2,
    ACTIONS(273), 7,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_LT,
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
  [2701] = 6,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(79), 1,
      sym_runtime_visible_type_annotations,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [2739] = 6,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(85), 1,
      sym_runtime_visible_type_annotations,
    STATE(100), 1,
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
  [2777] = 6,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(83), 1,
      sym_runtime_visible_type_annotations,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(239), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(237), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
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
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(80), 1,
      sym_runtime_visible_type_annotations,
    STATE(92), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
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
  [2853] = 6,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(86), 1,
      sym_runtime_visible_type_annotations,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(277), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [2891] = 2,
    ACTIONS(281), 6,
      anon_sym_RBRACE,
      anon_sym_Signature_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
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
  [2921] = 6,
    ACTIONS(23), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(76), 1,
      sym_runtime_visible_type_annotations,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
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
  [2959] = 3,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(285), 5,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
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
  [2991] = 4,
    ACTIONS(293), 1,
      anon_sym_parameter,
    ACTIONS(291), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    STATE(72), 2,
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
  [3024] = 4,
    ACTIONS(300), 1,
      anon_sym_parameter,
    ACTIONS(298), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    STATE(72), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
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
  [3057] = 2,
    ACTIONS(304), 5,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
    ACTIONS(302), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3086] = 2,
    ACTIONS(308), 5,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      sym__number,
    ACTIONS(306), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3115] = 4,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(92), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
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
  [3147] = 2,
    ACTIONS(312), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      sym__number,
    ACTIONS(310), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3175] = 4,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(100), 1,
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
  [3207] = 4,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(98), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
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
  [3239] = 4,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(91), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(239), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(237), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3271] = 2,
    ACTIONS(316), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      sym__number,
    ACTIONS(314), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3299] = 2,
    ACTIONS(320), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      sym__number,
    ACTIONS(318), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3327] = 4,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(95), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(277), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3359] = 2,
    ACTIONS(324), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
      anon_sym_LT,
      sym__number,
    ACTIONS(322), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3387] = 4,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(96), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3419] = 4,
    ACTIONS(25), 1,
      anon_sym_RuntimeVisibleParameterAnnotations_COLON,
    STATE(93), 1,
      sym_runtime_visible_paramter_annotations,
    ACTIONS(328), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(326), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3451] = 4,
    STATE(87), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(332), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LT,
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
  [3482] = 2,
    ACTIONS(339), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(337), 20,
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
  [3509] = 4,
    STATE(87), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(343), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LT,
    ACTIONS(341), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(345), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3540] = 2,
    ACTIONS(349), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(347), 20,
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
  [3567] = 2,
    ACTIONS(277), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3593] = 2,
    ACTIONS(239), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(237), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3619] = 2,
    ACTIONS(353), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(351), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3645] = 2,
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
  [3671] = 2,
    ACTIONS(328), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(326), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3697] = 2,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
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
  [3723] = 2,
    ACTIONS(357), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(355), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3749] = 2,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
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
  [3775] = 2,
    ACTIONS(361), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(359), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [3801] = 2,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [3827] = 7,
    ACTIONS(363), 1,
      sym_interface_keyword,
    ACTIONS(367), 1,
      anon_sym_class,
    STATE(113), 1,
      aux_sym_modifiers_repeat1,
    STATE(351), 1,
      sym_modifiers,
    STATE(449), 1,
      sym_class_keyword,
    STATE(621), 2,
      sym_class_declaration_plain,
      sym_interface_def_plain,
    ACTIONS(365), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3861] = 9,
    ACTIONS(369), 1,
      anon_sym_Utf8,
    ACTIONS(371), 1,
      anon_sym_Class,
    ACTIONS(373), 1,
      anon_sym_String,
    ACTIONS(377), 1,
      anon_sym_NameAndType,
    ACTIONS(381), 1,
      anon_sym_Integer,
    STATE(307), 1,
      sym_constant_pool_item_type,
    ACTIONS(379), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(375), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(308), 7,
      sym_constant_pool_item_type_utf8,
      sym_constant_pool_item_type_class,
      sym_constant_pool_item_type_string,
      sym_constant_pool_item_type_ref,
      sym_constant_pool_item_type_name_and_type,
      sym_constant_pool_item_type_double,
      sym_constant_pool_item_type_int,
  [3898] = 7,
    ACTIONS(367), 1,
      anon_sym_class,
    ACTIONS(383), 1,
      sym_interface_keyword,
    STATE(113), 1,
      aux_sym_modifiers_repeat1,
    STATE(352), 1,
      sym_modifiers,
    STATE(455), 1,
      sym_class_keyword,
    STATE(457), 1,
      sym_class_info_def,
    ACTIONS(365), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3931] = 9,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(36), 1,
      sym_generic_type,
    STATE(123), 1,
      sym_type_parameters,
    STATE(202), 1,
      sym_identifier,
    STATE(281), 1,
      sym_scoped_type_identifier,
    STATE(268), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(39), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [3967] = 9,
    ACTIONS(387), 1,
      sym__identifier,
    ACTIONS(389), 1,
      anon_sym_GT,
    ACTIONS(391), 1,
      anon_sym_QMARK,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(404), 1,
      sym_wildcard,
    STATE(254), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4003] = 9,
    ACTIONS(387), 1,
      sym__identifier,
    ACTIONS(391), 1,
      anon_sym_QMARK,
    ACTIONS(395), 1,
      anon_sym_GT,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(380), 1,
      sym_wildcard,
    STATE(246), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4039] = 9,
    ACTIONS(387), 1,
      sym__identifier,
    ACTIONS(391), 1,
      anon_sym_QMARK,
    ACTIONS(397), 1,
      anon_sym_GT,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(394), 1,
      sym_wildcard,
    STATE(252), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4075] = 5,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      aux_sym_inner_classes_repeat1,
    STATE(113), 1,
      aux_sym_modifiers_repeat1,
    STATE(421), 1,
      sym_modifiers,
    ACTIONS(365), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4102] = 3,
    STATE(109), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(332), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(401), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4125] = 8,
    ACTIONS(387), 1,
      sym__identifier,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(383), 1,
      sym_vararg,
    STATE(205), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4158] = 5,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      aux_sym_inner_classes_repeat1,
    STATE(113), 1,
      aux_sym_modifiers_repeat1,
    STATE(421), 1,
      sym_modifiers,
    ACTIONS(408), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4185] = 8,
    ACTIONS(387), 1,
      sym__identifier,
    ACTIONS(391), 1,
      anon_sym_QMARK,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(531), 1,
      sym_wildcard,
    STATE(303), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4218] = 3,
    STATE(109), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(343), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(411), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4241] = 2,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 15,
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
  [4262] = 4,
    STATE(108), 1,
      aux_sym_inner_classes_repeat1,
    STATE(113), 1,
      aux_sym_modifiers_repeat1,
    STATE(421), 1,
      sym_modifiers,
    ACTIONS(365), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [4286] = 7,
    ACTIONS(387), 1,
      sym__identifier,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(514), 1,
      sym_vararg,
    STATE(259), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4316] = 7,
    ACTIONS(413), 1,
      sym__identifier,
    STATE(166), 1,
      sym_scoped_type_identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(332), 1,
      sym_interface_type_list,
    STATE(180), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(415), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4346] = 7,
    ACTIONS(387), 1,
      sym__identifier,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(332), 1,
      sym_interface_type_list,
    STATE(248), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4376] = 6,
    ACTIONS(413), 1,
      sym__identifier,
    STATE(166), 1,
      sym_scoped_type_identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(214), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(415), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4403] = 6,
    ACTIONS(387), 1,
      sym__identifier,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(302), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4430] = 6,
    ACTIONS(413), 1,
      sym__identifier,
    STATE(166), 1,
      sym_scoped_type_identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(217), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(415), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4457] = 6,
    ACTIONS(387), 1,
      sym__identifier,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(204), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4484] = 6,
    ACTIONS(31), 1,
      sym__identifier,
    STATE(36), 1,
      sym_generic_type,
    STATE(269), 1,
      sym_identifier,
    STATE(281), 1,
      sym_scoped_type_identifier,
    STATE(283), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(39), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4511] = 6,
    ACTIONS(387), 1,
      sym__identifier,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(256), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4538] = 6,
    ACTIONS(387), 1,
      sym__identifier,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(233), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4565] = 1,
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
  [4582] = 6,
    ACTIONS(31), 1,
      sym__identifier,
    STATE(36), 1,
      sym_generic_type,
    STATE(269), 1,
      sym_identifier,
    STATE(281), 1,
      sym_scoped_type_identifier,
    STATE(262), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(39), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4609] = 6,
    ACTIONS(387), 1,
      sym__identifier,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(285), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4636] = 6,
    ACTIONS(31), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    STATE(35), 1,
      sym_scoped_type_identifier,
    STATE(36), 1,
      sym_generic_type,
    STATE(26), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(39), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4663] = 6,
    ACTIONS(387), 1,
      sym__identifier,
    STATE(136), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_identifier,
    STATE(146), 1,
      sym_generic_type,
    STATE(242), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(393), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4690] = 1,
    ACTIONS(419), 14,
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
  [4707] = 6,
    ACTIONS(31), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    STATE(35), 1,
      sym_scoped_type_identifier,
    STATE(36), 1,
      sym_generic_type,
    STATE(30), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(39), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [4734] = 1,
    ACTIONS(421), 13,
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
  [4750] = 11,
    ACTIONS(423), 1,
      anon_sym_extends,
    ACTIONS(425), 1,
      anon_sym_implements,
    ACTIONS(427), 1,
      anon_sym_LT,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(431), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(141), 1,
      sym_type_parameters,
    STATE(163), 1,
      sym_superclass,
    STATE(228), 1,
      sym_super_interfaces,
    STATE(229), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4786] = 11,
    ACTIONS(423), 1,
      anon_sym_extends,
    ACTIONS(425), 1,
      anon_sym_implements,
    ACTIONS(427), 1,
      anon_sym_LT,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(435), 1,
      anon_sym_Constantpool_COLON,
    STATE(140), 1,
      sym_type_parameters,
    STATE(162), 1,
      sym_superclass,
    STATE(191), 1,
      sym_super_interfaces,
    STATE(192), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4822] = 4,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(439), 1,
      anon_sym_DOT,
    STATE(149), 1,
      sym_type_arguments,
    ACTIONS(170), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4843] = 4,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(441), 1,
      anon_sym_DOT,
    STATE(150), 1,
      sym_type_arguments,
    ACTIONS(153), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [4864] = 11,
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
    STATE(169), 1,
      sym_footer_runtime_visible_annotations,
    STATE(225), 1,
      sym_runtime_visible_type_annotations,
    STATE(293), 1,
      sym_nested_members,
    STATE(369), 1,
      sym_nest_host,
    STATE(582), 1,
      sym_inner_classes,
  [4898] = 11,
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
    STATE(165), 1,
      sym_footer_runtime_visible_annotations,
    STATE(231), 1,
      sym_runtime_visible_type_annotations,
    STATE(299), 1,
      sym_nested_members,
    STATE(360), 1,
      sym_nest_host,
    STATE(598), 1,
      sym_inner_classes,
  [4932] = 9,
    ACTIONS(423), 1,
      anon_sym_extends,
    ACTIONS(425), 1,
      anon_sym_implements,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(457), 1,
      anon_sym_Constantpool_COLON,
    STATE(157), 1,
      sym_superclass,
    STATE(221), 1,
      sym_super_interfaces,
    STATE(183), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4962] = 9,
    ACTIONS(423), 1,
      anon_sym_extends,
    ACTIONS(425), 1,
      anon_sym_implements,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(459), 1,
      anon_sym_Constantpool_COLON,
    STATE(159), 1,
      sym_superclass,
    STATE(215), 1,
      sym_super_interfaces,
    STATE(216), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4992] = 2,
    ACTIONS(177), 1,
      anon_sym_DOT,
    ACTIONS(179), 10,
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
  [5008] = 2,
    ACTIONS(229), 1,
      anon_sym_DOT,
    ACTIONS(231), 10,
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
  [5024] = 2,
    ACTIONS(187), 1,
      anon_sym_DOT,
    ACTIONS(189), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5039] = 2,
    ACTIONS(217), 1,
      anon_sym_DOT,
    ACTIONS(219), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5054] = 2,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(170), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5069] = 2,
    ACTIONS(83), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(85), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_flags_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ2,
      sym_comment,
      anon_sym_Constantpool_COLON,
  [5084] = 3,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    STATE(152), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(223), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [5101] = 2,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(215), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5116] = 2,
    ACTIONS(202), 1,
      anon_sym_DOT,
    ACTIONS(204), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5131] = 2,
    ACTIONS(225), 1,
      anon_sym_DOT,
    ACTIONS(227), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5146] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACK,
    STATE(152), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(208), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [5163] = 5,
    ACTIONS(264), 1,
      sym__number,
    STATE(650), 1,
      sym__runtime_index,
    STATE(657), 1,
      sym_number,
    STATE(153), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5183] = 5,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    STATE(317), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(493), 1,
      sym_runtime_annotation_element_value,
    STATE(494), 2,
      sym_runtime_annotation_element_value_array,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(468), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [5203] = 2,
    ACTIONS(470), 1,
      anon_sym_DOT,
    ACTIONS(9), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [5217] = 1,
    ACTIONS(235), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5229] = 7,
    ACTIONS(425), 1,
      anon_sym_implements,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(472), 1,
      anon_sym_Constantpool_COLON,
    STATE(208), 1,
      sym_super_interfaces,
    STATE(209), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5253] = 4,
    ACTIONS(185), 1,
      sym__number,
    STATE(647), 1,
      sym_number,
    STATE(164), 2,
      sym_footer_runtime_visible_annotation,
      aux_sym_footer_runtime_visible_annotations_repeat1,
    ACTIONS(474), 5,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5271] = 7,
    ACTIONS(425), 1,
      anon_sym_implements,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(476), 1,
      anon_sym_Constantpool_COLON,
    STATE(200), 1,
      sym_super_interfaces,
    STATE(199), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5295] = 5,
    ACTIONS(185), 1,
      sym__number,
    STATE(650), 1,
      sym__runtime_index,
    STATE(657), 1,
      sym_number,
    STATE(153), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
    ACTIONS(255), 4,
      ts_builtin_sym_end,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5315] = 1,
    ACTIONS(470), 9,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_COLON2,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [5327] = 7,
    ACTIONS(425), 1,
      anon_sym_implements,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(478), 1,
      anon_sym_Constantpool_COLON,
    STATE(218), 1,
      sym_super_interfaces,
    STATE(182), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5351] = 7,
    ACTIONS(425), 1,
      anon_sym_implements,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(480), 1,
      anon_sym_Constantpool_COLON,
    STATE(211), 1,
      sym_super_interfaces,
    STATE(212), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5375] = 4,
    ACTIONS(484), 1,
      sym__number,
    STATE(647), 1,
      sym_number,
    STATE(164), 2,
      sym_footer_runtime_visible_annotation,
      aux_sym_footer_runtime_visible_annotations_repeat1,
    ACTIONS(482), 5,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5393] = 9,
    ACTIONS(447), 1,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    STATE(194), 1,
      sym_runtime_visible_type_annotations,
    STATE(284), 1,
      sym_nested_members,
    STATE(415), 1,
      sym_nest_host,
    STATE(597), 1,
      sym_inner_classes,
  [5421] = 5,
    ACTIONS(489), 1,
      anon_sym_LT,
    ACTIONS(491), 1,
      anon_sym_DOT,
    STATE(226), 1,
      sym_type_arguments,
    ACTIONS(168), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(170), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5441] = 1,
    ACTIONS(208), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5453] = 2,
    ACTIONS(7), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(9), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      anon_sym_LPAREN,
      anon_sym_EQ2,
      sym_comment,
      anon_sym_Constantpool_COLON,
  [5467] = 9,
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
    STATE(231), 1,
      sym_runtime_visible_type_annotations,
    STATE(299), 1,
      sym_nested_members,
    STATE(360), 1,
      sym_nest_host,
    STATE(598), 1,
      sym_inner_classes,
  [5495] = 2,
    ACTIONS(160), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(162), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5509] = 5,
    ACTIONS(489), 1,
      anon_sym_LT,
    ACTIONS(493), 1,
      anon_sym_DOT,
    STATE(185), 1,
      sym_type_arguments,
    ACTIONS(151), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(153), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5529] = 1,
    ACTIONS(251), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [5541] = 1,
    ACTIONS(495), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [5552] = 1,
    ACTIONS(497), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [5563] = 2,
    ACTIONS(177), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(179), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5576] = 8,
    ACTIONS(499), 1,
      anon_sym_extends,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    ACTIONS(505), 1,
      anon_sym_LT,
    STATE(237), 1,
      sym_type_parameters,
    STATE(343), 1,
      sym_superclass,
    STATE(475), 1,
      sym_super_interfaces,
    STATE(587), 1,
      sym_class_declaration_plain_body,
  [5601] = 2,
    ACTIONS(229), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(231), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5614] = 8,
    ACTIONS(499), 1,
      anon_sym_extends,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    ACTIONS(505), 1,
      anon_sym_LT,
    STATE(250), 1,
      sym_type_parameters,
    STATE(333), 1,
      sym_superclass,
    STATE(504), 1,
      sym_super_interfaces,
    STATE(554), 1,
      sym_class_declaration_plain_body,
  [5639] = 8,
    ACTIONS(499), 1,
      anon_sym_extends,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    ACTIONS(505), 1,
      anon_sym_LT,
    STATE(255), 1,
      sym_type_parameters,
    STATE(342), 1,
      sym_superclass,
    STATE(500), 1,
      sym_super_interfaces,
    STATE(596), 1,
      sym_class_declaration_plain_body,
  [5664] = 7,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    ACTIONS(513), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(197), 1,
      aux_sym_dimensions_repeat1,
    STATE(235), 1,
      sym_dimensions,
    STATE(273), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(509), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5687] = 8,
    ACTIONS(499), 1,
      anon_sym_extends,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    ACTIONS(505), 1,
      anon_sym_LT,
    STATE(243), 1,
      sym_type_parameters,
    STATE(344), 1,
      sym_superclass,
    STATE(477), 1,
      sym_super_interfaces,
    STATE(584), 1,
      sym_class_declaration_plain_body,
  [5712] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(515), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5730] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(517), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5748] = 4,
    ACTIONS(521), 1,
      anon_sym_POUND,
    STATE(578), 1,
      sym__hash_number,
    STATE(193), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(519), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5764] = 2,
    ACTIONS(202), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(204), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5776] = 3,
    ACTIONS(491), 1,
      anon_sym_DOT,
    ACTIONS(168), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(170), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [5790] = 1,
    ACTIONS(523), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [5800] = 7,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_Signature_COLON,
    ACTIONS(529), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(138), 1,
      sym_source_file_def,
    STATE(286), 1,
      sym_block,
    STATE(417), 1,
      sym_signature,
    STATE(575), 1,
      sym_footer,
  [5822] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(531), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5840] = 1,
    ACTIONS(533), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [5850] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(535), 1,
      anon_sym_Constantpool_COLON,
    STATE(219), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5868] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(537), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5886] = 4,
    ACTIONS(521), 1,
      anon_sym_POUND,
    STATE(578), 1,
      sym__hash_number,
    STATE(232), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(539), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5902] = 7,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
    STATE(301), 1,
      sym_nested_members,
    STATE(347), 1,
      sym_nest_host,
    STATE(559), 1,
      sym_inner_classes,
  [5924] = 4,
    ACTIONS(543), 1,
      anon_sym_LBRACK,
    STATE(195), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(206), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(208), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5940] = 2,
    ACTIONS(217), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(219), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [5952] = 4,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    STATE(195), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(221), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(223), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5968] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(546), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [5986] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(548), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6004] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(550), 1,
      anon_sym_Constantpool_COLON,
    STATE(189), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6022] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(552), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6040] = 6,
    ACTIONS(158), 1,
      anon_sym_DOT,
    ACTIONS(554), 1,
      anon_sym_LT,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_type_arguments,
    STATE(581), 1,
      sym_args,
    ACTIONS(153), 2,
      anon_sym_LBRACK,
      sym__identifier,
  [6060] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(558), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6078] = 6,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(562), 1,
      anon_sym_AMP,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    STATE(338), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6098] = 7,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    STATE(353), 1,
      aux_sym_args_repeat1,
  [6120] = 6,
    ACTIONS(158), 1,
      anon_sym_DOT,
    ACTIONS(554), 1,
      anon_sym_LT,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_type_arguments,
    STATE(546), 1,
      sym_args,
    ACTIONS(153), 2,
      anon_sym_LBRACK,
      sym__identifier,
  [6140] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(570), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6158] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(572), 1,
      anon_sym_Constantpool_COLON,
    STATE(203), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6176] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(574), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6194] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(576), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6212] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(578), 1,
      anon_sym_Constantpool_COLON,
    STATE(201), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6230] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(580), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6248] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(582), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6266] = 5,
    ACTIONS(147), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    STATE(197), 1,
      aux_sym_dimensions_repeat1,
    STATE(235), 1,
      sym_dimensions,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6284] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(584), 1,
      anon_sym_Constantpool_COLON,
    STATE(198), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6302] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(586), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6320] = 5,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    STATE(197), 1,
      aux_sym_dimensions_repeat1,
    STATE(235), 1,
      sym_dimensions,
    ACTIONS(588), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(590), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6338] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(592), 1,
      anon_sym_Constantpool_COLON,
    STATE(207), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6356] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(594), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6374] = 3,
    ACTIONS(387), 1,
      sym__identifier,
    ACTIONS(596), 2,
      anon_sym_open,
      anon_sym_module,
    STATE(399), 4,
      sym_identifier,
      sym_scoped_identifier,
      sym__name,
      sym__reserved_identifier,
  [6388] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(598), 1,
      anon_sym_Constantpool_COLON,
    STATE(210), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6406] = 1,
    ACTIONS(600), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [6416] = 2,
    ACTIONS(187), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(189), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [6428] = 2,
    ACTIONS(225), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(227), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [6440] = 7,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    STATE(292), 1,
      sym_nested_members,
    STATE(397), 1,
      sym_nest_host,
    STATE(588), 1,
      sym_inner_classes,
  [6462] = 2,
    ACTIONS(213), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(215), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [6474] = 5,
    ACTIONS(604), 1,
      anon_sym_flags_COLON,
    ACTIONS(607), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(609), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6492] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(612), 1,
      anon_sym_Constantpool_COLON,
    STATE(213), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6510] = 5,
    ACTIONS(429), 1,
      anon_sym_flags_COLON,
    ACTIONS(433), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(614), 1,
      anon_sym_Constantpool_COLON,
    STATE(227), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(357), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [6528] = 1,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      sym__number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
  [6538] = 7,
    ACTIONS(449), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    STATE(282), 1,
      sym_nested_members,
    STATE(362), 1,
      sym_nest_host,
    STATE(574), 1,
      sym_inner_classes,
  [6560] = 4,
    ACTIONS(620), 1,
      anon_sym_POUND,
    STATE(578), 1,
      sym__hash_number,
    STATE(232), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(618), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6576] = 4,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    ACTIONS(623), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [6591] = 2,
    ACTIONS(249), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(251), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6602] = 2,
    ACTIONS(233), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(235), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6613] = 3,
    STATE(317), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(375), 1,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(468), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [6626] = 6,
    ACTIONS(499), 1,
      anon_sym_extends,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(337), 1,
      sym_superclass,
    STATE(496), 1,
      sym_super_interfaces,
    STATE(561), 1,
      sym_class_declaration_plain_body,
  [6645] = 1,
    ACTIONS(625), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6654] = 5,
    ACTIONS(185), 1,
      sym__number,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_code_info_repeat1,
    STATE(617), 1,
      sym_number,
    STATE(274), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [6671] = 3,
    STATE(317), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(518), 1,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(468), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [6684] = 3,
    ACTIONS(631), 1,
      sym__identifier,
    STATE(245), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(629), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6697] = 6,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    STATE(412), 1,
      aux_sym_interface_type_list_repeat1,
  [6716] = 6,
    ACTIONS(499), 1,
      anon_sym_extends,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(339), 1,
      sym_superclass,
    STATE(508), 1,
      sym_super_interfaces,
    STATE(548), 1,
      sym_class_declaration_plain_body,
  [6735] = 1,
    ACTIONS(635), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      sym__number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6744] = 3,
    ACTIONS(639), 1,
      sym__identifier,
    STATE(245), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(637), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6757] = 6,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_GT,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    STATE(381), 1,
      aux_sym_type_arguments_repeat1,
  [6776] = 2,
    ACTIONS(206), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(208), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [6787] = 6,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    STATE(376), 1,
      aux_sym_interface_type_list_repeat1,
  [6806] = 5,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      sym_comment,
    ACTIONS(652), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(263), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(648), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6823] = 6,
    ACTIONS(499), 1,
      anon_sym_extends,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(312), 1,
      sym_superclass,
    STATE(461), 1,
      sym_super_interfaces,
    STATE(609), 1,
      sym_class_declaration_plain_body,
  [6842] = 5,
    ACTIONS(654), 1,
      anon_sym_extends,
    ACTIONS(658), 1,
      sym_super,
    STATE(120), 1,
      sym_extends,
    STATE(435), 1,
      sym__wildcard_bounds,
    ACTIONS(656), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6859] = 6,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_GT,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    STATE(363), 1,
      aux_sym_type_arguments_repeat1,
  [6878] = 1,
    ACTIONS(662), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      sym__number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6887] = 6,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_GT,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    STATE(407), 1,
      aux_sym_type_arguments_repeat1,
  [6906] = 6,
    ACTIONS(499), 1,
      anon_sym_extends,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(316), 1,
      sym_superclass,
    STATE(481), 1,
      sym_super_interfaces,
    STATE(585), 1,
      sym_class_declaration_plain_body,
  [6925] = 4,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [6940] = 5,
    ACTIONS(185), 1,
      sym__number,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      aux_sym_code_info_repeat1,
    STATE(617), 1,
      sym_number,
    STATE(297), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [6957] = 1,
    ACTIONS(666), 6,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleTypeAnnotations_COLON,
      sym__number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [6966] = 5,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    ACTIONS(668), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6983] = 4,
    ACTIONS(94), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(98), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [6997] = 1,
    ACTIONS(324), 5,
      ts_builtin_sym_end,
      sym__number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7005] = 5,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(50), 1,
      sym_dimensions,
    STATE(515), 1,
      sym_identifier,
  [7021] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(271), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(674), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7035] = 4,
    ACTIONS(185), 1,
      sym__number,
    STATE(654), 1,
      sym__runtime_index,
    STATE(661), 1,
      sym_number,
    STATE(38), 2,
      sym_runtime_visible_annotation,
      aux_sym_runtime_visible_annotations_repeat1,
  [7049] = 2,
    ACTIONS(680), 1,
      sym_comment,
    ACTIONS(678), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7059] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(270), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(674), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7073] = 5,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(50), 1,
      sym_dimensions,
    STATE(511), 1,
      sym_identifier,
  [7089] = 5,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(50), 1,
      sym_dimensions,
    STATE(393), 1,
      sym_identifier,
  [7105] = 4,
    ACTIONS(158), 1,
      anon_sym_DOT,
    ACTIONS(554), 1,
      anon_sym_LT,
    STATE(42), 1,
      sym_type_arguments,
    ACTIONS(153), 2,
      anon_sym_LBRACK,
      sym__identifier,
  [7119] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(684), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(271), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(682), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7133] = 4,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(271), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(689), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7147] = 4,
    ACTIONS(107), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(109), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7161] = 4,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(289), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(693), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7175] = 4,
    ACTIONS(185), 1,
      sym__number,
    ACTIONS(697), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(617), 1,
      sym_number,
    STATE(298), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7189] = 5,
    ACTIONS(699), 1,
      anon_sym_POUND,
    ACTIONS(701), 1,
      sym__number,
    ACTIONS(703), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym__endl,
    STATE(526), 1,
      sym_number,
  [7205] = 4,
    ACTIONS(654), 1,
      anon_sym_extends,
    STATE(122), 1,
      sym_extends,
    STATE(498), 1,
      sym_type_bound,
    ACTIONS(707), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7219] = 2,
    ACTIONS(711), 1,
      sym_comment,
    ACTIONS(709), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7229] = 2,
    ACTIONS(715), 1,
      sym_comment,
    ACTIONS(713), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7239] = 2,
    ACTIONS(717), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(533), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [7249] = 2,
    ACTIONS(721), 1,
      sym_comment,
    ACTIONS(719), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7259] = 4,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(554), 1,
      anon_sym_LT,
    STATE(44), 1,
      sym_type_arguments,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      sym__identifier,
  [7273] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(723), 1,
      ts_builtin_sym_end,
    STATE(359), 1,
      sym_nest_host,
    STATE(569), 1,
      sym_inner_classes,
  [7289] = 5,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(46), 1,
      aux_sym_dimensions_repeat1,
    STATE(50), 1,
      sym_dimensions,
    STATE(438), 1,
      sym_identifier,
  [7305] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    STATE(361), 1,
      sym_nest_host,
    STATE(564), 1,
      sym_inner_classes,
  [7321] = 4,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    ACTIONS(590), 2,
      anon_sym_implements,
      anon_sym_LBRACE,
  [7335] = 5,
    ACTIONS(527), 1,
      anon_sym_Signature_COLON,
    ACTIONS(529), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(138), 1,
      sym_source_file_def,
    STATE(417), 1,
      sym_signature,
    STATE(535), 1,
      sym_footer,
  [7351] = 1,
    ACTIONS(312), 5,
      ts_builtin_sym_end,
      sym__number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7359] = 1,
    ACTIONS(320), 5,
      ts_builtin_sym_end,
      sym__number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7367] = 4,
    ACTIONS(147), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(149), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7381] = 1,
    ACTIONS(316), 5,
      ts_builtin_sym_end,
      sym__number,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7389] = 2,
    ACTIONS(730), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(600), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [7399] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(732), 1,
      ts_builtin_sym_end,
    STATE(371), 1,
      sym_nest_host,
    STATE(640), 1,
      sym_inner_classes,
  [7415] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    STATE(360), 1,
      sym_nest_host,
    STATE(598), 1,
      sym_inner_classes,
  [7431] = 4,
    ACTIONS(185), 1,
      sym__number,
    STATE(650), 1,
      sym__runtime_index,
    STATE(657), 1,
      sym_number,
    STATE(160), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
  [7445] = 4,
    ACTIONS(100), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(105), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7459] = 3,
    ACTIONS(739), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(737), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7471] = 4,
    ACTIONS(185), 1,
      sym__number,
    ACTIONS(743), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(617), 1,
      sym_number,
    STATE(298), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7485] = 4,
    ACTIONS(745), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(747), 1,
      sym__number,
    STATE(617), 1,
      sym_number,
    STATE(298), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [7499] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    STATE(415), 1,
      sym_nest_host,
    STATE(597), 1,
      sym_inner_classes,
  [7515] = 5,
    ACTIONS(750), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    ACTIONS(752), 1,
      sym__path_segment,
    ACTIONS(754), 1,
      anon_sym_SLASH,
    STATE(533), 1,
      sym__rest_of_the_line,
    STATE(628), 1,
      sym_file_path,
  [7531] = 5,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(453), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    STATE(401), 1,
      sym_nest_host,
    STATE(625), 1,
      sym_inner_classes,
  [7547] = 4,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    ACTIONS(758), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7561] = 4,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      aux_sym_dimensions_repeat1,
    STATE(156), 1,
      sym_dimensions,
    ACTIONS(760), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7575] = 4,
    ACTIONS(185), 1,
      sym__number,
    STATE(657), 1,
      sym_number,
    STATE(660), 1,
      sym__runtime_index,
    STATE(59), 2,
      sym_runtime_visible_type_annotation,
      aux_sym_runtime_visible_type_annotations_repeat1,
  [7589] = 4,
    ACTIONS(672), 1,
      sym__identifier,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      aux_sym_runtime_annotation_args_repeat1,
    STATE(543), 1,
      sym_identifier,
  [7602] = 1,
    ACTIONS(764), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7609] = 1,
    ACTIONS(766), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7616] = 1,
    ACTIONS(768), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7623] = 1,
    ACTIONS(770), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7630] = 3,
    ACTIONS(185), 1,
      sym__number,
    ACTIONS(521), 1,
      anon_sym_POUND,
    STATE(296), 2,
      sym_number,
      sym__hash_number,
  [7641] = 4,
    ACTIONS(772), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym__hash_number,
    STATE(280), 1,
      sym_ref_const_pool_item,
    STATE(591), 1,
      sym_hash_number,
  [7654] = 4,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(436), 1,
      sym_super_interfaces,
    STATE(620), 1,
      sym_class_declaration_plain_body,
  [7667] = 4,
    ACTIONS(521), 1,
      anon_sym_POUND,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      sym_footer_runtime_visible_annotation_element_arg,
    STATE(632), 1,
      sym__hash_number,
  [7680] = 4,
    ACTIONS(185), 1,
      sym__number,
    STATE(88), 1,
      sym_runtime_visible_parameter_annotation_param,
    STATE(555), 1,
      sym__runtime_index,
    STATE(661), 1,
      sym_number,
  [7693] = 3,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(149), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [7704] = 4,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(426), 1,
      sym_super_interfaces,
    STATE(645), 1,
      sym_class_declaration_plain_body,
  [7717] = 4,
    ACTIONS(779), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym__hash_number,
    STATE(373), 1,
      sym_ref_const_pool_item,
    STATE(591), 1,
      sym_hash_number,
  [7730] = 2,
    ACTIONS(783), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(781), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7739] = 4,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_EQ,
    ACTIONS(789), 1,
      sym__endl,
    STATE(385), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7752] = 3,
    ACTIONS(791), 1,
      anon_sym_AMP,
    STATE(320), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(623), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7763] = 4,
    ACTIONS(672), 1,
      sym__identifier,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_runtime_annotation_args_repeat1,
    STATE(543), 1,
      sym_identifier,
  [7776] = 3,
    ACTIONS(185), 1,
      sym__number,
    STATE(647), 1,
      sym_number,
    STATE(158), 2,
      sym_footer_runtime_visible_annotation,
      aux_sym_footer_runtime_visible_annotations_repeat1,
  [7787] = 4,
    ACTIONS(796), 1,
      sym__identifier,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_runtime_annotation_args_repeat1,
    STATE(543), 1,
      sym_identifier,
  [7800] = 4,
    ACTIONS(750), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    ACTIONS(801), 1,
      anon_sym_SLASH,
    STATE(334), 1,
      aux_sym_file_path_repeat1,
    STATE(611), 1,
      sym__rest_of_the_line,
  [7813] = 3,
    ACTIONS(121), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(803), 1,
      sym_flag_value,
    ACTIONS(123), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7824] = 1,
    ACTIONS(805), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7831] = 4,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_EQ,
    ACTIONS(809), 1,
      sym__endl,
    STATE(408), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [7844] = 3,
    ACTIONS(185), 1,
      sym__number,
    ACTIONS(521), 1,
      anon_sym_POUND,
    STATE(249), 2,
      sym_number,
      sym__hash_number,
  [7855] = 1,
    ACTIONS(811), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7862] = 1,
    ACTIONS(813), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7869] = 2,
    ACTIONS(160), 1,
      sym__identifier,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [7878] = 2,
    ACTIONS(817), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(815), 3,
      anon_sym_LBRACE,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7887] = 4,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(474), 1,
      sym_super_interfaces,
    STATE(594), 1,
      sym_class_declaration_plain_body,
  [7900] = 4,
    ACTIONS(750), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    ACTIONS(801), 1,
      anon_sym_SLASH,
    STATE(355), 1,
      aux_sym_file_path_repeat1,
    STATE(646), 1,
      sym__rest_of_the_line,
  [7913] = 4,
    ACTIONS(750), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    ACTIONS(801), 1,
      anon_sym_SLASH,
    STATE(340), 1,
      aux_sym_file_path_repeat1,
    STATE(646), 1,
      sym__rest_of_the_line,
  [7926] = 1,
    ACTIONS(819), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [7933] = 4,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(491), 1,
      sym_super_interfaces,
    STATE(568), 1,
      sym_class_declaration_plain_body,
  [7946] = 3,
    ACTIONS(562), 1,
      anon_sym_AMP,
    STATE(320), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(821), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7957] = 4,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(458), 1,
      sym_super_interfaces,
    STATE(614), 1,
      sym_class_declaration_plain_body,
  [7970] = 4,
    ACTIONS(750), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    ACTIONS(801), 1,
      anon_sym_SLASH,
    STATE(355), 1,
      aux_sym_file_path_repeat1,
    STATE(573), 1,
      sym__rest_of_the_line,
  [7983] = 2,
    ACTIONS(100), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(105), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [7992] = 4,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(485), 1,
      sym_super_interfaces,
    STATE(579), 1,
      sym_class_declaration_plain_body,
  [8005] = 4,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(487), 1,
      sym_super_interfaces,
    STATE(567), 1,
      sym_class_declaration_plain_body,
  [8018] = 4,
    ACTIONS(501), 1,
      anon_sym_implements,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(506), 1,
      sym_super_interfaces,
    STATE(552), 1,
      sym_class_declaration_plain_body,
  [8031] = 2,
    ACTIONS(131), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(133), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [8040] = 1,
    ACTIONS(823), 4,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_POUND,
      anon_sym_SourceFile_COLON_DQUOTE,
  [8047] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    STATE(625), 1,
      sym_inner_classes,
  [8057] = 1,
    ACTIONS(717), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [8063] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_GT,
    STATE(367), 1,
      aux_sym_type_parameters_repeat1,
  [8073] = 3,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    ACTIONS(831), 1,
      anon_sym_throws,
    STATE(542), 1,
      sym_method_throws,
  [8083] = 3,
    ACTIONS(367), 1,
      anon_sym_class,
    ACTIONS(833), 1,
      sym_interface_keyword,
    STATE(464), 1,
      sym_class_keyword,
  [8093] = 3,
    ACTIONS(367), 1,
      anon_sym_class,
    ACTIONS(835), 1,
      sym_interface_keyword,
    STATE(465), 1,
      sym_class_keyword,
  [8103] = 3,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_args_repeat1,
  [8113] = 2,
    ACTIONS(9), 1,
      sym__endl,
    ACTIONS(7), 2,
      anon_sym_COMMA,
      sym_comment,
  [8121] = 3,
    ACTIONS(839), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    ACTIONS(841), 1,
      anon_sym_SLASH,
    STATE(355), 1,
      aux_sym_file_path_repeat1,
  [8131] = 3,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
    STATE(358), 1,
      sym_type_parameter,
  [8141] = 2,
    ACTIONS(846), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(844), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [8149] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(848), 1,
      anon_sym_GT,
    STATE(384), 1,
      aux_sym_type_parameters_repeat1,
  [8159] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    STATE(595), 1,
      sym_inner_classes,
  [8169] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    STATE(597), 1,
      sym_inner_classes,
  [8179] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(852), 1,
      ts_builtin_sym_end,
    STATE(600), 1,
      sym_inner_classes,
  [8189] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(723), 1,
      ts_builtin_sym_end,
    STATE(569), 1,
      sym_inner_classes,
  [8199] = 3,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(854), 1,
      anon_sym_GT,
    STATE(370), 1,
      aux_sym_type_arguments_repeat1,
  [8209] = 3,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(364), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [8219] = 3,
    ACTIONS(750), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    ACTIONS(861), 1,
      sym__path_segment,
    STATE(611), 1,
      sym__rest_of_the_line,
  [8229] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
    STATE(364), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [8239] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_GT,
    STATE(374), 1,
      aux_sym_type_parameters_repeat1,
  [8249] = 2,
    ACTIONS(869), 1,
      sym__identifier,
    STATE(241), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [8257] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    STATE(598), 1,
      sym_inner_classes,
  [8267] = 3,
    ACTIONS(760), 1,
      anon_sym_GT,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_type_arguments_repeat1,
  [8277] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(874), 1,
      ts_builtin_sym_end,
    STATE(544), 1,
      sym_inner_classes,
  [8287] = 3,
    ACTIONS(831), 1,
      anon_sym_throws,
    ACTIONS(876), 1,
      anon_sym_SEMI,
    STATE(601), 1,
      sym_method_throws,
  [8297] = 1,
    ACTIONS(878), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8303] = 3,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_GT,
    STATE(374), 1,
      aux_sym_type_parameters_repeat1,
  [8313] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [8323] = 3,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_LBRACE,
    STATE(315), 1,
      aux_sym_interface_type_list_repeat1,
  [8333] = 3,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
    STATE(507), 1,
      sym_type_parameter,
  [8343] = 3,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_args_repeat1,
  [8353] = 1,
    ACTIONS(730), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [8359] = 3,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_GT,
    STATE(381), 1,
      aux_sym_type_arguments_repeat1,
  [8369] = 3,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_GT,
    STATE(370), 1,
      aux_sym_type_arguments_repeat1,
  [8379] = 3,
    ACTIONS(831), 1,
      anon_sym_throws,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    STATE(534), 1,
      sym_method_throws,
  [8389] = 3,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_args_repeat1,
  [8399] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_GT,
    STATE(374), 1,
      aux_sym_type_parameters_repeat1,
  [8409] = 3,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      sym__endl,
    STATE(406), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8419] = 2,
    STATE(63), 1,
      sym_boolean_literal,
    ACTIONS(898), 2,
      anon_sym_true,
      anon_sym_false,
  [8427] = 3,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_footer_runtime_visible_annotation_element_args_repeat1,
  [8437] = 2,
    ACTIONS(905), 1,
      anon_sym_parameter,
    STATE(73), 2,
      sym_runtime_visible_parameter_annotation,
      aux_sym_runtime_visible_paramter_annotations_repeat1,
  [8445] = 3,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(907), 1,
      sym__endl,
    STATE(395), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8455] = 3,
    ACTIONS(909), 1,
      aux_sym_code_info_stat_token1,
    STATE(239), 1,
      sym_code_info_stat,
    STATE(428), 1,
      sym_code_info,
  [8465] = 3,
    ACTIONS(831), 1,
      anon_sym_throws,
    ACTIONS(911), 1,
      anon_sym_SEMI,
    STATE(623), 1,
      sym_method_throws,
  [8475] = 3,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    ACTIONS(916), 1,
      sym__number,
    STATE(392), 1,
      aux_sym_code_info_repeat1,
  [8485] = 3,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_SEMI,
    STATE(350), 1,
      sym_args,
  [8495] = 3,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_GT,
    STATE(363), 1,
      aux_sym_type_arguments_repeat1,
  [8505] = 3,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      sym__endl,
    STATE(406), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8515] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_GT,
    STATE(403), 1,
      aux_sym_type_parameters_repeat1,
  [8525] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(732), 1,
      ts_builtin_sym_end,
    STATE(640), 1,
      sym_inner_classes,
  [8535] = 3,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(924), 1,
      sym__endl,
    STATE(406), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8545] = 3,
    ACTIONS(926), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      anon_sym_DOT,
    STATE(244), 1,
      sym_runtime_annotation_args,
  [8555] = 3,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_footer_runtime_visible_annotation_element_args_repeat1,
  [8565] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(934), 1,
      ts_builtin_sym_end,
    STATE(637), 1,
      sym_inner_classes,
  [8575] = 3,
    ACTIONS(521), 1,
      anon_sym_POUND,
    STATE(488), 1,
      sym_footer_runtime_visible_annotation_element_arg,
    STATE(632), 1,
      sym__hash_number,
  [8585] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_GT,
    STATE(374), 1,
      aux_sym_type_parameters_repeat1,
  [8595] = 3,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_GT,
    STATE(407), 1,
      aux_sym_type_arguments_repeat1,
  [8605] = 2,
    ACTIONS(938), 1,
      anon_sym_line,
    STATE(21), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [8613] = 3,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(943), 1,
      sym__endl,
    STATE(406), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8623] = 3,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_GT,
    STATE(370), 1,
      aux_sym_type_arguments_repeat1,
  [8633] = 3,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      sym__endl,
    STATE(406), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8643] = 3,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      sym__endl,
    STATE(398), 1,
      aux_sym_runtime_visible_type_annotation_repeat1,
  [8653] = 3,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      anon_sym_EQ,
    ACTIONS(955), 1,
      sym__endl,
  [8663] = 3,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      aux_sym_footer_runtime_visible_annotation_element_args_repeat1,
  [8673] = 3,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_interface_type_list_repeat1,
  [8683] = 3,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
    STATE(349), 1,
      sym_type_parameter,
  [8693] = 3,
    ACTIONS(959), 1,
      anon_sym_descriptor_COLON,
    STATE(97), 1,
      sym__method_declaration_verbose,
    STATE(530), 1,
      sym_descriptor_def,
  [8703] = 3,
    ACTIONS(451), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    STATE(564), 1,
      sym_inner_classes,
  [8713] = 3,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
    STATE(396), 1,
      sym_type_parameter,
  [8723] = 2,
    ACTIONS(529), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(139), 1,
      sym_source_file_def,
  [8730] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(131), 1,
      sym_header_info_compile,
  [8737] = 2,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(430), 1,
      sym_identifier,
  [8744] = 2,
    ACTIONS(961), 1,
      sym__number,
    STATE(389), 1,
      sym_number,
  [8751] = 2,
    ACTIONS(521), 1,
      anon_sym_POUND,
    STATE(644), 1,
      sym__hash_number,
  [8758] = 2,
    ACTIONS(963), 1,
      anon_sym_POUND,
    STATE(642), 1,
      sym__hash_number,
  [8765] = 2,
    ACTIONS(521), 1,
      anon_sym_POUND,
    STATE(502), 1,
      sym__hash_number,
  [8772] = 2,
    ACTIONS(963), 1,
      anon_sym_POUND,
    STATE(550), 1,
      sym__hash_number,
  [8779] = 2,
    ACTIONS(185), 1,
      sym__number,
    STATE(624), 1,
      sym_number,
  [8786] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(604), 1,
      sym_class_declaration_plain_body,
  [8793] = 2,
    ACTIONS(965), 1,
      sym__number,
    STATE(450), 1,
      sym_number,
  [8800] = 2,
    ACTIONS(967), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(41), 1,
      sym_line_number_table_def,
  [8807] = 2,
    ACTIONS(961), 1,
      sym__number,
    STATE(560), 1,
      sym_number,
  [8814] = 1,
    ACTIONS(969), 2,
      ts_builtin_sym_end,
      anon_sym_InnerClasses_COLON,
  [8819] = 1,
    ACTIONS(971), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [8824] = 2,
    ACTIONS(965), 1,
      sym__number,
    STATE(329), 1,
      sym_number,
  [8831] = 2,
    ACTIONS(973), 1,
      sym__number,
    STATE(147), 1,
      sym_number,
  [8838] = 2,
    ACTIONS(975), 1,
      anon_sym_Lastmodified,
    STATE(454), 1,
      sym_header_info_last_mod,
  [8845] = 1,
    ACTIONS(977), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8850] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(532), 1,
      sym_class_declaration_plain_body,
  [8857] = 2,
    ACTIONS(979), 1,
      anon_sym_POUND,
    STATE(586), 1,
      sym_hash_number,
  [8864] = 2,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(372), 1,
      sym_args,
  [8871] = 2,
    ACTIONS(965), 1,
      sym__number,
    STATE(13), 1,
      sym_number,
  [8878] = 2,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym__wrapped_hex_val,
  [8885] = 2,
    ACTIONS(983), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(290), 1,
      sym__rest_of_the_line,
  [8892] = 2,
    ACTIONS(983), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(287), 1,
      sym__rest_of_the_line,
  [8899] = 2,
    ACTIONS(521), 1,
      anon_sym_POUND,
    STATE(593), 1,
      sym__hash_number,
  [8906] = 2,
    ACTIONS(979), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym_hash_number,
  [8913] = 2,
    ACTIONS(985), 1,
      anon_sym_POUND,
    STATE(589), 1,
      sym__hash_number,
  [8920] = 2,
    ACTIONS(987), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(75), 1,
      sym__rest_of_the_line,
  [8927] = 2,
    ACTIONS(979), 1,
      anon_sym_POUND,
    STATE(277), 1,
      sym_hash_number,
  [8934] = 2,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(176), 1,
      sym_identifier,
  [8941] = 2,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(181), 1,
      sym_identifier,
  [8948] = 1,
    ACTIONS(989), 2,
      anon_sym_COMMA,
      sym__number,
  [8953] = 2,
    ACTIONS(961), 1,
      sym__number,
    STATE(409), 1,
      sym_number,
  [8960] = 2,
    ACTIONS(983), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(603), 1,
      sym__rest_of_the_line,
  [8967] = 2,
    ACTIONS(909), 1,
      aux_sym_code_info_stat_token1,
    STATE(478), 1,
      sym_code_info_stat,
  [8974] = 2,
    ACTIONS(991), 1,
      anon_sym_MD5checksum,
    STATE(418), 1,
      sym_header_info_md5,
  [8981] = 2,
    ACTIONS(993), 1,
      sym__identifier,
    STATE(135), 1,
      sym_identifier,
  [8988] = 1,
    ACTIONS(995), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [8993] = 2,
    ACTIONS(997), 1,
      anon_sym_Constantpool_COLON,
    STATE(188), 1,
      sym_constant_pool_def,
  [9000] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(592), 1,
      sym_class_declaration_plain_body,
  [9007] = 2,
    ACTIONS(993), 1,
      sym__identifier,
    STATE(177), 1,
      sym_identifier,
  [9014] = 1,
    ACTIONS(999), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9019] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(607), 1,
      sym_class_declaration_plain_body,
  [9026] = 2,
    ACTIONS(993), 1,
      sym__identifier,
    STATE(175), 1,
      sym_identifier,
  [9033] = 2,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(179), 1,
      sym_identifier,
  [9040] = 2,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(178), 1,
      sym_identifier,
  [9047] = 2,
    ACTIONS(993), 1,
      sym__identifier,
    STATE(134), 1,
      sym_identifier,
  [9054] = 1,
    ACTIONS(839), 2,
      aux_sym_constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [9059] = 2,
    ACTIONS(987), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(84), 1,
      sym__rest_of_the_line,
  [9066] = 2,
    ACTIONS(961), 1,
      sym__number,
    STATE(499), 1,
      sym_number,
  [9073] = 2,
    ACTIONS(983), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(288), 1,
      sym__rest_of_the_line,
  [9080] = 2,
    ACTIONS(973), 1,
      sym__number,
    STATE(13), 1,
      sym_number,
  [9087] = 2,
    ACTIONS(987), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(82), 1,
      sym__rest_of_the_line,
  [9094] = 2,
    ACTIONS(987), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(81), 1,
      sym__rest_of_the_line,
  [9101] = 2,
    ACTIONS(987), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(77), 1,
      sym__rest_of_the_line,
  [9108] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(636), 1,
      sym_class_declaration_plain_body,
  [9115] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(566), 1,
      sym_class_declaration_plain_body,
  [9122] = 2,
    ACTIONS(965), 1,
      sym__number,
    STATE(553), 1,
      sym_number,
  [9129] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(551), 1,
      sym_class_declaration_plain_body,
  [9136] = 1,
    ACTIONS(916), 2,
      anon_sym_COMMA,
      sym__number,
  [9141] = 2,
    ACTIONS(1001), 1,
      aux_sym_instruction_token1,
    STATE(509), 1,
      sym_instruction,
  [9148] = 2,
    ACTIONS(1003), 1,
      anon_sym_LPAREN,
    STATE(325), 1,
      sym__wrapped_hex_val,
  [9155] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(643), 1,
      sym_class_declaration_plain_body,
  [9162] = 2,
    ACTIONS(979), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_hash_number,
  [9169] = 2,
    ACTIONS(979), 1,
      anon_sym_POUND,
    STATE(265), 1,
      sym_hash_number,
  [9176] = 2,
    ACTIONS(185), 1,
      sym__number,
    STATE(147), 1,
      sym_number,
  [9183] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(653), 1,
      sym_class_declaration_plain_body,
  [9190] = 2,
    ACTIONS(521), 1,
      anon_sym_POUND,
    STATE(538), 1,
      sym__hash_number,
  [9197] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(562), 1,
      sym_class_declaration_plain_body,
  [9204] = 1,
    ACTIONS(903), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9209] = 2,
    ACTIONS(1005), 1,
      sym__identifier,
    STATE(48), 1,
      sym_identifier,
  [9216] = 2,
    ACTIONS(1007), 1,
      anon_sym_throws,
    STATE(69), 1,
      sym_method_throws,
  [9223] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(659), 1,
      sym_class_declaration_plain_body,
  [9230] = 2,
    ACTIONS(1005), 1,
      sym__identifier,
    STATE(37), 1,
      sym_identifier,
  [9237] = 1,
    ACTIONS(1009), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9242] = 1,
    ACTIONS(1011), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9247] = 1,
    ACTIONS(1013), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [9252] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(577), 1,
      sym_class_declaration_plain_body,
  [9259] = 2,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(519), 1,
      sym_identifier,
  [9266] = 1,
    ACTIONS(1015), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9271] = 2,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      sym__endl,
  [9278] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(580), 1,
      sym_class_declaration_plain_body,
  [9285] = 2,
    ACTIONS(983), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(261), 1,
      sym__rest_of_the_line,
  [9292] = 2,
    ACTIONS(1021), 1,
      anon_sym_LPAREN,
    STATE(606), 1,
      sym_footer_runtime_visible_annotation_element_args,
  [9299] = 2,
    ACTIONS(987), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(56), 1,
      sym__rest_of_the_line,
  [9306] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(599), 1,
      sym_class_declaration_plain_body,
  [9313] = 2,
    ACTIONS(963), 1,
      anon_sym_POUND,
    STATE(71), 1,
      sym__hash_number,
  [9320] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(610), 1,
      sym_class_declaration_plain_body,
  [9327] = 1,
    ACTIONS(883), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9332] = 2,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(615), 1,
      sym_class_declaration_plain_body,
  [9339] = 2,
    ACTIONS(1023), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__endl,
  [9346] = 2,
    ACTIONS(963), 1,
      anon_sym_POUND,
    STATE(627), 1,
      sym__hash_number,
  [9353] = 2,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(391), 1,
      sym_args,
  [9360] = 1,
    ACTIONS(1027), 2,
      anon_sym_RPAREN,
      sym__identifier,
  [9365] = 1,
    ACTIONS(1029), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [9370] = 1,
    ACTIONS(668), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9375] = 2,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    STATE(382), 1,
      sym_args,
  [9382] = 2,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(143), 1,
      sym_identifier,
  [9389] = 1,
    ACTIONS(1031), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9394] = 1,
    ACTIONS(859), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9399] = 1,
    ACTIONS(1033), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [9404] = 2,
    ACTIONS(672), 1,
      sym__identifier,
    STATE(142), 1,
      sym_identifier,
  [9411] = 2,
    ACTIONS(1035), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym__endl,
  [9418] = 2,
    ACTIONS(987), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(512), 1,
      sym__rest_of_the_line,
  [9425] = 2,
    ACTIONS(987), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
    STATE(90), 1,
      sym__rest_of_the_line,
  [9432] = 2,
    ACTIONS(965), 1,
      sym__number,
    STATE(34), 1,
      sym_number,
  [9439] = 2,
    ACTIONS(961), 1,
      sym__number,
    STATE(521), 1,
      sym_number,
  [9446] = 2,
    ACTIONS(1039), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym__endl,
  [9453] = 1,
    ACTIONS(1043), 2,
      anon_sym_LineNumberTable_COLON,
      sym__number,
  [9458] = 1,
    ACTIONS(1045), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [9463] = 1,
    ACTIONS(1047), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9468] = 2,
    ACTIONS(1049), 1,
      anon_sym_flags_COLON,
    STATE(3), 1,
      sym_flag_def,
  [9475] = 1,
    ACTIONS(760), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9480] = 1,
    ACTIONS(1051), 1,
      ts_builtin_sym_end,
  [9484] = 1,
    ACTIONS(1053), 1,
      anon_sym_Lastmodified,
  [9488] = 1,
    ACTIONS(1055), 1,
      anon_sym_SEMI,
  [9492] = 1,
    ACTIONS(1057), 1,
      ts_builtin_sym_end,
  [9496] = 1,
    ACTIONS(1059), 1,
      sym_descriptor_value,
  [9500] = 1,
    ACTIONS(1061), 1,
      anon_sym_DQUOTE,
  [9504] = 1,
    ACTIONS(1063), 1,
      sym_comment,
  [9508] = 1,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
  [9512] = 1,
    ACTIONS(1067), 1,
      anon_sym_SEMI,
  [9516] = 1,
    ACTIONS(1069), 1,
      anon_sym_DQUOTE,
  [9520] = 1,
    ACTIONS(1071), 1,
      anon_sym_SEMI,
  [9524] = 1,
    ACTIONS(1073), 1,
      anon_sym_EQ,
  [9528] = 1,
    ACTIONS(1075), 1,
      ts_builtin_sym_end,
  [9532] = 1,
    ACTIONS(1077), 1,
      anon_sym_SEMI,
  [9536] = 1,
    ACTIONS(1079), 1,
      anon_sym_SEMI,
  [9540] = 1,
    ACTIONS(1081), 1,
      sym_hex_value,
  [9544] = 1,
    ACTIONS(1083), 1,
      ts_builtin_sym_end,
  [9548] = 1,
    ACTIONS(1085), 1,
      ts_builtin_sym_end,
  [9552] = 1,
    ACTIONS(1087), 1,
      anon_sym_LPAREN_RPAREN,
  [9556] = 1,
    ACTIONS(1089), 1,
      ts_builtin_sym_end,
  [9560] = 1,
    ACTIONS(1091), 1,
      ts_builtin_sym_end,
  [9564] = 1,
    ACTIONS(1093), 1,
      anon_sym_COLON2,
  [9568] = 1,
    ACTIONS(1095), 1,
      ts_builtin_sym_end,
  [9572] = 1,
    ACTIONS(1097), 1,
      sym__endl,
  [9576] = 1,
    ACTIONS(1099), 1,
      sym_comment,
  [9580] = 1,
    ACTIONS(1101), 1,
      anon_sym_class,
  [9584] = 1,
    ACTIONS(1103), 1,
      anon_sym_default_value_COLON,
  [9588] = 1,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
  [9592] = 1,
    ACTIONS(85), 1,
      sym__endl,
  [9596] = 1,
    ACTIONS(1105), 1,
      ts_builtin_sym_end,
  [9600] = 1,
    ACTIONS(1107), 1,
      ts_builtin_sym_end,
  [9604] = 1,
    ACTIONS(1109), 1,
      anon_sym_POUND,
  [9608] = 1,
    ACTIONS(852), 1,
      ts_builtin_sym_end,
  [9612] = 1,
    ACTIONS(1111), 1,
      sym__endl,
  [9616] = 1,
    ACTIONS(1113), 1,
      ts_builtin_sym_end,
  [9620] = 1,
    ACTIONS(1115), 1,
      ts_builtin_sym_end,
  [9624] = 1,
    ACTIONS(1117), 1,
      ts_builtin_sym_end,
  [9628] = 1,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
  [9632] = 1,
    ACTIONS(1119), 1,
      anon_sym_SEMI,
  [9636] = 1,
    ACTIONS(1121), 1,
      ts_builtin_sym_end,
  [9640] = 1,
    ACTIONS(1123), 1,
      anon_sym_flags_COLON,
  [9644] = 1,
    ACTIONS(1125), 1,
      anon_sym_Lastmodified,
  [9648] = 1,
    ACTIONS(723), 1,
      ts_builtin_sym_end,
  [9652] = 1,
    ACTIONS(1127), 1,
      ts_builtin_sym_end,
  [9656] = 1,
    ACTIONS(1129), 1,
      sym_file_name,
  [9660] = 1,
    ACTIONS(1131), 1,
      ts_builtin_sym_end,
  [9664] = 1,
    ACTIONS(1133), 1,
      anon_sym_EQ2,
  [9668] = 1,
    ACTIONS(1135), 1,
      ts_builtin_sym_end,
  [9672] = 1,
    ACTIONS(1137), 1,
      ts_builtin_sym_end,
  [9676] = 1,
    ACTIONS(1139), 1,
      anon_sym_SEMI,
  [9680] = 1,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
  [9684] = 1,
    ACTIONS(1141), 1,
      anon_sym_Compiledfrom,
  [9688] = 1,
    ACTIONS(1143), 1,
      ts_builtin_sym_end,
  [9692] = 1,
    ACTIONS(1145), 1,
      ts_builtin_sym_end,
  [9696] = 1,
    ACTIONS(1147), 1,
      anon_sym_COLON2,
  [9700] = 1,
    ACTIONS(1149), 1,
      ts_builtin_sym_end,
  [9704] = 1,
    ACTIONS(732), 1,
      ts_builtin_sym_end,
  [9708] = 1,
    ACTIONS(1151), 1,
      sym__endl,
  [9712] = 1,
    ACTIONS(1153), 1,
      sym__endl,
  [9716] = 1,
    ACTIONS(1155), 1,
      anon_sym_DOT,
  [9720] = 1,
    ACTIONS(1157), 1,
      ts_builtin_sym_end,
  [9724] = 1,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
  [9728] = 1,
    ACTIONS(1161), 1,
      ts_builtin_sym_end,
  [9732] = 1,
    ACTIONS(1163), 1,
      ts_builtin_sym_end,
  [9736] = 1,
    ACTIONS(1165), 1,
      ts_builtin_sym_end,
  [9740] = 1,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
  [9744] = 1,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
  [9748] = 1,
    ACTIONS(1167), 1,
      ts_builtin_sym_end,
  [9752] = 1,
    ACTIONS(1169), 1,
      ts_builtin_sym_end,
  [9756] = 1,
    ACTIONS(1171), 1,
      anon_sym_SEMI,
  [9760] = 1,
    ACTIONS(1173), 1,
      sym_md5,
  [9764] = 1,
    ACTIONS(1175), 1,
      anon_sym_MD5checksum,
  [9768] = 1,
    ACTIONS(1177), 1,
      ts_builtin_sym_end,
  [9772] = 1,
    ACTIONS(1179), 1,
      sym__endl,
  [9776] = 1,
    ACTIONS(1181), 1,
      sym__endl,
  [9780] = 1,
    ACTIONS(1183), 1,
      ts_builtin_sym_end,
  [9784] = 1,
    ACTIONS(1185), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [9788] = 1,
    ACTIONS(1187), 1,
      ts_builtin_sym_end,
  [9792] = 1,
    ACTIONS(1189), 1,
      ts_builtin_sym_end,
  [9796] = 1,
    ACTIONS(1191), 1,
      anon_sym_Lastmodified,
  [9800] = 1,
    ACTIONS(1193), 1,
      sym__path_segment,
  [9804] = 1,
    ACTIONS(1195), 1,
      anon_sym_DQUOTE,
  [9808] = 1,
    ACTIONS(1197), 1,
      ts_builtin_sym_end,
  [9812] = 1,
    ACTIONS(1199), 1,
      ts_builtin_sym_end,
  [9816] = 1,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
  [9820] = 1,
    ACTIONS(1203), 1,
      anon_sym_COLON,
  [9824] = 1,
    ACTIONS(1205), 1,
      aux_sym_class_info_item_simple_token1,
  [9828] = 1,
    ACTIONS(1207), 1,
      aux_sym_constant_pool_item_type_utf8_token1,
  [9832] = 1,
    ACTIONS(1209), 1,
      ts_builtin_sym_end,
  [9836] = 1,
    ACTIONS(1211), 1,
      ts_builtin_sym_end,
  [9840] = 1,
    ACTIONS(1213), 1,
      sym__identifier,
  [9844] = 1,
    ACTIONS(1215), 1,
      anon_sym_SEMI,
  [9848] = 1,
    ACTIONS(1217), 1,
      anon_sym_COLON,
  [9852] = 1,
    ACTIONS(934), 1,
      ts_builtin_sym_end,
  [9856] = 1,
    ACTIONS(1153), 1,
      anon_sym_COLON2,
  [9860] = 1,
    ACTIONS(1219), 1,
      anon_sym_of,
  [9864] = 1,
    ACTIONS(1221), 1,
      anon_sym_Lastmodified,
  [9868] = 1,
    ACTIONS(1223), 1,
      sym__number,
  [9872] = 1,
    ACTIONS(1225), 1,
      sym_flag_value,
  [9876] = 1,
    ACTIONS(1227), 1,
      anon_sym_RBRACK,
  [9880] = 1,
    ACTIONS(1229), 1,
      anon_sym_EQ2,
  [9884] = 1,
    ACTIONS(1231), 1,
      sym__endl,
  [9888] = 1,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
  [9892] = 1,
    ACTIONS(1235), 1,
      sym_file_name,
  [9896] = 1,
    ACTIONS(1237), 1,
      ts_builtin_sym_end,
  [9900] = 1,
    ACTIONS(1239), 1,
      ts_builtin_sym_end,
  [9904] = 1,
    ACTIONS(1241), 1,
      sym_flag_value,
  [9908] = 1,
    ACTIONS(1243), 1,
      sym_decimal_floating_point_literal,
  [9912] = 1,
    ACTIONS(874), 1,
      ts_builtin_sym_end,
  [9916] = 1,
    ACTIONS(1245), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
  [9920] = 1,
    ACTIONS(1247), 1,
      anon_sym_LPAREN_RPAREN,
  [9924] = 1,
    ACTIONS(1249), 1,
      ts_builtin_sym_end,
  [9928] = 1,
    ACTIONS(1251), 1,
      anon_sym_EQ2,
  [9932] = 1,
    ACTIONS(1253), 1,
      ts_builtin_sym_end,
  [9936] = 1,
    ACTIONS(1255), 1,
      anon_sym_Lastmodified,
  [9940] = 1,
    ACTIONS(1257), 1,
      anon_sym_COLON,
  [9944] = 1,
    ACTIONS(1259), 1,
      anon_sym_RBRACK,
  [9948] = 1,
    ACTIONS(1261), 1,
      ts_builtin_sym_end,
  [9952] = 1,
    ACTIONS(1263), 1,
      anon_sym_COLON2,
  [9956] = 1,
    ACTIONS(1265), 1,
      ts_builtin_sym_end,
  [9960] = 1,
    ACTIONS(1267), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [9964] = 1,
    ACTIONS(1269), 1,
      ts_builtin_sym_end,
  [9968] = 1,
    ACTIONS(1271), 1,
      sym__endl,
  [9972] = 1,
    ACTIONS(1273), 1,
      sym_hex_value,
  [9976] = 1,
    ACTIONS(1275), 1,
      aux_sym_runtime_visible_type_annotation_token1,
  [9980] = 1,
    ACTIONS(1277), 1,
      anon_sym_COLON,
  [9984] = 1,
    ACTIONS(1279), 1,
      aux_sym_annotation_default_token1,
  [9988] = 1,
    ACTIONS(1281), 1,
      ts_builtin_sym_end,
  [9992] = 1,
    ACTIONS(1283), 1,
      anon_sym_COLON2,
  [9996] = 1,
    ACTIONS(1285), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 117,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 249,
  [SMALL_STATE(7)] = 315,
  [SMALL_STATE(8)] = 381,
  [SMALL_STATE(9)] = 447,
  [SMALL_STATE(10)] = 513,
  [SMALL_STATE(11)] = 581,
  [SMALL_STATE(12)] = 643,
  [SMALL_STATE(13)] = 705,
  [SMALL_STATE(14)] = 741,
  [SMALL_STATE(15)] = 781,
  [SMALL_STATE(16)] = 821,
  [SMALL_STATE(17)] = 877,
  [SMALL_STATE(18)] = 933,
  [SMALL_STATE(19)] = 973,
  [SMALL_STATE(20)] = 1013,
  [SMALL_STATE(21)] = 1069,
  [SMALL_STATE(22)] = 1109,
  [SMALL_STATE(23)] = 1146,
  [SMALL_STATE(24)] = 1181,
  [SMALL_STATE(25)] = 1216,
  [SMALL_STATE(26)] = 1251,
  [SMALL_STATE(27)] = 1296,
  [SMALL_STATE(28)] = 1346,
  [SMALL_STATE(29)] = 1396,
  [SMALL_STATE(30)] = 1446,
  [SMALL_STATE(31)] = 1486,
  [SMALL_STATE(32)] = 1526,
  [SMALL_STATE(33)] = 1560,
  [SMALL_STATE(34)] = 1610,
  [SMALL_STATE(35)] = 1644,
  [SMALL_STATE(36)] = 1684,
  [SMALL_STATE(37)] = 1719,
  [SMALL_STATE(38)] = 1752,
  [SMALL_STATE(39)] = 1793,
  [SMALL_STATE(40)] = 1826,
  [SMALL_STATE(41)] = 1867,
  [SMALL_STATE(42)] = 1900,
  [SMALL_STATE(43)] = 1933,
  [SMALL_STATE(44)] = 1970,
  [SMALL_STATE(45)] = 2003,
  [SMALL_STATE(46)] = 2036,
  [SMALL_STATE(47)] = 2073,
  [SMALL_STATE(48)] = 2106,
  [SMALL_STATE(49)] = 2139,
  [SMALL_STATE(50)] = 2183,
  [SMALL_STATE(51)] = 2215,
  [SMALL_STATE(52)] = 2259,
  [SMALL_STATE(53)] = 2295,
  [SMALL_STATE(54)] = 2339,
  [SMALL_STATE(55)] = 2383,
  [SMALL_STATE(56)] = 2427,
  [SMALL_STATE(57)] = 2459,
  [SMALL_STATE(58)] = 2491,
  [SMALL_STATE(59)] = 2523,
  [SMALL_STATE(60)] = 2563,
  [SMALL_STATE(61)] = 2599,
  [SMALL_STATE(62)] = 2639,
  [SMALL_STATE(63)] = 2670,
  [SMALL_STATE(64)] = 2701,
  [SMALL_STATE(65)] = 2739,
  [SMALL_STATE(66)] = 2777,
  [SMALL_STATE(67)] = 2815,
  [SMALL_STATE(68)] = 2853,
  [SMALL_STATE(69)] = 2891,
  [SMALL_STATE(70)] = 2921,
  [SMALL_STATE(71)] = 2959,
  [SMALL_STATE(72)] = 2991,
  [SMALL_STATE(73)] = 3024,
  [SMALL_STATE(74)] = 3057,
  [SMALL_STATE(75)] = 3086,
  [SMALL_STATE(76)] = 3115,
  [SMALL_STATE(77)] = 3147,
  [SMALL_STATE(78)] = 3175,
  [SMALL_STATE(79)] = 3207,
  [SMALL_STATE(80)] = 3239,
  [SMALL_STATE(81)] = 3271,
  [SMALL_STATE(82)] = 3299,
  [SMALL_STATE(83)] = 3327,
  [SMALL_STATE(84)] = 3359,
  [SMALL_STATE(85)] = 3387,
  [SMALL_STATE(86)] = 3419,
  [SMALL_STATE(87)] = 3451,
  [SMALL_STATE(88)] = 3482,
  [SMALL_STATE(89)] = 3509,
  [SMALL_STATE(90)] = 3540,
  [SMALL_STATE(91)] = 3567,
  [SMALL_STATE(92)] = 3593,
  [SMALL_STATE(93)] = 3619,
  [SMALL_STATE(94)] = 3645,
  [SMALL_STATE(95)] = 3671,
  [SMALL_STATE(96)] = 3697,
  [SMALL_STATE(97)] = 3723,
  [SMALL_STATE(98)] = 3749,
  [SMALL_STATE(99)] = 3775,
  [SMALL_STATE(100)] = 3801,
  [SMALL_STATE(101)] = 3827,
  [SMALL_STATE(102)] = 3861,
  [SMALL_STATE(103)] = 3898,
  [SMALL_STATE(104)] = 3931,
  [SMALL_STATE(105)] = 3967,
  [SMALL_STATE(106)] = 4003,
  [SMALL_STATE(107)] = 4039,
  [SMALL_STATE(108)] = 4075,
  [SMALL_STATE(109)] = 4102,
  [SMALL_STATE(110)] = 4125,
  [SMALL_STATE(111)] = 4158,
  [SMALL_STATE(112)] = 4185,
  [SMALL_STATE(113)] = 4218,
  [SMALL_STATE(114)] = 4241,
  [SMALL_STATE(115)] = 4262,
  [SMALL_STATE(116)] = 4286,
  [SMALL_STATE(117)] = 4316,
  [SMALL_STATE(118)] = 4346,
  [SMALL_STATE(119)] = 4376,
  [SMALL_STATE(120)] = 4403,
  [SMALL_STATE(121)] = 4430,
  [SMALL_STATE(122)] = 4457,
  [SMALL_STATE(123)] = 4484,
  [SMALL_STATE(124)] = 4511,
  [SMALL_STATE(125)] = 4538,
  [SMALL_STATE(126)] = 4565,
  [SMALL_STATE(127)] = 4582,
  [SMALL_STATE(128)] = 4609,
  [SMALL_STATE(129)] = 4636,
  [SMALL_STATE(130)] = 4663,
  [SMALL_STATE(131)] = 4690,
  [SMALL_STATE(132)] = 4707,
  [SMALL_STATE(133)] = 4734,
  [SMALL_STATE(134)] = 4750,
  [SMALL_STATE(135)] = 4786,
  [SMALL_STATE(136)] = 4822,
  [SMALL_STATE(137)] = 4843,
  [SMALL_STATE(138)] = 4864,
  [SMALL_STATE(139)] = 4898,
  [SMALL_STATE(140)] = 4932,
  [SMALL_STATE(141)] = 4962,
  [SMALL_STATE(142)] = 4992,
  [SMALL_STATE(143)] = 5008,
  [SMALL_STATE(144)] = 5024,
  [SMALL_STATE(145)] = 5039,
  [SMALL_STATE(146)] = 5054,
  [SMALL_STATE(147)] = 5069,
  [SMALL_STATE(148)] = 5084,
  [SMALL_STATE(149)] = 5101,
  [SMALL_STATE(150)] = 5116,
  [SMALL_STATE(151)] = 5131,
  [SMALL_STATE(152)] = 5146,
  [SMALL_STATE(153)] = 5163,
  [SMALL_STATE(154)] = 5183,
  [SMALL_STATE(155)] = 5203,
  [SMALL_STATE(156)] = 5217,
  [SMALL_STATE(157)] = 5229,
  [SMALL_STATE(158)] = 5253,
  [SMALL_STATE(159)] = 5271,
  [SMALL_STATE(160)] = 5295,
  [SMALL_STATE(161)] = 5315,
  [SMALL_STATE(162)] = 5327,
  [SMALL_STATE(163)] = 5351,
  [SMALL_STATE(164)] = 5375,
  [SMALL_STATE(165)] = 5393,
  [SMALL_STATE(166)] = 5421,
  [SMALL_STATE(167)] = 5441,
  [SMALL_STATE(168)] = 5453,
  [SMALL_STATE(169)] = 5467,
  [SMALL_STATE(170)] = 5495,
  [SMALL_STATE(171)] = 5509,
  [SMALL_STATE(172)] = 5529,
  [SMALL_STATE(173)] = 5541,
  [SMALL_STATE(174)] = 5552,
  [SMALL_STATE(175)] = 5563,
  [SMALL_STATE(176)] = 5576,
  [SMALL_STATE(177)] = 5601,
  [SMALL_STATE(178)] = 5614,
  [SMALL_STATE(179)] = 5639,
  [SMALL_STATE(180)] = 5664,
  [SMALL_STATE(181)] = 5687,
  [SMALL_STATE(182)] = 5712,
  [SMALL_STATE(183)] = 5730,
  [SMALL_STATE(184)] = 5748,
  [SMALL_STATE(185)] = 5764,
  [SMALL_STATE(186)] = 5776,
  [SMALL_STATE(187)] = 5790,
  [SMALL_STATE(188)] = 5800,
  [SMALL_STATE(189)] = 5822,
  [SMALL_STATE(190)] = 5840,
  [SMALL_STATE(191)] = 5850,
  [SMALL_STATE(192)] = 5868,
  [SMALL_STATE(193)] = 5886,
  [SMALL_STATE(194)] = 5902,
  [SMALL_STATE(195)] = 5924,
  [SMALL_STATE(196)] = 5940,
  [SMALL_STATE(197)] = 5952,
  [SMALL_STATE(198)] = 5968,
  [SMALL_STATE(199)] = 5986,
  [SMALL_STATE(200)] = 6004,
  [SMALL_STATE(201)] = 6022,
  [SMALL_STATE(202)] = 6040,
  [SMALL_STATE(203)] = 6060,
  [SMALL_STATE(204)] = 6078,
  [SMALL_STATE(205)] = 6098,
  [SMALL_STATE(206)] = 6120,
  [SMALL_STATE(207)] = 6140,
  [SMALL_STATE(208)] = 6158,
  [SMALL_STATE(209)] = 6176,
  [SMALL_STATE(210)] = 6194,
  [SMALL_STATE(211)] = 6212,
  [SMALL_STATE(212)] = 6230,
  [SMALL_STATE(213)] = 6248,
  [SMALL_STATE(214)] = 6266,
  [SMALL_STATE(215)] = 6284,
  [SMALL_STATE(216)] = 6302,
  [SMALL_STATE(217)] = 6320,
  [SMALL_STATE(218)] = 6338,
  [SMALL_STATE(219)] = 6356,
  [SMALL_STATE(220)] = 6374,
  [SMALL_STATE(221)] = 6388,
  [SMALL_STATE(222)] = 6406,
  [SMALL_STATE(223)] = 6416,
  [SMALL_STATE(224)] = 6428,
  [SMALL_STATE(225)] = 6440,
  [SMALL_STATE(226)] = 6462,
  [SMALL_STATE(227)] = 6474,
  [SMALL_STATE(228)] = 6492,
  [SMALL_STATE(229)] = 6510,
  [SMALL_STATE(230)] = 6528,
  [SMALL_STATE(231)] = 6538,
  [SMALL_STATE(232)] = 6560,
  [SMALL_STATE(233)] = 6576,
  [SMALL_STATE(234)] = 6591,
  [SMALL_STATE(235)] = 6602,
  [SMALL_STATE(236)] = 6613,
  [SMALL_STATE(237)] = 6626,
  [SMALL_STATE(238)] = 6645,
  [SMALL_STATE(239)] = 6654,
  [SMALL_STATE(240)] = 6671,
  [SMALL_STATE(241)] = 6684,
  [SMALL_STATE(242)] = 6697,
  [SMALL_STATE(243)] = 6716,
  [SMALL_STATE(244)] = 6735,
  [SMALL_STATE(245)] = 6744,
  [SMALL_STATE(246)] = 6757,
  [SMALL_STATE(247)] = 6776,
  [SMALL_STATE(248)] = 6787,
  [SMALL_STATE(249)] = 6806,
  [SMALL_STATE(250)] = 6823,
  [SMALL_STATE(251)] = 6842,
  [SMALL_STATE(252)] = 6859,
  [SMALL_STATE(253)] = 6878,
  [SMALL_STATE(254)] = 6887,
  [SMALL_STATE(255)] = 6906,
  [SMALL_STATE(256)] = 6925,
  [SMALL_STATE(257)] = 6940,
  [SMALL_STATE(258)] = 6957,
  [SMALL_STATE(259)] = 6966,
  [SMALL_STATE(260)] = 6983,
  [SMALL_STATE(261)] = 6997,
  [SMALL_STATE(262)] = 7005,
  [SMALL_STATE(263)] = 7021,
  [SMALL_STATE(264)] = 7035,
  [SMALL_STATE(265)] = 7049,
  [SMALL_STATE(266)] = 7059,
  [SMALL_STATE(267)] = 7073,
  [SMALL_STATE(268)] = 7089,
  [SMALL_STATE(269)] = 7105,
  [SMALL_STATE(270)] = 7119,
  [SMALL_STATE(271)] = 7133,
  [SMALL_STATE(272)] = 7147,
  [SMALL_STATE(273)] = 7161,
  [SMALL_STATE(274)] = 7175,
  [SMALL_STATE(275)] = 7189,
  [SMALL_STATE(276)] = 7205,
  [SMALL_STATE(277)] = 7219,
  [SMALL_STATE(278)] = 7229,
  [SMALL_STATE(279)] = 7239,
  [SMALL_STATE(280)] = 7249,
  [SMALL_STATE(281)] = 7259,
  [SMALL_STATE(282)] = 7273,
  [SMALL_STATE(283)] = 7289,
  [SMALL_STATE(284)] = 7305,
  [SMALL_STATE(285)] = 7321,
  [SMALL_STATE(286)] = 7335,
  [SMALL_STATE(287)] = 7351,
  [SMALL_STATE(288)] = 7359,
  [SMALL_STATE(289)] = 7367,
  [SMALL_STATE(290)] = 7381,
  [SMALL_STATE(291)] = 7389,
  [SMALL_STATE(292)] = 7399,
  [SMALL_STATE(293)] = 7415,
  [SMALL_STATE(294)] = 7431,
  [SMALL_STATE(295)] = 7445,
  [SMALL_STATE(296)] = 7459,
  [SMALL_STATE(297)] = 7471,
  [SMALL_STATE(298)] = 7485,
  [SMALL_STATE(299)] = 7499,
  [SMALL_STATE(300)] = 7515,
  [SMALL_STATE(301)] = 7531,
  [SMALL_STATE(302)] = 7547,
  [SMALL_STATE(303)] = 7561,
  [SMALL_STATE(304)] = 7575,
  [SMALL_STATE(305)] = 7589,
  [SMALL_STATE(306)] = 7602,
  [SMALL_STATE(307)] = 7609,
  [SMALL_STATE(308)] = 7616,
  [SMALL_STATE(309)] = 7623,
  [SMALL_STATE(310)] = 7630,
  [SMALL_STATE(311)] = 7641,
  [SMALL_STATE(312)] = 7654,
  [SMALL_STATE(313)] = 7667,
  [SMALL_STATE(314)] = 7680,
  [SMALL_STATE(315)] = 7693,
  [SMALL_STATE(316)] = 7704,
  [SMALL_STATE(317)] = 7717,
  [SMALL_STATE(318)] = 7730,
  [SMALL_STATE(319)] = 7739,
  [SMALL_STATE(320)] = 7752,
  [SMALL_STATE(321)] = 7763,
  [SMALL_STATE(322)] = 7776,
  [SMALL_STATE(323)] = 7787,
  [SMALL_STATE(324)] = 7800,
  [SMALL_STATE(325)] = 7813,
  [SMALL_STATE(326)] = 7824,
  [SMALL_STATE(327)] = 7831,
  [SMALL_STATE(328)] = 7844,
  [SMALL_STATE(329)] = 7855,
  [SMALL_STATE(330)] = 7862,
  [SMALL_STATE(331)] = 7869,
  [SMALL_STATE(332)] = 7878,
  [SMALL_STATE(333)] = 7887,
  [SMALL_STATE(334)] = 7900,
  [SMALL_STATE(335)] = 7913,
  [SMALL_STATE(336)] = 7926,
  [SMALL_STATE(337)] = 7933,
  [SMALL_STATE(338)] = 7946,
  [SMALL_STATE(339)] = 7957,
  [SMALL_STATE(340)] = 7970,
  [SMALL_STATE(341)] = 7983,
  [SMALL_STATE(342)] = 7992,
  [SMALL_STATE(343)] = 8005,
  [SMALL_STATE(344)] = 8018,
  [SMALL_STATE(345)] = 8031,
  [SMALL_STATE(346)] = 8040,
  [SMALL_STATE(347)] = 8047,
  [SMALL_STATE(348)] = 8057,
  [SMALL_STATE(349)] = 8063,
  [SMALL_STATE(350)] = 8073,
  [SMALL_STATE(351)] = 8083,
  [SMALL_STATE(352)] = 8093,
  [SMALL_STATE(353)] = 8103,
  [SMALL_STATE(354)] = 8113,
  [SMALL_STATE(355)] = 8121,
  [SMALL_STATE(356)] = 8131,
  [SMALL_STATE(357)] = 8141,
  [SMALL_STATE(358)] = 8149,
  [SMALL_STATE(359)] = 8159,
  [SMALL_STATE(360)] = 8169,
  [SMALL_STATE(361)] = 8179,
  [SMALL_STATE(362)] = 8189,
  [SMALL_STATE(363)] = 8199,
  [SMALL_STATE(364)] = 8209,
  [SMALL_STATE(365)] = 8219,
  [SMALL_STATE(366)] = 8229,
  [SMALL_STATE(367)] = 8239,
  [SMALL_STATE(368)] = 8249,
  [SMALL_STATE(369)] = 8257,
  [SMALL_STATE(370)] = 8267,
  [SMALL_STATE(371)] = 8277,
  [SMALL_STATE(372)] = 8287,
  [SMALL_STATE(373)] = 8297,
  [SMALL_STATE(374)] = 8303,
  [SMALL_STATE(375)] = 8313,
  [SMALL_STATE(376)] = 8323,
  [SMALL_STATE(377)] = 8333,
  [SMALL_STATE(378)] = 8343,
  [SMALL_STATE(379)] = 8353,
  [SMALL_STATE(380)] = 8359,
  [SMALL_STATE(381)] = 8369,
  [SMALL_STATE(382)] = 8379,
  [SMALL_STATE(383)] = 8389,
  [SMALL_STATE(384)] = 8399,
  [SMALL_STATE(385)] = 8409,
  [SMALL_STATE(386)] = 8419,
  [SMALL_STATE(387)] = 8427,
  [SMALL_STATE(388)] = 8437,
  [SMALL_STATE(389)] = 8445,
  [SMALL_STATE(390)] = 8455,
  [SMALL_STATE(391)] = 8465,
  [SMALL_STATE(392)] = 8475,
  [SMALL_STATE(393)] = 8485,
  [SMALL_STATE(394)] = 8495,
  [SMALL_STATE(395)] = 8505,
  [SMALL_STATE(396)] = 8515,
  [SMALL_STATE(397)] = 8525,
  [SMALL_STATE(398)] = 8535,
  [SMALL_STATE(399)] = 8545,
  [SMALL_STATE(400)] = 8555,
  [SMALL_STATE(401)] = 8565,
  [SMALL_STATE(402)] = 8575,
  [SMALL_STATE(403)] = 8585,
  [SMALL_STATE(404)] = 8595,
  [SMALL_STATE(405)] = 8605,
  [SMALL_STATE(406)] = 8613,
  [SMALL_STATE(407)] = 8623,
  [SMALL_STATE(408)] = 8633,
  [SMALL_STATE(409)] = 8643,
  [SMALL_STATE(410)] = 8653,
  [SMALL_STATE(411)] = 8663,
  [SMALL_STATE(412)] = 8673,
  [SMALL_STATE(413)] = 8683,
  [SMALL_STATE(414)] = 8693,
  [SMALL_STATE(415)] = 8703,
  [SMALL_STATE(416)] = 8713,
  [SMALL_STATE(417)] = 8723,
  [SMALL_STATE(418)] = 8730,
  [SMALL_STATE(419)] = 8737,
  [SMALL_STATE(420)] = 8744,
  [SMALL_STATE(421)] = 8751,
  [SMALL_STATE(422)] = 8758,
  [SMALL_STATE(423)] = 8765,
  [SMALL_STATE(424)] = 8772,
  [SMALL_STATE(425)] = 8779,
  [SMALL_STATE(426)] = 8786,
  [SMALL_STATE(427)] = 8793,
  [SMALL_STATE(428)] = 8800,
  [SMALL_STATE(429)] = 8807,
  [SMALL_STATE(430)] = 8814,
  [SMALL_STATE(431)] = 8819,
  [SMALL_STATE(432)] = 8824,
  [SMALL_STATE(433)] = 8831,
  [SMALL_STATE(434)] = 8838,
  [SMALL_STATE(435)] = 8845,
  [SMALL_STATE(436)] = 8850,
  [SMALL_STATE(437)] = 8857,
  [SMALL_STATE(438)] = 8864,
  [SMALL_STATE(439)] = 8871,
  [SMALL_STATE(440)] = 8878,
  [SMALL_STATE(441)] = 8885,
  [SMALL_STATE(442)] = 8892,
  [SMALL_STATE(443)] = 8899,
  [SMALL_STATE(444)] = 8906,
  [SMALL_STATE(445)] = 8913,
  [SMALL_STATE(446)] = 8920,
  [SMALL_STATE(447)] = 8927,
  [SMALL_STATE(448)] = 8934,
  [SMALL_STATE(449)] = 8941,
  [SMALL_STATE(450)] = 8948,
  [SMALL_STATE(451)] = 8953,
  [SMALL_STATE(452)] = 8960,
  [SMALL_STATE(453)] = 8967,
  [SMALL_STATE(454)] = 8974,
  [SMALL_STATE(455)] = 8981,
  [SMALL_STATE(456)] = 8988,
  [SMALL_STATE(457)] = 8993,
  [SMALL_STATE(458)] = 9000,
  [SMALL_STATE(459)] = 9007,
  [SMALL_STATE(460)] = 9014,
  [SMALL_STATE(461)] = 9019,
  [SMALL_STATE(462)] = 9026,
  [SMALL_STATE(463)] = 9033,
  [SMALL_STATE(464)] = 9040,
  [SMALL_STATE(465)] = 9047,
  [SMALL_STATE(466)] = 9054,
  [SMALL_STATE(467)] = 9059,
  [SMALL_STATE(468)] = 9066,
  [SMALL_STATE(469)] = 9073,
  [SMALL_STATE(470)] = 9080,
  [SMALL_STATE(471)] = 9087,
  [SMALL_STATE(472)] = 9094,
  [SMALL_STATE(473)] = 9101,
  [SMALL_STATE(474)] = 9108,
  [SMALL_STATE(475)] = 9115,
  [SMALL_STATE(476)] = 9122,
  [SMALL_STATE(477)] = 9129,
  [SMALL_STATE(478)] = 9136,
  [SMALL_STATE(479)] = 9141,
  [SMALL_STATE(480)] = 9148,
  [SMALL_STATE(481)] = 9155,
  [SMALL_STATE(482)] = 9162,
  [SMALL_STATE(483)] = 9169,
  [SMALL_STATE(484)] = 9176,
  [SMALL_STATE(485)] = 9183,
  [SMALL_STATE(486)] = 9190,
  [SMALL_STATE(487)] = 9197,
  [SMALL_STATE(488)] = 9204,
  [SMALL_STATE(489)] = 9209,
  [SMALL_STATE(490)] = 9216,
  [SMALL_STATE(491)] = 9223,
  [SMALL_STATE(492)] = 9230,
  [SMALL_STATE(493)] = 9237,
  [SMALL_STATE(494)] = 9242,
  [SMALL_STATE(495)] = 9247,
  [SMALL_STATE(496)] = 9252,
  [SMALL_STATE(497)] = 9259,
  [SMALL_STATE(498)] = 9266,
  [SMALL_STATE(499)] = 9271,
  [SMALL_STATE(500)] = 9278,
  [SMALL_STATE(501)] = 9285,
  [SMALL_STATE(502)] = 9292,
  [SMALL_STATE(503)] = 9299,
  [SMALL_STATE(504)] = 9306,
  [SMALL_STATE(505)] = 9313,
  [SMALL_STATE(506)] = 9320,
  [SMALL_STATE(507)] = 9327,
  [SMALL_STATE(508)] = 9332,
  [SMALL_STATE(509)] = 9339,
  [SMALL_STATE(510)] = 9346,
  [SMALL_STATE(511)] = 9353,
  [SMALL_STATE(512)] = 9360,
  [SMALL_STATE(513)] = 9365,
  [SMALL_STATE(514)] = 9370,
  [SMALL_STATE(515)] = 9375,
  [SMALL_STATE(516)] = 9382,
  [SMALL_STATE(517)] = 9389,
  [SMALL_STATE(518)] = 9394,
  [SMALL_STATE(519)] = 9399,
  [SMALL_STATE(520)] = 9404,
  [SMALL_STATE(521)] = 9411,
  [SMALL_STATE(522)] = 9418,
  [SMALL_STATE(523)] = 9425,
  [SMALL_STATE(524)] = 9432,
  [SMALL_STATE(525)] = 9439,
  [SMALL_STATE(526)] = 9446,
  [SMALL_STATE(527)] = 9453,
  [SMALL_STATE(528)] = 9458,
  [SMALL_STATE(529)] = 9463,
  [SMALL_STATE(530)] = 9468,
  [SMALL_STATE(531)] = 9475,
  [SMALL_STATE(532)] = 9480,
  [SMALL_STATE(533)] = 9484,
  [SMALL_STATE(534)] = 9488,
  [SMALL_STATE(535)] = 9492,
  [SMALL_STATE(536)] = 9496,
  [SMALL_STATE(537)] = 9500,
  [SMALL_STATE(538)] = 9504,
  [SMALL_STATE(539)] = 9508,
  [SMALL_STATE(540)] = 9512,
  [SMALL_STATE(541)] = 9516,
  [SMALL_STATE(542)] = 9520,
  [SMALL_STATE(543)] = 9524,
  [SMALL_STATE(544)] = 9528,
  [SMALL_STATE(545)] = 9532,
  [SMALL_STATE(546)] = 9536,
  [SMALL_STATE(547)] = 9540,
  [SMALL_STATE(548)] = 9544,
  [SMALL_STATE(549)] = 9548,
  [SMALL_STATE(550)] = 9552,
  [SMALL_STATE(551)] = 9556,
  [SMALL_STATE(552)] = 9560,
  [SMALL_STATE(553)] = 9564,
  [SMALL_STATE(554)] = 9568,
  [SMALL_STATE(555)] = 9572,
  [SMALL_STATE(556)] = 9576,
  [SMALL_STATE(557)] = 9580,
  [SMALL_STATE(558)] = 9584,
  [SMALL_STATE(559)] = 9588,
  [SMALL_STATE(560)] = 9592,
  [SMALL_STATE(561)] = 9596,
  [SMALL_STATE(562)] = 9600,
  [SMALL_STATE(563)] = 9604,
  [SMALL_STATE(564)] = 9608,
  [SMALL_STATE(565)] = 9612,
  [SMALL_STATE(566)] = 9616,
  [SMALL_STATE(567)] = 9620,
  [SMALL_STATE(568)] = 9624,
  [SMALL_STATE(569)] = 9628,
  [SMALL_STATE(570)] = 9632,
  [SMALL_STATE(571)] = 9636,
  [SMALL_STATE(572)] = 9640,
  [SMALL_STATE(573)] = 9644,
  [SMALL_STATE(574)] = 9648,
  [SMALL_STATE(575)] = 9652,
  [SMALL_STATE(576)] = 9656,
  [SMALL_STATE(577)] = 9660,
  [SMALL_STATE(578)] = 9664,
  [SMALL_STATE(579)] = 9668,
  [SMALL_STATE(580)] = 9672,
  [SMALL_STATE(581)] = 9676,
  [SMALL_STATE(582)] = 9680,
  [SMALL_STATE(583)] = 9684,
  [SMALL_STATE(584)] = 9688,
  [SMALL_STATE(585)] = 9692,
  [SMALL_STATE(586)] = 9696,
  [SMALL_STATE(587)] = 9700,
  [SMALL_STATE(588)] = 9704,
  [SMALL_STATE(589)] = 9708,
  [SMALL_STATE(590)] = 9712,
  [SMALL_STATE(591)] = 9716,
  [SMALL_STATE(592)] = 9720,
  [SMALL_STATE(593)] = 9724,
  [SMALL_STATE(594)] = 9728,
  [SMALL_STATE(595)] = 9732,
  [SMALL_STATE(596)] = 9736,
  [SMALL_STATE(597)] = 9740,
  [SMALL_STATE(598)] = 9744,
  [SMALL_STATE(599)] = 9748,
  [SMALL_STATE(600)] = 9752,
  [SMALL_STATE(601)] = 9756,
  [SMALL_STATE(602)] = 9760,
  [SMALL_STATE(603)] = 9764,
  [SMALL_STATE(604)] = 9768,
  [SMALL_STATE(605)] = 9772,
  [SMALL_STATE(606)] = 9776,
  [SMALL_STATE(607)] = 9780,
  [SMALL_STATE(608)] = 9784,
  [SMALL_STATE(609)] = 9788,
  [SMALL_STATE(610)] = 9792,
  [SMALL_STATE(611)] = 9796,
  [SMALL_STATE(612)] = 9800,
  [SMALL_STATE(613)] = 9804,
  [SMALL_STATE(614)] = 9808,
  [SMALL_STATE(615)] = 9812,
  [SMALL_STATE(616)] = 9816,
  [SMALL_STATE(617)] = 9820,
  [SMALL_STATE(618)] = 9824,
  [SMALL_STATE(619)] = 9828,
  [SMALL_STATE(620)] = 9832,
  [SMALL_STATE(621)] = 9836,
  [SMALL_STATE(622)] = 9840,
  [SMALL_STATE(623)] = 9844,
  [SMALL_STATE(624)] = 9848,
  [SMALL_STATE(625)] = 9852,
  [SMALL_STATE(626)] = 9856,
  [SMALL_STATE(627)] = 9860,
  [SMALL_STATE(628)] = 9864,
  [SMALL_STATE(629)] = 9868,
  [SMALL_STATE(630)] = 9872,
  [SMALL_STATE(631)] = 9876,
  [SMALL_STATE(632)] = 9880,
  [SMALL_STATE(633)] = 9884,
  [SMALL_STATE(634)] = 9888,
  [SMALL_STATE(635)] = 9892,
  [SMALL_STATE(636)] = 9896,
  [SMALL_STATE(637)] = 9900,
  [SMALL_STATE(638)] = 9904,
  [SMALL_STATE(639)] = 9908,
  [SMALL_STATE(640)] = 9912,
  [SMALL_STATE(641)] = 9916,
  [SMALL_STATE(642)] = 9920,
  [SMALL_STATE(643)] = 9924,
  [SMALL_STATE(644)] = 9928,
  [SMALL_STATE(645)] = 9932,
  [SMALL_STATE(646)] = 9936,
  [SMALL_STATE(647)] = 9940,
  [SMALL_STATE(648)] = 9944,
  [SMALL_STATE(649)] = 9948,
  [SMALL_STATE(650)] = 9952,
  [SMALL_STATE(651)] = 9956,
  [SMALL_STATE(652)] = 9960,
  [SMALL_STATE(653)] = 9964,
  [SMALL_STATE(654)] = 9968,
  [SMALL_STATE(655)] = 9972,
  [SMALL_STATE(656)] = 9976,
  [SMALL_STATE(657)] = 9980,
  [SMALL_STATE(658)] = 9984,
  [SMALL_STATE(659)] = 9988,
  [SMALL_STATE(660)] = 9992,
  [SMALL_STATE(661)] = 9996,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_declaration_verbose, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declaration_verbose, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(416),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_declaration_plain_body_repeat1, 2), SHIFT_REPEAT(32),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_declaration_plain_body_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_declaration_plain_body_repeat1, 2), SHIFT_REPEAT(416),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_declaration_plain_body_repeat1, 2), SHIFT_REPEAT(89),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_declaration_plain_body_repeat1, 2), SHIFT_REPEAT(57),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_declaration_verbose, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declaration_verbose, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_declaration_verbose, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declaration_verbose, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(476),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(638),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_declaration_verbose, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declaration_verbose, 5),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_the_line, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_the_line, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_declaration_verbose, 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declaration_verbose, 6),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1, .production_id = 7),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 7),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 7), SHIFT(106),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_type, 1), SHIFT(106),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 36),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 36),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotations, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotations, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2), SHIFT_REPEAT(168),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 7),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 7),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(631),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 37),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 37),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 20),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 20),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_declaration_verbose, 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declaration_verbose, 7),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_default, 6, .production_id = 68),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_default, 6, .production_id = 68),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotations, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotations, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(132),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotations_repeat1, 2), SHIFT_REPEAT(168),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprecated, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_declaration_verbose, 8),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declaration_verbose, 8),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exceptions, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exceptions, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration_verbose_sig, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration_verbose_sig, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_runtime_visible_paramter_annotations_repeat1, 2), SHIFT_REPEAT(425),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_paramter_annotations, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_paramter_annotations, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration_verbose_sig, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration_verbose_sig, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotation, 3, .production_id = 63),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotation, 3, .production_id = 63),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 5, .production_id = 61),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 5, .production_id = 61),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 6, .production_id = 62),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 6, .production_id = 62),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 7, .production_id = 64),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 7, .production_id = 64),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_type_annotation, 8, .production_id = 67),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_type_annotation, 8, .production_id = 67),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_declaration_verbose, 9),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declaration_verbose, 9),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(87),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_parameter_annotation, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_parameter_annotation, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_parameter_annotation_param, 3, .production_id = 63),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_parameter_annotation_param, 3, .production_id = 63),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_declaration_verbose, 10),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declaration_verbose, 10),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_item, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_item, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration_plain_body_item, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain_body_item, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(109),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(113),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 6),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2, .production_id = 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 18),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(539),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_number, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 14),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotations, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 33),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 16),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotations_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotations_repeat1, 2), SHIFT_REPEAT(168),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 7, .production_id = 48),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4, .production_id = 53),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(648),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 34),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 33),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 48),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 32),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 31),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 13),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 31),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 14),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 15),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 32),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 16),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 17),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 34),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 18),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superclass, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superclass, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 13),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 4),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 15),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2, .production_id = 19),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(480),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(328),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 17),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 6),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3, .production_id = 35),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(484),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation, 7),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(331),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_args, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_args, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_name_and_type, 4, .production_id = 59),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(618),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 2),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 65),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 65),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 7),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_class, 2, .production_id = 50),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_string, 2, .production_id = 50),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_ref, 2, .production_id = 51),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4, .production_id = 35),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(119),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3, .production_id = 19),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(630),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(168),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5, .production_id = 53),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_string, 3, .production_id = 50),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_name_and_type, 5, .production_id = 59),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(124),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(125),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_args_repeat1, 2), SHIFT_REPEAT(114),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_args_repeat1, 2),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_utf8, 2, .production_id = 49),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_int, 2, .production_id = 52),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_ref, 3, .production_id = 51),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_interfaces, 2),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_super_interfaces, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_double, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item_type_class, 3, .production_id = 50),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, .production_id = 55),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(612),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5, .production_id = 35),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2), SHIFT_REPEAT(240),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(112),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4, .production_id = 19),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 5, .production_id = 58),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_annotation_element_value_simple, 2),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(377),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(116),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, .production_id = 54),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotation_element_args_repeat1, 2), SHIFT_REPEAT(402),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_runtime_visible_annotation_element_args_repeat1, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3, .production_id = 40),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(453),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 38),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6, .production_id = 53),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2), SHIFT_REPEAT(608),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2, .production_id = 60),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 2, .production_id = 60),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nest_host, 3),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg, 2),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_arg, 3),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 7),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 4),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_type_annotation_repeat1, 4),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_args_repeat1, 3, .production_id = 63),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 4),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 66),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, .production_id = 65),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 65),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 65),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 65),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 7, .production_id = 57),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 5, .production_id = 54),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 5, .production_id = 55),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5, .production_id = 19),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2, .production_id = 21),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 4, .production_id = 12),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain_body, 3),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 4, .production_id = 9),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 4, .production_id = 8),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 4, .production_id = 11),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 10),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 22),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_tag, 1),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_args, 4),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 9),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 8),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 23),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain_body, 2),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 24),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 25),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 26),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 3, .production_id = 39),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 3, .production_id = 2),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 27),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3, .production_id = 2),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_index, 4),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 6, .production_id = 47),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 5, .production_id = 25),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6, .production_id = 35),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 11),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 5, .production_id = 26),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 6, .production_id = 58),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 7, .production_id = 56),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_args, 3),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 6, .production_id = 46),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 5, .production_id = 28),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 5, .production_id = 22),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 5, .production_id = 29),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 5, .production_id = 30),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 6, .production_id = 45),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_keyword, 1),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, .production_id = 40),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_visible_annotation_element_args, 2),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration_plain, 6, .production_id = 42),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 7, .production_id = 53),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 44),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 43),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1265] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 42),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 41),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
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
