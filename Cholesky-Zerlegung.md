# Einführung

Die Cholesky-Zerlegung (auch Cholesky-Faktorisierung) bezeichnet in der linearen Algebra eine Zerlegung einer symmetrischen [[positiv definite Matrix|positiv definiten]] Matrix in ein Produkt aus einer unteren [[Grundlegende Matrix Operationen#Dreiecksmatrix|Dreiecksmatrix]] und deren [[Grundlegende Matrix Operationen#Transponieren von Matrizen|Transponierten]]. Die Zerlegung existiert für jede solche Matrix und ist nur bei der erweiterten Zerlegung mit Diagonalmatrix $D$ eindeutig. 

$$
A =  LDL^T
$$
$$
G = LD^{1/2} 
$$
$$
\implies A = GG^T
$$
# Verwendung

Bei der Anwendung der [[Methode der kleinsten Quadrate]] ist eine Möglichkeit, die auftauchenden Minimierungsprobleme über die Normalgleichungen zu lösen, die eine symmetrische positiv definite Systemmatrix haben. Dies ist mit Hilfe der Cholesky-Zerlegung möglich und dies war die Motivation von Cholesky, die Zerlegung zu entwickeln. Beim Gauß-Newton-Verfahren ist damit bei jedem Iterationsschritt ein Gleichungssystem zu lösen, das sich mit dem Cholesky-Verfahren bestimmen lässt. 

# Herleitung
$A$ ist eine $3\times3$ Matrix und ihre Cholesky-Zerlegung soll bestimmt werden:
$$
A = LDL^T = \begin{bmatrix}
1 & 0 & 0 \\
L_{10} & 1 & 0 \\
L_{20} & L_{21} & 1
\end{bmatrix}
\cdot \begin{bmatrix}
D_{00} & 0 & 0 \\
0 & D_{11} & 0 \\
0 & 0 & D_{22}
\end{bmatrix}
\cdot 
\begin{bmatrix}
1 & L_{10} & L_{20} \\
0 & 1 & L_{21} \\
0 & 0 & 1
\end{bmatrix}
$$
$$
A = \begin{bmatrix}
D_{00}              & D_{00} \cdot L_{10} & D_{00} \cdot L_{20} \\
D_{00} \cdot L_{10} & D_{00} \cdot L_{10}^2 + D_{11} & D_{00} \cdot L_{10} \cdot L_{20} + D_{11}\cdot L_{21} \\
D_{00} \cdot L_{20} & D_{00} \cdot L_{10} \cdot L_{20} + D_{11}\cdot L_{21} & D_{00} \cdot L_{20}^2 + D_{11}\cdot L_{21}^2 + D_{22}
\end{bmatrix}
$$

---

$$
A = GG^T = \begin{bmatrix}
G_{00} & 0 & 0 \\
G_{10} & G_{11} & 0 \\
G_{20} & G_{21} & G_{22}
\end{bmatrix}\begin{bmatrix}
G_{00} & G_{10} & G_{20} \\
0 & G_{11} & G_{21} \\
0 & 0 & G_{22}
\end{bmatrix}
$$
$$
A = \begin{bmatrix}
G_{00}^2 & G_{00}\cdot G_{10} & G_{00}\cdot G_{20} \\
G_{00}\cdot G_{10} & G_{10}^2+ G_{11}^2 & G_{20}\cdot G_{10} + G_{21}\cdot G_{11} \\
G_{00}\cdot G_{20} & G_{20}\cdot G_{10} + G_{21}\cdot G_{11}  & G_{20}^2 + G_{21}^2 + G_{22}^2
\end{bmatrix}
$$
$$
\implies G = \begin{bmatrix}
\sqrt{ A_{00} } & 0 & 0 \\
\frac{A_{10}}{\sqrt{ A_{00} }} & \sqrt{ A_{11} - \frac{A_{10}^2}{A_{00}} }& 0 \\
\frac{A_{20}}{\sqrt{ A_{00} }} & \frac{A_{21}\cdot A_{00} - A_{10} \cdot A_{20}}{\sqrt{ A_{11}\cdot A_{00}^2 - A_{10}^2\cdot A_{00} }} & \sqrt{ A_{22} -\frac{A_{20}^2}{A_{00}} - \frac{(A_{21}\cdot A_{00} - A_{10} \cdot A_{20})^2}{A_{11}\cdot A_{00}^2 - A_{10}^2\cdot A_{00} }}
\end{bmatrix}
$$
