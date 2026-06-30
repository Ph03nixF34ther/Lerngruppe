# Erklärung

Die Arbeitsgerade wird genutzt, wenn der Arbeitspunkt eines linearen Bauteils (wie ein [[Elektrischer Widerstand|Widerstand]]) in Reihe mit einem nichtlinearen Bauteil (wie einer [[Diode]] oder einem [[Transistor]]) mit einer gegebenen Kennlinie geschaltet wurde.

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (8.879, 6.879) to[european resistor, l={$R$}] (5.879, 6.879);
	\draw (5.879, 6.879) to[empty diode, l={$D$}] (3.879, 6.879);
	\draw[line width=1.2pt, -latex] (8.879, 7.879) -- (3.879, 7.879);
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm] at (6.25, 8.25){} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (5.875, 8.625){$U_{Bat}$};
\end{tikzpicture}
\end{document}
```

# Herleitung

Derjenige Strom $I$, der beide Bauteile durchströmt kann nur schwer berechnet werden, da der Strom einen Spannungsabfall an der Diode ($U_{D}$) und am Widerstand ($U_{R}$) verursacht. Die Spannungsabfälle an beiden Bauteilen müssen aber in Summe die Batteriespannung $U_{Bat}$ ergeben.

$$
U_{Bat} = U_{D} + U_{R}
$$

Der Widerstandsanteil kann direkt über das [[ohm'sches Gesetz|ohm'sche Gesetz]] berechnen $U_{R} = R \cdot I$. 

$$
U_{Bat} = U_{D} + R \cdot I
$$

Nun man jetzt die berechenbaren Anteile vom nichtlinearen Anteil $U_{D}$.

$$
U_{D} = U_{Bat} + R \cdot I
$$

Jetzt hat man eine Gerade (die sogenannte Arbeitsgerade), die den Spannungsabfall an der Diode abhängig vom Strom durch beide Bauteile durchfließt darstellt, und zwar nicht über eine Approximation der U/I-Kennlinie, sondern über den Rest, der nicht am linearen Widerstand abgefallen ist. 
Diese Gerade muss sich mit der U/I-Kennlinie des nichtlinearen Bauteils schneiden. Dieser Schnittpunkt ist der **Arbeitspunkt** der Schaltung und gibt zum einen den Spannungsabfall an der Diode, sowie den Strom, der beide Bauteile durchfließt an.

# Rezept

> [!Info] Anleitung
> 
>1. Batteriespannung (über den Schaltungsteil abfallende Spannung) in Erfahrung bringen
>2. Den Maximalstrom berechnen
>
>$I_{MAX} = U_{Bat} \cdot R$
>
>3. Die beiden Werte an der jeweiligen Achse antragen.
>4. Die Arbeitsgerade anzeichnen (beide Punkte verbinden)
>5. Den Schnittpunkt der Kennlinie und der Gerade ablesen

# Beispiel

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (8.879, 6.879) to[european resistor, l={$R$}] (5.879, 6.879);
	\draw (5.879, 6.879) to[empty diode, l={$D$}] (3.879, 6.879);
	\draw[line width=1.2pt, -latex] (8.879, 7.879) -- (3.879, 7.879);
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm] at (6.25, 8.25){} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (5.875, 8.625){$U_{Bat}$};
\end{tikzpicture}
\end{document}
```

Über beide Bauteile wird eine Batteriespannung von $6\ V$ angelegt. Der Widerstand beträgt $6\ \Omega$.

Nachdem wir wissen, dass die Batteriespannung $U_{Bat} = 6\ V$ sind, berechnen wir jetzt den Maximalstrom:

$$
I_{max} = \frac{U_{Bat}}{R} = \frac{6\ V}{6\ \Omega} = 1\ A
$$

Das bedeutet, an der x-Achse der Kennlinie werden die $6\ V$ und an der y-Achse der $1\ A$ angetragen. So kann die **Arbeitsgerade** gezeichnet werden.

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    xmin=0, xmax=7,
    xtick={.7, 6},
    ymin=-0, ymax=1.5,
    ytick={1},
    xlabel={$\frac{U_D}{V}$},
    ylabel={$\frac{I_D}{mA}$}
]

\addplot[smooth,green,mark=none, domain=0:0.82,samples=60, thick]
{0.0000001 * (exp(x / 0.05) - 1)} node[right, midway] {Kennlinie};

\addplot[smooth,red,mark=none, domain=0:6,samples=2, thick]
{- x / 6 + 1} node[right, midway] {Arbeitsgerade};

\addplot[thick] coordinates {(0.8,0.87)} node[right, outer sep=2pt] {$A_P$};

\end{axis}
\end{tikzpicture}
\end{document}
```

Nun kann man ablesen, dass:
$$
I_{D} \simeq 0,87\ A
$$

Da wir leider schwer die Spannung $U_{D}$ ablesen können, können wir sie auch berechnen:
$$
U_{D} = U_{Bat} - R \cdot I = 6\ V - 6\ \Omega \cdot 0,87\ A = 0,78\ V
$$

Die restliche Spannung muss sonst am Widerstand abfallen:

$$
U_{R} = U_{Bat} - U_{D} = 5,24\ V
$$