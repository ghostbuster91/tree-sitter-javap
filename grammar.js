const newline = '\n';


module.exports = grammar({
  name: 'javap',

  rules: {

    source_file: $ => seq(repeat($.block), $.source_file_def),  //repeat($._definition),

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
      optional($.code_def),
      repeat($.method_def)
    ),

    code_def: $ => seq('Code:', $.code_info, $.line_number_table_def),

    code_info: $ => seq(
	    $.code_info_stack, 
	    ',',
	    $.code_info_locals,
	    ',',
	    $.code_info_args_size,
	    repeat($.numered_instruction)
    ),

    line_number_table_def: $ => seq('LineNumberTable:', repeat($.numered_line)),

    numered_line: $ => seq('line', $.number, ':', $.number),

    numered_instruction: $ => seq($.number, ':', $.instruction),

    instruction: $ => choice(
	    'aload_0', 
	    'return', 
	    seq('invokespecial', '#', $.number ) 
    ),

    code_info_stack: $ => seq('stack=', $.number),
    code_info_locals: $ => seq('locals=', $.number),
    code_info_args_size: $ => seq('args_size=', $.number),

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

    identifier: $ => /[a-zA-Z]+/,

    number: $ => /\d+/,

    source_file_def: $ => seq('SourceFile: "', /([a-zA-Z]+\.?)+/, '"' )
  } 
});
