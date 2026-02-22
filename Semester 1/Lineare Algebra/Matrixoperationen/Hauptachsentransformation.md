Bei der Hauptachsentransformation ($TDT ^{-1}$) wird eine Matrix A in zwei weitere Matrizen aufgeteilt. Dabei gilt, dass $T\cdot D\cdot T^{-1}$ wieder unser A ergibt. Auch wichtig ist, dass die Hauptachsentransformation nur für quadratische Matrizen funktioniert.

Mithilfe der Hauptachsentransformation, kann ein Objekt, welches zunächst schief im Raum liegt so drehen, dass es danach parallel zu den Koordinatenachsen verläuft. Dies ist unfassbar nützlich, da man nun die Eigenschafften dieses Objekts (wie z.B. Länge oder Breite) viel einfacher berechnen kann.

Im weiteren Verlauf wird die Berechnung dieser HAT dargestellt.

$$
A=
\begin{bmatrix}
0 & 1 & 0 \\
0 & 0 & 1 \\
36 & -49 & 14
\end{bmatrix}
$$

Berechnen von D mithilfe der Eigenwerten:
$$
\text{Regel:}\;\;\; \det(A-x\cdot I)=0
$$
$$
x\cdot
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 1
\end{bmatrix}
=
\begin{bmatrix}
x & 0 & 0 \\
0 & x & 0 \\
0 & 0 & x
\end{bmatrix}
$$
$$
\begin{bmatrix}
0 & 1 & 0 \\
0 & 0 & 1 \\
36 & -49 & 14
\end{bmatrix}
-
\begin{bmatrix}
x & 0 & 0 \\
0 & x & 0 \\
0 & 0 & x
\end{bmatrix}
=
\begin{bmatrix}
-x & 1 & 0 \\
0 & -x & 1 \\
36 & -49 & -x+14
\end{bmatrix}
$$
$$
\det
\left(
\begin{bmatrix}
-x & 1 & 0 \\
0 & -x & 1 \\
36 & -49 & -x+14
\end{bmatrix}
\right)
=
-x ^3+14x ^2-49x+36
=
0
$$
$$
-x ^3+14x ^2-49x+36=0 \to (1,4,9)
$$
$$
D=\underline{\underline{
\begin{bmatrix}
1 & 	0 & 0 \\
0 & 4 & 0 \\
0 & 0 & 9
\end{bmatrix}}}
$$
Berechnen von T mithilfe der Eigenvektoren:
$$
\text{Regel:}\;\;\; (A-Eigenwert_{n}\cdot I)\cdot v=0
$$
$$
\text{Eigenwerte siehe oben (1, 4, 9)}
$$
$$
\begin{bmatrix}
0-1 & 1 & 0 \\
0 & 0-1 & 1 \\
36 & -49 & 14-1
\end{bmatrix}
\cdot v_{0}=
\begin{pmatrix}
0 \\
0 \\
0
\end{pmatrix}
\to
v_{0}=
\begin{bmatrix}
1 \\
1 \\
1
\end{bmatrix}
$$
$$
\begin{bmatrix}
0-4 & 1 & 0 \\
0 & 0-4 & 1 \\
36 & -49 & 14-4
\end{bmatrix}
\cdot v_{1}=
\begin{pmatrix}
0 \\
0 \\
0
\end{pmatrix}
\to
v_{1}=
\begin{bmatrix}
\frac{1}{16} \\
\frac{1}{4} \\
1
\end{bmatrix}
$$
$$
\begin{bmatrix}
0-9 & 1 & 0 \\
0 & 0-9 & 1 \\
36 & -49 & 14-9
\end{bmatrix}
\cdot v_{2}=
\begin{pmatrix}
0 \\
0 \\
0
\end{pmatrix}
\to
v_{2}=
\begin{bmatrix}
\frac{1}{81} \\
\frac{1}{9} \\
1
\end{bmatrix}
$$
$$
\to T=
\underline{\underline{
\begin{bmatrix}
1 & \frac{1}{16} & \frac{1}{81} \\
1 & \frac{1}{4} & \frac{1}{9} \\
1 & 1 & 1
\end{bmatrix}}}
$$
Kontrolle:
$$
T\cdot D\cdot T ^{-1}=
\begin{bmatrix}
0 & 1 & 0 \\
0 & 0 & 1 \\
36 & -49 & 14
\end{bmatrix}
= A
\to \text{richtig}
$$
