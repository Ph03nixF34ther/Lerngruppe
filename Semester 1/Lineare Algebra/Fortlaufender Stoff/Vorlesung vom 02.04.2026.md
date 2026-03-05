# Approximation im quadratischen Mittel willkürlicher Funktionen über einem Fundamentalintervall \[a, b\]
- Wir wählen als Fundamentalintervall beispielsweise von $I = [1, 2]$
- gegeben ist die Funktion $f(x) = \sin(x)$
- Wir wollen $f(x)$ über $I$ im Sinne der kleinsten Quadrate / im Quadratischen Mittel durch ein Polynom 3. Grades approximieren

$$
\epsilon(a, b, c, d)=\int_{1}^2 (\sin(x) - p(x, a, b, c ,d))^2 dx
$$
$$
p(x, a, b, c, d) = a \cdot x^3 + b \cdot x^2 + c \cdot x + d
$$
Wie hat man $a, b, c, d$ zu wählen, so dass $\epsilon (a, b, c, d)$ den minimalen Wert annimt

## Skalarprodukt zweier Polynome
$$
 p \cdot q = \int_{1}^2 p(x) \cdot q(x) dx
$$
$$
\int_{1}^2 p(x) \cdot q(x) dx =
\int^2_{1} p^T \cdot 
\begin{pmatrix}
1 \\
x \\
x^2 \\
x^3
\end{pmatrix}
\cdot 
\begin{pmatrix}
1 \\
x \\
x^2 \\
x^3
\end{pmatrix}
\cdot q \cdot dx
= p^T \cdot \int_{1}^2 \begin{pmatrix}
1 & x & x^2 & x^3 \\
x & x^2 & x^3 & x^4 \\
x^2 & x^3 & x^4 & x^5 \\
x^3 & x^4 & x^5 & x^6
\end{pmatrix} \cdot dx
\cdot q
 $$
$$
= p^T \cdot \begin{pmatrix}
\frac{x}{1} &   \frac{x^2}{2} & \frac{x^3}{3} & \frac{x^4}{4} \\ 
\frac{x^2}{2} & \frac{x^3}{3} & \frac{x^4}{4} & \frac{x^5}{5} \\ 
\frac{x^3}{3} & \frac{x^4}{4} & \frac{x^5}{5} & \frac{x^6}{6} \\ 
\frac{x^4}{4} & \frac{x^5}{5} & \frac{x^6}{6} & \frac{x^7}{7} 
\end{pmatrix}
\cdot q = p^T \cdot G \cdot q
$$
Wir nennen 2 Polynome orthogonal in $I$, falls $P^T \cdot G \cdot Q$
Die Matrix $G$ ist positiv definit. Das heißt, sie ist symmetrisch, und all ihre [[Eigenwerte]] sind positiv.
$\implies$ in diesem Falle ist die Cholesky-Zerlegung möglich.
$$
R = cholesky(G)
$$
$$
v(x) = R^{-1} \cdot \begin{pmatrix}
1 \\
x \\
x^2 \\
x^3
\end{pmatrix}
= 
\begin{pmatrix}
1 \\
\text{Polynom 1. Grades} \\
\text{Polynom 2. Grades} \\
\text{Polynom 3. Grades} \\
\end{pmatrix}
$$
Die Polynome $v_{0}$ bis $v_{3}$ stehen paarweise bezüglich des von uns gewählten Skalarproduktes senkrecht aufeinander. Außerdem beträgt die Norm eines solchen Polynoms $M$ stellt die Gramsche Matrix des orthonormalsystems (ONS) von $v_{0}, v_{1}, v_{2}, v_{3}$ dar.

Unsere optimale Approximation im quadratischen Mittel erhalten wir, durch Linearkombination der Polynome $v_{0}, v_{1}, v_{2}, v_{3}$ mit geeigneten Gewichten $g_{i}$ Die Gewichte wählen wir durch die Fourier-Koeffizienten der zu approximierenden Funktion
$$
i = 0\dots 3 \hspace{1cm} g_{i} = \int_{1}^2 \sin(x) \cdot v(x) \cdot dx 
$$
$$
p(x) = g^T \cdot v(x)
$$
$$
p(x) = 
\begin{pmatrix}
-0.172 \\
1.462 \\
-0.438 \\
-0.012
\end{pmatrix}
$$
$$
\epsilon(p(x)) = 3.829 \cdot 10^{-8}
$$
## Herstellung der Cholesky-Zerlegung für den 3x3 Fall
$$
A = \begin{pmatrix}
2 & 1 & 1 \\
1 & 3 & 1 \\
1 & 1 & 4
\end{pmatrix}
$$
Diese Matrix ist **diagonaldominant** und **positiv definit**
$$
\begin{pmatrix}
a & 0 & 0 \\
b & d & 0 \\
c & e & f
\end{pmatrix}
\cdot
\begin{pmatrix}
a & 0 & 0 \\
b & d & 0 \\
c & e & f
\end{pmatrix}^T
= 
\begin{pmatrix}
a^2 & ab & ac \\
ab & b^2 + d^2 & de + bc \\
ac & de+bc & c^2 + e^2 + f^2
\end{pmatrix}

$$
$$
= A
$$
$$
\implies a = {\sqrt{ 2 }}
$$
$$
\implies b= \frac{1}{\sqrt{ 2 }}
$$
$$
\implies c = \frac{1}{\sqrt{ 2 }}
$$
$$
\implies d = \frac{\sqrt{ 10 }}{2}
$$
$$
\implies e = \frac{1 - bc }{d} = \frac{1}{\sqrt{ 10 }}
$$
$$
\implies f = \frac{6}{\sqrt{ 10 }}
$$
### Übung dazu
Man approximiere über dem Intervall $[1, 3]$ das Monomial $x^3$ durch ein Polynom 2. Grades im quadratischen Mittel.

$$
G = 
\int_{1}^3 \begin{pmatrix}
1 & x  & x^2\\
x & x^2 & x^3 \\
x^2 & x^3 & x^4
\end{pmatrix} dx = \left[\begin{pmatrix}
x & \frac{x^2}{2}  & \frac{x^3}{3}\\
\frac{x^2}{2} & \frac{x^3}{3} & \frac{x^4}{4}\\
\frac{x^3}{3} & \frac{x^4}{4} & \frac{x^5}{5}
\end{pmatrix}\right]_{1}^{3} = 
\begin{pmatrix}
2 & 3.5 & 8.66 \\
3.5 & 8.66 & 20 \\
8.66 & 20 & 48.4
\end{pmatrix}
$$
$$
a = \sqrt{ 2 }
$$
$$
b = 2 \cdot \sqrt{ 2 }
$$
$$
c = 13 \cdot \frac{\sqrt{ 2 }}{3}
$$
$$
d = \frac{\sqrt{ 6 }}{3}
$$
$$
e = \frac{4}{3} \cdot \sqrt{ 6 }
$$
$$
f = 22 \cdot \frac{\sqrt{ 10 }}{15}
$$
$$
R = \begin{pmatrix}
\sqrt{ 2 } & 0 & 0 \\
2 \cdot \sqrt{ 2 } & \frac{\sqrt{ 6 }}{3} & 0 \\
13 \cdot \frac{\sqrt{ 2 }}{3} & \frac{4}{3} \cdot \sqrt{ 6 } & 22 \cdot \frac{\sqrt{ 10 }}{15}
\end{pmatrix}
$$
$$
v(x) = R^{-1} \cdot \begin{pmatrix}
1 \\
x \\
x^2
\end{pmatrix}
$$
$$
g_{i} = \int_{1}^3 v(x)_{i} \cdot x^2 \cdot dx
$$
$$
p(x) = g^T \cdot v(x) = 6x^2 + \frac{57 \cdot x - 34}{5}
$$
Die Nullstellen der Orthogonal-Polynome sin stets reel und liegen innerhalb des Fundamentalintervalls