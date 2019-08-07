\context Staff = "violín" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key g \major

		\partial 2
		r8 g' a' b'  |
		c'' 4. a' 8 ~ a' 2  |
		a' 4. g' e' 8 d'  |
		c' 4. e' 4 c' 8 e' 4  |
%% 5
		g' 2. r4  |
		R1*9  |
		\bar "|."
	}
>>
