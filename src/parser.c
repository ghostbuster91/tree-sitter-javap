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
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
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
  aux_sym__constantPoolItemTypeUtf8_token1 = 42,
  anon_sym_Class = 43,
  anon_sym_String = 44,
  anon_sym_Methodref = 45,
  anon_sym_DOT = 46,
  anon_sym_Fieldref = 47,
  anon_sym_NameAndType = 48,
  sym_class_keyword = 49,
  aux_sym_class_info_item_simple_token1 = 50,
  sym_file_path = 51,
  anon_sym_Lastmodified = 52,
  aux_sym_general_info_last_mod_token1 = 53,
  sym_md5 = 54,
  anon_sym_MD5checksum = 55,
  anon_sym_Compiledfrom = 56,
  aux_sym_general_info_compile_token1 = 57,
  anon_sym_Classfile = 58,
  sym_source_file = 59,
  sym_method_def = 60,
  sym_mod_access = 61,
  sym_class_definition = 62,
  sym_code_def = 63,
  sym_code_info = 64,
  sym_line_number_table_def = 65,
  sym_numered_line = 66,
  sym_numered_instruction = 67,
  sym_instruction = 68,
  sym_code_info_stat = 69,
  sym_descriptor_def = 70,
  sym_flag_def = 71,
  sym__wrapped_hex_val = 72,
  sym_method_args = 73,
  sym__type = 74,
  sym_simple_type = 75,
  sym_array_type = 76,
  sym_block = 77,
  sym_source_file_def = 78,
  sym_constantPoolDef = 79,
  sym__hash_number = 80,
  sym_constantPoolItem = 81,
  sym__constantPoolItemType = 82,
  sym__constantPoolItemTypeUtf8 = 83,
  sym__constantPoolItemTypeClass = 84,
  sym__constantPoolItemTypeString = 85,
  sym__constantPoolItemTypeMethodref = 86,
  sym__constantPoolItemTypeFieldref = 87,
  sym__constantPoolItemTypeNameAndType = 88,
  sym_class_info_def = 89,
  sym_class_info_item = 90,
  sym_class_info_item_simple = 91,
  sym_general_info_last_mod = 92,
  sym_general_info_md5 = 93,
  sym_general_info_compile = 94,
  sym_general_info = 95,
  sym_header = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_class_definition_repeat1 = 98,
  aux_sym_code_info_repeat1 = 99,
  aux_sym_code_info_repeat2 = 100,
  aux_sym_line_number_table_def_repeat1 = 101,
  aux_sym_flag_def_repeat1 = 102,
  aux_sym_constantPoolDef_repeat1 = 103,
  aux_sym_class_info_def_repeat1 = 104,
  aux_sym_class_info_item_simple_repeat1 = 105,
  aux_sym_general_info_last_mod_repeat1 = 106,
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
  [aux_sym__constantPoolItemTypeUtf8_token1] = "_constantPoolItemTypeUtf8_token1",
  [anon_sym_Class] = "Class",
  [anon_sym_String] = "String",
  [anon_sym_Methodref] = "Methodref",
  [anon_sym_DOT] = ".",
  [anon_sym_Fieldref] = "Fieldref",
  [anon_sym_NameAndType] = "NameAndType",
  [sym_class_keyword] = "class_keyword",
  [aux_sym_class_info_item_simple_token1] = "class_info_item_simple_token1",
  [sym_file_path] = "file_path",
  [anon_sym_Lastmodified] = "Last modified",
  [aux_sym_general_info_last_mod_token1] = "general_info_last_mod_token1",
  [sym_md5] = "md5",
  [anon_sym_MD5checksum] = "MD5 checksum",
  [anon_sym_Compiledfrom] = "Compiled from",
  [aux_sym_general_info_compile_token1] = "general_info_compile_token1",
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
  [sym_constantPoolDef] = "constantPoolDef",
  [sym__hash_number] = "_hash_number",
  [sym_constantPoolItem] = "constantPoolItem",
  [sym__constantPoolItemType] = "_constantPoolItemType",
  [sym__constantPoolItemTypeUtf8] = "_constantPoolItemTypeUtf8",
  [sym__constantPoolItemTypeClass] = "_constantPoolItemTypeClass",
  [sym__constantPoolItemTypeString] = "_constantPoolItemTypeString",
  [sym__constantPoolItemTypeMethodref] = "_constantPoolItemTypeMethodref",
  [sym__constantPoolItemTypeFieldref] = "_constantPoolItemTypeFieldref",
  [sym__constantPoolItemTypeNameAndType] = "_constantPoolItemTypeNameAndType",
  [sym_class_info_def] = "class_info_def",
  [sym_class_info_item] = "class_info_item",
  [sym_class_info_item_simple] = "class_info_item_simple",
  [sym_general_info_last_mod] = "general_info_last_mod",
  [sym_general_info_md5] = "general_info_md5",
  [sym_general_info_compile] = "general_info_compile",
  [sym_general_info] = "general_info",
  [sym_header] = "header",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_code_info_repeat1] = "code_info_repeat1",
  [aux_sym_code_info_repeat2] = "code_info_repeat2",
  [aux_sym_line_number_table_def_repeat1] = "line_number_table_def_repeat1",
  [aux_sym_flag_def_repeat1] = "flag_def_repeat1",
  [aux_sym_constantPoolDef_repeat1] = "constantPoolDef_repeat1",
  [aux_sym_class_info_def_repeat1] = "class_info_def_repeat1",
  [aux_sym_class_info_item_simple_repeat1] = "class_info_item_simple_repeat1",
  [aux_sym_general_info_last_mod_repeat1] = "general_info_last_mod_repeat1",
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
  [aux_sym__constantPoolItemTypeUtf8_token1] = aux_sym__constantPoolItemTypeUtf8_token1,
  [anon_sym_Class] = anon_sym_Class,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Methodref] = anon_sym_Methodref,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Fieldref] = anon_sym_Fieldref,
  [anon_sym_NameAndType] = anon_sym_NameAndType,
  [sym_class_keyword] = sym_class_keyword,
  [aux_sym_class_info_item_simple_token1] = aux_sym_class_info_item_simple_token1,
  [sym_file_path] = sym_file_path,
  [anon_sym_Lastmodified] = anon_sym_Lastmodified,
  [aux_sym_general_info_last_mod_token1] = aux_sym_general_info_last_mod_token1,
  [sym_md5] = sym_md5,
  [anon_sym_MD5checksum] = anon_sym_MD5checksum,
  [anon_sym_Compiledfrom] = anon_sym_Compiledfrom,
  [aux_sym_general_info_compile_token1] = aux_sym_general_info_compile_token1,
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
  [sym_constantPoolDef] = sym_constantPoolDef,
  [sym__hash_number] = sym__hash_number,
  [sym_constantPoolItem] = sym_constantPoolItem,
  [sym__constantPoolItemType] = sym__constantPoolItemType,
  [sym__constantPoolItemTypeUtf8] = sym__constantPoolItemTypeUtf8,
  [sym__constantPoolItemTypeClass] = sym__constantPoolItemTypeClass,
  [sym__constantPoolItemTypeString] = sym__constantPoolItemTypeString,
  [sym__constantPoolItemTypeMethodref] = sym__constantPoolItemTypeMethodref,
  [sym__constantPoolItemTypeFieldref] = sym__constantPoolItemTypeFieldref,
  [sym__constantPoolItemTypeNameAndType] = sym__constantPoolItemTypeNameAndType,
  [sym_class_info_def] = sym_class_info_def,
  [sym_class_info_item] = sym_class_info_item,
  [sym_class_info_item_simple] = sym_class_info_item_simple,
  [sym_general_info_last_mod] = sym_general_info_last_mod,
  [sym_general_info_md5] = sym_general_info_md5,
  [sym_general_info_compile] = sym_general_info_compile,
  [sym_general_info] = sym_general_info,
  [sym_header] = sym_header,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_code_info_repeat1] = aux_sym_code_info_repeat1,
  [aux_sym_code_info_repeat2] = aux_sym_code_info_repeat2,
  [aux_sym_line_number_table_def_repeat1] = aux_sym_line_number_table_def_repeat1,
  [aux_sym_flag_def_repeat1] = aux_sym_flag_def_repeat1,
  [aux_sym_constantPoolDef_repeat1] = aux_sym_constantPoolDef_repeat1,
  [aux_sym_class_info_def_repeat1] = aux_sym_class_info_def_repeat1,
  [aux_sym_class_info_item_simple_repeat1] = aux_sym_class_info_item_simple_repeat1,
  [aux_sym_general_info_last_mod_repeat1] = aux_sym_general_info_last_mod_repeat1,
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
  [aux_sym__constantPoolItemTypeUtf8_token1] = {
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
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Lastmodified] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_general_info_last_mod_token1] = {
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
  [aux_sym_general_info_compile_token1] = {
    .visible = false,
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
  [sym_constantPoolDef] = {
    .visible = true,
    .named = true,
  },
  [sym__hash_number] = {
    .visible = false,
    .named = true,
  },
  [sym_constantPoolItem] = {
    .visible = true,
    .named = true,
  },
  [sym__constantPoolItemType] = {
    .visible = false,
    .named = true,
  },
  [sym__constantPoolItemTypeUtf8] = {
    .visible = false,
    .named = true,
  },
  [sym__constantPoolItemTypeClass] = {
    .visible = false,
    .named = true,
  },
  [sym__constantPoolItemTypeString] = {
    .visible = false,
    .named = true,
  },
  [sym__constantPoolItemTypeMethodref] = {
    .visible = false,
    .named = true,
  },
  [sym__constantPoolItemTypeFieldref] = {
    .visible = false,
    .named = true,
  },
  [sym__constantPoolItemTypeNameAndType] = {
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
  [sym_general_info_last_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_general_info_md5] = {
    .visible = true,
    .named = true,
  },
  [sym_general_info_compile] = {
    .visible = true,
    .named = true,
  },
  [sym_general_info] = {
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
  [aux_sym_constantPoolDef_repeat1] = {
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
  [aux_sym_general_info_last_mod_repeat1] = {
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
  [44] = 29,
  [45] = 45,
  [46] = 17,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 19,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 10,
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
  [71] = 34,
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
  [107] = 100,
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
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 61,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 126,
  [162] = 153,
  [163] = 133,
  [164] = 164,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(292);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(320);
      if (lookahead == ',') ADVANCE(301);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == ';') ADVANCE(293);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == 'C') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'L') ADVANCE(59);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == 'U') ADVANCE(226);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'g') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(183);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '}') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(289);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(343);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == '0') ADVANCE(249);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == 'C') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(225);
      if (lookahead == 'U') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(320);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(301);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(348);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(305);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 21:
      if (lookahead == '8') ADVANCE(351);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(300);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(316);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(313);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(349);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(349);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(302);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 44:
      if (lookahead == ';') ADVANCE(299);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(177);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 51:
      if (lookahead == 'F') ADVANCE(150);
      END_STATE();
    case 52:
      if (lookahead == 'M') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(243);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(250);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(338);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(334);
      if (lookahead == 's') ADVANCE(335);
      if (lookahead == 'v') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(334);
      if (lookahead == 'v') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(359);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(357);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(206);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(356);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(223);
      END_STATE();
    case 152:
      if (lookahead == 'k') ADVANCE(106);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 247:
      if (lookahead == 'v') ADVANCE(182);
      END_STATE();
    case 248:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 249:
      if (lookahead == 'x') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 250:
      if (lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 251:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 252:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 290:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 291:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_aload_0);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_invokespecial);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_getstatic);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_ldc);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_invokevirtual);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_code_info_stat_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_flag_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(44);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'a') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'c') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_simple_type_token1);
      if (lookahead == '.') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_Utf8);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__constantPoolItemTypeUtf8_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__constantPoolItemTypeUtf8_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_Methodref);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_Fieldref);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_NameAndType);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '/') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'c') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'h') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'k') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 's') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'u') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_general_info_compile_token1);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 378:
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
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 15},
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
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 75},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 74},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 52},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 52},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 15},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 52},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 251},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 251},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 252},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 352},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 253},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 251},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 251},
  [163] = {.lex_state = 251},
  [164] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(1),
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
    [aux_sym_general_info_compile_token1] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(160),
    [sym_general_info] = STATE(102),
    [sym_header] = STATE(50),
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
    STATE(8), 1,
      sym_flag_def,
    STATE(12), 1,
      sym_code_def,
    STATE(20), 1,
      sym_mod_access,
    STATE(16), 2,
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
    STATE(92), 7,
      sym__constantPoolItemType,
      sym__constantPoolItemTypeUtf8,
      sym__constantPoolItemTypeClass,
      sym__constantPoolItemTypeString,
      sym__constantPoolItemTypeMethodref,
      sym__constantPoolItemTypeFieldref,
      sym__constantPoolItemTypeNameAndType,
  [62] = 8,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_flag_def,
    STATE(20), 1,
      sym_mod_access,
    STATE(30), 1,
      sym_code_def,
    STATE(13), 2,
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
    STATE(64), 1,
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
    STATE(42), 1,
      sym_flag_def,
    STATE(70), 1,
      sym_code_def,
    ACTIONS(31), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [140] = 6,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_mod_access,
    STATE(24), 1,
      sym_code_def,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [162] = 6,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_mod_access,
    STATE(30), 1,
      sym_code_def,
    STATE(13), 2,
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
    STATE(41), 1,
      sym_flag_def,
    STATE(64), 1,
      sym_code_def,
    ACTIONS(29), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [203] = 2,
    ACTIONS(37), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(35), 7,
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
    STATE(33), 1,
      sym_flag_def,
    STATE(63), 1,
      sym_code_def,
    ACTIONS(39), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [235] = 4,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_mod_access,
    STATE(13), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [251] = 4,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_mod_access,
    STATE(28), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [267] = 5,
    ACTIONS(41), 1,
      anon_sym_flags_COLON,
    ACTIONS(44), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(46), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(14), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(94), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [285] = 3,
    ACTIONS(51), 1,
      anon_sym_line,
    STATE(15), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(49), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [299] = 4,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_mod_access,
    STATE(28), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [315] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(54), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [329] = 4,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_mod_access,
    STATE(28), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [345] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(61), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [359] = 3,
    ACTIONS(65), 1,
      sym_mod_static,
    ACTIONS(67), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(105), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [373] = 3,
    STATE(87), 1,
      sym_instruction,
    ACTIONS(69), 2,
      anon_sym_aload_0,
      anon_sym_return,
    ACTIONS(71), 4,
      anon_sym_invokespecial,
      anon_sym_getstatic,
      anon_sym_ldc,
      anon_sym_invokevirtual,
  [387] = 5,
    ACTIONS(73), 1,
      anon_sym_flags_COLON,
    ACTIONS(75), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(77), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(25), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(94), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [405] = 3,
    ACTIONS(81), 1,
      anon_sym_line,
    STATE(15), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(79), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [419] = 4,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_mod_access,
    STATE(18), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [435] = 5,
    ACTIONS(73), 1,
      anon_sym_flags_COLON,
    ACTIONS(77), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(85), 1,
      anon_sym_Constantpool_COLON,
    STATE(14), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(94), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [453] = 4,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_mod_access,
    STATE(28), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [469] = 3,
    ACTIONS(81), 1,
      anon_sym_line,
    STATE(23), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(87), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [483] = 4,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_mod_access,
    STATE(28), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(89), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [499] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(94), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [513] = 4,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_mod_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [529] = 5,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(100), 1,
      sym_number,
    STATE(56), 1,
      aux_sym_code_info_repeat1,
    STATE(74), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [546] = 4,
    ACTIONS(102), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym__hash_number,
    ACTIONS(104), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(35), 2,
      sym_constantPoolItem,
      aux_sym_constantPoolDef_repeat1,
  [561] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(62), 1,
      sym_code_def,
    ACTIONS(106), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [574] = 1,
    ACTIONS(54), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [583] = 4,
    ACTIONS(102), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym__hash_number,
    ACTIONS(108), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(37), 2,
      sym_constantPoolItem,
      aux_sym_constantPoolDef_repeat1,
  [598] = 2,
    ACTIONS(67), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(113), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [609] = 4,
    ACTIONS(110), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym__hash_number,
    ACTIONS(113), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(37), 2,
      sym_constantPoolItem,
      aux_sym_constantPoolDef_repeat1,
  [624] = 2,
    ACTIONS(67), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
    STATE(115), 3,
      sym__type,
      sym_simple_type,
      sym_array_type,
  [635] = 1,
    ACTIONS(115), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [644] = 5,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      sym_number,
    ACTIONS(117), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(31), 1,
      aux_sym_code_info_repeat1,
    STATE(73), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [661] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(63), 1,
      sym_code_def,
    ACTIONS(39), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [674] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(64), 1,
      sym_code_def,
    ACTIONS(29), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [687] = 5,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(54), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(121), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [704] = 4,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(46), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(94), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [718] = 4,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(141), 1,
      sym_source_file_def,
    STATE(49), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [732] = 4,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(46), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(54), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [746] = 1,
    ACTIONS(140), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [754] = 3,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(142), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [766] = 4,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(164), 1,
      sym_source_file_def,
    STATE(69), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [780] = 3,
    STATE(109), 1,
      sym_class_info_def,
    STATE(150), 1,
      sym_mod_access,
    ACTIONS(148), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [792] = 4,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(44), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(61), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [806] = 4,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(52), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(155), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [820] = 4,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(55), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(159), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [834] = 4,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(52), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(159), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [848] = 4,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(52), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(163), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [862] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(170), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [873] = 3,
    ACTIONS(172), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(174), 1,
      sym_number,
    STATE(57), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [884] = 2,
    ACTIONS(179), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(177), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [893] = 1,
    ACTIONS(35), 4,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_comment,
  [900] = 2,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [909] = 1,
    ACTIONS(185), 4,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_simple_type_token1,
  [916] = 1,
    ACTIONS(187), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [923] = 1,
    ACTIONS(106), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [930] = 1,
    ACTIONS(39), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [937] = 2,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [946] = 2,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [955] = 2,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [964] = 2,
    ACTIONS(203), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [973] = 3,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(69), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [984] = 1,
    ACTIONS(29), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [991] = 2,
    ACTIONS(138), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(54), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1000] = 1,
    ACTIONS(210), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [1007] = 3,
    ACTIONS(98), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(100), 1,
      sym_number,
    STATE(57), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1018] = 3,
    ACTIONS(100), 1,
      sym_number,
    ACTIONS(212), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(57), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [1029] = 1,
    ACTIONS(214), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1035] = 1,
    ACTIONS(216), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1041] = 1,
    ACTIONS(218), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1047] = 3,
    ACTIONS(102), 1,
      anon_sym_POUND,
    ACTIONS(220), 1,
      sym_number,
    STATE(48), 1,
      sym__hash_number,
  [1057] = 1,
    ACTIONS(222), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1063] = 3,
    ACTIONS(224), 1,
      aux_sym_code_info_stat_token1,
    STATE(40), 1,
      sym_code_info_stat,
    STATE(101), 1,
      sym_code_info,
  [1073] = 1,
    ACTIONS(170), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1079] = 1,
    ACTIONS(226), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1085] = 3,
    ACTIONS(228), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(231), 1,
      anon_sym_MD5checksum,
    STATE(83), 1,
      aux_sym_general_info_last_mod_repeat1,
  [1095] = 1,
    ACTIONS(233), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1101] = 1,
    ACTIONS(235), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1107] = 1,
    ACTIONS(237), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1113] = 2,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1121] = 1,
    ACTIONS(243), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1127] = 3,
    ACTIONS(245), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(247), 1,
      anon_sym_MD5checksum,
    STATE(83), 1,
      aux_sym_general_info_last_mod_repeat1,
  [1137] = 1,
    ACTIONS(249), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1143] = 1,
    ACTIONS(251), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1149] = 1,
    ACTIONS(253), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1155] = 1,
    ACTIONS(255), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1161] = 2,
    ACTIONS(259), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(257), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1169] = 3,
    ACTIONS(102), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      sym_number,
    STATE(43), 1,
      sym__hash_number,
  [1179] = 1,
    ACTIONS(263), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1185] = 3,
    ACTIONS(265), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(267), 1,
      anon_sym_MD5checksum,
    STATE(89), 1,
      aux_sym_general_info_last_mod_repeat1,
  [1195] = 2,
    ACTIONS(224), 1,
      aux_sym_code_info_stat_token1,
    STATE(81), 1,
      sym_code_info_stat,
  [1202] = 2,
    ACTIONS(269), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym__hash_number,
  [1209] = 2,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym__wrapped_hex_val,
  [1216] = 2,
    ACTIONS(273), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(72), 1,
      sym_line_number_table_def,
  [1223] = 2,
    ACTIONS(275), 1,
      anon_sym_Lastmodified,
    STATE(106), 1,
      sym_general_info_last_mod,
  [1230] = 2,
    ACTIONS(102), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym__hash_number,
  [1237] = 1,
    ACTIONS(277), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1242] = 2,
    ACTIONS(279), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(281), 1,
      sym_identifier,
  [1249] = 2,
    ACTIONS(283), 1,
      anon_sym_MD5checksum,
    STATE(110), 1,
      sym_general_info_md5,
  [1256] = 2,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      sym__wrapped_hex_val,
  [1263] = 2,
    ACTIONS(102), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym__hash_number,
  [1270] = 2,
    ACTIONS(285), 1,
      anon_sym_Constantpool_COLON,
    STATE(45), 1,
      sym_constantPoolDef,
  [1277] = 2,
    ACTIONS(287), 1,
      anon_sym_Compiledfrom,
    STATE(79), 1,
      sym_general_info_compile,
  [1284] = 2,
    ACTIONS(102), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym__hash_number,
  [1291] = 1,
    ACTIONS(289), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1296] = 2,
    ACTIONS(279), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [1303] = 2,
    ACTIONS(269), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym__hash_number,
  [1310] = 2,
    ACTIONS(279), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(293), 1,
      sym_identifier,
  [1317] = 2,
    ACTIONS(269), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym__hash_number,
  [1324] = 2,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_method_args,
  [1331] = 2,
    ACTIONS(269), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym__hash_number,
  [1338] = 2,
    ACTIONS(297), 1,
      anon_sym_public,
    STATE(157), 1,
      sym_class_definition,
  [1345] = 2,
    ACTIONS(269), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym__hash_number,
  [1352] = 2,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_method_args,
  [1359] = 1,
    ACTIONS(299), 1,
      anon_sym_Compiledfrom,
  [1363] = 1,
    ACTIONS(301), 1,
      anon_sym_SEMI,
  [1367] = 1,
    ACTIONS(303), 1,
      anon_sym_EQ,
  [1371] = 1,
    ACTIONS(305), 1,
      sym_file_path,
  [1375] = 1,
    ACTIONS(307), 1,
      sym_number,
  [1379] = 1,
    ACTIONS(309), 1,
      sym_descriptor_value,
  [1383] = 1,
    ACTIONS(311), 1,
      aux_sym_general_info_compile_token1,
  [1387] = 1,
    ACTIONS(313), 1,
      anon_sym_SEMI,
  [1391] = 1,
    ACTIONS(315), 1,
      sym_hex_value,
  [1395] = 1,
    ACTIONS(317), 1,
      anon_sym_COLON,
  [1399] = 1,
    ACTIONS(319), 1,
      sym_number,
  [1403] = 1,
    ACTIONS(321), 1,
      sym_flag_value,
  [1407] = 1,
    ACTIONS(323), 1,
      anon_sym_POUND,
  [1411] = 1,
    ACTIONS(325), 1,
      sym_flag_value,
  [1415] = 1,
    ACTIONS(327), 1,
      anon_sym_SEMI,
  [1419] = 1,
    ACTIONS(329), 1,
      aux_sym_source_file_def_token1,
  [1423] = 1,
    ACTIONS(331), 1,
      sym_identifier,
  [1427] = 1,
    ACTIONS(333), 1,
      sym_number,
  [1431] = 1,
    ACTIONS(335), 1,
      sym_number,
  [1435] = 1,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
  [1439] = 1,
    ACTIONS(339), 1,
      anon_sym_COLON,
  [1443] = 1,
    ACTIONS(341), 1,
      sym_number,
  [1447] = 1,
    ACTIONS(343), 1,
      anon_sym_COLON,
  [1451] = 1,
    ACTIONS(345), 1,
      sym_md5,
  [1455] = 1,
    ACTIONS(347), 1,
      anon_sym_DOT,
  [1459] = 1,
    ACTIONS(349), 1,
      aux_sym__constantPoolItemTypeUtf8_token1,
  [1463] = 1,
    ACTIONS(351), 1,
      anon_sym_DOT,
  [1467] = 1,
    ACTIONS(353), 1,
      aux_sym_class_info_item_simple_token1,
  [1471] = 1,
    ACTIONS(355), 1,
      sym_class_keyword,
  [1475] = 1,
    ACTIONS(357), 1,
      sym_class_keyword,
  [1479] = 1,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [1483] = 1,
    ACTIONS(361), 1,
      sym_flag_value,
  [1487] = 1,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
  [1491] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [1495] = 1,
    ACTIONS(367), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1499] = 1,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
  [1503] = 1,
    ACTIONS(371), 1,
      anon_sym_Lastmodified,
  [1507] = 1,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
  [1511] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
  [1515] = 1,
    ACTIONS(377), 1,
      sym_number,
  [1519] = 1,
    ACTIONS(379), 1,
      sym_flag_value,
  [1523] = 1,
    ACTIONS(381), 1,
      sym_flag_value,
  [1527] = 1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(13)] = 251,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 285,
  [SMALL_STATE(16)] = 299,
  [SMALL_STATE(17)] = 315,
  [SMALL_STATE(18)] = 329,
  [SMALL_STATE(19)] = 345,
  [SMALL_STATE(20)] = 359,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 387,
  [SMALL_STATE(23)] = 405,
  [SMALL_STATE(24)] = 419,
  [SMALL_STATE(25)] = 435,
  [SMALL_STATE(26)] = 453,
  [SMALL_STATE(27)] = 469,
  [SMALL_STATE(28)] = 483,
  [SMALL_STATE(29)] = 499,
  [SMALL_STATE(30)] = 513,
  [SMALL_STATE(31)] = 529,
  [SMALL_STATE(32)] = 546,
  [SMALL_STATE(33)] = 561,
  [SMALL_STATE(34)] = 574,
  [SMALL_STATE(35)] = 583,
  [SMALL_STATE(36)] = 598,
  [SMALL_STATE(37)] = 609,
  [SMALL_STATE(38)] = 624,
  [SMALL_STATE(39)] = 635,
  [SMALL_STATE(40)] = 644,
  [SMALL_STATE(41)] = 661,
  [SMALL_STATE(42)] = 674,
  [SMALL_STATE(43)] = 687,
  [SMALL_STATE(44)] = 704,
  [SMALL_STATE(45)] = 718,
  [SMALL_STATE(46)] = 732,
  [SMALL_STATE(47)] = 746,
  [SMALL_STATE(48)] = 754,
  [SMALL_STATE(49)] = 766,
  [SMALL_STATE(50)] = 780,
  [SMALL_STATE(51)] = 792,
  [SMALL_STATE(52)] = 806,
  [SMALL_STATE(53)] = 820,
  [SMALL_STATE(54)] = 834,
  [SMALL_STATE(55)] = 848,
  [SMALL_STATE(56)] = 862,
  [SMALL_STATE(57)] = 873,
  [SMALL_STATE(58)] = 884,
  [SMALL_STATE(59)] = 893,
  [SMALL_STATE(60)] = 900,
  [SMALL_STATE(61)] = 909,
  [SMALL_STATE(62)] = 916,
  [SMALL_STATE(63)] = 923,
  [SMALL_STATE(64)] = 930,
  [SMALL_STATE(65)] = 937,
  [SMALL_STATE(66)] = 946,
  [SMALL_STATE(67)] = 955,
  [SMALL_STATE(68)] = 964,
  [SMALL_STATE(69)] = 973,
  [SMALL_STATE(70)] = 984,
  [SMALL_STATE(71)] = 991,
  [SMALL_STATE(72)] = 1000,
  [SMALL_STATE(73)] = 1007,
  [SMALL_STATE(74)] = 1018,
  [SMALL_STATE(75)] = 1029,
  [SMALL_STATE(76)] = 1035,
  [SMALL_STATE(77)] = 1041,
  [SMALL_STATE(78)] = 1047,
  [SMALL_STATE(79)] = 1057,
  [SMALL_STATE(80)] = 1063,
  [SMALL_STATE(81)] = 1073,
  [SMALL_STATE(82)] = 1079,
  [SMALL_STATE(83)] = 1085,
  [SMALL_STATE(84)] = 1095,
  [SMALL_STATE(85)] = 1101,
  [SMALL_STATE(86)] = 1107,
  [SMALL_STATE(87)] = 1113,
  [SMALL_STATE(88)] = 1121,
  [SMALL_STATE(89)] = 1127,
  [SMALL_STATE(90)] = 1137,
  [SMALL_STATE(91)] = 1143,
  [SMALL_STATE(92)] = 1149,
  [SMALL_STATE(93)] = 1155,
  [SMALL_STATE(94)] = 1161,
  [SMALL_STATE(95)] = 1169,
  [SMALL_STATE(96)] = 1179,
  [SMALL_STATE(97)] = 1185,
  [SMALL_STATE(98)] = 1195,
  [SMALL_STATE(99)] = 1202,
  [SMALL_STATE(100)] = 1209,
  [SMALL_STATE(101)] = 1216,
  [SMALL_STATE(102)] = 1223,
  [SMALL_STATE(103)] = 1230,
  [SMALL_STATE(104)] = 1237,
  [SMALL_STATE(105)] = 1242,
  [SMALL_STATE(106)] = 1249,
  [SMALL_STATE(107)] = 1256,
  [SMALL_STATE(108)] = 1263,
  [SMALL_STATE(109)] = 1270,
  [SMALL_STATE(110)] = 1277,
  [SMALL_STATE(111)] = 1284,
  [SMALL_STATE(112)] = 1291,
  [SMALL_STATE(113)] = 1296,
  [SMALL_STATE(114)] = 1303,
  [SMALL_STATE(115)] = 1310,
  [SMALL_STATE(116)] = 1317,
  [SMALL_STATE(117)] = 1324,
  [SMALL_STATE(118)] = 1331,
  [SMALL_STATE(119)] = 1338,
  [SMALL_STATE(120)] = 1345,
  [SMALL_STATE(121)] = 1352,
  [SMALL_STATE(122)] = 1359,
  [SMALL_STATE(123)] = 1363,
  [SMALL_STATE(124)] = 1367,
  [SMALL_STATE(125)] = 1371,
  [SMALL_STATE(126)] = 1375,
  [SMALL_STATE(127)] = 1379,
  [SMALL_STATE(128)] = 1383,
  [SMALL_STATE(129)] = 1387,
  [SMALL_STATE(130)] = 1391,
  [SMALL_STATE(131)] = 1395,
  [SMALL_STATE(132)] = 1399,
  [SMALL_STATE(133)] = 1403,
  [SMALL_STATE(134)] = 1407,
  [SMALL_STATE(135)] = 1411,
  [SMALL_STATE(136)] = 1415,
  [SMALL_STATE(137)] = 1419,
  [SMALL_STATE(138)] = 1423,
  [SMALL_STATE(139)] = 1427,
  [SMALL_STATE(140)] = 1431,
  [SMALL_STATE(141)] = 1435,
  [SMALL_STATE(142)] = 1439,
  [SMALL_STATE(143)] = 1443,
  [SMALL_STATE(144)] = 1447,
  [SMALL_STATE(145)] = 1451,
  [SMALL_STATE(146)] = 1455,
  [SMALL_STATE(147)] = 1459,
  [SMALL_STATE(148)] = 1463,
  [SMALL_STATE(149)] = 1467,
  [SMALL_STATE(150)] = 1471,
  [SMALL_STATE(151)] = 1475,
  [SMALL_STATE(152)] = 1479,
  [SMALL_STATE(153)] = 1483,
  [SMALL_STATE(154)] = 1487,
  [SMALL_STATE(155)] = 1491,
  [SMALL_STATE(156)] = 1495,
  [SMALL_STATE(157)] = 1499,
  [SMALL_STATE(158)] = 1503,
  [SMALL_STATE(159)] = 1507,
  [SMALL_STATE(160)] = 1511,
  [SMALL_STATE(161)] = 1515,
  [SMALL_STATE(162)] = 1519,
  [SMALL_STATE(163)] = 1523,
  [SMALL_STATE(164)] = 1527,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_number, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_number, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(107),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(95),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(143),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(163),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(61),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantPoolDef, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 8),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantPoolDef, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constantPoolDef_repeat1, 2), SHIFT_REPEAT(126),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constantPoolDef_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(133),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(149),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(98),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(142),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeNameAndType, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_access, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 9),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeFieldref, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeMethodref, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeClass, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeString, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeClass, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeString, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_general_info_last_mod_repeat1, 2), SHIFT_REPEAT(83),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_general_info_last_mod_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info_compile, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stat, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeMethodref, 5),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_general_info_last_mod, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeUtf8, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantPoolItem, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeFieldref, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItemTypeNameAndType, 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_general_info_last_mod, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info_md5, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_hex_val, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_access, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [375] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
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
