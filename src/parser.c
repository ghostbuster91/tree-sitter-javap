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
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  aux_sym_code_info_stack_token1 = 16,
  anon_sym_locals_EQ = 17,
  anon_sym_args_size_EQ = 18,
  anon_sym_descriptor_COLON = 19,
  sym_descriptor_value = 20,
  anon_sym_flags_COLON = 21,
  aux_sym_flag_value_token1 = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  sym_hex_value = 25,
  anon_sym_bool = 26,
  anon_sym_void = 27,
  aux_sym__type_token1 = 28,
  anon_sym_LBRACK_RBRACK = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  sym_identifier = 32,
  sym_number = 33,
  anon_sym_SourceFile_COLON_DQUOTE = 34,
  aux_sym_source_file_def_token1 = 35,
  anon_sym_DQUOTE = 36,
  sym_comment = 37,
  anon_sym_Constantpool_COLON = 38,
  sym_hash_with_number = 39,
  anon_sym_EQ = 40,
  sym_constantPoolItemValue = 41,
  sym_class_keyword = 42,
  aux_sym_class_info_item_simple_token1 = 43,
  sym_file_path = 44,
  anon_sym_Lastmodified = 45,
  aux_sym_general_info_last_mod_token1 = 46,
  sym_md5 = 47,
  anon_sym_MD5checksum = 48,
  anon_sym_Compiledfrom = 49,
  aux_sym_general_info_compile_token1 = 50,
  anon_sym_Classfile = 51,
  sym_source_file = 52,
  sym_method_def = 53,
  sym_mod_access = 54,
  sym_class_definition = 55,
  sym_code_def = 56,
  sym_code_info = 57,
  sym_line_number_table_def = 58,
  sym_numered_line = 59,
  sym_numered_instruction = 60,
  sym_instruction = 61,
  sym_code_info_stack = 62,
  sym_descriptor_def = 63,
  sym_flag_def = 64,
  sym_flag_value = 65,
  sym_wrapped_hex_val = 66,
  sym_method_args = 67,
  sym_simpleType = 68,
  sym__type = 69,
  sym_arrayType = 70,
  sym_block = 71,
  sym_source_file_def = 72,
  sym_constantPoolDef = 73,
  sym__constantPoolItem = 74,
  sym_constantPoolItemType = 75,
  sym_class_info_def = 76,
  sym_class_info_item = 77,
  sym_class_info_item_simple = 78,
  sym_general_info_last_mod = 79,
  sym_general_info_md5 = 80,
  sym_general_info_compile = 81,
  sym_general_info = 82,
  sym_header = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_class_definition_repeat1 = 85,
  aux_sym_code_info_repeat1 = 86,
  aux_sym_code_info_repeat2 = 87,
  aux_sym_line_number_table_def_repeat1 = 88,
  aux_sym_flag_def_repeat1 = 89,
  aux_sym_constantPoolDef_repeat1 = 90,
  aux_sym_class_info_def_repeat1 = 91,
  aux_sym_class_info_item_simple_repeat1 = 92,
  aux_sym_general_info_last_mod_repeat1 = 93,
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
  [aux_sym_code_info_stack_token1] = "code_info_stack_token1",
  [anon_sym_locals_EQ] = "locals=",
  [anon_sym_args_size_EQ] = "args_size=",
  [anon_sym_descriptor_COLON] = "descriptor:",
  [sym_descriptor_value] = "descriptor_value",
  [anon_sym_flags_COLON] = "flags:",
  [aux_sym_flag_value_token1] = "flag_value_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_hex_value] = "hex_value",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [aux_sym__type_token1] = "_type_token1",
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
  [sym_hash_with_number] = "hash_with_number",
  [anon_sym_EQ] = "=",
  [sym_constantPoolItemValue] = "constantPoolItemValue",
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
  [sym_code_info_stack] = "code_info_stack",
  [sym_descriptor_def] = "descriptor_def",
  [sym_flag_def] = "flag_def",
  [sym_flag_value] = "flag_value",
  [sym_wrapped_hex_val] = "wrapped_hex_val",
  [sym_method_args] = "method_args",
  [sym_simpleType] = "simpleType",
  [sym__type] = "_type",
  [sym_arrayType] = "arrayType",
  [sym_block] = "block",
  [sym_source_file_def] = "source_file_def",
  [sym_constantPoolDef] = "constantPoolDef",
  [sym__constantPoolItem] = "_constantPoolItem",
  [sym_constantPoolItemType] = "constantPoolItemType",
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
  [aux_sym_code_info_stack_token1] = aux_sym_code_info_stack_token1,
  [anon_sym_locals_EQ] = anon_sym_locals_EQ,
  [anon_sym_args_size_EQ] = anon_sym_args_size_EQ,
  [anon_sym_descriptor_COLON] = anon_sym_descriptor_COLON,
  [sym_descriptor_value] = sym_descriptor_value,
  [anon_sym_flags_COLON] = anon_sym_flags_COLON,
  [aux_sym_flag_value_token1] = aux_sym_flag_value_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_hex_value] = sym_hex_value,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [aux_sym__type_token1] = aux_sym__type_token1,
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
  [sym_hash_with_number] = sym_hash_with_number,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_constantPoolItemValue] = sym_constantPoolItemValue,
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
  [sym_code_info_stack] = sym_code_info_stack,
  [sym_descriptor_def] = sym_descriptor_def,
  [sym_flag_def] = sym_flag_def,
  [sym_flag_value] = sym_flag_value,
  [sym_wrapped_hex_val] = sym_wrapped_hex_val,
  [sym_method_args] = sym_method_args,
  [sym_simpleType] = sym_simpleType,
  [sym__type] = sym__type,
  [sym_arrayType] = sym_arrayType,
  [sym_block] = sym_block,
  [sym_source_file_def] = sym_source_file_def,
  [sym_constantPoolDef] = sym_constantPoolDef,
  [sym__constantPoolItem] = sym__constantPoolItem,
  [sym_constantPoolItemType] = sym_constantPoolItemType,
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
  [aux_sym_code_info_stack_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_locals_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args_size_EQ] = {
    .visible = true,
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
  [aux_sym_flag_value_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym__type_token1] = {
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
  [sym_hash_with_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_constantPoolItemValue] = {
    .visible = true,
    .named = true,
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
  [sym_code_info_stack] = {
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
  [sym_flag_value] = {
    .visible = true,
    .named = true,
  },
  [sym_wrapped_hex_val] = {
    .visible = true,
    .named = true,
  },
  [sym_method_args] = {
    .visible = true,
    .named = true,
  },
  [sym_simpleType] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_arrayType] = {
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
  [sym__constantPoolItem] = {
    .visible = false,
    .named = true,
  },
  [sym_constantPoolItemType] = {
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
  [39] = 24,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 13,
  [50] = 50,
  [51] = 51,
  [52] = 16,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 30,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 31,
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
  [95] = 89,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 93,
  [101] = 101,
  [102] = 102,
  [103] = 98,
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
  [132] = 65,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(260);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '(') ADVANCE(286);
      if (lookahead == ')') ADVANCE(287);
      if (lookahead == ',') ADVANCE(269);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == 'C') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(160);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '}') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(310);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == 'b') ADVANCE(301);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(269);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == ')') ADVANCE(287);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'M') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(163);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(315);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(273);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(268);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(283);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(280);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(316);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(270);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 45:
      if (lookahead == ';') ADVANCE(267);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(278);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 53:
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 54:
      if (lookahead == 'F') ADVANCE(134);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(210);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(305);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(193);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(301);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(197);
      END_STATE();
    case 136:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 213:
      if (lookahead == 'v') ADVANCE(162);
      END_STATE();
    case 214:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 215:
      if (lookahead == 'x') ADVANCE(254);
      END_STATE();
    case 216:
      if (lookahead == 'z') ADVANCE(104);
      END_STATE();
    case 217:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(217)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 218:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(218)
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 219:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(219)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(220)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 221:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 258:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 259:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_mod_static);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_mod_static);
      if (lookahead == '.') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_Code_COLON);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LineNumberTable_COLON);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_aload_0);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_invokespecial);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_code_info_stack_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_locals_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_args_size_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_descriptor_COLON);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_flags_COLON);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_flag_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(45);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_hex_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'c') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'd') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__type_token1);
      if (lookahead == '.') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_Constantpool_COLON);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_hash_with_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_constantPoolItemValue);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_class_keyword);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_class_info_item_simple_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '/') ADVANCE(258);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_Lastmodified);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'c') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'h') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'k') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'm') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 's') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (lookahead == 'u') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_general_info_last_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_md5);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_MD5checksum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_Compiledfrom);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_general_info_compile_token1);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Classfile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 72},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 72},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 217},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 217},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 217},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 217},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 217},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 218},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 219},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 217},
  [136] = {.lex_state = 220},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 218},
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
    [anon_sym_locals_EQ] = ACTIONS(1),
    [anon_sym_args_size_EQ] = ACTIONS(1),
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
    [sym_class_keyword] = ACTIONS(1),
    [anon_sym_Lastmodified] = ACTIONS(1),
    [anon_sym_MD5checksum] = ACTIONS(1),
    [anon_sym_Compiledfrom] = ACTIONS(1),
    [aux_sym_general_info_compile_token1] = ACTIONS(1),
    [anon_sym_Classfile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(140),
    [sym_general_info] = STATE(102),
    [sym_header] = STATE(46),
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
    STATE(3), 1,
      sym_descriptor_def,
    STATE(6), 1,
      sym_flag_def,
    STATE(12), 1,
      sym_mod_access,
    STATE(14), 1,
      sym_code_def,
    STATE(11), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [34] = 8,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_flag_def,
    STATE(12), 1,
      sym_mod_access,
    STATE(21), 1,
      sym_code_def,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [62] = 7,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(9), 1,
      sym_descriptor_def,
    STATE(28), 1,
      sym_flag_def,
    STATE(63), 1,
      sym_code_def,
    ACTIONS(17), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [87] = 7,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(9), 1,
      anon_sym_descriptor_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(8), 1,
      sym_descriptor_def,
    STATE(34), 1,
      sym_flag_def,
    STATE(68), 1,
      sym_code_def,
    ACTIONS(19), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [112] = 6,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_mod_access,
    STATE(21), 1,
      sym_code_def,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [134] = 6,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_mod_access,
    STATE(25), 1,
      sym_code_def,
    STATE(10), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [156] = 5,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(33), 1,
      sym_flag_def,
    STATE(66), 1,
      sym_code_def,
    ACTIONS(23), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [175] = 5,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    ACTIONS(11), 1,
      anon_sym_flags_COLON,
    STATE(34), 1,
      sym_flag_def,
    STATE(68), 1,
      sym_code_def,
    ACTIONS(19), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [194] = 4,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_mod_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [210] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_mod_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [226] = 4,
    ACTIONS(27), 1,
      sym_mod_static,
    STATE(85), 1,
      sym_simpleType,
    STATE(70), 2,
      sym__type,
      sym_arrayType,
    ACTIONS(29), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym__type_token1,
  [242] = 3,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(31), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [256] = 4,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_mod_access,
    STATE(17), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [272] = 5,
    ACTIONS(35), 1,
      anon_sym_flags_COLON,
    ACTIONS(38), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(40), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(15), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(84), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [290] = 3,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(43), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [304] = 4,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_mod_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [320] = 5,
    ACTIONS(45), 1,
      anon_sym_flags_COLON,
    ACTIONS(47), 1,
      anon_sym_Constantpool_COLON,
    ACTIONS(49), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(15), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(84), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [338] = 3,
    ACTIONS(53), 1,
      anon_sym_line,
    STATE(19), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(51), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [352] = 4,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_mod_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [368] = 4,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_mod_access,
    STATE(10), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [384] = 5,
    ACTIONS(45), 1,
      anon_sym_flags_COLON,
    ACTIONS(49), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(58), 1,
      anon_sym_Constantpool_COLON,
    STATE(18), 2,
      sym_class_info_item,
      aux_sym_class_info_def_repeat1,
    STATE(84), 2,
      sym_flag_def,
      sym_class_info_item_simple,
  [402] = 3,
    ACTIONS(62), 1,
      anon_sym_line,
    STATE(19), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(60), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [416] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_RBRACE,
  [430] = 4,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_mod_access,
    STATE(20), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(5), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [446] = 4,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_mod_access,
    STATE(26), 2,
      sym_method_def,
      aux_sym_class_definition_repeat1,
    ACTIONS(69), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [462] = 3,
    ACTIONS(62), 1,
      anon_sym_line,
    STATE(23), 2,
      sym_numered_line,
      aux_sym_line_number_table_def_repeat1,
    ACTIONS(74), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [476] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(68), 1,
      sym_code_def,
    ACTIONS(19), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [489] = 5,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(80), 1,
      sym_number,
    STATE(57), 1,
      aux_sym_code_info_repeat1,
    STATE(56), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [506] = 1,
    ACTIONS(82), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [515] = 1,
    ACTIONS(64), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [524] = 3,
    STATE(97), 1,
      sym_simpleType,
    STATE(70), 2,
      sym__type,
      sym_arrayType,
    ACTIONS(29), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym__type_token1,
  [537] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(55), 1,
      sym_code_def,
    ACTIONS(84), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [550] = 3,
    ACTIONS(7), 1,
      anon_sym_Code_COLON,
    STATE(66), 1,
      sym_code_def,
    ACTIONS(23), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [563] = 5,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(42), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(88), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [580] = 3,
    STATE(94), 1,
      sym_simpleType,
    STATE(70), 2,
      sym__type,
      sym_arrayType,
    ACTIONS(29), 3,
      anon_sym_bool,
      anon_sym_void,
      aux_sym__type_token1,
  [593] = 1,
    ACTIONS(94), 6,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_Code_COLON,
      anon_sym_flags_COLON,
      anon_sym_RBRACE,
  [602] = 5,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(96), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(29), 1,
      aux_sym_code_info_repeat1,
    STATE(59), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [619] = 4,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(39), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(64), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [633] = 4,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(128), 1,
      sym_source_file_def,
    STATE(69), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [647] = 4,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(51), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(107), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [661] = 4,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(53), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(107), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [675] = 3,
    ACTIONS(113), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(111), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [687] = 1,
    ACTIONS(117), 5,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_line,
      anon_sym_RBRACE,
  [695] = 3,
    ACTIONS(121), 1,
      sym_hash_with_number,
    ACTIONS(119), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(45), 2,
      sym__constantPoolItem,
      aux_sym_constantPoolDef_repeat1,
  [707] = 3,
    STATE(107), 1,
      sym_class_info_def,
    STATE(130), 1,
      sym_mod_access,
    ACTIONS(124), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [719] = 3,
    ACTIONS(128), 1,
      sym_hash_with_number,
    ACTIONS(126), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(50), 2,
      sym__constantPoolItem,
      aux_sym_constantPoolDef_repeat1,
  [731] = 4,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(120), 1,
      sym_source_file_def,
    STATE(40), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [745] = 4,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(39), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(31), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [759] = 3,
    ACTIONS(128), 1,
      sym_hash_with_number,
    ACTIONS(134), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(45), 2,
      sym__constantPoolItem,
      aux_sym_constantPoolDef_repeat1,
  [771] = 4,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(53), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(136), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [785] = 4,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(49), 1,
      aux_sym_flag_def_repeat1,
    ACTIONS(43), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [799] = 4,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      aux_sym_class_info_item_simple_token1,
    STATE(53), 1,
      aux_sym_class_info_item_simple_repeat1,
    ACTIONS(145), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [813] = 3,
    ACTIONS(149), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(151), 1,
      sym_number,
    STATE(54), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [824] = 1,
    ACTIONS(154), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [831] = 3,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(156), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(54), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [842] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_code_info_repeat1,
    ACTIONS(161), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [853] = 3,
    ACTIONS(165), 1,
      anon_sym_invokespecial,
    STATE(72), 1,
      sym_instruction,
    ACTIONS(163), 2,
      anon_sym_aload_0,
      anon_sym_return,
  [864] = 3,
    ACTIONS(78), 1,
      anon_sym_LineNumberTable_COLON,
    ACTIONS(80), 1,
      sym_number,
    STATE(54), 2,
      sym_numered_instruction,
      aux_sym_code_info_repeat2,
  [875] = 1,
    ACTIONS(167), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [882] = 2,
    ACTIONS(171), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(169), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [891] = 2,
    ACTIONS(173), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(82), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [900] = 1,
    ACTIONS(19), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [907] = 2,
    ACTIONS(177), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_hash_with_number,
  [916] = 1,
    ACTIONS(179), 4,
      sym_mod_static,
      anon_sym_bool,
      anon_sym_void,
      aux_sym__type_token1,
  [923] = 1,
    ACTIONS(84), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [930] = 2,
    ACTIONS(101), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(64), 3,
      anon_sym_COMMA,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [939] = 1,
    ACTIONS(23), 4,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_RBRACE,
  [946] = 3,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(69), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [957] = 1,
    ACTIONS(186), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [963] = 1,
    ACTIONS(188), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [969] = 2,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [977] = 1,
    ACTIONS(194), 3,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
      sym_hash_with_number,
  [983] = 3,
    ACTIONS(196), 1,
      aux_sym_code_info_stack_token1,
    STATE(38), 1,
      sym_code_info_stack,
    STATE(106), 1,
      sym_code_info,
  [993] = 1,
    ACTIONS(198), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [999] = 1,
    ACTIONS(200), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1005] = 1,
    ACTIONS(202), 3,
      anon_sym_LineNumberTable_COLON,
      sym_number,
      sym_comment,
  [1011] = 3,
    ACTIONS(204), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(206), 1,
      anon_sym_MD5checksum,
    STATE(80), 1,
      aux_sym_general_info_last_mod_repeat1,
  [1021] = 1,
    ACTIONS(161), 3,
      anon_sym_COMMA,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1027] = 3,
    ACTIONS(208), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(211), 1,
      anon_sym_MD5checksum,
    STATE(80), 1,
      aux_sym_general_info_last_mod_repeat1,
  [1037] = 1,
    ACTIONS(213), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1043] = 1,
    ACTIONS(215), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1049] = 3,
    ACTIONS(217), 1,
      aux_sym_general_info_last_mod_token1,
    ACTIONS(219), 1,
      anon_sym_MD5checksum,
    STATE(78), 1,
      aux_sym_general_info_last_mod_repeat1,
  [1059] = 2,
    ACTIONS(223), 1,
      aux_sym_class_info_item_simple_token1,
    ACTIONS(221), 2,
      anon_sym_flags_COLON,
      anon_sym_Constantpool_COLON,
  [1067] = 2,
    ACTIONS(225), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(227), 1,
      sym_identifier,
  [1074] = 2,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_method_args,
  [1081] = 1,
    ACTIONS(231), 2,
      sym_number,
      sym_hash_with_number,
  [1086] = 2,
    ACTIONS(233), 1,
      anon_sym_MD5checksum,
    STATE(105), 1,
      sym_general_info_md5,
  [1093] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_wrapped_hex_val,
  [1100] = 2,
    ACTIONS(196), 1,
      aux_sym_code_info_stack_token1,
    STATE(79), 1,
      sym_code_info_stack,
  [1107] = 1,
    ACTIONS(237), 2,
      anon_sym_LineNumberTable_COLON,
      sym_number,
  [1112] = 1,
    ACTIONS(239), 2,
      sym_number,
      sym_hash_with_number,
  [1117] = 2,
    ACTIONS(241), 1,
      aux_sym_flag_value_token1,
    STATE(31), 1,
      sym_flag_value,
  [1124] = 2,
    ACTIONS(225), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(243), 1,
      sym_identifier,
  [1131] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_wrapped_hex_val,
  [1138] = 2,
    ACTIONS(245), 1,
      aux_sym_flag_value_token1,
    STATE(142), 1,
      sym_constantPoolItemType,
  [1145] = 2,
    ACTIONS(225), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
  [1152] = 2,
    ACTIONS(249), 1,
      aux_sym_flag_value_token1,
    STATE(52), 1,
      sym_flag_value,
  [1159] = 2,
    ACTIONS(251), 1,
      anon_sym_public,
    STATE(126), 1,
      sym_class_definition,
  [1166] = 2,
    ACTIONS(249), 1,
      aux_sym_flag_value_token1,
    STATE(67), 1,
      sym_flag_value,
  [1173] = 1,
    ACTIONS(253), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [1178] = 2,
    ACTIONS(255), 1,
      anon_sym_Lastmodified,
    STATE(88), 1,
      sym_general_info_last_mod,
  [1185] = 2,
    ACTIONS(241), 1,
      aux_sym_flag_value_token1,
    STATE(16), 1,
      sym_flag_value,
  [1192] = 2,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_method_args,
  [1199] = 2,
    ACTIONS(257), 1,
      anon_sym_Compiledfrom,
    STATE(76), 1,
      sym_general_info_compile,
  [1206] = 2,
    ACTIONS(259), 1,
      anon_sym_LineNumberTable_COLON,
    STATE(60), 1,
      sym_line_number_table_def,
  [1213] = 2,
    ACTIONS(261), 1,
      anon_sym_Constantpool_COLON,
    STATE(48), 1,
      sym_constantPoolDef,
  [1220] = 1,
    ACTIONS(263), 1,
      aux_sym_source_file_def_token1,
  [1224] = 1,
    ACTIONS(265), 1,
      aux_sym_general_info_compile_token1,
  [1228] = 1,
    ACTIONS(267), 1,
      anon_sym_COLON,
  [1232] = 1,
    ACTIONS(269), 1,
      anon_sym_Compiledfrom,
  [1236] = 1,
    ACTIONS(271), 1,
      sym_number,
  [1240] = 1,
    ACTIONS(273), 1,
      anon_sym_POUND,
  [1244] = 1,
    ACTIONS(275), 1,
      anon_sym_EQ,
  [1248] = 1,
    ACTIONS(277), 1,
      anon_sym_SEMI,
  [1252] = 1,
    ACTIONS(279), 1,
      anon_sym_SEMI,
  [1256] = 1,
    ACTIONS(281), 1,
      sym_constantPoolItemValue,
  [1260] = 1,
    ACTIONS(283), 1,
      sym_number,
  [1264] = 1,
    ACTIONS(285), 1,
      sym_number,
  [1268] = 1,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [1272] = 1,
    ACTIONS(289), 1,
      sym_identifier,
  [1276] = 1,
    ACTIONS(291), 1,
      anon_sym_SEMI,
  [1280] = 1,
    ACTIONS(293), 1,
      anon_sym_COLON,
  [1284] = 1,
    ACTIONS(295), 1,
      sym_identifier,
  [1288] = 1,
    ACTIONS(297), 1,
      sym_md5,
  [1292] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
  [1296] = 1,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
  [1300] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
  [1304] = 1,
    ACTIONS(305), 1,
      sym_number,
  [1308] = 1,
    ACTIONS(307), 1,
      sym_class_keyword,
  [1312] = 1,
    ACTIONS(309), 1,
      sym_hex_value,
  [1316] = 1,
    ACTIONS(311), 1,
      sym_class_keyword,
  [1320] = 1,
    ACTIONS(313), 1,
      sym_file_path,
  [1324] = 1,
    ACTIONS(315), 1,
      sym_descriptor_value,
  [1328] = 1,
    ACTIONS(317), 1,
      aux_sym_flag_value_token1,
  [1332] = 1,
    ACTIONS(319), 1,
      aux_sym_class_info_item_simple_token1,
  [1336] = 1,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [1340] = 1,
    ACTIONS(323), 1,
      anon_sym_Lastmodified,
  [1344] = 1,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
  [1348] = 1,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
  [1352] = 1,
    ACTIONS(329), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [1356] = 1,
    ACTIONS(331), 1,
      sym_constantPoolItemValue,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 226,
  [SMALL_STATE(13)] = 242,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 272,
  [SMALL_STATE(16)] = 290,
  [SMALL_STATE(17)] = 304,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 368,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 416,
  [SMALL_STATE(25)] = 430,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 462,
  [SMALL_STATE(28)] = 476,
  [SMALL_STATE(29)] = 489,
  [SMALL_STATE(30)] = 506,
  [SMALL_STATE(31)] = 515,
  [SMALL_STATE(32)] = 524,
  [SMALL_STATE(33)] = 537,
  [SMALL_STATE(34)] = 550,
  [SMALL_STATE(35)] = 563,
  [SMALL_STATE(36)] = 580,
  [SMALL_STATE(37)] = 593,
  [SMALL_STATE(38)] = 602,
  [SMALL_STATE(39)] = 619,
  [SMALL_STATE(40)] = 633,
  [SMALL_STATE(41)] = 647,
  [SMALL_STATE(42)] = 661,
  [SMALL_STATE(43)] = 675,
  [SMALL_STATE(44)] = 687,
  [SMALL_STATE(45)] = 695,
  [SMALL_STATE(46)] = 707,
  [SMALL_STATE(47)] = 719,
  [SMALL_STATE(48)] = 731,
  [SMALL_STATE(49)] = 745,
  [SMALL_STATE(50)] = 759,
  [SMALL_STATE(51)] = 771,
  [SMALL_STATE(52)] = 785,
  [SMALL_STATE(53)] = 799,
  [SMALL_STATE(54)] = 813,
  [SMALL_STATE(55)] = 824,
  [SMALL_STATE(56)] = 831,
  [SMALL_STATE(57)] = 842,
  [SMALL_STATE(58)] = 853,
  [SMALL_STATE(59)] = 864,
  [SMALL_STATE(60)] = 875,
  [SMALL_STATE(61)] = 882,
  [SMALL_STATE(62)] = 891,
  [SMALL_STATE(63)] = 900,
  [SMALL_STATE(64)] = 907,
  [SMALL_STATE(65)] = 916,
  [SMALL_STATE(66)] = 923,
  [SMALL_STATE(67)] = 930,
  [SMALL_STATE(68)] = 939,
  [SMALL_STATE(69)] = 946,
  [SMALL_STATE(70)] = 957,
  [SMALL_STATE(71)] = 963,
  [SMALL_STATE(72)] = 969,
  [SMALL_STATE(73)] = 977,
  [SMALL_STATE(74)] = 983,
  [SMALL_STATE(75)] = 993,
  [SMALL_STATE(76)] = 999,
  [SMALL_STATE(77)] = 1005,
  [SMALL_STATE(78)] = 1011,
  [SMALL_STATE(79)] = 1021,
  [SMALL_STATE(80)] = 1027,
  [SMALL_STATE(81)] = 1037,
  [SMALL_STATE(82)] = 1043,
  [SMALL_STATE(83)] = 1049,
  [SMALL_STATE(84)] = 1059,
  [SMALL_STATE(85)] = 1067,
  [SMALL_STATE(86)] = 1074,
  [SMALL_STATE(87)] = 1081,
  [SMALL_STATE(88)] = 1086,
  [SMALL_STATE(89)] = 1093,
  [SMALL_STATE(90)] = 1100,
  [SMALL_STATE(91)] = 1107,
  [SMALL_STATE(92)] = 1112,
  [SMALL_STATE(93)] = 1117,
  [SMALL_STATE(94)] = 1124,
  [SMALL_STATE(95)] = 1131,
  [SMALL_STATE(96)] = 1138,
  [SMALL_STATE(97)] = 1145,
  [SMALL_STATE(98)] = 1152,
  [SMALL_STATE(99)] = 1159,
  [SMALL_STATE(100)] = 1166,
  [SMALL_STATE(101)] = 1173,
  [SMALL_STATE(102)] = 1178,
  [SMALL_STATE(103)] = 1185,
  [SMALL_STATE(104)] = 1192,
  [SMALL_STATE(105)] = 1199,
  [SMALL_STATE(106)] = 1206,
  [SMALL_STATE(107)] = 1213,
  [SMALL_STATE(108)] = 1220,
  [SMALL_STATE(109)] = 1224,
  [SMALL_STATE(110)] = 1228,
  [SMALL_STATE(111)] = 1232,
  [SMALL_STATE(112)] = 1236,
  [SMALL_STATE(113)] = 1240,
  [SMALL_STATE(114)] = 1244,
  [SMALL_STATE(115)] = 1248,
  [SMALL_STATE(116)] = 1252,
  [SMALL_STATE(117)] = 1256,
  [SMALL_STATE(118)] = 1260,
  [SMALL_STATE(119)] = 1264,
  [SMALL_STATE(120)] = 1268,
  [SMALL_STATE(121)] = 1272,
  [SMALL_STATE(122)] = 1276,
  [SMALL_STATE(123)] = 1280,
  [SMALL_STATE(124)] = 1284,
  [SMALL_STATE(125)] = 1288,
  [SMALL_STATE(126)] = 1292,
  [SMALL_STATE(127)] = 1296,
  [SMALL_STATE(128)] = 1300,
  [SMALL_STATE(129)] = 1304,
  [SMALL_STATE(130)] = 1308,
  [SMALL_STATE(131)] = 1312,
  [SMALL_STATE(132)] = 1316,
  [SMALL_STATE(133)] = 1320,
  [SMALL_STATE(134)] = 1324,
  [SMALL_STATE(135)] = 1328,
  [SMALL_STATE(136)] = 1332,
  [SMALL_STATE(137)] = 1336,
  [SMALL_STATE(138)] = 1340,
  [SMALL_STATE(139)] = 1344,
  [SMALL_STATE(140)] = 1348,
  [SMALL_STATE(141)] = 1352,
  [SMALL_STATE(142)] = 1356,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(89),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_def_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_info_def_repeat1, 2), SHIFT_REPEAT(87),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_def, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_number_table_def_repeat1, 2), SHIFT_REPEAT(112),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_def, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(93),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(65),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number_table_def, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_value, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 8),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 1),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_def_repeat1, 2), SHIFT_REPEAT(100),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flag_def_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_line, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constantPoolDef_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constantPoolDef_repeat1, 2), SHIFT_REPEAT(114),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantPoolDef, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantPoolDef, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item_simple, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item_simple, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_def, 3),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2), SHIFT_REPEAT(136),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat2, 2), SHIFT_REPEAT(123),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_def, 9),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info, 3),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2), SHIFT_REPEAT(90),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_info_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_def, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_info_item_simple_repeat1, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_value, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItem, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_access, 1),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleType, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_info_stack, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constantPoolItem, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_general_info_last_mod, 2),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_general_info_last_mod_repeat1, 2), SHIFT_REPEAT(80),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_general_info_last_mod_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayType, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info_compile, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_general_info_last_mod, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_info_item, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_info_item, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numered_instruction, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info_md5, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantPoolItemType, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_args, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_access, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_hex_val, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_general_info, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [327] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
