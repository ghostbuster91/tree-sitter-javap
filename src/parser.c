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
#define STATE_COUNT 186
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_public = 2,
  anon_sym_private = 3,
  anon_sym_protected = 4,
  sym_mod_static = 5,
  anon_sym_LPAREN_RPAREN_SEMI = 6,
  anon_sym_Code_COLON = 7,
  anon_sym_COMMA = 8,
  anon_sym_LineNumberTable_COLON = 9,
  anon_sym_line = 10,
  anon_sym_COLON = 11,
  anon_sym_aload_0 = 12,
  anon_sym_return = 13,
  anon_sym_invokespecial = 14,
  anon_sym_POUND = 15,
  anon_sym_getstatic = 16,
  anon_sym_ldc = 17,
  anon_sym_invokevirtual = 18,
  aux_sym_code_info_stat_token1 = 19,
  anon_sym_descriptor_COLON = 20,
  sym_descriptor_value = 21,
  anon_sym_flags_COLON = 22,
  sym_flag_value = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_hex_value = 26,
  anon_sym_bool = 27,
  anon_sym_void = 28,
  aux_sym_simple_type_token1 = 29,
  anon_sym_LBRACK_RBRACK = 30,
  anon_sym_LBRACE = 31,
  anon_sym_RBRACE = 32,
  sym_identifier = 33,
  sym_number = 34,
  anon_sym_SourceFile_COLON_DQUOTE = 35,
  aux_sym_source_file_def_token1 = 36,
  anon_sym_DQUOTE = 37,
  sym_comment = 38,
  anon_sym_Constantpool_COLON = 39,
  anon_sym_EQ = 40,
  anon_sym_Utf8 = 41,
  aux_sym__constant_pool_item_type_utf8_token1 = 42,
  anon_sym_Class = 43,
  anon_sym_String = 44,
  anon_sym_Methodref = 45,
  anon_sym_DOT = 46,
  anon_sym_Fieldref = 47,
  anon_sym_NameAndType = 48,
  sym_class_keyword = 49,
  aux_sym_class_info_item_simple_token1 = 50,
  anon_sym_Lastmodified = 51,
  aux_sym_header_info_last_mod_token1 = 52,
  sym_md5 = 53,
  anon_sym_MD5checksum = 54,
  anon_sym_Compiledfrom = 55,
  aux_sym_header_info_compile_token1 = 56,
  sym__path_segment = 57,
  anon_sym_SLASH = 58,
  anon_sym_Classfile = 59,
  sym_source_file = 60,
  sym_method_def = 61,
  sym_mod_access = 62,
  sym_class_definition = 63,
  sym_code_def = 64,
  sym_code_info = 65,
  sym_line_number_table_def = 66,
  sym_numered_line = 67,
  sym_numered_instruction = 68,
  sym_instruction = 69,
  sym_code_info_stat = 70,
  sym_descriptor_def = 71,
  sym_flag_def = 72,
  sym__wrapped_hex_val = 73,
  sym_method_args = 74,
  sym__type = 75,
  sym_simple_type = 76,
  sym_array_type = 77,
  sym_block = 78,
  sym_source_file_def = 79,
  sym_constant_pool_def = 80,
  sym__hash_number = 81,
  sym_constant_pool_item = 82,
  sym__constant_pool_item_type = 83,
  sym__constant_pool_item_type_utf8 = 84,
  sym__constant_pool_item_type_class = 85,
  sym__constant_pool_item_type_string = 86,
  sym__constant_pool_item_type_method_ref = 87,
  sym__constant_pool_item_type_field_ref = 88,
  sym__constant_pool_item_type_name_and_type = 89,
  sym_class_info_def = 90,
  sym_class_info_item = 91,
  sym_class_info_item_simple = 92,
  sym_header_info_last_mod = 93,
  sym_header_info_md5 = 94,
  sym_header_info_compile = 95,
  sym_file_path = 96,
  sym_header_info = 97,
  sym_header = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_class_definition_repeat1 = 100,
  aux_sym_code_info_repeat1 = 101,
  aux_sym_code_info_repeat2 = 102,
  aux_sym_line_number_table_def_repeat1 = 103,
  aux_sym_flag_def_repeat1 = 104,
  aux_sym_constant_pool_def_repeat1 = 105,
  aux_sym_class_info_def_repeat1 = 106,
  aux_sym_class_info_item_simple_repeat1 = 107,
  aux_sym_header_info_last_mod_repeat1 = 108,
  aux_sym_file_path_repeat1 = 109,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [sym_mod_static] = "mod_static",
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
  [aux_sym_constant_pool_def_repeat1] = "constant_pool_def_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_header_info_last_mod_repeat1] = "header_info_last_mod_repeat1",
  [aux_sym_file_path_repeat1] = "file_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [sym_mod_static] = sym_mod_static,
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
  [sym_mod_static] = {
    .visible = true,
    .named = true,
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
  [30] = 24,
  [31] = 31,
  [32] = 20,
  [33] = 33,
  [34] = 17,
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
  [58] = 47,
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
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
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
  [140] = 140,
  [141] = 141,
  [142] = 120,
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
  [182] = 182,
  [183] = 149,
  [184] = 152,
  [185] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == ',') ADVANCE(322);
      if (lookahead == '.') ADVANCE(383);
      if (lookahead == '/') ADVANCE(409);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == ';') ADVANCE(314);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == 'C') ADVANCE(170);
      if (lookahead == 'F') ADVANCE(152);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(198);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'b') ADVANCE(202);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'g') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == 'v') ADVANCE(201);
      if (lookahead == '{') ADVANCE(360);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(211);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(364);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == 'C') ADVANCE(182);
      if (lookahead == 'F') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(123);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(369);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(326);
      END_STATE();
    case 17:
      if (lookahead == '5') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 19:
      if (lookahead == '8') ADVANCE(372);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(321);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(337);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(334);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(370);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(323);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(388);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 51:
      if (lookahead == ';') ADVANCE(320);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(193);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(200);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 61:
      if (lookahead == 'F') ADVANCE(163);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(262);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(269);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(359);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(355);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead == 'v') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(355);
      if (lookahead == 'v') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(389);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 138:
      if (lookahead == 'f') ADVANCE(384);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(382);
      END_STATE();
    case 140:
      if (lookahead == 'f') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(225);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(381);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 164:
      if (lookahead == 'k') ADVANCE(242);
      END_STATE();
    case 165:
      if (lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(343);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(380);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 261:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 262:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 264:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 266:
      if (lookahead == 'v') ADVANCE(199);
      END_STATE();
    case 267:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 268:
      if (lookahead == 'x') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 269:
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 270:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 271:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(407);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 272:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 273:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 274:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 310:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 311:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == '(') ADVANCE(339);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'M') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(197);
      if (lookahead == '{') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(311)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 312:
      if (eof) ADVANCE(313);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == ',') ADVANCE(322);
      if (lookahead == '.') ADVANCE(383);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == '{') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_aload_0);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_invokespecial);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_getstatic);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_ldc);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_invokevirtual);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(51);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'd') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'l') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(373);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(375);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'c') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'h') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'k') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'o') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 's') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'u') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(407);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(378);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 311},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 312},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 312},
  [8] = {.lex_state = 312},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 312},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 312},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 312},
  [16] = {.lex_state = 312},
  [17] = {.lex_state = 312},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 312},
  [20] = {.lex_state = 312},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 312},
  [23] = {.lex_state = 312},
  [24] = {.lex_state = 312},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 83},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 312},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 312},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 312},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 84},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 84},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 311},
  [69] = {.lex_state = 311},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 311},
  [73] = {.lex_state = 311},
  [74] = {.lex_state = 311},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 373},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 57},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 57},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 57},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 83},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 311},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 374},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 374},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 311},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 374},
  [112] = {.lex_state = 374},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 374},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 312},
  [117] = {.lex_state = 311},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 311},
  [121] = {.lex_state = 311},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 312},
  [124] = {.lex_state = 311},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 374},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 375},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 311},
  [143] = {.lex_state = 376},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 270},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 270},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 270},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 311},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 271},
  [178] = {.lex_state = 273},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 272},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 270},
  [184] = {.lex_state = 270},
  [185] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [sym_mod_static] = ACTIONS(1),
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
    [sym_source_file] = STATE(160),
    [sym_header_info_last_mod] = STATE(97),
    [sym_header_info_md5] = STATE(119),
    [sym_header_info_compile] = STATE(45),
    [sym_header_info] = STATE(67),
    [sym_header] = STATE(4),
    [anon_sym_Lastmodified] = ACTIONS(3),
    [anon_sym_MD5checksum] = ACTIONS(5),
    [anon_sym_Compiledfrom] = ACTIONS(7),
    [anon_sym_Classfile] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(17), 1,
      anon_sym_flags_COLON,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_descriptor_def,
    STATE(12), 1,
      sym_flag_def,
    STATE(39), 1,
      sym_code_def,
    STATE(40), 1,
      sym_mod_access,
    STATE(38), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [34] = 7,
    ACTIONS(21), 1,
      anon_sym_Utf8,
    ACTIONS(23), 1,
      anon_sym_Class,
    ACTIONS(25), 1,
      anon_sym_String,
    ACTIONS(27), 1,
      anon_sym_Methodref,
    ACTIONS(29), 1,
      anon_sym_Fieldref,
    ACTIONS(31), 1,
      anon_sym_NameAndType,
    STATE(96), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
  [62] = 10,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_Constantpool_COLON,
    STATE(21), 1,
      sym_class_info_def,
    STATE(59), 1,
      sym_constant_pool_def,
    STATE(179), 1,
      sym_source_file_def,
    STATE(180), 1,
      sym_mod_access,
    STATE(60), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(35), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [96] = 2,
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
  [113] = 8,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(17), 1,
      anon_sym_flags_COLON,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_flag_def,
    STATE(29), 1,
      sym_code_def,
    STATE(40), 1,
      sym_mod_access,
    STATE(31), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [141] = 5,
    ACTIONS(51), 1,
      anon_sym_flags_COLON,
    ACTIONS(54), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(7), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(52), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [162] = 5,
    ACTIONS(59), 1,
      anon_sym_flags_COLON,
    ACTIONS(61), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(11), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(52), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [183] = 7,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(17), 1,
      anon_sym_flags_COLON,
    STATE(18), 1,
      sym_descriptor_def,
    STATE(64), 1,
      sym_flag_def,
    STATE(86), 1,
      sym_code_def,
    ACTIONS(63), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [208] = 7,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(17), 1,
      anon_sym_flags_COLON,
    STATE(25), 1,
      sym_descriptor_def,
    STATE(53), 1,
      sym_flag_def,
    STATE(76), 1,
      sym_code_def,
    ACTIONS(65), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [233] = 5,
    ACTIONS(59), 1,
      anon_sym_flags_COLON,
    ACTIONS(61), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(7), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(52), 2,
      sym_flag_def,
      sym_class_info_item_simple,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [254] = 6,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_code_def,
    STATE(40), 1,
      sym_mod_access,
    STATE(31), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [276] = 5,
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
  [296] = 6,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_mod_access,
    STATE(42), 1,
      sym_code_def,
    STATE(41), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [318] = 3,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [333] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(22), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [350] = 4,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(20), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [367] = 5,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(17), 1,
      anon_sym_flags_COLON,
    STATE(61), 1,
      sym_flag_def,
    STATE(81), 1,
      sym_code_def,
    ACTIONS(95), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [386] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(23), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [403] = 4,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(24), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [420] = 7,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_constant_pool_def,
    STATE(154), 1,
      sym_source_file_def,
    STATE(56), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [443] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(23), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [460] = 4,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(23), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [477] = 4,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(24), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [494] = 5,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    ACTIONS(17), 1,
      anon_sym_flags_COLON,
    STATE(64), 1,
      sym_flag_def,
    STATE(86), 1,
      sym_code_def,
    ACTIONS(63), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [513] = 3,
    STATE(99), 1,
      sym_instruction,
    ACTIONS(121), 2,
      anon_sym_aload_0,
      anon_sym_return,
    ACTIONS(123), 4,
      anon_sym_invokespecial,
      anon_sym_getstatic,
      anon_sym_ldc,
      anon_sym_invokevirtual,
  [527] = 1,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [537] = 1,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [547] = 4,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_mod_access,
    STATE(41), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [563] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(114), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [577] = 4,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_mod_access,
    STATE(35), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [593] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(97), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [607] = 4,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym__hash_number,
    STATE(50), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [623] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(89), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [637] = 4,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_mod_access,
    STATE(35), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(138), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [653] = 1,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [663] = 3,
    ACTIONS(147), 1,
      anon_sym_line,
    STATE(44), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(145), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [677] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_mod_access,
    STATE(35), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [693] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_mod_access,
    STATE(31), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [709] = 3,
    ACTIONS(149), 1,
      sym_mod_static,
    ACTIONS(151), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(138), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [723] = 4,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_mod_access,
    STATE(35), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [739] = 4,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_mod_access,
    STATE(48), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [755] = 1,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [765] = 3,
    ACTIONS(147), 1,
      anon_sym_line,
    STATE(51), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(157), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [779] = 1,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [789] = 4,
    ACTIONS(163), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym__hash_number,
    STATE(46), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [805] = 2,
    ACTIONS(119), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [817] = 4,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_mod_access,
    STATE(35), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(11), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [833] = 2,
    ACTIONS(170), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [845] = 4,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym__hash_number,
    STATE(46), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [861] = 3,
    ACTIONS(176), 1,
      anon_sym_line,
    STATE(51), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(174), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [875] = 2,
    ACTIONS(181), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_flags_COLON,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      anon_sym_Constantpool_COLON,
  [886] = 3,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    STATE(86), 1,
      sym_code_def,
    ACTIONS(63), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [899] = 1,
    ACTIONS(183), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [908] = 5,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(189), 1,
      sym_number,
    STATE(63), 1,
      aux_sym_code_info_repeat1,
    STATE(79), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [925] = 5,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_source_file_def,
    STATE(71), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [942] = 5,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_source_file_def,
    STATE(66), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [959] = 1,
    ACTIONS(114), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [968] = 5,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(154), 1,
      sym_source_file_def,
    STATE(56), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [985] = 5,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(154), 1,
      sym_source_file_def,
    STATE(71), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [1002] = 3,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    STATE(75), 1,
      sym_code_def,
    ACTIONS(193), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1015] = 2,
    ACTIONS(151), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(130), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [1026] = 5,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      sym_number,
    ACTIONS(195), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(83), 1,
      aux_sym_code_info_repeat1,
    STATE(78), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1043] = 3,
    ACTIONS(13), 1,
      anon_sym_Code_COLON,
    STATE(81), 1,
      sym_code_def,
    ACTIONS(95), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1056] = 2,
    ACTIONS(151), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(122), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [1067] = 5,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_source_file_def,
    STATE(71), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [1084] = 6,
    ACTIONS(3), 1,
      anon_sym_Lastmodified,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(28), 1,
      sym_header_info_compile,
    STATE(80), 1,
      sym_header_info_last_mod,
    STATE(141), 1,
      sym_header_info_md5,
  [1103] = 2,
    ACTIONS(201), 1,
      sym_comment,
    ACTIONS(199), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1113] = 2,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1123] = 1,
    ACTIONS(207), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [1131] = 3,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(71), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [1143] = 2,
    ACTIONS(216), 1,
      sym_comment,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1153] = 2,
    ACTIONS(220), 1,
      sym_comment,
    ACTIONS(218), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1163] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(222), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1173] = 1,
    ACTIONS(226), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1180] = 1,
    ACTIONS(63), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1187] = 4,
    ACTIONS(228), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(230), 1,
      sym__path_segment,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      sym_file_path,
  [1200] = 3,
    ACTIONS(189), 1,
      sym_number,
    ACTIONS(234), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(82), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1211] = 3,
    ACTIONS(189), 1,
      sym_number,
    ACTIONS(195), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(82), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1222] = 4,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(43), 1,
      sym_header_info_compile,
    STATE(125), 1,
      sym_header_info_md5,
  [1235] = 1,
    ACTIONS(193), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1242] = 3,
    ACTIONS(236), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(238), 1,
      sym_number,
    STATE(82), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1253] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(244), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1264] = 1,
    ACTIONS(246), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1271] = 3,
    ACTIONS(248), 1,
      aux_sym_header_info_last_mod_token1,
    STATE(88), 1,
      aux_sym_header_info_last_mod_repeat1,
    ACTIONS(250), 2,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1282] = 1,
    ACTIONS(95), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1289] = 1,
    ACTIONS(252), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1296] = 3,
    ACTIONS(254), 1,
      aux_sym_header_info_last_mod_token1,
    STATE(88), 1,
      aux_sym_header_info_last_mod_repeat1,
    ACTIONS(257), 2,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1307] = 1,
    ACTIONS(259), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1314] = 1,
    ACTIONS(261), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1321] = 1,
    ACTIONS(263), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1328] = 3,
    ACTIONS(265), 1,
      aux_sym_header_info_last_mod_token1,
    STATE(85), 1,
      aux_sym_header_info_last_mod_repeat1,
    ACTIONS(267), 2,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1339] = 1,
    ACTIONS(269), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1346] = 1,
    ACTIONS(271), 4,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [1353] = 1,
    ACTIONS(273), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1360] = 1,
    ACTIONS(275), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1367] = 4,
    ACTIONS(5), 1,
      anon_sym_MD5checksum,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(28), 1,
      sym_header_info_compile,
    STATE(141), 1,
      sym_header_info_md5,
  [1380] = 1,
    ACTIONS(277), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1386] = 2,
    ACTIONS(281), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1394] = 1,
    ACTIONS(283), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1400] = 1,
    ACTIONS(285), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1406] = 3,
    ACTIONS(287), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      aux_sym_file_path_repeat1,
  [1416] = 1,
    ACTIONS(291), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1422] = 1,
    ACTIONS(244), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1428] = 3,
    ACTIONS(293), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(295), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      aux_sym_file_path_repeat1,
  [1438] = 3,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(298), 1,
      sym_number,
    STATE(15), 1,
      sym__hash_number,
  [1448] = 1,
    ACTIONS(300), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1454] = 3,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      sym_number,
    STATE(13), 1,
      sym__hash_number,
  [1464] = 1,
    ACTIONS(304), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1470] = 1,
    ACTIONS(306), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1476] = 3,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    ACTIONS(308), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(112), 1,
      aux_sym_file_path_repeat1,
  [1486] = 3,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    ACTIONS(310), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(105), 1,
      aux_sym_file_path_repeat1,
  [1496] = 1,
    ACTIONS(312), 3,
      anon_sym_Lastmodified,
      anon_sym_MD5checksum,
      anon_sym_Compiledfrom,
  [1502] = 3,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    ACTIONS(310), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(102), 1,
      aux_sym_file_path_repeat1,
  [1512] = 1,
    ACTIONS(314), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1518] = 3,
    ACTIONS(316), 1,
      aux_sym_code_info_stat_token1,
    STATE(55), 1,
      sym_code_info_stat,
    STATE(129), 1,
      sym_code_info,
  [1528] = 1,
    ACTIONS(318), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1534] = 1,
    ACTIONS(320), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1540] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(28), 1,
      sym_header_info_compile,
  [1547] = 2,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym__wrapped_hex_val,
  [1554] = 2,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_method_args,
  [1561] = 2,
    ACTIONS(326), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(328), 1,
      sym_identifier,
  [1568] = 2,
    ACTIONS(316), 1,
      aux_sym_code_info_stat_token1,
    STATE(104), 1,
      sym_code_info_stat,
  [1575] = 2,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_method_args,
  [1582] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(27), 1,
      sym_header_info_compile,
  [1589] = 2,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym__hash_number,
  [1596] = 2,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym__hash_number,
  [1603] = 1,
    ACTIONS(293), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1608] = 2,
    ACTIONS(330), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(87), 1,
      sym_line_number_table_def,
  [1615] = 2,
    ACTIONS(326), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
  [1622] = 2,
    ACTIONS(308), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(334), 1,
      sym__path_segment,
  [1629] = 2,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym__hash_number,
  [1636] = 2,
    ACTIONS(336), 1,
      anon_sym_public,
    STATE(170), 1,
      sym_class_definition,
  [1643] = 2,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym__hash_number,
  [1650] = 2,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym__hash_number,
  [1657] = 1,
    ACTIONS(338), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1662] = 2,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym__hash_number,
  [1669] = 2,
    ACTIONS(326), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(340), 1,
      sym_identifier,
  [1676] = 2,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(74), 1,
      sym__hash_number,
  [1683] = 2,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym__hash_number,
  [1690] = 2,
    ACTIONS(7), 1,
      anon_sym_Compiledfrom,
    STATE(43), 1,
      sym_header_info_compile,
  [1697] = 2,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym__wrapped_hex_val,
  [1704] = 1,
    ACTIONS(342), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1708] = 1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
  [1712] = 1,
    ACTIONS(346), 1,
      anon_sym_SEMI,
  [1716] = 1,
    ACTIONS(348), 1,
      sym_number,
  [1720] = 1,
    ACTIONS(350), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1724] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [1728] = 1,
    ACTIONS(352), 1,
      sym_flag_value,
  [1732] = 1,
    ACTIONS(354), 1,
      sym_number,
  [1736] = 1,
    ACTIONS(356), 1,
      anon_sym_Compiledfrom,
  [1740] = 1,
    ACTIONS(358), 1,
      sym_flag_value,
  [1744] = 1,
    ACTIONS(360), 1,
      anon_sym_COLON,
  [1748] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [1752] = 1,
    ACTIONS(362), 1,
      sym_flag_value,
  [1756] = 1,
    ACTIONS(364), 1,
      anon_sym_POUND,
  [1760] = 1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
  [1764] = 1,
    ACTIONS(368), 1,
      anon_sym_SEMI,
  [1768] = 1,
    ACTIONS(370), 1,
      sym_descriptor_value,
  [1772] = 1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [1776] = 1,
    ACTIONS(374), 1,
      sym_identifier,
  [1780] = 1,
    ACTIONS(376), 1,
      sym_number,
  [1784] = 1,
    ACTIONS(378), 1,
      sym_number,
  [1788] = 1,
    ACTIONS(380), 1,
      anon_sym_DOT,
  [1792] = 1,
    ACTIONS(382), 1,
      anon_sym_EQ,
  [1796] = 1,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [1800] = 1,
    ACTIONS(386), 1,
      sym_number,
  [1804] = 1,
    ACTIONS(388), 1,
      aux_sym_header_info_compile_token1,
  [1808] = 1,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
  [1812] = 1,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
  [1816] = 1,
    ACTIONS(394), 1,
      anon_sym_COLON,
  [1820] = 1,
    ACTIONS(396), 1,
      sym_identifier,
  [1824] = 1,
    ACTIONS(398), 1,
      sym_md5,
  [1828] = 1,
    ACTIONS(400), 1,
      anon_sym_DOT,
  [1832] = 1,
    ACTIONS(402), 1,
      anon_sym_COLON,
  [1836] = 1,
    ACTIONS(404), 1,
      sym_hex_value,
  [1840] = 1,
    ACTIONS(406), 1,
      sym__path_segment,
  [1844] = 1,
    ACTIONS(408), 1,
      aux_sym_class_info_item_simple_token1,
  [1848] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [1852] = 1,
    ACTIONS(410), 1,
      sym_class_keyword,
  [1856] = 1,
    ACTIONS(412), 1,
      aux_sym_source_file_def_token1,
  [1860] = 1,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
  [1864] = 1,
    ACTIONS(416), 1,
      sym_flag_value,
  [1868] = 1,
    ACTIONS(418), 1,
      sym_flag_value,
  [1872] = 1,
    ACTIONS(420), 1,
      sym_class_keyword,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 113,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 183,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 233,
  [SMALL_STATE(12)] = 254,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 318,
  [SMALL_STATE(16)] = 333,
  [SMALL_STATE(17)] = 350,
  [SMALL_STATE(18)] = 367,
  [SMALL_STATE(19)] = 386,
  [SMALL_STATE(20)] = 403,
  [SMALL_STATE(21)] = 420,
  [SMALL_STATE(22)] = 443,
  [SMALL_STATE(23)] = 460,
  [SMALL_STATE(24)] = 477,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 513,
  [SMALL_STATE(27)] = 527,
  [SMALL_STATE(28)] = 537,
  [SMALL_STATE(29)] = 547,
  [SMALL_STATE(30)] = 563,
  [SMALL_STATE(31)] = 577,
  [SMALL_STATE(32)] = 593,
  [SMALL_STATE(33)] = 607,
  [SMALL_STATE(34)] = 623,
  [SMALL_STATE(35)] = 637,
  [SMALL_STATE(36)] = 653,
  [SMALL_STATE(37)] = 663,
  [SMALL_STATE(38)] = 677,
  [SMALL_STATE(39)] = 693,
  [SMALL_STATE(40)] = 709,
  [SMALL_STATE(41)] = 723,
  [SMALL_STATE(42)] = 739,
  [SMALL_STATE(43)] = 755,
  [SMALL_STATE(44)] = 765,
  [SMALL_STATE(45)] = 779,
  [SMALL_STATE(46)] = 789,
  [SMALL_STATE(47)] = 805,
  [SMALL_STATE(48)] = 817,
  [SMALL_STATE(49)] = 833,
  [SMALL_STATE(50)] = 845,
  [SMALL_STATE(51)] = 861,
  [SMALL_STATE(52)] = 875,
  [SMALL_STATE(53)] = 886,
  [SMALL_STATE(54)] = 899,
  [SMALL_STATE(55)] = 908,
  [SMALL_STATE(56)] = 925,
  [SMALL_STATE(57)] = 942,
  [SMALL_STATE(58)] = 959,
  [SMALL_STATE(59)] = 968,
  [SMALL_STATE(60)] = 985,
  [SMALL_STATE(61)] = 1002,
  [SMALL_STATE(62)] = 1015,
  [SMALL_STATE(63)] = 1026,
  [SMALL_STATE(64)] = 1043,
  [SMALL_STATE(65)] = 1056,
  [SMALL_STATE(66)] = 1067,
  [SMALL_STATE(67)] = 1084,
  [SMALL_STATE(68)] = 1103,
  [SMALL_STATE(69)] = 1113,
  [SMALL_STATE(70)] = 1123,
  [SMALL_STATE(71)] = 1131,
  [SMALL_STATE(72)] = 1143,
  [SMALL_STATE(73)] = 1153,
  [SMALL_STATE(74)] = 1163,
  [SMALL_STATE(75)] = 1173,
  [SMALL_STATE(76)] = 1180,
  [SMALL_STATE(77)] = 1187,
  [SMALL_STATE(78)] = 1200,
  [SMALL_STATE(79)] = 1211,
  [SMALL_STATE(80)] = 1222,
  [SMALL_STATE(81)] = 1235,
  [SMALL_STATE(82)] = 1242,
  [SMALL_STATE(83)] = 1253,
  [SMALL_STATE(84)] = 1264,
  [SMALL_STATE(85)] = 1271,
  [SMALL_STATE(86)] = 1282,
  [SMALL_STATE(87)] = 1289,
  [SMALL_STATE(88)] = 1296,
  [SMALL_STATE(89)] = 1307,
  [SMALL_STATE(90)] = 1314,
  [SMALL_STATE(91)] = 1321,
  [SMALL_STATE(92)] = 1328,
  [SMALL_STATE(93)] = 1339,
  [SMALL_STATE(94)] = 1346,
  [SMALL_STATE(95)] = 1353,
  [SMALL_STATE(96)] = 1360,
  [SMALL_STATE(97)] = 1367,
  [SMALL_STATE(98)] = 1380,
  [SMALL_STATE(99)] = 1386,
  [SMALL_STATE(100)] = 1394,
  [SMALL_STATE(101)] = 1400,
  [SMALL_STATE(102)] = 1406,
  [SMALL_STATE(103)] = 1416,
  [SMALL_STATE(104)] = 1422,
  [SMALL_STATE(105)] = 1428,
  [SMALL_STATE(106)] = 1438,
  [SMALL_STATE(107)] = 1448,
  [SMALL_STATE(108)] = 1454,
  [SMALL_STATE(109)] = 1464,
  [SMALL_STATE(110)] = 1470,
  [SMALL_STATE(111)] = 1476,
  [SMALL_STATE(112)] = 1486,
  [SMALL_STATE(113)] = 1496,
  [SMALL_STATE(114)] = 1502,
  [SMALL_STATE(115)] = 1512,
  [SMALL_STATE(116)] = 1518,
  [SMALL_STATE(117)] = 1528,
  [SMALL_STATE(118)] = 1534,
  [SMALL_STATE(119)] = 1540,
  [SMALL_STATE(120)] = 1547,
  [SMALL_STATE(121)] = 1554,
  [SMALL_STATE(122)] = 1561,
  [SMALL_STATE(123)] = 1568,
  [SMALL_STATE(124)] = 1575,
  [SMALL_STATE(125)] = 1582,
  [SMALL_STATE(126)] = 1589,
  [SMALL_STATE(127)] = 1596,
  [SMALL_STATE(128)] = 1603,
  [SMALL_STATE(129)] = 1608,
  [SMALL_STATE(130)] = 1615,
  [SMALL_STATE(131)] = 1622,
  [SMALL_STATE(132)] = 1629,
  [SMALL_STATE(133)] = 1636,
  [SMALL_STATE(134)] = 1643,
  [SMALL_STATE(135)] = 1650,
  [SMALL_STATE(136)] = 1657,
  [SMALL_STATE(137)] = 1662,
  [SMALL_STATE(138)] = 1669,
  [SMALL_STATE(139)] = 1676,
  [SMALL_STATE(140)] = 1683,
  [SMALL_STATE(141)] = 1690,
  [SMALL_STATE(142)] = 1697,
  [SMALL_STATE(143)] = 1704,
  [SMALL_STATE(144)] = 1708,
  [SMALL_STATE(145)] = 1712,
  [SMALL_STATE(146)] = 1716,
  [SMALL_STATE(147)] = 1720,
  [SMALL_STATE(148)] = 1724,
  [SMALL_STATE(149)] = 1728,
  [SMALL_STATE(150)] = 1732,
  [SMALL_STATE(151)] = 1736,
  [SMALL_STATE(152)] = 1740,
  [SMALL_STATE(153)] = 1744,
  [SMALL_STATE(154)] = 1748,
  [SMALL_STATE(155)] = 1752,
  [SMALL_STATE(156)] = 1756,
  [SMALL_STATE(157)] = 1760,
  [SMALL_STATE(158)] = 1764,
  [SMALL_STATE(159)] = 1768,
  [SMALL_STATE(160)] = 1772,
  [SMALL_STATE(161)] = 1776,
  [SMALL_STATE(162)] = 1780,
  [SMALL_STATE(163)] = 1784,
  [SMALL_STATE(164)] = 1788,
  [SMALL_STATE(165)] = 1792,
  [SMALL_STATE(166)] = 1796,
  [SMALL_STATE(167)] = 1800,
  [SMALL_STATE(168)] = 1804,
  [SMALL_STATE(169)] = 1808,
  [SMALL_STATE(170)] = 1812,
  [SMALL_STATE(171)] = 1816,
  [SMALL_STATE(172)] = 1820,
  [SMALL_STATE(173)] = 1824,
  [SMALL_STATE(174)] = 1828,
  [SMALL_STATE(175)] = 1832,
  [SMALL_STATE(176)] = 1836,
  [SMALL_STATE(177)] = 1840,
  [SMALL_STATE(178)] = 1844,
  [SMALL_STATE(179)] = 1848,
  [SMALL_STATE(180)] = 1852,
  [SMALL_STATE(181)] = 1856,
  [SMALL_STATE(182)] = 1860,
  [SMALL_STATE(183)] = 1864,
  [SMALL_STATE(184)] = 1868,
  [SMALL_STATE(185)] = 1872,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(120),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(108),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(178),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(152),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(184),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(94),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(167),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(150),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 8),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 9),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(171),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(123),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_info_last_mod, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_info_last_mod_repeat1, 2), SHIFT_REPEAT(88),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_info_last_mod_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_info_last_mod, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_access, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(177),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [372] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_access, 1),
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
