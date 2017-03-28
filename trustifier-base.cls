\ProvidesClass{trustifier-base}[2017/03/26 Trustifier Base Book]
\NeedsTeXFormat{LaTeX2e}


\DeclareOption*{\PassOptionsToClass{\CurrentOption}{memoir}}
\ProcessOptions \relax

\LoadClass{memoir}
\usepackage{babel}
\usepackage{xifthen}
\usepackage{fontspec}

%-- Standard fonts for Trustifier

\newfontfamily\arkitech{Arkitech}
\newfontfamily\roboto{Roboto}

\newfontfamily\timeburner{TimeBurner}
\newfontfamily\neonmusic{NEON CLUB MUSIC}
\newfontfamily\times{Palatino Italic}


% --- End of Header and Footer

\endinput
%%-- vim: filetype=tex 
