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
#define STATE_COUNT 177
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
  [50] = 13,
  [51] = 17,
  [52] = 12,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 33,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 10,
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
  [120] = 110,
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
  [165] = 65,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 135,
  [174] = 174,
  [175] = 157,
  [176] = 174,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(293);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(321);
      if (lookahead == ',') ADVANCE(302);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '/') ADVANCE(384);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == ';') ADVANCE(294);
      if (lookahead == '=') ADVANCE(351);
      if (lookahead == 'C') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(182);
      if (lookahead == 'U') ADVANCE(227);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 'v') ADVANCE(184);
      if (lookahead == '{') ADVANCE(340);
      if (lookahead == '}') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(194);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(291);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(344);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == '{') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '0') ADVANCE(250);
      if (lookahead == 'C') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(226);
      if (lookahead == 'U') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(321);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(302);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '=') ADVANCE(351);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(349);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(306);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 20:
      if (lookahead == '8') ADVANCE(352);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(301);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(317);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(314);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(350);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(303);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 43:
      if (lookahead == ';') ADVANCE(300);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(177);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 50:
      if (lookahead == 'F') ADVANCE(150);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(244);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(251);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(339);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(335);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 'v') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(335);
      if (lookahead == 'v') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(364);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(362);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(207);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(361);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(215);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(224);
      END_STATE();
    case 152:
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(378);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(380);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 248:
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 249:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 250:
      if (lookahead == 'x') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 252:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 255:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 256:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 292:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_aload_0);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_invokespecial);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_getstatic);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_ldc);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_invokevirtual);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(43);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'a') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'c') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(353);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(355);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(355);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__constant_pool_item_type_utf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'c') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'h') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'k') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 's') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (lookahead == 'u') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_header_info_last_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_header_info_compile_token1);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__path_segment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          ('.' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 74},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 74},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 73},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 353},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 354},
  [79] = {.lex_state = 51},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 354},
  [83] = {.lex_state = 354},
  [84] = {.lex_state = 51},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 354},
  [91] = {.lex_state = 354},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 51},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 355},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 354},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 356},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 252},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 253},
  [158] = {.lex_state = 253},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 254},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 255},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 253},
  [175] = {.lex_state = 253},
  [176] = {.lex_state = 253},
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
    [sym_source_file] = STATE(140),
    [sym_header_info] = STATE(111),
    [sym_header] = STATE(45),
    [anon_sym_Classfile] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_descriptor_def,
    STATE(7), 1,
      sym_flag_def,
    STATE(21), 1,
      sym_code_def,
    STATE(23), 1,
      sym_mod_access,
    STATE(20), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [34] = 7,
    ACTIONS(15), 1,
      anon_sym_Utf8,
    ACTIONS(17), 1,
      anon_sym_Class,
    ACTIONS(19), 1,
      anon_sym_String,
    ACTIONS(21), 1,
      anon_sym_Methodref,
    ACTIONS(23), 1,
      anon_sym_Fieldref,
    ACTIONS(25), 1,
      anon_sym_NameAndType,
    STATE(97), 7,
      sym__constant_pool_item_type,
      sym__constant_pool_item_type_utf8,
      sym__constant_pool_item_type_class,
      sym__constant_pool_item_type_string,
      sym__constant_pool_item_type_method_ref,
      sym__constant_pool_item_type_field_ref,
      sym__constant_pool_item_type_name_and_type,
  [62] = 8,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_flag_def,
    STATE(19), 1,
      sym_code_def,
    STATE(23), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [90] = 7,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(11), 1,
      sym_descriptor_def,
    STATE(41), 1,
      sym_flag_def,
    STATE(68), 1,
      sym_code_def,
    ACTIONS(29), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [115] = 7,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(9), 1,
      sym_descriptor_def,
    STATE(32), 1,
      sym_flag_def,
    STATE(67), 1,
      sym_code_def,
    ACTIONS(31), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [140] = 6,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_code_def,
    STATE(23), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [162] = 6,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_mod_access,
    STATE(27), 1,
      sym_code_def,
    STATE(29), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [184] = 5,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(40), 1,
      sym_flag_def,
    STATE(58), 1,
      sym_code_def,
    ACTIONS(35), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [203] = 2,
    ACTIONS(39), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(37), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_flags_COLON,
      sym_comment,
      anon_sym_Constantpool_COLON,
      anon_sym_EQ,
      anon_sym_DOT,
  [216] = 5,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(32), 1,
      sym_flag_def,
    STATE(67), 1,
      sym_code_def,
    ACTIONS(31), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [235] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(41), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [249] = 3,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(45), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [263] = 3,
    ACTIONS(52), 1,
      anon_sym_line,
    STATE(22), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(50), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [277] = 5,
    ACTIONS(54), 1,
      anon_sym_flags_COLON,
    ACTIONS(57), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(59), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(15), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(76), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [295] = 5,
    ACTIONS(62), 1,
      anon_sym_flags_COLON,
    ACTIONS(64), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(66), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(15), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(76), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [313] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(68), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [327] = 4,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [343] = 4,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_mod_access,
    STATE(29), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [359] = 4,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [375] = 4,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [391] = 3,
    ACTIONS(72), 1,
      anon_sym_line,
    STATE(22), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(70), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [405] = 3,
    ACTIONS(75), 1,
      sym_mod_static,
    ACTIONS(77), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(117), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [419] = 4,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(79), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [435] = 4,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [451] = 3,
    ACTIONS(52), 1,
      anon_sym_line,
    STATE(14), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(86), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [465] = 4,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_mod_access,
    STATE(25), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [481] = 5,
    ACTIONS(62), 1,
      anon_sym_flags_COLON,
    ACTIONS(66), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(90), 1,
      anon_sym_Constantpool_COLON,
    STATE(16), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(76), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [499] = 4,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_mod_access,
    STATE(24), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [515] = 3,
    STATE(85), 1,
      sym_instruction,
    ACTIONS(92), 2,
      anon_sym_aload_0,
      anon_sym_return,
    ACTIONS(94), 4,
      anon_sym_invokespecial,
      anon_sym_getstatic,
      anon_sym_ldc,
      anon_sym_invokevirtual,
  [529] = 5,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(100), 1,
      sym_number,
    STATE(74), 1,
      aux_sym_code_info_repeat1,
    STATE(63), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [546] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(58), 1,
      sym_code_def,
    ACTIONS(35), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [559] = 1,
    ACTIONS(45), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [568] = 5,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(104), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [585] = 5,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      sym_number,
    ACTIONS(110), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(31), 1,
      aux_sym_code_info_repeat1,
    STATE(73), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [602] = 4,
    ACTIONS(112), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym__hash_number,
    ACTIONS(114), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(39), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [617] = 1,
    ACTIONS(116), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [626] = 2,
    ACTIONS(77), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(127), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [637] = 4,
    ACTIONS(118), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym__hash_number,
    ACTIONS(121), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(39), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [652] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(64), 1,
      sym_code_def,
    ACTIONS(123), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [665] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(67), 1,
      sym_code_def,
    ACTIONS(31), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [678] = 2,
    ACTIONS(77), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(119), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [689] = 4,
    ACTIONS(112), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym__hash_number,
    ACTIONS(125), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(36), 2,
      sym_constant_pool_item,
      aux_sym_constant_pool_def_repeat1,
  [704] = 4,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(147), 1,
      sym_source_file_def,
    STATE(48), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [718] = 3,
    STATE(115), 1,
      sym_class_info_def,
    STATE(164), 1,
      sym_mod_access,
    ACTIONS(131), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [730] = 4,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(46), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(136), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [744] = 1,
    ACTIONS(140), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [752] = 4,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(166), 1,
      sym_source_file_def,
    STATE(56), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [766] = 4,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(46), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(142), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [780] = 4,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(50), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(45), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [794] = 4,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(52), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(68), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [808] = 4,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(50), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(41), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [822] = 4,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(49), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(157), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [836] = 4,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(46), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(157), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [850] = 3,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(161), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [862] = 3,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(56), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [873] = 3,
    ACTIONS(172), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(174), 1,
      sym_number,
    STATE(57), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [884] = 1,
    ACTIONS(123), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [891] = 2,
    ACTIONS(179), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [900] = 2,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [909] = 2,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [918] = 2,
    ACTIONS(149), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(45), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [927] = 3,
    ACTIONS(100), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(57), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [938] = 1,
    ACTIONS(191), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [945] = 1,
    ACTIONS(193), 4,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [952] = 1,
    ACTIONS(37), 4,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [959] = 1,
    ACTIONS(35), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [966] = 1,
    ACTIONS(31), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [973] = 2,
    ACTIONS(197), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(195), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [982] = 4,
    ACTIONS(199), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(201), 1,
      sym__path_segment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(168), 1,
      sym_file_path,
  [995] = 1,
    ACTIONS(205), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1002] = 2,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1011] = 3,
    ACTIONS(98), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(100), 1,
      sym_number,
    STATE(57), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1022] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(214), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1033] = 2,
    ACTIONS(218), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1042] = 2,
    ACTIONS(222), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(220), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1050] = 1,
    ACTIONS(224), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1056] = 3,
    ACTIONS(226), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      aux_sym_file_path_repeat1,
  [1066] = 3,
    ACTIONS(230), 1,
      aux_sym_header_info_last_mod_token1,
    ACTIONS(232), 1,
      anon_sym_MD5checksum,
    STATE(84), 1,
      aux_sym_header_info_last_mod_repeat1,
  [1076] = 1,
    ACTIONS(234), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1082] = 1,
    ACTIONS(236), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1088] = 3,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(90), 1,
      aux_sym_file_path_repeat1,
  [1098] = 3,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(91), 1,
      aux_sym_file_path_repeat1,
  [1108] = 3,
    ACTIONS(240), 1,
      aux_sym_header_info_last_mod_token1,
    ACTIONS(242), 1,
      anon_sym_MD5checksum,
    STATE(93), 1,
      aux_sym_header_info_last_mod_repeat1,
  [1118] = 2,
    ACTIONS(246), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1126] = 3,
    ACTIONS(112), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      sym_number,
    STATE(55), 1,
      sym__hash_number,
  [1136] = 1,
    ACTIONS(250), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1142] = 1,
    ACTIONS(252), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1148] = 1,
    ACTIONS(254), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1154] = 3,
    ACTIONS(256), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      aux_sym_file_path_repeat1,
  [1164] = 3,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(261), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    STATE(90), 1,
      aux_sym_file_path_repeat1,
  [1174] = 3,
    ACTIONS(263), 1,
      aux_sym_code_info_stat_token1,
    STATE(35), 1,
      sym_code_info_stat,
    STATE(113), 1,
      sym_code_info,
  [1184] = 3,
    ACTIONS(265), 1,
      aux_sym_header_info_last_mod_token1,
    ACTIONS(268), 1,
      anon_sym_MD5checksum,
    STATE(93), 1,
      aux_sym_header_info_last_mod_repeat1,
  [1194] = 1,
    ACTIONS(214), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1200] = 1,
    ACTIONS(270), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1206] = 1,
    ACTIONS(272), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1212] = 1,
    ACTIONS(274), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1218] = 1,
    ACTIONS(276), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1224] = 1,
    ACTIONS(278), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1230] = 3,
    ACTIONS(112), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      sym_number,
    STATE(34), 1,
      sym__hash_number,
  [1240] = 1,
    ACTIONS(282), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1246] = 1,
    ACTIONS(284), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1252] = 1,
    ACTIONS(286), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1258] = 2,
    ACTIONS(288), 1,
      anon_sym_public,
    STATE(154), 1,
      sym_class_definition,
  [1265] = 1,
    ACTIONS(290), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1270] = 2,
    ACTIONS(112), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym__hash_number,
  [1277] = 2,
    ACTIONS(112), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym__hash_number,
  [1284] = 2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym__hash_number,
  [1291] = 2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    STATE(75), 1,
      sym__hash_number,
  [1298] = 2,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym__wrapped_hex_val,
  [1305] = 2,
    ACTIONS(296), 1,
      anon_sym_Lastmodified,
    STATE(114), 1,
      sym_header_info_last_mod,
  [1312] = 2,
    ACTIONS(226), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
    ACTIONS(298), 1,
      sym__path_segment,
  [1319] = 2,
    ACTIONS(300), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(71), 1,
      sym_line_number_table_def,
  [1326] = 2,
    ACTIONS(302), 1,
      anon_sym_MD5checksum,
    STATE(116), 1,
      sym_header_info_md5,
  [1333] = 2,
    ACTIONS(304), 1,
      anon_sym_Constantpool_COLON,
    STATE(44), 1,
      sym_constant_pool_def,
  [1340] = 2,
    ACTIONS(306), 1,
      anon_sym_Compiledfrom,
    STATE(95), 1,
      sym_header_info_compile,
  [1347] = 2,
    ACTIONS(308), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(310), 1,
      sym_identifier,
  [1354] = 1,
    ACTIONS(312), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1359] = 2,
    ACTIONS(308), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
  [1366] = 2,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym__wrapped_hex_val,
  [1373] = 2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym__hash_number,
  [1380] = 2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym__hash_number,
  [1387] = 2,
    ACTIONS(263), 1,
      aux_sym_code_info_stat_token1,
    STATE(94), 1,
      sym_code_info_stat,
  [1394] = 1,
    ACTIONS(256), 2,
      aux_sym__constant_pool_item_type_utf8_token1,
      anon_sym_SLASH,
  [1399] = 2,
    ACTIONS(112), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym__hash_number,
  [1406] = 2,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_method_args,
  [1413] = 2,
    ACTIONS(308), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(318), 1,
      sym_identifier,
  [1420] = 2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym__hash_number,
  [1427] = 2,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_method_args,
  [1434] = 1,
    ACTIONS(320), 1,
      anon_sym_SEMI,
  [1438] = 1,
    ACTIONS(322), 1,
      sym_identifier,
  [1442] = 1,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
  [1446] = 1,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
  [1450] = 1,
    ACTIONS(328), 1,
      anon_sym_EQ,
  [1454] = 1,
    ACTIONS(330), 1,
      sym_number,
  [1458] = 1,
    ACTIONS(332), 1,
      sym_number,
  [1462] = 1,
    ACTIONS(334), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1466] = 1,
    ACTIONS(336), 1,
      aux_sym_header_info_compile_token1,
  [1470] = 1,
    ACTIONS(338), 1,
      anon_sym_Compiledfrom,
  [1474] = 1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
  [1478] = 1,
    ACTIONS(342), 1,
      sym_descriptor_value,
  [1482] = 1,
    ACTIONS(344), 1,
      anon_sym_Lastmodified,
  [1486] = 1,
    ACTIONS(346), 1,
      anon_sym_COLON,
  [1490] = 1,
    ACTIONS(348), 1,
      aux_sym__constant_pool_item_type_utf8_token1,
  [1494] = 1,
    ACTIONS(350), 1,
      anon_sym_COLON,
  [1498] = 1,
    ACTIONS(352), 1,
      anon_sym_POUND,
  [1502] = 1,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
  [1506] = 1,
    ACTIONS(356), 1,
      anon_sym_SEMI,
  [1510] = 1,
    ACTIONS(358), 1,
      anon_sym_Lastmodified,
  [1514] = 1,
    ACTIONS(360), 1,
      sym_identifier,
  [1518] = 1,
    ACTIONS(362), 1,
      sym_number,
  [1522] = 1,
    ACTIONS(364), 1,
      sym_number,
  [1526] = 1,
    ACTIONS(366), 1,
      aux_sym_source_file_def_token1,
  [1530] = 1,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
  [1534] = 1,
    ACTIONS(370), 1,
      anon_sym_SEMI,
  [1538] = 1,
    ACTIONS(372), 1,
      sym_md5,
  [1542] = 1,
    ACTIONS(374), 1,
      sym_flag_value,
  [1546] = 1,
    ACTIONS(376), 1,
      sym_flag_value,
  [1550] = 1,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [1554] = 1,
    ACTIONS(380), 1,
      anon_sym_DOT,
  [1558] = 1,
    ACTIONS(382), 1,
      sym__path_segment,
  [1562] = 1,
    ACTIONS(384), 1,
      anon_sym_Lastmodified,
  [1566] = 1,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
  [1570] = 1,
    ACTIONS(388), 1,
      sym_class_keyword,
  [1574] = 1,
    ACTIONS(390), 1,
      sym_class_keyword,
  [1578] = 1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [1582] = 1,
    ACTIONS(394), 1,
      anon_sym_DOT,
  [1586] = 1,
    ACTIONS(396), 1,
      anon_sym_Lastmodified,
  [1590] = 1,
    ACTIONS(398), 1,
      sym_hex_value,
  [1594] = 1,
    ACTIONS(400), 1,
      aux_sym_class_info_item_simple_token1,
  [1598] = 1,
    ACTIONS(402), 1,
      anon_sym_Lastmodified,
  [1602] = 1,
    ACTIONS(404), 1,
      sym_number,
  [1606] = 1,
    ACTIONS(406), 1,
      sym_number,
  [1610] = 1,
    ACTIONS(408), 1,
      sym_flag_value,
  [1614] = 1,
    ACTIONS(410), 1,
      sym_flag_value,
  [1618] = 1,
    ACTIONS(412), 1,
      sym_flag_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 115,
  [SMALL_STATE(7)] = 140,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 203,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 235,
  [SMALL_STATE(13)] = 249,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 277,
  [SMALL_STATE(16)] = 295,
  [SMALL_STATE(17)] = 313,
  [SMALL_STATE(18)] = 327,
  [SMALL_STATE(19)] = 343,
  [SMALL_STATE(20)] = 359,
  [SMALL_STATE(21)] = 375,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 405,
  [SMALL_STATE(24)] = 419,
  [SMALL_STATE(25)] = 435,
  [SMALL_STATE(26)] = 451,
  [SMALL_STATE(27)] = 465,
  [SMALL_STATE(28)] = 481,
  [SMALL_STATE(29)] = 499,
  [SMALL_STATE(30)] = 515,
  [SMALL_STATE(31)] = 529,
  [SMALL_STATE(32)] = 546,
  [SMALL_STATE(33)] = 559,
  [SMALL_STATE(34)] = 568,
  [SMALL_STATE(35)] = 585,
  [SMALL_STATE(36)] = 602,
  [SMALL_STATE(37)] = 617,
  [SMALL_STATE(38)] = 626,
  [SMALL_STATE(39)] = 637,
  [SMALL_STATE(40)] = 652,
  [SMALL_STATE(41)] = 665,
  [SMALL_STATE(42)] = 678,
  [SMALL_STATE(43)] = 689,
  [SMALL_STATE(44)] = 704,
  [SMALL_STATE(45)] = 718,
  [SMALL_STATE(46)] = 730,
  [SMALL_STATE(47)] = 744,
  [SMALL_STATE(48)] = 752,
  [SMALL_STATE(49)] = 766,
  [SMALL_STATE(50)] = 780,
  [SMALL_STATE(51)] = 794,
  [SMALL_STATE(52)] = 808,
  [SMALL_STATE(53)] = 822,
  [SMALL_STATE(54)] = 836,
  [SMALL_STATE(55)] = 850,
  [SMALL_STATE(56)] = 862,
  [SMALL_STATE(57)] = 873,
  [SMALL_STATE(58)] = 884,
  [SMALL_STATE(59)] = 891,
  [SMALL_STATE(60)] = 900,
  [SMALL_STATE(61)] = 909,
  [SMALL_STATE(62)] = 918,
  [SMALL_STATE(63)] = 927,
  [SMALL_STATE(64)] = 938,
  [SMALL_STATE(65)] = 945,
  [SMALL_STATE(66)] = 952,
  [SMALL_STATE(67)] = 959,
  [SMALL_STATE(68)] = 966,
  [SMALL_STATE(69)] = 973,
  [SMALL_STATE(70)] = 982,
  [SMALL_STATE(71)] = 995,
  [SMALL_STATE(72)] = 1002,
  [SMALL_STATE(73)] = 1011,
  [SMALL_STATE(74)] = 1022,
  [SMALL_STATE(75)] = 1033,
  [SMALL_STATE(76)] = 1042,
  [SMALL_STATE(77)] = 1050,
  [SMALL_STATE(78)] = 1056,
  [SMALL_STATE(79)] = 1066,
  [SMALL_STATE(80)] = 1076,
  [SMALL_STATE(81)] = 1082,
  [SMALL_STATE(82)] = 1088,
  [SMALL_STATE(83)] = 1098,
  [SMALL_STATE(84)] = 1108,
  [SMALL_STATE(85)] = 1118,
  [SMALL_STATE(86)] = 1126,
  [SMALL_STATE(87)] = 1136,
  [SMALL_STATE(88)] = 1142,
  [SMALL_STATE(89)] = 1148,
  [SMALL_STATE(90)] = 1154,
  [SMALL_STATE(91)] = 1164,
  [SMALL_STATE(92)] = 1174,
  [SMALL_STATE(93)] = 1184,
  [SMALL_STATE(94)] = 1194,
  [SMALL_STATE(95)] = 1200,
  [SMALL_STATE(96)] = 1206,
  [SMALL_STATE(97)] = 1212,
  [SMALL_STATE(98)] = 1218,
  [SMALL_STATE(99)] = 1224,
  [SMALL_STATE(100)] = 1230,
  [SMALL_STATE(101)] = 1240,
  [SMALL_STATE(102)] = 1246,
  [SMALL_STATE(103)] = 1252,
  [SMALL_STATE(104)] = 1258,
  [SMALL_STATE(105)] = 1265,
  [SMALL_STATE(106)] = 1270,
  [SMALL_STATE(107)] = 1277,
  [SMALL_STATE(108)] = 1284,
  [SMALL_STATE(109)] = 1291,
  [SMALL_STATE(110)] = 1298,
  [SMALL_STATE(111)] = 1305,
  [SMALL_STATE(112)] = 1312,
  [SMALL_STATE(113)] = 1319,
  [SMALL_STATE(114)] = 1326,
  [SMALL_STATE(115)] = 1333,
  [SMALL_STATE(116)] = 1340,
  [SMALL_STATE(117)] = 1347,
  [SMALL_STATE(118)] = 1354,
  [SMALL_STATE(119)] = 1359,
  [SMALL_STATE(120)] = 1366,
  [SMALL_STATE(121)] = 1373,
  [SMALL_STATE(122)] = 1380,
  [SMALL_STATE(123)] = 1387,
  [SMALL_STATE(124)] = 1394,
  [SMALL_STATE(125)] = 1399,
  [SMALL_STATE(126)] = 1406,
  [SMALL_STATE(127)] = 1413,
  [SMALL_STATE(128)] = 1420,
  [SMALL_STATE(129)] = 1427,
  [SMALL_STATE(130)] = 1434,
  [SMALL_STATE(131)] = 1438,
  [SMALL_STATE(132)] = 1442,
  [SMALL_STATE(133)] = 1446,
  [SMALL_STATE(134)] = 1450,
  [SMALL_STATE(135)] = 1454,
  [SMALL_STATE(136)] = 1458,
  [SMALL_STATE(137)] = 1462,
  [SMALL_STATE(138)] = 1466,
  [SMALL_STATE(139)] = 1470,
  [SMALL_STATE(140)] = 1474,
  [SMALL_STATE(141)] = 1478,
  [SMALL_STATE(142)] = 1482,
  [SMALL_STATE(143)] = 1486,
  [SMALL_STATE(144)] = 1490,
  [SMALL_STATE(145)] = 1494,
  [SMALL_STATE(146)] = 1498,
  [SMALL_STATE(147)] = 1502,
  [SMALL_STATE(148)] = 1506,
  [SMALL_STATE(149)] = 1510,
  [SMALL_STATE(150)] = 1514,
  [SMALL_STATE(151)] = 1518,
  [SMALL_STATE(152)] = 1522,
  [SMALL_STATE(153)] = 1526,
  [SMALL_STATE(154)] = 1530,
  [SMALL_STATE(155)] = 1534,
  [SMALL_STATE(156)] = 1538,
  [SMALL_STATE(157)] = 1542,
  [SMALL_STATE(158)] = 1546,
  [SMALL_STATE(159)] = 1550,
  [SMALL_STATE(160)] = 1554,
  [SMALL_STATE(161)] = 1558,
  [SMALL_STATE(162)] = 1562,
  [SMALL_STATE(163)] = 1566,
  [SMALL_STATE(164)] = 1570,
  [SMALL_STATE(165)] = 1574,
  [SMALL_STATE(166)] = 1578,
  [SMALL_STATE(167)] = 1582,
  [SMALL_STATE(168)] = 1586,
  [SMALL_STATE(169)] = 1590,
  [SMALL_STATE(170)] = 1594,
  [SMALL_STATE(171)] = 1598,
  [SMALL_STATE(172)] = 1602,
  [SMALL_STATE(173)] = 1606,
  [SMALL_STATE(174)] = 1610,
  [SMALL_STATE(175)] = 1614,
  [SMALL_STATE(176)] = 1618,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(175),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(120),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(100),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(136),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(65),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2), SHIFT_REPEAT(135),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_pool_def_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 8),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_def, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(170),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(157),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(145),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 9),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_access, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(123),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_method_ref, 5),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_info_last_mod, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_utf8, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_info_last_mod, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_class, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_string, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_path_repeat1, 2), SHIFT_REPEAT(161),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_info_last_mod_repeat1, 2), SHIFT_REPEAT(93),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_info_last_mod_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_pool_item, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_field_ref, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_pool_item_type_name_and_type, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_compile, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info_md5, 2),
  [340] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_access, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_info, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
