#LyXModuleInclude
#trustifier-base fonts

Format 60

AddToPreamble
	\setromanfont[
		Ligatures=TeX,
		Scale=MatchLowercase
	]{Palatino}
	\setsansfont[
		Ligatures=TeX,
		UprightFont={* Light},
		BoldFont={* Medium}
	]{Roboto}
	\setmonofont{FreeMono}
	% -- define default family as sans
	\renewcommand{\familydefault}{\sfdefault}
EndPreamble
