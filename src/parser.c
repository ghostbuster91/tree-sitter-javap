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
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  sym_mod_static = 2,
  sym_mod_abstract = 3,
  anon_sym_public = 4,
  anon_sym_private = 5,
  anon_sym_protected = 6,
  anon_sym_LPAREN_RPAREN_SEMI = 7,
  anon_sym_Code_COLON = 8,
  anon_sym_COMMA = 9,
  anon_sym_LineNumberTable_COLON = 10,
  anon_sym_line = 11,
  anon_sym_COLON = 12,
  anon_sym_aload_0 = 13,
  anon_sym_return = 14,
  anon_sym_invokespecial = 15,
  anon_sym_POUND = 16,
  anon_sym_getstatic = 17,
  anon_sym_ldc = 18,
  anon_sym_invokevirtual = 19,
  aux_sym_code_info_stat_token1 = 20,
  anon_sym_descriptor_COLON = 21,
  sym_descriptor_value = 22,
  anon_sym_flags_COLON = 23,
  sym_flag_value = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  sym_hex_value = 27,
  anon_sym_bool = 28,
  anon_sym_void = 29,
  aux_sym_simple_type_token1 = 30,
  anon_sym_LBRACK_RBRACK = 31,
  anon_sym_LBRACE = 32,
  anon_sym_RBRACE = 33,
  sym_identifier = 34,
  sym_number = 35,
  anon_sym_SourceFile_COLON_DQUOTE = 36,
  aux_sym_source_file_def_token1 = 37,
  anon_sym_DQUOTE = 38,
  sym_comment = 39,
  anon_sym_Constantpool_COLON = 40,
  anon_sym_EQ = 41,
  anon_sym_Utf8 = 42,
  aux_sym__constant_pool_item_type_utf8_token1 = 43,
  anon_sym_Class = 44,
  anon_sym_String = 45,
  anon_sym_Methodref = 46,
  anon_sym_DOT = 47,
  anon_sym_Fieldref = 48,
  anon_sym_NameAndType = 49,
  sym_class_keyword = 50,
  aux_sym_class_info_item_simple_token1 = 51,
  anon_sym_Lastmodified = 52,
  aux_sym_header_info_last_mod_token1 = 53,
  sym_md5 = 54,
  anon_sym_MD5checksum = 55,
  anon_sym_Compiledfrom = 56,
  aux_sym_header_info_compile_token1 = 57,
  sym__path_segment = 58,
  anon_sym_SLASH = 59,
  anon_sym_Classfile = 60,
  sym_source_file = 61,
  sym_method_def = 62,
  sym__mods = 63,
  sym_mod_access = 64,
  sym_class_definition = 65,
  sym_code_def = 66,
  sym_code_info = 67,
  sym_line_number_table_def = 68,
  sym_numered_line = 69,
  sym_numered_instruction = 70,
  sym_instruction = 71,
  sym_code_info_stat = 72,
  sym_descriptor_def = 73,
  sym_flag_def = 74,
  sym__wrapped_hex_val = 75,
  sym_method_args = 76,
  sym__type = 77,
  sym_simple_type = 78,
  sym_array_type = 79,
  sym_block = 80,
  sym_source_file_def = 81,
  sym_constant_pool_def = 82,
  sym__hash_number = 83,
  sym_constant_pool_item = 84,
  sym__constant_pool_item_type = 85,
  sym__constant_pool_item_type_utf8 = 86,
  sym__constant_pool_item_type_class = 87,
  sym__constant_pool_item_type_string = 88,
  sym__constant_pool_item_type_method_ref = 89,
  sym__constant_pool_item_type_field_ref = 90,
  sym__constant_pool_item_type_name_and_type = 91,
  sym_class_info_def = 92,
  sym_class_info_item = 93,
  sym_class_info_item_simple = 94,
  sym_header_info_last_mod = 95,
  sym_header_info_md5 = 96,
  sym_header_info_compile = 97,
  sym_file_path = 98,
  sym_header_info = 99,
  sym_header = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_class_definition_repeat1 = 102,
  aux_sym_code_info_repeat1 = 103,
  aux_sym_code_info_repeat2 = 104,
  aux_sym_line_number_table_def_repeat1 = 105,
  aux_sym_flag_def_repeat1 = 106,
  aux_sym_method_args_repeat1 = 107,
  aux_sym_constant_pool_def_repeat1 = 108,
  aux_sym_class_info_def_repeat1 = 109,
  aux_sym_class_info_item_simple_repeat1 = 110,
  aux_sym_header_info_last_mod_repeat1 = 111,
  aux_sym_file_path_repeat1 = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_mod_static] = "mod_static",
  [sym_mod_abstract] = "mod_abstract",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_LPAREN_RPAREN_SEMI] = "();",
  [anon_sym_Code_COLON] = "Code:",
  [anon_sym_COMMA] = ",",
  [anon_sym_LineNumberTable_COLON] = "LineNumberTable:",
  [anon_sym_line] = "line",
  [anon_sym_COLON] = ":",
  [anon_sym_aload_0] = "aload_0",
  [anon_sym_return] = "return",
  [anon_sym_invokespecial] = "invokespecial",
  [anon_sym_POUND] = "#",
  [anon_sym_getstatic] = "getstatic",
  [anon_sym_ldc] = "ldc",
  [anon_sym_invokevirtual] = "invokevirtual",
  [aux_sym_code_info_stat_token1] = "code_info_stat_token1",
  [anon_sym_descriptor_COLON] = "descriptor:",
  [sym_descriptor_value] = "descriptor_value",
  [anon_sym_flags_COLON] = "flags:",
  [sym_flag_value] = "flag_value",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_hex_value] = "hex_value",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [aux_sym_simple_type_token1] = "simple_type_token1",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_SourceFile_COLON_DQUOTE] = "SourceFile: \"",
  [aux_sym_source_file_def_token1] = "source_file_def_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_comment] = "comment",
  [anon_sym_Constantpool_COLON] = "Constant pool:",
  [anon_sym_EQ] = "=",
  [anon_sym_Utf8] = "Utf8",
  [aux_sym__constant_pool_item_type_utf8_token1] = "_constant_pool_item_type_utf8_token1",
  [anon_sym_Class] = "Class",
  [anon_sym_String] = "String",
  [anon_sym_Methodref] = "Methodref",
  [anon_sym_DOT] = ".",
  [anon_sym_Fieldref] = "Fieldref",
  [anon_sym_NameAndType] = "NameAndType",
  [sym_class_keyword] = "class_keyword",
  [aux_sym_class_info_item_simple_token1] = "class_info_item_simple_token1",
  [anon_sym_Lastmodified] = "Last modified",
  [aux_sym_header_info_last_mod_token1] = "header_info_last_mod_token1",
  [sym_md5] = "md5",
  [anon_sym_MD5checksum] = "MD5 checksum",
  [anon_sym_Compiledfrom] = "Compiled from",
  [aux_sym_header_info_compile_token1] = "header_info_compile_token1",
  [sym__path_segment] = "_path_segment",
  [anon_sym_SLASH] = "/",
  [anon_sym_Classfile] = "Classfile",
  [sym_source_file] = "source_file",
  [sym_method_def] = "method_def",
  [sym__mods] = "_mods",
  [sym_mod_access] = "mod_access",
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
  [sym_method_args] = "method_args",
  [sym__type] = "_type",
  [sym_simple_type] = "simple_type",
  [sym_array_type] = "array_type",
  [sym_block] = "block",
  [sym_source_file_def] = "source_file_def",
  [sym_constant_pool_def] = "constant_pool_def",
  [sym__hash_number] = "_hash_number",
  [sym_constant_pool_item] = "constant_pool_item",
  [sym__constant_pool_item_type] = "_constant_pool_item_type",
  [sym__constant_pool_item_type_utf8] = "_constant_pool_item_type_utf8",
  [sym__constant_pool_item_type_class] = "_constant_pool_item_type_class",
  [sym__constant_pool_item_type_string] = "_constant_pool_item_type_string",
  [sym__constant_pool_item_type_method_ref] = "_constant_pool_item_type_method_ref",
  [sym__constant_pool_item_type_field_ref] = "_constant_pool_item_type_field_ref",
  [sym__constant_pool_item_type_name_and_type] = "_constant_pool_item_type_name_and_type",
  [sym_class_info_def] = "class_info_def",
  [sym_class_info_item] = "class_info_item",
  [sym_class_info_item_simple] = "class_info_item_simple",
  [sym_header_info_last_mod] = "header_info_last_mod",
  [sym_header_info_md5] = "header_info_md5",
  [sym_header_info_compile] = "header_info_compile",
  [sym_file_path] = "file_path",
  [sym_header_info] = "header_info",
  [sym_header] = "header",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_code_info_repeat2] = "code_info_repeat2",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
  [aux_sym_method_args_repeat1] = "method_args_repeat1",
  [aux_sym_constant_pool_def_repeat1] = "constant_pool_def_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_header_info_last_mod_repeat1] = "header_info_last_mod_repeat1",
  [aux_sym_file_path_repeat1] = "file_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_mod_static] = sym_mod_static,
  [sym_mod_abstract] = sym_mod_abstract,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_LPAREN_RPAREN_SEMI] = anon_sym_LPAREN_RPAREN_SEMI,
  [anon_sym_Code_COLON] = anon_sym_Code_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LineNumberTable_COLON] = anon_sym_LineNumberTable_COLON,
  [anon_sym_line] = anon_sym_line,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_aload_0] = anon_sym_aload_0,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_invokespecial] = anon_sym_invokespecial,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_getstatic] = anon_sym_getstatic,
  [anon_sym_ldc] = anon_sym_ldc,
  [anon_sym_invokevirtual] = anon_sym_invokevirtual,
  [aux_sym_code_info_stat_token1] = aux_sym_code_info_stat_token1,
  [anon_sym_descriptor_COLON] = anon_sym_descriptor_COLON,
  [sym_descriptor_value] = sym_descriptor_value,
  [anon_sym_flags_COLON] = anon_sym_flags_COLON,
  [sym_flag_value] = sym_flag_value,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_hex_value] = sym_hex_value,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [aux_sym_simple_type_token1] = aux_sym_simple_type_token1,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_SourceFile_COLON_DQUOTE] = anon_sym_SourceFile_COLON_DQUOTE,
  [aux_sym_source_file_def_token1] = aux_sym_source_file_def_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_comment] = sym_comment,
  [anon_sym_Constantpool_COLON] = anon_sym_Constantpool_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_Utf8] = anon_sym_Utf8,
  [aux_sym__constant_pool_item_type_utf8_token1] = aux_sym__constant_pool_item_type_utf8_token1,
  [anon_sym_Class] = anon_sym_Class,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Methodref] = anon_sym_Methodref,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Fieldref] = anon_sym_Fieldref,
  [anon_sym_NameAndType] = anon_sym_NameAndType,
  [sym_class_keyword] = sym_class_keyword,
  [aux_sym_class_info_item_simple_token1] = aux_sym_class_info_item_simple_token1,
  [anon_sym_Lastmodified] = anon_sym_Lastmodified,
  [aux_sym_header_info_last_mod_token1] = aux_sym_header_info_last_mod_token1,
  [sym_md5] = sym_md5,
  [anon_sym_MD5checksum] = anon_sym_MD5checksum,
  [anon_sym_Compiledfrom] = anon_sym_Compiledfrom,
  [aux_sym_header_info_compile_token1] = aux_sym_header_info_compile_token1,
  [sym__path_segment] = sym__path_segment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_Classfile] = anon_sym_Classfile,
  [sym_source_file] = sym_source_file,
  [sym_method_def] = sym_method_def,
  [sym__mods] = sym__mods,
  [sym_mod_access] = sym_mod_access,
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
  [sym_method_args] = sym_method_args,
  [sym__type] = sym__type,
  [sym_simple_type] = sym_simple_type,
  [sym_array_type] = sym_array_type,
  [sym_block] = sym_block,
  [sym_source_file_def] = sym_source_file_def,
  [sym_constant_pool_def] = sym_constant_pool_def,
  [sym__hash_number] = sym__hash_number,
  [sym_constant_pool_item] = sym_constant_pool_item,
  [sym__constant_pool_item_type] = sym__constant_pool_item_type,
  [sym__constant_pool_item_type_utf8] = sym__constant_pool_item_type_utf8,
  [sym__constant_pool_item_type_class] = sym__constant_pool_item_type_class,
  [sym__constant_pool_item_type_string] = sym__constant_pool_item_type_string,
  [sym__constant_pool_item_type_method_ref] = sym__constant_pool_item_type_method_ref,
  [sym__constant_pool_item_type_field_ref] = sym__constant_pool_item_type_field_ref,
  [sym__constant_pool_item_type_name_and_type] = sym__constant_pool_item_type_name_and_type,
  [sym_class_info_def] = sym_class_info_def,
  [sym_class_info_item] = sym_class_info_item,
  [sym_class_info_item_simple] = sym_class_info_item_simple,
  [sym_header_info_last_mod] = sym_header_info_last_mod,
  [sym_header_info_md5] = sym_header_info_md5,
  [sym_header_info_compile] = sym_header_info_compile,
  [sym_file_path] = sym_file_path,
  [sym_header_info] = sym_header_info,
  [sym_header] = sym_header,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_code_info_repeat2] = aux_sym_code_info_repeat2,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
  [aux_sym_method_args_repeat1] = aux_sym_method_args_repeat1,
  [aux_sym_constant_pool_def_repeat1] = aux_sym_constant_pool_def_repeat1,
  [aux_sym_class_info_def_repeat1] = aux_sym_class_info_def_repeat1,
  [aux_sym_class_info_item_simple_repeat1] = aux_sym_class_info_item_simple_repeat1,
  [aux_sym_header_info_last_mod_repeat1] = aux_sym_header_info_last_mod_repeat1,
  [aux_sym_file_path_repeat1] = aux_sym_file_path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_mod_static] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_abstract] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Code_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_aload_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invokespecial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getstatic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ldc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invokevirtual] = {
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_simple_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Constantpool_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fieldref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NameAndType] = {
    .visible = true,
    .named = false,
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
  [aux_sym_header_info_last_mod_token1] = {
    .visible = false,
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
  [anon_sym_Classfile] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_method_def] = {
    .visible = true,
    .named = true,
  },
  [sym__mods] = {
    .visible = false,
    .named = true,
  },
  [sym_mod_access] = {
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
  [sym_method_args] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file_def] = {
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
  [sym__constant_pool_item_type_method_ref] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_pool_item_type_field_ref] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_pool_item_type_name_and_type] = {
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
  [sym_header_info] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [aux_sym_method_args_repeat1] = {
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
  [aux_sym_header_info_last_mod_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [35] = 15,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 31,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 17,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 43,
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
  [106] = 69,
  [107] = 107,
  [108] = 108,
  [109] = 66,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 90,
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
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 140,
  [146] = 146,
  [147] = 110,
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
  [171] = 108,
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
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 159,
  [189] = 148,
  [190] = 190,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(320);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '(') ADVANCE(349);
      if (lookahead == ')') ADVANCE(350);
      if (lookahead == ',') ADVANCE(331);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '/') ADVANCE(425);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == ';') ADVANCE(321);
      if (lookahead == '=') ADVANCE(387);
      if (lookahead == 'C') ADVANCE(174);
      if (lookahead == 'F') ADVANCE(156);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(201);
      if (lookahead == 'U') ADVANCE(250);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'g') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 'v') ADVANCE(204);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '}') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(214);
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(380);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '0') ADVANCE(275);
      if (lookahead == 'C') ADVANCE(185);
      if (lookahead == 'F') ADVANCE(156);
      if (lookahead == 'M') ADVANCE(128);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(249);
      if (lookahead == 'U') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(350);
      if (lookahead == ',') ADVANCE(331);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(385);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(335);
      END_STATE();
    case 17:
      if (lookahead == '5') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 19:
      if (lookahead == '8') ADVANCE(388);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(330);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(346);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(343);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(386);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(332);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(403);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 51:
      if (lookahead == ';') ADVANCE(329);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(196);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(203);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 61:
      if (lookahead == 'F') ADVANCE(167);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(269);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(276);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(375);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'b') ADVANCE(367);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 'v') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'b') ADVANCE(367);
      if (lookahead == 'v') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(367);
      if (lookahead == 'v') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(182);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(405);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(400);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(398);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == 'g') ADVANCE(397);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(213);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 'k') ADVANCE(247);
      END_STATE();
    case 169:
      if (lookahead == 'k') ADVANCE(120);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(420);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 273:
      if (lookahead == 'v') ADVANCE(202);
      END_STATE();
    case 274:
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 275:
      if (lookahead == 'x') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 276:
      if (lookahead == 'y') ADVANCE(219);
      END_STATE();
    case 277:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 278:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(423);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 279:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 280:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(280)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 281:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 305:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 317:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 318:
      if (eof) ADVANCE(320);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'C') ADVANCE(184);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'M') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(200);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 319:
      if (eof) ADVANCE(320);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == ',') ADVANCE(331);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '=') ADVANCE(387);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(319)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_mod_abstract);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_mod_abstract);
      if (lookahead == '.') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_aload_0);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_invokespecial);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_getstatic);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_ldc);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_invokevirtual);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(51);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'a') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'b') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'c') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'c') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 's') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(389);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(394);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(391);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(391);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(394);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'c') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'h') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'k') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'r') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 's') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'u') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(423);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(394);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 318},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 319},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 319},
  [8] = {.lex_state = 319},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 319},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 319},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 319},
  [16] = {.lex_state = 319},
  [17] = {.lex_state = 319},
  [18] = {.lex_state = 319},
  [19] = {.lex_state = 319},
  [20] = {.lex_state = 319},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 319},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 319},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 319},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 319},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 86},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 86},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 319},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 86},
  [65] = {.lex_state = 318},
  [66] = {.lex_state = 71},
  [67] = {.lex_state = 318},
  [68] = {.lex_state = 318},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 318},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 318},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 57},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 72},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 389},
  [97] = {.lex_state = 57},
  [98] = {.lex_state = 57},
  [99] = {.lex_state = 390},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 319},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 318},
  [104] = {.lex_state = 390},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 86},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 86},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 318},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 390},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 318},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 390},
  [124] = {.lex_state = 390},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 390},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 318},
  [130] = {.lex_state = 319},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 318},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 391},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 318},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 277},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 280},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 277},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 277},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 392},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 318},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 278},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 279},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 277},
  [189] = {.lex_state = 277},
  [190] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_mod_static] = ACTIONS(1),
    [sym_mod_abstract] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN_SEMI] = ACTIONS(1),
    [anon_sym_Code_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LineNumberTable_COLON] = ACTIONS(1),
    [anon_sym_line] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_aload_0] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_invokespecial] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_getstatic] = ACTIONS(1),
    [anon_sym_ldc] = ACTIONS(1),
    [anon_sym_invokevirtual] = ACTIONS(1),
    [anon_sym_descriptor_COLON] = ACTIONS(1),
    [anon_sym_flags_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_Constantpool_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_Utf8] = ACTIONS(1),
    [anon_sym_Class] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Methodref] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Fieldref] = ACTIONS(1),
    [anon_sym_NameAndType] = ACTIONS(1),
    [sym_class_keyword] = ACTIONS(1),
    [anon_sym_Lastmodified] = ACTIONS(1),
    [anon_sym_MD5checksum] = ACTIONS(1),
    [anon_sym_Compiledfrom] = ACTIONS(1),
    [aux_sym_header_info_compile_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(187),
    [sym_header_info_last_mod] = STATE(91),
    [sym_header_info_md5] = STATE(146),
    [sym_header_info_compile] = STATE(36),
    [sym_header_info] = STATE(59),
    [sym_header] = STATE(2),
    [anon_sym_Lastmodified] = ACTIONS(3),
    [anon_sym_MD5checksum] = ACTIONS(5),
    [anon_sym_Compiledfrom] = ACTIONS(7),
    [anon_sym_Classfile] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_Constantpool_COLON,
    STATE(30), 1,
      sym_class_info_def,
    STATE(61), 1,
      sym_constant_pool_def,
    STATE(109), 1,
      sym_mod_access,
    STATE(183), 1,
      sym_source_file_def,
    STATE(184), 1,
      sym__mods,
    STATE(53), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [37] = 11,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(25), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_descriptor_def,
    STATE(12), 1,
      sym_flag_def,
    STATE(23), 1,
      sym_code_def,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(28), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [74] = 7,
    ACTIONS(31), 1,
      anon_sym_Utf8,
    ACTIONS(33), 1,
      anon_sym_Class,
    ACTIONS(35), 1,
      anon_sym_String,
    ACTIONS(37), 1,
      anon_sym_Methodref,
    ACTIONS(39), 1,
      anon_sym_Fieldref,
    ACTIONS(41), 1,
      anon_sym_NameAndType,
    STATE(75), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
  [102] = 2,
    ACTIONS(45), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(43), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
      anon_sym_DOT,
  [119] = 9,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_flag_def,
    STATE(25), 1,
      sym_code_def,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [150] = 5,
    ACTIONS(51), 1,
      anon_sym_flags_COLON,
    ACTIONS(53), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(8), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(62), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [171] = 5,
    ACTIONS(57), 1,
      anon_sym_flags_COLON,
    ACTIONS(60), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(8), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(62), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [192] = 7,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym_code_def,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [217] = 7,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(25), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    STATE(21), 1,
      sym_descriptor_def,
    STATE(63), 1,
      sym_flag_def,
    STATE(85), 1,
      sym_code_def,
    ACTIONS(65), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [242] = 5,
    ACTIONS(51), 1,
      anon_sym_flags_COLON,
    ACTIONS(53), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(7), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(62), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [263] = 7,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_code_def,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [288] = 5,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(19), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [308] = 5,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(77), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [327] = 4,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [344] = 4,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(16), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [361] = 4,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(31), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [378] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(29), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [395] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(16), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [412] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [427] = 5,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    ACTIONS(27), 1,
      anon_sym_flags_COLON,
    STATE(55), 1,
      sym_flag_def,
    STATE(82), 1,
      sym_code_def,
    ACTIONS(112), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [446] = 5,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [465] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [484] = 5,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [503] = 5,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [522] = 5,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [541] = 5,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(22), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [560] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__mods,
    STATE(66), 1,
      sym_mod_access,
    STATE(14), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(21), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [579] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(16), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [596] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_constant_pool_def,
    STATE(175), 1,
      sym_source_file_def,
    STATE(52), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [619] = 4,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(15), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [636] = 4,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym__hash_number,
    STATE(46), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [652] = 4,
    ACTIONS(134), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym__hash_number,
    STATE(33), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [668] = 3,
    ACTIONS(139), 1,
      anon_sym_line,
    STATE(34), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(137), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [682] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(82), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [696] = 1,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [706] = 3,
    STATE(103), 1,
      sym_instruction,
    ACTIONS(147), 2,
      anon_sym_aload_0,
      anon_sym_return,
    ACTIONS(149), 4,
      anon_sym_invokespecial,
      anon_sym_getstatic,
      anon_sym_ldc,
      anon_sym_invokevirtual,
  [720] = 2,
    ACTIONS(153), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [732] = 3,
    ACTIONS(157), 1,
      anon_sym_line,
    STATE(34), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(155), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [746] = 1,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [756] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(124), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [770] = 1,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [780] = 2,
    ACTIONS(87), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [792] = 1,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [802] = 3,
    ACTIONS(157), 1,
      anon_sym_line,
    STATE(39), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(167), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [816] = 4,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym__hash_number,
    STATE(33), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [832] = 1,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [842] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(96), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [856] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(170), 1,
      sym_source_file_def,
    STATE(50), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [873] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
      sym_source_file_def,
    STATE(73), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [890] = 2,
    ACTIONS(177), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(122), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [901] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(170), 1,
      sym_source_file_def,
    STATE(73), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [918] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      sym_source_file_def,
    STATE(73), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [935] = 2,
    ACTIONS(177), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(127), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [946] = 3,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    STATE(81), 1,
      sym_code_def,
    ACTIONS(179), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [959] = 1,
    ACTIONS(82), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [968] = 1,
    ACTIONS(181), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [977] = 5,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(187), 1,
      sym_number,
    STATE(60), 1,
      aux_sym_code_info_repeat1,
    STATE(92), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [994] = 6,
    ACTIONS(3), 1,
      anon_sym_Lastmodified,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(44), 1,
      sym_header_info_compile,
    STATE(86), 1,
      sym_header_info_last_mod,
    STATE(141), 1,
      sym_header_info_md5,
  [1013] = 5,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(76), 1,
      aux_sym_code_info_repeat1,
    STATE(95), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1030] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      sym_source_file_def,
    STATE(52), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [1047] = 2,
    ACTIONS(193), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [1058] = 3,
    ACTIONS(23), 1,
      anon_sym_Code_COLON,
    STATE(82), 1,
      sym_code_def,
    ACTIONS(112), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1071] = 2,
    ACTIONS(177), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(89), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [1082] = 2,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1092] = 3,
    ACTIONS(199), 1,
      sym_mod_static,
    ACTIONS(201), 1,
      sym_mod_abstract,
    ACTIONS(203), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1104] = 2,
    ACTIONS(207), 1,
      sym_comment,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1114] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1124] = 1,
    ACTIONS(213), 5,
      sym_mod_static,
      sym_mod_abstract,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1132] = 2,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1142] = 1,
    ACTIONS(219), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [1150] = 2,
    ACTIONS(223), 1,
      sym_comment,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1160] = 3,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(73), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [1172] = 3,
    ACTIONS(230), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(232), 1,
      sym_number,
    STATE(74), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1183] = 1,
    ACTIONS(235), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1190] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(240), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1201] = 1,
    ACTIONS(242), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1208] = 1,
    ACTIONS(244), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1215] = 1,
    ACTIONS(246), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1222] = 1,
    ACTIONS(248), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1229] = 1,
    ACTIONS(250), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1236] = 1,
    ACTIONS(179), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1243] = 3,
    ACTIONS(252), 1,
      aux_sym_header_info_last_mod_token1,
    STATE(97), 1,
      aux_sym_header_info_last_mod_repeat1,
    ACTIONS(254), 2,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1254] = 1,
    ACTIONS(256), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1261] = 1,
    ACTIONS(112), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1268] = 4,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(40), 1,
      sym_header_info_compile,
    STATE(131), 1,
      sym_header_info_md5,
  [1281] = 1,
    ACTIONS(258), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1288] = 1,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1295] = 4,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(266), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(111), 1,
      aux_sym_method_args_repeat1,
  [1308] = 2,
    ACTIONS(268), 1,
      sym_mod_abstract,
    ACTIONS(270), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1317] = 4,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(44), 1,
      sym_header_info_compile,
    STATE(141), 1,
      sym_header_info_md5,
  [1330] = 3,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(74), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1341] = 1,
    ACTIONS(272), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1348] = 1,
    ACTIONS(274), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1355] = 3,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(276), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(74), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1366] = 4,
    ACTIONS(278), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(280), 1,
      sym__path_segment,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_file_path,
  [1379] = 3,
    ACTIONS(284), 1,
      aux_sym_header_info_last_mod_token1,
    STATE(97), 1,
      aux_sym_header_info_last_mod_repeat1,
    ACTIONS(287), 2,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1390] = 3,
    ACTIONS(289), 1,
      aux_sym_header_info_last_mod_token1,
    STATE(83), 1,
      aux_sym_header_info_last_mod_repeat1,
    ACTIONS(291), 2,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1401] = 3,
    ACTIONS(293), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(295), 1,
      anon_sym_SLASH,
    STATE(124), 1,
      aux_sym_file_path_repeat1,
  [1411] = 1,
    ACTIONS(297), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1417] = 3,
    ACTIONS(299), 1,
      aux_sym_code_info_stat_token1,
    STATE(58), 1,
      sym_code_info_stat,
    STATE(142), 1,
      sym_code_info,
  [1427] = 1,
    ACTIONS(301), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1433] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1441] = 3,
    ACTIONS(295), 1,
      anon_sym_SLASH,
    ACTIONS(307), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(99), 1,
      aux_sym_file_path_repeat1,
  [1451] = 1,
    ACTIONS(309), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1457] = 1,
    ACTIONS(311), 3,
      sym_mod_static,
      sym_mod_abstract,
      sym_class_keyword,
  [1463] = 3,
    ACTIONS(130), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      sym_number,
    STATE(13), 1,
      sym__hash_number,
  [1473] = 1,
    ACTIONS(315), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1479] = 3,
    ACTIONS(317), 1,
      sym_mod_static,
    ACTIONS(319), 1,
      sym_mod_abstract,
    ACTIONS(321), 1,
      sym_class_keyword,
  [1489] = 1,
    ACTIONS(270), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1495] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_method_args_repeat1,
  [1505] = 1,
    ACTIONS(325), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1511] = 1,
    ACTIONS(327), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1517] = 1,
    ACTIONS(240), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1523] = 1,
    ACTIONS(329), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1529] = 3,
    ACTIONS(293), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(295), 1,
      anon_sym_SLASH,
    STATE(123), 1,
      aux_sym_file_path_repeat1,
  [1539] = 3,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_method_args_repeat1,
  [1549] = 3,
    ACTIONS(130), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      sym_number,
    STATE(20), 1,
      sym__hash_number,
  [1559] = 1,
    ACTIONS(338), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1565] = 1,
    ACTIONS(340), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1571] = 1,
    ACTIONS(342), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1577] = 2,
    ACTIONS(266), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1585] = 3,
    ACTIONS(295), 1,
      anon_sym_SLASH,
    ACTIONS(344), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(124), 1,
      aux_sym_file_path_repeat1,
  [1595] = 3,
    ACTIONS(346), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    STATE(124), 1,
      aux_sym_file_path_repeat1,
  [1605] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym__hash_number,
  [1612] = 1,
    ACTIONS(346), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1617] = 2,
    ACTIONS(266), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(351), 1,
      sym_identifier,
  [1624] = 2,
    ACTIONS(353), 1,
      sym_mod_abstract,
    ACTIONS(355), 1,
      sym_class_keyword,
  [1631] = 2,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_method_args,
  [1638] = 2,
    ACTIONS(299), 1,
      aux_sym_code_info_stat_token1,
    STATE(114), 1,
      sym_code_info_stat,
  [1645] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(47), 1,
      sym_header_info_compile,
  [1652] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym__hash_number,
  [1659] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym__hash_number,
  [1666] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym__hash_number,
  [1673] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym__hash_number,
  [1680] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym__hash_number,
  [1687] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym__hash_number,
  [1694] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym__hash_number,
  [1701] = 2,
    ACTIONS(359), 1,
      anon_sym_public,
    STATE(180), 1,
      sym_class_definition,
  [1708] = 2,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym__wrapped_hex_val,
  [1715] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(40), 1,
      sym_header_info_compile,
  [1722] = 2,
    ACTIONS(363), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(87), 1,
      sym_line_number_table_def,
  [1729] = 2,
    ACTIONS(307), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(365), 1,
      sym__path_segment,
  [1736] = 1,
    ACTIONS(367), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1741] = 2,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym__wrapped_hex_val,
  [1748] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(44), 1,
      sym_header_info_compile,
  [1755] = 1,
    ACTIONS(355), 1,
      sym_class_keyword,
  [1759] = 1,
    ACTIONS(369), 1,
      sym_flag_value,
  [1763] = 1,
    ACTIONS(371), 1,
      sym_number,
  [1767] = 1,
    ACTIONS(373), 1,
      aux_sym_class_info_item_simple_token1,
  [1771] = 1,
    ACTIONS(375), 1,
      anon_sym_COLON,
  [1775] = 1,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
  [1779] = 1,
    ACTIONS(379), 1,
      sym_number,
  [1783] = 1,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [1787] = 1,
    ACTIONS(383), 1,
      anon_sym_SEMI,
  [1791] = 1,
    ACTIONS(385), 1,
      sym_flag_value,
  [1795] = 1,
    ACTIONS(387), 1,
      anon_sym_POUND,
  [1799] = 1,
    ACTIONS(389), 1,
      sym_md5,
  [1803] = 1,
    ACTIONS(391), 1,
      sym_flag_value,
  [1807] = 1,
    ACTIONS(393), 1,
      sym_hex_value,
  [1811] = 1,
    ACTIONS(395), 1,
      anon_sym_COLON,
  [1815] = 1,
    ACTIONS(397), 1,
      sym_number,
  [1819] = 1,
    ACTIONS(399), 1,
      sym_number,
  [1823] = 1,
    ACTIONS(401), 1,
      anon_sym_DOT,
  [1827] = 1,
    ACTIONS(403), 1,
      anon_sym_DOT,
  [1831] = 1,
    ACTIONS(405), 1,
      anon_sym_SEMI,
  [1835] = 1,
    ACTIONS(407), 1,
      sym_descriptor_value,
  [1839] = 1,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
  [1843] = 1,
    ACTIONS(411), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1847] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [1851] = 1,
    ACTIONS(413), 1,
      sym_class_keyword,
  [1855] = 1,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
  [1859] = 1,
    ACTIONS(417), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1863] = 1,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [1867] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [1871] = 1,
    ACTIONS(421), 1,
      sym_identifier,
  [1875] = 1,
    ACTIONS(423), 1,
      anon_sym_EQ,
  [1879] = 1,
    ACTIONS(425), 1,
      sym_number,
  [1883] = 1,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
  [1887] = 1,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
  [1891] = 1,
    ACTIONS(431), 1,
      sym_identifier,
  [1895] = 1,
    ACTIONS(433), 1,
      sym__path_segment,
  [1899] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [1903] = 1,
    ACTIONS(435), 1,
      sym_class_keyword,
  [1907] = 1,
    ACTIONS(437), 1,
      aux_sym_source_file_def_token1,
  [1911] = 1,
    ACTIONS(439), 1,
      anon_sym_Compiledfrom,
  [1915] = 1,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
  [1919] = 1,
    ACTIONS(443), 1,
      sym_flag_value,
  [1923] = 1,
    ACTIONS(445), 1,
      sym_flag_value,
  [1927] = 1,
    ACTIONS(447), 1,
      aux_sym_header_info_compile_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 288,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 327,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 361,
  [SMALL_STATE(18)] = 378,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 412,
  [SMALL_STATE(21)] = 427,
  [SMALL_STATE(22)] = 446,
  [SMALL_STATE(23)] = 465,
  [SMALL_STATE(24)] = 484,
  [SMALL_STATE(25)] = 503,
  [SMALL_STATE(26)] = 522,
  [SMALL_STATE(27)] = 541,
  [SMALL_STATE(28)] = 560,
  [SMALL_STATE(29)] = 579,
  [SMALL_STATE(30)] = 596,
  [SMALL_STATE(31)] = 619,
  [SMALL_STATE(32)] = 636,
  [SMALL_STATE(33)] = 652,
  [SMALL_STATE(34)] = 668,
  [SMALL_STATE(35)] = 682,
  [SMALL_STATE(36)] = 696,
  [SMALL_STATE(37)] = 706,
  [SMALL_STATE(38)] = 720,
  [SMALL_STATE(39)] = 732,
  [SMALL_STATE(40)] = 746,
  [SMALL_STATE(41)] = 756,
  [SMALL_STATE(42)] = 770,
  [SMALL_STATE(43)] = 780,
  [SMALL_STATE(44)] = 792,
  [SMALL_STATE(45)] = 802,
  [SMALL_STATE(46)] = 816,
  [SMALL_STATE(47)] = 832,
  [SMALL_STATE(48)] = 842,
  [SMALL_STATE(49)] = 856,
  [SMALL_STATE(50)] = 873,
  [SMALL_STATE(51)] = 890,
  [SMALL_STATE(52)] = 901,
  [SMALL_STATE(53)] = 918,
  [SMALL_STATE(54)] = 935,
  [SMALL_STATE(55)] = 946,
  [SMALL_STATE(56)] = 959,
  [SMALL_STATE(57)] = 968,
  [SMALL_STATE(58)] = 977,
  [SMALL_STATE(59)] = 994,
  [SMALL_STATE(60)] = 1013,
  [SMALL_STATE(61)] = 1030,
  [SMALL_STATE(62)] = 1047,
  [SMALL_STATE(63)] = 1058,
  [SMALL_STATE(64)] = 1071,
  [SMALL_STATE(65)] = 1082,
  [SMALL_STATE(66)] = 1092,
  [SMALL_STATE(67)] = 1104,
  [SMALL_STATE(68)] = 1114,
  [SMALL_STATE(69)] = 1124,
  [SMALL_STATE(70)] = 1132,
  [SMALL_STATE(71)] = 1142,
  [SMALL_STATE(72)] = 1150,
  [SMALL_STATE(73)] = 1160,
  [SMALL_STATE(74)] = 1172,
  [SMALL_STATE(75)] = 1183,
  [SMALL_STATE(76)] = 1190,
  [SMALL_STATE(77)] = 1201,
  [SMALL_STATE(78)] = 1208,
  [SMALL_STATE(79)] = 1215,
  [SMALL_STATE(80)] = 1222,
  [SMALL_STATE(81)] = 1229,
  [SMALL_STATE(82)] = 1236,
  [SMALL_STATE(83)] = 1243,
  [SMALL_STATE(84)] = 1254,
  [SMALL_STATE(85)] = 1261,
  [SMALL_STATE(86)] = 1268,
  [SMALL_STATE(87)] = 1281,
  [SMALL_STATE(88)] = 1288,
  [SMALL_STATE(89)] = 1295,
  [SMALL_STATE(90)] = 1308,
  [SMALL_STATE(91)] = 1317,
  [SMALL_STATE(92)] = 1330,
  [SMALL_STATE(93)] = 1341,
  [SMALL_STATE(94)] = 1348,
  [SMALL_STATE(95)] = 1355,
  [SMALL_STATE(96)] = 1366,
  [SMALL_STATE(97)] = 1379,
  [SMALL_STATE(98)] = 1390,
  [SMALL_STATE(99)] = 1401,
  [SMALL_STATE(100)] = 1411,
  [SMALL_STATE(101)] = 1417,
  [SMALL_STATE(102)] = 1427,
  [SMALL_STATE(103)] = 1433,
  [SMALL_STATE(104)] = 1441,
  [SMALL_STATE(105)] = 1451,
  [SMALL_STATE(106)] = 1457,
  [SMALL_STATE(107)] = 1463,
  [SMALL_STATE(108)] = 1473,
  [SMALL_STATE(109)] = 1479,
  [SMALL_STATE(110)] = 1489,
  [SMALL_STATE(111)] = 1495,
  [SMALL_STATE(112)] = 1505,
  [SMALL_STATE(113)] = 1511,
  [SMALL_STATE(114)] = 1517,
  [SMALL_STATE(115)] = 1523,
  [SMALL_STATE(116)] = 1529,
  [SMALL_STATE(117)] = 1539,
  [SMALL_STATE(118)] = 1549,
  [SMALL_STATE(119)] = 1559,
  [SMALL_STATE(120)] = 1565,
  [SMALL_STATE(121)] = 1571,
  [SMALL_STATE(122)] = 1577,
  [SMALL_STATE(123)] = 1585,
  [SMALL_STATE(124)] = 1595,
  [SMALL_STATE(125)] = 1605,
  [SMALL_STATE(126)] = 1612,
  [SMALL_STATE(127)] = 1617,
  [SMALL_STATE(128)] = 1624,
  [SMALL_STATE(129)] = 1631,
  [SMALL_STATE(130)] = 1638,
  [SMALL_STATE(131)] = 1645,
  [SMALL_STATE(132)] = 1652,
  [SMALL_STATE(133)] = 1659,
  [SMALL_STATE(134)] = 1666,
  [SMALL_STATE(135)] = 1673,
  [SMALL_STATE(136)] = 1680,
  [SMALL_STATE(137)] = 1687,
  [SMALL_STATE(138)] = 1694,
  [SMALL_STATE(139)] = 1701,
  [SMALL_STATE(140)] = 1708,
  [SMALL_STATE(141)] = 1715,
  [SMALL_STATE(142)] = 1722,
  [SMALL_STATE(143)] = 1729,
  [SMALL_STATE(144)] = 1736,
  [SMALL_STATE(145)] = 1741,
  [SMALL_STATE(146)] = 1748,
  [SMALL_STATE(147)] = 1755,
  [SMALL_STATE(148)] = 1759,
  [SMALL_STATE(149)] = 1763,
  [SMALL_STATE(150)] = 1767,
  [SMALL_STATE(151)] = 1771,
  [SMALL_STATE(152)] = 1775,
  [SMALL_STATE(153)] = 1779,
  [SMALL_STATE(154)] = 1783,
  [SMALL_STATE(155)] = 1787,
  [SMALL_STATE(156)] = 1791,
  [SMALL_STATE(157)] = 1795,
  [SMALL_STATE(158)] = 1799,
  [SMALL_STATE(159)] = 1803,
  [SMALL_STATE(160)] = 1807,
  [SMALL_STATE(161)] = 1811,
  [SMALL_STATE(162)] = 1815,
  [SMALL_STATE(163)] = 1819,
  [SMALL_STATE(164)] = 1823,
  [SMALL_STATE(165)] = 1827,
  [SMALL_STATE(166)] = 1831,
  [SMALL_STATE(167)] = 1835,
  [SMALL_STATE(168)] = 1839,
  [SMALL_STATE(169)] = 1843,
  [SMALL_STATE(170)] = 1847,
  [SMALL_STATE(171)] = 1851,
  [SMALL_STATE(172)] = 1855,
  [SMALL_STATE(173)] = 1859,
  [SMALL_STATE(174)] = 1863,
  [SMALL_STATE(175)] = 1867,
  [SMALL_STATE(176)] = 1871,
  [SMALL_STATE(177)] = 1875,
  [SMALL_STATE(178)] = 1879,
  [SMALL_STATE(179)] = 1883,
  [SMALL_STATE(180)] = 1887,
  [SMALL_STATE(181)] = 1891,
  [SMALL_STATE(182)] = 1895,
  [SMALL_STATE(183)] = 1899,
  [SMALL_STATE(184)] = 1903,
  [SMALL_STATE(185)] = 1907,
  [SMALL_STATE(186)] = 1911,
  [SMALL_STATE(187)] = 1915,
  [SMALL_STATE(188)] = 1919,
  [SMALL_STATE(189)] = 1923,
  [SMALL_STATE(190)] = 1927,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(145),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(107),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(69),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(148),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(150),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(178),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(153),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(189),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_access, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(151),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(130),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 8),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_info_last_mod, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_info_last_mod_repeat1, 2), SHIFT_REPEAT(97),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_info_last_mod_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_info_last_mod, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_access, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mods, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2), SHIFT_REPEAT(51),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_args_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(182),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mods, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [441] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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
