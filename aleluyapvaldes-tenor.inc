\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key c \major

		\partial 2
		r2  |
		R1*5  |
		r2 r4 e' 8 ( d'  |
		g 4 ) c' d' 8 c' 4 d' 8  |
		c' 4 c' 8 b 4. e' 8 e'  |
%% 10
		e' 4. c' c' 8 c'  |
		c' 4. c' a 8 ( g  |
		e 4 ) e f 8 e 4 e 8  |
		g 2 f 8 ( e f 4 )  |
		e 1  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		% ¡A -- le -- lu -- ya, a -- le -- lu -- ya!
		¡A __ le -- lu -- ya, a -- le -- lu -- ya!
		¡A -- le -- lu -- ya, a -- le -- lu -- ya!
		¡A __ le -- lu -- ya, a -- le -- lu __ ya!
	}
>>
