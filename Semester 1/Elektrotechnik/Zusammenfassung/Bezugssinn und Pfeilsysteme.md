
# Erklärung
Unter dem **Richtungssinn** versteht man in der Elektrotechnik die Vorzeichenkonvention skalarer Größen, wie der [[Elektrische Stromstärke|elektrischen Stromstärke]], der [[Elektrische Spannung|elektrischen Spannung]] oder des [[magnetische Fluss|magnetischen Flusses]].

Häufig werden in Schaltplänen Zählpfeile (= Bezugspfeile) für den Strom eingetragen, die den _Bezugssinn_ von elektrischem oder magnetischem Strom bzw. Spannung angeben. Die Richtung des Bezugspfeil ist dabei frei wählbar. Ein positiver Wert bedeutet dann, dass der Richtungssinn mit dem Bezugssinn übereinstimmt, und ein negativer Wert, dass der Richtungssinn entgegengesetzt ist.

# Beispiel

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (3, 4) to[european voltage source, V=$U_q$, i<_=$I$] (3, 6.5);
	\draw (7, 6.5) to[european resistor, label=$R_1$, ] (7, 4);
	\draw (3, 6.5) -- (7, 6.5);
	\draw (7, 4) -- (3, 4);
\end{tikzpicture}
\end{document}
```
// Abb.: Simpler Stromkreis mit eingezeichnetem Bezugssinn

Der in der Abbildung eingezeichnete Bezugssinn der [[Elektrische Spannung|Spannung]] $U_{q}$ und der [[Elektrische Stromstärke|Stromstärke]] $I$ sind rein willkürlich gewählt.

Stimmen Richtungs- und Bezugssinn überein von $U_{q}$ bzw. $I$ überein, ist der entsprechende Wert positiv.

Ist der Pfeil falsch gewählt, ist der entsprechende Wert negativ.