const newline = '\n';


module.exports = grammar({
  name: 'javap',

  rules: {

    source_file: $ => seq(
	    $.header,
	    $.class_info_def,
	    $.constantPoolDef,
	    repeat($.block), 
	    $.source_file_def
    ),

    method_def: $ => seq(
      $.mod_access,
      optional($.mod_static),
      $._type,
      $.identifier,
      $.method_args,
      ';',
      optional($.descriptor_def),
      optional($.flag_def),
      optional($.code_def),
    ),
    mod_access: $ => choice('public', 'private', 'protected'), 
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
	    commaSep1($.code_info_stat), 
	    repeat($.numered_instruction)
    ),

    line_number_table_def: $ => seq('LineNumberTable:', repeat($.numered_line)),

    numered_line: $ => seq('line', $.number, ':', $.number),

    numered_instruction: $ => seq($.number, ':', $.instruction, optional($.comment)),

    instruction: $ => choice(
	    'aload_0', 
	    'return', 
	    seq('invokespecial', '#', $.number),
	    seq('getstatic', '#', $.number),
	    seq('ldc', '#', $.number),
	    seq('invokevirtual', '#', $.number)
    ),

    code_info_stat: $ => seq(/\w+=/, $.number), 

    descriptor_def: $ => seq(
      'descriptor:',
      $.descriptor_value
    ),

    descriptor_value: $ => /.+/,

    flag_def: $ =>  seq('flags:', $._wrapped_hex_val, commaSep1($.flag_value)),

    flag_value: $ => /\w+/,

    _wrapped_hex_val: $ => seq('(', $.hex_value, ')'),

    hex_value: $ => /0x[0-9A-Fa-f]+/,

    method_args: $ => seq(
      '(',
      $._type, //TODO comma sepa
      ')'
    ),

    _type: $ => choice($.array_type, $.simple_type),

    simple_type: $ => choice(
      'bool',
      'void',
      /(\w+\.)*\w+/
    ),

    array_type: $ => seq( $._type, '[]'),

    block: $ => seq(
      '{',
      $.class_definition,
      '}'
    ),

    identifier: $ => token(/[a-zA-Z0-9]+/), //TODO allow digits 

    number: $ => token(/\d+/),

    source_file_def: $ => seq('SourceFile: "', /([a-zA-Z]+\.?)+/, '"' ),

    comment: $ => token(seq('//', /[^\n\r]*/)),

    constantPoolDef: $=> seq('Constant pool:', repeat($.constantPoolItem)),

    _hash_number: $=> seq('#', $.number), 

    constantPoolItem: $=> seq($._hash_number, '=', $._constantPoolItemType),

   _constantPoolItemType : $=> choice(
     $._constantPoolItemTypeUtf8,
     $._constantPoolItemTypeClass,
     $._constantPoolItemTypeString,
     $._constantPoolItemTypeMethodref,
     $._constantPoolItemTypeFieldref,
     $._constantPoolItemTypeNameAndType
   ),

   _constantPoolItemTypeUtf8: $ => seq('Utf8', /[^\n\r]*/),
   _constantPoolItemTypeClass: $ => seq('Class', $._hash_number, optional($.comment)), 
   _constantPoolItemTypeString: $ => seq('String', $._hash_number, optional($.comment)),   
   _constantPoolItemTypeMethodref: $=> seq('Methodref', $._hash_number, '.', $._hash_number, optional($.comment)),
   _constantPoolItemTypeFieldref: $=> seq('Fieldref', $._hash_number, '.', $._hash_number, optional($.comment)),

   _constantPoolItemTypeNameAndType: $=> seq('NameAndType',$._hash_number, ':', $._hash_number, optional($.comment)),

   class_keyword: $ => 'class',

   class_info_def: $=> seq(
	   $.mod_access, 
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
		   choice($.number, $._hash_number),
	           optional($.comment)
	   ), 
	   
   ),

   file_path: $=> /\/?([\w\d\.-]+\/)*([\w\d\.-]+)/,

   general_info_last_mod: $=> seq('Last modified', repeat(/([\w\d;,]+\s)(\w+)/)), //TODO use wildcard character

   md5: $ => /[0-9a-f]{32}/,

   general_info_md5: $=> seq('MD5 checksum' , $.md5),

   general_info_compile: $=> seq('Compiled from' , /"([^\/]+)"/), //TODO extract filename

   general_info: $=> seq('Classfile', $.file_path),

   header: $=> seq(
	   $.general_info,
	   $.general_info_last_mod,
	   $.general_info_md5,
	   $.general_info_compile,
   )

  } 
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
