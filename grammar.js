module.exports = grammar({
  name: 'javap',

  rules: {
    source_file: $ => seq(repeat($.block), $.source_file_def),  //repeat($._definition),

    _definition: $ => choice(
      $.function_definition
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      'func',
      $.identifier,
      $.parameter_list,
      $._type,
      $.block
    ),

    class_definition: $ => seq(
      'public',
      $.identifier,
      '();',
      repeat($.descriptor_def)
    ),

    descriptor_def: $ => seq(
      $.identifier,
      ':',
      $.descriptor_value
    ),

    descriptor_value: $ => /.+/,

    parameter_list: $ => seq(
      '(',
       // TODO: parameters
      ')'
    ),

    _type: $ => choice(
      'bool'
      // TODO: other kinds of types
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
