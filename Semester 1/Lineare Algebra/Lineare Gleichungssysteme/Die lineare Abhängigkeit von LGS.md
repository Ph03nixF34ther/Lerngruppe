# Lineare Abhängigkeit
## Lineare Abhängigkeit erklärt
Zwei Vektoren heißen linear abhängig, wenn sie paralell sind. Das heißt, wenn man einen Vektor durch den anderen darstellen kann.
$$
\vec{x} = a \cdot \vec{v}
$$
Hat man $n$ $m$-dimensionale linear unabhängige Vektoren gegeben, heißt ein Vektor $\vec{x}$ dann linear abhängig von den $n$ Vektoren, wenn gilt 
$$
\vec{a} \cdot M = \vec{x}
$$
wobei $M$ die Matrix aus den $n$ gegebenen Vektoren ist und $\vec{a}$ eine beliebige Kombination aus Parametern abbildet. 
## Lineare Abhängigkeit an einem Beispiel
Leichter zu verstehen ist dies an einem Beispiel:
$$
\vec{v}_{1} =
\begin{pmatrix}
2 \\
-3 \\
0.5 \\
7
\end{pmatrix};

\vec{v}_{2} = 
\begin{pmatrix}
20 \\
4 \\
6 \\
-1
\end{pmatrix}
$$
$$
\vec{x} = 
\begin{pmatrix}
12 \\
-1 \\
3.5 \\
6.5
\end{pmatrix}
$$
$$
\implies
a_{0} \cdot
\begin{pmatrix}
2 \\
-3 \\
0.5 \\
7
\end{pmatrix} +
a_{1} \cdot
\begin{pmatrix}
20 \\
4 \\
6 \\
-1
\end{pmatrix}
 = 
\begin{pmatrix}
12 \\
-1 \\
3.5 \\
6.5
\end{pmatrix}
$$
$$
\implies \begin{pmatrix}
a_{0} & a_{1}
\end{pmatrix} \cdot 
\begin{pmatrix}
2 & 20 \\
-3 & 4 \\
0.5 & 6 \\
7 & -1
\end{pmatrix}
 = 
\begin{pmatrix}
12 \\
-1 \\
3.5 \\
6.5
\end{pmatrix}
$$
**FRAGE:** gibt es einen Vektor $\vec{a}$ für den die Gleichung erfüllt ist?
In unserem Fall: Ja

$$\implies
1 \cdot
\begin{pmatrix}
2 \\
-3 \\
0.5 \\
7
\end{pmatrix} +
0.5 \cdot
\begin{pmatrix}
20 \\
4 \\
6 \\
-1
\end{pmatrix}
 = 
\begin{pmatrix}
12 \\
-1 \\
3.5 \\
6.5
\end{pmatrix}$$
bei 
$$
\vec{a} = \begin{pmatrix}
1 & 0.5
\end{pmatrix}
$$
das heißt, $\vec{x}$ ist durch die Vektoren $v_{n}$ darstellbar. 
$\implies$**Darum ist $\vec{x}$ linear abhängig von den Vektoren $\vec{v}$.**
