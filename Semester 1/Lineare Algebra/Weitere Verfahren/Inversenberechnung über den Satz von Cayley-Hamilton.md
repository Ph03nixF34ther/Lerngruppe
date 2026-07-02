# Satz für die Inversenberechnung

Ist das charakteristische Polynom einer Matrix $A$ definiert durch
$$
p(x) = \sum_{i = 0}^n p_{i}\cdot x^i
$$
so kann die Inverse der Matrix $A$ gefunden werden durch:
$$
A^{-1} = -\frac{1}{p_{0}} \cdot \sum_{i = 0}^{n-1} p_{i+1} \cdot A^i
$$

# Der Satz von Cayley-Hamilton

Der Satz von Cayley-Hamilton besagt: Jede quadratische Matrix $A$ genügt ihrem charkteristischen Polynom, d.h

$p(x) =x^3+3 x^2 +x +1$ ist das [[Charakteristische Polynome|charakteristische Polynom]] zur Matrix $A$
$$
A = \begin{bmatrix}
1 & 1 & 0 \\
1 & 1 & 1 \\
0 & 1 & 1
\end{bmatrix}
$$
dann muss gelten:
$$
p(A) = \begin{bmatrix}
0 & 0 & 0 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
# Herleitung der Inversenberechnung

$$
0 = A^n + p_{n-1}\cdot A^{n-1} + p_{n-2}\cdot A^{n-2} + \dots + p_{0}\cdot I 
$$
$$
\implies - p_{0}\cdot I  = A^n + p_{n-1}\cdot A^{n-1} + p_{n-2}\cdot A^{n-2} + \dots
$$
$$
\implies - p_{0}\cdot I  = A\cdot(A^{n-1} + p_{n-1}\cdot A^{n-2} + p_{n-2}\cdot A^{n-3} + \dots)
$$
$$
\implies I  = -\frac{1}{p_{0}}\cdot A\cdot(A^{n-1} + p_{n-1}\cdot A^{n-2} + p_{n-2}\cdot A^{n-3} + \dots)
$$
$$
\implies A^{-1}  = \boxed{ -\frac{1}{p_{0}}\cdot(A^{n-1} + p_{n-1}\cdot A^{n-2} + p_{n-2}\cdot A^{n-3} + \dots) }
$$

# Beispielrechnung

Man bestimme die Inverse der Matrix $A$ mittels des Satzes von Cayley-Hamilton
$$
A = \begin{bmatrix}
1 & 1 & 0 \\
1 & 1 & 1 \\
0 & 1 & 1
\end{bmatrix}
$$
Zunächst berechnen wir das Charakteristische Polynom $p(x)$ der Matrix $A$

$$
p(\lambda) = \det(\begin{bmatrix}
1-\lambda & 1 & 0 \\
1 & 1-\lambda & 1 \\
0 & 1 & 1-\lambda
\end{bmatrix})
= (1-\lambda)^3 + 1\cdot 1\cdot 0 + 0\cdot 1\cdot 1 - 0 - (1-\lambda) - (1-\lambda)
$$
$$
\implies p(x) = -x^3 + 3 x^2 -x -1
$$
Nun können wir den Satz von Cayley-Hamilton anwenden:
$$
A^{-1} = - \frac{-A^2 + 3 A - I}{-1} = \begin{bmatrix}
-2 & -2 & -1 \\
-2 & -3 & -2 \\
-1 & -2 & -2
\end{bmatrix} + \begin{bmatrix}
3 & 3 & 0 \\
3 & 3 & 3 \\
0 & 3 & 3
\end{bmatrix} + \begin{bmatrix}
-1 & 0 & 0 \\
0 & -1 & 0 \\
0 & 0 & -1
\end{bmatrix} =\begin{bmatrix}
0 & 1 & -1 \\
1 & -1 & 1 \\
-1 & 1 & 0
\end{bmatrix}
$$
Abschließend kann die Inverse überprüft werden
$$
\begin{bmatrix}
1 & 1 & 0 \\
1 & 1 & 1  \\
0 & 1 & 1
\end{bmatrix}\cdot
\begin{bmatrix}
0 & 1 & -1 \\
1 & -1 & 1 \\
-1 & 1 & 0
\end{bmatrix}
= \begin{bmatrix}
0+1+0 & 1-1+0 & -1+1+0 \\
0+1-1 & 1-1+1 & -1+1+0 \\
0+1-1 & 0-1+1 & 0+1+0
\end{bmatrix} =
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0  \\
0 & 0 & 1
\end{bmatrix}
$$
