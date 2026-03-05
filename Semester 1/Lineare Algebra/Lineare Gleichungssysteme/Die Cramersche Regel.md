# Beschreibung der cramerschen Regel

| Gesucht | $x$      |
| ------- | -------- |
| Gegeben | $b$, $A$ |

Die Cramersche Regel findet die Lösungsvariable $x_n\,$, indem man die Determinante von $A_n$ durch die Determinante von $A$ teilt

$$
x_n = \dfrac{\det(A_n)}{\det(A)}
$$

Dabei ist $A_n$ die gegebene Matrix, aber es wird die Spalte, welche die Koeffizienten von $x_n$ festhält, durch den gegebenen Vektor $b$ ersetzt

1. Errechne die Determinante $\det(A)$
2. Setze den Bildvektor in die $n$te Spalte der Koeffizientenmatrix $A$ ein (diese neue Matrix heißt $A_n$)

Beispiel: $x_2$

$$\begin{array}{ccc}
a_{11} \cdot x_{11} + a_{12} \cdot x_{12} + . . . + a_{1n} \cdot x_{1n} & = & b_1 \\
a_{21} \cdot x_{21} + a_{22} \cdot x_{22} + . . . + a_{2n} \cdot x_{2n} & = & b_2 \\
. &  & . \\
. &  & . \\
. &  & . \\
a_{m1} \cdot x_{m1} + a_{m2} \cdot x_{m2} + . . . + a_{mn} \cdot x_{mn} & = & b_m
\end{array}$$
$$
\begin{array}{c}
\Downarrow
\end{array}
$$
$$A = \left[\begin{array}{c}
a_{11} & a_{12} & . . . & a_{1n} \\
a_{21} & a_{22} & . . . & a_{2n} \\
. & . & . & . \\
. & . & . & . \\
. & . & . & . \\
a_{m1} & a_{m2} & . . . & a_{mn}
\end{array}\right]$$
$$
\Downarrow
$$
$$
A_n = \left[\begin{array}{c}
a_{11} & b_1 & . . . & a_{1n} \\
a_{21} & b_2 & . . . & a_{2n} \\
. & . & . & . \\
. & . & . & . \\
. & . & . & . \\
a_{m1} & b_m & . . . & a_{mn}
\end{array}\right]$$

3. Errechne die Determinante $\det(A_n)$
4. Rechne $x_n = \dfrac{\det(A_n)}{\det(A)}$

---

# Beispiel für das Lösen eines LGS mittels der Cramerschen Regel

$$\begin{array}{lr}
A = \begin{pmatrix} 
3 & 5 & -2 \\ 
4  & -1 & 4 \\ 
1 & 1 & 1 
\end{pmatrix} &
b = \begin{pmatrix} 
10 \\ 
5 \\ 
20 
\end{pmatrix}
\end{array}$$

$$
\det(A) = \det
\left(
\left[\begin{array}{ccc}
3 & 5 & -2 \\ 
4  & -1 & 4 \\ 
1 & 1 & 1 
\end{array}\right]
\right) = -25
$$

Die Determinante ist $\not = 0$, dh. es gibt eine Lösung des LGS.

$$\begin{array}{lr}
\det(A_1) = \det
\left(
\left[\begin{array}{|c|cc}
10 & 5 & -2 \\ 
5 & -1 & 4 \\ 
20 & 1 & 1 
\end{array}\right]
\right) = 275 & \Rightarrow & x_{1} = \dfrac{275}{-25} = \underline{\underline{-11}} \\
\\
\det(A_2) = \det\left( \\
\left[\begin{array}{c|c|c}
3 & 10 & -2 \\ 
4 & 5 & 4 \\ 
1 & 20 & 1 
\end{array}\right] \\
\right) = -375 & \Rightarrow & x_2 = \dfrac{-375}{-25} = \underline{\underline{15}} \\
\\
\det(A_3) = \det\left( \\
\left[\begin{array}{cc|c|}
3 & 5 & 10 \\ 
4 & -1 & 5 \\ 
1 & 1 & 20 
\end{array}\right] \\
\right) = -400 & \Rightarrow & x_3 = \dfrac{-400}{-25} = \underline{\underline{16}}
\end{array}$$
