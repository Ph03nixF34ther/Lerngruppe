---
aliases:
  - Parallelschaltungen
---
# Übersicht
Die Parallelschaltung, auch Nebenschaltung, ist in der [[Übersicht - Elektrotechnik|Elektrotechnik]] die Verbindung von zweipoligen Bauelementen oder Netzwerken so, dass alle ihre gleichnamigen Pole jeweils gemeinsam verbunden sind. Werden bei gepolten Bauelementen (z. B. Batterien, Dioden, Elektrolytkondensatoren) ungleichnamige Pole miteinander verbunden, spricht man von einer antiparallelen Schaltung. Bei ungepolten passiven Bauelementen entfällt diese Unterscheidung. Die Anzahl der parallelgeschalteten Elemente ist beliebig.
Parallelschaltung zweier [[Elektrischer Widerstand|Widerstände]]

Als Gegenstück zur [[Parallelschaltung]] gibt es als eine weitere Grundschaltung die [[Reihenschaltung]]. 

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\node[circ] at (8, 6.5){};
	\node[circ] at (13, 6.5){};
	\draw (9, 6.5) -- (8, 6.5);
	\draw (12, 6.5) -- (13, 6.5);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (7.5, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (7.25, 6.875){A};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (13.25, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (13, 6.875){B};
	\draw (9, 8.5) to[european resistor, l={$R_1$}] (12, 8.5);
	\draw (9, 7.5) to[european resistor, l={$R_2$}] (12, 7.5);
	\draw (9, 6.5) to[european resistor, l={$R_3$}] (12, 6.5);
	\draw (9, 5.5) to[european resistor, l={$R_4$}] (12, 5.5);
	\draw (9, 8.5) -- (9, 5.5);
	\draw (12, 8.5) -- (12, 5.5);
	\node[circ] at (9, 6.5){};
	\node[circ] at (12, 6.5){};
	\node[circ] at (9, 7.5){};
	\node[circ] at (12, 7.5){};
\end{tikzpicture}
\end{document}
```
# Eigenschaften von Parallelschaltungen
- An allen Elementen einer Parallelschaltung liegt dieselbe [[Elektrische Spannung]] an, auch wenn deren Stromaufnahme unterschiedlich ist. Ein typisches Beispiel ist die Netzspannungsversorgung (im Haushalt 230 V): Alle Geräte werden – unabhängig von deren Leistungsaufnahme – mit derselben Spannung versorgt.
- Die Parallelschaltung mehrerer elektrischer Verbraucher mit einer idealen [[Spannungsquelle]] ist unanfällig für Ausfälle einzelner Verbraucher (bei Ausfall im Sinne einer Unterbrechung). Wenn ein einzelnes Element seine [[Leistung bei Gleichstrom|Leistung]] unterbricht oder aus der Leitung entfernt wird, werden alle intakten Verbraucher unverändert versorgt. Mit einer _realen_ Spannungsquelle erhöht sich durch den Ausfall die Spannung an den intakten Verbrauchern. – Bei einem Ausfall im Sinne eines Kurzschlusses fällt die komplette Schaltung aus, wenn nicht die Leitung des ausgefallenen Verbrauchers durch eine [[Sicherung]] unterbrochen wird.
- Die Parallelschaltung von [[Relaiskontakten]] mit den Zuständen „gesperrt“ und „leitend“ realisiert für den Zustand „leitend“ eine ODER-Funktion, für den Zustand „gesperrt“ eine UND-Funktion.

$$
U = U_{1} = U_{2} = U_{3} = \dots
$$
Nach dem [[Kirchhoff'sche Gesetze#1. Kirchhoff'sches Gesetz Die Knotenregel|1. Kirchhoff'schen Gesetz - Der Knotenregel]] teilt sich der Strom am Knotenpunkt auf alle parallelen Zweige auf:
$$
I = I_{1} + I_{2} + I_{3} +\dots
$$
# Herleitung der Ersatzwiderstandsberechnung
## Herleitung der Allgemeinen Form
$$
R_{\text{Ersatz}} = \frac{U}{I}
$$
$$
\frac{1}{R_{\text{Ersatz}}}
= \frac{I}{U} = \frac{I_{1} + I_{2} + I_{3} + \dots}{U}
= \frac{I_{1}}{U} + \frac{I_{2}}{U} + \frac{I_{3}}{U} + \dots 
= \frac{I_{1}}{U_{1}} + \frac{I_{2}}{U_{2}} + \frac{I_{3}}{U_{3}} + \dots 
$$
$$
\frac{1}{R_{\text{Ersatz}}} = \frac{1}{R_{1}} + \frac{1}{R_{2}} + \frac{1}{R_{3}} + \dots
$$
Dies lässt sich durch die [[Elektrischer Leitwert|Leitwerte]] ausdrücken:
$$
G_{\text{Ersatz}} = G_{1} + G_{2} + G_{3} + \dots
$$
## Herleitung von $R_{\text{Ersatz}}$ bei nur zwei paralell geschalteten Widerständen
$$
\frac{1}{R_{\text{Ersatz}}} = \frac{1}{R_{1}} + \frac{1}{R_{2}} = \frac{R_{2}}{R_{1} \cdot R_{2}} + \frac{R_{1}}{R_{1} \cdot R_{2}} = \frac{R_{1} + R_{2}}{R_{1} \cdot R_{2}}
$$
$$
R_{\text{Ersatz}} = \frac{R_{1} \cdot R_{2}}{R_{1} + R_{2}}
$$