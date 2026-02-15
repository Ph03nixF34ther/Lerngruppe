# Aufgabenstellung

Wir modellieren ein wirtschaftswissenschaftliches Beispiel: Drei Kaffeeplantagen
beliefern drei Kaffeeröstereien mit Rohkaffee:

Der Bedarf und das Angebot sind ausgeglichen. Gesucht ist ein billigster Lieferplan. Den Suchen wir in Form einer drei mal drei Matrix $X$. Die Zahl $x_{ij}$ sagt uns, welche Menge $A_{i}$ an den Abnehmer $R_{j}$ liefert.

Die Matrix $A$ ($\simeq$ Kostentabelle) gibt an der Stelle $a_{i, j}$ an, wie teuer es ist *eine* Kiste mit rohen Kaffeebohnen von der Plantage $i$ zur Rösterei $j$ zu transportieren. 

$$
\begin{matrix}
\text{Kostentabelle} & R_{1} & R_{2} & R_{3} & \text{Angebot} \\
A_{1} & 4 & 3 & 5 & 100 \\
A_{2} & 3 & 2 & 6 & 200 \\
A_{3} & 4 & 3 & 3 & 150 \\
\text{Bedürfnisse} &120 &80 &250 &450
\end{matrix}
$$
_**FRAGE:**_ Wie muss die Matrix zur Verteilung der Bohnen auf die Transportwege zwischen den Plantagen und Röstereien aussehen, um die meisten Wegkosten zu sparen?

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
- Gleichzeitig muss das Bedürfnis gedeckt sein, d.h. alle weiterverarbeiteten Güter müssen produziert worden sein:
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
Wie gut eine gegebene Lösung ist, kann bestimmt werden, in dem die Werte $x_{0} \dots x_{8}$ bzw. $x_{00}\dots x_{22}$ mit den Gewichten aus der Matrix $A$ verrechnet werden.

$$
\epsilon = x_{00} \cdot a_{00} + x_{01} \cdot a_{01} + \dots + x_{22} \cdot a_{22}
$$
Im Kontext unserer Aufstellung bedeutet das:
$$
\epsilon = \sum_{i = 0, j = 0}^9 (\text{Anzahl an Kaffeekisten die von } i \text{ nach } j \text{ gehen}) \times (\text{Wegkosten von } i \text{ nach } j)
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
Nun kann das [[Überblick über Lineare Gleichungssysteme#Herkömmliche Darstellung|lineares Gleichungssystem]]  mit den in der [[#Übersicht]] aufgestellten Gleichungen erstellt werden.
Dieses Gleichungssystem stellt dann sicher, dass die aufgestellten Regeln über Bedürfnisse und Angebot gesichert sind, und auf keinem Weg mehr geliefert wird als eine Plantage anbieten - oder eine Rösterei annehmen kann.
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
Daraus ergibt sich eine $9 \times 6$-Matrix, und ein [[Überblick über Lineare Gleichungssysteme#Herkömmliche Darstellung|Bildvektor]]  $\vec{b}$ der Ordnung 6.
Zusammen ergeben sie das unterbestimmte [[Überblick über Lineare Gleichungssysteme|Gleichungssystem]], dass alle [[#Übersicht|obrigen Gleichungen]] abdeckt.
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

### Lösung ohne Matrixschreibweise

Für die Lösung des Gleichungssystems ist keine Matrixschreibweise erforderlich.
Die obengenannten Gleichungen können auch anders gelöst werden:

$$
\begin{array}{rcl}
x_{00} + x_{01} + x_{02} & = & 100 \\
x_{10} + x_{11} + x_{12} & = & 200 \\
x_{20} + x_{21} + x_{22} & = & 150 \\ \\
x_{00} + x_{10} + x_{20} & = & 120 \\
x_{01} + x_{11} + x_{21} & = & 80 \\
x_{02} + x_{12} + x_{22} & = & 250 \\
\end{array}
$$
Nun können wir 4 der Variablen nutzen, um 4 andere Variablen darzustellen
$$
\begin{array}{rcl}
x_{02} & = & 100 - x_{00} - x_{01} \\
x_{12} & = & 200 - x_{10} - x_{11} \\
 \\
x_{20} & = & 120 - x_{00} - x_{10} \\
x_{21} & = & 80 - x_{01} - x_{11} \\
\end{array}
$$
die 9. Variable kann dann auf 2 verschiedene Arten berechnet werden
$$
\begin{array}{rclcrcl}
x_{20} + x_{21} + x_{22} = 150 & \implies & x_{22} = 150 - (120 - x_{00} - x_{10}) - (80 - x_{01} - x_{11})\\
x_{02} + x_{12} + x_{22} = 250 & \implies & x_{22} = 250 - (100 - x_{00} - x_{01}) - (200 - x_{10} - x_{11}) \\ \\
 & \implies  & x_{22} = -50 + x_{00} + x_{01} + x_{10} + x_{11}
\end{array}

$$
Damit ergibt sich für $X$:
$$
X = \begin{bmatrix}
x_{00} & x_{01} & 100 - x_{00} - x_{10} \\
x_{10} & x_{11} & 200 - x_{10} - x_{11} \\
120 - x_{00} - x_{10} & 80 - x_{01} - x_{11} & x_{00} + x_{01} + x_{10} + x_{11} - 50
\end{bmatrix}
$$
Um beim Kapitel [[#Aufstellung von Abhängigkeiten zwischen den Lösungsparametern]] fortsetzen zu können werden zuvor einige Substitutionen vonnöten sein, um mit den selben Ergebnissen, wie aus [[#Lösung in Matrixschreibweise]] weiterarbeiten zu können;
$$
\begin{array}{rcl}
x_{00} & = & a \\
x_{01} & = & b \\
x_{10} & = & c \\
x_{11} & = & d \\
\end{array}
$$
damit ergibt sich für $X$:
$$
X = \begin{bmatrix}
a & b & 100 - a - b \\
c & d & 200 - c - d \\
120 - a - c & 80 - b - d & a + b + c + d - 50
\end{bmatrix}
$$
### Lösung in Matrixschreibweise

Nun ist ein Problem erkennbar. Das lineare Gleichungssystem ist unterbesetzt. Das heißt, es gibt ***weniger*** voneinander [[Die lineare Abhängigkeit von LGS|linear unabhängige]] Gleichungen als Lösungsvariablen. Das bedeutet jede der Lösungsvariablen sind abhängig von anderen, und keine Lösungsvariable ist eindeutig bestimmbar.
Das ist sehr typisch für lineare Optimierungsprobleme.

Also wollen wir eine Lösung finden, die Abhängig ist von weniger als $9$ Lösungsvariablen.
Wir ergänzen also das Gleichungssystem um ein paar sehr simple Gleichungen um zu kontrollieren ob es damit lösbar ist.
Dafür bestimmen wir ganz einfach:
$$
\begin{array}{r c l}
x_{00} & = & a \\
x_{01} & = & b \\
x_{10} & = & c \\
\end{array}
$$

Hierfür werden einzelne Parameter im [[Überblick über Lineare Gleichungssysteme#Herkömmliche Darstellung|Bildvektor]] erstellt, und die Matrix entsprechend erweitert:
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
Dieses Gleichungssystem kann mit dem [[Das gaußsche Eliminationsverfahren|Gaußalgorithmus]] oder durch ==intelligentes ablesen== gelöst werden.
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
An diesem Punkt fällt auf, dass die drei Variablen $x_{11}, x_{12}, x_{21}$ und $x_{22}$ alle abhängig voneinander sind. 
Das ist darauf zurückzuführen, dass die vier zu den Werten gehörenden Spalten [[Die lineare Abhängigkeit von LGS|linear voneinander abhängige Vektoren]] sind.
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
Das heißt: wir können die $9$ Lösungsparameter noch nicht durch die $3$ Ersatzvariablen $a, b$ und $c$ darstellen. Wir brauchen mehr Ersatzvariablen:
$$
x_{11} = d
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
Das ergibt für die Lösungsmatrix $X$:
$$
X = \begin{bmatrix}
a & b & 100 - a - b \\
c & d & 200 - c - d \\
120 - a - c & 80 - b - d & a + b + c + d - 50
\end{bmatrix}
$$
## Aufstellung von Abhängigkeiten zwischen den Lösungsparametern
 
 Jetzt haben wir alle $9$ Lösungsvariablen durch $4$ Ersatzvariablen dargestellt.
 Wichtig zu beachten ist, dass keine der Lösungsvariablen $x_{i,j} < 0$ werden darf, da wir ja keine negative Menge Kaffee transportieren dürfen.

das heißt man kann sagen, dass:
$$
\begin{array} {r c l c r c l}
a & \geq & 0 \\
b & \geq & 0 \\
100-a-b & \geq & 0  & \implies & a+b & \leq & 100\\
c & \geq & 0 \\
d & \geq & 0 \\
200-c-d & \geq & 0  & \implies & c+d & \leq & 200\\
120-a-c & \geq & 0  & \implies & a+c & \leq & 120\\
80-b-d & \geq & 0   & \implies & b+d & \leq & 80\\
-50 +a+b+c+d & \geq & 0  & \implies & a+b+c+d & \geq  & 50\\ \\
\implies & a & \leq & 100 \\
\implies & b & \leq & 80 \\
\implies & c & \leq & 120 \\
\implies & d & \leq & 80 \\
\end{array}
$$
## Neuaufstellung der Kostenfunktion

Jetzt, da wir unsere Lösungsvariablen ersetzen können, können wir sie auch in der aufgestellten Kostenfunktion ersetzen. Da der Ausdruck in einer Zeile nicht darstellbar ist, verwende ich stattdessen ein Zeilenweises Vorgehen, so dass die Vereinfachung der Therme übersichtlich bleibt.

 - Kostenfunktion der 1. Plantage
$$
\epsilon_{1}(a, b, c , d) = 4a + 3b + 5(100-a-b) = 4a+3b+500-5a-5b = -a-2b+500
$$
-  Kostenfunktion der 2. Plantage
$$
\epsilon_{2}(a, b, c, d) = 3c + 2d + 6(200-c-d) = 3c+2d+1200-6c-6d = -3c-4d+1200
$$
-  Kostenfunktion der 3. Plantage
$$
\epsilon_{3}(a, b, c, d) = 4(120-a-c) + 3(80-b-d) + 3(a+b+c+d-50)= 570 - a - c
$$
$\implies$ Zusammengefasste Kostenfunktion
$$
\epsilon(a, b, c, d) = \epsilon_{1}(a, b, c, d) + \epsilon_{2}(a, b, c, d) + \epsilon_{3}(a, b, c, d)
$$
$$
\epsilon(a, b, c, d) = -a-2b+500 + -3c-4d+1200 + 570 - a - c
$$
$$
\epsilon(a, b, c, d) = 2.270 -2a -2b -4 c - 4d
$$

## Optimierung der Kostenfunktion

Der Wert der Kostenfunktion soll nun unter den gegebenen Vorraussetzungen minimiert werden.

Normalerweise kann dies über eine Bestimmung der Minima geschehen, doch da jegliche Ableitung der Funktion $\epsilon(a, b, c, d)$ nach einem der vier Parameter eine Konstante ist, erkennt man schnell, dass es keine lokalen Minima der Funktionen gibt. 
Das bedeutet, dass das Minima der Kostenfunktion in einer der Randwerte von $a, b, c$ und $d$ liegt.

$\epsilon$ kann man sich nun als Ebene im 5 dimensionalen Raum vorstellen. Gesucht ist der Punkt, an dem $\epsilon$ minimal ist. Die [[Aufgabe - Kaffeeplantage#Aufstellung von Abhängigkeiten zwischen den Lösungsparametern|errechneten Vorraussetzungen]] geben gewissermaßen die Form des Polygons auf der Ebene an, in der sich bewegt werden darf. 
Das Minima muss sich auf einem der Eckpunkte des Polygons befinden.
$$
\epsilon(a, b, c, d) = 2.270 - 2 \cdot(a + b)  - 4 \cdot (c + d)
$$
(Der Vollständigkeit halber werden hier nun auch noch einmal die Bedingungen angeführt)
$$
\begin{array} {r r c l }
 & a & \geq & 0 \\
 & b & \geq & 0 \\
 & c & \geq & 0 \\
 & d & \geq & 0 \\
 & a+b & \leq & 100\\
 & a+c & \leq & 120\\
 & b+d & \leq & 80\\
 & c+d & \leq & 200 & (\text{Diese ist redundant, da } c <120 \cap d < 80)\\
 & a+b+c+d & \geq  & 50\\ \\
\implies & a & \leq & 100 \\
\implies & b & \leq & 80 \\
\implies & c & \leq & 120 \\
\implies & d & \leq & 80 \\
\end{array}
$$
Aus der Formel lässt sich erkennen, dass das Erhöhen eines Parameters die Kostenfunktion minimiert. Das heißt wir versuchen die Parameter im Sinne ihrer Vorfaktoren in der $\epsilon$-Funktion zu maximieren.

Nun versuchen wir $2$ Parameter in der Gleichung zu ersetzen, da wir wissen, dass $a, b, c$ und $d$ maximal werden sollen, können wir zumindest 2 Gleichungen, die nicht direkt voneinander Abhängig sind als maximal und somit als Gleichungen annehmen:
$$
\begin{array}{rcl}
a + c & = & 100 \\
b + d & = & 80
\end{array}
$$
Nun können 2 der 4 Lösungsparameter durch 2 andere dargestellt werden:
$$
\begin{array}{rcl}
c & = & 120-a \\
d & = & 80-b
\end{array}
$$

Diese Darstellung kann nun in die Kostenfunktion eingesetzt werden:
$$
\epsilon(a, b) =2270 - 2 a - 2 b - 480 - 320 + 4a + 4 b = \boxed{ 1.470 + 2a + 2 b } 
$$
Dieses $\epsilon$ wird minimal, wenn $a = b = 0$ 
$c$ und $d$ müssen über die oben angegebenen Gleichungen errechnet werden
$\implies$ $c = 120$ und $d = 80$

---

# Gefundene Lösung

Setzt man nun die Werte $a, b, c, d$ in die Rechnungen für den Lösungsvektor / die Lösungsmatrix ein erhält man nun eine ideale Verteilung:

$$
X = \begin{bmatrix}
a & b & 100 - a - b \\
c & d & 200 - c - d \\
120 - a - c & 80 - b - d & a + b + c + d - 50
\end{bmatrix}
$$

$$
X = 
\begin{bmatrix}
0 & 0 & 100 \\
120 & 80 & 0 \\
0 & 0 & 150
\end{bmatrix}
$$
Mit einem Kostenwert von
$$
\epsilon = 1.470
$$
