
if version < 600
	syntax clear
else
	if exists('b:current_syntax') | finish | endif 
endif

syntax include @lyxTeX syntax/tex.vim 

syntax keyword lyxKeywords
	\ End
	\ Input
	\ InsetLayout 

syntax keyword lyxHeaderKeywords contained 
	\ LyXModuleInclude
	\ DeclareLyXModule 
	\ EndLyXDeclaration 
	\ EndDeclaration

syntax keyword lyxHeaderDescriptionKW contained
	\ DescriptionBegin
	\ DescriptionEnd 


syntax keyword lyxPreambleKeywords contained AddToPreamble Preamble EndPreamble

syntax region lyxHeader start=/^#\s*\(\(\\DeclareLyXModule\)\|\(LyXModuleInclude\)\)/ end=/^\s*$\|^\s[^#]*$\|^#End\(LyX\)?Declaration/ contains=lyxHeaderDescription,lyxHeaderKeywords
syntax region lyxHeaderDescription matchgroup=lyxHeaderDescriptionKW start=/^#DescriptionBegin/ end=/^#DescriptionEnd/ contains=lyxHeaderDescriptionLine,lyxHeaderDescriptionKW contained
syntax region lyxHeaderDescriptionLine start=/^#/ end=/$/ contained keepend

syntax case ignore

syntax keyword lyxFormatKW format contained
syntax match lyxFormatNumber /\d\{1,2}/ contained
syntax region lyxFormatLine start=+\cformat+ end=+$+ contains=lyxFormatKW,lyxFormatNumber keepend oneline

syntax region lyxPreamble matchgroup=lyxPreambleKeywords start=/\%(AddTo\)\?Preamble/ end=/EndPreamble/ contains=@lyxTeX,lyxPreambleKeywords 
syntax region lyxString start=+"+ end=+"+ skip=+\\"+ oneline 

highlight lyxHeader 
highlight default link lyxString String
highlight link lyxFormatKW Keyword
highlight link lyxFormatNumber Number
highlight link lyxKeywords Keyword
highlight link lyxHeaderKeywords PreProc 
highlight link lyxHeaderDescriptionKW Keyword
highlight link lyxHeaderDescriptionLine String
highlight lyxPreambleKeywords term=bold ctermfg=green guifg=green
highlight link lyxPreamble SpecialComment

let b:current_syntax="lyx-layout"
