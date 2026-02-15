# Herkömmliche Darstellung
Bei linearen Gleichungssystemen wird ein Urbildvektor $x$ über eine Matrix $A$ auf einen Bildvektor $b$ abgeblildet.
$$
A \cdot x= b
$$

$A = \text{Koeffizienten-Matrix}$
$x = \text{Urbildvektor}$
$b = \text{Bildvektor}$

Die Darstellung lässt sich aus $n$-dimensionalen Gleichungssystemen aus der Schule ableiten:

$$(x_0 * a_{00}) + (x_1 * a_{01}) + (x_2 * a_{02}) = b_0$$
$$(x_1 * a_{10}) + (x_1 * a_{11}) + (x_2 * a_{12}) = b_1$$
$$(x_2 * a_{20}) + (x_1 * a_{21}) + (x_2 * a_{22}) = b_2$$

$$
\begin{pmatrix}
a_00 & a_01 & a_02 \\
a_10 & a_11 & a_12 \\
a_20 & a_21 & a_22
\end{pmatrix}
\cdot
\begin{pmatrix}
x_0 \\
x_1 \\
x_2
\end{pmatrix}
 = 
\begin{pmatrix}
b_0 \\
b_1 \\
b_2
\end{pmatrix}
$$
$$

$$
# Darstellung 3 Dimensionaler Gleichungssysteme als Ebenen im 3 Dimensionalen Raum

Jede Gleichung in einem 3 dimensionalen Gleichungssystem kann im 3 dimensionalen Raum als Ebene dargestellt werden.
$$
\begin{pmatrix}
3 & 4 &-5 \\
2 & 5 & 3 \\
1 & 1 & 1 \\
\end{pmatrix}
\cdot
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} =
\begin{pmatrix}
10 \\
20 \\
15
\end{pmatrix}
$$
Daraus ergeben sich 3 Ebenengleichungen
$$
3 x + 4 y - 5 z = 10 \hspace{0,5cm} | \hspace{0,5cm}
2 x + 5 y + 3 z = 10 \hspace{0,5cm} | \hspace{0,5cm}
1 x + 1 y + 1 z = 10
$$
Die Koordinaten des Schnittpunkts dieser drei Gleichungen sind die Lösung des Gleichungssystems.

