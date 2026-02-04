# Übersicht
Als Maschenstromverfahren bezeichnet man ein in der Elektrotechnik verwendetes Verfahren zur Netzwerkanalyse. Mit dieser Methode lassen sich die Zweigströme bestimmen. Denn jedes elektrische Netzwerk kann auf diese Weise durch ein lineares Gleichungssystem (im stationären Zustand mit linearen Bauelementen) oder durch ein Differentialgleichungssystem (bei in-stationären Vorgängen mit Kondensatoren und Induktivitäten) beschrieben und berechnet werden. Vorteilhaft für eine Berechnung mit dem Maschenstromverfahren ist ein Netzwerk, welches durch einen planaren Graphen dargestellt werden kann, also keine Leitungskreuzungen besitzt. Die Berechnung von nicht-planaren Netzwerken ist ebenso möglich, aber für die Handrechnung weniger geeignet. Alternativ kann das Knotenpotenzialverfahren verwendet werden. 
```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\node[circ] at (9, 6){};
	\node[circ] at (9, 8){};
	\node[circ] at (9, 4){};
	\node[circ] at (6, 6){};
	\draw (6, 8) to[european resistor, l={$R_1$}, i>_=$I_1$] (9, 8);
	\draw (9, 6) to[european resistor, l={$R_2$}, i>_=$I_2$] (9, 8);
	\draw (9, 4) to[european resistor, l={$R_4$}, i>_=$I_4$] (9, 6);
	\draw (6, 8) to[european voltage source, v={$U_1$}] (6, 6);
	\draw (6, 6) to[european resistor, l={$R_3$}, i>_=$I_3$] (9, 6);
	\draw (6, 4) to[european resistor, l={$R_5$}, i>_=$I_5$] (9, 4);
	\draw (6, 6) to[european voltage source, v={$U_2$}] (6, 4);
	\draw (11, 8) -- (9, 8);
	\draw (11, 4) -- (9, 4);
	\draw (11, 8) to[european current source, l={$I_q$}, i>_=$I_q$] (11, 4);
\end{tikzpicture}
\end{document}
```

# Das Verfahren
- Das Netzwerk vereinfachen, d. h. Parallelschaltungen vereinen.
- Ideale [[Stromquelle]] als Sehne wählen, das Gleichungssystem vereinfacht sich dadurch.
- Nicht-ideale [[Stromquelle]] in äquivalente [[Spannungsquelle|Spannungsquellen]] umwandeln

Im gegebenen Beispiel haben wir eine Ideale Stromquelle. Dieser Zweig soll als Maschenstrom gewählt werden.
Das wird in [[#1. Identifikation der Maschenströme]] verwirklicht 
## 1. Identifikation der Maschenströme
- Dies kann über das aufspannen eines Baumes geschehen.
- Die Schaltung wird zu diesem Zweck stark vereinfacht.
- Daraufhin wird ein Baum gesucht, der alle Knotenpunkte verbindet
- Die Zweige in diesem Baum sind die Zweigströme. Alle anderen sind die gesuchten Maschenströme

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\node[circ] at (9, 7){};
	\node[circ] at (9, 5){};
	\node[circ] at (9, 9){};
	\draw (6, 7) -- (6, 9) -- (10.5, 9) -- (11, 9) -- (11, 5) -- (6, 5) -- (6, 7) -- (9, 7) -- (9, 9) -- (9, 5);
	\node[circ] at (6, 7){};
	\path[draw={rgb,255:red,191;green,85;blue,103}, line width=1pt] (9, 7) -- (6, 7) -- (6, 5) -- (11, 5) -- (11, 9) -- (9, 9);
\end{tikzpicture}

\begin{tikzpicture}
	% Paths, nodes and wires:
	\node[circ] at (9, 7){};
	\node[circ] at (9, 5){};
	\node[circ] at (9, 9){};
	\draw (6, 7) -- (6, 9) -- (10.5, 9) -- (11, 9) -- (11, 5) -- (6, 5) -- (6, 7) -- (9, 7) -- (9, 9) -- (9, 5);
	\node[circ] at (6, 7){};
	\path[draw={rgb,255:red,191;green,85;blue,103}, line width=1pt] (6, 7) -- (9, 7) -- (9, 9) -- (9, 5) -- (9, 7) -- (6, 7);
\end{tikzpicture}
\end{document}
```

$\implies$ Im Beispielfall bietet sich besonders der 2. eingezeichnete Baum an, da sich dann die Ideale Stromquelle auf einem Maschenstromzweig befindet.
Da der von der idealen Stromquelle induzierte Strom bereits bekannt ist, ist dieser Maschenstrom bereits bekannt
## 2. Aufstellung des Gleichungssystems
Der Maschenumlauf richtet sich nach dem [[Bezugssinn und Pfeilsysteme|Bezugspfeil]] des Maschenstroms.

Die Widerstandsmatrix besteht 
- _**Auf der Hauptdiagonalen:**_ aus der summe der Widerstände in der Masche
- **_Rest:_** Alle Widerstände zwischen der $i$ten und $j$ten Masche werden mit positivem Vorzeichen angesetzt, wenn beide
## 3. Lösen des Gleichungssystems - Berechnung der Maschenströme
## 4. Berechnung der Zweigströme
# Herleitung des Verfahrens