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
#define STATE_COUNT 503
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
  [70] = 70,
  [71] = 71,
  [72] = 19,
  [73] = 71,
  [74] = 71,
  [75] = 55,
  [76] = 58,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 88,
  [91] = 89,
  [92] = 87,
  [93] = 93,
  [94] = 89,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 11,
  [101] = 12,
  [102] = 24,
  [103] = 103,
  [104] = 18,
  [105] = 105,
  [106] = 29,
  [107] = 30,
  [108] = 33,
  [109] = 35,
  [110] = 31,
  [111] = 34,
  [112] = 26,
  [113] = 28,
  [114] = 11,
  [115] = 19,
  [116] = 116,
  [117] = 117,
  [118] = 43,
  [119] = 119,
  [120] = 39,
  [121] = 36,
  [122] = 12,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 18,
  [130] = 24,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 26,
  [138] = 138,
  [139] = 139,
  [140] = 99,
  [141] = 141,
  [142] = 34,
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
  [154] = 35,
  [155] = 33,
  [156] = 156,
  [157] = 30,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 27,
  [168] = 168,
  [169] = 169,
  [170] = 29,
  [171] = 171,
  [172] = 172,
  [173] = 28,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 31,
  [179] = 43,
  [180] = 180,
  [181] = 181,
  [182] = 25,
  [183] = 27,
  [184] = 39,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 187,
  [189] = 189,
  [190] = 190,
  [191] = 36,
  [192] = 192,
  [193] = 187,
  [194] = 134,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 15,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 172,
  [209] = 209,
  [210] = 210,
  [211] = 19,
  [212] = 212,
  [213] = 213,
  [214] = 13,
  [215] = 215,
  [216] = 46,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 10,
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
  [239] = 46,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 17,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 23,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 22,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 199,
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
  [274] = 271,
  [275] = 275,
  [276] = 276,
  [277] = 271,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 38,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 294,
  [296] = 296,
  [297] = 281,
  [298] = 212,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 270,
  [303] = 303,
  [304] = 281,
  [305] = 272,
  [306] = 306,
  [307] = 217,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 44,
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
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 336,
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
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 331,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 328,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 373,
  [375] = 375,
  [376] = 328,
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
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 373,
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
  [430] = 99,
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
  [481] = 480,
  [482] = 482,
  [483] = 483,
  [484] = 461,
  [485] = 485,
  [486] = 486,
  [487] = 450,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 435,
  [492] = 492,
  [493] = 493,
  [494] = 480,
  [495] = 461,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 467,
  [502] = 434,
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
      if (lookahead == 'R') ADVANCE(592);
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
  [18] = {.lex_state = 278},
  [19] = {.lex_state = 278},
  [20] = {.lex_state = 278},
  [21] = {.lex_state = 278},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 62},
  [24] = {.lex_state = 278},
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
  [72] = {.lex_state = 276},
  [73] = {.lex_state = 278},
  [74] = {.lex_state = 278},
  [75] = {.lex_state = 278},
  [76] = {.lex_state = 278},
  [77] = {.lex_state = 278},
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
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 276},
  [101] = {.lex_state = 276},
  [102] = {.lex_state = 276},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 276},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 276},
  [107] = {.lex_state = 276},
  [108] = {.lex_state = 276},
  [109] = {.lex_state = 276},
  [110] = {.lex_state = 276},
  [111] = {.lex_state = 276},
  [112] = {.lex_state = 276},
  [113] = {.lex_state = 276},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 276},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 276},
  [119] = {.lex_state = 276},
  [120] = {.lex_state = 276},
  [121] = {.lex_state = 276},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 278},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 276},
  [127] = {.lex_state = 276},
  [128] = {.lex_state = 276},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 276},
  [132] = {.lex_state = 276},
  [133] = {.lex_state = 276},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 276},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 278},
  [139] = {.lex_state = 275},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 276},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 278},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 278},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 276},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
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
  [171] = {.lex_state = 275},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 278},
  [175] = {.lex_state = 278},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 278},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 276},
  [181] = {.lex_state = 276},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 278},
  [186] = {.lex_state = 278},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 276},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 276},
  [198] = {.lex_state = 12},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 276},
  [202] = {.lex_state = 12},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 275},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 276},
  [208] = {.lex_state = 276},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 275},
  [211] = {.lex_state = 278},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 275},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 276},
  [219] = {.lex_state = 276},
  [220] = {.lex_state = 276},
  [221] = {.lex_state = 276},
  [222] = {.lex_state = 614},
  [223] = {.lex_state = 276},
  [224] = {.lex_state = 275},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 275},
  [227] = {.lex_state = 615},
  [228] = {.lex_state = 276},
  [229] = {.lex_state = 276},
  [230] = {.lex_state = 275},
  [231] = {.lex_state = 276},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 276},
  [234] = {.lex_state = 276},
  [235] = {.lex_state = 615},
  [236] = {.lex_state = 276},
  [237] = {.lex_state = 276},
  [238] = {.lex_state = 276},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 276},
  [241] = {.lex_state = 276},
  [242] = {.lex_state = 615},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 276},
  [246] = {.lex_state = 12},
  [247] = {.lex_state = 276},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 276},
  [250] = {.lex_state = 11},
  [251] = {.lex_state = 64},
  [252] = {.lex_state = 615},
  [253] = {.lex_state = 276},
  [254] = {.lex_state = 276},
  [255] = {.lex_state = 64},
  [256] = {.lex_state = 276},
  [257] = {.lex_state = 275},
  [258] = {.lex_state = 276},
  [259] = {.lex_state = 276},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 278},
  [264] = {.lex_state = 616},
  [265] = {.lex_state = 275},
  [266] = {.lex_state = 275},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 275},
  [270] = {.lex_state = 278},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 275},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 278},
  [276] = {.lex_state = 275},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 278},
  [279] = {.lex_state = 278},
  [280] = {.lex_state = 278},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 12},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 275},
  [286] = {.lex_state = 276},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 275},
  [289] = {.lex_state = 275},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 278},
  [293] = {.lex_state = 278},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 615},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 276},
  [299] = {.lex_state = 275},
  [300] = {.lex_state = 231},
  [301] = {.lex_state = 278},
  [302] = {.lex_state = 278},
  [303] = {.lex_state = 276},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 276},
  [309] = {.lex_state = 278},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 278},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 275},
  [321] = {.lex_state = 278},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 615},
  [326] = {.lex_state = 278},
  [327] = {.lex_state = 276},
  [328] = {.lex_state = 278},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 617},
  [333] = {.lex_state = 278},
  [334] = {.lex_state = 278},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 275},
  [339] = {.lex_state = 276},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 276},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 278},
  [345] = {.lex_state = 278},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 276},
  [350] = {.lex_state = 275},
  [351] = {.lex_state = 278},
  [352] = {.lex_state = 617},
  [353] = {.lex_state = 231},
  [354] = {.lex_state = 278},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 278},
  [358] = {.lex_state = 276},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 276},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 11},
  [365] = {.lex_state = 278},
  [366] = {.lex_state = 275},
  [367] = {.lex_state = 232},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 278},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 278},
  [374] = {.lex_state = 278},
  [375] = {.lex_state = 617},
  [376] = {.lex_state = 278},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 11},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 276},
  [383] = {.lex_state = 278},
  [384] = {.lex_state = 617},
  [385] = {.lex_state = 11},
  [386] = {.lex_state = 276},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 278},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 278},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 275},
  [393] = {.lex_state = 275},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 11},
  [396] = {.lex_state = 11},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 275},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 275},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 275},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 275},
  [406] = {.lex_state = 11},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 11},
  [409] = {.lex_state = 11},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 278},
  [412] = {.lex_state = 275},
  [413] = {.lex_state = 275},
  [414] = {.lex_state = 278},
  [415] = {.lex_state = 278},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 11},
  [418] = {.lex_state = 236},
  [419] = {.lex_state = 278},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 276},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 276},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 275},
  [430] = {.lex_state = 11},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 278},
  [433] = {.lex_state = 275},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 237},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 278},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 276},
  [446] = {.lex_state = 275},
  [447] = {.lex_state = 10},
  [448] = {.lex_state = 617},
  [449] = {.lex_state = 231},
  [450] = {.lex_state = 0},
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
  [464] = {.lex_state = 275},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 275},
  [467] = {.lex_state = 10},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 276},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 233},
  [479] = {.lex_state = 275},
  [480] = {.lex_state = 275},
  [481] = {.lex_state = 275},
  [482] = {.lex_state = 276},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 276},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 234},
  [489] = {.lex_state = 276},
  [490] = {.lex_state = 276},
  [491] = {.lex_state = 237},
  [492] = {.lex_state = 235},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 275},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 278},
  [497] = {.lex_state = 276},
  [498] = {.lex_state = 276},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 10},
  [502] = {.lex_state = 0},
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
    [sym_source_file] = STATE(500),
    [sym__source_file_verbose] = STATE(499),
    [sym__source_file_plain] = STATE(499),
    [sym_header_info_compile] = STATE(66),
    [sym_header_info] = STATE(382),
    [sym_header] = STATE(68),
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
    STATE(26), 1,
      sym_generic_type,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(83), 1,
      sym_modifiers,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(474), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(177), 4,
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
    STATE(26), 1,
      sym_generic_type,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(83), 1,
      sym_modifiers,
    STATE(6), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(391), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(177), 4,
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
    STATE(26), 1,
      sym_generic_type,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(83), 1,
      sym_modifiers,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(474), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(177), 4,
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
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(26), 1,
      sym_generic_type,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(83), 1,
      sym_modifiers,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(474), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(177), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(27), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(24), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    ACTIONS(30), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(26), 1,
      sym_generic_type,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(83), 1,
      sym_modifiers,
    STATE(6), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(391), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(177), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(38), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(35), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [295] = 11,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(26), 1,
      sym_generic_type,
    STATE(55), 1,
      aux_sym_modifiers_repeat1,
    STATE(83), 1,
      sym_modifiers,
    STATE(3), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(391), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(177), 4,
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
  [351] = 12,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_AnnotationDefault_COLON,
    ACTIONS(47), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    STATE(9), 1,
      sym_code_def,
    STATE(20), 1,
      sym_annotation_default,
    STATE(42), 1,
      sym_deprecated,
    STATE(54), 1,
      sym_exceptions,
    STATE(60), 1,
      sym_runtime_visible_annotations,
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
  [406] = 10,
    ACTIONS(45), 1,
      anon_sym_AnnotationDefault_COLON,
    ACTIONS(47), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_annotation_default,
    STATE(41), 1,
      sym_deprecated,
    STATE(51), 1,
      sym_exceptions,
    STATE(64), 1,
      sym_runtime_visible_annotations,
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
  [455] = 4,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(63), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(59), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [491] = 5,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(30), 1,
      sym_type_arguments,
    ACTIONS(67), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(65), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [529] = 5,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_DOT,
    STATE(35), 1,
      sym_type_arguments,
    ACTIONS(75), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [567] = 4,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(81), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [603] = 4,
    ACTIONS(87), 1,
      anon_sym_line,
    STATE(14), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(85), 5,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [639] = 4,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(95), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [675] = 4,
    ACTIONS(101), 1,
      anon_sym_line,
    STATE(14), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(99), 5,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(97), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [711] = 2,
    ACTIONS(95), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [742] = 2,
    ACTIONS(105), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [773] = 2,
    ACTIONS(109), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [804] = 8,
    ACTIONS(47), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_deprecated,
    STATE(51), 1,
      sym_exceptions,
    STATE(64), 1,
      sym_runtime_visible_annotations,
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
  [847] = 8,
    ACTIONS(47), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_deprecated,
    STATE(52), 1,
      sym_exceptions,
    STATE(59), 1,
      sym_runtime_visible_annotations,
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
  [890] = 2,
    ACTIONS(117), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(115), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [921] = 3,
    ACTIONS(123), 1,
      sym_flag_value,
    ACTIONS(121), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
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
  [954] = 2,
    ACTIONS(127), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(125), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [985] = 7,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      aux_sym_dimensions_repeat1,
    STATE(36), 1,
      sym_dimensions,
    STATE(44), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(133), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
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
  [1026] = 3,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(75), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [1058] = 5,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      aux_sym_dimensions_repeat1,
    STATE(36), 1,
      sym_dimensions,
    ACTIONS(139), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(137), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1094] = 4,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(143), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
    ACTIONS(141), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
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
    ACTIONS(150), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(148), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1158] = 2,
    ACTIONS(154), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(152), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1188] = 2,
    ACTIONS(158), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [1218] = 2,
    ACTIONS(162), 5,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(160), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1248] = 2,
    ACTIONS(166), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(164), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1278] = 4,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(170), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
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
  [1312] = 2,
    ACTIONS(174), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
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
  [1342] = 2,
    ACTIONS(178), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [1371] = 6,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_exceptions,
    STATE(63), 1,
      sym_runtime_visible_annotations,
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
  [1408] = 2,
    ACTIONS(186), 5,
      anon_sym_RBRACE,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      sym_number,
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
  [1437] = 2,
    ACTIONS(190), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [1466] = 2,
    ACTIONS(194), 5,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [1495] = 6,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_exceptions,
    STATE(59), 1,
      sym_runtime_visible_annotations,
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
  [1532] = 6,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_exceptions,
    STATE(64), 1,
      sym_runtime_visible_annotations,
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
  [1569] = 2,
    ACTIONS(143), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(141), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1598] = 4,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(198), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
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
  [1630] = 2,
    ACTIONS(202), 4,
      anon_sym_RBRACE,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
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
  [1658] = 4,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(139), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(137), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1690] = 4,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      sym_number,
    STATE(50), 1,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(207), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
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
    ACTIONS(215), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
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
  [1748] = 4,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_runtime_visible_annotations,
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
  [1779] = 4,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym_number,
    STATE(50), 1,
      aux_sym_runtime_visible_annotations_repeat1,
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
  [1810] = 4,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_runtime_visible_annotations,
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
  [1841] = 4,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_runtime_visible_annotations,
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
  [1872] = 2,
    ACTIONS(230), 3,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
    ACTIONS(228), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1899] = 4,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_runtime_visible_annotations,
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
  [1930] = 4,
    ACTIONS(234), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(58), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(232), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(236), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [1960] = 2,
    ACTIONS(240), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(238), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1986] = 2,
    ACTIONS(244), 2,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(242), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [2012] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(58), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(246), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
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
  [2042] = 2,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
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
  [2067] = 2,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
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
  [2092] = 2,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
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
  [2117] = 2,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
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
  [2142] = 2,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
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
  [2167] = 2,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
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
  [2192] = 2,
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
  [2217] = 7,
    ACTIONS(265), 1,
      sym_interface_keyword,
    ACTIONS(269), 1,
      anon_sym_class,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    STATE(275), 1,
      sym_modifiers,
    STATE(357), 1,
      sym_class_keyword,
    STATE(493), 2,
      sym_class_def_plain,
      sym_interface_def_plain,
    ACTIONS(267), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2251] = 8,
    ACTIONS(271), 1,
      anon_sym_Utf8,
    ACTIONS(273), 1,
      anon_sym_Class,
    ACTIONS(275), 1,
      anon_sym_String,
    ACTIONS(279), 1,
      anon_sym_NameAndType,
    ACTIONS(283), 1,
      anon_sym_Integer,
    ACTIONS(281), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(277), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(231), 8,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
      sym__constant_pool_item_type_int,
  [2286] = 7,
    ACTIONS(269), 1,
      anon_sym_class,
    ACTIONS(285), 1,
      sym_interface_keyword,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    STATE(280), 1,
      sym_modifiers,
    STATE(342), 1,
      sym_class_info_def,
    STATE(344), 1,
      sym_class_keyword,
    ACTIONS(267), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2319] = 5,
    STATE(69), 1,
      aux_sym_inner_classes_repeat1,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    STATE(389), 1,
      sym_modifiers,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(289), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2347] = 5,
    STATE(69), 1,
      aux_sym_inner_classes_repeat1,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    STATE(389), 1,
      sym_modifiers,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(267), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2375] = 9,
    ACTIONS(294), 1,
      sym__identifier,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_QMARK,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(304), 1,
      sym_wildcard,
    STATE(188), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2411] = 2,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 16,
      ts_builtin_sym_end,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_InnerClasses_COLON,
      anon_sym_EQ2,
  [2433] = 9,
    ACTIONS(294), 1,
      sym__identifier,
    ACTIONS(298), 1,
      anon_sym_QMARK,
    ACTIONS(302), 1,
      anon_sym_GT,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(281), 1,
      sym_wildcard,
    STATE(193), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2469] = 9,
    ACTIONS(294), 1,
      sym__identifier,
    ACTIONS(298), 1,
      anon_sym_QMARK,
    ACTIONS(304), 1,
      anon_sym_GT,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(297), 1,
      sym_wildcard,
    STATE(187), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2505] = 3,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(234), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(306), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2528] = 3,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(248), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(308), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2551] = 8,
    ACTIONS(294), 1,
      sym__identifier,
    ACTIONS(298), 1,
      anon_sym_QMARK,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(318), 1,
      sym_wildcard,
    STATE(213), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2584] = 8,
    ACTIONS(294), 1,
      sym__identifier,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(287), 1,
      sym_vararg,
    STATE(141), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2617] = 7,
    ACTIONS(313), 1,
      sym__identifier,
    STATE(114), 1,
      sym_identifier,
    STATE(122), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_generic_type,
    STATE(246), 1,
      sym_interface_type_list,
    STATE(134), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(315), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2647] = 7,
    ACTIONS(294), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(316), 1,
      sym_vararg,
    STATE(196), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2677] = 7,
    ACTIONS(294), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(246), 1,
      sym_interface_type_list,
    STATE(194), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2707] = 4,
    STATE(70), 1,
      aux_sym_inner_classes_repeat1,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    STATE(389), 1,
      sym_modifiers,
    ACTIONS(267), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2731] = 7,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(317), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(26), 1,
      sym_generic_type,
    STATE(145), 4,
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
  [2761] = 6,
    ACTIONS(294), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(152), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2788] = 1,
    ACTIONS(319), 14,
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
  [2805] = 6,
    ACTIONS(294), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(200), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2832] = 6,
    ACTIONS(294), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(182), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2859] = 6,
    ACTIONS(313), 1,
      sym__identifier,
    STATE(114), 1,
      sym_identifier,
    STATE(122), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_generic_type,
    STATE(172), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(315), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2886] = 6,
    ACTIONS(294), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(183), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2913] = 6,
    ACTIONS(294), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(208), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2940] = 6,
    ACTIONS(313), 1,
      sym__identifier,
    STATE(114), 1,
      sym_identifier,
    STATE(122), 1,
      sym_scoped_type_identifier,
    STATE(137), 1,
      sym_generic_type,
    STATE(167), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(315), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2967] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(26), 1,
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
  [2994] = 1,
    ACTIONS(321), 14,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [3011] = 6,
    ACTIONS(7), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_scoped_type_identifier,
    STATE(26), 1,
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
  [3038] = 6,
    ACTIONS(294), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(101), 1,
      sym_scoped_type_identifier,
    STATE(112), 1,
      sym_generic_type,
    STATE(195), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(300), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [3065] = 1,
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
  [3082] = 11,
    ACTIONS(325), 1,
      anon_sym_extends,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(329), 1,
      anon_sym_LT,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(333), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(105), 1,
      sym_type_parameters,
    STATE(125), 1,
      sym_superclass,
    STATE(176), 1,
      sym_super_interfaces,
    STATE(136), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3118] = 11,
    ACTIONS(325), 1,
      anon_sym_extends,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(329), 1,
      anon_sym_LT,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(337), 1,
      anon_sym_Constantpool_COLON,
    STATE(103), 1,
      sym_type_parameters,
    STATE(117), 1,
      sym_superclass,
    STATE(147), 1,
      sym_super_interfaces,
    STATE(146), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3154] = 2,
    ACTIONS(341), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(339), 11,
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
  [3171] = 4,
    ACTIONS(343), 1,
      anon_sym_LT,
    ACTIONS(345), 1,
      anon_sym_DOT,
    STATE(107), 1,
      sym_type_arguments,
    ACTIONS(67), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3192] = 4,
    ACTIONS(343), 1,
      anon_sym_LT,
    ACTIONS(347), 1,
      anon_sym_DOT,
    STATE(109), 1,
      sym_type_arguments,
    ACTIONS(75), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3213] = 2,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 10,
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
  [3229] = 9,
    ACTIONS(325), 1,
      anon_sym_extends,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(349), 1,
      anon_sym_Constantpool_COLON,
    STATE(123), 1,
      sym_superclass,
    STATE(165), 1,
      sym_super_interfaces,
    STATE(166), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3259] = 2,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 10,
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
  [3275] = 9,
    ACTIONS(325), 1,
      anon_sym_extends,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(337), 1,
      anon_sym_Constantpool_COLON,
    STATE(117), 1,
      sym_superclass,
    STATE(147), 1,
      sym_super_interfaces,
    STATE(146), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3305] = 2,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(150), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3320] = 2,
    ACTIONS(152), 1,
      anon_sym_DOT,
    ACTIONS(154), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3335] = 2,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(166), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3350] = 2,
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
  [3365] = 2,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3380] = 3,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(170), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [3397] = 2,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(75), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3412] = 3,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(143), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [3429] = 5,
    ACTIONS(356), 1,
      anon_sym_LT,
    ACTIONS(358), 1,
      anon_sym_DOT,
    STATE(157), 1,
      sym_type_arguments,
    ACTIONS(65), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(67), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [3449] = 2,
    ACTIONS(107), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(109), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3463] = 9,
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
    STATE(139), 1,
      sym_nested_members,
    STATE(224), 1,
      sym_nest_host,
    STATE(288), 1,
      sym_inner_classes,
    STATE(463), 1,
      sym_footer_annotations,
  [3491] = 7,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(370), 1,
      anon_sym_Constantpool_COLON,
    STATE(161), 1,
      sym_super_interfaces,
    STATE(162), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3515] = 1,
    ACTIONS(143), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3527] = 9,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(364), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(368), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      sym_nested_members,
    STATE(204), 1,
      sym_nest_host,
    STATE(289), 1,
      sym_inner_classes,
    STATE(444), 1,
      sym_footer_annotations,
  [3555] = 1,
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
  [3567] = 1,
    ACTIONS(178), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [3579] = 5,
    ACTIONS(356), 1,
      anon_sym_LT,
    ACTIONS(374), 1,
      anon_sym_DOT,
    STATE(154), 1,
      sym_type_arguments,
    ACTIONS(73), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(75), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [3599] = 7,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(376), 1,
      anon_sym_Constantpool_COLON,
    STATE(158), 1,
      sym_super_interfaces,
    STATE(159), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3623] = 5,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    STATE(262), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(394), 1,
      sym_runtime_annotation_element_value,
    STATE(399), 2,
      sym_runtime_annotation_element_value_array,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(380), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [3643] = 7,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(382), 1,
      anon_sym_Constantpool_COLON,
    STATE(151), 1,
      sym_super_interfaces,
    STATE(150), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3667] = 7,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_Signature_COLON,
    ACTIONS(388), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(116), 1,
      sym_source_file_def,
    STATE(358), 1,
      sym_signature,
    STATE(462), 1,
      sym_footer,
    STATE(220), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [3690] = 1,
    ACTIONS(390), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [3701] = 8,
    ACTIONS(392), 1,
      anon_sym_extends,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      anon_sym_LT,
    STATE(197), 1,
      sym_type_parameters,
    STATE(233), 1,
      sym_superclass,
    STATE(313), 1,
      sym_super_interfaces,
    STATE(485), 1,
      sym_class_def_plain_body,
  [3726] = 2,
    ACTIONS(103), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(105), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3739] = 2,
    ACTIONS(125), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(127), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3752] = 8,
    ACTIONS(392), 1,
      anon_sym_extends,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      anon_sym_LT,
    STATE(181), 1,
      sym_type_parameters,
    STATE(253), 1,
      sym_superclass,
    STATE(368), 1,
      sym_super_interfaces,
    STATE(471), 1,
      sym_class_def_plain_body,
  [3777] = 7,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_Signature_COLON,
    ACTIONS(388), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(116), 1,
      sym_source_file_def,
    STATE(358), 1,
      sym_signature,
    STATE(477), 1,
      sym_footer,
    STATE(126), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [3800] = 8,
    ACTIONS(392), 1,
      anon_sym_extends,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      anon_sym_LT,
    STATE(192), 1,
      sym_type_parameters,
    STATE(247), 1,
      sym_superclass,
    STATE(370), 1,
      sym_super_interfaces,
    STATE(470), 1,
      sym_class_def_plain_body,
  [3825] = 7,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(142), 1,
      aux_sym_dimensions_repeat1,
    STATE(191), 1,
      sym_dimensions,
    STATE(217), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(402), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3848] = 8,
    ACTIONS(392), 1,
      anon_sym_extends,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      anon_sym_LT,
    STATE(180), 1,
      sym_type_parameters,
    STATE(234), 1,
      sym_superclass,
    STATE(324), 1,
      sym_super_interfaces,
    STATE(483), 1,
      sym_class_def_plain_body,
  [3873] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(337), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3891] = 3,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(73), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(75), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [3905] = 4,
    ACTIONS(294), 1,
      sym__identifier,
    STATE(268), 1,
      sym_scoped_identifier,
    ACTIONS(408), 2,
      anon_sym_open,
      anon_sym_module,
    STATE(407), 3,
      sym_identifier,
      sym__name,
      sym__reserved_identifier,
  [3921] = 7,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(368), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_nest_host,
    STATE(289), 1,
      sym_inner_classes,
    STATE(444), 1,
      sym_footer_annotations,
  [3943] = 1,
    ACTIONS(339), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_of,
      sym_comment,
  [3953] = 7,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    ACTIONS(414), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(282), 1,
      aux_sym_args_repeat1,
  [3975] = 4,
    ACTIONS(404), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(168), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(170), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3991] = 4,
    ACTIONS(418), 1,
      anon_sym_POUND,
    STATE(479), 1,
      sym__hash_number,
    STATE(143), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(416), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4007] = 5,
    ACTIONS(421), 1,
      anon_sym_flags_COLON,
    ACTIONS(424), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(426), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4025] = 7,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      sym__identifier,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      aux_sym_dimensions_repeat1,
    STATE(36), 1,
      sym_dimensions,
    STATE(291), 1,
      sym_identifier,
    STATE(292), 1,
      sym_args,
  [4047] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(349), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4065] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(433), 1,
      anon_sym_Constantpool_COLON,
    STATE(163), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4083] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(435), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4101] = 1,
    ACTIONS(437), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [4111] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(439), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4129] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(441), 1,
      anon_sym_Constantpool_COLON,
    STATE(160), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4147] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(445), 1,
      anon_sym_AMP,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(244), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4167] = 4,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(479), 1,
      sym__hash_number,
    STATE(168), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(447), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4183] = 2,
    ACTIONS(172), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(174), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4195] = 2,
    ACTIONS(164), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(166), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4207] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(451), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4225] = 2,
    ACTIONS(152), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(154), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4237] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(453), 1,
      anon_sym_Constantpool_COLON,
    STATE(169), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4255] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(455), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4273] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(457), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4291] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(459), 1,
      anon_sym_Constantpool_COLON,
    STATE(156), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4309] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(461), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4327] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(463), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4345] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(465), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4363] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(467), 1,
      anon_sym_Constantpool_COLON,
    STATE(164), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4381] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(469), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4399] = 5,
    ACTIONS(137), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(404), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      aux_sym_dimensions_repeat1,
    STATE(191), 1,
      sym_dimensions,
    ACTIONS(139), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4417] = 4,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(479), 1,
      sym__hash_number,
    STATE(143), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(471), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4433] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(473), 1,
      anon_sym_Constantpool_COLON,
    STATE(144), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4451] = 2,
    ACTIONS(148), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(150), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4463] = 7,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(368), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_nest_host,
    STATE(269), 1,
      sym_inner_classes,
    STATE(431), 1,
      sym_footer_annotations,
  [4485] = 5,
    ACTIONS(404), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      aux_sym_dimensions_repeat1,
    STATE(191), 1,
      sym_dimensions,
    ACTIONS(477), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(479), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4503] = 4,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(141), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(143), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4519] = 3,
    ACTIONS(486), 1,
      sym__identifier,
    STATE(175), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(484), 4,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4533] = 3,
    ACTIONS(490), 1,
      sym__identifier,
    STATE(175), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(488), 4,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4547] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(493), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(283), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4565] = 7,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      sym__identifier,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      aux_sym_dimensions_repeat1,
    STATE(36), 1,
      sym_dimensions,
    STATE(263), 1,
      sym_args,
    STATE(319), 1,
      sym_identifier,
  [4587] = 2,
    ACTIONS(156), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(158), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4599] = 2,
    ACTIONS(141), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(143), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4610] = 6,
    ACTIONS(392), 1,
      anon_sym_extends,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym_superclass,
    STATE(370), 1,
      sym_super_interfaces,
    STATE(470), 1,
      sym_class_def_plain_body,
  [4629] = 6,
    ACTIONS(392), 1,
      anon_sym_extends,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(237), 1,
      sym_superclass,
    STATE(317), 1,
      sym_super_interfaces,
    STATE(455), 1,
      sym_class_def_plain_body,
  [4648] = 6,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(311), 1,
      aux_sym_interface_type_list_repeat1,
  [4667] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(139), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [4682] = 2,
    ACTIONS(188), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(190), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4693] = 3,
    STATE(262), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(363), 1,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(380), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [4706] = 3,
    STATE(262), 1,
      sym_runtime_annotation_element_value_tag,
    STATE(284), 1,
      sym__runtime_annotation_element_value_simple,
    ACTIONS(380), 4,
      anon_sym_e,
      anon_sym_s,
      anon_sym_c,
      anon_sym_AT,
  [4719] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_GT,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(277), 1,
      aux_sym_type_arguments_repeat1,
  [4738] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_GT,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(274), 1,
      aux_sym_type_arguments_repeat1,
  [4757] = 5,
    ACTIONS(503), 1,
      anon_sym_extends,
    ACTIONS(507), 1,
      sym_super,
    STATE(86), 1,
      sym_extends,
    STATE(359), 1,
      sym__wildcard_bounds,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4774] = 5,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(206), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(511), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4791] = 2,
    ACTIONS(176), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(178), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4802] = 6,
    ACTIONS(392), 1,
      anon_sym_extends,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_superclass,
    STATE(315), 1,
      sym_super_interfaces,
    STATE(452), 1,
      sym_class_def_plain_body,
  [4821] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_GT,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(271), 1,
      aux_sym_type_arguments_repeat1,
  [4840] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    STATE(307), 1,
      aux_sym_interface_type_list_repeat1,
  [4859] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(519), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [4874] = 5,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4891] = 6,
    ACTIONS(392), 1,
      anon_sym_extends,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_superclass,
    STATE(368), 1,
      sym_super_interfaces,
    STATE(471), 1,
      sym_class_def_plain_body,
  [4910] = 3,
    ACTIONS(525), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(523), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4922] = 2,
    ACTIONS(531), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(529), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [4932] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(533), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4946] = 1,
    ACTIONS(535), 5,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4954] = 4,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(205), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(537), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4968] = 4,
    ACTIONS(90), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(95), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4982] = 5,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      sym_inner_classes,
    STATE(431), 1,
      sym_footer_annotations,
  [4998] = 4,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(205), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(547), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5012] = 4,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(205), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(551), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5026] = 2,
    ACTIONS(557), 1,
      sym_comment,
    ACTIONS(555), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5036] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(479), 2,
      anon_sym_implements,
      anon_sym_LBRACE,
  [5050] = 4,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(202), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(551), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5064] = 4,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      sym_number,
    STATE(215), 1,
      aux_sym_code_info_repeat1,
    STATE(245), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5078] = 2,
    ACTIONS(107), 1,
      sym__identifier,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [5088] = 2,
    ACTIONS(565), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(563), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [5098] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      aux_sym_dimensions_repeat1,
    STATE(121), 1,
      sym_dimensions,
    ACTIONS(567), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5112] = 4,
    ACTIONS(79), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(81), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5126] = 4,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      sym_number,
    STATE(266), 1,
      aux_sym_code_info_repeat1,
    STATE(228), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5140] = 4,
    ACTIONS(137), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(139), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5154] = 4,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(216), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(574), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5168] = 4,
    ACTIONS(503), 1,
      anon_sym_extends,
    STATE(84), 1,
      sym_extends,
    STATE(340), 1,
      sym_type_bound,
    ACTIONS(578), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5182] = 2,
    ACTIONS(582), 1,
      sym_comment,
    ACTIONS(580), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5192] = 3,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(587), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(220), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [5204] = 2,
    ACTIONS(591), 1,
      sym_comment,
    ACTIONS(589), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5214] = 5,
    ACTIONS(593), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(595), 1,
      sym__path_segment,
    ACTIONS(597), 1,
      anon_sym_SLASH,
    STATE(497), 1,
      sym__rest_of_the_line,
    STATE(498), 1,
      sym_file_path,
  [5230] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(599), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5240] = 5,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      sym_inner_classes,
    STATE(444), 1,
      sym_footer_annotations,
  [5256] = 4,
    ACTIONS(59), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(63), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5270] = 5,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(366), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    STATE(299), 1,
      sym_inner_classes,
    STATE(424), 1,
      sym_footer_annotations,
  [5286] = 4,
    ACTIONS(593), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(605), 1,
      anon_sym_SLASH,
    STATE(296), 1,
      aux_sym_file_path_repeat1,
    STATE(486), 1,
      sym__rest_of_the_line,
  [5299] = 3,
    ACTIONS(561), 1,
      sym_number,
    ACTIONS(607), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(258), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5310] = 4,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(377), 1,
      sym_super_interfaces,
    STATE(437), 1,
      sym_class_def_plain_body,
  [5323] = 3,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
    ACTIONS(611), 1,
      sym_number,
    STATE(257), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
  [5334] = 1,
    ACTIONS(613), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5341] = 2,
    ACTIONS(617), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(615), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5350] = 4,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(381), 1,
      sym_super_interfaces,
    STATE(473), 1,
      sym_class_def_plain_body,
  [5363] = 4,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_super_interfaces,
    STATE(469), 1,
      sym_class_def_plain_body,
  [5376] = 4,
    ACTIONS(593), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(605), 1,
      anon_sym_SLASH,
    STATE(296), 1,
      aux_sym_file_path_repeat1,
    STATE(476), 1,
      sym__rest_of_the_line,
  [5389] = 1,
    ACTIONS(619), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5396] = 4,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(379), 1,
      sym_super_interfaces,
    STATE(440), 1,
      sym_class_def_plain_body,
  [5409] = 1,
    ACTIONS(621), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5416] = 3,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(139), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [5427] = 1,
    ACTIONS(626), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5434] = 1,
    ACTIONS(628), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5441] = 4,
    ACTIONS(593), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(605), 1,
      anon_sym_SLASH,
    STATE(235), 1,
      aux_sym_file_path_repeat1,
    STATE(486), 1,
      sym__rest_of_the_line,
  [5454] = 2,
    ACTIONS(90), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(95), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5463] = 3,
    ACTIONS(445), 1,
      anon_sym_AMP,
    STATE(248), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(630), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5474] = 3,
    ACTIONS(561), 1,
      sym_number,
    ACTIONS(632), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(258), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5485] = 2,
    ACTIONS(636), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(634), 3,
      anon_sym_LBRACE,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5494] = 4,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(323), 1,
      sym_super_interfaces,
    STATE(454), 1,
      sym_class_def_plain_body,
  [5507] = 3,
    ACTIONS(638), 1,
      anon_sym_AMP,
    STATE(248), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(519), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5518] = 1,
    ACTIONS(641), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5525] = 4,
    ACTIONS(643), 1,
      anon_sym_POUND,
    ACTIONS(645), 1,
      sym_number,
    ACTIONS(647), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym__endl,
  [5538] = 3,
    ACTIONS(119), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(651), 1,
      sym_flag_value,
    ACTIONS(121), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5549] = 4,
    ACTIONS(593), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(605), 1,
      anon_sym_SLASH,
    STATE(227), 1,
      aux_sym_file_path_repeat1,
    STATE(490), 1,
      sym__rest_of_the_line,
  [5562] = 4,
    ACTIONS(394), 1,
      anon_sym_implements,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(387), 1,
      sym_super_interfaces,
    STATE(457), 1,
      sym_class_def_plain_body,
  [5575] = 1,
    ACTIONS(653), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5582] = 2,
    ACTIONS(115), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(117), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5591] = 1,
    ACTIONS(655), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5598] = 3,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
    ACTIONS(659), 1,
      sym_number,
    STATE(257), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
  [5609] = 3,
    ACTIONS(662), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(664), 1,
      sym_number,
    STATE(258), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5620] = 1,
    ACTIONS(531), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [5626] = 3,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym_ref_const_pool_item,
    STATE(434), 1,
      sym__hash_number,
  [5636] = 3,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_GT,
    STATE(261), 1,
      aux_sym_type_parameters_repeat1,
  [5646] = 3,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(290), 1,
      sym_ref_const_pool_item,
    STATE(502), 1,
      sym__hash_number,
  [5656] = 3,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    ACTIONS(674), 1,
      anon_sym_throws,
    STATE(442), 1,
      sym_method_throws,
  [5666] = 3,
    ACTIONS(593), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(676), 1,
      sym__path_segment,
    STATE(490), 1,
      sym__rest_of_the_line,
  [5676] = 3,
    ACTIONS(449), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      sym_number,
    STATE(198), 1,
      sym__hash_number,
  [5686] = 3,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      sym_number,
    STATE(266), 1,
      aux_sym_code_info_repeat1,
  [5696] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [5706] = 3,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      anon_sym_DOT,
    STATE(409), 1,
      sym_runtime_annotation_args,
  [5716] = 3,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    STATE(424), 1,
      sym_footer_annotations,
  [5726] = 3,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(305), 1,
      sym_type_parameter,
  [5736] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_GT,
    STATE(306), 1,
      aux_sym_type_arguments_repeat1,
  [5746] = 3,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_GT,
    STATE(294), 1,
      aux_sym_type_parameters_repeat1,
  [5756] = 1,
    ACTIONS(700), 3,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_InnerClasses_COLON,
  [5762] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_GT,
    STATE(306), 1,
      aux_sym_type_arguments_repeat1,
  [5772] = 3,
    ACTIONS(269), 1,
      anon_sym_class,
    ACTIONS(704), 1,
      sym_interface_keyword,
    STATE(333), 1,
      sym_class_keyword,
  [5782] = 2,
    ACTIONS(611), 1,
      sym_number,
    STATE(230), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
  [5790] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_GT,
    STATE(306), 1,
      aux_sym_type_arguments_repeat1,
  [5800] = 2,
    ACTIONS(708), 1,
      anon_sym_line,
    STATE(16), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [5808] = 3,
    ACTIONS(674), 1,
      anon_sym_throws,
    ACTIONS(710), 1,
      anon_sym_SEMI,
    STATE(422), 1,
      sym_method_throws,
  [5818] = 3,
    ACTIONS(269), 1,
      anon_sym_class,
    ACTIONS(712), 1,
      sym_interface_keyword,
    STATE(326), 1,
      sym_class_keyword,
  [5828] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_GT,
    STATE(271), 1,
      aux_sym_type_arguments_repeat1,
  [5838] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_args_repeat1,
  [5848] = 2,
    ACTIONS(718), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(716), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5856] = 3,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
    STATE(312), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [5866] = 3,
    ACTIONS(449), 1,
      anon_sym_POUND,
    ACTIONS(724), 1,
      sym_number,
    STATE(190), 1,
      sym__hash_number,
  [5876] = 1,
    ACTIONS(186), 3,
      anon_sym_RPAREN,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
  [5882] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      aux_sym_args_repeat1,
  [5892] = 3,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(444), 1,
      sym_footer_annotations,
  [5902] = 3,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    STATE(431), 1,
      sym_footer_annotations,
  [5912] = 1,
    ACTIONS(726), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5918] = 3,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(728), 1,
      anon_sym_SEMI,
    STATE(279), 1,
      sym_args,
  [5928] = 3,
    ACTIONS(674), 1,
      anon_sym_throws,
    ACTIONS(730), 1,
      anon_sym_SEMI,
    STATE(428), 1,
      sym_method_throws,
  [5938] = 2,
    ACTIONS(732), 1,
      sym__identifier,
    STATE(174), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [5946] = 3,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_GT,
    STATE(261), 1,
      aux_sym_type_parameters_repeat1,
  [5956] = 3,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_GT,
    STATE(261), 1,
      aux_sym_type_parameters_repeat1,
  [5966] = 3,
    ACTIONS(738), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    STATE(296), 1,
      aux_sym_file_path_repeat1,
  [5976] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_GT,
    STATE(277), 1,
      aux_sym_type_arguments_repeat1,
  [5986] = 1,
    ACTIONS(565), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [5992] = 3,
    ACTIONS(362), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    STATE(420), 1,
      sym_footer_annotations,
  [6002] = 3,
    ACTIONS(745), 1,
      aux_sym_code_info_stat_token1,
    STATE(210), 1,
      sym_code_info_stat,
    STATE(339), 1,
      sym_code_info,
  [6012] = 2,
    STATE(48), 1,
      sym_boolean_literal,
    ACTIONS(747), 2,
      anon_sym_true,
      anon_sym_false,
  [6020] = 3,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(272), 1,
      sym_type_parameter,
  [6030] = 1,
    ACTIONS(749), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6036] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_GT,
    STATE(274), 1,
      aux_sym_type_arguments_repeat1,
  [6046] = 3,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_GT,
    STATE(295), 1,
      aux_sym_type_parameters_repeat1,
  [6056] = 3,
    ACTIONS(567), 1,
      anon_sym_GT,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_type_arguments_repeat1,
  [6066] = 3,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(239), 1,
      aux_sym_interface_type_list_repeat1,
  [6076] = 3,
    ACTIONS(756), 1,
      anon_sym_descriptor_COLON,
    STATE(62), 1,
      sym__method_def_verbose,
    STATE(362), 1,
      sym_descriptor_def,
  [6086] = 3,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(380), 1,
      sym_type_parameter,
  [6096] = 3,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym_args_repeat1,
  [6106] = 3,
    ACTIONS(198), 1,
      anon_sym_SEMI,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_interface_type_list_repeat1,
  [6116] = 3,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_runtime_annotation_element_value_array_repeat1,
  [6126] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(472), 1,
      sym_class_def_plain_body,
  [6133] = 1,
    ACTIONS(763), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [6138] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(436), 1,
      sym_class_def_plain_body,
  [6145] = 1,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6150] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(439), 1,
      sym_class_def_plain_body,
  [6157] = 1,
    ACTIONS(567), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6162] = 2,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(292), 1,
      sym_args,
  [6169] = 2,
    ACTIONS(211), 1,
      sym_number,
    STATE(47), 1,
      aux_sym_runtime_visible_annotations_repeat1,
  [6176] = 2,
    ACTIONS(765), 1,
      anon_sym_throws,
    STATE(57), 1,
      sym_method_throws,
  [6183] = 2,
    ACTIONS(767), 1,
      anon_sym_POUND,
    STATE(419), 1,
      sym__hash_number,
  [6190] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(438), 1,
      sym_class_def_plain_body,
  [6197] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(468), 1,
      sym_class_def_plain_body,
  [6204] = 1,
    ACTIONS(738), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [6209] = 2,
    ACTIONS(769), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
  [6216] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(85), 1,
      sym_header_info_compile,
  [6223] = 2,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(102), 1,
      sym_identifier,
  [6230] = 2,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(412), 1,
      sym__hash_number,
  [6237] = 2,
    ACTIONS(767), 1,
      anon_sym_POUND,
    STATE(207), 1,
      sym__hash_number,
  [6244] = 2,
    ACTIONS(767), 1,
      anon_sym_POUND,
    STATE(127), 1,
      sym__hash_number,
  [6251] = 2,
    ACTIONS(771), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(416), 1,
      sym__rest_of_the_line,
  [6258] = 2,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(133), 1,
      sym_identifier,
  [6265] = 2,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(131), 1,
      sym_identifier,
  [6272] = 1,
    ACTIONS(773), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [6277] = 2,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__wrapped_hex_val,
  [6284] = 2,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(433), 1,
      sym__hash_number,
  [6291] = 1,
    ACTIONS(777), 2,
      ts_builtin_sym_end,
      sym_number,
  [6296] = 2,
    ACTIONS(779), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(40), 1,
      sym_line_number_table_def,
  [6303] = 1,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6308] = 2,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym__wrapped_hex_val,
  [6315] = 2,
    ACTIONS(785), 1,
      anon_sym_Constantpool_COLON,
    STATE(132), 1,
      sym_constant_pool_def,
  [6322] = 1,
    ACTIONS(787), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6327] = 2,
    ACTIONS(769), 1,
      sym__identifier,
    STATE(97), 1,
      sym_identifier,
  [6334] = 2,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(414), 1,
      sym_identifier,
  [6341] = 2,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(410), 1,
      sym__hash_number,
  [6348] = 2,
    ACTIONS(789), 1,
      anon_sym_POUND,
    STATE(406), 1,
      sym__hash_number,
  [6355] = 2,
    ACTIONS(767), 1,
      anon_sym_POUND,
    STATE(405), 1,
      sym__hash_number,
  [6362] = 2,
    ACTIONS(791), 1,
      anon_sym_MD5checksum,
    STATE(327), 1,
      sym_header_info_md5,
  [6369] = 1,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      sym_number,
  [6374] = 1,
    ACTIONS(795), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [6379] = 2,
    ACTIONS(771), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(489), 1,
      sym__rest_of_the_line,
  [6386] = 2,
    ACTIONS(745), 1,
      aux_sym_code_info_stat_token1,
    STATE(366), 1,
      sym_code_info_stat,
  [6393] = 2,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(335), 1,
      sym_identifier,
  [6400] = 2,
    ACTIONS(767), 1,
      anon_sym_POUND,
    STATE(221), 1,
      sym__hash_number,
  [6407] = 2,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(466), 1,
      sym__hash_number,
  [6414] = 2,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(135), 1,
      sym_identifier,
  [6421] = 2,
    ACTIONS(388), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(119), 1,
      sym_source_file_def,
  [6428] = 1,
    ACTIONS(797), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6433] = 2,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(127), 1,
      sym__hash_number,
  [6440] = 2,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(423), 1,
      sym__hash_number,
  [6447] = 2,
    ACTIONS(799), 1,
      anon_sym_flags_COLON,
    STATE(8), 1,
      sym_flag_def,
  [6454] = 1,
    ACTIONS(688), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6459] = 2,
    ACTIONS(801), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym__endl,
  [6466] = 2,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(128), 1,
      sym_identifier,
  [6473] = 1,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      sym_number,
  [6478] = 2,
    ACTIONS(805), 1,
      aux_sym_instruction_token1,
    STATE(378), 1,
      sym_instruction,
  [6485] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(456), 1,
      sym_class_def_plain_body,
  [6492] = 2,
    ACTIONS(807), 1,
      sym__identifier,
    STATE(24), 1,
      sym_identifier,
  [6499] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(453), 1,
      sym_class_def_plain_body,
  [6506] = 2,
    ACTIONS(767), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__hash_number,
  [6513] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(451), 1,
      sym_class_def_plain_body,
  [6520] = 2,
    ACTIONS(769), 1,
      sym__identifier,
    STATE(129), 1,
      sym_identifier,
  [6527] = 2,
    ACTIONS(807), 1,
      sym__identifier,
    STATE(18), 1,
      sym_identifier,
  [6534] = 2,
    ACTIONS(809), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(45), 1,
      sym__rest_of_the_line,
  [6541] = 2,
    ACTIONS(769), 1,
      sym__identifier,
    STATE(130), 1,
      sym_identifier,
  [6548] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(426), 1,
      sym_class_def_plain_body,
  [6555] = 2,
    ACTIONS(811), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym__endl,
  [6562] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(427), 1,
      sym_class_def_plain_body,
  [6569] = 1,
    ACTIONS(670), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6574] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(458), 1,
      sym_class_def_plain_body,
  [6581] = 2,
    ACTIONS(815), 1,
      anon_sym_Lastmodified,
    STATE(349), 1,
      sym_header_info_last_mod,
  [6588] = 1,
    ACTIONS(817), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [6593] = 2,
    ACTIONS(809), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(56), 1,
      sym__rest_of_the_line,
  [6600] = 2,
    ACTIONS(819), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym__endl,
  [6607] = 1,
    ACTIONS(823), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [6612] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(441), 1,
      sym_class_def_plain_body,
  [6619] = 2,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(273), 1,
      sym_identifier,
  [6626] = 2,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(429), 1,
      sym__hash_number,
  [6633] = 2,
    ACTIONS(429), 1,
      sym__identifier,
    STATE(104), 1,
      sym_identifier,
  [6640] = 1,
    ACTIONS(825), 1,
      anon_sym_SEMI,
  [6644] = 1,
    ACTIONS(827), 1,
      sym_number,
  [6648] = 1,
    ACTIONS(829), 1,
      sym_number,
  [6652] = 1,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [6656] = 1,
    ACTIONS(833), 1,
      sym__endl,
  [6660] = 1,
    ACTIONS(835), 1,
      sym__endl,
  [6664] = 1,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [6668] = 1,
    ACTIONS(839), 1,
      anon_sym_COLON2,
  [6672] = 1,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [6676] = 1,
    ACTIONS(843), 1,
      anon_sym_POUND,
  [6680] = 1,
    ACTIONS(845), 1,
      sym_comment,
  [6684] = 1,
    ACTIONS(847), 1,
      sym_descriptor_value,
  [6688] = 1,
    ACTIONS(849), 1,
      sym_number,
  [6692] = 1,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
  [6696] = 1,
    ACTIONS(853), 1,
      anon_sym_LPAREN_RPAREN,
  [6700] = 1,
    ACTIONS(855), 1,
      sym__endl,
  [6704] = 1,
    ACTIONS(857), 1,
      anon_sym_DOT,
  [6708] = 1,
    ACTIONS(859), 1,
      sym__endl,
  [6712] = 1,
    ACTIONS(861), 1,
      sym__endl,
  [6716] = 1,
    ACTIONS(863), 1,
      anon_sym_SEMI,
  [6720] = 1,
    ACTIONS(865), 1,
      anon_sym_COLON,
  [6724] = 1,
    ACTIONS(867), 1,
      anon_sym_EQ,
  [6728] = 1,
    ACTIONS(869), 1,
      sym_number,
  [6732] = 1,
    ACTIONS(871), 1,
      anon_sym_EQ2,
  [6736] = 1,
    ACTIONS(873), 1,
      anon_sym_COLON,
  [6740] = 1,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
  [6744] = 1,
    ACTIONS(877), 1,
      sym__endl,
  [6748] = 1,
    ACTIONS(879), 1,
      aux_sym_annotation_default_token1,
  [6752] = 1,
    ACTIONS(881), 1,
      anon_sym_of,
  [6756] = 1,
    ACTIONS(883), 1,
      ts_builtin_sym_end,
  [6760] = 1,
    ACTIONS(885), 1,
      anon_sym_default_value_COLON,
  [6764] = 1,
    ACTIONS(887), 1,
      anon_sym_SEMI,
  [6768] = 1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
  [6772] = 1,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
  [6776] = 1,
    ACTIONS(891), 1,
      anon_sym_flags_COLON,
  [6780] = 1,
    ACTIONS(893), 1,
      ts_builtin_sym_end,
  [6784] = 1,
    ACTIONS(895), 1,
      ts_builtin_sym_end,
  [6788] = 1,
    ACTIONS(710), 1,
      anon_sym_SEMI,
  [6792] = 1,
    ACTIONS(897), 1,
      anon_sym_EQ,
  [6796] = 1,
    ACTIONS(339), 1,
      sym__endl,
  [6800] = 1,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
  [6804] = 1,
    ACTIONS(899), 1,
      anon_sym_class,
  [6808] = 1,
    ACTIONS(901), 1,
      anon_sym_COLON2,
  [6812] = 1,
    ACTIONS(903), 1,
      anon_sym_DOT,
  [6816] = 1,
    ACTIONS(905), 1,
      sym_flag_value,
  [6820] = 1,
    ACTIONS(907), 1,
      ts_builtin_sym_end,
  [6824] = 1,
    ACTIONS(909), 1,
      ts_builtin_sym_end,
  [6828] = 1,
    ACTIONS(911), 1,
      ts_builtin_sym_end,
  [6832] = 1,
    ACTIONS(913), 1,
      ts_builtin_sym_end,
  [6836] = 1,
    ACTIONS(915), 1,
      ts_builtin_sym_end,
  [6840] = 1,
    ACTIONS(917), 1,
      ts_builtin_sym_end,
  [6844] = 1,
    ACTIONS(730), 1,
      anon_sym_SEMI,
  [6848] = 1,
    ACTIONS(919), 1,
      anon_sym_COLON,
  [6852] = 1,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [6856] = 1,
    ACTIONS(921), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6860] = 1,
    ACTIONS(923), 1,
      sym_number,
  [6864] = 1,
    ACTIONS(925), 1,
      sym_decimal_floating_point_literal,
  [6868] = 1,
    ACTIONS(927), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [6872] = 1,
    ACTIONS(929), 1,
      aux_sym_class_info_item_simple_token1,
  [6876] = 1,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
  [6880] = 1,
    ACTIONS(933), 1,
      ts_builtin_sym_end,
  [6884] = 1,
    ACTIONS(935), 1,
      ts_builtin_sym_end,
  [6888] = 1,
    ACTIONS(937), 1,
      ts_builtin_sym_end,
  [6892] = 1,
    ACTIONS(939), 1,
      ts_builtin_sym_end,
  [6896] = 1,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
  [6900] = 1,
    ACTIONS(943), 1,
      ts_builtin_sym_end,
  [6904] = 1,
    ACTIONS(945), 1,
      ts_builtin_sym_end,
  [6908] = 1,
    ACTIONS(947), 1,
      ts_builtin_sym_end,
  [6912] = 1,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
  [6916] = 1,
    ACTIONS(951), 1,
      anon_sym_SEMI,
  [6920] = 1,
    ACTIONS(953), 1,
      anon_sym_RBRACK,
  [6924] = 1,
    ACTIONS(955), 1,
      ts_builtin_sym_end,
  [6928] = 1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [6932] = 1,
    ACTIONS(957), 1,
      aux_sym_header_info_compile_token1,
  [6936] = 1,
    ACTIONS(959), 1,
      anon_sym_DQUOTE,
  [6940] = 1,
    ACTIONS(961), 1,
      sym_comment,
  [6944] = 1,
    ACTIONS(963), 1,
      sym_hex_value,
  [6948] = 1,
    ACTIONS(965), 1,
      ts_builtin_sym_end,
  [6952] = 1,
    ACTIONS(967), 1,
      ts_builtin_sym_end,
  [6956] = 1,
    ACTIONS(969), 1,
      ts_builtin_sym_end,
  [6960] = 1,
    ACTIONS(971), 1,
      ts_builtin_sym_end,
  [6964] = 1,
    ACTIONS(973), 1,
      ts_builtin_sym_end,
  [6968] = 1,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
  [6972] = 1,
    ACTIONS(977), 1,
      anon_sym_SEMI,
  [6976] = 1,
    ACTIONS(979), 1,
      ts_builtin_sym_end,
  [6980] = 1,
    ACTIONS(981), 1,
      anon_sym_Lastmodified,
  [6984] = 1,
    ACTIONS(983), 1,
      ts_builtin_sym_end,
  [6988] = 1,
    ACTIONS(985), 1,
      aux_sym_source_file_def_token1,
  [6992] = 1,
    ACTIONS(987), 1,
      anon_sym_EQ,
  [6996] = 1,
    ACTIONS(989), 1,
      sym_number,
  [7000] = 1,
    ACTIONS(991), 1,
      sym_number,
  [7004] = 1,
    ACTIONS(993), 1,
      anon_sym_Compiledfrom,
  [7008] = 1,
    ACTIONS(995), 1,
      ts_builtin_sym_end,
  [7012] = 1,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
  [7016] = 1,
    ACTIONS(999), 1,
      ts_builtin_sym_end,
  [7020] = 1,
    ACTIONS(1001), 1,
      anon_sym_Lastmodified,
  [7024] = 1,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
  [7028] = 1,
    ACTIONS(1005), 1,
      sym_md5,
  [7032] = 1,
    ACTIONS(1007), 1,
      anon_sym_MD5checksum,
  [7036] = 1,
    ACTIONS(1009), 1,
      anon_sym_Lastmodified,
  [7040] = 1,
    ACTIONS(1011), 1,
      sym_flag_value,
  [7044] = 1,
    ACTIONS(1013), 1,
      sym__path_segment,
  [7048] = 1,
    ACTIONS(1015), 1,
      ts_builtin_sym_end,
  [7052] = 1,
    ACTIONS(1017), 1,
      sym_number,
  [7056] = 1,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
  [7060] = 1,
    ACTIONS(1021), 1,
      sym__identifier,
  [7064] = 1,
    ACTIONS(1023), 1,
      anon_sym_Lastmodified,
  [7068] = 1,
    ACTIONS(1025), 1,
      anon_sym_Lastmodified,
  [7072] = 1,
    ACTIONS(1027), 1,
      ts_builtin_sym_end,
  [7076] = 1,
    ACTIONS(1029), 1,
      ts_builtin_sym_end,
  [7080] = 1,
    ACTIONS(1031), 1,
      sym_hex_value,
  [7084] = 1,
    ACTIONS(1033), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 351,
  [SMALL_STATE(9)] = 406,
  [SMALL_STATE(10)] = 455,
  [SMALL_STATE(11)] = 491,
  [SMALL_STATE(12)] = 529,
  [SMALL_STATE(13)] = 567,
  [SMALL_STATE(14)] = 603,
  [SMALL_STATE(15)] = 639,
  [SMALL_STATE(16)] = 675,
  [SMALL_STATE(17)] = 711,
  [SMALL_STATE(18)] = 742,
  [SMALL_STATE(19)] = 773,
  [SMALL_STATE(20)] = 804,
  [SMALL_STATE(21)] = 847,
  [SMALL_STATE(22)] = 890,
  [SMALL_STATE(23)] = 921,
  [SMALL_STATE(24)] = 954,
  [SMALL_STATE(25)] = 985,
  [SMALL_STATE(26)] = 1026,
  [SMALL_STATE(27)] = 1058,
  [SMALL_STATE(28)] = 1094,
  [SMALL_STATE(29)] = 1128,
  [SMALL_STATE(30)] = 1158,
  [SMALL_STATE(31)] = 1188,
  [SMALL_STATE(32)] = 1218,
  [SMALL_STATE(33)] = 1248,
  [SMALL_STATE(34)] = 1278,
  [SMALL_STATE(35)] = 1312,
  [SMALL_STATE(36)] = 1342,
  [SMALL_STATE(37)] = 1371,
  [SMALL_STATE(38)] = 1408,
  [SMALL_STATE(39)] = 1437,
  [SMALL_STATE(40)] = 1466,
  [SMALL_STATE(41)] = 1495,
  [SMALL_STATE(42)] = 1532,
  [SMALL_STATE(43)] = 1569,
  [SMALL_STATE(44)] = 1598,
  [SMALL_STATE(45)] = 1630,
  [SMALL_STATE(46)] = 1658,
  [SMALL_STATE(47)] = 1690,
  [SMALL_STATE(48)] = 1721,
  [SMALL_STATE(49)] = 1748,
  [SMALL_STATE(50)] = 1779,
  [SMALL_STATE(51)] = 1810,
  [SMALL_STATE(52)] = 1841,
  [SMALL_STATE(53)] = 1872,
  [SMALL_STATE(54)] = 1899,
  [SMALL_STATE(55)] = 1930,
  [SMALL_STATE(56)] = 1960,
  [SMALL_STATE(57)] = 1986,
  [SMALL_STATE(58)] = 2012,
  [SMALL_STATE(59)] = 2042,
  [SMALL_STATE(60)] = 2067,
  [SMALL_STATE(61)] = 2092,
  [SMALL_STATE(62)] = 2117,
  [SMALL_STATE(63)] = 2142,
  [SMALL_STATE(64)] = 2167,
  [SMALL_STATE(65)] = 2192,
  [SMALL_STATE(66)] = 2217,
  [SMALL_STATE(67)] = 2251,
  [SMALL_STATE(68)] = 2286,
  [SMALL_STATE(69)] = 2319,
  [SMALL_STATE(70)] = 2347,
  [SMALL_STATE(71)] = 2375,
  [SMALL_STATE(72)] = 2411,
  [SMALL_STATE(73)] = 2433,
  [SMALL_STATE(74)] = 2469,
  [SMALL_STATE(75)] = 2505,
  [SMALL_STATE(76)] = 2528,
  [SMALL_STATE(77)] = 2551,
  [SMALL_STATE(78)] = 2584,
  [SMALL_STATE(79)] = 2617,
  [SMALL_STATE(80)] = 2647,
  [SMALL_STATE(81)] = 2677,
  [SMALL_STATE(82)] = 2707,
  [SMALL_STATE(83)] = 2731,
  [SMALL_STATE(84)] = 2761,
  [SMALL_STATE(85)] = 2788,
  [SMALL_STATE(86)] = 2805,
  [SMALL_STATE(87)] = 2832,
  [SMALL_STATE(88)] = 2859,
  [SMALL_STATE(89)] = 2886,
  [SMALL_STATE(90)] = 2913,
  [SMALL_STATE(91)] = 2940,
  [SMALL_STATE(92)] = 2967,
  [SMALL_STATE(93)] = 2994,
  [SMALL_STATE(94)] = 3011,
  [SMALL_STATE(95)] = 3038,
  [SMALL_STATE(96)] = 3065,
  [SMALL_STATE(97)] = 3082,
  [SMALL_STATE(98)] = 3118,
  [SMALL_STATE(99)] = 3154,
  [SMALL_STATE(100)] = 3171,
  [SMALL_STATE(101)] = 3192,
  [SMALL_STATE(102)] = 3213,
  [SMALL_STATE(103)] = 3229,
  [SMALL_STATE(104)] = 3259,
  [SMALL_STATE(105)] = 3275,
  [SMALL_STATE(106)] = 3305,
  [SMALL_STATE(107)] = 3320,
  [SMALL_STATE(108)] = 3335,
  [SMALL_STATE(109)] = 3350,
  [SMALL_STATE(110)] = 3365,
  [SMALL_STATE(111)] = 3380,
  [SMALL_STATE(112)] = 3397,
  [SMALL_STATE(113)] = 3412,
  [SMALL_STATE(114)] = 3429,
  [SMALL_STATE(115)] = 3449,
  [SMALL_STATE(116)] = 3463,
  [SMALL_STATE(117)] = 3491,
  [SMALL_STATE(118)] = 3515,
  [SMALL_STATE(119)] = 3527,
  [SMALL_STATE(120)] = 3555,
  [SMALL_STATE(121)] = 3567,
  [SMALL_STATE(122)] = 3579,
  [SMALL_STATE(123)] = 3599,
  [SMALL_STATE(124)] = 3623,
  [SMALL_STATE(125)] = 3643,
  [SMALL_STATE(126)] = 3667,
  [SMALL_STATE(127)] = 3690,
  [SMALL_STATE(128)] = 3701,
  [SMALL_STATE(129)] = 3726,
  [SMALL_STATE(130)] = 3739,
  [SMALL_STATE(131)] = 3752,
  [SMALL_STATE(132)] = 3777,
  [SMALL_STATE(133)] = 3800,
  [SMALL_STATE(134)] = 3825,
  [SMALL_STATE(135)] = 3848,
  [SMALL_STATE(136)] = 3873,
  [SMALL_STATE(137)] = 3891,
  [SMALL_STATE(138)] = 3905,
  [SMALL_STATE(139)] = 3921,
  [SMALL_STATE(140)] = 3943,
  [SMALL_STATE(141)] = 3953,
  [SMALL_STATE(142)] = 3975,
  [SMALL_STATE(143)] = 3991,
  [SMALL_STATE(144)] = 4007,
  [SMALL_STATE(145)] = 4025,
  [SMALL_STATE(146)] = 4047,
  [SMALL_STATE(147)] = 4065,
  [SMALL_STATE(148)] = 4083,
  [SMALL_STATE(149)] = 4101,
  [SMALL_STATE(150)] = 4111,
  [SMALL_STATE(151)] = 4129,
  [SMALL_STATE(152)] = 4147,
  [SMALL_STATE(153)] = 4167,
  [SMALL_STATE(154)] = 4183,
  [SMALL_STATE(155)] = 4195,
  [SMALL_STATE(156)] = 4207,
  [SMALL_STATE(157)] = 4225,
  [SMALL_STATE(158)] = 4237,
  [SMALL_STATE(159)] = 4255,
  [SMALL_STATE(160)] = 4273,
  [SMALL_STATE(161)] = 4291,
  [SMALL_STATE(162)] = 4309,
  [SMALL_STATE(163)] = 4327,
  [SMALL_STATE(164)] = 4345,
  [SMALL_STATE(165)] = 4363,
  [SMALL_STATE(166)] = 4381,
  [SMALL_STATE(167)] = 4399,
  [SMALL_STATE(168)] = 4417,
  [SMALL_STATE(169)] = 4433,
  [SMALL_STATE(170)] = 4451,
  [SMALL_STATE(171)] = 4463,
  [SMALL_STATE(172)] = 4485,
  [SMALL_STATE(173)] = 4503,
  [SMALL_STATE(174)] = 4519,
  [SMALL_STATE(175)] = 4533,
  [SMALL_STATE(176)] = 4547,
  [SMALL_STATE(177)] = 4565,
  [SMALL_STATE(178)] = 4587,
  [SMALL_STATE(179)] = 4599,
  [SMALL_STATE(180)] = 4610,
  [SMALL_STATE(181)] = 4629,
  [SMALL_STATE(182)] = 4648,
  [SMALL_STATE(183)] = 4667,
  [SMALL_STATE(184)] = 4682,
  [SMALL_STATE(185)] = 4693,
  [SMALL_STATE(186)] = 4706,
  [SMALL_STATE(187)] = 4719,
  [SMALL_STATE(188)] = 4738,
  [SMALL_STATE(189)] = 4757,
  [SMALL_STATE(190)] = 4774,
  [SMALL_STATE(191)] = 4791,
  [SMALL_STATE(192)] = 4802,
  [SMALL_STATE(193)] = 4821,
  [SMALL_STATE(194)] = 4840,
  [SMALL_STATE(195)] = 4859,
  [SMALL_STATE(196)] = 4874,
  [SMALL_STATE(197)] = 4891,
  [SMALL_STATE(198)] = 4910,
  [SMALL_STATE(199)] = 4922,
  [SMALL_STATE(200)] = 4932,
  [SMALL_STATE(201)] = 4946,
  [SMALL_STATE(202)] = 4954,
  [SMALL_STATE(203)] = 4968,
  [SMALL_STATE(204)] = 4982,
  [SMALL_STATE(205)] = 4998,
  [SMALL_STATE(206)] = 5012,
  [SMALL_STATE(207)] = 5026,
  [SMALL_STATE(208)] = 5036,
  [SMALL_STATE(209)] = 5050,
  [SMALL_STATE(210)] = 5064,
  [SMALL_STATE(211)] = 5078,
  [SMALL_STATE(212)] = 5088,
  [SMALL_STATE(213)] = 5098,
  [SMALL_STATE(214)] = 5112,
  [SMALL_STATE(215)] = 5126,
  [SMALL_STATE(216)] = 5140,
  [SMALL_STATE(217)] = 5154,
  [SMALL_STATE(218)] = 5168,
  [SMALL_STATE(219)] = 5182,
  [SMALL_STATE(220)] = 5192,
  [SMALL_STATE(221)] = 5204,
  [SMALL_STATE(222)] = 5214,
  [SMALL_STATE(223)] = 5230,
  [SMALL_STATE(224)] = 5240,
  [SMALL_STATE(225)] = 5256,
  [SMALL_STATE(226)] = 5270,
  [SMALL_STATE(227)] = 5286,
  [SMALL_STATE(228)] = 5299,
  [SMALL_STATE(229)] = 5310,
  [SMALL_STATE(230)] = 5323,
  [SMALL_STATE(231)] = 5334,
  [SMALL_STATE(232)] = 5341,
  [SMALL_STATE(233)] = 5350,
  [SMALL_STATE(234)] = 5363,
  [SMALL_STATE(235)] = 5376,
  [SMALL_STATE(236)] = 5389,
  [SMALL_STATE(237)] = 5396,
  [SMALL_STATE(238)] = 5409,
  [SMALL_STATE(239)] = 5416,
  [SMALL_STATE(240)] = 5427,
  [SMALL_STATE(241)] = 5434,
  [SMALL_STATE(242)] = 5441,
  [SMALL_STATE(243)] = 5454,
  [SMALL_STATE(244)] = 5463,
  [SMALL_STATE(245)] = 5474,
  [SMALL_STATE(246)] = 5485,
  [SMALL_STATE(247)] = 5494,
  [SMALL_STATE(248)] = 5507,
  [SMALL_STATE(249)] = 5518,
  [SMALL_STATE(250)] = 5525,
  [SMALL_STATE(251)] = 5538,
  [SMALL_STATE(252)] = 5549,
  [SMALL_STATE(253)] = 5562,
  [SMALL_STATE(254)] = 5575,
  [SMALL_STATE(255)] = 5582,
  [SMALL_STATE(256)] = 5591,
  [SMALL_STATE(257)] = 5598,
  [SMALL_STATE(258)] = 5609,
  [SMALL_STATE(259)] = 5620,
  [SMALL_STATE(260)] = 5626,
  [SMALL_STATE(261)] = 5636,
  [SMALL_STATE(262)] = 5646,
  [SMALL_STATE(263)] = 5656,
  [SMALL_STATE(264)] = 5666,
  [SMALL_STATE(265)] = 5676,
  [SMALL_STATE(266)] = 5686,
  [SMALL_STATE(267)] = 5696,
  [SMALL_STATE(268)] = 5706,
  [SMALL_STATE(269)] = 5716,
  [SMALL_STATE(270)] = 5726,
  [SMALL_STATE(271)] = 5736,
  [SMALL_STATE(272)] = 5746,
  [SMALL_STATE(273)] = 5756,
  [SMALL_STATE(274)] = 5762,
  [SMALL_STATE(275)] = 5772,
  [SMALL_STATE(276)] = 5782,
  [SMALL_STATE(277)] = 5790,
  [SMALL_STATE(278)] = 5800,
  [SMALL_STATE(279)] = 5808,
  [SMALL_STATE(280)] = 5818,
  [SMALL_STATE(281)] = 5828,
  [SMALL_STATE(282)] = 5838,
  [SMALL_STATE(283)] = 5848,
  [SMALL_STATE(284)] = 5856,
  [SMALL_STATE(285)] = 5866,
  [SMALL_STATE(286)] = 5876,
  [SMALL_STATE(287)] = 5882,
  [SMALL_STATE(288)] = 5892,
  [SMALL_STATE(289)] = 5902,
  [SMALL_STATE(290)] = 5912,
  [SMALL_STATE(291)] = 5918,
  [SMALL_STATE(292)] = 5928,
  [SMALL_STATE(293)] = 5938,
  [SMALL_STATE(294)] = 5946,
  [SMALL_STATE(295)] = 5956,
  [SMALL_STATE(296)] = 5966,
  [SMALL_STATE(297)] = 5976,
  [SMALL_STATE(298)] = 5986,
  [SMALL_STATE(299)] = 5992,
  [SMALL_STATE(300)] = 6002,
  [SMALL_STATE(301)] = 6012,
  [SMALL_STATE(302)] = 6020,
  [SMALL_STATE(303)] = 6030,
  [SMALL_STATE(304)] = 6036,
  [SMALL_STATE(305)] = 6046,
  [SMALL_STATE(306)] = 6056,
  [SMALL_STATE(307)] = 6066,
  [SMALL_STATE(308)] = 6076,
  [SMALL_STATE(309)] = 6086,
  [SMALL_STATE(310)] = 6096,
  [SMALL_STATE(311)] = 6106,
  [SMALL_STATE(312)] = 6116,
  [SMALL_STATE(313)] = 6126,
  [SMALL_STATE(314)] = 6133,
  [SMALL_STATE(315)] = 6138,
  [SMALL_STATE(316)] = 6145,
  [SMALL_STATE(317)] = 6150,
  [SMALL_STATE(318)] = 6157,
  [SMALL_STATE(319)] = 6162,
  [SMALL_STATE(320)] = 6169,
  [SMALL_STATE(321)] = 6176,
  [SMALL_STATE(322)] = 6183,
  [SMALL_STATE(323)] = 6190,
  [SMALL_STATE(324)] = 6197,
  [SMALL_STATE(325)] = 6204,
  [SMALL_STATE(326)] = 6209,
  [SMALL_STATE(327)] = 6216,
  [SMALL_STATE(328)] = 6223,
  [SMALL_STATE(329)] = 6230,
  [SMALL_STATE(330)] = 6237,
  [SMALL_STATE(331)] = 6244,
  [SMALL_STATE(332)] = 6251,
  [SMALL_STATE(333)] = 6258,
  [SMALL_STATE(334)] = 6265,
  [SMALL_STATE(335)] = 6272,
  [SMALL_STATE(336)] = 6277,
  [SMALL_STATE(337)] = 6284,
  [SMALL_STATE(338)] = 6291,
  [SMALL_STATE(339)] = 6296,
  [SMALL_STATE(340)] = 6303,
  [SMALL_STATE(341)] = 6308,
  [SMALL_STATE(342)] = 6315,
  [SMALL_STATE(343)] = 6322,
  [SMALL_STATE(344)] = 6327,
  [SMALL_STATE(345)] = 6334,
  [SMALL_STATE(346)] = 6341,
  [SMALL_STATE(347)] = 6348,
  [SMALL_STATE(348)] = 6355,
  [SMALL_STATE(349)] = 6362,
  [SMALL_STATE(350)] = 6369,
  [SMALL_STATE(351)] = 6374,
  [SMALL_STATE(352)] = 6379,
  [SMALL_STATE(353)] = 6386,
  [SMALL_STATE(354)] = 6393,
  [SMALL_STATE(355)] = 6400,
  [SMALL_STATE(356)] = 6407,
  [SMALL_STATE(357)] = 6414,
  [SMALL_STATE(358)] = 6421,
  [SMALL_STATE(359)] = 6428,
  [SMALL_STATE(360)] = 6433,
  [SMALL_STATE(361)] = 6440,
  [SMALL_STATE(362)] = 6447,
  [SMALL_STATE(363)] = 6454,
  [SMALL_STATE(364)] = 6459,
  [SMALL_STATE(365)] = 6466,
  [SMALL_STATE(366)] = 6473,
  [SMALL_STATE(367)] = 6478,
  [SMALL_STATE(368)] = 6485,
  [SMALL_STATE(369)] = 6492,
  [SMALL_STATE(370)] = 6499,
  [SMALL_STATE(371)] = 6506,
  [SMALL_STATE(372)] = 6513,
  [SMALL_STATE(373)] = 6520,
  [SMALL_STATE(374)] = 6527,
  [SMALL_STATE(375)] = 6534,
  [SMALL_STATE(376)] = 6541,
  [SMALL_STATE(377)] = 6548,
  [SMALL_STATE(378)] = 6555,
  [SMALL_STATE(379)] = 6562,
  [SMALL_STATE(380)] = 6569,
  [SMALL_STATE(381)] = 6574,
  [SMALL_STATE(382)] = 6581,
  [SMALL_STATE(383)] = 6588,
  [SMALL_STATE(384)] = 6593,
  [SMALL_STATE(385)] = 6600,
  [SMALL_STATE(386)] = 6607,
  [SMALL_STATE(387)] = 6612,
  [SMALL_STATE(388)] = 6619,
  [SMALL_STATE(389)] = 6626,
  [SMALL_STATE(390)] = 6633,
  [SMALL_STATE(391)] = 6640,
  [SMALL_STATE(392)] = 6644,
  [SMALL_STATE(393)] = 6648,
  [SMALL_STATE(394)] = 6652,
  [SMALL_STATE(395)] = 6656,
  [SMALL_STATE(396)] = 6660,
  [SMALL_STATE(397)] = 6664,
  [SMALL_STATE(398)] = 6668,
  [SMALL_STATE(399)] = 6672,
  [SMALL_STATE(400)] = 6676,
  [SMALL_STATE(401)] = 6680,
  [SMALL_STATE(402)] = 6684,
  [SMALL_STATE(403)] = 6688,
  [SMALL_STATE(404)] = 6692,
  [SMALL_STATE(405)] = 6696,
  [SMALL_STATE(406)] = 6700,
  [SMALL_STATE(407)] = 6704,
  [SMALL_STATE(408)] = 6708,
  [SMALL_STATE(409)] = 6712,
  [SMALL_STATE(410)] = 6716,
  [SMALL_STATE(411)] = 6720,
  [SMALL_STATE(412)] = 6724,
  [SMALL_STATE(413)] = 6728,
  [SMALL_STATE(414)] = 6732,
  [SMALL_STATE(415)] = 6736,
  [SMALL_STATE(416)] = 6740,
  [SMALL_STATE(417)] = 6744,
  [SMALL_STATE(418)] = 6748,
  [SMALL_STATE(419)] = 6752,
  [SMALL_STATE(420)] = 6756,
  [SMALL_STATE(421)] = 6760,
  [SMALL_STATE(422)] = 6764,
  [SMALL_STATE(423)] = 6768,
  [SMALL_STATE(424)] = 6772,
  [SMALL_STATE(425)] = 6776,
  [SMALL_STATE(426)] = 6780,
  [SMALL_STATE(427)] = 6784,
  [SMALL_STATE(428)] = 6788,
  [SMALL_STATE(429)] = 6792,
  [SMALL_STATE(430)] = 6796,
  [SMALL_STATE(431)] = 6800,
  [SMALL_STATE(432)] = 6804,
  [SMALL_STATE(433)] = 6808,
  [SMALL_STATE(434)] = 6812,
  [SMALL_STATE(435)] = 6816,
  [SMALL_STATE(436)] = 6820,
  [SMALL_STATE(437)] = 6824,
  [SMALL_STATE(438)] = 6828,
  [SMALL_STATE(439)] = 6832,
  [SMALL_STATE(440)] = 6836,
  [SMALL_STATE(441)] = 6840,
  [SMALL_STATE(442)] = 6844,
  [SMALL_STATE(443)] = 6848,
  [SMALL_STATE(444)] = 6852,
  [SMALL_STATE(445)] = 6856,
  [SMALL_STATE(446)] = 6860,
  [SMALL_STATE(447)] = 6864,
  [SMALL_STATE(448)] = 6868,
  [SMALL_STATE(449)] = 6872,
  [SMALL_STATE(450)] = 6876,
  [SMALL_STATE(451)] = 6880,
  [SMALL_STATE(452)] = 6884,
  [SMALL_STATE(453)] = 6888,
  [SMALL_STATE(454)] = 6892,
  [SMALL_STATE(455)] = 6896,
  [SMALL_STATE(456)] = 6900,
  [SMALL_STATE(457)] = 6904,
  [SMALL_STATE(458)] = 6908,
  [SMALL_STATE(459)] = 6912,
  [SMALL_STATE(460)] = 6916,
  [SMALL_STATE(461)] = 6920,
  [SMALL_STATE(462)] = 6924,
  [SMALL_STATE(463)] = 6928,
  [SMALL_STATE(464)] = 6932,
  [SMALL_STATE(465)] = 6936,
  [SMALL_STATE(466)] = 6940,
  [SMALL_STATE(467)] = 6944,
  [SMALL_STATE(468)] = 6948,
  [SMALL_STATE(469)] = 6952,
  [SMALL_STATE(470)] = 6956,
  [SMALL_STATE(471)] = 6960,
  [SMALL_STATE(472)] = 6964,
  [SMALL_STATE(473)] = 6968,
  [SMALL_STATE(474)] = 6972,
  [SMALL_STATE(475)] = 6976,
  [SMALL_STATE(476)] = 6980,
  [SMALL_STATE(477)] = 6984,
  [SMALL_STATE(478)] = 6988,
  [SMALL_STATE(479)] = 6992,
  [SMALL_STATE(480)] = 6996,
  [SMALL_STATE(481)] = 7000,
  [SMALL_STATE(482)] = 7004,
  [SMALL_STATE(483)] = 7008,
  [SMALL_STATE(484)] = 7012,
  [SMALL_STATE(485)] = 7016,
  [SMALL_STATE(486)] = 7020,
  [SMALL_STATE(487)] = 7024,
  [SMALL_STATE(488)] = 7028,
  [SMALL_STATE(489)] = 7032,
  [SMALL_STATE(490)] = 7036,
  [SMALL_STATE(491)] = 7040,
  [SMALL_STATE(492)] = 7044,
  [SMALL_STATE(493)] = 7048,
  [SMALL_STATE(494)] = 7052,
  [SMALL_STATE(495)] = 7056,
  [SMALL_STATE(496)] = 7060,
  [SMALL_STATE(497)] = 7064,
  [SMALL_STATE(498)] = 7068,
  [SMALL_STATE(499)] = 7072,
  [SMALL_STATE(500)] = 7076,
  [SMALL_STATE(501)] = 7080,
  [SMALL_STATE(502)] = 7084,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(19),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(55),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(39),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(55),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(39),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(403),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(491),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 11),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 11),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(484),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 7),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_the_line, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_the_line, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_default, 6, .production_id = 17),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_default, 6, .production_id = 17),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(94),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotations, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotations, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprecated, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2), SHIFT_REPEAT(415),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 6, .production_id = 17),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 6, .production_id = 17),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exceptions, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exceptions, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(58),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 7),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_item, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_item, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(75),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(76),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(461),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 9),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(480),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(341),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(285),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 6),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 8),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 13),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 9),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 8),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 5),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 10),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 10),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 7, .production_id = 13),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superclass, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superclass, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(495),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(211),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(435),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(449),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4, .production_id = 16),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(91),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 2),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2, .production_id = 15),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(7),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2, .production_id = 15),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_annotations, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3, .production_id = 15),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(89),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3, .production_id = 15),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5, .production_id = 16),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_interfaces, 2),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_super_interfaces, 2),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(95),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2, .production_id = 14),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_int, 2, .production_id = 14),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_annotations_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_annotations_repeat1, 2), SHIFT_REPEAT(443),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(411),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(309),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(353),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2), SHIFT_REPEAT(185),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_annotation_element_value_array_repeat1, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nest_host, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_annotation_element_value_simple, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(492),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(77),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(80),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 18),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_annotation, 12),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 3),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_tag, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_element_value_array, 4),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_args, 6, .production_id = 19),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 7, .production_id = 13),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 7, .production_id = 13),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 10),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 9),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 8),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 10),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 9),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 8),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 4),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 6),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 5),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 6),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 5),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 4),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_keyword, 1),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1029] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
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
