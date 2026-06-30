# Aufbau, Anschlüsse und Polung

in Bipolartransistor, im Englischen als bipolar junction transistor (BJT) bezeichnet, ist ein [[Transistor]], bei dem beide [[Ladungsträger|Ladungsträgertypen]] – negativ geladene [[Elektron|Elektronen]] und positiv geladene [[Loch|Defektelektronen]] – zum Stromtransport durch den Bipolartransistor beitragen. Der BJT wird mittels eines elektrischen Stroms gesteuert und wird zum Schalten und Verstärken von Signalen ohne mechanisch bewegte Teile eingesetzt.

![[Bipolartransistor.svg]]

Der Bipolartransistor nutzt drei [[dotierte Halbleiter]]schichten und drei "Eingänge".

Die Basis steuert den Stromfluss von Emitter nach Kollektor (hier ist die technische Stromrichtung gemeint).



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



# Modellierung des Bipolartransistors

# Schaltung des Bipolartransistors

Ein Bipolartransistor besteht aus zwei [[pn-Übergang|pn-Übergängen]], weshalb es vier mögliche Arten der Beschaltung gibt, da jeder [[pn-Übergang]] in Fluss- oder Sperrrichtung geschaltet werden kann. Die üblichste Art der Beschaltung ist der Verstärkungsbereich, dabei ist der Emitter-Basis-Übergang in Flussrichtung und der Basis-Kollektor-Übergang in Sperrrichtung gepolt.

Durch einen elektrischen Strom $I_B$ zwischen Basis und Emitter wird ein stärkerer Strom $I_C$ zwischen Kollektor und Emitter gesteuert. Das Verhältnis der beiden Ströme, das im Bereich von etwa $4$ bis $1000$ liegt, ist vom Transistortyp und vom Absolutbetrag des Kollektorstroms abhängig und wird als statischer Stromverstärkungsfaktor $B$ bezeichnet.

Im Folgenden wird am Beispiel eines **npn-Transistors** die generelle Funktionsweise eines Bipolartransistors im Vorwärtsbetrieb ($U_{BE} > 0$, $U_{CB} > 0$) dargestellt.

Werden nur Kollektor und Emitter angeschlossen (Spannung $U_{CE} > 0$), entspricht dies schaltungstechnisch zwei entgegengesetzt geschalteten [[Diode|Dioden]], von denen eine (die Basis-Kollektor-Diode) immer gesperrt ist. Es fließt nur ein kleiner Sperrstrom. Die angelegte Spannung verkleinert zwar die Basis-Emitter-Sperrschicht, die [[Verarmungszone|Raumladungszone]] zwischen Basis und Emitter, vergrößert jedoch die Basis-Kollektor-Sperrschicht.

Durch Schließen des Basis-Emitter-Stromkreises (Spannung $U_BE > U_D$ ( $U_D$  entspricht der [[Diffusionsspannung]]), für Silizium $U_{BE} > 0,7\   V$) wird die Basis-Emitter-Diode leitend. 
Wie bei der einfachen pn-[[Diode]] werden [[Loch|Defektelektronen]] aus der Basis ([[dotierte Halbleiter|p-dotiert]]) in den Emitter ([[dotierte Halbleiter|n-dotiert]]) injiziert (engl. injected). Es fließt ein kleiner **Basisstrom** $I_{BE1}$.
Da der Emitter höher dotiert ist als die Basis, überwiegt der [[Elektron|Elektronenstrom]] vom Emitter in die Basis dem [[Loch|Defektelektronenstrom]] von der Basis in den Emitter. 
Aufgrund der geringen Weite der Basis, die kleiner als die Diffusionslänge der Ladungsträger sein muss, rekombinieren jedoch nur wenige der Elektronen mit den Defektelektronen. 
Die meisten Elektronen (ca. 99 %) diffundieren durch die Basis in die Kollektor-Basis-Sperrschicht, der Basis-Kollektor-Übergang wird in **Sperrrichtung** betrieben. Dort driften sie wegen des großen Potentialabfalls ($U_{CB} > 0$) in den Kollektor. In Form des Kollektorstroms $I_C$ fließen somit Elektronen vom Emitter in den Kollektor.

![[Potenzialabfall_bipolar.png|400]]

# Kennlinien 

## Eingangskennlinie

## Stromsteuerkennlinie

## Ausgangskennlinienfeld