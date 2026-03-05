# Approximation im quadratischen Mittel
Eine Funktion $f(x)$ soll durch ein Polynom gewissen Grades über dem Intervall $[a,b]$ in folgendem Sinn approximiert:
$$
\int_{a}^b (f(x) -p(x))^2 \cdot dx
$$
Beispiel:
$$
[-1, 1] \qquad\text{und folgende Funktion} \qquad f(x)=\begin{array}{| l l}
x < -0.5  & f(x) = x \\
-0.5 < x < 0 & f(x) =2-x \\
0 < x & f(x) = 3+x
\end{array}
$$
Man approximiere $f(x)$ mittels eines Polynom $3.$ Grades im Sinne der kleinsten Quadrate
## Aufstellung der Gramschen Matrix
$$
G_{i,j} = \int_{-1}^1 x^i \cdot x^j \cdot dx 
$$
$$
G = \begin{pmatrix}
2 & 0 & \frac{2}{3} & 0 \\
0 & \frac{2}{3} & 0  & \frac{2}{5}\\
\frac{2}{3} & 0 & \frac{2}{5} & 0 \\
0 & \frac{2}{5} & 0 & \frac{2}{7}
\end{pmatrix}
$$
$$
b_{i} = \int_{-1}^1 x^i \cdot f(x) \cdot dx  \qquad b = \begin{pmatrix}
4,25 \\
1,833 \\
1,115 \\
1,119
\end{pmatrix}
$$
$$
b_{i} = \int_{-1}^{-0.5} x^i \cdot x \cdot dx + \int_{-0.5}^0 x^i \cdot (2-x) \cdot dx + \int_{0}^{1}x^i \cdot(3+x) \cdot dx
$$
$$
b_{i} = \left[ \frac{x^{i+2}}{i+2} \right]_{-1}^{-0.5} 
+ \left[ 2 \cdot \frac{x^{i+1}}{i+1} - \frac{x^{i+2}}{i+2} \right]_{-0.5}^{0} 
+ \left[ 3 \cdot \frac{x^{i+1}}{i+1} + \frac{x^{i+2}}{i+2} \right]_{0}^{1}
$$
$$
v = \text{lsove}(G, b)
$$
$$
v = \begin{pmatrix}
2,690625 \\ 2,4975 \\ -1,696875 \\ 0,42
\end{pmatrix}
$$
# Hauptachsentransformation 
Man zerlege folgende Matrix in die Form
$$
T \cdot D \cdot T^{-1}
$$
$$
A = \begin{pmatrix}
1 & 1 & 0 \\
1 & 1 & \sqrt{ 3 } \\
0 & \sqrt{ 3 } & 1
\end{pmatrix}
$$
## Charakteristisches Polynom
$$
p(x)= x^3 - (3) * x^2* + (0-2+1) \cdot x - (-1-2)
$$
$$
p(x) = x^3 -3 \cdot x^2 -x + 3
$$
$$
\implies \text{Lösungen von } p(x) = \text{eigenvals}(A)
$$
$$
D = \begin{pmatrix}
-1 & 0 & 0 \\
0 & 3 & 0 \\
0 & 0 & 1
\end{pmatrix}
$$
$$
Diff = -1 \cdot I - A = \begin{pmatrix}
-2 & -1 & 0 \\
-1 & -2 & -\sqrt{ 3 } \\
0 & -\sqrt{ 3 } & -2
\end{pmatrix}
$$
$$
w = \begin{pmatrix}
-2 & -2 \\
-1 & -2
\end{pmatrix}^{-1}
\cdot 
\begin{pmatrix}
0 \\
-\sqrt{ 3 }
\end{pmatrix}
=
\begin{pmatrix}
-\frac{\sqrt{ 3 }}{3} \\
2 \cdot \frac{\sqrt{ 3 }}{3}
\end{pmatrix}
$$
$$
v_{0} = \begin{pmatrix}
-\frac{\sqrt{ 3 }}{3} \\
2 \cdot \frac{\sqrt{ 3 }}{3} \\
-1
\end{pmatrix}
$$
---

$$
Diff = 3 \cdot I - A = \begin{pmatrix}
2 & -1 & 0 \\
-1 & 2 & -\sqrt{ 3 } \\
0 & -\sqrt{ 3 } & 2
\end{pmatrix}
$$
$$
w = \begin{pmatrix}
2 & -2 \\
-1 & 2
\end{pmatrix}^{-1}
\cdot 
\begin{pmatrix}
0 \\
-\sqrt{ 3 }
\end{pmatrix}
=
\begin{pmatrix}
-\frac{\sqrt{ 3 }}{3} \\
2 \cdot \frac{\sqrt{ 3 }}{3}
\end{pmatrix}
$$
$$
v_{0} = \begin{pmatrix}
-\frac{\sqrt{ 3 }}{3} \\
2 \cdot \frac{\sqrt{ 3 }}{3} \\
3
\end{pmatrix}
$$
---

