
# Vorbereitungsaufgaben

## Aufgabe 1.1

Ein KV-Diagramm mit n Eingang Variablen hat 2n Felder.
Jede Variable kommt in negierter und nicht negierter Form vor.
Die Zuordnung der Variablen darf sich bei Horizontal und Vertikal benachbarten Feldern nur in genau einer Variable unterscheiden.
Blöcke müssen immer rechteckig und maximal gewählt werden.
Die Kantenlänge eines Blockes muss immer einer zweier Potenzen entsprechen.

## Aufgabe 1.2

### Teilaufgabe A

$$
y=x_{1} x_{2}x_{3}x_{4} \lor x_{1}x_{2}\overline{x}_{3}x_{4} \lor \overline{x}_{1}x_{2}x_{3}x_{4} \lor \overline{x}_{1}x_{2}\overline{x}_{3}x_{4}\lor x_{1}\overline{x}_{2}\overline{x}_{3}\overline{x}_{4} \lor x_{1}x_{2}\overline{x}_{3}\overline{x}_{4} \lor \overline{x}_{1}x_{2}x_{3}\overline{x}_{4} \lor \overline{x}_{1}\overline{x}_{2}x_{3}\overline{x}_{4}
$$
KV-Diagramm:

$$
\begin{array}{c|c}
& x_{1} & x_{1} & \overline{x}_{1} & \overline{x}_{1} &  \\
\hline x_{2} & 1 & 1 & 1 & 1 & x_{4} \\
\hline x_{2} & & 1 &  & 1 & \overline{x}_{4} \\
\hline \overline{x}_{2} &  & 1 &  & 1 & \overline{x}_{4} \\
\hline \overline{x}_{2} &  &  &  & &  x_{4} \\
\hline &  x_{3} & \overline{x}_{3} & \overline{x}_{3} & x_{3}
\end{array}
$$

### Teilaufgabe B

$$
\to y_{min}=x_{1}\overline{x}_{3}\overline{x}_{4} \lor \overline{x}_{1}x_{3}\overline{x}_{4} \lor x_{2}x_{4}
$$

### Teilaufgabe C

![[Schaltung.png|500]]

![[Schaltbild Gatter.png]]

# Aufgabe 1.3

### Teilaufgabe A

$$
\begin{array}{ccc|c}
s & e_{1} & e_{0} & y \\
\hline 0 & 0 & 0 & 0 \\
0 & 0 & 1 & 1 \\
0 & 1 & 0 & 0 \\
0 & 1 & 1 & 1 \\
\hline 1 & 0 & 0 & 0 \\
1 & 0 & 1 & 0 \\
1 & 1 & 0 & 1 \\
1 & 1 & 1 & 1
\end{array}
$$

### Teilaufgabe B

$$
y=\overline{s}\ \overline{e}_{1}\ e_{0}\ \ \lor\ \ \overline{s}\ e_{1}\ e_{0}\ \ \lor \ \ s\ e_{1}\ \overline{e}_{0}\ \ V\ \ s\ e_{1}\ e_{0}
$$
KV-Diagramm:
$$
\begin{array}{c|c}
& s & s & \overline{s} & \overline{s} \\
\hline e_{1} & 	1 & 1 &  & 1 \\
\hline \overline{e}_{1} &  &  &  & 1 \\
\hline &  e_{0} & \overline{e}_{0} & \overline{e}_{0} & e_{0}
\end{array}
$$

### Teilaufgabe C

$$
\to y_{min}=s\ e_{1}\ \ \lor \ \ \overline{s}\ e_{0}
$$

### Teilaufgabe D

7 Segmente Display

Bei einer Anzeige mit mehreren 7-Segment-Ziffern wird oft das sogenannte Multiplexing verwendet. Dabei leuchten nicht alle Ziffern gleichzeitig dauerhaft, sondern der Controller schaltet sie sehr schnell nacheinander ein. Dies geschieht mithilfe von Multiplexern.

## Aufgabe 1.4

### Teilaufgabe A

$$
\begin{array}{c|c}
\text{Bit-Nr.} & 1 & 2 & 3 & 4 & 5 & 6 & 7 \\
\hline\text{Wertigkeit} & K_{0} & K_{1} & 2^3 & K_{2} & 2^2 & 2^1 & 2^0 \\
\hline 0 & 0 & 0 & 0 & 0 & 0 & 0 & 0 \\
1 & 1 & 1 & 0 & 1 & 0 & 0 & 1 \\
2 & 0 & 1 & 0 & 1 & 0 & 1 & 0 \\
3 & 1 & 0 & 0 & 0 & 0 & 1 & 1 \\
4 & 1 & 0 & 0 & 1 & 1 & 0 & 0 \\
\hline 5 & 0 & 1 & 0 & 0 & 1 & 0 & 1 \\
6 & 1 & 1 & 0 & 0 & 1 & 1 & 0 \\
7 & 0 & 0 & 0 & 1 & 1 & 1 & 1 \\
8 & 1 & 1 & 1 & 0 & 0 & 0 & 0 \\
9 & 0 & 0 & 1 & 1 & 0 & 0 & 1
\end{array}
$$

### Teilaufgabe B

![[Semester 2/Digitaltechnik/Labor Praktika/Grafiken/Schaltung2.png|500]]

![[Schaltung3.png|550]]

# Versuchsdurchführung

## Aufgabe 2.1

### Teilaufgabe A
$$
y_{min}=x_{1}\overline{x}_{3}\overline{x}_{4} \lor \overline{x}_{1}x_{3}\overline{x}_{4} \lor x_{2}x_{4}
$$
Doppelte Negation der Funktion:
$$
y_{min}=\overline{\overline{x_{1}\overline{x}_{3}\overline{x}_{4} \lor \overline{x}_{1}x_{3}\overline{x}_{4} \lor x_{2}x_{4}}}
$$
Anwendung des De Morganschen Gesetzes ($\overline{A \lor B \lor C}=\overline{A} \land\overline{B}\land\overline{C}$):
$$
y_{min} = \overline{\overline{(x_1 \  \overline{x}_3 \  \overline{x}_4)} \land \overline{(\overline{x}_1 \  x_3 \  \overline{x}_4)} \land \overline{(x_2 \  x_4)}}
$$

![[Schaltung4.png|550]]

## Aufgabe 2.2

### Teilaufgabe A

$$
y_{min}=s\ e_{1}\ \lor\ \overline{s}\ e_{0}
$$

Hinzufügen des Steuersignales $s_{1}$ sowie der Eingänge $e_{2},e_{3}$. Dabei werden die Steuersignale als Binäre Eingänge betrachtet. Jede Möglichkeit der Schaltung von $s_{0}$ und $s_{1}$ schaltet dabei je ein Eingang durch. Daraus ergibt sich folgende Gatter Funktion:

$$
y_{min}=\overline{s_{0}} \ \overline{s_{1}}\ e_{0}\ \lor \ \overline{s_{0}} \ s_{1}\ e_{1}\ \lor \ s_{0} \ \overline{s_{1}}\ e_{2}\ \lor \ s_{0} \ s_{1}\ e_{3}
$$


![[Schaltung5.png|550]]

## Aufgabe 2.3

### Teilaufgabe A

Wertetabelle 1:4 DEMUX

$$
\begin{array}{ccc|cccc}
s_{0} & s_{1} & e_{0} & y_{0} & y_{1} & y_{2} & y_{3}\\
\hline 0 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 1 & 1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 & 0 & 0 & 0 \\
0 & 1 & 1 & 0 & 1 & 0 & 0 \\
\hline 1 & 0 & 0 & 0 & 0 & 0 & 0 \\
1 & 0 & 1 & 0 & 0 & 1 & 0 \\
1 & 1 & 0 & 0 & 0 & 0 & 0 \\
1 & 1 & 1 & 0 & 0 & 0 & 1 \\
\end{array}
$$

![[Schaltung6.png|550]]

### Teilaufgabe B
$$
y_{3min}=s_{0}\ s_{1}\ e_{0}
$$
$$
y_{2min}=s_{0}\ \overline{s_{1}}\ e_{0}
$$
$$
y_{1min}=\overline{s_{0}}\ s_{1}\ e_{0}
$$
$$
y_{0min}=\overline{s_{0}}\ \overline{s_{1}}\ e_{0}
$$
# Praktikumsaufgaben 

## Aufgabe 4:1 MUX

Der 4:1 MUX nutzt 6 Eingangssignale auf ein Ausgangssignal.
In der folgenden Schaltbelegungstabelle wurden ausschließlich die relevanten Steuereingangskombinationen eingetragen.

$$
\begin{array}{cc|c}
s_{2} & s_{1} & Y \\
\hline
0 & 0 & e_{0} \\
0 & 1 & e_{1} \\
1 & 0 & e_{2} \\
1 & 1 & e_{3}
\end{array}
$$


Diese Schaltung kann allein über AND-Gates realisiert werden, die dann mit einem ODER-Gate zusammengeführt werden


```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (4, 9) to[short] (4, 2);
	\draw (4.5, 9) to[short] (4.5, 2);
	\draw (5, 9) to[short] (5, 2);
	\draw (5.5, 9) to[short] (5.5, 2);
	\node[shape=rectangle, draw, line width=1pt, minimum width=0.965cm, minimum height=1.215cm] at (7.5, 8.375){} node[anchor=north west, align=left, text width=0.577cm, inner sep=6pt] at (7, 9){\&};
	\node[shape=rectangle, draw, line width=1pt, minimum width=0.965cm, minimum height=1.215cm] at (7.5, 6.625){} node[anchor=north west, align=left, text width=0.577cm, inner sep=6pt] at (7, 7.25){\&};
	\node[shape=rectangle, draw, line width=1pt, minimum width=0.965cm, minimum height=1.215cm] at (7.5, 4.875){} node[anchor=north west, align=left, text width=0.577cm, inner sep=6pt] at (7, 5.5){\&};
	\node[shape=rectangle, draw, line width=1pt, minimum width=0.965cm, minimum height=1.215cm] at (7.5, 3.375){} node[anchor=north west, align=left, text width=0.577cm, inner sep=6pt] at (7, 4){\&};
	\node[shape=rectangle, draw, line width=1pt, minimum width=0.965cm, minimum height=1.59cm] at (9.5, 5.75){} node[anchor=north west, align=left, text width=0.577cm, inner sep=6pt] at (9, 6.563){$\geq 1$};
	
	\draw (3.5, 9) to[short] (3.5, 2);
	\draw (3, 9) to[short] (3, 2);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (3.5, 9.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (3.25, 9.75){$s_1$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (3, 9.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (2.75, 9.75){$s_2$};

	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (4.529, 9.471){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (4.279, 9.721){$e_2$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (4.029, 9.471){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (3.779, 9.721){$e_3$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (5.029, 9.471){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (4.779, 9.721){$e_1$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (5.529, 9.471){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (5.279, 9.721){$e_0$};
	\draw (7, 8.75) -- (5.5, 8.75);
	\draw (7, 8.375) -- (3.5, 8.375);
	\draw (7, 8) |- (3, 8);
	\draw (7, 7) -- (5, 7);
	\draw (7, 6.625) -| (3.5, 6.5);
	\draw (7, 6.25) -- (3, 6.25);
	\draw (7, 5.25) |- (4.5, 5.25);
	\draw (7, 3.75) -- (4, 3.75);
	\draw (7, 4.875) -- (3.5, 4.875);
	\draw (7, 3.375) -| (3.5, 3.5);
	\draw (7, 4.5) |- (3, 4.5);
	\draw (7, 3) |- (3, 3);
	\draw (9, 6.25) -| (8.75, 8.25) -- (8, 8.25);
	\draw (9, 6) |- (8.5, 6) |- (8, 6.625);
	\draw (9, 5.5) -| (8.5, 5) -- (8, 5);
	\draw (9, 5.25) -- (8.75, 5.25) -| (8.75, 3.5) |- (8, 3.375);
	\node[circ] at (5.5, 8.75){};
	\node[circ] at (3.5, 8.375){};
	\node[circ] at (3, 3){};
	\node[circ] at (3.5, 3.375){};
	\node[circ] at (4, 3.75){};
	\node[circ] at (3, 4.5){};
	\node[circ] at (3.5, 4.875){};
	\node[circ] at (4.5, 5.25){};
	\node[circ] at (3, 6.25){};
	\node[circ] at (3.5, 6.625){};
	\node[circ] at (5, 7){};
	\node[circ] at (3, 8){};
	\draw (10, 5.75) -- (11.75, 5.75);
	\node[ocirc] at (7, 8){};
	\node[ocirc] at (7, 8.375){};
	\node[ocirc] at (7, 6.25){};
	\node[ocirc] at (7, 4.875){};
\end{tikzpicture}
\end{document}
```



## Aufgabe DEMUX

Der 4:1 MUX nutzt ein Eingangssignal und 2 Steuersignale, um das Eingangssignal auf das korrekte der 4 Ausgangssignale zu leiten

$$
\begin{array}{ccc|cccc}
e & s_{2} & s_{1} & a_{3} & a_{2} & a_{1} & a_{0} \\
\hline
0 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 & 0 & 0 & 0 \\
0 & 1 & 1 & 0 & 0 & 0 & 0 \\
1 & 0 & 0 & 1 & 0 & 0 & 0 \\
1 & 0 & 1 & 0 & 1 & 0 & 0 \\
1 & 1 & 0 & 0 & 0 & 1 & 0 \\
1 & 1 & 1 & 0 & 0 & 0 & 1 
\end{array}
$$

$$
a_{0} = e \land \overline{s_{2}} \land \overline{s_{1}}
$$
$$
a_{1} = e \land \overline{s_{2}} \land s_{1}
$$
$$
a_{2} = e \land s_{2} \land \overline{s_{1}}
$$
$$
a_{3} = e \land s_{2} \land s_{1}
$$

Diese Schaltung kann allein über AND-Gates realisiert werden.

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (4, 9) to[short] (4, 2);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (3, 9.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (2.75, 9.75){$s_2$};
	\node[shape=rectangle, draw, line width=1pt, minimum width=0.965cm, minimum height=1.215cm] at (7.5, 8.375){} node[anchor=north west, align=left, text width=0.577cm, inner sep=6pt] at (7, 9){\&};
	\node[shape=rectangle, draw, line width=1pt, minimum width=0.965cm, minimum height=1.215cm] at (7.5, 6.625){} node[anchor=north west, align=left, text width=0.577cm, inner sep=6pt] at (7, 7.25){\&};
	\node[shape=rectangle, draw, line width=1pt, minimum width=0.965cm, minimum height=1.215cm] at (7.5, 4.875){} node[anchor=north west, align=left, text width=0.577cm, inner sep=6pt] at (7, 5.5){\&};
	\node[shape=rectangle, draw, line width=1pt, minimum width=0.965cm, minimum height=1.215cm] at (7.5, 3.375){} node[anchor=north west, align=left, text width=0.577cm, inner sep=6pt] at (7, 4){\&};
	\draw (3.5, 9) to[short] (3.5, 2);
	\draw (3, 9) to[short] (3, 2);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (3.5, 9.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (3.25, 9.75){$s_1$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (4.029, 9.471){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (3.779, 9.721){$e$};
	\draw (7, 8.75) -| (4, 8.75);
	\draw (7, 8.375) -- (3.5, 8.375);
	\draw (7, 8) |- (3, 8);
	\draw (7, 7) -| (4, 7);
	\draw (7, 6.625) -| (3.5, 6.5);
	\draw (7, 6.25) -- (3, 6.25);
	\draw (7, 5.25) -- (4, 5.25);
	\draw (7, 3.75) -- (4, 3.75);
	\draw (7, 4.875) -- (3.5, 4.875);
	\draw (7, 3.375) -| (3.5, 3.5);
	\draw (7, 4.5) |- (3, 4.5);
	\draw (7, 3) |- (3, 3);
	\draw (9, 8.25) |- (8.75, 8.25) -- (8, 8.25);
	\node[circ] at (4, 8.75){};
	\node[circ] at (3.5, 8.375){};
	\node[circ] at (3, 3){};
	\node[circ] at (3.5, 3.375){};
	\node[circ] at (4, 3.75){};
	\node[circ] at (3, 4.5){};
	\node[circ] at (3.5, 4.875){};
	\node[circ] at (4, 5.25){};
	\node[circ] at (3, 6.25){};
	\node[circ] at (3.5, 6.625){};
	\node[circ] at (4, 7){};
	\node[circ] at (3, 8){};
	\node[ocirc] at (7, 8){};
	\node[ocirc] at (7, 8.375){};
	\node[ocirc] at (7, 6.25){};
	\node[ocirc] at (7, 4.875){};
	\draw (8, 6.5) -- (9, 6.5);
	\draw (8, 5) -- (9, 5);
	\draw (8, 3.5) -- (9, 3.5);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (9.25, 8.25){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (9, 8.5){$a_0$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (9.25, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (9, 6.75){$a_1$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (9.25, 5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (9, 5.25){$a_2$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (9.25, 3.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (9, 3.75){$a_3$};
\end{tikzpicture}
\end{document}
```



## Zusatzaufgabe
### Teilaufgabe A und B

Eingangszustände (4):
$$
\begin{array}{r|l}
L_{1} & \text{Lastschalter 1} \\
L_{2} & \text{Lastschalter 2} \\
T & \text{Türe (0 = geschlossen, 1 = geöffnet)} \\
S & \text{Schalter für den Motorbetrieb (0 = deaktiviert 1 = aktiviert)}
\end{array}
$$

Ausgangszustände (3):
$$
\begin{array}{r|l}
\text{LED} & \text{Lampe, die signalisiert, ob die Schutztür geöffnet oder geschlossen ist} \\
M_{1} & \text{Erste Stelle der binären Zahl, welche den Motorzustand angibt} \\
M_{2} & \text{Zweite Stelle der binären Zahl, welche den Motorzustand angibt}
\end{array}
$$

### Teilaufgabe C

> [!Warning] Anmerkung
> Bei der initialen Bearbeitung dieser Aufgabe haben wir die Bedingung überlesen, dass für die Geschwindigkeitsstufe $2$ eine Belastung von $>0\%$ erforderlich ist. Wir haben die Schaltung allerdings so abgenommen bekommen. Auf Nachfrage wurde uns mitgeteilt, dass wir hier den Lösungsweg für die "falsche" Bearbeitung dieser Aufgabe abgeben dürfen, da das grundätzliche Konzept der Aufgabe verstanden wurde, obwohl unsere Bearbeitung eine Vereinfachung der Aufgabe darstellt!

#### Logische Schaltung zur Ansteuerung der LED

Die LED wird aktiviert, wenn die Tür geöffnet wird
$$
\text{LED} = T
$$

#### Zweite Stelle der binären Zahl zur Motorsteuerung

Die zweite Stelle wird aktiviert, wenn Geschwindigkeit 2 oder 3 gefordert werden. 
Das ist der Fall, wenn der Schalter aktiviert und die Türe geschlossen ist.

$$
M_{2} = \overline{T} \land S
$$
#### Erste Stelle der binären Zahl zur Motorsteuerung

Die erste Stelle ist deaktiviert, wenn der Schalter eingeschaltet ist und
	a) die Tür geöffnet wurde oder
	b) die bolle Belastungsstufe aktiv ist

$$
M_{1} = S \land (T \lor L_{1} L_{2})
$$


### Schaltung

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (4, 9) to[short] (4, 3);
	\draw (4.5, 9) to[short] (4.5, 3);
	\draw (5, 9) to[short] (5, 3);
	\draw (5.5, 9) to[short] (5.5, 3);
	\node[american and port] at (8.136, 7.28){};
	\node[american and port] at (8.136, 4.53){};
	\node[american and port] at (12.136, 3.72){};
	\node[american or port] at (10.386, 4.81){};
	\draw (6.75, 7.56) -| (5.5, 7.75);
	\draw (6.75, 7) -- (5, 7);
	\draw (8.29, 7.28) -| (13, 7.25);
	\draw (9, 5.09) -| (8.5, 5.5) |- (5, 5.5);
	\draw (9, 4.53) -- (8.29, 4.53);
	\draw (10.54, 4.81) -| (10.75, 4);
	\draw (10.75, 3.44) -| (5.5, 3.25);
	\draw (6.75, 4.81) -| (4.5, 4.75);
	\draw (6.75, 4.25) |- (4, 4.25);
	\draw (5, 8.5) -- (13, 8.5);
	\draw (12.29, 3.72) -| (13, 3.75);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (4, 9.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (3.75, 9.75){$L_1$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (4.5, 9.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (4.25, 9.75){$L_2$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (5, 9.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (4.75, 9.75){$T$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (5.5, 9.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (5.25, 9.75){$S$};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (13.25, 8.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (13, 8.75){LED};
	\node[shape=rectangle, minimum width=1.465cm, minimum height=0.465cm] at (13.75, 7.25){} node[anchor=north west, align=left, text width=1.077cm, inner sep=6pt] at (13, 7.5){$M_2$};
	\node[shape=rectangle, minimum width=1.465cm, minimum height=0.465cm] at (13.75, 3.75){} node[anchor=north west, align=left, text width=1.077cm, inner sep=6pt] at (13, 4){$M_1$};
	\node[circ] at (5, 8.5){};
	\node[circ] at (5.5, 7.56){};
	\node[circ] at (5, 7){};
	\node[circ] at (5, 5.5){};
	\node[circ] at (4.5, 4.81){};
	\node[circ] at (4, 4.25){};
	\node[circ] at (5.5, 3.44){};
	\node[ocirc] at (6.75, 7.56){};
\end{tikzpicture}
\end{document}
```
