\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key c \major

		\partial 2
		r2  |
		R1*4  |
		g 4 c' d' 8 c' 4 d' 8  |
		e' 4 e' 8 d' 4. e' 8 ( d'  |
		g 4 ) c' d' 8 c' 4 d' 8  |
		c' 4 c' 8 d' 4. r4  |
%% 10
		r8 g a c' 4 g 8 a c' ~  |
		c' 8 g a c' 4 c' 8 r4  |
		g 4 c' d' 8 c' 4 d' 8  |
		c' 2 b 8 ( a b 4 )  |
		g 1  |
		\bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
	¡A -- le -- lu -- ya, a -- le -- lu -- ya!
	¡A __ le -- lu -- ya, a -- le -- lu -- ya!
	¡A -- le -- lu -- "ya, a" -- le -- lu -- "ya, a" -- le -- lu -- ya!
	¡A -- le -- lu -- ya, a -- le -- lu __ ya!
	}
>>
