# Linearkombinationen von Vektoren

Bei der Linearkombination wird ein Vektor gesucht der sich aus verschiedenen anderen Vektoren ergibt. Die ursprünglichen Vektoren werden jeweils mit einem Faktor multipliziert um addiert den Vektor zu Ergeben.

## Beispiel:


$u$, $v$ und $w$ sind Vektoren.


$$
u = 
\left[
\begin{matrix}
5 \\
1 \\
2
\end{matrix}
\right]
$$

$$

v = 
\left[
\begin{matrix}
2\\
3 \\
4
\end{matrix}
\right]
$$

$$

w = 
\left[
\begin{matrix}
1 \\
3 \\
4
\end{matrix}
\right]
$$

Sie sollen summiert den Vektor $y$ ergeben

$$

y = 
\left[
\begin{matrix}
3 \\
1 \\
-2
\end{matrix}
\right]
$$

$$
a * u + b * v + c * w = y
$$

Dafür werden die einzelnen Vektoren in eine Matrix zusammengeschrieben

$$

\left[
\begin{matrix}
5 & 2 & 1 \\
1 & 3 & 3 \\
2 & 4 & 4
\end{matrix}
\right]
*
\left[
\begin{matrix}
a \\
b \\
c
\end{matrix}
\right]
= 
\left[
\begin{matrix}
3 \\
1 \\
-2
\end{matrix}
\right]
$$

Nun können wir mit dem [[Das gaußsche Eliminationsverfahren|Gaußschen Eliminationsverfahren]] dieses Gleichungssystem lösen.

$$
\left[
\begin{matrix}
5 & 2 & 1 \\
0 & 13 &14 \\
0 & 0 & 10
\end{matrix}
\right]
*
\left[
\begin{matrix}
a \\
b \\
c
\end{matrix}
\right]
=
\left[
\begin{matrix}
3 \\
2 \\
-176
\end{matrix}
\right]
$$

Daraus folgt:

$$
c = 17,6
$$
$$
b = -18,8
$$
$$
a = 4,6
$$
So ist die Lösung:
$$

\left[
\begin{matrix}
5 & 2 & 1 \\
1 & 3 & 3 \\
2 & 4 & 4
\end{matrix}
\right]
*
\left[
\begin{matrix}
4,6 \\
-18,8 \\
17,6
\end{matrix}
\right]
= 
\left[
\begin{matrix}
3 \\
1 \\
-2
\end{matrix}
\right]
$$
