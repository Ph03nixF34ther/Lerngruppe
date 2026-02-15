Die Krylow-Matrix $K$ wir aus einer Quadratischen Matrix $M$ und einem Vektor $v$ gebildet. Sie ist geeignet um den Koeffizienten-Vektor eines [[Charakteristische Polynome|Charakteristischem Polynoms]] zu bestimmen.
Die einzelnen Spalten von $K$ setzen sich aus Multiplikationen der Matrix $M$ mit dem Vektor $v$ zusammen.
Sie wird wie folgt gebildet:

Für jede Spalte von $K$ wird die Matrix $M$ mit dem Vektor $v$ multipliziert.
Dabei ändert sich für jede Spalte die Potenz von $M$ um 1. 
Für die Erste Spalte von $K$ wird die 0 als Potenz genommen für jede weitere Spalte wird die Potenz um eins erhöht. 

Wenn $M$ eine $3 \cdot 3$ Matrix ist würde die Krylow-Matrix so aussehen:
$$
M =
\begin{bmatrix}
1 & 2 & 4 \\
3 & 1 & 2 \\
1 & 2 & 5
\end{bmatrix}
, v = 
\begin{bmatrix}
2 \\
1 \\
2
\end{bmatrix}
$$
Da für die erste Spalte $M ^0\cdot v$ gerechnet wird kann man für diese immer $v$ nehmen
$$
K =
\begin{bmatrix}
2 & * & * \\
1 & * & * \\
2 & * & * 
\end{bmatrix}
$$
Für die nächste Spalte wird nun $M ^1 \cdot v$ gerechnet:
$$
K = 
\begin{bmatrix}
2 & 12 & * \\
1 & 11 & * \\
2 & 14 & *
\end{bmatrix}
$$
Dieses Muster wird fortgesetzt mit nun $M ^2 \cdot v$ :
$$
K = 
\begin{bmatrix}
2 & 12 & 90 \\
1 & 11 & 75 \\
2 & 14 & 104
\end{bmatrix}
$$
Wenn M eine $4\cdot 4$ Matrix wäre würde die nächste Spalte $M ^3\cdot v$ sein.

Damit ist die Bildung der Krylow-Matrix abgeschlossen. 

Um aus der Krylow-Matrix den Koeffizienten-Vektor des [[Charakteristische Polynome|Charakteristischem Polynoms]] von $M$ zu bestimmen muss $-K$ invertiert werden und mit der Theoretisch folgenden Spalte Multipliziert werden. 

Dementsprechend wäre die Rechnung für eine $3 \cdot 3$ Matrix:
$$
-K ^{-1} \cdot M ^3 \cdot v
$$
$$
K ^{-1}=
\begin{bmatrix}
\frac{47}{10} & \frac{3}{5} & -\frac{9}{2} \\
\frac{23}{10} & \frac{7}{5} & -3 \\
-\frac{2}{5} & -\frac{1}{5} & \frac{1}{2}
\end{bmatrix}
M ^3 =
\begin{bmatrix}
75 & 90 & 208 \\
65 & 75 & 174 \\
87 & 104 & 241
\end{bmatrix}
$$
$$
-K ^{-1} \cdot M ^3\cdot v =
\begin{bmatrix}
5 \\
-3 \\
-7
\end{bmatrix}
$$
Das [[Charakteristische Polynome|Charakteristische Polynom]] von M lautet dementsprechend:
$$
p(x)=x^3-7 \cdot x^2-3 \cdot x+5
$$