Die Vandermonde-Matrix $V$ wird aus einzelnen Datenpunkten gebildet. Ihre Dimension wird durch die Anzahl der Datenpunkten bestimmt. Bei drei Daten währe die Dimension der Matrix $V$ $3\cdot 3$. 

Jede Spalte wird mit jeweils einer Zahl gefüllt. Anschließend werden die einzelnen Zeilen potenziert. Von 0 bis $n-1$. Dabei ist $n$ die Anzahl der Datenpunkte ist.

Muster:
$$
V =
\begin{bmatrix}
a ^0 & b ^0 & c ^0 \\
a ^1 & b ^1 & c ^1 \\
a ^2 & b ^2 & c ^2
\end{bmatrix}
$$
Wenn aus dem dem Polynom $p(x)$ die Vandermonde-Matrix gebildet werden soll würd die Lösung so aussehen:
$$
p(x)=(x+4)\cdot (x-3)\cdot (x+2)
$$
$$
V = 
\begin{bmatrix}
4 ^0 & -3 ^0 & 2 ^0 \\
4 ^1 & -3 ^1 & 2 ^1 \\
4 ^2 & -3 ^2 & 2 ^2
\end{bmatrix}
$$
$$
V = 
\begin{bmatrix}
1 & 1 & 1 \\
4 & -3 & 2 \\
16 & 9 & 4
\end{bmatrix}
$$
