if exists('b:current_syntax') | finish | endif 

syntax keyword lyxCommand  \\layout
syntax keyword lyxCommand  \\the_end
syntax keyword lyxKey Input
syntax keyword lyxKey 
syntax keyword lyxKey 
syntax keyword lyxBinary true false
syntax keyword lyxBinary Open Close
syntax region lyxString start=/"/ end=/"/ 

highlight link lyxCommand Keyword
highlight link lyxKey Keyword
highlight link lyxString String
highlight link lyxInset Comment
highlight link lyxBinary Boolean
