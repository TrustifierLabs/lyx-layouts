Format 60

AddToPreamble
	% -- Define some Trustifier specific fonts
	\usepackage{trustifier-fonts}
	\newcommand*{\TrustifierLogo}{
		{\arkitech trustifier}
	}
	\newcommand*{\TrustifierProduct}[1] {
		{\timeburner{#1}}
	}
	\newcommand*{\tbLogoMark}{\TrustifierLogo}
	\renewcommand*{\abstracttextfont}{\times}

	\newcommand{\tbSetLogoMark}[1]{
		\ifthenelse{\isempty{#1}}{
			\renewcommand*{\tbLogoMark}{\TrustifierLogo}
		}
		{
			\renewcommand*{\tbLogoMark}{\TrustifierProduct {#1}}
		}
	}
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
