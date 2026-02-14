# Aufgabe 1 - Parameterabhängige Gleichungssysteme
Bestimmen Sie den Parameter $p$ so, dass der Lösungsvektor $x(p)$ in der ersten
Komponente den Wert $1$ annimmt, wobei $A(p)x(p)=b$
$$
A(p) = \begin{pmatrix}
p & 1 & 0 \\
1 & 2 & p \\
0 & p & 3
\end{pmatrix}
\qquad
b = \begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix}
$$
Die [[Parameterabhängige LGS#Lösung parameterabhängiger Gleichungssysteme|Lösung eines linearen Gleichungssystems]] findet zunächst statt, wie die Lösung eines nicht parametetabhängiges lineares Gleichungssystem.
$$
\begin{array}{c}
\left(
\begin{array}{c c c | c}
p & 1 & 0 & 1 \\
1 & 2 & p & 2 \\
0 & p & 3 & 3
\end{array}
\right) \cdot \begin{pmatrix}
1 & 0 & 0 \\
-1 & p & 0 \\
0 & 0 & 1
\end{pmatrix}  \\
  \\
\left(
\begin{array}{c c c | c}
p & 1 & 0 & 1 \\
0 & 2p-1 & p^2 & 2p-1 \\
0 & p & 3 & 3
\end{array}
\right) \cdot \begin{pmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & -p & (2p-1)
\end{pmatrix} \\
 \\
\left(
\begin{array}{c c c | c}
p & 1 & 0 & 1 \\
0 & 2p-1 & p^2 & 2p-1 \\
0 & 0 & -p^3 + 3\cdot(2p-1) & (2p-1)(3 -p)
\end{array}
\right) \cdot \begin{pmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & -p & (2p-1)
\end{pmatrix}
\end{array}
$$
$$
\begin{array} {r c l}
x_{0} & = & \dfrac{p \cdot(3-p)}{-p^3+6p-3} \\ \\
x_{1} & = & 1 -  \dfrac{p^2 \cdot(3-p)}{-p^3+6p-3} \\ \\
x_{2} & = & \dfrac{(2p-1)(3-p)}{-p^3+6p-3}
\end{array}
$$
Die erste Komponente der Lösung soll $0$ sein. Das kann erreicht werden, wenn $x_{0} = 0$
$$
p^3-p^2-3p+3 = 0 \qquad \implies p \in \{1, \sqrt{ 3 }, -\sqrt{ 3 }\}
$$
Damit sind diejenigen Werte für $p$ für die der erste Wert der Lösung des linearen Gleichungssystems $1$ wird $1, \sqrt{ 3 }$ und $-\sqrt{ 3 }$.

# Aufgabe 2 - Hauptachsentransformation
Bestimmen Sie für die Matrix $A$ die Hauptachsentransformation $A=TDT^{-1}$! $T=?$, $D=?$
$$
A = \begin{pmatrix}
0 & \sqrt{ 8 } & 0 \\
\sqrt{ 8 } & 0 & \sqrt{ 8 } \\
0 & \sqrt{ 8 } & 0
\end{pmatrix}
$$
Die Matrix $D$ ist eine Diagonalmatrix und besteht aus den Eigenwerten der Matrix $A$
Die Eigenwerte können sehr simpel ermittelt werden:
$$
\det(A - x \cdot I) = 0 \\
$$
$$
\det\left(\begin{pmatrix}
-x & \sqrt{ 8 } & 0 \\
\sqrt{ 8 } & -x & \sqrt{ 8 } \\
0 & \sqrt{ 8 } & -x
\end{pmatrix}\right) = -x^3 + 0 + 0 - 0 - \sqrt{ 8 } \cdot \sqrt{ 8 } \cdot x  - \sqrt{ 8 } \cdot \sqrt{ 8 } \cdot x = -x^3 - 16x = 0
$$
$$
\implies x^2 = 16 \qquad \text{Wenn }x\neq 0
$$
$$
\begin{array} {r c l}
x_{0} & = & 0 \\
x_{1} & = & 4 \\
x_{2} & = & -4
\end{array}
$$
$$
\implies \begin{pmatrix}
0 & 0 & 0 \\
0 & -4 & 0 \\
0 & 0 & 4
\end{pmatrix}
$$
---

$T$ besteht aus den Eigenvektoren von $A$

### Eigenvektor von $\lambda_{0} = 0$
$$
\begin{pmatrix}
0 & \sqrt{ 8 } & 0 \\
\sqrt{ 8 } & 0 & \sqrt{ 8 } \\
0 & \sqrt{ 8 } & 0
\end{pmatrix} \cdot v_{0} = \begin{pmatrix}
0 \\
0 \\
0
\end{pmatrix}
\qquad \implies v_{0} = \begin{pmatrix}
1 \\
0 \\
-1
\end{pmatrix}
$$

### Eigenvektor von $\lambda_{1} = 4$

$$
\begin{pmatrix}
-4 & \sqrt{ 8 } & 0 \\
\sqrt{ 8 } & -4 & \sqrt{ 8 } \\
0 & \sqrt{ 8 } & -4
\end{pmatrix}
\cdot 
v_{1}
= 
\begin{pmatrix}
0 \\
0 \\
0
\end{pmatrix}
$$
$$
\begin{array}{c}
v_{11} = \frac{4}{\sqrt{ 8 }} \cdot v_{10} \\
v_{11} = \frac{4}{\sqrt{ 8 }} \cdot v_{12} \\
\implies v_{10} = v_{12}\\
\sqrt{ 8 } \cdot v_{10} - 4 \cdot v_{11} +\ 2 \cdot v_{11} = 0 \\
\implies v_{11} = - \sqrt{ 2 } \cdot v_{10}
\end{array}
$$
$$
v_{1} = \begin{pmatrix}
1 \\
-\sqrt{ 2 } \\
1
\end{pmatrix}
$$

### Eigenvektor von $\lambda_{2} = -4$

$$
\begin{pmatrix}
4 & \sqrt{ 8 } & 0 \\
\sqrt{ 8 } & 4 & \sqrt{ 8 } \\
0 & \sqrt{ 8 } & 4
\end{pmatrix}
\cdot 
v_{2}
= 
\begin{pmatrix}
0 \\
0 \\
0
\end{pmatrix}
$$
$$
\begin{array}{c}
v_{21} = -\frac{4}{\sqrt{ 8 }} \cdot v_{20} \\
v_{21} = -\frac{4}{\sqrt{ 8 }} \cdot v_{22} \\
\implies v_{20} = v_{22}\\
\sqrt{ 8 } \cdot v_{20} + 4 \cdot v_{21} -\ 2 \cdot v_{21} = 0 \\
\implies v_{21} = \sqrt{ 2 } \cdot v_{20}
\end{array}
$$
$$
v_{2} = \begin{pmatrix}
1 \\
\sqrt{ 2 } \\
1
\end{pmatrix}
$$

$$
\implies T = \begin{pmatrix}
1 & 1 & 1 \\
0 & -\sqrt{ 2 } & \sqrt{ 2 } \\
-1 & 1 & 1
\end{pmatrix}
$$
