#Rang 

Der Rang einer Matrix wird durch die linear unabhängigen Vektoren bestimmt. Dabei wird der Höchstmögliche Rang durch die Dimension bestimmt. Bei einer Quadratischen Matrix ist der Rang maximal gleich der Dimension der Matrix. Dementsprechend ist der rang einer $3*3$ Matrix maximal 3. Bei Unsymmetrischen Matrizen bestimmt den Maximalen Rang die geringste Zeilen beziehungsweise Spalten Anzahl. Bei einer $2*4$ Matrix wäre der höchstmögliche Rang 2. Andersrum bei einer $5*3$ Matrix wäre er 3.
Wenn die Determinante = 0 ist, ist der Rang automatisch kleiner als das Maximum.
Der Rang einer Matrix ist immer Mindestens 1, da es immer einen [[Linearkombinationen von Vektoren|linear unabhängigen]] Vektor geben muss. 

Der Rang einer Matrix zeigt, ob sie Invertierbar ist. Denn nur wenn sie den höchstmöglichen Rang hat kann man Sie invertieren. 

Der Rang einer Matrix kann mittels des [[Das gaußsche Eliminationsverfahren|Eliminationsverfahren nach Gauß]] bestimmt werden. 

Bei dieser $3*3$ Matrix  $M$ ist der Maximale Rang 3:

$$
M = 
\left[
\begin{matrix}
1 & 2 & 3 \\
2 & 4 & 7 \\
3 & 5 & 9 \\
\end{matrix}
\right]
$$
Mittels [[Das gaußsche Eliminationsverfahren|Gauß]] erhalten wir diese Matrix:
$$
\left[
\begin{matrix}
1 & 0 & 0 \\
-2 & 1 & 0 \\
-3 & 0 & 1
\end{matrix}
\right]*
\left[
\begin{matrix}
1 & 2 & 3 \\
2 & 4 & 7 \\
3 & 5 & 9
\end{matrix}
\right]
=
\left[
\begin{matrix}
1 & 2 & 3 \\
0 & 0 & 1 \\
0 & -1 & 0
\end{matrix}
\right]
$$
$$
M =
\left[
\begin{matrix}
1 & 2 & 3 \\
0 & 0 & 1 \\
0 & -1 & 0
\end{matrix}
\right]
$$
Anschließend werden alle Zeilen gezählt, die nicht nur Nullen enthalten. 
In diese fall ist das 3. Der Rang dieser Matrix ist also 3. 

Ein weiteres Beispiel an dieser $34$ Matrix:
$$
M =
\left[
\begin{matrix}
1 & 2 & 5 \\
2 & 4 & 10 \\
3 & 1 & 6 \\
9 & 3 & 18 
\end{matrix}
\right]
$$
Da sie nur drei spalten hat ist der Rang maximal 3.

$$

\left[
\begin{matrix}
1 & 0 & 0 & 0 \\
-2 & 1 & 0 & 0 \\
-3 & 0 & 1 & 0 \\
-9 & 0 & 0 & 1
\end{matrix}
\right]*
\left[
\begin{matrix}
1 & 2 & 5 \\
2 & 4 & 10 \\
3 & 1 & 6 \\
9 & 3 & 18
\end{matrix}
\right]
=
\left[
\begin{matrix}
1 & 2 & 5 \\
0 & 0 & 0 \\
0 & -5 & -9 \\
0 & -15 & -27
\end{matrix}
\right]
$$
$$
\left[
\begin{matrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & -3 & 1
\end{matrix}
\right]*
\left[
\begin{matrix}
1 & 2 & 5 \\
0 & 0 & 0 \\
0 & -5 & -9 \\
0 & -15 & -27
\end{matrix}
\right]=
\left[
\begin{matrix}
1 & 2 & 5 \\
0 & 0 & 0 \\
0 & -5 & -9 \\
0 & 0 & 0
\end{matrix}
\right]
$$
$$
M = 
\left[
\begin{matrix}
1 & 2 & 5 \\
0 & 0 & 0 \\
0 & -5 & -9 \\
0 & 0 & 0
\end{matrix}
\right]
$$

Da nur noch zwei Zeilen übrig sind ist der Rang der Matrix 2.

