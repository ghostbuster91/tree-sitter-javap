#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_func = 1,
  anon_sym_public = 2,
  anon_sym_LPAREN_RPAREN_SEMI = 3,
  anon_sym_COLON = 4,
  sym_descriptor_value = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_bool = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_return = 11,
  anon_sym_SEMI = 12,
  sym_identifier = 13,
  sym_number = 14,
  anon_sym_SourceFile_COLON_DQUOTE = 15,
  aux_sym_source_file_def_token1 = 16,
  anon_sym_DQUOTE = 17,
  sym_source_file = 18,
  sym_class_definition = 19,
  sym_descriptor_def = 20,
  sym_block = 21,
  sym_source_file_def = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_class_definition_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_func] = "func",
  [anon_sym_public] = "public",
  [anon_sym_LPAREN_RPAREN_SEMI] = "();",
  [anon_sym_COLON] = ":",
  [sym_descriptor_value] = "descriptor_value",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_SourceFile_COLON_DQUOTE] = "SourceFile: \"",
  [aux_sym_source_file_def_token1] = "source_file_def_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_source_file] = "source_file",
  [sym_class_definition] = "class_definition",
  [sym_descriptor_def] = "descriptor_def",
  [sym_block] = "block",
  [sym_source_file_def] = "source_file_def",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_LPAREN_RPAREN_SEMI] = anon_sym_LPAREN_RPAREN_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_descriptor_value] = sym_descriptor_value,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_SourceFile_COLON_DQUOTE] = anon_sym_SourceFile_COLON_DQUOTE,
  [aux_sym_source_file_def_token1] = aux_sym_source_file_def_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym_class_definition] = sym_class_definition,
  [sym_descriptor_def] = sym_descriptor_def,
  [sym_block] = sym_block,
  [sym_source_file_def] = sym_source_file_def,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_descriptor_value] = {
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
  [anon_sym_bool] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_descriptor_def] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'F') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_descriptor_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SourceFile_COLON_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (lookahead == '.') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_source_file_def_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
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
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_block] = STATE(2),
    [sym_source_file_def] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_SourceFile_COLON_DQUOTE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(11), 1,
      sym_source_file_def,
    STATE(3), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [14] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(10), 1,
      anon_sym_SourceFile_COLON_DQUOTE,
    STATE(3), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [25] = 3,
    ACTIONS(12), 1,
      anon_sym_RBRACE,
    ACTIONS(14), 1,
      sym_identifier,
    STATE(4), 2,
      sym_descriptor_def,
      aux_sym_class_definition_repeat1,
  [36] = 3,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(4), 2,
      sym_descriptor_def,
      aux_sym_class_definition_repeat1,
  [47] = 3,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(5), 2,
      sym_descriptor_def,
      aux_sym_class_definition_repeat1,
  [58] = 2,
    ACTIONS(23), 1,
      anon_sym_public,
    STATE(17), 1,
      sym_class_definition,
  [65] = 1,
    ACTIONS(25), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [70] = 1,
    ACTIONS(27), 2,
      anon_sym_LBRACE,
      anon_sym_SourceFile_COLON_DQUOTE,
  [75] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [79] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [83] = 1,
    ACTIONS(33), 1,
      anon_sym_LPAREN_RPAREN_SEMI,
  [87] = 1,
    ACTIONS(35), 1,
      aux_sym_source_file_def_token1,
  [91] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [95] = 1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
  [99] = 1,
    ACTIONS(41), 1,
      anon_sym_COLON,
  [103] = 1,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
  [107] = 1,
    ACTIONS(45), 1,
      sym_descriptor_value,
  [111] = 1,
    ACTIONS(47), 1,
      sym_identifier,
  [115] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 25,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 47,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 75,
  [SMALL_STATE(11)] = 79,
  [SMALL_STATE(12)] = 83,
  [SMALL_STATE(13)] = 87,
  [SMALL_STATE(14)] = 91,
  [SMALL_STATE(15)] = 95,
  [SMALL_STATE(16)] = 99,
  [SMALL_STATE(17)] = 103,
  [SMALL_STATE(18)] = 107,
  [SMALL_STATE(19)] = 111,
  [SMALL_STATE(20)] = 115,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [10] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor_def, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file_def, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
