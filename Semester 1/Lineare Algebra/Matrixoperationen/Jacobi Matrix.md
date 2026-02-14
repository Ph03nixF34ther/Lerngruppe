
Die Jacobi Matrix sammelt alle partiellen Ableitungen einer Funktion. Dabei kann dies wie folgt aussehen:
$$
f(x,y)=

\begin{bmatrix}
x ^2 \cdot y ^3 \\
\ln(y) \\
x + y
\end{bmatrix}
\begin{matrix}
\to & f_{1} \\
\to & f_{2} \\
\to & f_{2}
\end{matrix}
$$
$$
f_{1} ^{'}(x)=2x\cdot y ^3; \ \ \ f_{1} ^{'}(x)=x ^2\cdot 3y ^2
$$
$$
f_{2} ^{'}(x)=0; \ \ \ f_{2} ^{'}(y)=\frac{1}{y}
$$
$$
f_{3} ^{'}(x)=1; \ \ \ f_{3} ^{'}(y)=1
$$

Nachdem wir nun alle Ableitungen gebildet haben, können wir nun die Jacobi Matrix aufstellen. Dies geschieht in der selben Reihenfolge.

$$
J_{f}(x,y)=
\begin{bmatrix}
2x \cdot y ^3 & 3x ^2 \cdot y ^2 \\
0 & \frac{1}{y} \\
1 & 1
\end{bmatrix}
$$
