
## Vorbereitungsaufgaben

1.1

Ein KV-Diagramm mit n Eingang Variablen hat 2n Felder.
Jede Variable kommt in negierter und nicht negierter Form vor.
Die Zuordnung der Variablen darf sich bei Horizontal und Vertikal benachbarten Feldern nur in genau einer Variable unterscheiden.
Blöcke müssen immer rechteckig und maximal gewählt werden.
Die Kantenlänge eines Blockes muss immer einer zweier Potenzen entsprechen.

1.2
a)
$$
y=x_{1}x_{2}x_{3}x_{4} V x_{1}x_{2}\overline{x}_{3}x_{4} V \overline{x}_{1}x_{2}x_{3}x_{4} V\overline{x}_{1}x_{2}\overline{x}_{3}x_{4}V x_{1}\overline{x}_{2}\overline{x}_{3}\overline{x}_{4} V x_{1}x_{2}\overline{x}_{3}\overline{x}_{4} V \overline{x}_{1}x_{2}x_{3}\overline{x}_{4} V \overline{x}_{1}\overline{x}_{2}x_{3}\overline{x}_{4}
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
b)
$$
\to y_{min}=x_{1}\overline{x}_{3}\overline{x}_{4} V \overline{x}_{1}x_{3}\overline{x}_{4} V x_{2}x_{4}
$$
c)

![[Schaltung.png|500]]

![[Schaltbild Gatter.png]]

1.3
a)
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

b)
$$
y=\overline{s}\ \overline{e}_{1}\ e_{0}\ \ V\ \ \overline{s}\ e_{1}\ e_{0}\ \ V \ \ s\ e_{1}\ \overline{e}_{0}\ \ V\ \ s\ e_{1}\ e_{0}
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
c)
$$
\to y_{min}=s\ e_{1}\ \ V \ \ \overline{s}\ e_{0}
$$
d)

7 Segmente Display

Bei einer Anzeige mit mehreren 7-Segment-Ziffern wird oft das sogenannte Multiplexing verwendet. Dabei leuchten nicht alle Ziffern gleichzeitig dauerhaft, sondern der Controller schaltet sie sehr schnell nacheinander ein. Dies geschieht mithilfe von Multiplexern.

1.4
a)

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
b)
![[Semester 2/Digitaltechnik/Labor Praktika/Grafiken/Schaltung2.png|500]]


![[Schaltung3.png|550]]

## Versuchsdurchführung

2.1
a)
$$
y_{min}=x_{1}\overline{x}_{3}\overline{x}_{4} V \overline{x}_{1}x_{3}\overline{x}_{4} V x_{2}x_{4}
$$
Doppelte Negation der Funktion:
$$
y_{min}=\overline{\overline{x_{1}\overline{x}_{3}\overline{x}_{4} V \overline{x}_{1}x_{3}\overline{x}_{4} V x_{2}x_{4}}}
$$
Anwendung des De Morganschen Gesetzes ($\overline{A\ V\ B\ V\ C}=\overline{A} \land\overline{B}\land\overline{C}$):
$$
y_{min} = \overline{\overline{(x_1 \  \overline{x}_3 \  \overline{x}_4)} \land \overline{(\overline{x}_1 \  x_3 \  \overline{x}_4)} \land \overline{(x_2 \  x_4)}}
$$


![[Schaltung4.png|550]]

2.2
a)
$$
y_{min}=s\ e_{1}\ \ V \ \ \overline{s}\ e_{0}
$$
Hinzufügen des Steuersignales $s_{1}$ sowie der Eingänge $e_{2},e_{3}$. Dabei werden die Steuersignale als Binäre Eingänge betrachtet. Jede Möglichkeit der Schaltung von $s_{0}$ und $s_{1}$ schaltet dabei je ein Eingang durch. Daraus ergibt sich folgende Gatter Funktion:
$$
y_{min}=\overline{s_{0}} \ \overline{s_{1}}\ e_{0}\ V \ \overline{s_{0}} \ s_{1}\ e_{1}\ V \ s_{0} \ \overline{s_{1}}\ e_{2}\ V \ s_{0} \ s_{1}\ e_{3}
$$


![[Schaltung5.png|550]]

2.3
a)
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


b)
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

