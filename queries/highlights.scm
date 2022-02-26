[
  "abstract"
  "class"
  "default"
  "extends"
  "final"
  "implements"
  "private"
  "protected"
  "public"
  "static"
  "strictfp"
  "synchronized"
  "throws"
  "volatile"
] @keyword


(file_path) @file.path
(file_name) @file.name

(comment) @comment

[
 (boolean_literal)
] @constant

(flag_value) @attribute



(method_declaration
  name: (identifier) @function.method)

(class_info_def
  name: (identifier) @class.name)
(class_declaration_plain
  name: (identifier) @class.name)
(constructor_declaration
  name: (type_identifier) @class.name)

(primitive_type) @type.builtin

[
 (type_identifier)
 (scoped_type_identifier)
] @type

(identifier) @tag

(constant_pool_item_type_utf8) @constant.pool.type.utf8
(constant_pool_item_type_class) @constant.pool.type.class
(constant_pool_item_type_string) @constant.pool.type.string
(constant_pool_item_type_ref) @constant.pool.type.ref
(constant_pool_item_type_name_and_type) @constant.pool.type.name_and_type
(constant_pool_item_type_double) @constant.pool.type.number
(constant_pool_item_type_int) @constant.pool.type.number


[
 (number)
 (hex_value)
] @number

(instruction_name) @instruction.name
