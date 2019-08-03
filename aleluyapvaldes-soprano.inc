\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key c \major

		R1  |
		g 4 c' d' 8 c' 4 d' 8  |
		e' 4 e' 8 d' 4. e' 8 ( d'  |
		g 4 ) c' d' 8 c' 4 d' 8  |
%% 5
		a' 4 a' 8 g' 4. c'' 8 c''  |
		c'' 4. a' a' 8 a'  |
		a' 4. g' e' 8 ( d'  |
		g 4 ) c' d' 8 c' 4 d' 8  |
		e' 2 d' 8 ( c' d' 4 )  |
		c' 1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
	¡A -- le -- lu -- ya, a -- le -- lu -- ya!
	¡A __ le -- lu -- ya, a -- le -- lu -- ya!
	¡A -- le -- lu -- ya, a -- le -- lu -- ya!
	¡A __ le -- lu -- ya, a -- le -- lu __ ya!
	}
>>
