# Aufbau, Anschlüsse und Polung

in Bipolartransistor, im Englischen als bipolar junction transistor (BJT) bezeichnet, ist ein [[Transistor]], bei dem beide [[Ladungsträger|Ladungsträgertypen]] – negativ geladene [[Elektron|Elektronen]] und positiv geladene [[Loch|Defektelektronen]] – zum Stromtransport durch den Bipolartransistor beitragen. Der BJT wird mittels eines elektrischen Stroms gesteuert und wird zum Schalten und Verstärken von Signalen ohne mechanisch bewegte Teile eingesetzt.

![[Bipolartransistor.svg]]

Der Bipolartransistor nutzt drei [[dotierte Halbleiter]]schichten und drei "Eingänge".

Die Basis steuert den Stromfluss von Emitter nach Kollektor (hier ist die technische Stromrichtung gemeint).

# Kenngrößen des Bipolartransistors

## Ströme und Spannungen

| Bezeichnung | Beschreibung               | Dimension                          |
| ----------- | -------------------------- | ---------------------------------- |
| $I_{C}$     | Kollektorstrom             | $A$ bis $mA$ Bereich               |
| $I_{B}$     | Basisstrom                 | $mA$ bis $\mu A$ Bereich           |
| $I_{E}$     | Emitterstrom               | fast identisch mit Kollektorstrom  |
| $U_{CE}$    | Kollektor-Emitter-Spannung | $V$ Bereich. recht breit gefächert |
| $U_{BE}$    | Basis-Emitter-Spannung     | etwa $0,7\ V$                      |
| $U_{CB}$    | Basis-Collektor-Spannung   | $U_{CB} = U_{CE} - U_{BE}$         |

>[!Info] npn- oder pnp-Transistor?
>npn-Transistor: $U_{CE}, U_{BE}, U_{CB}, I_{C}, I_{B}$ sind **positiv** $I_{E}$ ist **negativ**
>pnp-Transistor: $U_{CE}, U_{BE}, U_{CB}, I_{C}, I_{B}$ sind **negativ** $I_{E}$ ist **positiv**
>
>**MERKE** $I_{E}$ folgt dem Pfeil im Schaltzeichen des Transistors

## Die Stromverstärkung

Da der Bipolartransistor ein stromgesteuerter [[Transistor]] ist, und einen Strom steuert und die [[#Stromsteuerkennlinie|Kennlinie]] dies zulässt, kann in gewissen Bereichen des Transistorbetriebs von einer linearen Stromverstärkung mit konstantem Stromverstärkungsfaktor $B$ ausgegangen werden.

Damit gilt:

$$
I_{B} \cdot B = I_{C}
$$

# Ersatzschaltbilder des Bipolartransistors


```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\node[npn](N1) at (4.34, 8){} node[anchor=west] at (N1.text){$npn$};
	\node[pnp, yscale=-1](N2) at (11, 8){} node[anchor=west] at (N2.text){$pnp$};
	\draw (3.5, 8) -- (2.59, 8);
	\draw (4.34, 8.75) -| (4.34, 9.73);
	\draw (4.34, 7.23) -| (4.34, 6.25);
	\draw (10.16, 8) -- (9.25, 8);
	\draw (11, 8.75) -| (11, 9.73);
	\draw (11, 7.25) -| (11, 6.27);
	\node[inputarrow](N3) at (3.09, 8){} node[anchor=north] at (N3.text){$I_B$};
	\node[inputarrow, xscale=-1, yscale=-1](N4) at (9.75, 8){} node[anchor=north] at (N4.text){$I_B$};
	\node[inputarrow, rotate=-90](N5) at (4.34, 9){} node[anchor=east] at (N5.text){$I_C$};
	\node[inputarrow, rotate=90](N6) at (11, 9){} node[anchor=east] at (N6.text){$I_C$};
	\node[inputarrow, rotate=-90](N7) at (4.34, 6.75){} node[anchor=east] at (N7.text){$I_E$};
	\node[inputarrow, rotate=90, yscale=-1](N8) at (11, 6.75){} node[anchor=east] at (N8.text){$I_E$};
	\draw (7, 8) to[empty diode] (7, 9.75);
	\draw (7, 8) to[empty diode] (7, 6.25);
	\draw[line width=1.5pt] (8.5, 10.25) -- (8.5, 5.75);
	\draw (14, 6.25) to[empty diode, mirror] (14, 8);
	\draw (14, 9.75) to[empty diode, mirror] (14, 8);
	\node[circ] at (7, 8){};
	\node[circ] at (14, 8){};
	\draw (7, 8) -- (5.75, 8);
	\draw (14, 8) -- (12.75, 8);
	\node[inputarrow, xscale=-1, yscale=-1](N9) at (13.25, 8){} node[anchor=north] at (N9.text){$I_B$};
	\node[inputarrow, rotate=90](N10) at (14, 9.5){} node[anchor=east] at (N10.text){$I_C$};
	\node[inputarrow, rotate=90, yscale=-1](N11) at (14, 6.5){} node[anchor=east] at (N11.text){$I_E$};
	\node[inputarrow](N12) at (6.5, 8){} node[anchor=north] at (N12.text){$I_B$};
	\node[inputarrow, rotate=-90](N13) at (7, 9.5){} node[anchor=east] at (N13.text){$I_C$};
	\node[inputarrow, rotate=-90](N14) at (7, 6.5){} node[anchor=east] at (N14.text){$I_E$};
\end{tikzpicture}
\end{document}
```

>[!Danger] Achtung!
>Die angezeichneten Ströme sind nicht Konventionskonform, sondern sollen die tatsächliche Stromrichtung veranschaulichen. So, wie sie eingezeichnet sind fließen die realen Ströme (dabei ist die [[technische Stromrichtung]] gemeint, also der Weg der [[Loch|Löcher]]).
>Per Konvention zeigen **alle** Ströme der Schaltung **immer** IN den [[Transistor]]


Das Ersatzschaltbild für den Bipolartransistor sind zwei [[Diode|Dioden]], von denen eine (die von Basis zu Kollektor) in Sperrichung betrieben wird (ähnlich der [[Zenerdiode]]).

Das geschieht allerdings nur, wenn ausreichend Ladungsträger vom Emitter in die Basis strömen. 
Das wiederum geschieht nur, wenn die Diode zuwischen Basis und Emitter leitet.

# Schaltung des Bipolartransistors

## Erklärung in Worten

Ein Bipolartransistor besteht aus zwei [[pn-Übergang|pn-Übergängen]], weshalb es vier mögliche Arten der Beschaltung gibt, da jeder [[pn-Übergang]] in Fluss- oder Sperrrichtung geschaltet werden kann. Die üblichste Art der Beschaltung ist der Verstärkungsbereich, dabei ist der Emitter-Basis-Übergang in Flussrichtung und der Basis-Kollektor-Übergang in Sperrrichtung gepolt.

Durch einen elektrischen Strom $I_B$ zwischen Basis und Emitter wird ein stärkerer Strom $I_C$ zwischen Kollektor und Emitter gesteuert. Das Verhältnis der beiden Ströme, das im Bereich von etwa $4$ bis $1000$ liegt, ist vom Transistortyp und vom Absolutbetrag des Kollektorstroms abhängig und wird als statischer Stromverstärkungsfaktor $B$ bezeichnet.

Im Folgenden wird am Beispiel eines **npn-Transistors** die generelle Funktionsweise eines Bipolartransistors im Vorwärtsbetrieb ($U_{BE} > 0$, $U_{CB} > 0$) dargestellt.

Werden nur Kollektor und Emitter angeschlossen (Spannung $U_{CE} > 0$), entspricht dies schaltungstechnisch zwei entgegengesetzt geschalteten [[Diode|Dioden]], von denen eine (die Basis-Kollektor-Diode) immer gesperrt ist. Es fließt nur ein kleiner Sperrstrom. Die angelegte Spannung verkleinert zwar die Basis-Emitter-Sperrschicht, die [[Verarmungszone|Raumladungszone]] zwischen Basis und Emitter, vergrößert jedoch die Basis-Kollektor-Sperrschicht.

Durch Schließen des Basis-Emitter-Stromkreises (Spannung $U_BE > U_D$ ( $U_D$  entspricht der [[Diffusionsspannung]]), für Silizium $U_{BE} > 0,7\   V$) wird die Basis-Emitter-Diode leitend. 
Wie bei der einfachen pn-[[Diode]] werden [[Loch|Defektelektronen]] aus der Basis ([[dotierte Halbleiter|p-dotiert]]) in den Emitter ([[dotierte Halbleiter|n-dotiert]]) injiziert (engl. injected). Es fließt ein kleiner **Basisstrom** $I_{BE1}$.
Da der Emitter höher dotiert ist als die Basis, überwiegt der [[Elektron|Elektronenstrom]] vom Emitter in die Basis dem [[Loch|Defektelektronenstrom]] von der Basis in den Emitter. 
Aufgrund der geringen Weite der Basis, die kleiner als die Diffusionslänge der Ladungsträger sein muss, rekombinieren jedoch nur wenige der Elektronen mit den Defektelektronen. 
Die meisten Elektronen (ca. 99 %) diffundieren durch die Basis in die Kollektor-Basis-Sperrschicht, der Basis-Kollektor-Übergang wird in **Sperrrichtung** betrieben. Dort driften sie wegen des großen Potentialabfalls ($U_{CB} > 0$) in den Kollektor. In Form des Kollektorstroms $I_C$ fließen somit Elektronen vom Emitter in den Kollektor.

## Veranschaulichung des Potenzialverlaufs

![[Potenzialabfall_bipolar.png|300]]

# Kennlinien 

![[Kennlinie_Bipolartranistor.png]]

## Eingangskennlinie

Bei der Eingangskennlinie ist ein Verlauf zu erkennen, ähnlich dem einer [[Diode]] in [[Verarmungszone|Durchlassrichtung]]. Dies ist zu erklären über das [[#Ersatzschaltbilder des Bipolartransistors|Ersatzschaltbild]], bei dem zwischen der Basis und dem Emitter eine Diode liegt. Der [[pn-Übergang]] zwischen Basis und Emitter wird dann bei einer gewissen Spannung stark leitend.

Deswegen kann man bei eingeschaltetem Transistor von einem konstanten Spannungsabfall zwischen Kollektor und Emitter ausgehen.

Damit dieser [[pn-Übergang]] nicht durchbrennt ist es von Vorteil den Strom durch einen dem Transistor vorgelagerten ohmschen Widerstand zu begrenzen.

## Stromsteuerkennlinie

In der Stromsteuerkennlinie ist der beinahe lineare Anstieg der [[#Die Stromverstärkung|Stromverstärkung]] zu sehen. 

## Ausgangskennlinienfeld

Das Ausgangskennlinienfeld zeigt eindeutig, dass die über den Kollektor nach Emitter anggelegte Spannung wenig Einfluss auf die 

# Transistorschaltungen dimensionieren

Um eine Transistorschaltung korrekt dimensionieren zu können gibt es eine strikte Anleitung, die [[Transistorschaltung dimensionieren|hier]] nachgelesen werden kann.

# Verstärkerschaltungen mit dem Bipolartransistor

Um einen Bipolartransistor in einer Verstärkerschaltung nutzen zu können gibt es mehrere Möglichkeiten. All das kann [[Transistorschaltung dimensionieren|hier]] nachgelesen werden.
