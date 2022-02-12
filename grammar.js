const newline = '\n';


module.exports = grammar({
  name: 'javap',

  rules: {

    source_file: $ => seq(
	    $.general_info,
	    $.class_info_def,
	    //$.constantPoolDef,
	    repeat($.block), 
	    $.source_file_def
    ),

    method_def: $ => seq(
      $.method_access,
      optional($.mod_static),
      $.simpleType,
      $.identifier,
      $.method_args,
       ';',
      repeat($.descriptor_def)
    ),
    method_access: $ => choice('public', 'private', 'protected'), //TODO change name
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

    numered_instruction: $ => seq($.number, ':', $.instruction, optional($.comment)),

    instruction: $ => choice(
	    'aload_0', 
	    'return', 
	    seq('invokespecial', '#', $.number ) 
    ),

    code_info_stack: $ => seq('stack=', $.number), //TODO rewrite
    code_info_locals: $ => seq('locals=', $.number),
    code_info_args_size: $ => seq('args_size=', $.number),

    descriptor_def: $ => seq(
      'descriptor:',
      $.descriptor_value
    ),

    descriptor_value: $ => /.+/,

    flag_def: $ =>  seq('flags:', $.wrapped_hex_val, commaSep1($.flag_value)),

    flag_value: $ => /\w+/,

    wrapped_hex_val: $ => seq('(', $.hex_value, ')'),

    hex_value: $ => /0x[0-9A-Fa-f]+/,

    method_args: $ => seq(
      '(',
       repeat($.simpleType),
      ')'
    ),

    simpleType: $ => choice($._type, $.arrayType),

    _type: $ => choice(
      'bool',
      'void',
      /(\w\.)*(\w)/
    ),

    arrayType: $ => seq( $.simpleType, '[]'),

    block: $ => seq(
      '{',
      $.class_definition,
      '}'
    ),

    identifier: $ => /[a-zA-Z]+/, //TODO allow digits 

    number: $ => /\d+/,

    source_file_def: $ => seq('SourceFile: "', /([a-zA-Z]+\.?)+/, '"' ),

    comment: $ => token(seq('//', /.*/)),

    constantPoolDef: $=> seq('Constant pool:', repeat($._constantPoolItem)),

    hash_with_number: $=> /#\d+/,

   _constantPoolItem: $=> seq($.hash_with_number, '=', $.constantPoolItemType, $.constantPoolItemValue, optional($.comment)),

   constantPoolItemType: $=> /\w+/,

   constantPoolItemValue: $=> /\S+/,

   class_keyword: $ => 'class',

   class_info_def: $=> seq(
	   $.method_access, 
	   $.class_keyword, 
	   $.identifier, 
	   repeat($.class_info_item)),

   class_info_item : $=> choice(
	   $.class_info_item_simple,
	   $.flag_def
   ),

   class_info_item_simple: $=> commaSep1(
	   seq(
		   /(\w+[\s_]?)+(\w+):/, 
		   choice($.number, $.hash_with_number),
	           optional($.comment)
	   ), 
	   
   ),

   file_path: $=> /[\w\.\/]+/,

   general_info_last_mod: $=> seq('Last modified', repeat(/([\w\d;,]+\s)(\w+)/)), //TODO use wildcard character

   md5: $ => /(\w\d)+/,

   general_info_md5: $=> seq('MD5 checksum' , $.md5),

   general_info_compile: $=> seq('Compiled from' , /"([^\/]+)"/),

   general_info: $=> seq('Classfile', $.file_path)

  } 
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
