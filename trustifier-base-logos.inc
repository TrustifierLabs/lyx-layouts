Format 60

AddToPreamble
	% -- Define some Trustifier specific fonts
	\usepackage{trustifier-fonts}
	\usepackage{tikz}
	\providecommand*{\trustifier}{%
		{\arkitech{trustifier}}%
	}%
	\providecommand*{\TrustifierLogo}{%
		\begin{tikzpicture}
			\node[text width=3cm,text=black,font=\arkitech,align=center] at (0,0) {trustifier};
		\end{tikzpicture}
	}%
	\providecommand*{\TrustifierProduct}[1]{%
		{\timeburner{#1}}%
	}%
	\providecommand*{\tbLogoMark}{\trustifier}
	\providecommand*{\abstracttextfont}{\times}
	\renewcommand*{\abstracttextfont}{\times}
	\providecommand*{\tbSetLogoMark}[1]{%
		\ifthenelse{\isempty{#1}}{%
			\reprovidecommand*{\tbLogoMark}{\TrustifierLogo}%
		}%
		{%
			\reprovidecommand*{\tbLogoMark}{\TrustifierProduct{#1}}%
		}%
	}%
	% --- Trustifier Specific Header/Footer style
EndPreamble

Style ProductLogo
	Category 	Trustifier
	LatexType 	Command
	LatexName 	tbSetLogoMark

	LabelType	Static
	LabelSep	xx
	LabelString 	"Product-Logo:"
	LeftMargin	Product-Logo:xx
	InTitle		1
	InPreamble	1

	LabelFont
		Color 	Blue
	EndFont
End

# vim:filetype=tex
