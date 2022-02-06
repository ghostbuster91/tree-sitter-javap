const newline = '\n';


module.exports = grammar({
  name: 'javap',

  rules: {

    source_file: $ => seq(repeat($.block), $.source_file_def),  //repeat($._definition),

    _definition: $ => choice(
      $.method_def
      // TODO: other kinds of definitions
    ),

    method_def: $ => seq(
      $.method_access,
      optional($.mod_static),
      $.type,
      $.identifier,
      $.method_args,
       ';',
      repeat($.descriptor_def)
    ),
    method_access: $ => choice('public', 'private', 'protected'),
    mod_static: $ => 'static',

    class_definition: $ => seq(
      'public',
      $.identifier,
      '();',
      optional($.descriptor_def),
      optional($.flag_def),
      repeat($.method_def)
    ),

    descriptor_def: $ => seq(
      'descriptor:',
      $.descriptor_value
    ),

    descriptor_value: $ => /.+/,

    flag_def: $ =>  seq('flags:', $.wrapped_hex_val, repeat($.flag_value)),

    flag_value: $ => choice('ACC_PUBLIC', 'ACC_STATIC'),

    wrapped_hex_val: $=> seq('(', $.hex_value, ')'),

    hex_value: $ => /0x[0-9A-Fa-f]+/,

    method_args: $ => seq(
      '(',
       repeat($.type),
      ')'
    ),

    type: $ => choice(
      'bool',
	'void',
	/([a-zA-Z]+\.)*([a-zA-Z]+(\[])?)/
    ),

    block: $ => seq(
      '{',
      $.class_definition,
      '}'
    ),

    _statement: $ => choice(
      $.return_statement
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-zA-Z]+/,

    number: $ => /\d+/,

    source_file_def: $ => seq('SourceFile: "', /([a-zA-Z]+\.?)+/, '"' )
  } 
});
