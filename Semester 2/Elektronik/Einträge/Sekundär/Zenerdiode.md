Als Zenerdiode bezeichnet man eine stark [[dotierte Halbleiter|dotierte]] [[Diode]], die in [[Verarmungszone|Sperrrichtung]] geschaltet wird.
Die Zenerdiode wirkt durch den [[Zenerdurchbruch]] als Ventil. 

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (5, 6.5) to[empty Zener diode] (8, 6.5);
	\node[shape=rectangle, minimum width=4.215cm, minimum height=0.465cm] at (8, 7.5){} node[anchor=north west, align=left, text width=3.827cm, inner sep=6pt] at (5.5, 7.75){Zener Diode};
\end{tikzpicture}
\end{document}
```

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    xmin=-9, xmax=2,
    ymin=-7, ymax=2,
    ytick=\empty,
    xlabel={$\frac{U_D}{V}$},
    ylabel={$\frac{I_D}{mA}$}
]

\addplot[smooth,green,mark=none, domain=-8.5:0,samples=60, thick]
{-exp(-25 - 5 * x)};

\end{axis}
\end{tikzpicture}
\end{document}
```

Die Zenerdiode wird in [[Verarmungszone|Sperrrichtung]] geschaltet. 
Der Spannungsabfall an der Zenerdiode geschieht meist im Bereich eines Arbeitspunkts der Diode.

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (5, 6) to[empty Zener diode, l={Zenerdiode}] (5, 10);
	\draw (7, 10) to[european resistor, l={$R_L$}] (7, 6);
	\draw (5, 10) to[european resistor, l={$R_V$}] (2, 10);
	\draw (5, 10) -- (7, 10);
	\draw (7, 6) |- (2, 6);
	\node[circ] at (5, 10){};
	\node[circ] at (5, 6){};
	\draw[line width=1.3pt, -latex] (2, 9.5) -- (2, 6.5);
	\node[ocirc] at (2, 10){};
	\node[ocirc] at (2, 6){};
\end{tikzpicture}
\end{document}
```

Liegt eine Spannung größer der Arbeitsspannung an, kommt die Zenerdiode in den Bereich des [[Zenerdurchbruch|Zenerdurchbruchs]], und das Bauteil wird leitender, wodurch ein höherer Spannungsabfall am Vorwiderstand stattfindet. Somit bleibt der Spannungsabfall an der Zenerdiode relativ konstant.
Dadurch bleibt der Spannungsabfall am Lastwiderstand konstant. So können auch Wechselströme in ihren Spannungsamplituden abgeflacht werden.