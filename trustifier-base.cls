\ProvidesClass{trustifier-base}[2017/03/26 Trustifier Base Book]
\NeedsTeXFormat{LaTeX2e}


\DeclareOption*{\PassOptionsToClass{\CurrentOption}{memoir}}
\ProcessOptions \relax

\LoadClass{memoir}
\usepackage{babel}
\usepackage{xifthen}
\usepackage{fontspec}
\usepackage{trustifier-fonts}


% --- End of Header and Footer

\endinput
%%-- vim: filetype=tex 
