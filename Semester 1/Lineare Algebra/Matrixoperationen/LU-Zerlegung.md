---
aliases:
  - LR-Zerlegung
---

Das Ziel der LU-Zerlegung ist es, eine Matrix $A$, in eine rechte obere Dreiecksmatrix $U$ und eine linke untere Dreiecksmatrix $L$, zu teilen und zwar so, dass sie Multipliziert wieder die Originale Matrix $A$ ergibt.

$$
A = \left[\begin{array}{c}
1 & 2 & 4 \\
5 & 8 & -6 \\
3 & -2 & 7
\end{array}\right]$$

Dafür wird [[Das gaußsche Eliminationsverfahren]] angewendet
$U$ ist dann die sich ergebene Matrix und $L$ die 

$$
L_1 = \left[\begin{array}{c}
1 & 0 & 0 \\
5 & -1 & 0 \\
3 & 0 & -1
\end{array}\right]$$
$$
L_2 = \left[\begin{array}{c}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 4 & -1
\end{array}\right]$$
$$
L = L_2 \cdot L_1 = \left[\begin{array}{c}
1 & 0 & 0 \\
5 & -1 & 0 \\
17 & -4 & 1
\end{array}\right]
$$
$$
U = L_2 \cdot L_1 \cdot A = L \cdot A = \left[\begin{array}{c}
1 & 2 & 4 \\
0 & 2 & 26 \\
0 & 0 & 99
\end{array}\right]
$$
$$
A = L^{-1} \cdot U = \left[\begin{array}{c}
1 & 0 & 0 \\
5 & -1 & 0 \\
3 & -4 & 1
\end{array}\right] \cdot \left[\begin{array}{c}
1 & 2 & 4 \\
0 & 2 & 26 \\
0 & 0 & 99
\end{array}\right] = \left[\begin{array}{c}
1 & 2 & 4 \\
5 & 8 & -6 \\
3 & -2 & 7
\end{array}\right]
$$
