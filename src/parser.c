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
#define STATE_COUNT 486
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 205
#define ALIAS_COUNT 1
#define TOKEN_COUNT 100
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 13
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
  anon_sym_DOT = 50,
  anon_sym_QMARK = 51,
  sym_super = 52,
  anon_sym_int = 53,
  anon_sym_char = 54,
  anon_sym_void = 55,
  anon_sym_double = 56,
  anon_sym_float = 57,
  anon_sym_byte = 58,
  anon_sym_open = 59,
  anon_sym_module = 60,
  sym_number = 61,
  anon_sym_Signature_COLON = 62,
  anon_sym_SourceFile_COLON_DQUOTE = 63,
  aux_sym_source_file_def_token1 = 64,
  anon_sym_DQUOTE = 65,
  anon_sym_NestMembers_COLON = 66,
  anon_sym_InnerClasses_COLON = 67,
  anon_sym_EQ = 68,
  anon_sym_of = 69,
  anon_sym_NestHost_COLON = 70,
  anon_sym_class = 71,
  anon_sym_e = 72,
  anon_sym_EQ2 = 73,
  sym_comment = 74,
  anon_sym_Constantpool_COLON = 75,
  anon_sym_Utf8 = 76,
  aux_sym__constant_pool_item_type_utf8_token1 = 77,
  anon_sym_Class = 78,
  anon_sym_String = 79,
  anon_sym_Methodref = 80,
  anon_sym_Fieldref = 81,
  anon_sym_InterfaceMethodref = 82,
  anon_sym_NameAndType = 83,
  anon_sym_Double = 84,
  anon_sym_Float = 85,
  anon_sym_Integer = 86,
  sym_decimal_floating_point_literal = 87,
  aux_sym_class_info_item_simple_token1 = 88,
  anon_sym_Lastmodified = 89,
  sym_md5 = 90,
  anon_sym_MD5checksum = 91,
  anon_sym_Compiledfrom = 92,
  aux_sym_header_info_compile_token1 = 93,
  sym__path_segment = 94,
  anon_sym_SLASH = 95,
  sym__endl = 96,
  anon_sym_Classfile = 97,
  anon_sym_true = 98,
  anon_sym_false = 99,
  sym_source_file = 100,
  sym__source_file_verbose = 101,
  sym__source_file_plain = 102,
  sym_class_def_plain = 103,
  sym_interface_def_plain = 104,
  sym_superclass = 105,
  sym_super_interfaces = 106,
  sym_interface_type_list = 107,
  sym_class_def_plain_body = 108,
  sym_class_def_plain_body_item = 109,
  sym_field_def = 110,
  sym_method_def = 111,
  sym_method_throws = 112,
  sym__method_def_verbose = 113,
  sym_annotation_default = 114,
  sym_deprecated = 115,
  sym_runtime_visible_annotations = 116,
  sym_exceptions = 117,
  sym_static_block_def = 118,
  sym_type_parameters = 119,
  sym_type_parameter = 120,
  sym_type_bound = 121,
  sym_modifiers = 122,
  sym_code_def = 123,
  sym_code_info = 124,
  sym_line_number_table_def = 125,
  sym_numered_line = 126,
  sym_numered_instruction = 127,
  sym_instruction = 128,
  sym_code_info_stat = 129,
  sym_descriptor_def = 130,
  sym_flag_def = 131,
  sym__wrapped_hex_val = 132,
  sym_args = 133,
  sym__type = 134,
  sym__simple_type = 135,
  sym_array_type = 136,
  sym_dimensions = 137,
  sym_scoped_type_identifier = 138,
  sym_generic_type = 139,
  sym_type_arguments = 140,
  sym_wildcard = 141,
  sym__wildcard_bounds = 142,
  sym_extends = 143,
  sym_primitive_type = 144,
  sym_block = 145,
  sym__block_item = 146,
  sym_identifier = 147,
  sym_scoped_identifier = 148,
  sym__name = 149,
  sym__reserved_identifier = 150,
  sym_footer = 151,
  sym_signature = 152,
  sym_source_file_def = 153,
  sym_nested_members = 154,
  sym_inner_classes = 155,
  sym_nest_host = 156,
  sym_footer_annotations = 157,
  sym_footer_runtime_annotation = 158,
  sym_runtime_annotation_args = 159,
  sym_constant_pool_def = 160,
  sym__hash_number = 161,
  sym_constant_pool_item = 162,
  sym_ref_const_pool_item = 163,
  sym__constant_pool_item_type = 164,
  sym__constant_pool_item_type_utf8 = 165,
  sym__constant_pool_item_type_class = 166,
  sym__constant_pool_item_type_string = 167,
  sym__constant_pool_item_type_ref = 168,
  sym__constant_pool_item_type_name_and_type = 169,
  sym__constant_pool_item_type_double = 170,
  sym__constant_pool_item_type_int = 171,
  sym_class_keyword = 172,
  sym_class_info_def = 173,
  sym_class_info_item = 174,
  sym_class_info_item_simple = 175,
  sym_header_info_last_mod = 176,
  sym_header_info_md5 = 177,
  sym_header_info_compile = 178,
  sym_file_path = 179,
  sym__rest_of_the_line = 180,
  sym_header_info = 181,
  sym_header = 182,
  sym_boolean_literal = 183,
  aux_sym__source_file_verbose_repeat1 = 184,
  aux_sym_interface_type_list_repeat1 = 185,
  aux_sym_class_def_plain_body_repeat1 = 186,
  aux_sym_runtime_visible_annotations_repeat1 = 187,
  aux_sym_type_parameters_repeat1 = 188,
  aux_sym_type_bound_repeat1 = 189,
  aux_sym_modifiers_repeat1 = 190,
  aux_sym_code_info_repeat1 = 191,
  aux_sym_code_info_repeat2 = 192,
  aux_sym_line_number_table_def_repeat1 = 193,
  aux_sym_flag_def_repeat1 = 194,
  aux_sym_dimensions_repeat1 = 195,
  aux_sym_type_arguments_repeat1 = 196,
  aux_sym_block_repeat1 = 197,
  aux_sym_nested_members_repeat1 = 198,
  aux_sym_inner_classes_repeat1 = 199,
  aux_sym_footer_annotations_repeat1 = 200,
  aux_sym_constant_pool_def_repeat1 = 201,
  aux_sym_class_info_def_repeat1 = 202,
  aux_sym_class_info_item_simple_repeat1 = 203,
  aux_sym_file_path_repeat1 = 204,
  alias_sym_type_identifier = 205,
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
  [aux_sym_dimensions_repeat1] = "dimensions_repeat1",
  [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_nested_members_repeat1] = "nested_members_repeat1",
  [aux_sym_inner_classes_repeat1] = "inner_classes_repeat1",
  [aux_sym_footer_annotations_repeat1] = "footer_annotations_repeat1",
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
  [aux_sym_dimensions_repeat1] = aux_sym_dimensions_repeat1,
  [aux_sym_type_arguments_repeat1] = aux_sym_type_arguments_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_nested_members_repeat1] = aux_sym_nested_members_repeat1,
  [aux_sym_inner_classes_repeat1] = aux_sym_inner_classes_repeat1,
  [aux_sym_footer_annotations_repeat1] = aux_sym_footer_annotations_repeat1,
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
  [71] = 70,
  [72] = 72,
  [73] = 70,
  [74] = 57,
  [75] = 56,
  [76] = 76,
  [77] = 20,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 79,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 85,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 89,
  [94] = 94,
  [95] = 84,
  [96] = 96,
  [97] = 97,
  [98] = 13,
  [99] = 14,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 19,
  [104] = 17,
  [105] = 26,
  [106] = 106,
  [107] = 107,
  [108] = 27,
  [109] = 14,
  [110] = 24,
  [111] = 20,
  [112] = 32,
  [113] = 29,
  [114] = 114,
  [115] = 30,
  [116] = 116,
  [117] = 13,
  [118] = 31,
  [119] = 33,
  [120] = 120,
  [121] = 121,
  [122] = 37,
  [123] = 123,
  [124] = 124,
  [125] = 39,
  [126] = 126,
  [127] = 17,
  [128] = 19,
  [129] = 129,
  [130] = 130,
  [131] = 40,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 33,
  [136] = 31,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 29,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 32,
  [145] = 25,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 102,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 30,
  [154] = 26,
  [155] = 27,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 24,
  [165] = 25,
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
  [179] = 21,
  [180] = 37,
  [181] = 176,
  [182] = 182,
  [183] = 183,
  [184] = 176,
  [185] = 185,
  [186] = 186,
  [187] = 40,
  [188] = 188,
  [189] = 121,
  [190] = 190,
  [191] = 191,
  [192] = 39,
  [193] = 11,
  [194] = 10,
  [195] = 195,
  [196] = 196,
  [197] = 20,
  [198] = 198,
  [199] = 199,
  [200] = 166,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 12,
  [210] = 210,
  [211] = 211,
  [212] = 43,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 43,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 23,
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
  [250] = 15,
  [251] = 22,
  [252] = 252,
  [253] = 253,
  [254] = 196,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 28,
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
  [273] = 258,
  [274] = 274,
  [275] = 262,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 258,
  [280] = 280,
  [281] = 272,
  [282] = 282,
  [283] = 283,
  [284] = 208,
  [285] = 285,
  [286] = 286,
  [287] = 261,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 272,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 45,
  [299] = 299,
  [300] = 260,
  [301] = 210,
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
  [324] = 313,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 330,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 326,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 330,
  [344] = 344,
  [345] = 345,
  [346] = 326,
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
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 322,
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
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
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
  [413] = 102,
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
  [464] = 423,
  [465] = 465,
  [466] = 466,
  [467] = 410,
  [468] = 468,
  [469] = 469,
  [470] = 449,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 468,
  [475] = 475,
  [476] = 476,
  [477] = 423,
  [478] = 410,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 378,
  [485] = 466,
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
      if (lookahead == '"') ADVANCE(602);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '&') ADVANCE(318);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(607);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '?') ADVANCE(419);
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
          lookahead == ' ') SKIP(273)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(595);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(599);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(495);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(595);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(605);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(313);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(595);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(609);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(608);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(228);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(329);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(606);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(598);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(326);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(603);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(604);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(610);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(610);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(320);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(311);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(292);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'g') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'D') ADVANCE(362);
      if (lookahead == 'E') ADVANCE(410);
      if (lookahead == 'R') ADVANCE(409);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(595);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(164);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(351);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 64:
      if (lookahead == 'C') ADVANCE(141);
      END_STATE();
    case 65:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(137);
      END_STATE();
    case 67:
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == 'M') ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(223);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'V') ADVANCE(135);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(225);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(622);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(624);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(625);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 225:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 226:
      if (lookahead == 'x') ADVANCE(214);
      END_STATE();
    case 227:
      if (lookahead == '}') ADVANCE(315);
      END_STATE();
    case 228:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(228);
      END_STATE();
    case 229:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(230)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(231)
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(232)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(233)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(623);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 272:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 273:
      if (eof) ADVANCE(280);
      if (lookahead == '"') ADVANCE(602);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '&') ADVANCE(318);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(605);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '?') ADVANCE(419);
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
          lookahead == ' ') SKIP(273)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(595);
      END_STATE();
    case 274:
      if (eof) ADVANCE(280);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'I') ADVANCE(521);
      if (lookahead == 'N') ADVANCE(490);
      if (lookahead == 'R') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(595);
      END_STATE();
    case 275:
      if (eof) ADVANCE(280);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'I') ADVANCE(521);
      if (lookahead == 'N') ADVANCE(490);
      if (lookahead == 'R') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(595);
      END_STATE();
    case 276:
      if (eof) ADVANCE(280);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '&') ADVANCE(318);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(607);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(158);
      if (lookahead == 'L') ADVANCE(80);
      if (lookahead == 'M') ADVANCE(65);
      if (lookahead == 'N') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(220);
      if (lookahead == 'S') ADVANCE(128);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 277:
      if (eof) ADVANCE(280);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '&') ADVANCE(318);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(158);
      if (lookahead == 'L') ADVANCE(80);
      if (lookahead == 'M') ADVANCE(65);
      if (lookahead == 'N') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(220);
      if (lookahead == 'S') ADVANCE(128);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 278:
      if (eof) ADVANCE(280);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(605);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == 'A') ADVANCE(517);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(469);
      if (lookahead == 'E') ADVANCE(593);
      if (lookahead == 'I') ADVANCE(521);
      if (lookahead == 'N') ADVANCE(490);
      if (lookahead == 'R') ADVANCE(590);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(595);
      END_STATE();
    case 279:
      if (eof) ADVANCE(280);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(605);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == 'A') ADVANCE(517);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(469);
      if (lookahead == 'E') ADVANCE(593);
      if (lookahead == 'I') ADVANCE(521);
      if (lookahead == 'N') ADVANCE(490);
      if (lookahead == 'R') ADVANCE(590);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(595);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_extends);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_implements);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_implements);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
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
      if (lookahead == 'D') ADVANCE(424);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead == 'i') ADVANCE(525);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(595);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(541);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(556);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'e') ADVANCE(559);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'o') ADVANCE(588);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'l') ADVANCE(447);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'm') ADVANCE(542);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'n') ADVANCE(518);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'n') ADVANCE(523);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'o') ADVANCE(464);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'u') ADVANCE(524);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'x') ADVANCE(460);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (lookahead == 'x') ADVANCE(579);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_annotation_default_token1);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
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
          lookahead == '\r') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(228);
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
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(271);
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
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
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
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
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
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'D') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'V') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
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
          lookahead == ' ') ADVANCE(271);
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
          lookahead == ' ') ADVANCE(271);
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
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'a') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'b') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'c') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'd') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'f') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'i') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'l') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'm') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'o') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'p') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 's') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_flag_value);
      if (lookahead == 'x') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
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
      if (sym__identifier_character_set_6(lookahead)) ADVANCE(595);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(93);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(149);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(122);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(179);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '5') ADVANCE(420);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(319);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(329);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(606);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(598);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(310);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(314);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(6);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(326);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(603);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(604);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(320);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(291);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(311);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(531);
      if (sym__identifier_character_set_7(lookahead)) ADVANCE(595);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(505);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(474);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(499);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(539);
      if (lookahead == 'M') ADVANCE(491);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(539);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(589);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(449);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(500);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(493);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(595);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(591);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(595);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(459);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(595);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(562);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(595);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(528);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(595);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(583);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(595);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(582);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(595);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(585);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(595);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(587);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(595);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(483);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(509);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(484);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(511);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(480);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(453);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(548);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(472);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(543);
      if (lookahead == 'n') ADVANCE(560);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(470);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(422);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(554);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(429);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(541);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(444);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(441);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(446);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(492);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(438);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(466);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(461);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(546);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(468);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(544);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(428);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(519);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(547);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(553);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(431);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(515);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(527);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(566);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(567);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(516);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(448);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(558);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(522);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'o') ADVANCE(588);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(514);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(457);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(535);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(510);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(563);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(507);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(536);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(545);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(538);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(450);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(487);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(476);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(581);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(475);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(485);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(486);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(456);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(543);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(473);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(488);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(458);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(518);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(534);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(467);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(440);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(523);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(452);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(478);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(573);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(471);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(561);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(580);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(577);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(568);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(540);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(530);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(513);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(465);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(584);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(526);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(520);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(550);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(529);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(564);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(586);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(549);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(506);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(501);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(578);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(576);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(439);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(445);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(503);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(477);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(432);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(463);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(481);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(565);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(283);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(286);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(462);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(572);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(426);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(570);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(574);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(430);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(569);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(497);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(575);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(433);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(434);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(571);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(437);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(489);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(442);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(443);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(421);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(496);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(451);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(427);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(537);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(423);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(498);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(482);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(555);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(436);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(479);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(592);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(454);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(502);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(455);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(504);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(551);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(512);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(524);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(508);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(552);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(460);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(579);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(228);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_Signature_COLON);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_NestMembers_COLON);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_InnerClasses_COLON);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_NestHost_COLON);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(609);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(633);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(611);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(611);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(616);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(613);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(613);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(616);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(616);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(228);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__endl);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(633);
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
  [1] = {.lex_state = 274},
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
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 278},
  [17] = {.lex_state = 278},
  [18] = {.lex_state = 278},
  [19] = {.lex_state = 278},
  [20] = {.lex_state = 278},
  [21] = {.lex_state = 278},
  [22] = {.lex_state = 278},
  [23] = {.lex_state = 61},
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
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 276},
  [99] = {.lex_state = 276},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 276},
  [104] = {.lex_state = 276},
  [105] = {.lex_state = 276},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 276},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 276},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 276},
  [113] = {.lex_state = 276},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 276},
  [116] = {.lex_state = 276},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 276},
  [119] = {.lex_state = 276},
  [120] = {.lex_state = 276},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 276},
  [123] = {.lex_state = 276},
  [124] = {.lex_state = 276},
  [125] = {.lex_state = 276},
  [126] = {.lex_state = 276},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 276},
  [130] = {.lex_state = 276},
  [131] = {.lex_state = 276},
  [132] = {.lex_state = 276},
  [133] = {.lex_state = 274},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 274},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 276},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 278},
  [147] = {.lex_state = 276},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 278},
  [152] = {.lex_state = 276},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 278},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 278},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 278},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 278},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 276},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 276},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 276},
  [186] = {.lex_state = 276},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 276},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 274},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 278},
  [198] = {.lex_state = 274},
  [199] = {.lex_state = 611},
  [200] = {.lex_state = 276},
  [201] = {.lex_state = 276},
  [202] = {.lex_state = 276},
  [203] = {.lex_state = 274},
  [204] = {.lex_state = 274},
  [205] = {.lex_state = 276},
  [206] = {.lex_state = 276},
  [207] = {.lex_state = 274},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 276},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 276},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 276},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 276},
  [224] = {.lex_state = 612},
  [225] = {.lex_state = 63},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 276},
  [228] = {.lex_state = 276},
  [229] = {.lex_state = 276},
  [230] = {.lex_state = 276},
  [231] = {.lex_state = 274},
  [232] = {.lex_state = 276},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 276},
  [235] = {.lex_state = 276},
  [236] = {.lex_state = 276},
  [237] = {.lex_state = 276},
  [238] = {.lex_state = 12},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 612},
  [241] = {.lex_state = 276},
  [242] = {.lex_state = 274},
  [243] = {.lex_state = 276},
  [244] = {.lex_state = 276},
  [245] = {.lex_state = 276},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 276},
  [248] = {.lex_state = 276},
  [249] = {.lex_state = 612},
  [250] = {.lex_state = 63},
  [251] = {.lex_state = 12},
  [252] = {.lex_state = 612},
  [253] = {.lex_state = 276},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 612},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 276},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 276},
  [260] = {.lex_state = 278},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 274},
  [264] = {.lex_state = 613},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 274},
  [267] = {.lex_state = 274},
  [268] = {.lex_state = 274},
  [269] = {.lex_state = 274},
  [270] = {.lex_state = 278},
  [271] = {.lex_state = 274},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 278},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 274},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 278},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 278},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 278},
  [283] = {.lex_state = 278},
  [284] = {.lex_state = 276},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 278},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 278},
  [290] = {.lex_state = 274},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 230},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 274},
  [297] = {.lex_state = 278},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 276},
  [300] = {.lex_state = 278},
  [301] = {.lex_state = 276},
  [302] = {.lex_state = 274},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 276},
  [305] = {.lex_state = 278},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 612},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 278},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 278},
  [316] = {.lex_state = 278},
  [317] = {.lex_state = 278},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 278},
  [326] = {.lex_state = 278},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 276},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 278},
  [331] = {.lex_state = 278},
  [332] = {.lex_state = 278},
  [333] = {.lex_state = 276},
  [334] = {.lex_state = 276},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 278},
  [337] = {.lex_state = 278},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 278},
  [344] = {.lex_state = 274},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 278},
  [347] = {.lex_state = 230},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 278},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 276},
  [355] = {.lex_state = 614},
  [356] = {.lex_state = 274},
  [357] = {.lex_state = 231},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 278},
  [360] = {.lex_state = 276},
  [361] = {.lex_state = 278},
  [362] = {.lex_state = 614},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 11},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 614},
  [367] = {.lex_state = 11},
  [368] = {.lex_state = 276},
  [369] = {.lex_state = 11},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 276},
  [372] = {.lex_state = 278},
  [373] = {.lex_state = 278},
  [374] = {.lex_state = 274},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 614},
  [377] = {.lex_state = 278},
  [378] = {.lex_state = 10},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 274},
  [381] = {.lex_state = 274},
  [382] = {.lex_state = 274},
  [383] = {.lex_state = 274},
  [384] = {.lex_state = 11},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 274},
  [388] = {.lex_state = 11},
  [389] = {.lex_state = 274},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 11},
  [392] = {.lex_state = 11},
  [393] = {.lex_state = 274},
  [394] = {.lex_state = 278},
  [395] = {.lex_state = 274},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 274},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 11},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 11},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 276},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 11},
  [414] = {.lex_state = 278},
  [415] = {.lex_state = 276},
  [416] = {.lex_state = 278},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 232},
  [421] = {.lex_state = 274},
  [422] = {.lex_state = 278},
  [423] = {.lex_state = 274},
  [424] = {.lex_state = 278},
  [425] = {.lex_state = 235},
  [426] = {.lex_state = 278},
  [427] = {.lex_state = 276},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 276},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 276},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 233},
  [442] = {.lex_state = 276},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 276},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 276},
  [448] = {.lex_state = 234},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 230},
  [453] = {.lex_state = 614},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 278},
  [456] = {.lex_state = 10},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 278},
  [460] = {.lex_state = 274},
  [461] = {.lex_state = 276},
  [462] = {.lex_state = 276},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 274},
  [465] = {.lex_state = 274},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 236},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 236},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 274},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 278},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 10},
  [485] = {.lex_state = 0},
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
    [sym_source_file] = STATE(480),
    [sym__source_file_verbose] = STATE(479),
    [sym__source_file_plain] = STATE(479),
    [sym_header_info_compile] = STATE(66),
    [sym_header_info] = STATE(371),
    [sym_header] = STATE(67),
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
    STATE(13), 1,
      sym_identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(24), 1,
      sym_generic_type,
    STATE(56), 1,
      aux_sym_modifiers_repeat1,
    STATE(78), 1,
      sym_modifiers,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(411), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(174), 4,
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
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(24), 1,
      sym_generic_type,
    STATE(56), 1,
      aux_sym_modifiers_repeat1,
    STATE(78), 1,
      sym_modifiers,
    STATE(3), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(396), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(174), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(26), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
    ACTIONS(23), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(24), 1,
      sym_generic_type,
    STATE(56), 1,
      aux_sym_modifiers_repeat1,
    STATE(78), 1,
      sym_modifiers,
    STATE(3), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(396), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(174), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(35), 6,
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
  [177] = 12,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(24), 1,
      sym_generic_type,
    STATE(56), 1,
      aux_sym_modifiers_repeat1,
    STATE(78), 1,
      sym_modifiers,
    STATE(2), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(411), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(174), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(35), 6,
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
  [236] = 12,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(24), 1,
      sym_generic_type,
    STATE(56), 1,
      aux_sym_modifiers_repeat1,
    STATE(78), 1,
      sym_modifiers,
    STATE(5), 2,
      sym_class_def_plain_body_item,
      aux_sym_class_def_plain_body_repeat1,
    STATE(411), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(174), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(35), 6,
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
  [295] = 11,
    ACTIONS(29), 1,
      sym__identifier,
    STATE(13), 1,
      sym_identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(24), 1,
      sym_generic_type,
    STATE(56), 1,
      aux_sym_modifiers_repeat1,
    STATE(78), 1,
      sym_modifiers,
    STATE(4), 2,
      sym__block_item,
      aux_sym_block_repeat1,
    STATE(396), 3,
      sym_field_def,
      sym_method_def,
      sym_static_block_def,
    STATE(174), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(35), 6,
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
      sym_annotation_default,
    STATE(18), 1,
      sym_deprecated,
    STATE(36), 1,
      sym_runtime_visible_annotations,
    STATE(53), 1,
      sym_exceptions,
    STATE(62), 1,
      sym_code_def,
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
    ACTIONS(47), 1,
      anon_sym_Deprecated_COLON,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_deprecated,
    STATE(34), 1,
      sym_runtime_visible_annotations,
    STATE(52), 1,
      sym_exceptions,
    STATE(61), 1,
      sym_code_def,
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
    STATE(12), 1,
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
  [491] = 4,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(70), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [527] = 4,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(74), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [563] = 5,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(82), 1,
      anon_sym_DOT,
    STATE(31), 1,
      sym_type_arguments,
    ACTIONS(78), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [601] = 5,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(33), 1,
      sym_type_arguments,
    ACTIONS(86), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(84), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [639] = 2,
    ACTIONS(92), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
    ACTIONS(90), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [670] = 8,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_runtime_visible_annotations,
    STATE(50), 1,
      sym_exceptions,
    STATE(65), 1,
      sym_code_def,
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
  [713] = 2,
    ACTIONS(100), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [744] = 8,
    ACTIONS(49), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_runtime_visible_annotations,
    STATE(52), 1,
      sym_exceptions,
    STATE(61), 1,
      sym_code_def,
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
  [787] = 2,
    ACTIONS(104), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [818] = 2,
    ACTIONS(108), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [849] = 7,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      aux_sym_dimensions_repeat1,
    STATE(40), 1,
      sym_dimensions,
    STATE(45), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(114), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
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
  [890] = 2,
    ACTIONS(70), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [921] = 3,
    ACTIONS(122), 1,
      sym_flag_value,
    ACTIONS(120), 6,
      anon_sym_RBRACE,
      anon_sym_AnnotationDefault_COLON,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
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
  [954] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(86), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(84), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [986] = 5,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      aux_sym_dimensions_repeat1,
    STATE(40), 1,
      sym_dimensions,
    ACTIONS(126), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
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
  [1022] = 4,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(130), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
    ACTIONS(128), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1056] = 2,
    ACTIONS(134), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [1086] = 2,
    ACTIONS(138), 6,
      anon_sym_RBRACE,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
      sym_number,
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
  [1116] = 4,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(142), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
    ACTIONS(140), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1150] = 2,
    ACTIONS(149), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
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
  [1180] = 2,
    ACTIONS(153), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [1210] = 2,
    ACTIONS(157), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
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
  [1240] = 2,
    ACTIONS(161), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
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
  [1270] = 6,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_exceptions,
    STATE(65), 1,
      sym_code_def,
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
  [1307] = 6,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_exceptions,
    STATE(59), 1,
      sym_code_def,
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
  [1344] = 6,
    ACTIONS(51), 1,
      anon_sym_Exceptions_COLON,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_exceptions,
    STATE(61), 1,
      sym_code_def,
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
  [1381] = 2,
    ACTIONS(169), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
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
  [1410] = 4,
    ACTIONS(175), 1,
      sym_number,
    STATE(42), 1,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(173), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [1443] = 2,
    ACTIONS(142), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(140), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1472] = 2,
    ACTIONS(179), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
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
  [1501] = 2,
    ACTIONS(183), 5,
      anon_sym_RBRACE,
      anon_sym_Deprecated_COLON,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [1530] = 4,
    ACTIONS(189), 1,
      sym_number,
    STATE(42), 1,
      aux_sym_runtime_visible_annotations_repeat1,
    ACTIONS(187), 3,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [1563] = 4,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
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
  [1595] = 4,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_line,
    STATE(46), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(195), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1627] = 4,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(203), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
    ACTIONS(201), 19,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [1659] = 4,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      anon_sym_line,
    STATE(46), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
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
  [1691] = 2,
    ACTIONS(214), 4,
      anon_sym_RBRACE,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
      sym_number,
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
  [1719] = 2,
    ACTIONS(218), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [1747] = 2,
    ACTIONS(222), 4,
      anon_sym_RBRACE,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_Exceptions_COLON,
      anon_sym_Code_COLON,
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
  [1775] = 4,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_code_def,
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
  [1806] = 4,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_code_def,
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
  [1837] = 4,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_code_def,
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
  [1868] = 4,
    ACTIONS(53), 1,
      anon_sym_Code_COLON,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_code_def,
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
  [1899] = 2,
    ACTIONS(230), 2,
      anon_sym_RBRACE,
      anon_sym_Code_COLON,
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
  [1925] = 2,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 20,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
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
  [1951] = 4,
    ACTIONS(238), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(57), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(236), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(240), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [1981] = 4,
    ACTIONS(244), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(57), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(242), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
    ACTIONS(246), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2011] = 2,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
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
  [2036] = 2,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
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
  [2061] = 2,
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
  [2086] = 2,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
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
  [2111] = 2,
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
  [2136] = 2,
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
  [2161] = 2,
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
  [2186] = 2,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
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
  [2211] = 7,
    ACTIONS(265), 1,
      sym_interface_keyword,
    ACTIONS(269), 1,
      anon_sym_class,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    STATE(270), 1,
      sym_modifiers,
    STATE(359), 1,
      sym_class_keyword,
    STATE(458), 2,
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
  [2245] = 7,
    ACTIONS(269), 1,
      anon_sym_class,
    ACTIONS(271), 1,
      sym_interface_keyword,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    STATE(286), 1,
      sym_modifiers,
    STATE(328), 1,
      sym_class_info_def,
    STATE(336), 1,
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
  [2278] = 8,
    ACTIONS(273), 1,
      anon_sym_Utf8,
    ACTIONS(275), 1,
      anon_sym_Class,
    ACTIONS(277), 1,
      anon_sym_String,
    ACTIONS(281), 1,
      anon_sym_NameAndType,
    ACTIONS(285), 1,
      anon_sym_Integer,
    ACTIONS(283), 2,
      anon_sym_Double,
      anon_sym_Float,
    ACTIONS(279), 3,
      anon_sym_Methodref,
      anon_sym_Fieldref,
      anon_sym_InterfaceMethodref,
    STATE(229), 8,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_ref,
      sym__constant_pool_item_type_name_and_type,
      sym__constant_pool_item_type_double,
      sym__constant_pool_item_type_int,
  [2313] = 5,
    STATE(69), 1,
      aux_sym_inner_classes_repeat1,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    STATE(351), 1,
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
  [2341] = 9,
    ACTIONS(292), 1,
      sym__identifier,
    ACTIONS(294), 1,
      anon_sym_GT,
    ACTIONS(296), 1,
      anon_sym_QMARK,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_wildcard,
    STATE(184), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2377] = 9,
    ACTIONS(292), 1,
      sym__identifier,
    ACTIONS(296), 1,
      anon_sym_QMARK,
    ACTIONS(300), 1,
      anon_sym_GT,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(279), 1,
      sym_wildcard,
    STATE(181), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2413] = 5,
    STATE(69), 1,
      aux_sym_inner_classes_repeat1,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    STATE(351), 1,
      sym_modifiers,
    ACTIONS(302), 2,
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
  [2441] = 9,
    ACTIONS(292), 1,
      sym__identifier,
    ACTIONS(296), 1,
      anon_sym_QMARK,
    ACTIONS(304), 1,
      anon_sym_GT,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(258), 1,
      sym_wildcard,
    STATE(176), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2477] = 3,
    STATE(74), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(244), 3,
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
  [2500] = 3,
    STATE(74), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(238), 3,
      sym_interface_keyword,
      anon_sym_POUND,
      anon_sym_class,
    ACTIONS(309), 12,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_abstract,
      anon_sym_static,
      anon_sym_final,
      anon_sym_strictfp,
      anon_sym_default,
      anon_sym_synchronized,
      anon_sym_native,
      anon_sym_transient,
      anon_sym_volatile,
  [2523] = 8,
    ACTIONS(292), 1,
      sym__identifier,
    ACTIONS(296), 1,
      anon_sym_QMARK,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(308), 1,
      sym_wildcard,
    STATE(216), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2556] = 1,
    ACTIONS(108), 16,
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
      anon_sym_DOT,
      anon_sym_InnerClasses_COLON,
      anon_sym_EQ2,
  [2575] = 7,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(311), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(13), 1,
      sym_identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(24), 1,
      sym_generic_type,
    STATE(151), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(35), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2605] = 7,
    ACTIONS(292), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(233), 1,
      sym_interface_type_list,
    STATE(189), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2635] = 7,
    ACTIONS(292), 1,
      sym__identifier,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(177), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2665] = 4,
    STATE(72), 1,
      aux_sym_inner_classes_repeat1,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    STATE(351), 1,
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
  [2689] = 7,
    ACTIONS(315), 1,
      sym__identifier,
    STATE(109), 1,
      sym_scoped_type_identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(164), 1,
      sym_generic_type,
    STATE(233), 1,
      sym_interface_type_list,
    STATE(121), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(317), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2719] = 6,
    ACTIONS(292), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(215), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2746] = 6,
    ACTIONS(292), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(179), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2773] = 6,
    ACTIONS(29), 1,
      sym__identifier,
    STATE(13), 1,
      sym_identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(24), 1,
      sym_generic_type,
    STATE(25), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(35), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2800] = 6,
    ACTIONS(315), 1,
      sym__identifier,
    STATE(109), 1,
      sym_scoped_type_identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(164), 1,
      sym_generic_type,
    STATE(165), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(317), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2827] = 6,
    ACTIONS(292), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(145), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2854] = 1,
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
  [2871] = 6,
    ACTIONS(315), 1,
      sym__identifier,
    STATE(109), 1,
      sym_scoped_type_identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(164), 1,
      sym_generic_type,
    STATE(166), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(317), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2898] = 6,
    ACTIONS(292), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(137), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2925] = 1,
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
  [2942] = 1,
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
  [2959] = 6,
    ACTIONS(292), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(200), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [2986] = 6,
    ACTIONS(292), 1,
      sym__identifier,
    STATE(98), 1,
      sym_identifier,
    STATE(99), 1,
      sym_scoped_type_identifier,
    STATE(110), 1,
      sym_generic_type,
    STATE(188), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(298), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [3013] = 6,
    ACTIONS(29), 1,
      sym__identifier,
    STATE(13), 1,
      sym_identifier,
    STATE(14), 1,
      sym_scoped_type_identifier,
    STATE(24), 1,
      sym_generic_type,
    STATE(21), 4,
      sym__type,
      sym__simple_type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(35), 6,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
  [3040] = 11,
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
    STATE(100), 1,
      sym_type_parameters,
    STATE(114), 1,
      sym_superclass,
    STATE(162), 1,
      sym_super_interfaces,
    STATE(161), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3076] = 11,
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
    STATE(101), 1,
      sym_type_parameters,
    STATE(106), 1,
      sym_superclass,
    STATE(156), 1,
      sym_super_interfaces,
    STATE(150), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3112] = 4,
    ACTIONS(339), 1,
      anon_sym_LT,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(118), 1,
      sym_type_arguments,
    ACTIONS(78), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [3132] = 4,
    ACTIONS(339), 1,
      anon_sym_LT,
    ACTIONS(343), 1,
      anon_sym_DOT,
    STATE(119), 1,
      sym_type_arguments,
    ACTIONS(86), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [3152] = 9,
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
    STATE(106), 1,
      sym_superclass,
    STATE(156), 1,
      sym_super_interfaces,
    STATE(150), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3182] = 9,
    ACTIONS(325), 1,
      anon_sym_extends,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(345), 1,
      anon_sym_Constantpool_COLON,
    STATE(107), 1,
      sym_superclass,
    STATE(175), 1,
      sym_super_interfaces,
    STATE(157), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3212] = 2,
    ACTIONS(349), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(347), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON2,
      anon_sym_flags_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_EQ,
      sym_comment,
      anon_sym_Constantpool_COLON,
  [3228] = 1,
    ACTIONS(104), 10,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [3241] = 1,
    ACTIONS(100), 10,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [3254] = 3,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(130), 7,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
  [3270] = 7,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(353), 1,
      anon_sym_Constantpool_COLON,
    STATE(171), 1,
      sym_super_interfaces,
    STATE(172), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3294] = 7,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(355), 1,
      anon_sym_Constantpool_COLON,
    STATE(134), 1,
      sym_super_interfaces,
    STATE(142), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3318] = 1,
    ACTIONS(134), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [3330] = 5,
    ACTIONS(357), 1,
      anon_sym_LT,
    ACTIONS(359), 1,
      anon_sym_DOT,
    STATE(135), 1,
      sym_type_arguments,
    ACTIONS(84), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(86), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [3350] = 2,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(86), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [3364] = 2,
    ACTIONS(106), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(108), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3378] = 1,
    ACTIONS(157), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [3390] = 3,
    ACTIONS(361), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(142), 7,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
  [3406] = 7,
    ACTIONS(327), 1,
      anon_sym_implements,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(364), 1,
      anon_sym_Constantpool_COLON,
    STATE(169), 1,
      sym_super_interfaces,
    STATE(167), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3430] = 1,
    ACTIONS(149), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [3442] = 9,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(370), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(372), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(374), 1,
      anon_sym_NestHost_COLON,
    STATE(133), 1,
      sym_nested_members,
    STATE(207), 1,
      sym_nest_host,
    STATE(267), 1,
      sym_inner_classes,
    STATE(406), 1,
      sym_footer_annotations,
  [3470] = 5,
    ACTIONS(357), 1,
      anon_sym_LT,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(136), 1,
      sym_type_arguments,
    ACTIONS(76), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(78), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [3490] = 1,
    ACTIONS(153), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [3502] = 1,
    ACTIONS(161), 9,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [3514] = 9,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(370), 1,
      anon_sym_NestMembers_COLON,
    ACTIONS(372), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(374), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_nested_members,
    STATE(204), 1,
      sym_nest_host,
    STATE(268), 1,
      sym_inner_classes,
    STATE(483), 1,
      sym_footer_annotations,
  [3542] = 7,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(386), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(154), 1,
      aux_sym_dimensions_repeat1,
    STATE(187), 1,
      sym_dimensions,
    STATE(196), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(382), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3565] = 1,
    ACTIONS(169), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [3576] = 8,
    ACTIONS(388), 1,
      anon_sym_extends,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_LT,
    STATE(178), 1,
      sym_type_parameters,
    STATE(230), 1,
      sym_superclass,
    STATE(352), 1,
      sym_super_interfaces,
    STATE(404), 1,
      sym_class_def_plain_body,
  [3601] = 8,
    ACTIONS(388), 1,
      anon_sym_extends,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_LT,
    STATE(185), 1,
      sym_type_parameters,
    STATE(228), 1,
      sym_superclass,
    STATE(338), 1,
      sym_super_interfaces,
    STATE(401), 1,
      sym_class_def_plain_body,
  [3626] = 1,
    ACTIONS(142), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [3637] = 7,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      anon_sym_Signature_COLON,
    ACTIONS(400), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(116), 1,
      sym_source_file_def,
    STATE(334), 1,
      sym_signature,
    STATE(419), 1,
      sym_footer,
    STATE(129), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [3660] = 2,
    ACTIONS(98), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(100), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3673] = 2,
    ACTIONS(102), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(104), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3686] = 7,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      anon_sym_Signature_COLON,
    ACTIONS(400), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(116), 1,
      sym_source_file_def,
    STATE(334), 1,
      sym_signature,
    STATE(409), 1,
      sym_footer,
    STATE(202), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [3709] = 8,
    ACTIONS(388), 1,
      anon_sym_extends,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_LT,
    STATE(182), 1,
      sym_type_parameters,
    STATE(235), 1,
      sym_superclass,
    STATE(321), 1,
      sym_super_interfaces,
    STATE(428), 1,
      sym_class_def_plain_body,
  [3734] = 1,
    ACTIONS(179), 8,
      anon_sym_implements,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [3745] = 8,
    ACTIONS(388), 1,
      anon_sym_extends,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_LT,
    STATE(190), 1,
      sym_type_parameters,
    STATE(237), 1,
      sym_superclass,
    STATE(318), 1,
      sym_super_interfaces,
    STATE(431), 1,
      sym_class_def_plain_body,
  [3770] = 7,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(372), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(374), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_nest_host,
    STATE(268), 1,
      sym_inner_classes,
    STATE(483), 1,
      sym_footer_annotations,
  [3792] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(402), 1,
      anon_sym_Constantpool_COLON,
    STATE(168), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3810] = 2,
    ACTIONS(159), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(161), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3822] = 2,
    ACTIONS(151), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(153), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3834] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      anon_sym_AMP,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    STATE(246), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3854] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(408), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3872] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(410), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3890] = 4,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    STATE(140), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(140), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(142), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [3906] = 7,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(372), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(374), 1,
      anon_sym_NestHost_COLON,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    STATE(195), 1,
      sym_nest_host,
    STATE(269), 1,
      sym_inner_classes,
    STATE(457), 1,
      sym_footer_annotations,
  [3928] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(417), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [3946] = 4,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(422), 1,
      sym__hash_number,
    STATE(152), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(419), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [3962] = 2,
    ACTIONS(155), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(157), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [3974] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    ACTIONS(126), 4,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [3990] = 3,
    ACTIONS(425), 1,
      sym__identifier,
    STATE(158), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(423), 4,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4004] = 4,
    ACTIONS(429), 1,
      anon_sym_POUND,
    STATE(422), 1,
      sym__hash_number,
    STATE(147), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(427), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4020] = 5,
    ACTIONS(432), 1,
      anon_sym_flags_COLON,
    ACTIONS(435), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(437), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4038] = 1,
    ACTIONS(347), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_of,
      sym_comment,
  [4048] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(345), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4066] = 7,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      sym__identifier,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_dimensions_repeat1,
    STATE(40), 1,
      sym_dimensions,
    STATE(289), 1,
      sym_args,
    STATE(291), 1,
      sym_identifier,
  [4088] = 4,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(422), 1,
      sym__hash_number,
    STATE(147), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(444), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4104] = 2,
    ACTIONS(147), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(149), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4116] = 4,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    STATE(140), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(128), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(130), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4132] = 2,
    ACTIONS(132), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(134), 5,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_Constantpool_COLON,
  [4144] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(446), 1,
      anon_sym_Constantpool_COLON,
    STATE(173), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4162] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(448), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4180] = 3,
    ACTIONS(452), 1,
      sym__identifier,
    STATE(158), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
    ACTIONS(450), 4,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4194] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(455), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4212] = 1,
    ACTIONS(457), 7,
      anon_sym_int,
      anon_sym_char,
      anon_sym_void,
      anon_sym_double,
      anon_sym_float,
      anon_sym_byte,
      sym__identifier,
  [4222] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(337), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4240] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(459), 1,
      anon_sym_Constantpool_COLON,
    STATE(159), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4258] = 4,
    ACTIONS(292), 1,
      sym__identifier,
    STATE(256), 1,
      sym_scoped_identifier,
    ACTIONS(461), 2,
      anon_sym_open,
      anon_sym_module,
    STATE(390), 3,
      sym_identifier,
      sym__name,
      sym__reserved_identifier,
  [4274] = 3,
    ACTIONS(359), 1,
      anon_sym_DOT,
    ACTIONS(84), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(86), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4288] = 5,
    ACTIONS(124), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    STATE(154), 1,
      aux_sym_dimensions_repeat1,
    STATE(187), 1,
      sym_dimensions,
    ACTIONS(126), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4306] = 5,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    STATE(154), 1,
      aux_sym_dimensions_repeat1,
    STATE(187), 1,
      sym_dimensions,
    ACTIONS(463), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(465), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4324] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(467), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4342] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(469), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4360] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(471), 1,
      anon_sym_Constantpool_COLON,
    STATE(170), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4378] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(473), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4396] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(475), 1,
      anon_sym_Constantpool_COLON,
    STATE(138), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4414] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(477), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4432] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(479), 1,
      anon_sym_Constantpool_COLON,
    STATE(148), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4450] = 7,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      sym__identifier,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_dimensions_repeat1,
    STATE(40), 1,
      sym_dimensions,
    STATE(280), 1,
      sym_args,
    STATE(335), 1,
      sym_identifier,
  [4472] = 5,
    ACTIONS(331), 1,
      anon_sym_flags_COLON,
    ACTIONS(335), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(481), 1,
      anon_sym_Constantpool_COLON,
    STATE(139), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(288), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [4490] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_GT,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    STATE(293), 1,
      aux_sym_type_arguments_repeat1,
  [4509] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    STATE(285), 1,
      aux_sym_interface_type_list_repeat1,
  [4528] = 6,
    ACTIONS(388), 1,
      anon_sym_extends,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      sym_superclass,
    STATE(312), 1,
      sym_super_interfaces,
    STATE(435), 1,
      sym_class_def_plain_body,
  [4547] = 6,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    STATE(298), 1,
      aux_sym_interface_type_list_repeat1,
  [4566] = 2,
    ACTIONS(167), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(169), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4577] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_GT,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    STATE(281), 1,
      aux_sym_type_arguments_repeat1,
  [4596] = 6,
    ACTIONS(388), 1,
      anon_sym_extends,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_superclass,
    STATE(338), 1,
      sym_super_interfaces,
    STATE(401), 1,
      sym_class_def_plain_body,
  [4615] = 5,
    ACTIONS(493), 1,
      anon_sym_extends,
    ACTIONS(497), 1,
      sym_super,
    STATE(83), 1,
      sym_extends,
    STATE(348), 1,
      sym__wildcard_bounds,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4632] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_GT,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    STATE(272), 1,
      aux_sym_type_arguments_repeat1,
  [4651] = 6,
    ACTIONS(388), 1,
      anon_sym_extends,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_superclass,
    STATE(339), 1,
      sym_super_interfaces,
    STATE(445), 1,
      sym_class_def_plain_body,
  [4670] = 1,
    ACTIONS(501), 6,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [4679] = 2,
    ACTIONS(177), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(179), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4690] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    ACTIONS(503), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AMP,
  [4705] = 6,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    STATE(254), 1,
      aux_sym_interface_type_list_repeat1,
  [4724] = 6,
    ACTIONS(388), 1,
      anon_sym_extends,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(230), 1,
      sym_superclass,
    STATE(352), 1,
      sym_super_interfaces,
    STATE(404), 1,
      sym_class_def_plain_body,
  [4743] = 5,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      sym_comment,
    ACTIONS(511), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(218), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(507), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4760] = 2,
    ACTIONS(140), 2,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(142), 4,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACK,
      anon_sym_Constantpool_COLON,
  [4771] = 4,
    ACTIONS(65), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(70), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4785] = 4,
    ACTIONS(59), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(63), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4799] = 5,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(372), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    STATE(296), 1,
      sym_inner_classes,
    STATE(443), 1,
      sym_footer_annotations,
  [4815] = 4,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(212), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(520), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4829] = 2,
    ACTIONS(106), 1,
      sym__identifier,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4839] = 4,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      sym_number,
    STATE(203), 1,
      aux_sym_code_info_repeat1,
    STATE(232), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [4853] = 5,
    ACTIONS(528), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(530), 1,
      sym__path_segment,
    ACTIONS(532), 1,
      anon_sym_SLASH,
    STATE(461), 1,
      sym__rest_of_the_line,
    STATE(462), 1,
      sym_file_path,
  [4869] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    ACTIONS(465), 2,
      anon_sym_implements,
      anon_sym_LBRACE,
  [4883] = 1,
    ACTIONS(534), 5,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_NestMembers_COLON,
      anon_sym_InnerClasses_COLON,
      anon_sym_NestHost_COLON,
  [4891] = 3,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    ACTIONS(539), 2,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(202), 2,
      sym_block,
      aux_sym__source_file_verbose_repeat1,
  [4903] = 4,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      sym_number,
    STATE(271), 1,
      aux_sym_code_info_repeat1,
    STATE(227), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [4917] = 5,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(372), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      sym_inner_classes,
    STATE(457), 1,
      sym_footer_annotations,
  [4933] = 2,
    ACTIONS(543), 1,
      sym_comment,
    ACTIONS(541), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4943] = 2,
    ACTIONS(547), 1,
      sym_comment,
    ACTIONS(545), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [4953] = 5,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(372), 1,
      anon_sym_InnerClasses_COLON,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(268), 1,
      sym_inner_classes,
    STATE(483), 1,
      sym_footer_annotations,
  [4969] = 2,
    ACTIONS(551), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(549), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [4979] = 4,
    ACTIONS(72), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(74), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [4993] = 2,
    ACTIONS(555), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
    ACTIONS(553), 3,
      anon_sym_extends,
      anon_sym_implements,
      aux_sym_class_info_item_simple_token1,
  [5003] = 2,
    ACTIONS(559), 1,
      sym_comment,
    ACTIONS(557), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5013] = 4,
    ACTIONS(124), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(126), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5027] = 3,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(568), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(564), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5039] = 2,
    ACTIONS(572), 1,
      sym_comment,
    ACTIONS(570), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5049] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    ACTIONS(574), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5063] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      aux_sym_dimensions_repeat1,
    STATE(131), 1,
      sym_dimensions,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5077] = 4,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(222), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(578), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5091] = 4,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(222), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(582), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5105] = 4,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(217), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(582), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5119] = 4,
    ACTIONS(493), 1,
      anon_sym_extends,
    STATE(90), 1,
      sym_extends,
    STATE(327), 1,
      sym_type_bound,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5133] = 3,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym_interface_type_list_repeat1,
    ACTIONS(126), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [5145] = 4,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(222), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(594), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5159] = 3,
    ACTIONS(598), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(600), 1,
      sym_number,
    STATE(223), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5170] = 4,
    ACTIONS(528), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(603), 1,
      anon_sym_SLASH,
    STATE(240), 1,
      aux_sym_file_path_repeat1,
    STATE(437), 1,
      sym__rest_of_the_line,
  [5183] = 3,
    ACTIONS(118), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(605), 1,
      sym_flag_value,
    ACTIONS(120), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5194] = 4,
    ACTIONS(607), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      sym_number,
    ACTIONS(611), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym__endl,
  [5207] = 3,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(615), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(223), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5218] = 4,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(310), 1,
      sym_super_interfaces,
    STATE(438), 1,
      sym_class_def_plain_body,
  [5231] = 1,
    ACTIONS(617), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5238] = 4,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(320), 1,
      sym_super_interfaces,
    STATE(432), 1,
      sym_class_def_plain_body,
  [5251] = 3,
    ACTIONS(619), 1,
      ts_builtin_sym_end,
    ACTIONS(621), 1,
      sym_number,
    STATE(242), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
  [5262] = 3,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(623), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(223), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [5273] = 2,
    ACTIONS(627), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(625), 3,
      anon_sym_LBRACE,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5282] = 1,
    ACTIONS(629), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5289] = 4,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(370), 1,
      sym_super_interfaces,
    STATE(386), 1,
      sym_class_def_plain_body,
  [5302] = 4,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(314), 1,
      sym_super_interfaces,
    STATE(475), 1,
      sym_class_def_plain_body,
  [5315] = 4,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(349), 1,
      sym_super_interfaces,
    STATE(408), 1,
      sym_class_def_plain_body,
  [5328] = 2,
    ACTIONS(633), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(631), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5337] = 3,
    ACTIONS(635), 1,
      anon_sym_AMP,
    STATE(239), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(503), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5348] = 4,
    ACTIONS(528), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(603), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      aux_sym_file_path_repeat1,
    STATE(415), 1,
      sym__rest_of_the_line,
  [5361] = 4,
    ACTIONS(390), 1,
      anon_sym_implements,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(365), 1,
      sym_super_interfaces,
    STATE(471), 1,
      sym_class_def_plain_body,
  [5374] = 3,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 1,
      sym_number,
    STATE(242), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
  [5385] = 1,
    ACTIONS(643), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5392] = 1,
    ACTIONS(645), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5399] = 1,
    ACTIONS(647), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5406] = 3,
    ACTIONS(406), 1,
      anon_sym_AMP,
    STATE(239), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(649), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5417] = 1,
    ACTIONS(651), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5424] = 1,
    ACTIONS(653), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5431] = 4,
    ACTIONS(528), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(603), 1,
      anon_sym_SLASH,
    STATE(252), 1,
      aux_sym_file_path_repeat1,
    STATE(447), 1,
      sym__rest_of_the_line,
  [5444] = 2,
    ACTIONS(90), 2,
      sym_flag_value,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(92), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5453] = 2,
    ACTIONS(65), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(70), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5462] = 4,
    ACTIONS(528), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(603), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      aux_sym_file_path_repeat1,
    STATE(437), 1,
      sym__rest_of_the_line,
  [5475] = 1,
    ACTIONS(655), 4,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5482] = 3,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      aux_sym_interface_type_list_repeat1,
  [5492] = 3,
    ACTIONS(657), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(659), 1,
      anon_sym_SLASH,
    STATE(255), 1,
      aux_sym_file_path_repeat1,
  [5502] = 3,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(664), 1,
      anon_sym_DOT,
    STATE(392), 1,
      sym_runtime_annotation_args,
  [5512] = 1,
    ACTIONS(666), 3,
      anon_sym_LBRACE,
      anon_sym_Signature_COLON,
      anon_sym_SourceFile_COLON_DQUOTE,
  [5518] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_GT,
    STATE(293), 1,
      aux_sym_type_arguments_repeat1,
  [5528] = 1,
    ACTIONS(138), 3,
      anon_sym_RPAREN,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
  [5534] = 3,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(220), 1,
      sym_identifier,
    STATE(262), 1,
      sym_type_parameter,
  [5544] = 3,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_GT,
    STATE(295), 1,
      aux_sym_type_parameters_repeat1,
  [5554] = 3,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_GT,
    STATE(261), 1,
      aux_sym_type_parameters_repeat1,
  [5564] = 3,
    ACTIONS(421), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      sym_number,
    STATE(213), 1,
      sym__hash_number,
  [5574] = 3,
    ACTIONS(528), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(676), 1,
      sym__path_segment,
    STATE(447), 1,
      sym__rest_of_the_line,
  [5584] = 3,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(398), 1,
      sym_ref_const_pool_item,
    STATE(485), 1,
      sym__hash_number,
  [5594] = 2,
    ACTIONS(621), 1,
      sym_number,
    STATE(231), 2,
      sym_footer_runtime_annotation,
      aux_sym_footer_annotations_repeat1,
  [5602] = 3,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(483), 1,
      sym_footer_annotations,
  [5612] = 3,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    STATE(457), 1,
      sym_footer_annotations,
  [5622] = 3,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    STATE(443), 1,
      sym_footer_annotations,
  [5632] = 3,
    ACTIONS(269), 1,
      anon_sym_class,
    ACTIONS(678), 1,
      sym_interface_keyword,
    STATE(316), 1,
      sym_class_keyword,
  [5642] = 3,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      sym_number,
    STATE(271), 1,
      aux_sym_code_info_repeat1,
  [5652] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_GT,
    STATE(294), 1,
      aux_sym_type_arguments_repeat1,
  [5662] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_GT,
    STATE(272), 1,
      aux_sym_type_arguments_repeat1,
  [5672] = 2,
    ACTIONS(687), 1,
      sym__identifier,
    STATE(146), 2,
      sym_identifier,
      aux_sym_nested_members_repeat1,
  [5680] = 3,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_GT,
    STATE(287), 1,
      aux_sym_type_parameters_repeat1,
  [5690] = 1,
    ACTIONS(691), 3,
      ts_builtin_sym_end,
      anon_sym_RuntimeVisibleAnnotations_COLON,
      anon_sym_InnerClasses_COLON,
  [5696] = 3,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(205), 1,
      sym_ref_const_pool_item,
    STATE(466), 1,
      sym__hash_number,
  [5706] = 2,
    ACTIONS(693), 1,
      anon_sym_line,
    STATE(44), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
  [5714] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_GT,
    STATE(281), 1,
      aux_sym_type_arguments_repeat1,
  [5724] = 3,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    ACTIONS(697), 1,
      anon_sym_throws,
    STATE(481), 1,
      sym_method_throws,
  [5734] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_GT,
    STATE(294), 1,
      aux_sym_type_arguments_repeat1,
  [5744] = 3,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(220), 1,
      sym_identifier,
    STATE(311), 1,
      sym_type_parameter,
  [5754] = 3,
    ACTIONS(697), 1,
      anon_sym_throws,
    ACTIONS(701), 1,
      anon_sym_SEMI,
    STATE(436), 1,
      sym_method_throws,
  [5764] = 1,
    ACTIONS(551), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [5770] = 3,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      aux_sym_interface_type_list_repeat1,
  [5780] = 3,
    ACTIONS(269), 1,
      anon_sym_class,
    ACTIONS(705), 1,
      sym_interface_keyword,
    STATE(305), 1,
      sym_class_keyword,
  [5790] = 3,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_GT,
    STATE(295), 1,
      aux_sym_type_parameters_repeat1,
  [5800] = 2,
    ACTIONS(711), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(709), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [5808] = 3,
    ACTIONS(697), 1,
      anon_sym_throws,
    ACTIONS(713), 1,
      anon_sym_SEMI,
    STATE(454), 1,
      sym_method_throws,
  [5818] = 3,
    ACTIONS(421), 1,
      anon_sym_POUND,
    ACTIONS(715), 1,
      sym_number,
    STATE(191), 1,
      sym__hash_number,
  [5828] = 3,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(717), 1,
      anon_sym_SEMI,
    STATE(283), 1,
      sym_args,
  [5838] = 3,
    ACTIONS(719), 1,
      aux_sym_code_info_stat_token1,
    STATE(198), 1,
      sym_code_info_stat,
    STATE(333), 1,
      sym_code_info,
  [5848] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_GT,
    STATE(294), 1,
      aux_sym_type_arguments_repeat1,
  [5858] = 3,
    ACTIONS(576), 1,
      anon_sym_GT,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_type_arguments_repeat1,
  [5868] = 3,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_GT,
    STATE(295), 1,
      aux_sym_type_parameters_repeat1,
  [5878] = 3,
    ACTIONS(368), 1,
      anon_sym_RuntimeVisibleAnnotations_COLON,
    ACTIONS(731), 1,
      ts_builtin_sym_end,
    STATE(429), 1,
      sym_footer_annotations,
  [5888] = 2,
    STATE(48), 1,
      sym_boolean_literal,
    ACTIONS(733), 2,
      anon_sym_true,
      anon_sym_false,
  [5896] = 3,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym_interface_type_list_repeat1,
  [5906] = 3,
    ACTIONS(735), 1,
      anon_sym_descriptor_COLON,
    STATE(64), 1,
      sym__method_def_verbose,
    STATE(360), 1,
      sym_descriptor_def,
  [5916] = 3,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(220), 1,
      sym_identifier,
    STATE(275), 1,
      sym_type_parameter,
  [5926] = 1,
    ACTIONS(555), 3,
      anon_sym_extends,
      anon_sym_implements,
      anon_sym_LBRACE,
  [5932] = 2,
    ACTIONS(175), 1,
      sym_number,
    STATE(38), 1,
      aux_sym_runtime_visible_annotations_repeat1,
  [5939] = 2,
    ACTIONS(737), 1,
      anon_sym_POUND,
    STATE(206), 1,
      sym__hash_number,
  [5946] = 2,
    ACTIONS(3), 1,
      anon_sym_Compiledfrom,
    STATE(92), 1,
      sym_header_info_compile,
  [5953] = 2,
    ACTIONS(739), 1,
      sym__identifier,
    STATE(97), 1,
      sym_identifier,
  [5960] = 2,
    ACTIONS(737), 1,
      anon_sym_POUND,
    STATE(426), 1,
      sym__hash_number,
  [5967] = 1,
    ACTIONS(657), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [5972] = 1,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5977] = 1,
    ACTIONS(741), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [5982] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(472), 1,
      sym_class_def_plain_body,
  [5989] = 1,
    ACTIONS(729), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5994] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(473), 1,
      sym_class_def_plain_body,
  [6001] = 2,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym__hash_number,
  [6008] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(451), 1,
      sym_class_def_plain_body,
  [6015] = 2,
    ACTIONS(743), 1,
      anon_sym_throws,
    STATE(54), 1,
      sym_method_throws,
  [6022] = 2,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(124), 1,
      sym_identifier,
  [6029] = 1,
    ACTIONS(745), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [6034] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(407), 1,
      sym_class_def_plain_body,
  [6041] = 2,
    ACTIONS(737), 1,
      anon_sym_POUND,
    STATE(214), 1,
      sym__hash_number,
  [6048] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(476), 1,
      sym_class_def_plain_body,
  [6055] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(385), 1,
      sym_class_def_plain_body,
  [6062] = 2,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym__wrapped_hex_val,
  [6069] = 2,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(416), 1,
      sym__hash_number,
  [6076] = 2,
    ACTIONS(737), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym__hash_number,
  [6083] = 2,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(123), 1,
      sym_identifier,
  [6090] = 2,
    ACTIONS(739), 1,
      sym__identifier,
    STATE(128), 1,
      sym_identifier,
  [6097] = 1,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6102] = 2,
    ACTIONS(751), 1,
      anon_sym_Constantpool_COLON,
    STATE(126), 1,
      sym_constant_pool_def,
  [6109] = 2,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(393), 1,
      sym__hash_number,
  [6116] = 2,
    ACTIONS(739), 1,
      sym__identifier,
    STATE(127), 1,
      sym_identifier,
  [6123] = 1,
    ACTIONS(753), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [6128] = 2,
    ACTIONS(755), 1,
      sym__identifier,
    STATE(17), 1,
      sym_identifier,
  [6135] = 2,
    ACTIONS(757), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(63), 1,
      sym_line_number_table_def,
  [6142] = 2,
    ACTIONS(400), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(120), 1,
      sym_source_file_def,
  [6149] = 2,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_args,
  [6156] = 2,
    ACTIONS(739), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
  [6163] = 2,
    ACTIONS(755), 1,
      sym__identifier,
    STATE(19), 1,
      sym_identifier,
  [6170] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(439), 1,
      sym_class_def_plain_body,
  [6177] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(469), 1,
      sym_class_def_plain_body,
  [6184] = 2,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(403), 1,
      sym__hash_number,
  [6191] = 2,
    ACTIONS(759), 1,
      anon_sym_POUND,
    STATE(402), 1,
      sym__hash_number,
  [6198] = 2,
    ACTIONS(737), 1,
      anon_sym_POUND,
    STATE(382), 1,
      sym__hash_number,
  [6205] = 2,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(104), 1,
      sym_identifier,
  [6212] = 1,
    ACTIONS(761), 2,
      anon_sym_COMMA,
      sym_number,
  [6217] = 2,
    ACTIONS(737), 1,
      anon_sym_POUND,
    STATE(211), 1,
      sym__hash_number,
  [6224] = 2,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(103), 1,
      sym_identifier,
  [6231] = 2,
    ACTIONS(719), 1,
      aux_sym_code_info_stat_token1,
    STATE(356), 1,
      sym_code_info_stat,
  [6238] = 1,
    ACTIONS(763), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [6243] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(430), 1,
      sym_class_def_plain_body,
  [6250] = 2,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(276), 1,
      sym_identifier,
  [6257] = 2,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(455), 1,
      sym__hash_number,
  [6264] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(433), 1,
      sym_class_def_plain_body,
  [6271] = 2,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(465), 1,
      sym__hash_number,
  [6278] = 2,
    ACTIONS(765), 1,
      anon_sym_MD5checksum,
    STATE(304), 1,
      sym_header_info_md5,
  [6285] = 2,
    ACTIONS(767), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(442), 1,
      sym__rest_of_the_line,
  [6292] = 1,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      sym_number,
  [6297] = 2,
    ACTIONS(769), 1,
      aux_sym_instruction_token1,
    STATE(364), 1,
      sym_instruction,
  [6304] = 2,
    ACTIONS(421), 1,
      anon_sym_POUND,
    STATE(440), 1,
      sym__hash_number,
  [6311] = 2,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(130), 1,
      sym_identifier,
  [6318] = 2,
    ACTIONS(771), 1,
      anon_sym_flags_COLON,
    STATE(8), 1,
      sym_flag_def,
  [6325] = 2,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(132), 1,
      sym_identifier,
  [6332] = 2,
    ACTIONS(773), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(41), 1,
      sym__rest_of_the_line,
  [6339] = 2,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__wrapped_hex_val,
  [6346] = 2,
    ACTIONS(777), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym__endl,
  [6353] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(450), 1,
      sym_class_def_plain_body,
  [6360] = 2,
    ACTIONS(773), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(47), 1,
      sym__rest_of_the_line,
  [6367] = 2,
    ACTIONS(781), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym__endl,
  [6374] = 1,
    ACTIONS(785), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [6379] = 2,
    ACTIONS(787), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym__endl,
  [6386] = 2,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(446), 1,
      sym_class_def_plain_body,
  [6393] = 2,
    ACTIONS(791), 1,
      anon_sym_Lastmodified,
    STATE(354), 1,
      sym_header_info_last_mod,
  [6400] = 2,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(375), 1,
      sym_identifier,
  [6407] = 2,
    ACTIONS(440), 1,
      sym__identifier,
    STATE(397), 1,
      sym_identifier,
  [6414] = 1,
    ACTIONS(793), 2,
      ts_builtin_sym_end,
      sym_number,
  [6419] = 1,
    ACTIONS(795), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [6424] = 2,
    ACTIONS(767), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(399), 1,
      sym__rest_of_the_line,
  [6431] = 1,
    ACTIONS(797), 1,
      anon_sym_e,
  [6435] = 1,
    ACTIONS(799), 1,
      sym_hex_value,
  [6439] = 1,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
  [6443] = 1,
    ACTIONS(803), 1,
      sym_number,
  [6447] = 1,
    ACTIONS(805), 1,
      sym_number,
  [6451] = 1,
    ACTIONS(807), 1,
      anon_sym_LPAREN_RPAREN,
  [6455] = 1,
    ACTIONS(809), 1,
      sym_comment,
  [6459] = 1,
    ACTIONS(811), 1,
      sym__endl,
  [6463] = 1,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
  [6467] = 1,
    ACTIONS(815), 1,
      ts_builtin_sym_end,
  [6471] = 1,
    ACTIONS(817), 1,
      sym_number,
  [6475] = 1,
    ACTIONS(819), 1,
      sym__endl,
  [6479] = 1,
    ACTIONS(821), 1,
      anon_sym_COLON2,
  [6483] = 1,
    ACTIONS(823), 1,
      anon_sym_DOT,
  [6487] = 1,
    ACTIONS(825), 1,
      sym__endl,
  [6491] = 1,
    ACTIONS(827), 1,
      sym__endl,
  [6495] = 1,
    ACTIONS(829), 1,
      sym_comment,
  [6499] = 1,
    ACTIONS(831), 1,
      anon_sym_class,
  [6503] = 1,
    ACTIONS(833), 1,
      aux_sym_header_info_compile_token1,
  [6507] = 1,
    ACTIONS(835), 1,
      anon_sym_SEMI,
  [6511] = 1,
    ACTIONS(837), 1,
      anon_sym_EQ2,
  [6515] = 1,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [6519] = 1,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [6523] = 1,
    ACTIONS(843), 1,
      sym__endl,
  [6527] = 1,
    ACTIONS(845), 1,
      ts_builtin_sym_end,
  [6531] = 1,
    ACTIONS(847), 1,
      sym__endl,
  [6535] = 1,
    ACTIONS(849), 1,
      anon_sym_SEMI,
  [6539] = 1,
    ACTIONS(851), 1,
      ts_builtin_sym_end,
  [6543] = 1,
    ACTIONS(853), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
  [6547] = 1,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
  [6551] = 1,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
  [6555] = 1,
    ACTIONS(857), 1,
      ts_builtin_sym_end,
  [6559] = 1,
    ACTIONS(859), 1,
      ts_builtin_sym_end,
  [6563] = 1,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
  [6567] = 1,
    ACTIONS(863), 1,
      anon_sym_SEMI,
  [6571] = 1,
    ACTIONS(865), 1,
      ts_builtin_sym_end,
  [6575] = 1,
    ACTIONS(347), 1,
      sym__endl,
  [6579] = 1,
    ACTIONS(867), 1,
      anon_sym_COLON,
  [6583] = 1,
    ACTIONS(869), 1,
      anon_sym_Lastmodified,
  [6587] = 1,
    ACTIONS(871), 1,
      anon_sym_EQ,
  [6591] = 1,
    ACTIONS(873), 1,
      anon_sym_SEMI,
  [6595] = 1,
    ACTIONS(875), 1,
      ts_builtin_sym_end,
  [6599] = 1,
    ACTIONS(877), 1,
      ts_builtin_sym_end,
  [6603] = 1,
    ACTIONS(879), 1,
      aux_sym_source_file_def_token1,
  [6607] = 1,
    ACTIONS(881), 1,
      sym_number,
  [6611] = 1,
    ACTIONS(883), 1,
      anon_sym_EQ,
  [6615] = 1,
    ACTIONS(885), 1,
      sym_number,
  [6619] = 1,
    ACTIONS(887), 1,
      anon_sym_COLON,
  [6623] = 1,
    ACTIONS(889), 1,
      aux_sym_annotation_default_token1,
  [6627] = 1,
    ACTIONS(891), 1,
      anon_sym_of,
  [6631] = 1,
    ACTIONS(893), 1,
      anon_sym_Compiledfrom,
  [6635] = 1,
    ACTIONS(895), 1,
      ts_builtin_sym_end,
  [6639] = 1,
    ACTIONS(897), 1,
      ts_builtin_sym_end,
  [6643] = 1,
    ACTIONS(899), 1,
      ts_builtin_sym_end,
  [6647] = 1,
    ACTIONS(901), 1,
      ts_builtin_sym_end,
  [6651] = 1,
    ACTIONS(903), 1,
      ts_builtin_sym_end,
  [6655] = 1,
    ACTIONS(905), 1,
      ts_builtin_sym_end,
  [6659] = 1,
    ACTIONS(907), 1,
      anon_sym_default_value_COLON,
  [6663] = 1,
    ACTIONS(909), 1,
      ts_builtin_sym_end,
  [6667] = 1,
    ACTIONS(911), 1,
      anon_sym_SEMI,
  [6671] = 1,
    ACTIONS(913), 1,
      anon_sym_Lastmodified,
  [6675] = 1,
    ACTIONS(915), 1,
      ts_builtin_sym_end,
  [6679] = 1,
    ACTIONS(917), 1,
      ts_builtin_sym_end,
  [6683] = 1,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
  [6687] = 1,
    ACTIONS(921), 1,
      sym_md5,
  [6691] = 1,
    ACTIONS(923), 1,
      anon_sym_MD5checksum,
  [6695] = 1,
    ACTIONS(731), 1,
      ts_builtin_sym_end,
  [6699] = 1,
    ACTIONS(925), 1,
      anon_sym_flags_COLON,
  [6703] = 1,
    ACTIONS(927), 1,
      ts_builtin_sym_end,
  [6707] = 1,
    ACTIONS(929), 1,
      ts_builtin_sym_end,
  [6711] = 1,
    ACTIONS(931), 1,
      anon_sym_Lastmodified,
  [6715] = 1,
    ACTIONS(933), 1,
      sym__path_segment,
  [6719] = 1,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [6723] = 1,
    ACTIONS(937), 1,
      ts_builtin_sym_end,
  [6727] = 1,
    ACTIONS(939), 1,
      ts_builtin_sym_end,
  [6731] = 1,
    ACTIONS(941), 1,
      aux_sym_class_info_item_simple_token1,
  [6735] = 1,
    ACTIONS(943), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [6739] = 1,
    ACTIONS(701), 1,
      anon_sym_SEMI,
  [6743] = 1,
    ACTIONS(945), 1,
      anon_sym_EQ,
  [6747] = 1,
    ACTIONS(947), 1,
      sym_decimal_floating_point_literal,
  [6751] = 1,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
  [6755] = 1,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
  [6759] = 1,
    ACTIONS(951), 1,
      sym__identifier,
  [6763] = 1,
    ACTIONS(953), 1,
      sym_number,
  [6767] = 1,
    ACTIONS(955), 1,
      anon_sym_Lastmodified,
  [6771] = 1,
    ACTIONS(957), 1,
      anon_sym_Lastmodified,
  [6775] = 1,
    ACTIONS(959), 1,
      sym_descriptor_value,
  [6779] = 1,
    ACTIONS(961), 1,
      sym_number,
  [6783] = 1,
    ACTIONS(963), 1,
      anon_sym_COLON2,
  [6787] = 1,
    ACTIONS(965), 1,
      anon_sym_DOT,
  [6791] = 1,
    ACTIONS(967), 1,
      anon_sym_RBRACK,
  [6795] = 1,
    ACTIONS(969), 1,
      sym_flag_value,
  [6799] = 1,
    ACTIONS(971), 1,
      ts_builtin_sym_end,
  [6803] = 1,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [6807] = 1,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
  [6811] = 1,
    ACTIONS(977), 1,
      ts_builtin_sym_end,
  [6815] = 1,
    ACTIONS(979), 1,
      ts_builtin_sym_end,
  [6819] = 1,
    ACTIONS(981), 1,
      sym_flag_value,
  [6823] = 1,
    ACTIONS(983), 1,
      ts_builtin_sym_end,
  [6827] = 1,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
  [6831] = 1,
    ACTIONS(987), 1,
      sym_number,
  [6835] = 1,
    ACTIONS(989), 1,
      anon_sym_RBRACK,
  [6839] = 1,
    ACTIONS(991), 1,
      ts_builtin_sym_end,
  [6843] = 1,
    ACTIONS(993), 1,
      ts_builtin_sym_end,
  [6847] = 1,
    ACTIONS(713), 1,
      anon_sym_SEMI,
  [6851] = 1,
    ACTIONS(995), 1,
      anon_sym_COLON,
  [6855] = 1,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
  [6859] = 1,
    ACTIONS(997), 1,
      sym_hex_value,
  [6863] = 1,
    ACTIONS(999), 1,
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
  [SMALL_STATE(12)] = 527,
  [SMALL_STATE(13)] = 563,
  [SMALL_STATE(14)] = 601,
  [SMALL_STATE(15)] = 639,
  [SMALL_STATE(16)] = 670,
  [SMALL_STATE(17)] = 713,
  [SMALL_STATE(18)] = 744,
  [SMALL_STATE(19)] = 787,
  [SMALL_STATE(20)] = 818,
  [SMALL_STATE(21)] = 849,
  [SMALL_STATE(22)] = 890,
  [SMALL_STATE(23)] = 921,
  [SMALL_STATE(24)] = 954,
  [SMALL_STATE(25)] = 986,
  [SMALL_STATE(26)] = 1022,
  [SMALL_STATE(27)] = 1056,
  [SMALL_STATE(28)] = 1086,
  [SMALL_STATE(29)] = 1116,
  [SMALL_STATE(30)] = 1150,
  [SMALL_STATE(31)] = 1180,
  [SMALL_STATE(32)] = 1210,
  [SMALL_STATE(33)] = 1240,
  [SMALL_STATE(34)] = 1270,
  [SMALL_STATE(35)] = 1307,
  [SMALL_STATE(36)] = 1344,
  [SMALL_STATE(37)] = 1381,
  [SMALL_STATE(38)] = 1410,
  [SMALL_STATE(39)] = 1443,
  [SMALL_STATE(40)] = 1472,
  [SMALL_STATE(41)] = 1501,
  [SMALL_STATE(42)] = 1530,
  [SMALL_STATE(43)] = 1563,
  [SMALL_STATE(44)] = 1595,
  [SMALL_STATE(45)] = 1627,
  [SMALL_STATE(46)] = 1659,
  [SMALL_STATE(47)] = 1691,
  [SMALL_STATE(48)] = 1719,
  [SMALL_STATE(49)] = 1747,
  [SMALL_STATE(50)] = 1775,
  [SMALL_STATE(51)] = 1806,
  [SMALL_STATE(52)] = 1837,
  [SMALL_STATE(53)] = 1868,
  [SMALL_STATE(54)] = 1899,
  [SMALL_STATE(55)] = 1925,
  [SMALL_STATE(56)] = 1951,
  [SMALL_STATE(57)] = 1981,
  [SMALL_STATE(58)] = 2011,
  [SMALL_STATE(59)] = 2036,
  [SMALL_STATE(60)] = 2061,
  [SMALL_STATE(61)] = 2086,
  [SMALL_STATE(62)] = 2111,
  [SMALL_STATE(63)] = 2136,
  [SMALL_STATE(64)] = 2161,
  [SMALL_STATE(65)] = 2186,
  [SMALL_STATE(66)] = 2211,
  [SMALL_STATE(67)] = 2245,
  [SMALL_STATE(68)] = 2278,
  [SMALL_STATE(69)] = 2313,
  [SMALL_STATE(70)] = 2341,
  [SMALL_STATE(71)] = 2377,
  [SMALL_STATE(72)] = 2413,
  [SMALL_STATE(73)] = 2441,
  [SMALL_STATE(74)] = 2477,
  [SMALL_STATE(75)] = 2500,
  [SMALL_STATE(76)] = 2523,
  [SMALL_STATE(77)] = 2556,
  [SMALL_STATE(78)] = 2575,
  [SMALL_STATE(79)] = 2605,
  [SMALL_STATE(80)] = 2635,
  [SMALL_STATE(81)] = 2665,
  [SMALL_STATE(82)] = 2689,
  [SMALL_STATE(83)] = 2719,
  [SMALL_STATE(84)] = 2746,
  [SMALL_STATE(85)] = 2773,
  [SMALL_STATE(86)] = 2800,
  [SMALL_STATE(87)] = 2827,
  [SMALL_STATE(88)] = 2854,
  [SMALL_STATE(89)] = 2871,
  [SMALL_STATE(90)] = 2898,
  [SMALL_STATE(91)] = 2925,
  [SMALL_STATE(92)] = 2942,
  [SMALL_STATE(93)] = 2959,
  [SMALL_STATE(94)] = 2986,
  [SMALL_STATE(95)] = 3013,
  [SMALL_STATE(96)] = 3040,
  [SMALL_STATE(97)] = 3076,
  [SMALL_STATE(98)] = 3112,
  [SMALL_STATE(99)] = 3132,
  [SMALL_STATE(100)] = 3152,
  [SMALL_STATE(101)] = 3182,
  [SMALL_STATE(102)] = 3212,
  [SMALL_STATE(103)] = 3228,
  [SMALL_STATE(104)] = 3241,
  [SMALL_STATE(105)] = 3254,
  [SMALL_STATE(106)] = 3270,
  [SMALL_STATE(107)] = 3294,
  [SMALL_STATE(108)] = 3318,
  [SMALL_STATE(109)] = 3330,
  [SMALL_STATE(110)] = 3350,
  [SMALL_STATE(111)] = 3364,
  [SMALL_STATE(112)] = 3378,
  [SMALL_STATE(113)] = 3390,
  [SMALL_STATE(114)] = 3406,
  [SMALL_STATE(115)] = 3430,
  [SMALL_STATE(116)] = 3442,
  [SMALL_STATE(117)] = 3470,
  [SMALL_STATE(118)] = 3490,
  [SMALL_STATE(119)] = 3502,
  [SMALL_STATE(120)] = 3514,
  [SMALL_STATE(121)] = 3542,
  [SMALL_STATE(122)] = 3565,
  [SMALL_STATE(123)] = 3576,
  [SMALL_STATE(124)] = 3601,
  [SMALL_STATE(125)] = 3626,
  [SMALL_STATE(126)] = 3637,
  [SMALL_STATE(127)] = 3660,
  [SMALL_STATE(128)] = 3673,
  [SMALL_STATE(129)] = 3686,
  [SMALL_STATE(130)] = 3709,
  [SMALL_STATE(131)] = 3734,
  [SMALL_STATE(132)] = 3745,
  [SMALL_STATE(133)] = 3770,
  [SMALL_STATE(134)] = 3792,
  [SMALL_STATE(135)] = 3810,
  [SMALL_STATE(136)] = 3822,
  [SMALL_STATE(137)] = 3834,
  [SMALL_STATE(138)] = 3854,
  [SMALL_STATE(139)] = 3872,
  [SMALL_STATE(140)] = 3890,
  [SMALL_STATE(141)] = 3906,
  [SMALL_STATE(142)] = 3928,
  [SMALL_STATE(143)] = 3946,
  [SMALL_STATE(144)] = 3962,
  [SMALL_STATE(145)] = 3974,
  [SMALL_STATE(146)] = 3990,
  [SMALL_STATE(147)] = 4004,
  [SMALL_STATE(148)] = 4020,
  [SMALL_STATE(149)] = 4038,
  [SMALL_STATE(150)] = 4048,
  [SMALL_STATE(151)] = 4066,
  [SMALL_STATE(152)] = 4088,
  [SMALL_STATE(153)] = 4104,
  [SMALL_STATE(154)] = 4116,
  [SMALL_STATE(155)] = 4132,
  [SMALL_STATE(156)] = 4144,
  [SMALL_STATE(157)] = 4162,
  [SMALL_STATE(158)] = 4180,
  [SMALL_STATE(159)] = 4194,
  [SMALL_STATE(160)] = 4212,
  [SMALL_STATE(161)] = 4222,
  [SMALL_STATE(162)] = 4240,
  [SMALL_STATE(163)] = 4258,
  [SMALL_STATE(164)] = 4274,
  [SMALL_STATE(165)] = 4288,
  [SMALL_STATE(166)] = 4306,
  [SMALL_STATE(167)] = 4324,
  [SMALL_STATE(168)] = 4342,
  [SMALL_STATE(169)] = 4360,
  [SMALL_STATE(170)] = 4378,
  [SMALL_STATE(171)] = 4396,
  [SMALL_STATE(172)] = 4414,
  [SMALL_STATE(173)] = 4432,
  [SMALL_STATE(174)] = 4450,
  [SMALL_STATE(175)] = 4472,
  [SMALL_STATE(176)] = 4490,
  [SMALL_STATE(177)] = 4509,
  [SMALL_STATE(178)] = 4528,
  [SMALL_STATE(179)] = 4547,
  [SMALL_STATE(180)] = 4566,
  [SMALL_STATE(181)] = 4577,
  [SMALL_STATE(182)] = 4596,
  [SMALL_STATE(183)] = 4615,
  [SMALL_STATE(184)] = 4632,
  [SMALL_STATE(185)] = 4651,
  [SMALL_STATE(186)] = 4670,
  [SMALL_STATE(187)] = 4679,
  [SMALL_STATE(188)] = 4690,
  [SMALL_STATE(189)] = 4705,
  [SMALL_STATE(190)] = 4724,
  [SMALL_STATE(191)] = 4743,
  [SMALL_STATE(192)] = 4760,
  [SMALL_STATE(193)] = 4771,
  [SMALL_STATE(194)] = 4785,
  [SMALL_STATE(195)] = 4799,
  [SMALL_STATE(196)] = 4815,
  [SMALL_STATE(197)] = 4829,
  [SMALL_STATE(198)] = 4839,
  [SMALL_STATE(199)] = 4853,
  [SMALL_STATE(200)] = 4869,
  [SMALL_STATE(201)] = 4883,
  [SMALL_STATE(202)] = 4891,
  [SMALL_STATE(203)] = 4903,
  [SMALL_STATE(204)] = 4917,
  [SMALL_STATE(205)] = 4933,
  [SMALL_STATE(206)] = 4943,
  [SMALL_STATE(207)] = 4953,
  [SMALL_STATE(208)] = 4969,
  [SMALL_STATE(209)] = 4979,
  [SMALL_STATE(210)] = 4993,
  [SMALL_STATE(211)] = 5003,
  [SMALL_STATE(212)] = 5013,
  [SMALL_STATE(213)] = 5027,
  [SMALL_STATE(214)] = 5039,
  [SMALL_STATE(215)] = 5049,
  [SMALL_STATE(216)] = 5063,
  [SMALL_STATE(217)] = 5077,
  [SMALL_STATE(218)] = 5091,
  [SMALL_STATE(219)] = 5105,
  [SMALL_STATE(220)] = 5119,
  [SMALL_STATE(221)] = 5133,
  [SMALL_STATE(222)] = 5145,
  [SMALL_STATE(223)] = 5159,
  [SMALL_STATE(224)] = 5170,
  [SMALL_STATE(225)] = 5183,
  [SMALL_STATE(226)] = 5194,
  [SMALL_STATE(227)] = 5207,
  [SMALL_STATE(228)] = 5218,
  [SMALL_STATE(229)] = 5231,
  [SMALL_STATE(230)] = 5238,
  [SMALL_STATE(231)] = 5251,
  [SMALL_STATE(232)] = 5262,
  [SMALL_STATE(233)] = 5273,
  [SMALL_STATE(234)] = 5282,
  [SMALL_STATE(235)] = 5289,
  [SMALL_STATE(236)] = 5302,
  [SMALL_STATE(237)] = 5315,
  [SMALL_STATE(238)] = 5328,
  [SMALL_STATE(239)] = 5337,
  [SMALL_STATE(240)] = 5348,
  [SMALL_STATE(241)] = 5361,
  [SMALL_STATE(242)] = 5374,
  [SMALL_STATE(243)] = 5385,
  [SMALL_STATE(244)] = 5392,
  [SMALL_STATE(245)] = 5399,
  [SMALL_STATE(246)] = 5406,
  [SMALL_STATE(247)] = 5417,
  [SMALL_STATE(248)] = 5424,
  [SMALL_STATE(249)] = 5431,
  [SMALL_STATE(250)] = 5444,
  [SMALL_STATE(251)] = 5453,
  [SMALL_STATE(252)] = 5462,
  [SMALL_STATE(253)] = 5475,
  [SMALL_STATE(254)] = 5482,
  [SMALL_STATE(255)] = 5492,
  [SMALL_STATE(256)] = 5502,
  [SMALL_STATE(257)] = 5512,
  [SMALL_STATE(258)] = 5518,
  [SMALL_STATE(259)] = 5528,
  [SMALL_STATE(260)] = 5534,
  [SMALL_STATE(261)] = 5544,
  [SMALL_STATE(262)] = 5554,
  [SMALL_STATE(263)] = 5564,
  [SMALL_STATE(264)] = 5574,
  [SMALL_STATE(265)] = 5584,
  [SMALL_STATE(266)] = 5594,
  [SMALL_STATE(267)] = 5602,
  [SMALL_STATE(268)] = 5612,
  [SMALL_STATE(269)] = 5622,
  [SMALL_STATE(270)] = 5632,
  [SMALL_STATE(271)] = 5642,
  [SMALL_STATE(272)] = 5652,
  [SMALL_STATE(273)] = 5662,
  [SMALL_STATE(274)] = 5672,
  [SMALL_STATE(275)] = 5680,
  [SMALL_STATE(276)] = 5690,
  [SMALL_STATE(277)] = 5696,
  [SMALL_STATE(278)] = 5706,
  [SMALL_STATE(279)] = 5714,
  [SMALL_STATE(280)] = 5724,
  [SMALL_STATE(281)] = 5734,
  [SMALL_STATE(282)] = 5744,
  [SMALL_STATE(283)] = 5754,
  [SMALL_STATE(284)] = 5764,
  [SMALL_STATE(285)] = 5770,
  [SMALL_STATE(286)] = 5780,
  [SMALL_STATE(287)] = 5790,
  [SMALL_STATE(288)] = 5800,
  [SMALL_STATE(289)] = 5808,
  [SMALL_STATE(290)] = 5818,
  [SMALL_STATE(291)] = 5828,
  [SMALL_STATE(292)] = 5838,
  [SMALL_STATE(293)] = 5848,
  [SMALL_STATE(294)] = 5858,
  [SMALL_STATE(295)] = 5868,
  [SMALL_STATE(296)] = 5878,
  [SMALL_STATE(297)] = 5888,
  [SMALL_STATE(298)] = 5896,
  [SMALL_STATE(299)] = 5906,
  [SMALL_STATE(300)] = 5916,
  [SMALL_STATE(301)] = 5926,
  [SMALL_STATE(302)] = 5932,
  [SMALL_STATE(303)] = 5939,
  [SMALL_STATE(304)] = 5946,
  [SMALL_STATE(305)] = 5953,
  [SMALL_STATE(306)] = 5960,
  [SMALL_STATE(307)] = 5967,
  [SMALL_STATE(308)] = 5972,
  [SMALL_STATE(309)] = 5977,
  [SMALL_STATE(310)] = 5982,
  [SMALL_STATE(311)] = 5989,
  [SMALL_STATE(312)] = 5994,
  [SMALL_STATE(313)] = 6001,
  [SMALL_STATE(314)] = 6008,
  [SMALL_STATE(315)] = 6015,
  [SMALL_STATE(316)] = 6022,
  [SMALL_STATE(317)] = 6029,
  [SMALL_STATE(318)] = 6034,
  [SMALL_STATE(319)] = 6041,
  [SMALL_STATE(320)] = 6048,
  [SMALL_STATE(321)] = 6055,
  [SMALL_STATE(322)] = 6062,
  [SMALL_STATE(323)] = 6069,
  [SMALL_STATE(324)] = 6076,
  [SMALL_STATE(325)] = 6083,
  [SMALL_STATE(326)] = 6090,
  [SMALL_STATE(327)] = 6097,
  [SMALL_STATE(328)] = 6102,
  [SMALL_STATE(329)] = 6109,
  [SMALL_STATE(330)] = 6116,
  [SMALL_STATE(331)] = 6123,
  [SMALL_STATE(332)] = 6128,
  [SMALL_STATE(333)] = 6135,
  [SMALL_STATE(334)] = 6142,
  [SMALL_STATE(335)] = 6149,
  [SMALL_STATE(336)] = 6156,
  [SMALL_STATE(337)] = 6163,
  [SMALL_STATE(338)] = 6170,
  [SMALL_STATE(339)] = 6177,
  [SMALL_STATE(340)] = 6184,
  [SMALL_STATE(341)] = 6191,
  [SMALL_STATE(342)] = 6198,
  [SMALL_STATE(343)] = 6205,
  [SMALL_STATE(344)] = 6212,
  [SMALL_STATE(345)] = 6217,
  [SMALL_STATE(346)] = 6224,
  [SMALL_STATE(347)] = 6231,
  [SMALL_STATE(348)] = 6238,
  [SMALL_STATE(349)] = 6243,
  [SMALL_STATE(350)] = 6250,
  [SMALL_STATE(351)] = 6257,
  [SMALL_STATE(352)] = 6264,
  [SMALL_STATE(353)] = 6271,
  [SMALL_STATE(354)] = 6278,
  [SMALL_STATE(355)] = 6285,
  [SMALL_STATE(356)] = 6292,
  [SMALL_STATE(357)] = 6297,
  [SMALL_STATE(358)] = 6304,
  [SMALL_STATE(359)] = 6311,
  [SMALL_STATE(360)] = 6318,
  [SMALL_STATE(361)] = 6325,
  [SMALL_STATE(362)] = 6332,
  [SMALL_STATE(363)] = 6339,
  [SMALL_STATE(364)] = 6346,
  [SMALL_STATE(365)] = 6353,
  [SMALL_STATE(366)] = 6360,
  [SMALL_STATE(367)] = 6367,
  [SMALL_STATE(368)] = 6374,
  [SMALL_STATE(369)] = 6379,
  [SMALL_STATE(370)] = 6386,
  [SMALL_STATE(371)] = 6393,
  [SMALL_STATE(372)] = 6400,
  [SMALL_STATE(373)] = 6407,
  [SMALL_STATE(374)] = 6414,
  [SMALL_STATE(375)] = 6419,
  [SMALL_STATE(376)] = 6424,
  [SMALL_STATE(377)] = 6431,
  [SMALL_STATE(378)] = 6435,
  [SMALL_STATE(379)] = 6439,
  [SMALL_STATE(380)] = 6443,
  [SMALL_STATE(381)] = 6447,
  [SMALL_STATE(382)] = 6451,
  [SMALL_STATE(383)] = 6455,
  [SMALL_STATE(384)] = 6459,
  [SMALL_STATE(385)] = 6463,
  [SMALL_STATE(386)] = 6467,
  [SMALL_STATE(387)] = 6471,
  [SMALL_STATE(388)] = 6475,
  [SMALL_STATE(389)] = 6479,
  [SMALL_STATE(390)] = 6483,
  [SMALL_STATE(391)] = 6487,
  [SMALL_STATE(392)] = 6491,
  [SMALL_STATE(393)] = 6495,
  [SMALL_STATE(394)] = 6499,
  [SMALL_STATE(395)] = 6503,
  [SMALL_STATE(396)] = 6507,
  [SMALL_STATE(397)] = 6511,
  [SMALL_STATE(398)] = 6515,
  [SMALL_STATE(399)] = 6519,
  [SMALL_STATE(400)] = 6523,
  [SMALL_STATE(401)] = 6527,
  [SMALL_STATE(402)] = 6531,
  [SMALL_STATE(403)] = 6535,
  [SMALL_STATE(404)] = 6539,
  [SMALL_STATE(405)] = 6543,
  [SMALL_STATE(406)] = 6547,
  [SMALL_STATE(407)] = 6551,
  [SMALL_STATE(408)] = 6555,
  [SMALL_STATE(409)] = 6559,
  [SMALL_STATE(410)] = 6563,
  [SMALL_STATE(411)] = 6567,
  [SMALL_STATE(412)] = 6571,
  [SMALL_STATE(413)] = 6575,
  [SMALL_STATE(414)] = 6579,
  [SMALL_STATE(415)] = 6583,
  [SMALL_STATE(416)] = 6587,
  [SMALL_STATE(417)] = 6591,
  [SMALL_STATE(418)] = 6595,
  [SMALL_STATE(419)] = 6599,
  [SMALL_STATE(420)] = 6603,
  [SMALL_STATE(421)] = 6607,
  [SMALL_STATE(422)] = 6611,
  [SMALL_STATE(423)] = 6615,
  [SMALL_STATE(424)] = 6619,
  [SMALL_STATE(425)] = 6623,
  [SMALL_STATE(426)] = 6627,
  [SMALL_STATE(427)] = 6631,
  [SMALL_STATE(428)] = 6635,
  [SMALL_STATE(429)] = 6639,
  [SMALL_STATE(430)] = 6643,
  [SMALL_STATE(431)] = 6647,
  [SMALL_STATE(432)] = 6651,
  [SMALL_STATE(433)] = 6655,
  [SMALL_STATE(434)] = 6659,
  [SMALL_STATE(435)] = 6663,
  [SMALL_STATE(436)] = 6667,
  [SMALL_STATE(437)] = 6671,
  [SMALL_STATE(438)] = 6675,
  [SMALL_STATE(439)] = 6679,
  [SMALL_STATE(440)] = 6683,
  [SMALL_STATE(441)] = 6687,
  [SMALL_STATE(442)] = 6691,
  [SMALL_STATE(443)] = 6695,
  [SMALL_STATE(444)] = 6699,
  [SMALL_STATE(445)] = 6703,
  [SMALL_STATE(446)] = 6707,
  [SMALL_STATE(447)] = 6711,
  [SMALL_STATE(448)] = 6715,
  [SMALL_STATE(449)] = 6719,
  [SMALL_STATE(450)] = 6723,
  [SMALL_STATE(451)] = 6727,
  [SMALL_STATE(452)] = 6731,
  [SMALL_STATE(453)] = 6735,
  [SMALL_STATE(454)] = 6739,
  [SMALL_STATE(455)] = 6743,
  [SMALL_STATE(456)] = 6747,
  [SMALL_STATE(457)] = 6751,
  [SMALL_STATE(458)] = 6755,
  [SMALL_STATE(459)] = 6759,
  [SMALL_STATE(460)] = 6763,
  [SMALL_STATE(461)] = 6767,
  [SMALL_STATE(462)] = 6771,
  [SMALL_STATE(463)] = 6775,
  [SMALL_STATE(464)] = 6779,
  [SMALL_STATE(465)] = 6783,
  [SMALL_STATE(466)] = 6787,
  [SMALL_STATE(467)] = 6791,
  [SMALL_STATE(468)] = 6795,
  [SMALL_STATE(469)] = 6799,
  [SMALL_STATE(470)] = 6803,
  [SMALL_STATE(471)] = 6807,
  [SMALL_STATE(472)] = 6811,
  [SMALL_STATE(473)] = 6815,
  [SMALL_STATE(474)] = 6819,
  [SMALL_STATE(475)] = 6823,
  [SMALL_STATE(476)] = 6827,
  [SMALL_STATE(477)] = 6831,
  [SMALL_STATE(478)] = 6835,
  [SMALL_STATE(479)] = 6839,
  [SMALL_STATE(480)] = 6843,
  [SMALL_STATE(481)] = 6847,
  [SMALL_STATE(482)] = 6851,
  [SMALL_STATE(483)] = 6855,
  [SMALL_STATE(484)] = 6859,
  [SMALL_STATE(485)] = 6863,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(20),
  [10] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(56),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_def_plain_body_repeat1, 2), SHIFT_REPEAT(37),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(474),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .production_id = 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_hex_val, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 11),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 11),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_the_line, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_the_line, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(467),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runtime_visible_annotations, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_visible_annotations, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 7),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_default, 6, .production_id = 17),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_default, 6, .production_id = 17),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 2), SHIFT_REPEAT(424),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(85),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_number_table_def, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_throws, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_throws, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(387),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 6, .production_id = 17),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runtime_visible_annotations_repeat1, 6, .production_id = 17),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprecated, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 6),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 6),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exceptions, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exceptions, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numered_line, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(57),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_def_verbose, 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_def_verbose, 7),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_def_plain_body_item, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body_item, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_def, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_item, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_item, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 2), SHIFT_REPEAT(75),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_classes, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(74),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inner_classes_repeat1, 8),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 9),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(410),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 13),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 8),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 10),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(478),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 6, .production_id = 9),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_members, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(423),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(322),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(290),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 6),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nested_members_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nested_members_repeat1, 2), SHIFT_REPEAT(197),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superclass, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superclass, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 7, .production_id = 13),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4, .production_id = 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 8),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 5, .production_id = 10),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_const_pool_item, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(468),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type_list, 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_type_list, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2), SHIFT_REPEAT(7),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_file_verbose_repeat1, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2, .production_id = 15),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2, .production_id = 15),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(86),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4, .production_id = 16),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 3),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_type_list_repeat1, 2), SHIFT_REPEAT(87),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(452),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(414),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_annotations, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_interfaces, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_super_interfaces, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5, .production_id = 16),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(94),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_annotations_repeat1, 2),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_annotations_repeat1, 2), SHIFT_REPEAT(482),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_double, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_int, 2, .production_id = 14),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_ref, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3, .production_id = 15),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3, .production_id = 15),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2, .production_id = 14),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(448),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(347),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nest_host, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_def, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(76),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(282),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer_runtime_annotation, 13),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 18),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4, .production_id = 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runtime_annotation_args, 6, .production_id = 19),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 4),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 4, .production_id = 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 5),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block_def, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain_body, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_verbose, 4),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 6),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 4),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 5),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5, .production_id = 6),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 5),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 5),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 6),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_last_mod, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 5, .production_id = 4),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 7, .production_id = 13),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 7, .production_id = 13),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_file_plain, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_keyword, 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 10),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 9),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_def_plain, 6, .production_id = 8),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 10),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 9),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def_plain, 6, .production_id = 8),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [993] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
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
