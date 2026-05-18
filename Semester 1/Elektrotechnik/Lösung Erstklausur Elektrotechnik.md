# Aufgabe 1: Elektroauto

Ein Elektrofahrzeug besitzt einen Akku mit einer Nutzbaren Kapazität von:
$$
100 \text{ kWh}
$$

Zählerstand eines Hausstromzählers vor und nach dem Laden eines Elektroautos:  

$$z_{vor} = 34567 \text{ kWh} \qquad z_{nach} = 34683 \text{ kWh}$$

Der Ladevorgang dauerte insgesamt:
$$
t = 10,55 \text{ h}
$$

### Teilaufgabe A)

Aufgabe: Berechne die aus dem Netz entnommene elektrische Energie in kWh

Lösung:
$$
E = \Delta z = z_{nach} - z_{vor} = 34567 \text{ kWh} - 34683 \text{ kWh} = 
116 \text{ kWh}
$$

### Teilaufgabe B)

Aufgabe: Berechne den Wirkungsgrad des Ladevorgangs:

Lösung:
$$
\eta = \frac{E_{ab}}{E_{zu}} = \frac{100 \text{kWh}}{116\text{kWh}} = 0,862 = 86,2\%
$$

### Teilaufgabe C)

Aufgabe: Bestimmen sie die beim Laden verlorengegangene Energie

Lösung:
$$
\eta = E_{zu} - E_{ab} = 116 \text{ kWh} - 100 \text{ kWh} = 16 \text{ kWh}
$$

### Teilaufgabe D)

Während des Ladevorgangs erwärmt sich das Ladekabel.
Bei $20 ° \text{C}$ besaß das Kabel einen Leitwiderstand von
$$R_{20} = 0,15 \Omega$$
Für das im Kabel verwendete Kupfer gelte ein Temperaturkoeffizient von 
$$\alpha = 0,00393 \text{ K}^{-1}$$
Der Ladestrom betrage
$$
I = 16 \text{ A}
$$

Aufgabe - Berechnen Sie:
1. Den Leiterwiderstand des Kabels bei $50°\text{C}$ 
2. Die Verlustleistung in Watt bei diesem Ladestrom

Lösung:
$$
R_{v} = R_{20} \cdot (1 + \alpha \cdot \Delta T) = 0,15 \Omega \cdot (1 + 0,00393 \text{ K}^{-1}\cdot 30\text{ K}) \simeq 0,168 \Omega
$$

$$
U_{\text{Kabel}} = R_{\text{Kabel}}\cdot I = 0,168\Omega\cdot 16 \text{ A} = \underline{ 2,68 \text{ V} }
$$
$$
P_{\text{Kabel}} = P_{\text{Verlust}} = U_{\text{Kabel}}\cdot I = 2,68\text{ V}\cdot 16 \text{ A} = \underline{ 42,93 \text{ W} }
$$

# Aufgabe 2: Berechnen von Ersatzwiderständen

### Teilaufgabe A)

$R_{1} = 100\Omega$ und $R_{2} = 50\Omega$

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\node[ocirc] at (3.5, 8){};
	\node[ocirc] at (6.5, 8){};
	\draw (3.5, 9) to[european resistor, l={$R_2$}] (3.5, 12);
	\draw (3.5, 9) to[european resistor, l={$R_1$}] (1, 9);
	\draw (6.5, 9) to[european resistor, l={$R_2$}] (6.5, 12);
	\draw (9, 9) to[european resistor, l={$R_2$}] (9, 12);
	\draw (9, 9) to[european resistor, l={$R_1$}] (6.5, 9);
	\draw (6.5, 12) to[european resistor, l={$R_1$}] (9, 12);
	\draw (1, 12) to[european resistor, l={$R_1$}] (3.5, 12);
	\draw (3.5, 12) to[european resistor, l={$R_1$}] (6.5, 12);
	\draw (1, 12) to[short] (1, 9);
	\draw (3.5, 9) to[short] (3.5, 8);
	\draw (6.5, 9) to[short] (6.5, 8);
\end{tikzpicture}
\end{document}
```


$$
R_{\text{Gesamt}} = R_{112} + R_{1} + R_{1212} = 40 \Omega + 100 \Omega + 41,67 \Omega = 181,67 \Omega
$$
$$
R_{112} = \frac{(100\Omega + 100\Omega)\cdot 50\Omega}{100\Omega + 100\Omega + 50\Omega} = 40 \Omega
$$
$$
R_{1212} = \frac{250 \Omega \cdot 50 \Omega}{300\Omega} = 41,67 \Omega
$$

$$
R_{\text{Gesamt}} = R_{112} + R_{1} + R_{1212} = 40 \Omega + 100 \Omega + 41,67 \Omega = 181,67 \Omega
$$

### Teilaufgabe B)

```tikz
\usepackage{circuitikz}
\begin{document}\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\node[ocirc] at (3, 8){};
	\node[ocirc] at (3, 5){};
	\draw (4, 8) to[european resistor, l={$R_1$}] (7, 8);
	\draw (7, 8) to[european resistor, l={$R_1$}] (10, 8);
	\draw (10, 5) to[european resistor, l_={$R_2$}] (10, 8);
	\draw (7, 5) to[european resistor, l={$R_2$}] (7, 8);
	\draw (10, 5) to[european resistor, l={$R_1$}] (13, 5);
	\draw (4, 10) to[european resistor, l={$R_2$}] (10, 10);
	\draw (13, 5) to[european resistor, l={$R_2$}] (13, 8);
	\draw (4, 10) to[short] (4, 8);
	\draw (4, 8) to[short] (3, 8);
	\draw (10, 5) to[short] (3, 5);
	\draw (10, 10) to[short] (10, 8);
	\draw (13, 8) to[short] (10, 8);
	\node[circ] at (7, 8){};
	\node[circ] at (10, 8){};
	\node[circ] at (7, 5){};
	\node[circ] at (10, 5){};
	\node[circ] at (4, 8){};
	\node[shape=rectangle, draw, line width=1pt, dash pattern={on 1pt off 2pt}, minimum width=3.965cm, minimum height=3.965cm](N1) at (11.5, 6.5){} node[anchor=center] at (N1.text){$R_{122}$};
\end{tikzpicture}
\end{document}
```

Zunächst wird $R_{122}$ zusammengefasst:
$$
R_{122} = \frac{(R_{1} + R_{2})\cdot R_{2}}{R_{1} + R_{2} + R_{2}} = \frac{150\Omega\cdot 50\Omega}{200\Omega} = 37,5 \Omega
$$
Danach hat man eine etwas verformte Brückenschaltung vorliegen.
Hier kann man beispielsweise eine [[Stern-Dreieck-Transformation#Dreieck-Stern-Transformation|Dreieck-Stern-Transformation]] durchführen

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\node[ocirc] at (3, 8){};
	\node[ocirc] at (3, 5){};
	\draw (4, 8) to[european resistor, l={$R_1$}] (7, 8);
	\draw (7, 8) to[european resistor, l={$R_1$}] (10, 8);
	\draw (10, 5) to[european resistor, l_={$R_{122}$}] (10, 8);
	\draw (7, 5) to[european resistor, l={$R_2$}] (7, 8);
	\draw (4, 10) to[european resistor, l={$R_2$}] (10, 10);
	\draw (4, 10) to[short] (4, 8);
	\draw (4, 8) to[short] (3, 8);
	\draw (10, 5) to[short] (3, 5);
	\draw (10, 10) to[short] (10, 8);
	\node[circ] at (7, 8){};
	\node[circ] at (10, 8){};
	\node[circ] at (7, 5){};
	\node[circ] at (4, 8){};
	\node[shape=rectangle, draw, line width=1pt, dash pattern={on 1pt off 2pt}, minimum width=6.465cm, minimum height=3.215cm] at (7, 9.125){};
\end{tikzpicture}
\end{document}
```

Um dieses Dreieck in einen Stern umzuwandeln bedarf es der Ersatzwiderstände $R_{12}$ und $R_{11}$.
$$
R_{11} = \frac{100\Omega\cdot 100\Omega}{250\Omega} = 40 \Omega
$$
$$
R_{12} = \frac{50\Omega \cdot 100\Omega}{250\Omega} = 20\Omega
$$


```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\node[ocirc] at (3, 9){};
	\node[ocirc] at (3, 5){};
	\draw (4, 9) to[european resistor, l={$R_{12}$}] (7, 9);
	\draw (7, 7) to[european resistor, l={$R_{11}$}] (7, 9);
	\draw (10, 5) to[european resistor, l_={$R_{122}$}] (10, 9);
	\draw (7, 5) to[european resistor, l={$R_2$}] (7, 7);
	\draw (7, 9) to[european resistor, l={$R_{12}$}] (10, 9);
	\draw (4, 9) to[short] (3, 9);
	\draw (10, 5) to[short] (3, 5);
	\node[circ] at (7, 5){};
	\node[circ] at (7, 9){};
\end{tikzpicture}
\end{document}
```

$$
R_{\text{Gesamt}} = R_{12} + \frac{(R_{12} + R_{122}) \cdot (R_{11} + R_{2})}{R_{12} + R_{122} + R_{11} + R_{2}} = 20\Omega + \frac{(20\Omega + 37,5\Omega) \cdot (40\Omega + 100\Omega)}{20\Omega + 37,5\Omega + 40\Omega + 100\Omega} = 60,76\Omega
$$

# Aufgabe 3: Netzwerkberechnung

### Teilaufgabe A)

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (3, 11) to[european voltage source, v_=$U_{Q1}$] (3, 8);
	\draw (3, 11) to[european resistor, l={$R_1$}] (6, 11);
	\draw (6, 11) to[european resistor, l={$R_1$}] (9, 11);
	\draw (9, 11) to[european resistor, l={$R_1$}] (12, 11);
	\draw (6, 11) to[european resistor, l={$R_2$}] (6, 8);
	\draw (13.25, 11) to[european resistor, l={$R_2$}] (13.25, 8);
	\draw (9, 8) to[european resistor, l={$R_1$}] (12, 8);
	\draw (6, 8) to[european resistor, l={$R_1$}] (9, 8);
	\draw (3, 7) to[european resistor, l={$R_2$}] (12, 7);
	\draw (12, 11) to[european current source, i<^=$I_{Q1}$] (12, 8);
	\draw (3, 8) -- (6, 8);
	\draw (3, 7) -| (3, 8);
	\draw (9, 11) -| (9, 8);
	\draw (12, 7) -| (12, 8);
	\draw (12, 11) -- (13.25, 11);
	\draw (12, 8) -- (13.25, 8);
	\node[circ] at (3, 8){};
	\node[circ] at (6, 8){};
	\node[circ] at (6, 11){};
	\node[circ] at (9, 8){};
	\node[circ] at (9, 11){};
	\node[circ] at (12, 8){};
	\node[circ] at (12, 11){};
\end{tikzpicture}
\end{document}
```

Aufgabe: 
1. Richtungen aller Maschenströme und Zweigströme sowie Polaritäten und Spannungsabfälle zeichnen
2. Angabe Zusammenhänge Zweig- und Maschenströme

$R_{1}= 100\Omega$, $R_{2}= 50\Omega$, $U_{Q_{1}}= 100V$, $I_{Q_{2}} = 1A$

#### Schritt 1) Umrechnung der Spannungs- in eine Stromquelle

$$
U_{Q_{2}} = I_{Q_{2}} \cdot R_{2} = 50\text{ V}
$$

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (3, 11) to[european voltage source, v_=$U_{Q1}$] (3, 7.5);
	\draw (3, 11) to[european resistor, l={$R_1$}] (6, 11);
	\draw (6, 11) to[european resistor, l={$R_1$}] (9, 11);
	\draw (9, 11) to[european resistor, l={$R_1$}] (12, 11);
	\draw (6, 11) to[european resistor, l={$R_2$}] (6, 7.5);
	\draw (9, 7.5) to[european resistor, l={$R_1$}] (12, 7.5);
	\draw (6, 7.5) to[european resistor, l={$R_1$}] (9, 7.5);
	\draw (3, 6.5) to[european resistor, l={$R_2$}] (12, 6.5);
	\draw (3, 7.5) -- (6, 7.5);
	\draw (3, 6.5) -- (3, 7.5);
	\draw (9, 11) -- (9, 7.5);
	\draw (12, 6.5) -- (12, 7.5);
	\node[circ] at (3, 7.5){};
	\node[circ] at (6, 7.5){};
	\node[circ] at (6, 11){};
	\node[circ] at (9, 7.5){};
	\node[circ] at (9, 11){};
	\node[circ] at (12, 7.5){};
	\draw (12, 11) to[european voltage source, v_=$U_{Q2}$] (12, 9.25);
	\draw (12, 7.5) to[european resistor, l={$R_2$}] (12, 9.25);
\end{tikzpicture}
\end{document}
```

#### Schritt 2) Identifizierung der Maschen

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (3, 11) to[european voltage source, v_=$U_{Q1}$, i=$I_1$] (3, 7.5);
	\draw (3, 11) to[european resistor, l={$R_1$}] (6, 11);
	\draw (6, 11) to[european resistor, l={$R_1$}, i=$I_4$] (9, 11);
	\draw (9, 11) to[european resistor, l={$R_1$}] (12, 11);
	\draw (6, 11) to[european resistor, l={$R_2$}, i=$I_5$] (6, 7.5);
	\draw (9, 7.5) to[european resistor, l={$R_1$}, i=$I_7$] (12, 7.5);
	\draw (6, 7.5) to[european resistor, l={$R_1$}, i<^=$I_6$] (9, 7.5);
	\draw (6, 5.5) to[european resistor, l={$R_2$}, i=$I_3$] (12, 5.5);
	\draw (3, 7.5) -- (6, 7.5);
	\draw (6, 5.5) -- (6, 7.5);
	\draw (9, 11) -- (9, 7.5);
	\draw (12, 5.5) -- (12, 7.5);
	\node[circ] at (6, 7.5){};
	\node[circ] at (6, 11){};
	\node[circ] at (9, 7.5){};
	\node[circ] at (9, 11){};
	\node[circ] at (12, 7.5){};
	\draw (12, 11) to[european voltage source, v_=$U_{Q2}$, i=$I_2$] (12, 9.25);
	\draw (12, 7.5) to[european resistor, l={$R_1$}] (12, 9.25);
	\draw[line width=1.4pt, -latex] (4, 9.75) -- (5, 9.75) -| (5, 8.75) -- (4.25, 8.75) -- (4, 8.75) -| (4, 9.25);
	\draw[line width=1.4pt, -latex] (7.25, 9.75) -- (8.25, 9.75) -| (8.25, 8.75) -- (7.5, 8.75) -- (7.25, 8.75) -| (7.25, 9.25);
	\draw[line width=1.4pt, -latex] (10, 9.75) -- (11, 9.75) -| (10, 8.75) -| (10.25, 8.75) -| (10.75, 8.75) -| (11, 9.25);
	\draw[line width=1.4pt, -latex] (8.5, 7.25) -- (9.5, 7.25) -| (8.5, 6.25) -- (8.75, 6.25) -- (9.25, 6.25) -| (9.5, 6.75);
\end{tikzpicture}
\end{document}
```

Als Maschenströme werden hier $I_{1}$, $I_{2}$, $I_{3}$ und $I_{4}$ gewählt. Die Maschenrichtung ist im Sinne der Maschenströme gewählt.

#### Schritt 3) Aufstellen der Maschengleichungen

$$
\begin{pmatrix}
R_{1} + R_{2} & 0\Omega & 0\Omega & -R_{2} \\
0\Omega & 3\cdot R_{1} & -R_{1} & 0\Omega \\
0\Omega & -R_{1} & 2\cdot R_{1} + R_{2} & R_{1} \\
-R_{2} & 0\Omega & R_{1} & 2\cdot R_{1} + R_{2}
\end{pmatrix}
\cdot 
\begin{pmatrix}
I_{1} \\
I_{2} \\
I_{3} \\
I_{4}
\end{pmatrix}
=
\begin{pmatrix}
U_{Q_{1}} \\
U_{Q_{2}} \\
0\text{ V} \\
0\text{ V}
\end{pmatrix}
$$

#### Schritt 4) Einsetzen der Widerstände

$$
\begin{pmatrix}
150\Omega & 0\Omega & 0\Omega & -50\Omega \\
0\Omega & 300\Omega & -100\Omega & 0\Omega \\
0\Omega & -100\Omega & 250\Omega & 100\Omega \\
-50\Omega & 0\Omega & 100\Omega & 250\Omega
\end{pmatrix}
\cdot 
\begin{pmatrix}
I_{1} \\
I_{2} \\
I_{3} \\
I_{4}
\end{pmatrix}
=
\begin{pmatrix}
100\text{ V} \\
50\text{ V} \\
0\text{ V} \\
0\text{ V}
\end{pmatrix}
$$

#### Schritt 5) Berechnen der Zweigwiderstände

$$
\begin{array}{rcl}
I_{5} & = & I_{1} - I_{4} \\
I_{6} & = & I_{4} + I_{3} \\
I_{7} & = & I_{2} - I_{3}
\end{array}
$$

### Teilaufgabe B)

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (5, 11) to[european voltage source, v=$U_{Q_{1}}$] (5, 9);
	\draw (7, 11) to[european voltage source, v=$U_{Q_{2}}$] (7, 9);
	\draw (9, 9) to[european voltage source, v<=$U_{Q_{3}}$] (9, 7);
	\draw (5, 9) to[european resistor, l={$R_1$}] (5, 7);
	\draw (7, 9) to[european resistor, l={$R_2$}] (7, 7);
	\draw (9, 11) to[european resistor, l={$R_2$}] (9, 9);
	\draw (7, 11) to[european resistor, l={$R_3$}] (9, 11);
	\draw (11, 11) to[european resistor, l={$R_1$}] (11, 7);
	\draw (11, 7) -- (5, 7);
	\draw (7, 11) -- (5, 11);
	\draw (11, 11) -- (9, 11);
	\node[circ, xscale=1.5, yscale=1.5](N1) at (10, 11){} node[anchor=south] at ([yshift=0.13cm]N1.text){$A$};
	\node[circ, xscale=1.5, yscale=1.5](N2) at (10, 7){} node[anchor=south] at ([yshift=0.13cm]N2.text){$B$};
\end{tikzpicture}
\end{document}
```

Aufgabe: Zusammenfassung zu einem aktiven Zweipol bezüglich Klemmen $A$ und $B$
Bestimmen $U_{Q_{\text{Ersatz}}}$, $R_{i_{\text{Ersatz}}}$

$U_{Q_{1}}= 100\text{ V}$, $U_{Q_{2}} = 200\text{ V}$, $U_{Q_{3}}=300\text{ V}$, $R_{1}= 300\Omega$, $R_{2}= 200\Omega$, $R_{3}= 100\Omega$

#### Schritt 1) Ersatzwiderstand berechnen

1. Die Klemmen $A$ und $B$ werden in den Leerlauf versetzt
2. Alle Spannungsquellen werden kurzgeschlossen
3. Nun wird der Widerstand von $A$ nach $B$ berechnet


```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (8.25, 14.25) to[european resistor, l={$R_1$}] (8.25, 10.25);
	\draw (10.25, 14.25) to[european resistor, l={$R_2$}] (10.25, 10.25);
	\draw (12.25, 14.25) to[european resistor, l={$R_2$}] (12.25, 10.25);
	\draw (10.25, 14.25) to[european resistor, l={$R_3$}] (12.25, 14.25);
	\draw (13.25, 10.25) -- (8.25, 10.25);
	\draw (10.25, 14.25) -- (8.25, 14.25);
	\draw (13.25, 14.25) -- (12.25, 14.25);
	\node[circ, xscale=1.5, yscale=1.5](N1) at (13.25, 14.25){} node[anchor=south] at ([yshift=0.13cm]N1.text){$A$};
	\node[circ, xscale=1.5, yscale=1.5](N2) at (13.25, 10.25){} node[anchor=south] at ([yshift=0.13cm]N2.text){$B$};
\end{tikzpicture}
\end{document}
```

$$
R_{12} = \frac{300\Omega\cdot 200\Omega}{500\Omega} = 120\Omega
$$
$$
R_{123} = R_{12} + R_{3} = 220\Omega
$$
$$
R_{1223} = \frac{220\Omega\cdot 200\Omega}{420\Omega} = 104,76 \Omega
$$

#### Schritt 2) Ströme im verbleibenden Netz errechnen

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (8.25, 14.25) to[european voltage source, v=$U_{Q_{1}}$, i=$I_1$] (8.25, 12.25);
	\draw (10.25, 14.25) to[european voltage source, v=$U_{Q_{2}}$, i=$I_2$] (10.25, 12.25);
	\draw (12.25, 12.25) to[european voltage source, v<=$U_{Q_{3}}$, i^>=$I_3$] (12.25, 10.25);
	\draw (8.25, 12.25) to[european resistor, l={$R_1$}] (8.25, 10.25);
	\draw (10.25, 12.25) to[european resistor, l={$R_2$}] (10.25, 10.25);
	\draw (12.25, 14.25) to[european resistor, l={$R_2$}] (12.25, 12.25);
	\draw (10.25, 14.25) to[european resistor, l={$R_3$}] (12.25, 14.25);
	\draw (12.25, 10.25) -| (8.25, 10.25);
	\draw (10.25, 14.25) -- (8.25, 14.25);
\end{tikzpicture}
\end{document}
```

$$
\begin{pmatrix}
R_{1} + R_{2} & -R_{2} \\
-R_{2} & 2\cdot R_{2} + R_{3}
\end{pmatrix}\cdot
\begin{pmatrix}
I_{1} \\
I_{3}
\end{pmatrix}
=
\begin{pmatrix}
U_{Q_{1}} - U_{Q_{2}} \\
U_{Q_{3}} + U_{Q_{2}}
\end{pmatrix}
$$

Einsetzen der Werte:
$$
\begin{pmatrix}
500\Omega & -200\Omega \\
-200\Omega & 500\Omega
\end{pmatrix}\cdot
\begin{pmatrix}
I_{1} \\
I_{3}
\end{pmatrix}
=
\begin{pmatrix}
-100\text{ V} \\
500\text{V}
\end{pmatrix}
$$

$$
420\Omega \cdot I_{1} = 100\text{ V} \implies I_{1} = 0,238\text{ A}
$$
$$
\implies I_{3} = 1,095\text{ A}
$$

#### Schritt 3) Berechnung des Spannungsabfalls von $A$ nach $B$:

Wählt man den Weg über $U_{Q_{3}}$ gibt es einen Spannungsanfall (definiert über die Richtung von $U_{R_{2}}$ in Schritt 2) über $R_{2}$ und einen Spannungsabfall über $U_{Q_{3}}$.

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (8.25, 14.25) to[european voltage source, v=$U_{Q_{1}}$] (8.25, 12.25);
	\draw (10.25, 14.25) to[european voltage source, v=$U_{Q_{2}}$] (10.25, 12.25);
	\draw (12.25, 12.25) to[european voltage source, v<=$U_{Q_{3}}$] (12.25, 10.25);
	\draw (8.25, 12.25) to[european resistor, l={$R_1$}] (8.25, 10.25);
	\draw (10.25, 12.25) to[european resistor, l={$R_2$}] (10.25, 10.25);
	\draw (12.25, 14.25) to[european resistor, l_={$R_2$}, v^=$U_{R2}$, voltage/distance from node=0.4, voltage/bump b=2, voltage/shift=1.4] (12.25, 12.25);
	\draw (10.25, 14.25) to[european resistor, l={$R_3$}] (12.25, 14.25);
	\draw (12.25, 10.25) -- (8.25, 10.25);
	\draw (10.25, 14.25) -- (8.25, 14.25);
	\draw (13.25, 14.25) -- (12.25, 14.25);
	\node[circ, xscale=1.5, yscale=1.5](N1) at (13.25, 14.25){} node[anchor=south] at ([yshift=0.13cm]N1.text){$A$};
	\node[circ, xscale=1.5, yscale=1.5](N2) at (13.25, 10.25){} node[anchor=south] at ([yshift=0.13cm]N2.text){$B$};
	\draw (13.25, 10.25) -| (12.25, 10.25);
	\draw[line width=2.1pt, -latex] (13.25, 14.25) -- (12.25, 14.25) -- (12.25, 10.25) -- (13.25, 10.25);
\end{tikzpicture}
\end{document}
```

Also ist der Spannungsabfall von $A$ nach $B$:
$$
U_{AB} = U_{R_{2}} - U_{Q_{3}} = I_{3} \cdot R_{2} - U_{Q_{3}} = 1,095\text{ A} \cdot 200\text{ V} - 300\text{ V} = -81\text{ V}
$$

Da der Spannungsabfall von $A$ nach $B$ negativ ist, handelt es sich um einen Spannungsabfall von $B$ nach $A$. 
Das muss bei der Zeichnung der Ersatzspannunsquelle beachtet werden

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (8, 10) to[european voltage source, v<=$U_{i}$] (11, 10);
	\draw (11, 10) to[european resistor, l={$R_{i}$}] (14, 10);
	\draw (14, 10) -| (14, 11);
	\node[circ, xscale=1.5, yscale=1.5](N1) at (8, 11){} node[anchor=south] at ([yshift=0.13cm]N1.text){$A$};
	\node[circ, xscale=1.5, yscale=1.5](N2) at (14, 11){} node[anchor=south] at ([yshift=0.13cm]N2.text){$B$};
	\draw (8, 11) -| (8, 10);
\end{tikzpicture}
\end{document}
```
mit den Werten:
$$
U_{i} = 81\text{ V}
$$
$$
R_{i} = 104,76\Omega
$$
### Teilaufgabe C)

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (5, 11) to[european voltage source, v=$U_{Q_{1}}$] (5, 9);
	\draw (7, 11) to[european voltage source, v=$U_{Q_{2}}$] (7, 9);
	\draw (9, 9) to[european voltage source, v<=$U_{Q_{3}}$] (9, 7);
	\draw (5, 9) to[european resistor, l={$R_1$}] (5, 7);
	\draw (7, 9) to[european resistor, l={$R_2$}] (7, 7);
	\draw (9, 11) to[european resistor, l={$R_2$}] (9, 9);
	\draw (7, 11) to[european resistor, l={$R_3$}] (9, 11);
	\draw (11, 11) to[european resistor, l={$R_1$}] (11, 7);
	\draw (11, 7) -- (5, 7);
	\draw (7, 11) -- (5, 11);
	\draw (11, 11) -- (9, 11);
	\node[circ, xscale=1.5, yscale=1.5](N1) at (10, 11){} node[anchor=south] at ([yshift=0.13cm]N1.text){$A$};
	\node[circ, xscale=1.5, yscale=1.5](N2) at (10, 7){} node[anchor=south] at ([yshift=0.13cm]N2.text){$B$};
\end{tikzpicture}
\end{document}
```

Im Netzwerk aus Teilaufgabe B) soll mittels des Knotenpotenzialverfahrens der Spannungsabfall $U_{AB}$ berechnet werden.

#### Schritt 1) Leitwerte aller Widerstände berechnen

$$
G_{1} = \frac{1}{R_{1}} = \frac{1}{300\Omega} = \frac{1}{300}\text{ S}
$$
$$
G_{2} = \frac{1}{R_{2}} = \frac{1}{200\Omega} = \frac{1}{200}\text{ S}
$$
$$
G_{3} = \frac{1}{R_{3}} = \frac{1}{100\Omega} = \frac{1}{100}\text{ S}
$$

#### Schritt 2) Alle Spannungsquellen in Stromquellen umwandeln


```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (7, 14) to[european resistor, l={$G_1$}] (7, 12);
	\draw (10, 14) to[european resistor, l={$G_2$}] (10, 12);
	\draw (12, 14) to[european resistor, l={$G_2$}] (12, 12);
	\draw (10, 14) to[european resistor, l={$G_3$}] (12, 14);
	\draw (15.5, 14) to[european resistor, l={$G_1$}] (15.5, 12);
	\draw (15.5, 12) -- (5.5, 12);
	\draw (10, 14) -- (5.5, 14);
	\draw (15.5, 14) -- (13.5, 14);
	\node[circ, xscale=1.5, yscale=1.5](N1) at (14.75, 14){} node[anchor=south] at ([yshift=0.13cm]N1.text){$A$};
	\node[circ, xscale=1.5, yscale=1.5](N2) at (14.75, 12){} node[anchor=south] at ([yshift=0.13cm]N2.text){$B$};
	\draw (13.5, 14) -- (12, 14);
	\node[circ] at (8.5, 14){};
	\node[circ] at (10, 14){};
	\node[circ] at (7, 14){};
	\node[circ] at (7, 12){};
	\node[circ] at (8.5, 12){};
	\node[circ] at (10, 12){};
	\node[circ] at (12, 12){};
	\node[circ] at (13.5, 12){};
	\node[circ] at (12, 14){};
	\node[circ] at (13.5, 14){};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (7.75, 14.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (7.5, 14.75){1};
	\node[shape=rectangle, minimum width=0.436cm, minimum height=0.465cm] at (13.485, 14.5){} node[anchor=north west, align=left, text width=0.048cm, inner sep=6pt] at (13.25, 14.75){2};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (11, 11.75){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (10.75, 12){0};
	\draw (5.5, 14) to[european current source, i<^=$I_{Q_1}$] (5.5, 12);
	\draw (8.5, 14) to[european current source, i<^=$I_{Q_2}$] (8.5, 12);
	\draw (13.5, 14) to[european current source, i=$I_{Q_3}$] (13.5, 12);
\end{tikzpicture}
\end{document}
```
$$
\begin{array}{rclclcl}
I_{Q_{1}} & = & U_{Q_{1}}\cdot G_{1} & = & 100\text{ V}\cdot \frac{1}{300}\text{ S} & = & \frac{1}{3}\text{ A} \\
I_{Q_{2}} & = & U_{Q_{2}}\cdot G_{2} & = & 200\text{ V}\cdot \frac{1}{200}\text{ S} & = & 1\text{ A} \\
I_{Q_{3}} & = & U_{Q_{3}}\cdot G_{2} & = & 300\text{ V}\cdot \frac{1}{200}\text{ S} & = & 1,5\text{ A}
\end{array}
$$

#### Schritt 3) Berechnungsvorschrift aufstellen

$$
\begin{pmatrix}
G_{1} + G_{2} + G_{3} & -G_{3} \\
-G_{3} & G_{1} + G_{2} + G_{3}
\end{pmatrix}
\cdot
\begin{pmatrix}
U_{1} \\
U_{2}
\end{pmatrix}
=
\begin{pmatrix}
I_{Q_{1}} + I_{Q_{2}} \\
-I_{Q_{3}}
\end{pmatrix}
$$

#### Schritt 4) Spannung berechnen

$$
\begin{pmatrix}
\frac{11}{600}\text{ S} & -\frac{1}{100}\text{ S} \\
-\frac{1}{100}\text{ S} & \frac{11}{600}\text{ S}
\end{pmatrix}
\cdot
\begin{pmatrix}
U_{1} \\
U_{2}
\end{pmatrix}
=
\begin{pmatrix}
1,33\text{ A} \\
-1,5\text{ A}
\end{pmatrix}
$$

$$
\implies U_{2} = -60,14\text{ V}
$$
### Teilaufgabe D)

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (3, 12) to[european voltage source, v=$U_{Q_1}$] (3, 10);
	\draw (3, 10) to[european resistor, l={$R_1$}] (3, 8);
	\draw (5, 12) to[european resistor, l={$R_2$}] (3, 12);
	\draw (7, 12) to[european resistor, l={$R_6$}, i=$I_6$] (7, 8);
	\draw (7, 12) to[european resistor, l={$R_4$}] (5, 12);
	\draw (7, 8) to[european resistor, l={$R_5$}] (5, 8);
	\draw (5, 8) -- (3, 8);
	\draw (5, 10) to[european voltage source, v<=$U_{Q_2}$] (5, 8);
	\draw (5, 12) to[european resistor, l={$R_3$}] (5, 10);
\end{tikzpicture}
\end{document}
```

Aufgabe: Berechnen sie den Strom $I_{6}$ mit dem Superpositionsverfahren
$$
\begin{array}{rcl}
R_{1} & = & 10\Omega \\
R_{2} & = & 200\Omega \\
R_{3} & = & 50\Omega \\
R_{4} & = & 300\Omega \\
R_{5} & = & 500\Omega \\
R_{6} & = & 500\Omega \\
U_{Q_{1}} & = & 100\text{ V} \\
U_{Q_{2}} & = & 200\text{ V} 
\end{array}
$$
Diese Schaltung kann zunächst zusammengefasst werden:

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (3, 12) to[european voltage source, v=$U_{Q_1}$] (3, 10);
	\draw (3, 10) to[european resistor, l={$R_{12}$}] (3, 8);
	\draw (7, 12) to[european resistor, l={$R_{456}$}, i=$I_6$] (7, 8);
	\draw (5, 8) -- (3, 8);
	\draw (5, 10) to[european voltage source, v<=$U_{Q_2}$] (5, 8);
	\draw (5, 12) to[european resistor, l={$R_3$}] (5, 10);
	\draw (3, 12) -- (7, 12);
	\draw (5, 8) -- (7, 8);
	\node[circ] at (5, 12){};
	\node[circ] at (5, 8){};
\end{tikzpicture}
\end{document}
```

$$
\begin{array}{rcl}
R_{12} & = & 210\Omega \\
R_{3} & = & 50\Omega \\
R_{456} & = & 1300\Omega
\end{array}
$$
#### Superposition 1

Bei der Superposition 1 wird $U_{Q_{2}}$ ignoriert:

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (3, 12) to[european voltage source, v=$U_{Q_1}$, i=$I_1$] (3, 10);
	\draw (3, 10) to[european resistor, l={$R_{12}$}] (3, 8);
	\draw (7, 12) to[european resistor, l={$R_{456}$}, i=$I_6$] (7, 8);
	\draw (5, 8) -- (3, 8);
	\draw (5, 12) to[european resistor, l={$R_3$}] (5, 8);
	\draw (3, 12) -- (7, 12);
	\draw (5, 8) -- (7, 8);
	\node[circ] at (5, 12){};
	\node[circ] at (5, 8){};
\end{tikzpicture}
\end{document}
```

In dieser Schaltung ist 

$$
R_{\text{Gesamt}} = R_{12} + \frac{R_{3}\cdot R_{456}}{R_{3} + R_{456}} = 258,15 \Omega
$$
das bedeutet, dass
$$
I_{1} = \frac{U_{Q_{1}}}{R_{\text{Gesamt}}} = \frac{100\text{ V}}{258,15\Omega} = 0,387 \text{ A}
$$

Nun können wir die Stromteilerregel anwenden, um $I_{61}$ zu berechnen
$$
I_{61} = I_{1} \cdot \frac{R_{3456}}{R_{456}} = 0,387\text{ A} \cdot \frac{48,15\Omega}{1300\Omega} = 0,0143\text{ A}
$$

#### Superposition 1

Bei der Superposition 1 wird $U_{Q_{2}}$ ignoriert:

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (3, 12) to[european voltage source, v=$U_{Q_2}$, i=$I_2$] (3, 10);
	\draw (3, 10) to[european resistor, l={$R_{3}$}] (3, 8);
	\draw (7, 12) to[european resistor, l={$R_{456}$}, i=$I_6$] (7, 8);
	\draw (5, 8) -- (3, 8);
	\draw (5, 12) to[european resistor, l={$R_{12}$}] (5, 8);
	\draw (3, 12) -- (7, 12);
	\draw (5, 8) -- (7, 8);
	\node[circ] at (5, 12){};
	\node[circ] at (5, 8){};
\end{tikzpicture}
\end{document}
```

In dieser Schaltung ist 

$$
R_{\text{Gesamt}} = R_{3} + \frac{R_{12}\cdot R_{456}}{R_{12} + R_{456}} = 230,79 \Omega
$$
das bedeutet, dass
$$
I_{1} = \frac{U_{Q_{1}}}{R_{\text{Gesamt}}} = \frac{200\text{ V}}{230,79\Omega} = 0,87 \text{ A}
$$

Nun können wir die Stromteilerregel anwenden, um $I_{61}$ zu berechnen
$$
I_{61} = I_{2} \cdot \frac{R_{12456}}{R_{456}} = 0,87\text{ A} \cdot \frac{180,79\Omega}{1300\Omega} = 0,121\text{ A}
$$

#### Zusammenfassung 

$$
I_{6} = I_{61} + I_{62} = 0,121\text{ A} + 0,0143\text{ A} = 0,1353\text{ A}
$$

# Aufgabe 4: Schwingungen


```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (2, 12) to[european voltage source] (2, 9);
	\draw (2, 12) to[european resistor] (5, 12);
	\draw (5, 12) to[capacitor] (5, 9);
	\draw (6, 9) -- (2, 9);
	\draw (5, 12) -- (6, 12);
	\node[circ] at (5, 12){};
	\node[circ] at (5, 9){};
	\node[ocirc, xscale=1.5, yscale=1.5] at (6, 12){};
	\node[ocirc, xscale=1.5, yscale=1.5] at (6, 9){};
	\draw[-latex] (6, 11.75) -- (6, 9.25);
\end{tikzpicture}
\end{document}
```
$$
2\cdot \pi \cdot f = \frac{1}{RC}
$$
$$
2 \cdot \pi \cdot 200 \frac{1}{s} = \frac{1}{RC}
$$
$$
C = \frac{1}{2\cdot \pi \cdot 200 \frac{1}{s} \cdot R}
$$
wählt man beispielsweise für $R=10\Omega$:
$$
C = \frac{1}{2 \pi 200 \frac{1}{s} \cdot 10\Omega} = 79,6 \mu F
$$
Das bedeutet, dass bei:
$$
R = 10\Omega \qquad \text{und} \qquad C = 79,6\mu F
$$
