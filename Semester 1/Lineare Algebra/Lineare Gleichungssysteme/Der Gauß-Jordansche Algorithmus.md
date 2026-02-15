# Beschreibung des gaußschen Eliminationsverfahrens 

| Gesucht | $x$        |
|---------|------------|
| Gegeben | $b$, $A$   |

1. Das gaußsche Eliminationsverfahren verändert durch simple Rechenschritte sowohl die Matrix $A$ alsauch den Bildvektor $b$ um die Matrix in eine Dreiecksmatrix umzuwandeln.

2. Daraufhin wird die Matrix mit einer $L$ Matrix so multipliziert, dass alle Werte auf der Diagonale $1$ ist.

3. Zuletzt wird das gaußsche Eliminationsverfahren erneut angewandt, sodass die Koeffizieentenmatrix nun zur Einheitsmatrix wird.

Die Variablen müssen jedoch nicht aus der Koeffizientenmatrix und dem Bildvektor gedeutet werden, sondern der Urbildvektor **ist** der veränderte Bildvektor
$$
x = b'
$$

# Beispiel für das gaußsche Eliminationsverfahren
Es wird das Beispiel aus dem Unterkapitel [Das gaußsche Eliminationsverfahren](#das-gaußsche-eliminationsverfahren) verwendet. Es wird vorrausgesetzt, dass das gaußsche Eliminationsverfahren bereits angewandt wurde.
$$
A:= 
\begin{pmatrix} 
3 & 5 & -2 \\ 
4  & -1 & 4 \\ 
1 & 1 & 1 
\end{pmatrix} 
\hspace{1cm}
b := 
\begin{pmatrix} 
10 \\ 
5 \\ 
20 
\end{pmatrix}
$$
---
$$
\Rightarrow
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & -5 & 0 & -75 \\ 
0  & 0 & -25  & -400
\end{array} 
\right] 
$$
---
$$
\left[
\begin{array}{ccc}
1 & 0 & 0        \\
0 & -0.2 & 0         \\
0 & 0 & -0.04
\end{array} 
\right] *
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & -5 & 0 & -75 \\ 
0  & 0 & -25  & -400
\end{array} 
\right] =
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & 1 & 0 & 15 \\ 
0  & 0 & 1  & 16
\end{array} 
\right]
$$
$$
\left[
\begin{array}{ccc}
1 & -1 & -1        \\
0 & 0 & 0         \\
0 & 0 & 0
\end{array} 
\right]* 
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & 1 & 0 & 15 \\ 
0  & 0 & 1  & 16
\end{array} 
\right]
 =

\left[
\begin{array}{ccc|c}
1 & 0 & 0 & -11 \\
0 & 1 & 0 & 15 \\ 
0  & 0 & 1  & 16
\end{array} 
\right]
$$
Das Ergebnis steht im Vektor $b'$. Dieser ist der erweiterte Teil der Matrix (hinter dem Strich).

D.h. Das Ergebnis ist $x_0 = -11$, $x_1 = 15$ und $x_2 = 16$. 
