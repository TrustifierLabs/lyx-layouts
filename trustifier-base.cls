\ProvidesClass{trustifier-base}[2017/03/26 Trustifier Base Book]
\NeedsTeXFormat{LaTeX2e}

\newcommand{\tbDocLeftMargin}{2.5cm}
\newcommand{\tbDocRightMargin}{2.5cm}
\newcommand{\tbDocTopMargin}{3cm}
\newcommand{\tbDocBottomMargin}{3cm}
\DeclareOption*{\PassOptionsToClass{\CurrentOption}{memoir}}
\ProcessOptions \relax

\LoadClass{memoir}
\usepackage{babel}

\setlrmarginsandblock{\tbDocLeftMargin}{\tbDocRightMargin}{*} % Left and right margin
\setulmarginsandblock{\tbDocTopMargin}{\tbDocBottomMargin}{*}  % Upper and lower margin
\checkandfixthelayout

\endinput
%%-- vim: filetype=tex 
