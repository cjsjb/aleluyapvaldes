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

		R1  |
		g 4 c' d' 8 c' 4 d' 8  |
		e' 4 e' 8 d' 4. e' 8 ( d'
		% warning: overlong bar truncated here |
		g 4 ) g a 8 a 4 a 8  |
%% 5
		a 4 a 8 b 4. c' 8 c'  |
		c' 4. c' c' 8 c'  |
		c' 4. c' c' 8 ( b
		% warning: overlong bar truncated here |
		g 4 ) c' d' 8 c' 4 d' 8  |
		c' 2 b  |
%% 10
		c' 1  |
		\bar "|."
	} % Voice

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
	¡A -- le -- lu -- ya, a -- le -- lu -- ya!
	¡A __ le -- lu -- ya, a -- le -- lu -- ya!
	¡A -- le -- lu -- ya, a -- le -- lu -- ya!
	¡A __ le -- lu -- ya, a -- le -- lu -- ya!
	} % Lyrics 1
>> % Staff ends
