const newline = '\n';

const DIGITS = token(sep1(/[0-9]+/, /_+/))

const PREC = {
	GENERIC: 10,
};

module.exports = grammar({
  name: 'javap',

  word: $ => $._identifier,

  conflicts: $ => [
    [$.modifiers, $._type],
    [$._type, $.scoped_type_identifier],
    [$._type, $.generic_type],
  ],

  rules: {

    source_file: $ => choice(
	    $._source_file_verbose,
	    $._source_file_plain
    ),
    _source_file_verbose: $ => seq(
	    $.header,
	    $.class_info_def,
	    $.constant_pool_def,
	    optional($.block),
	    $.footer
    ),

    _source_file_plain: $=> seq(
	    $.header_info_compile,
	    choice($.class_def_plain, $.interface_def_plain)
    ),

    class_def_plain: $=> seq(
      optional($.modifiers),
      $.class_keyword, 
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameters)),
      optional(field('superclass', $.superclass)),
      optional(field('interfaces', $.super_interfaces)),
      field('body', $.class_def_plain_body),
    ),

    interface_def_plain: $=> seq(
	optional($.modifiers),
	$.interface_keyword,
	field('name', $.identifier),
	field('type_paramters', optional($.type_parameters)),
	optional(field('superclass', $.superclass)),
        optional(field('interfaces', $.super_interfaces)),
        field('body', $.class_def_plain_body),
    ),

    superclass: $ => seq(
      'extends',
      $._type
    ),

    super_interfaces: $ => seq(
      'implements',
      $.interface_type_list
    ),

    interface_type_list: $ => seq(
      $._type,
      repeat(seq(',', $._type))
    ),

    interface_keyword: $=> 'interface',

    class_def_plain_body: $=> seq(
	    '{', 
	    repeat($.class_def_plain_body_item),
	    '}'
    ),

    class_def_plain_body_item: $=> seq(
	    choice(
		$.constructor_def, 
	  	$.field_def,
	 	$.method_def,
		$.static_block_def
    	    ),
            ';'
    ),

    field_def: $=> seq(
	$.modifiers,
	field('type', $._type),
	field('name', $.identifier),
    ),

    constructor_def: $ => seq(
      optional($.modifiers),
      field('return_type', $._type),
      field('paramters' ,$.args ),
    ),

    method_def: $ => seq(
      optional($.modifiers),
      field('return_type', $._type),
      field('name', $.identifier),
      field('paramters' ,$.args ),
      optional($.method_throws),
    ),

    method_throws: $=> seq(
      'throws',
      commaSep1($._type)
    ),

    _method_def_verbose: $ => seq(
	$.descriptor_def,
	$.flag_def,
	optional($.code_def), 
	optional($.annotation_default),
	optional($.deprecated),
	optional($.exceptions),
	optional($.method_def_verbose_sig),
	optional($.runtime_visible_annotations),
	optional($.runtime_visible_type_annotations),
	optional($.runtime_visible_paramter_annotations),
    ),

    method_def_verbose_sig: $=> seq('Signature:', $._hash_number, optional($.comment)),

    annotation_default: $ => seq(
      'AnnotationDefault:',
      'default_value:',
      /\w/,
      $._hash_number,
      $._endl,
      alias($._rest_of_the_line, $.value),
    ),

    deprecated: $=> seq(
     'Deprecated:',
     $.boolean_literal,
    ),

    // 0: #18()
    _runtime_index: $=> seq(
	  $.number, 
	  token.immediate(':'),
	  $._hash_number,
	  token.immediate('()'),
    ),

    runtime_visible_annotations: $=> seq(
	'RuntimeVisibleAnnotations:',
	repeat1($.runtime_visible_annotation),
    ),

    runtime_visible_annotation: $=> seq(
	  $._runtime_index,
	  $._endl,
     	  alias($._rest_of_the_line, $.value),
    ),

    runtime_visible_type_annotations: $=> seq(
	'RuntimeVisibleTypeAnnotations:',
	repeat1($.runtime_visible_type_annotation),
    ),

    runtime_visible_type_annotation: $=> seq(
	$._runtime_index,
	':',
	commaSep1(choice(
		alias(/[\w_]+/, $.target_kind),
		seq(/[\w_]+/, token.immediate('='), $.number),
	)),
	$._endl,
     	alias($._rest_of_the_line, $.value),
    ),

    runtime_visible_paramter_annotations: $=> seq(
	'RuntimeVisibleParameterAnnotations:',
	repeat1($.runtime_visible_parameter_annotation),
    ),

    runtime_visible_parameter_annotation: $=> seq(
	'parameter',
	$.number,
	token.immediate(':'),
	$.runtime_visible_parameter_annotation_param,
    ),

    runtime_visible_parameter_annotation_param: $=> seq(
	$._runtime_index,
	$._endl,
     	alias($._rest_of_the_line, $.value),
    ),

    exceptions: $=> seq(
	'Exceptions:',
	$.method_throws
    ),

    static_block_def: $=> seq(
	$.modifiers,
	'{}'
    ),

    type_parameters: $ => seq(
      '<', commaSep1($.type_parameter), '>'
    ),

    type_parameter: $ => seq(
      //repeat($._annotation),
      alias($.identifier, $.type_identifier),
      optional($.type_bound)
    ),

    type_bound: $ => seq($.extends, $._type, repeat(seq('&', $._type))),

    modifiers: $ => repeat1(choice(
      'public',
      'protected',
      'private',
      'abstract',
      'static',
      'final',
      'strictfp',
      'default',
      'synchronized',
      'native',
      'transient',
      'volatile'
    )),

    code_def: $ => seq('Code:', $.code_info, $.line_number_table_def),

    code_info: $ => seq(
	    commaSep1($.code_info_stat), 
	    repeat1($.numered_instruction)
    ),

    line_number_table_def: $ => seq('LineNumberTable:', repeat1($.numered_line)),

    numered_line: $ => seq('line', $.number, ':', $.number),

    numered_instruction: $ => seq(
	    $.number, 
	    token.immediate(':'), 
	    $.instruction, 
	    choice($._endl, $.comment) 
    ),

    instruction: $=> seq(
	    /\S+/, 
	    optional(
		    choice(
			    $.number,
			    seq('#', $.number)
		    )
	    )
    ),

    code_info_stat: $ => seq(/\w+=/, $.number), 

    descriptor_def: $ => seq(
      'descriptor:',
      $.descriptor_value
    ),

    descriptor_value: $ => /.+/,

    flag_def: $ =>  seq('flags:', $._wrapped_hex_val, commaSep($.flag_value)),

    flag_value: $ => /\w+/,

    _wrapped_hex_val: $ => seq('(', $.hex_value, ')'),

    hex_value: $ => /0x[0-9A-Fa-f]+/,

    args: $ => seq(
      '(',
      commaSep(choice($._type, $.vararg)), 
      ')'
    ),

    _type: $ => choice(
	$._simple_type, 
	$.array_type,
    ),

    _simple_type: $ => choice(
      $.primitive_type,
      alias($.identifier, $.type_identifier),	
      $.scoped_type_identifier,
      $.generic_type,
    ),

    array_type: $ => seq(
      field('element', $._type),
      field('dimensions', $.dimensions)
    ),

    dimensions: $ => prec.right(repeat1(
      seq(
	'[', ']',
      )
    )),

    vararg: $=> seq($._type, token.immediate('...')),

    scoped_type_identifier: $ => seq(
      choice(
        alias($.identifier, $.type_identifier),
        $.scoped_type_identifier,
        $.generic_type
      ),
      '.',
      alias($.identifier, $.type_identifier)
    ),

    generic_type: $ => prec.dynamic(PREC.GENERIC, seq(
      choice(
        alias($.identifier, $.type_identifier),
        $.scoped_type_identifier
      ),
      $.type_arguments
    )),

    type_arguments: $ => seq(
      '<',
      commaSep(choice($._type, $.wildcard)),
      '>'
    ),

    wildcard: $ => seq(
      //repeat($._annotation),
      '?',
      optional($._wildcard_bounds)
    ),

    _wildcard_bounds: $ => choice(
      seq($.extends, $._type),
      seq($.super, $._type)
    ),

    extends: $=> 'extends',
    super: $ => 'super',

    primitive_type: $=> choice(
	'int',
	'char',
	'void',
	'double',
	'float',
	'byte',
    ),

    block: $ => seq(
      '{',
      repeat($._block_item),
      '}'
    ),

    _block_item: $=> seq(
      choice(
	$.constructor_def,
	$.method_def,
	$.field_def,
	$.static_block_def,
      ),
      ';',
      $._method_def_verbose,
    ),

    identifier: $ => $._identifier,

    // https://docs.oracle.com/javase/specs/jls/se8/html/jls-3.html#jls-IdentifierChars
    _identifier: $ => /[\p{L}_$][\p{L}\p{Nd}_$]*/,

    scoped_identifier: $ => seq(
      field('scope', $._name),
      '.',
      field('name', $.identifier)
    ),

    _name: $ => choice(
      $.identifier,
      $._reserved_identifier,
      $.scoped_identifier
    ),

    _reserved_identifier: $ => alias(choice(
      'open',
      'module'
    ), $.identifier),

    number: $ => token(/\d+/),

    footer: $=> seq(
	optional($.signature),
	$.source_file_def,
	optional($.footer_runtime_visible_annotations), 
	optional(alias($.runtime_visible_type_annotations, $.footer_runtime_visible_type_annotations)), 
	optional($.nested_members),
	optional($.nest_host),
	optional($.inner_classes),
    ),

    signature: $=> seq(
	'Signature:',
	$._hash_number,
	$.comment,
    ),

    source_file_def: $ => seq(
	    'SourceFile: "', 
	    /([a-zA-Z]+\.?)+/, '"'
    ),

    nested_members: $=> seq(
	    'NestMembers:',
	    repeat1($.identifier)
    ),

    inner_classes: $=> seq(
	'InnerClasses:',
	repeat1(seq(
		$.modifiers,
		$._hash_number,
		'=',
		$._hash_number,
		'of',
		$._hash_number,
		';',
		$.comment,
	)),
    ),

    nest_host: $=> seq(
	'NestHost:',
	'class',
	$.identifier,
    ),

    footer_runtime_visible_annotations: $=> seq(
	'RuntimeVisibleAnnotations:',
	repeat1($.footer_runtime_visible_annotation),
    ),

    footer_runtime_visible_annotation: $=> seq(
	    $.number,
	    token.immediate(':'),
	    $._hash_number,
	    $.footer_runtime_visible_annotation_element_args,
	    $._endl,
	    $._name,
	    $.runtime_annotation_args,
    ),

    footer_runtime_visible_annotation_element_args: $=> seq(
	    '(',
	    commaSep($.footer_runtime_visible_annotation_element_arg),
	    ')',
    ),

    footer_runtime_visible_annotation_element_arg: $=> seq(
	    $._hash_number,
	    '=',
	    $.runtime_annotation_element_value,
    ),

    runtime_annotation_element_value: $=> choice(
	$.runtime_annotation_element_value_array,
	$._runtime_annotation_element_value_simple,
    ),
    runtime_annotation_element_value_array: $=> seq(
	    '[',
	    commaSep1($._runtime_annotation_element_value_simple),
	    ']'
    ),
    _runtime_annotation_element_value_simple: $=> seq(
	    $.runtime_annotation_element_value_tag,
	    $.ref_const_pool_item,
    ),
    runtime_annotation_element_value_tag: $=> choice(
	'e', //enum constant
	's', //string
	'c', //class
	'@', //annotation
    ),
    

    runtime_annotation_args: $=> seq(
	    '(',
		repeat(seq(
			$.identifier,
			token.immediate('='),
			alias($._rest_of_the_line, $.value),//TODO make more precise?
		)),
	    ')',
    ),

    comment: $ => token(seq('//', /[^\n\r]*/)),

    constant_pool_def: $=> seq('Constant pool:', repeat($.constant_pool_item)),

    _hash_number: $=> seq('#', $.number), 

    constant_pool_item: $=> seq($._hash_number, '=', $._constant_pool_item_type),

    ref_const_pool_item: $=> choice(
	    seq(
      		$._hash_number,
      		'.',
      		$._hash_number
    	    ),
	    $._hash_number,
    ),

    _constant_pool_item_type : $=> choice(
     $._constant_pool_item_type_utf8,
     $._constant_pool_item_type_class,
     $._constant_pool_item_type_string,
     $._constant_pool_item_type_ref,
     $._constant_pool_item_type_name_and_type,
     $._constant_pool_item_type_double,
     $._constant_pool_item_type_int,
   ),

   _constant_pool_item_type_utf8: $ => seq(
	   'Utf8', 
	   alias(/[^\n\r]*/, $.value),
   ),
   _constant_pool_item_type_class: $ => seq(
	   'Class', 
	   alias($._hash_number, $.ref_const_pool_item), 
	   optional($.comment)
   ), 
   _constant_pool_item_type_string: $ => seq(
	   'String', 
	   alias($._hash_number, $.ref_const_pool_item), 
	   optional($.comment)
   ),   
   _constant_pool_item_type_ref: $=> seq(
	   choice('Methodref', 'Fieldref', 'InterfaceMethodref'), 
	   $.ref_const_pool_item, 
	   optional($.comment)
   ),

   _constant_pool_item_type_name_and_type: $=> seq(
	   'NameAndType',
	   alias($._hash_number, $.ref_const_pool_item), 
	   ':', 
	   alias($._hash_number, $.ref_const_pool_item), 
	   optional($.comment)
   ),

   _constant_pool_item_type_double: $=> seq(
	   choice('Double', 'Float'), 
	   alias($.decimal_floating_point_literal, $.value),
   ),

   _constant_pool_item_type_int: $=> seq(
	'Integer',
	alias($.number, $.value),
   ),

    decimal_floating_point_literal: $ => token(choice(
      seq(
	      DIGITS, 
	      '.', 
	      optional(DIGITS),
	      optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)),
	      optional(/[fFdD]/)
      ),
      seq(
	      '.',
	      DIGITS, 
	      optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)),
	      optional(/[fFdD]/)
      ),
      seq(
	      DIGITS, 
	      /[eEpP]/, 
	      optional(choice('-', '+')), DIGITS, optional(/[fFdD]/)
      ),
      seq(
	      DIGITS, 
	      optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)),
	      (/[fFdD]/))
    )),

   class_keyword: $ => 'class',

   class_info_def: $=> seq(
	   optional($.modifiers),
	   choice($.class_keyword, $.interface_keyword),
	   $.identifier, 
	   optional($.type_parameters),
	   optional(field('superclass', $.superclass)),
           optional(field('interfaces', $.super_interfaces)),
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

   header_info_last_mod: $=> seq('Last modified', $._rest_of_the_line), 

   md5: $ => /[0-9a-f]{32}/,

   header_info_md5: $=> seq('MD5 checksum' , $.md5),

   header_info_compile: $=> seq('Compiled from' , /"([^\/]+)"/), //TODO extract filename

   _path_segment: $=> /[\d\w\s\.-_]+/,
   file_path: $ => seq(optional('/'), slashSep($._path_segment), $._rest_of_the_line),

   _rest_of_the_line: $=> /[^\n\r]*/,
   _endl: $ => /(\S)*?[\r\n]+/,

   header_info: $=> seq('Classfile', $.file_path),

   header: $=> seq(
	   $.header_info,
	   $.header_info_last_mod,
	   $.header_info_md5,
	   $.header_info_compile,
   ),

   boolean_literal: $=> choice('true', 'false'),

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

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
