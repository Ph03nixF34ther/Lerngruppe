# Aufgabenstellung
Wir modellieren ein wirtschaftswissenschaftliches Beispiel: Drei Kaffeeplantagen
beliefern drei Kaffeeröstereien mit Rohkaffee:

Der Bedarf und das Angebot sind ausgeglichen. Gesucht ist ein billigster Lieferplan. Den Suchen wir in Form einer drei mal drei Matrix $X$. Die Zahl $x_{ij}$ sagt uns, welche Menge $A_{i}$ an den Abnehmer $R_{j}$ liefert.

$$
\begin{matrix}
\text{Kostentabelle} & R_{1} & R_{2} & R_{3} & \text{Angebot} \\
A_{1} & 4 & 3 & 5 & 100 \\
A_{2} & 3 & 2 & 6 & 200 \\
A_{3} & 4 & 3 & 3 & 150 \\
\text{Bedürfnisse} &120 &80 &250 &450
\end{matrix}
$$
_**FRAGE:**_ Wie muss die Matrix zur Verteilung der Bohnen aussehen, um die meisten Wegkosten zu sparen?

# Lösungsweg
## Übersicht
Es muss gelten:

- Das Angebot muss jeweils gedeckt sein, dh. alle produzierten Güter müssen auch weiterverarbeitet werden:
$$
X

\cdot 

\begin{pmatrix}
1 \\
1 \\
1
\end{pmatrix}

 = 

\begin{pmatrix}
100 \\
200 \\
150
\end{pmatrix}
$$
$$
x_{00} + x_{01} + x_{02} = 100
$$
$$
x_{10} + x_{11} + x_{12} = 200
$$
$$
x_{20} + x_{21} + x_{22} = 150
$$
- Gleichzeitig muss das Bedürfnis gedeckt sein, d.h. alle alle weiterverarbeiteten Güter müssen produziert worden sein:
$$
X^T \cdot
\begin{pmatrix}
1 \\
1 \\
1
\end{pmatrix}= 
\begin{pmatrix}
120 \\
 80  \\
 250
\end{pmatrix}
$$
$$
x_{00} + x_{10} + x_{20} = 120
$$
$$
x_{01} + x_{11} + x_{21} = 80
$$
$$
x_{02} + x_{12} + x_{22} = 250
$$
Wie gut eine gegebene Lösung ist, kann bestimmt werden, in dem die Werte $x_{0} \dots x_{8}$ bzw. $x_{00}\dots x_{22}$ mit den Gewichten aus der Matrix $A$ verechnet werden

$$
\epsilon = x_{00} \cdot a_{00} + x_{01} \cdot a_{01} + \dots + x_{22} \cdot a_{22}
$$
## Aufstellung des unterbesetzten Gleichungssystems
Nun haben wir $6$ Gleichungen gegeben, die die Lösung beschreiben, und eine Gleichung, die minimiert werden soll.

Aus unserer Ergebnismatrix $X$ (3. Ordnung) machen wir nun einen Ergebnisvektor $\vec{x}$(9. Ordnung), um die Berechnung zu erleichtern.

$$
X = 
\begin{pmatrix}
x_{00} & x_{01} & x_{02} \\
x_{10} & x_{11} & x_{12} \\
x_{20} & x_{21} & x_{22} \\
\end{pmatrix}
\hspace{0,5cm}
\implies
\hspace{0,5cm}
\vec{x} = 
\begin{pmatrix}
x_{00} \\
x_{01} \\
x_{02} \\
x_{10} \\
x_{11} \\
x_{12} \\
x_{20} \\
x_{21} \\
x_{22}
\end{pmatrix}
$$
Nun kann das Gleichungssystem mit den in der [[#Übersicht]] aufgestellten Gleichungen erstellt werden.
z.B.:
$$
x_{00} + x_{01} + x_{02} = 100
$$
$$
\begin{matrix}
x_{00} & x_{01} & x_{02} & x_{10} & x_{11} & x_{12} & x_{20} & x_{21} & x_{22} &  &  &  \\
(1 & 1 & 1 & 0 & 0 & 0 & 0 & 0 & 0) & \cdot  & \vec{x} & = 100
\end{matrix}
$$
das kann nun für alle obrigen Gleichungen gemacht werden.
Daraus ergibt sich eine $9 \times 6$-Matrix, und ein Bildvektor $\vec{b}$ der Ordnung 6.
Zusammen ergeben sie das unterbestimmte Gleichungssystem, dass alle obrigen Gleichungen abdeckt.
$$
\begin{pmatrix}
1 & 1 & 1 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 1 & 1 & 1 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 0 & 1 & 1 & 1 \\
1 & 0 & 0 & 1 & 0 & 0 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & 1 & 0 & 0 & 1 & 0 \\
0 & 0 & 1 & 0 & 0 & 1 & 0 & 0 & 1
\end{pmatrix}

\cdot

\begin{pmatrix}
x_{00} \\
x_{01} \\
x_{02} \\
x_{10} \\
x_{11} \\
x_{12} \\
x_{20} \\
x_{21} \\
x_{22}
\end{pmatrix}

 = 
 \begin{pmatrix}
100 \\
200 \\
150 \\
120 \\
80 \\
250
\end{pmatrix}
$$
## Lösung des unterbestimmten linearen Gleichungssystems
==$\to$ Dieser Schritt kann vom Taschenrechner übernommen werden. Zu Demonstrationszwecken wird dieses unterbestimmte Gleichungssystem nun händisch gelöst.==

Hierfür werden einzelne Parameter im Bildvektor erstellt, und die Matrix entsprechend erweitert:
$$
\begin{pmatrix}
1 & 1 & 1 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 1 & 1 & 1 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 0 & 1 & 1 & 1 \\
1 & 0 & 0 & 1 & 0 & 0 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & 1 & 0 & 0 & 1 & 0 \\
0 & 0 & 1 & 0 & 0 & 1 & 0 & 0 & 1 \\
1 & 0 & 0 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 1 & 0 & 0 & 0 & 0 & 0
\end{pmatrix}

\cdot

\begin{pmatrix}
x_{00} \\
x_{01} \\
x_{02} \\
x_{10} \\
x_{11} \\
x_{12} \\
x_{20} \\
x_{21} \\
x_{22}
\end{pmatrix}

 = 
 \begin{pmatrix}
100 \\
200 \\
150 \\
120 \\
80 \\
250 \\
a \\
b \\
c \\
\end{pmatrix}
$$
Dieses Gleichungssystem kann mit dem Gaußalgorithmus oder durch intelligentes ablesen gelöst werden
$$
\begin{matrix}
x_{00} & = & a\\
x_{01} & = & b\\
x_{02} & = & 100 - a - b\\
x_{10} & = & c\\
x_{11} & = & \\
x_{12} & = & \\
x_{20} & = & 120 - a - c\\
x_{21} & = & \\
x_{22} & = & 
\end{matrix}
$$
An diesem Punkt fällt auf, dass die drei Variablen $x_{11}, x_{12}, x_{21}$ und $x_{22}$ alle abhängig voneinander sind. Das ist  darauf zurückzuführen, dass die vier zu den Werten gehörenden Zeilen linear abhängig voneinander sind.
Gemeint sind die drei Spalten:
$$
\vec{v}_{1} = \begin{pmatrix}
0 \\
1 \\
0 \\
0 \\
1 \\
0 \\
0 \\
0 \\
0
\end{pmatrix}
\hspace{1cm}
\vec{v}_{2} = \begin{pmatrix}
0 \\
1 \\
0 \\
0 \\
0 \\
1 \\
0 \\
0 \\
0
\end{pmatrix}
\hspace{1cm}
\vec{v}_{3} = \begin{pmatrix}
0 \\
0 \\
1 \\
0 \\
0 \\
1 \\
0 \\
0 \\
0
\end{pmatrix}
\hspace{1cm}
\vec{v}_{4} = \begin{pmatrix}
0 \\
0 \\
1 \\
0 \\
1 \\
0 \\
0 \\
0 \\
0
\end{pmatrix}
$$
und 
$$
\vec{v}_{4} = \vec{v}_{3} - \vec{v}_{2} + \vec{v}_{3}
$$
Dadurch wird eine weitere Gleichung und somit ein neuer Parameter $d$ benötigt, um dieses Gleichungssystem zu beschreiben:
$$
\begin{pmatrix}
1 & 1 & 1 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 1 & 1 & 1 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 0 & 1 & 1 & 1 \\
1 & 0 & 0 & 1 & 0 & 0 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & 1 & 0 & 0 & 1 & 0 \\
0 & 0 & 1 & 0 & 0 & 1 & 0 & 0 & 1 \\
1 & 0 & 0 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 1 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 1 & 0 & 0 & 0 & 0
\end{pmatrix}

\cdot

\begin{pmatrix}
x_{00} \\
x_{01} \\
x_{02} \\
x_{10} \\
x_{11} \\
x_{12} \\
x_{20} \\
x_{21} \\
x_{22}
\end{pmatrix}

 = 
 \begin{pmatrix}
100 \\
200 \\
150 \\
120 \\
80 \\
250 \\
a \\
b \\
c \\
d
\end{pmatrix}
$$
Dieses Gleichungssystem sieht nun überbestimmt aus, ist es aber nicht, da eine Lineare Abhängigkeit vorliegt.

Die Lösung kann an diesem Punkt fortgesetzt werden:
$$
\begin{matrix}
x_{00} & = & a\\
x_{01} & = & b\\
x_{02} & = & 100 - a - b\\
x_{10} & = & c\\
x_{11} & = & d\\
x_{12} & = & 200 - c - d\\
x_{20} & = & 120 - a - c\\
x_{21} & = & 80 - b - d\\
x_{22} & = & 150 - (120 - a - c) - (80 - b - d) & =a + b + c + d - 50
\end{matrix}
$$
## Aufstellung der Kostenfunktion und wichtiger Vorraussetzungen

### Kostenfunktion der 1. Plantage
$$
\epsilon_{1}(a, b, c , d) = 4a + 3b + 5(100-a-b) = 4a+3b+500-5a-5b = -a-2b+500
$$
### Kostenfunktion der 2. Plantage
$$
\epsilon_{2}(a, b, c, d) = 3c + 2d + 6(200-c-d) = 3c+2d+1200-6c-6d = -3c-4d+1200
$$
### Kostenfunktion der 3. Plantage
$$
\epsilon_{3}(a, b, c, d) = 4(120-a-c) + 3(80-b-d) + 3(a+b+c+d-50)= 570 - a - c
$$


### Zusammengefasste Kostenfunktion
$$
\epsilon(a, b, c, d) = \epsilon_{1}(a, b, c, d) + \epsilon_{2}(a, b, c, d) + \epsilon_{3}(a, b, c, d)
$$
$$
\epsilon(a, b, c, d) = -a-2b+500 + -3c-4d+1200 + 570 - a - c
$$
$$
\epsilon(a, b, c, d) = 2.270 -2a -2b -4 c - 4d
$$
dieses $\epsilon$ gilt es nun zu minimieren. Dabei gelten die folgenden Vorraussetzungen:

- Da die Parameter $a, b, c$ und $d$ so gewählt wurden, dass sie direkt Lösungsvariablen sind, muss gelten:
$$
a, b, c, d \geq 0
$$
- auch alle anderen Lösungsvariablen müssen größer als $0$ sein, da keine negative Anzahl an Kaffeebohnen geliefert werden kann:
$$
a + b \leq 100
$$
$$
a + c \leq 120
$$
$$
b + d \leq 80
$$
$$
c + d \leq 200 \hspace{1cm} (\text{Redundant, da } c \leq 120 \cap d \leq 80)
$$
$$
a + b + c + d \geq 50
$$
## Optimierung der Kostenfunktion
Der Wert der Kostenfunktion soll nun unter den gegebenen Vorraussetzungen minimiert werden.

Normalerweise kann dies über eine Bestimmung der Minima geschehen, doch da jegliche Ableitung der Funktion $\epsilon(a, b, d)$ nach einem der drei Parameter eine Konstante ist, erkennt man schnell, dass es keine lokalen Minima gibt. 

$\epsilon$ kann man sich nun als Ebene im 5 dimensionalen Raum vorstellen. Gesucht ist der Punkt, an dem $\epsilon$ minimal ist. Die errechneten Vorraussetzungen geben gewissermaßen die Form des Polygons auf der Ebene an, in der sich bewegt werden darf. 
Das Minima muss sich auf einem der Eckpunkte des Polygons befinden.

In der Formel lässt sich aus den Parametern herauslesen, dass $a, b, c$ und $d$ maximiert werden müssen, damit $\epsilon$ minimal wird.
$$
0 \leq a \leq 100
$$
$$
0 \leq b \leq 80
$$
$$
0 \leq c \leq 120
$$
$$
0 \leq d \leq 80
$$

$$
\epsilon(a, b, c, d) = 2.270 - 2 \cdot(a + b)  - 4 \cdot (c + d)
$$

$$
c = 120 - a
$$
$$
d = 80 - b
$$

$$
\epsilon(a, b) =2270 - 2 a - 2 b - 480 - 320 + 4a + 4 b = 1.470 + 2a + 2 b 
$$
Dieses $\epsilon$ wird minimal, wenn $a = b = 0$ und $c = 120$ und $d = 80$

---
Setzt man nun die Werte $a, b, c, d$ in die Rechnungen für den Lösungsvektor / die Lösungsmatrix ein erhält man nun eine ideale Verteilung:

$$
X = 
\begin{pmatrix}
0 & 0 & 100 \\
120 & 80 & 0 \\
0 & 0 & 150
\end{pmatrix}
$$
Mit einem Kostenwert von
$$
\epsilon = 1.470
$$
