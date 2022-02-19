const newline = '\n';


module.exports = grammar({
  name: 'javap',

  rules: {

    source_file: $ => seq(
	    $.header,
	    optional($.class_info_def),
	    optional($.constant_pool_def),
	    repeat($.block),  //TODO maybe not repeat?
	    optional($.source_file_def)
    ),

    method_def: $ => seq(
      $._mods,
      $._type,
      $.identifier,
      $.method_args,
      ';',
      optional($.descriptor_def),
      optional($.flag_def),
      optional($.code_def),
    ),
    _mods: $=> seq(
	    $.mod_access,
	    optional($.mod_static),
	    optional($.mod_abstract)
    ),
    mod_static: $ => 'static',
    mod_abstract: $ => 'abstract',
    mod_access: $ => choice('public', 'private', 'protected'), 

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

    instruction: $=> seq(/\S+/, optional(seq('#', $.number))),

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
      commaSep1($._type), //TODO comma sepa
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

    constant_pool_def: $=> seq('Constant pool:', repeat($.constant_pool_item)),

    _hash_number: $=> seq('#', $.number), 

    constant_pool_item: $=> seq($._hash_number, '=', $._constant_pool_item_type),

    _constant_pool_item_type : $=> choice(
     $._constant_pool_item_type_utf8,
     $._constant_pool_item_type_class,
     $._constant_pool_item_type_string,
     $._constant_pool_item_type_method_ref,
     $._constant_pool_item_type_field_ref,
     $._constant_pool_item_type_name_and_type
   ),

   _constant_pool_item_type_utf8: $ => seq('Utf8', /[^\n\r]*/),
   _constant_pool_item_type_class: $ => seq('Class', $._hash_number, optional($.comment)), 
   _constant_pool_item_type_string: $ => seq('String', $._hash_number, optional($.comment)),   
   _constant_pool_item_type_method_ref: $=> seq('Methodref', $._hash_number, '.', $._hash_number, optional($.comment)),
   _constant_pool_item_type_field_ref: $=> seq('Fieldref', $._hash_number, '.', $._hash_number, optional($.comment)),

   _constant_pool_item_type_name_and_type: $=> seq('NameAndType',$._hash_number, ':', $._hash_number, optional($.comment)),

   class_keyword: $ => 'class',

   class_info_def: $=> seq(
	   $._mods, 
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

   header_info_last_mod: $=> seq('Last modified', repeat(/([\w\d;,]+\s)(\w+)/)), //TODO use wildcard character

   md5: $ => /[0-9a-f]{32}/,

   header_info_md5: $=> seq('MD5 checksum' , $.md5),

   header_info_compile: $=> seq('Compiled from' , /"([^\/]+)"/), //TODO extract filename

   _path_segment: $=> /[\d\w\s\.-_]+/,
   file_path: $ => seq(optional('/'), slashSep($._path_segment), /[^\n\r]*/),

   header_info: $=> seq('Classfile', $.file_path),

   header: $=> seq(
	   optional($.header_info),
	   optional($.header_info_last_mod),
	   optional($.header_info_md5),
	   $.header_info_compile,
   )

  } 
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}

function slashSep1(rule) {
  return seq(rule, repeat(seq('/', rule)))
}

function slashSep(rule) {
  return optional(slashSep1(rule))	
}
