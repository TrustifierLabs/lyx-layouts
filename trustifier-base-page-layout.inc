#LyXModuleInclude
# page layouts

Format 60

AddToPreamble
	% -- page style
	\makepagestyle{tbBasePageStyle}
	\makeheadrule {tbBasePageStyle}	{\textwidth}{\normalrulethickness}
	\makefootrule {tbBasePageStyle}	{\textwidth}{\normalrulethickness}{\footruleskip}

	\makeevenhead{tbBasePageStyle}	{\scshape\rightmark}{}{}
	\makeoddhead{tbBasePageStyle}	{\leftmark}{}{\tbLogoMark}

	\makeevenfoot{tbBasePageStyle}	{\small \thepage}{\tiny \emph Copyright\ \textcopyright 2017 Trustifier Inc. All rights reserved.}{}
	\makeoddfoot{tbBasePageStyle}	{\tiny \theauthor}{}{\small \thepage}

	\makeatletter % because of memoir \@chapapp
	\makepsmarks{tbBasePageStyle}{%
		\nouppercaseheads
		\createmark		{chapter}	{right}	{shownumber}{\@chapapp\ }{. \ }
		\createmark		{section}	{right}	{shownumber}{}		 {. \ }
		\createmark		{subsection}	{right}	{shownumber}{}		 {. \ }
		\createmark		{subsubsection}	{right}	{shownumber}{}		 {. \ }
		\createplainmark	{toc}		{both}	{\contentsname}
		\createplainmark	{lof}		{both}	{\listfigurename}
		\createplainmark	{lot}		{both}	{\listtablename}
		\createplainmark	{bib}		{both}	{\bibname}
		\createplainmark	{index}		{both}	{\indexname}
		\createplainmark	{glossary}	{both}	{\glossaryname}
	}
	\makeatother
	\setsecnumdepth{subsubsection}
	\pagestyle{tbBasePageStyle}
	% -- lines/paragraphs and other goodies

	\OnehalfSpacing
	\setlength{\parskip}{2.5em}

	% -- document margins

	\newcommand{\tbDocLeftMargin}{4.5cm}
	\newcommand{\tbDocRightMargin}{2.5cm}
	\newcommand{\tbDocTopMargin}{3cm}
	\newcommand{\tbDocBottomMargin}{3cm}
	\setlrmarginsandblock{\tbDocLeftMargin}{\tbDocRightMargin}{*} % Left and right margin
	\setulmarginsandblock{\tbDocTopMargin}{\tbDocBottomMargin}{*}  % Upper and lower margin
	\checkandfixthelayout

EndPreamble

