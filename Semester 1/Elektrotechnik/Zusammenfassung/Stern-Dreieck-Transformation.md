# Übersicht
Nicht jede Schaltung lässt sich allzu simpel berechnen. 
Um manche [[Elektrischer Stromkreis|Stromkreise]] vollständig berechnen zu können sind manchmal Umformungsschritte nötig, die die Schaltung vereinfachen.
Dafür werden alternative [[Elektrischer Widerstand|Widerstände]] berechnet.

Einer dieser Umformungsschritte lässt sich über die Stern-Dreieck bzw. Dreieck-Stern-Transformation erreichen.

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (4, 6.75) to[european resistor, l={$R_A$}] (6.5, 5);
	\draw (9, 6.75) to[european resistor, l={$R_B$}] (6.5, 5);
	\draw (6.5, 5) to[european resistor, l={$R_C$}] (6.5, 2);
	\node[circ] at (4, 6.75){};
	\node[circ] at (9, 6.75){};
	\node[circ] at (6.5, 2){};
	\node[circ] at (6.5, 5){};
	\draw[line width=3.2pt, latex-latex] (9, 5) -- (12, 5);
	\draw (14, 3.25) to[european resistor, l={$R_{AC}$}] (12.5, 6);
	\draw (12.5, 6) to[european resistor, l={$R_{AB}$}] (15.5, 6);
	\draw (15.5, 6) to[european resistor, l={$R_{BC}$}] (14, 3.25);
	\node[circ] at (12.5, 6){};
	\node[circ] at (15.5, 6){};
	\node[circ] at (14, 3.25){};
	\draw (12.5, 6) -- (11.5, 6.75) -- (12.5, 6);
	\draw (15.5, 6) -- (16.5, 6.75);
	\draw (14, 3.25) -- (14, 2);
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm] at (11.5, 7){} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (11.125, 7.375){A};
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm] at (16.5, 7){} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (16.125, 7.375){B};
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm] at (14, 1.625){} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (13.625, 2){C};
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm] at (4, 7){} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (3.625, 7.375){A};
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm] at (9, 7){} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (8.625, 7.375){B};
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm] at (6.5, 1.625){} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (6.125, 2){C};
\end{tikzpicture}
\end{document}
```

# Dreieck-Stern-Transformation
## Regel
Aus einem Dreieck wird ein Stern berechnet, indem die beiden anliegenden Widerstände multipliziert und durch die Summe aller Dreiecks-Widerstände geteilt werden:
$$
R_{A} = \frac{R_{AB} \cdot R_{AC}}{(R_{AB} + R_{BC} + R_{AC})}
$$
$$
R_{B} = \frac{R_{BA} \cdot R_{BC}}{(R_{AB} + R_{BC} + R_{AC})}
$$
$$
R_{C} = \frac{R_{CA} \cdot R_{CB}}{(R_{AB} + R_{BC} + R_{AC})}
$$
## Herleitung
Der Widerstand von $A$ nach $B$ kann im Stern simpel durch eine Reihenschaltung dargestellt werden. 
Im Dreieck handelt es sich hierbei um eine Parallelschaltung.
Beide Widerstände müssen logischer Weise gleich groß sein.
$$
I) \hspace{1 cm} R_{A} + R_{B} = \frac{R_{AB} \cdot (R_{BC} + R_{AC})}{R_{AB} + R_{BC} + R_{AC}}
$$
Dies Lässt sich nun für alle Kombinationen der Punkte $A, B$ und $C$ berechnen:
$$
II) \hspace{1 cm}R_{A} + R_{C} = \frac{R_{AC} \cdot (R_{BC} + R_{AB})}{R_{AB} + R_{BC} + R_{AC}}
$$
$$
III) \hspace{1 cm} R_{B} + R_{C} = \frac{R_{BC} \cdot (R_{AC} + R_{AB})}{R_{AB} + R_{BC} + R_{AC}}
$$
$2 \cdot R_{A}$ wird berechnet durch 
$$
I + II - III
$$
$$
2 \cdot R_{A} = \frac{R_{AB} \cdot (R_{BC} + R_{AC}) + R_{AC} \cdot (R_{BC} + R_{AB}) - R_{BC} \cdot (R_{AC} + R_{AB})}{R_{AB} + R_{BC} + R_{AC}}
$$
$$
R_{A} = \frac{\cancel{ R_{AB} R_{BC} } + R_{AB} R_{AC} \cancel{ + R_{AC} R_{BC} } + R_{AC} R_{AB} \cancel{ - R_{AC} R_{BC} } \cancel{ - R_{AB} R_{BC} }}{ 2 \cdot (R_{AB} + R_{BC} + R_{AC})}
$$
$$
R_{A} = \frac{\cancel{ 2 } \cdot R_{AB} R_{AC}}{\cancel{  2 \cdot } (R_{AB} + R_{BC} + R_{AC})}
$$
$$
R_{A} = \boxed{\frac{R_{AB} R_{AC}}{(R_{AB} + R_{BC} + R_{AC})}}
$$
Die anderen Widerstände $R_{B}$ und $R_{C}$ werden äquivalent berechnet.
# Stern-Dreieck-Transformation 
## Regel

$$
R_{AB} = R_{A} + R_{B} + \frac{R_{A} \cdot R_{B}}{R_{C}}
$$
$$
R_{AC} = R_{A} + R_{C} + \frac{R_{A} \cdot R_{C}}{R_{B}}
$$
$$
R_{BC} = R_{A} + R_{B} + \frac{R_{B} \cdot R_{C}}{R_{A}}
$$
## Herleitung
$$
R_{A} = \boxed{\frac{R_{AB} R_{AC}}{(R_{AB} + R_{BC} + R_{AC})}}
$$
$$
R_{AB} + R_{AC} + R_{BC} = \frac{R_{AB} R_{AC}}{R_{A}}
$$
$$
\implies \frac{\cancel{ R_{AB} } R_{BC}}{R_{B}} = R_{AB} + R_{AC} + R_{BC} = \frac{\cancel{ R_{AB}  }R_{AC}}{R_{A}}
$$
$$
R_{AC} = R_{BC} \cdot \frac{R_{A}}{R_{B}}
$$
Analog dazu gilt:
$$
R_{AB} = R_{BC} \cdot \frac{R_{A}}{R_{C}}
$$
all dies kann man nun in die erste Gleichung einsetzen
$$
R_{A} = \boxed{\frac{R_{AB} R_{AC}}{(R_{AB} + R_{BC} + R_{AC})}}
$$
$$
R_{A} = \frac{R_{BC} \cdot \frac{R_{A}}{R_{C}} \cdot R_{BC} \cdot \frac{R_{A}}{R_{B}}}{(R_{BC} \cdot \frac{R_{A}}{R_{C}} + R_{BC} + R_{BC} \cdot \frac{R_{A}}{R_{B}})}
$$
$$
R_{A} = \frac{R_{BC}\cancel{ ^2 } \cdot \frac{R_{A}^2}{R_{B} \cdot R_{C}}}{\cancel{ R_{BC} \cdot  }\left( 1 + \left( R_{A} \cdot \frac{R_{B} + R_{C}}{R_{B} \cdot R_{C}} \right) \right)}
$$
$$
R_{A} \cdot \left( 1 + \left( R_{A} \cdot \frac{R_{B} + R_{C}}{R_{B} \cdot R_{C}} \right) \right) = \frac{R_{BC} \cdot R_{A}^2}{R_{B} \cdot R_{C}}
$$
$$
\frac{\cancel{  R_{A} \cdot  }R_{B} \cdot R_{C} \cdot \left( 1 + \left( R_{A} \cdot \frac{R_{B} + R_{C}}{R_{B} \cdot R_{C}} \right) \right)}{R_{A}\cancel{ ^2 }} = R_{BC}
$$
$$
R_{BC} = \frac{R_{B} \cdot R_{C}}{R_{A}} + \frac{\cancel{ R_{A} \cdot R_{B} \cdot R_{C} } \cdot (R_{B} + R_{C})}{\cancel{ R_{A} \cdot R_{B} \cdot R_{C} }}
$$
$$
R_{BC} = R_{B} + R_{C} + \frac{R_{B} + R_{C}}{R_{A}}
$$
# Beispielaufgabe

![[Schaltung2.png]]

![[Schaltung2.1.png]]

Zunächst fällt auf, dass $C$ in dieser Schaltung zur Bestimmung des Widerstands vom $A$ nach $B$ zu vernachlässigen ist

Übersichtlicher gezeichnet sieht die Schaltung wie Folgt aus:
```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (5, 8) to[european resistor, l={$R_2$}] (9, 8);
	\draw (9, 8) to[european resistor, l={$R_1$}] (9, 5);
	\draw (9, 8) to[european resistor, l={$R_2$}] (13, 8);
	\draw (13, 5) to[european resistor, l={$R_2$}] (9, 5);
	\draw (9, 5) to[european resistor, l={$R_1$}] (5, 5);
	\draw (5, 8) -- (5, 5);
	\draw (13, 8) -- (13, 5);
	\draw (9, 9) -- (9, 8);
	\node[circ] at (5, 6.5){};
	\node[circ] at (13, 6.5){};
	\node[circ] at (9, 8){};
	\node[circ] at (9, 5){};
	\node[circ] at (9, 9){};
	\node[circ] at (4, 6.5){};
	\node[circ] at (14, 6.5){};
	\draw (5, 6.5) -- (4, 6.5);
	\draw (13, 6.5) -- (14, 6.5);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (3.5, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (3.25, 6.875){A};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (14.25, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (14, 6.875){B};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (8.5, 9){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (8.25, 9.375){C};
\end{tikzpicture}
\end{document}
```

Es handelt sich dabei um eine Brückenschaltung.
Bei dieser Brückenschaltung sind:
- 2 Sternschaltungen und
- 2 Dreieckschaltungen zu erkennen.
In diesem Beispiel wird das linke Dreieck umgewandelt in einen Stern
```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (7.5, 6.5) to[european resistor, l={$R_{E2}$}] (9, 8);
	\draw (7.5, 6.5) to[european resistor, l={$R_{E3}$}] (9, 5);
	\draw (9, 8) to[european resistor, l={$R_2$}] (13, 8);
	\draw (13, 5) to[european resistor, l={$R_2$}] (9, 5);
	\draw (7.5, 6.5) to[european resistor, l={$R_{E1}$}] (5, 6.5);
	\draw (13, 8) -- (13, 5);
	\draw (9, 9) -- (9, 8);
	\node[circ] at (13, 6.5){};
	\node[circ] at (9, 8){};
	\node[circ] at (9, 9){};
	\node[circ] at (4, 6.5){};
	\node[circ] at (14, 6.5){};
	\draw (5, 6.5) -- (4, 6.5);
	\draw (13, 6.5) -- (14, 6.5);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (3.5, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (3.25, 6.875){A};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (14.25, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (14, 6.875){B};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (8.5, 9){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (8.25, 9.375){C};
	\node[circ] at (7.5, 6.5){};
\end{tikzpicture}
\end{document}
```

$$
R_{E1} = \frac{R_{2} \cdot R_{1}}{2R_{1} + R_{2}}  = \frac{100\Omega \cdot 50\Omega}{200\Omega + 50\Omega} = 20\Omega
$$

$$
R_{E 2} = \frac{R_{2} \cdot R_{1}}{2R_{1} + R_{2}}  = \frac{100\Omega \cdot 50\Omega}{200\Omega + 50\Omega} = 20\Omega
$$
$$
R_{E 3} = \frac{R_{1}^2}{2R_{1} + R_{2}}  = \frac{(100\Omega)^2}{200\Omega + 50\Omega} = 40\Omega
$$
---
Nun kann der Widerstand von $A$ nach $B$ berechnet werden, da sich die aktuelle Schaltung ausschließlich aus [[Reihenschaltung|Reihen-]] und [[Parallelschaltung|Parallelschaltungen]] zusammensetzt.
$$
R_{AB} = R_{E 1} + \frac{(R_{E 2} + R_{2}) \cdot (R_{E 3} + R_{2})}{2 R_{2} + R_{E 2} + R_{E 3}} 
= 20\Omega + \frac{(20\Omega + 50\Omega) \cdot (40\Omega + 50\Omega)}{2 \cdot 50\Omega + 20\Omega +40\Omega} = \underline{\underline{59,375\Omega}}
$$
