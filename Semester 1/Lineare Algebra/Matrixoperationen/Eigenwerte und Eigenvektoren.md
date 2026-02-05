Ein Eigenvektoren ist ein Vektor $\vec{v}$, der mit einer quadratischen Matrix $M$ Multipliziert wieder diesen Vektor $\vec{v}$ ergeben, nur mit einem Faktor $a$. Diesen Faktor $a$ nennt man Eigenwert.

$$
M*\vec{v}= a*\vec{v}
$$
Die Suche nach dem erfüllen dieser Gleichung nennt man Eigenwertproblem.
Der Eigenvektor darf dabei nicht der Nullvektor sein.

Die Eigenwerte lassen sich aus dem [[Charakteristische Polynome|Charakteristischem Polynom]] einer Matrix berechnen. Denn die Nullstellen dieses Polynoms sind die Eigenwerte der Matrix. Mit den Eigenwerten dieser Matrix lassen sich dann wiederum die Eigenvektoren Berechnen.

## Eigenwerte

Für die Eigenwerte der Matrix $M$ muss zu erst das [[Charakteristische Polynome|Charakteristischem Polynom]] $p(\lambda)$ dieser Matrix gebildet werden. Die Nullstellen dieses Polynoms bilden dann die Eigenwerte.

Beispiel:

$$
M = 
\left[
\begin{matrix}
1 & 2 & -1 \\
0 & 3 & 0 \\
-1 & 2 & 1
\end{matrix}
\right]
$$
$$
p(\lambda) = (3-\lambda)\cdot \lambda \cdot(-2 + \lambda)
$$

Zuerst müssen die Nullstelen dieses Polynoms berechnet werden:
$$
p(\lambda) = 0
$$
$$
(3-\lambda)\cdot \lambda \cdot(-2 + \lambda) = 0
$$
$$
\lambda_{1} = 0
$$
$$
\lambda_{2} = 3
$$
$$
\lambda_{3} = 2
$$
Alle Eigenwerte dieser Matrix sind also $0$, $2$ und $3$

## Eigenvektoren

Die Eigenvektoren $\vec{v}$ einer Matrix $M$ ergeben sich aus den Eigenwerten $\lambda$ dieser Matrix. Dieser werden einzeln in die Formel $(M-\lambda\cdot E)\cdot \vec{v} = 0$ eingesetzt. Dabei ist $E$ die zu $M$ passende Einheitsmatrix. 
Beispiel:
$$
M = 
\left[
\begin{matrix}
1 & 2 & -1 \\
0 & 3 & 0 \\
-1 & 2 & 1
\end{matrix}
\right], \lambda_{1} = 0,  \lambda_{2} = 3, \lambda_{3} = 2
$$
$$
M-\lambda\cdot E:
$$
$$
\lambda_{1}:

\left[
\begin{matrix}
1 & 2 & -1 \\
0 & 3 & 0 \\
-1 & 2 & 1
\end{matrix}
\right]
$$
$$
\lambda_{2}:

\left[
\begin{matrix}
-2 & 2 & -1 \\
0 & 0 & 0 \\
-1 & 2 & -2
\end{matrix}
\right]
$$
$$
\lambda_{3}:

\left[
\begin{matrix}
-1 & 2 & -1 \\
0 & 1 & 0 \\
-1 & 2 & -1
\end{matrix}
\right]
$$
Diese Matrizen multipliziert mit dem Eigenvektor $\vec{v}$ soll den Nullvektor als Ergebnis liefern. Hierfür verwenden wir [[Das gaußsche Eliminationsverfahren]].

$$
\left[
\begin{array}{c c c| c}
1 & 2 & -1 & 0 \\ 
0 & 3 & 0 & 0 \\
-1 & 2 & 1 & 0
\end{array}
\right]
$$
$$
\left[
\begin{array}{c c c| c}
1 & 2 & -1 & 0 \\ 
0 & 3 & 0 & 0 \\
0 & 4 & 0 & 0
\end{array}
\right]
$$
$$
\left[
\begin{array}{c c c| c}
1 & 2 & -1 & 0 \\ 
0 & 3 & 0 & 0 \\
0 & 0 & 0 & 0
\end{array}
\right]
$$
Da in Zeile 3 $0=0$ entstanden ist, bedeutet es, dass $z$ frei wählbar ist.
$$
y = \frac{0}{3}= 0 
$$
$$
x = z 
$$
Daraus ergibt sich:
$$
\vec{v}= 
\begin{bmatrix}
z \\
0 \\
z
\end{bmatrix}
$$
Wenn $z=1$ gewählt wird lautet der erste Eigenvekor der Matrix $M$:
$$
z = 1 \to
\vec{v}= 
\begin{bmatrix}
1 \\
0 \\
1
\end{bmatrix}
$$
$\lambda_{2}:$
$$
\left[
\begin{array}{c c c | c}
-2 & 2 & -1 & 0 \\
0 & 0 & 0 & 0 \\
-1 & 2 & -2 & 0
\end{array}
\right]
$$

$$
\left[
\begin{array}{c c c | c}
-2 & 2 & -1 & 0 \\
0 & 0 & 0 & 0 \\
0 & -2 & 3 & 0
\end{array}
\right]
$$
$y$ ist frei wählbar:
$$
z = \frac{2y}{3}
$$
$$
x = \frac{-2y +\frac{2y}{3}}{-2}
$$
Für y = 3:
$$
y = 2\to \vec{v}=
\begin{pmatrix}
2 \\
3 \\
2
\end{pmatrix}
$$
$\lambda_{3}$:
$$
\left[
\begin{array}{c c c| c}
-1 & 2 & -1 & 0 \\ 
0 & 1 & 0 & 0 \\
-1 & 2 & -1 & 0
\end{array}
\right]
$$
$$
\left[
\begin{array}{c c c| c}
-1 & 2 & -1 & 0 \\ 
0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0
\end{array}
\right]
$$
$z$ frei wählbar:
$$
y = \frac{0}{1}= 0
$$
$$
x = -z
$$
Mit $z = 1$:
$$
\vec{v} = 
\begin{pmatrix}
-1 \\
0 \\
1
\end{pmatrix}
$$
Dementsprechend sind die Eigenvektoren der Matrix $M$:
$$
V=
\begin{pmatrix}
1 & 2 & -1 \\
0 & 3 & 0 \\
1 & 2 & 1
\end{pmatrix}
$$



