# Übersicht
Die Kirchhoff'schen Regeln werden im Rahmen der elektrischen Schaltungstechnik bei der Netzwerkanalyse verwendet. Sie unterteilen sich in zwei grundlegende und zusammenhängende Sätze, den Knotenpunktsatz und den Maschensatz, und beschreiben jeweils den Zusammenhang zwischen mehreren elektrischen Strömen und zwischen mehreren elektrischen Spannungen in elektrischen Netzwerken. Sie wurden 1845 von Gustav Robert Kirchhoff formuliert, nachdem sie bereits 1833 von Carl Friedrich Gauß entdeckt worden waren.

# 1. Kirchhoff'sches Gesetz: Die Knotenregel
```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\node[circ] at (7, 6){};
	\draw (5, 6) -- (7, 6) -- (7, 4.5);
	\draw (7, 6) -- (9, 6);
	\draw[line width=0.8pt, -latex] (5.75, 6) -- (6.5, 6);
	\draw[line width=0.8pt, -latex] (8.25, 6) -- (7.5, 6);
	\draw[line width=0.8pt, -latex] (7, 5.75) -| (7, 5);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (6, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (5.75, 6.75){$I_1$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (8, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (7.75, 6.75){$I_2$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (7.25, 5.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (7, 5.75){$I_3$};
\end{tikzpicture}
\end{document}
```
// Abb. Beispiel zur Veranschaulichung der Knotenregel 

> Das erste Kirchhoff'sche Gesetz besagt,dass die Summe aller durch einen Knoten fließenden [[Elektrische Stromstärke|Ströme]] $0$ ergeben.

$$
\sum I_{k} = 0
$$
Dabei sind:
- Ströme, die *in* den Knoten fließen mit positivem Vorzeichen anzusetzen und
- Ströme, die *aus* dem Knoten fließen mit negativem Vorzeichen anzusetzen.

Im gegebenen Beispiel bedeutet das:
$$
I_{1} + I_{2} - I_{3} = 0
$$
$$
\implies I_{1} + I_{2} = I_{3}
$$
# 2. Kirchhoff'sches Gesetz: Die Maschenregel
```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (-1, 5) to[european voltage source, v>=$U_q$] (-1, 2);
	\draw (-1, 5) to[european resistor, l={$R_1$}, v_=$U_{R1}$] (2, 5);
	\draw (2, 5) to[european resistor, l={$R_3$}, v=$U_{R3}$] (2, 2);
	\draw (2, 5) to[european resistor, l={$R_2$}, v_>=$U_{R2}$] (5, 5);
	\draw (5, 5) to[european resistor, l={$R_4$}, v=$U_{R4}$] (5, 2);
	\draw (5, 2) -- (-1, 2);
	\node[circ] at (2, 5){};
	\node[circ] at (2, 2){};

	\draw[line width=1pt, dash pattern={on 4pt off 1pt on 1pt off 1pt}, -latex] (0, 4) -| (0, 3) -- (1, 3) -| (1, 4) -- (0.25, 4);
	\draw[line width=1pt, dash pattern={on 4pt off 1pt on 1pt off 1pt}, -latex] (3, 4) -| (3, 3) -- (4, 3) -| (4, 4) -- (3.25, 4);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (0.25, 3.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (0, 3.75){$M_I$};
	\node[shape=rectangle, minimum width=0.436cm, minimum height=0.465cm] at (3.265, 3.5){} node[anchor=north west, align=left, text width=0.048cm, inner sep=6pt] at (3.029, 3.75){$M_{II}$};
\end{tikzpicture}
\end{document}
```
> Das zweite Kirchhoff'sche Gesetz besagt, dass die Summe aller durch einer Massche auftretenden Spannungen zusammen $0$ ergeben.

$$
\sum U_{k} = 0
$$

Dabei ist zu beachten, dass 
- alle Spannungen, die mit dem Maschenumlauf gehen, mit positivem und
- alle Spannungen, die gegen den Maschenumlauf gehen mit negativem
 Vorzeichen angesetzt werden.
 
Im gegebenen Beispiel bedeutet das:
$$
U_{q} - U_{R_{3}} - U_{R_{1}} = 0
$$
$$
U_{R_{3}} - U_{R_{4}} - U_{R_{2}} = 0
$$
Umgestellt kann abgelesen werden:
$$
U_{q} = U_{R_{3}} + U_{R_{1}} 
$$
$$
U_{R_{3}} = U_{R_{4}} + U_{R_{2}}
$$
