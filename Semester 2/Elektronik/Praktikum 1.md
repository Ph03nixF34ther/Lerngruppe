# 1 Aufgabe

## Teilaufgabe a, b & d

### Aufgabenstellung

1. Skizieren Sie die U/I-Kennlinie in Durchlass- und Sperrrichtung einer Halbleiterdiode
2. Kennzeichnen Sie in ihrem Diagramm die Flussspannung $U_F$ sowie die Durchbruchspannung $U_{BR}$
3. Beim Betrieb von Leuchtdioden (LED) ist zu beachten, dass der maximale Dauerflussstrom $I_{F,max}$ bzw. die maximale Dauerverlustleistung $P_{V,max}$ nicht überschritten wird. Dies hätte die Zerstörung des Bauelements zur Folge. Um dies zu vermeiden, ist die Wahl eines geeigneten Vorwiderstands unter Berücksichtigung eines Arbeitspunktes $A(U_{D,A};I_{D,A})$ erforderlich. Informieren Sie sich hierzu in der Literatur, z.B. [LS21], S. 45ff. Zeichnen Sie in die U/I-Kennlinie (vgl. 1) eine Arbeitsgerade ein und geben die Berechnungsgrundlagen für den Vorwiderstand an.

### Lösung

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    xmin=-11, xmax=5,
    xtick={.7},
    ymin=-2, ymax=5,
    ytick=\empty,
    xlabel={$\frac{U_D}{V}$},
    ylabel={$\frac{I_D}{mA}$}
]

\addplot[smooth,green,mark=none, domain=-11:-9,samples=20, thick]
{-20*exp(-5*(x+11))-.379999};

\addplot[smooth,green,mark=none, domain=-9:2,samples=60, thick]
{(19/50)*(exp((10*x)/7)-1)};

\addplot[ultra thick, dotted] coordinates {(.7,0) (.7,{(19/50)*(exp((10*.7)/7)-1)})} node[right, midway] {$U_F$};

\addplot[ultra thick, dotted] coordinates {(-10.1,0) (-10.1,{-20*exp(-5*(-10.1+11))-.379999})} node[left, midway] {$U_B$};

\addplot[ultra thick, blue, dotted] coordinates {(0,4.5) (3,0)} node[right, pos=0.8] {Lastgerade};

\addplot[ultra thick, blue, dotted] coordinates {(.5,3.75) (.5,2.25) (1.5,2.25)} node[right, pos=0.3] {$R$};

\addplot[thick] coordinates {(0,4.5)} node[left, outer sep=2pt] {$\frac{U_{Bat}}{R}$};
\addplot[thick] coordinates {(3,0)} node[below, outer sep=2pt] {$U_{Bat}$};

\addplot[thick] coordinates {(1.395,2.4076)} node[right, outer sep=2pt] {$A_P$};

\addplot[ultra thick, green, dotted] coordinates {(.8,.812) (1.8,.812) (1.8,4.592)} node[above, pos=0.1] {$\Delta U$} node[right, pos=.8] {$\Delta I$};

\end{axis}
\end{tikzpicture}
\end{document}
```

---

## Teilaufgabe c

### Aufgabenstellung

Wie kann der Bahnwiderstand anhand der Kennlinie ermittelt werden

### Lösung

Spannungsteiler:

$$\begin{array}{l}
U_{Bat} = U_D + U_R \\
I_D = I_R \\
U_D = U_{Bat} - U_R \\
U_D = U_{Bat} - R \cdot I_R \\
\boxed{U_D = U_{Bat} - R \cdot I_D}
\end{array}$$

Zusatz:

$$\begin{array}{l}
G_{Bahn}(U_D - 0.7 \text{ V}) = (U_{Bat} - U_D) \cdot G_R \\
(U_{Bat} + G_R) \cdot U_D = U_{Bat} + 0.7 \text{ V} \\
U_D = \boxed{\dfrac{U_{Bat} + 0.7 \text{ V}}{G_{Bahn} + G_R}}
\end{array}$$

---

# 2 Aufgabe

## Aufgabenstellung

Skizzieren Sie den qualitativen Verlauf der gleichgerichteten Spannung einer Einweggleichrichterschaltung ohne Kondensator. Zeichnen Sie den Mittelwert $\overline{U}$ der gleichgerichteten Spannung ein

## Lösung

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[]
\begin{axis}[
	width=\textwidth,
    axis lines=center,
    xmin=0, xmax=3,
    ymin=-2, ymax=2,
	xlabel={$t$},
	xtick={0,...,2},
	xticklabels={0, 1, 2},
	ylabel={$U_R$},
	ytick=\empty,
	trig format plots = rad
]
\addplot[mark=none, domain=0:3,samples=80, thick]
{max(sin(5*x)-.3, 0)};

\addplot[blue,dotted,mark=none, domain=0:3,samples=80, thick]
{min(sin(5*x)-.3, 0)};

\addplot[red,dotted,mark=none, domain=0:3,samples=4, thick]
{.5} node[pos=.92,below] {$\overline{U}$};

\addplot[blue,dotted,mark=none, domain=0:3,samples=4, thick]
{-.3} node[pos=.9,below] {$-0.7$ V};

\end{axis}
\end{tikzpicture}
\end{document}
```

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (2, 8) to[sinusoidal current source] (2, 5);
	\draw (2, 5) to[empty diode] (5, 5);
	\draw (5, 5) to[european resistor] (5, 8);
	\draw (5, 8) -- (2, 8);
	\node[shape=rectangle, minimum width=0.75cm, minimum height=0.75cm] at (1.375, 7.375){} node[anchor=north west, align=left, text width=0.397cm, inner sep=5pt] at (1, 7.75){\textcolor{rgb,255:red,255;green,0;blue,0}{\Huge +}};
	\node[shape=rectangle, minimum width=0.75cm, minimum height=0.75cm] at (1.625, 5.625){} node[anchor=north west, align=left, text width=0.397cm, inner sep=5pt] at (1.25, 6){\textcolor{rgb,255:red,255;green,0;blue,0}{\Huge -}};
	\node[shape=rectangle, minimum width=0.75cm, minimum height=0.75cm] at (0.625, 5.875){} node[anchor=north west, align=left, text width=0.397cm, inner sep=5pt] at (0.25, 6.25){\textcolor{rgb,255:red,4;green,0;blue,255}{\Huge +}};
	\node[shape=rectangle, minimum width=0.75cm, minimum height=0.75cm] at (0.75, 7.125){} node[anchor=north west, align=left, text width=0.397cm, inner sep=5pt] at (0.375, 7.5){\textcolor{rgb,255:red,30;green,0;blue,255}{\Huge -}};
\end{tikzpicture}
\end{document}
```

---

# 3 Aufgabe

## Aufgabenstellung

Was versteht man unter dem Begriff Spannungsrippel

## Lösung

Eine Rippelspannung ist eine Wechselspannung beliebiger Frequenz und Kurvenform, der eine Gleichspannung überlagert ist

---

# 4 Aufgabe

## Aufgabenstellung

Entwerfen Sie die Schaltung für eine Brückengleichrichterschaltung B2U mit einem Lastwiderstand $R_1 = 1 \text{ kOhm}$.

## Lösung

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (1.039, 5.003) to[sinusoidal voltage source] (1.039, 3.003);
	\draw (5.039, 2.003) to[empty diode] (3.039, 4.003);
	\draw (5.039, 6.003) to[empty diode] (3.039, 4.003);
	\draw (7.039, 4.003) to[empty diode] (5.039, 6.003);
	\draw (7.039, 4.003) to[empty diode] (5.039, 2.003);
	\draw (8.039, 1.003) to[european resistor] (8.039, 4.003);
	\draw (7.039, 4.003) -- (8.039, 4.003);
	\draw (8.039, 1.003) |- (3.039, 1.003) -- (3.039, 4.003);
	\draw (1.039, 3.003) -| (1.039, 2.003) -- (5.039, 2.003);
	\draw (1.039, 5.003) -| (1.039, 6.003) -- (5.039, 6.003);
	\node[circ] at (3.039, 4.003){};
	\node[circ] at (5.039, 2.003){};
	\node[circ] at (5.039, 6.003){};
	\node[circ] at (7.039, 4.003){};
	\node[plain crossing] at (0.5, 4.61){};
	\node[tground] at (0.5, 3.5){};
	\node[shape=rectangle, minimum width=0.965cm, minimum height=0.465cm] at (0.539, 1.753){} node[anchor=center, align=center, text width=0.577cm, inner sep=6pt] at (0.539, 1.753){$0$ V};
	\node[shape=rectangle, minimum width=1.465cm, minimum height=0.465cm] at (0.5, 6.25){} node[anchor=center, align=center, text width=1.077cm, inner sep=6pt] at (0.5, 6.25){$+12$ V};
	\draw[-latex] (1, 6.25) -- (2.5, 6.25);
	\draw[-latex] (3, 0.75) -- (5, 0.75);
	\draw[-latex] (8.5, 1.5) -- (8.5, 2.5) -- (8.5, 3.5);
	\draw[-latex] (8, 4.25) -- (7, 4.25);
	\draw[-latex] (7, 3) -- (6, 2);
	\draw[-latex] (5, 5) -- (4, 4);
	\draw[-latex] (2.75, 3.5) -- (2.75, 2.5);
	\draw[-latex] (4.5, 1.75) -- (3.5, 1.75);
	\draw[-latex] (6.75, 5.25) -- (6.25, 5.75);
	\node[shape=rectangle, minimum width=1.465cm, minimum height=0.465cm] at (5.5, 6.25){} node[anchor=center, align=center, text width=1.077cm, inner sep=6pt] at (5.5, 6.25){$+12$ V};
	\node[shape=rectangle, minimum width=1.465cm, minimum height=0.465cm] at (9.25, 2.5){} node[anchor=center, align=center, text width=1.077cm, inner sep=6pt] at (9.25, 2.5){$+12$ V};
	\node[shape=rectangle, minimum width=0.965cm, minimum height=0.465cm] at (7.25, 4.5){} node[anchor=center, align=center, text width=0.577cm, inner sep=6pt] at (7.25, 4.5){$0$ V};
\end{tikzpicture}
\end{document}
```

---

# 5 Aufgabe

## Aufgabenstellung

In der Versuchsdurchführung soll die Schaltung in Abbildung 5 mit dem Vorwiderstand $R_V$ und der Quellenspannung $U_q = 10 \text{ V}$ zur Anwendung kommen

## Teilaufgabe a

### Aufgabenstellung

Berechnen Sie den maximalen Strom $I_z$ den die Z-Diode ZPD6,2 haben darf! Verwenden Sie dabei die Angabe zu $P_{tot}$ aus Abbildung 7

### Lösung

$$\begin{array}{ll}
P_{tot} = 0.5 \text{ W} & U_q = 10 \text{ V} \\
P = U \cdot I \\
I = \dfrac{p}{U} = \dfrac{0.5 \text{ W}}{10 \text{ V}} \\
I = \underline{50 \text{ mA}}
\end{array}$$

---

## Teilaufgabe b

### Aufgabenstellung

Zeichne Sie den maximalen Strom $I_{z\_max}$ und minimalen Strom $I_{z\_min} = 0.1 \cdot I_{z\_max}$ in das Diagramm von Abbildung 9 ein

### Lösung

$$\begin{array}{ll}
I_{z\_max} = 50 \text{ mA} & I_{z\_min} = 5 \text{ mA}
\end{array}$$

---

## Teilaufgabe c

### Aufgabenstellung

Dimensionieren Sie den Vorwiderstand $R_V$ so, dass sich ein Strom $I_{z\_AP} = 0.5 \cdot I_{z\_max}$ einstellt! Die Last $R_L$ soll hier nicht betrachtet werden, so dass gilt: $I_{RV} = I_z$. Führen Sie die Berechnung ausführlich aus

### Lösung

$$\begin{array}{l}
\begin{array}{lll} U_D = 6.2 \text{ V} & U_q = 10 \text{ V} & I_{AP} = 25 \text{ mA}\end{array} \\ \\
\begin{array}{ll}
U_R = U_q - V_D = 10 \text{ V} - 2.6 \text{ V} \\
U_R = 3.8 \text{ V} \\ \\
R = \dfrac{U_R}{I_{AP}} = \dfrac{3.8 \text{ V}}{2.5 \text{ mA}} \\
R = \underline{112 \ \ohm}
\end{array}
\end{array}$$

---

# 6 Aufgabe

## Aufgabenstellung

Ergänzen Sie die Wertetabelle (Tabelle 2) zu gegebener Schaltung (Abbildung 1). Tragen Sie eine logische „0“ ein, wenn der resultierende Spannungswert am Kontakt A kleiner 2,5V, und eine logische „1“, wenn der resultierende Spannungswert am Kontakt A größer 2,5V ist. Um welche logische Operation handelt es sich bei dieser Schaltung?

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\node[ocirc](N1) at (1, 3.01){} node[anchor=east] at (N1.west){$E_1$};
	\node[ocirc](N2) at (1, 1.01){} node[anchor=east] at (N2.west){$E_2$};
	\node[circ] at (4, 3.01){};
	\node[ocirc](N3) at (5, 3.01){} node[anchor=west] at (N3.east){$A$};
	\node[ocirc](N4) at (4, 6.01){} node[anchor=west] at (N4.east){$+ 5$ V};
	\draw (4, 6.01) to[european resistor, l={$R_V$}] (4, 3.01);
	\draw (5, 3.01) -- (4, 3.01);
	\draw (3, 3.01) to[empty diode, l_={$D_1$}] (1, 3.01);
	\draw (3, 1.01) to[empty diode, l_={$D_2$}] (1, 1.01);
	\draw (4, 3.01) -- (3, 3.01);
	\draw (4, 3.01) -| (4, 1.01) -- (3, 1.01);
\end{tikzpicture}
\end{document}
```

## Lösung

| $E_1$ | $E_2$ | $A$ |
| ----- | ----- | --- |
| 0 V   | 0 V   | 0 V |
| 0 V   | 5 V   | 0 V |
| 5 V   | 0 V   | 0 V |
| 5 V   | 5 V   | 5 V |

Es handelt sich um ein AND-Gatter bzw. eine AND-Operation