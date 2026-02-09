Das Charakteristische Polynom $p(\lambda)$ wird aus einer Matrix $A$ gebildet, in Abhängigkeit von $\lambda$ gebildet. Dafür wird folgende Formel verwendet:
$$
p(\lambda)= \det(A-\lambda\cdot E)
$$
Dabei ist E die Einheitsmatrix in der Form von $A$.

Das Charakteristische Polynom wird für die [[Eigenwerte und Eigenvektoren#Eigenwerte|Eigenwerte]] einer Matrix benötigt. Diese entstehen aus den Nullstelen dieses Polynoms.
An einem Beispiel sieht es folgendermaßen aus:
$$
A=
\left[
\begin{matrix}
1 & 3 & 2 \\
2 & 4 & 5 \\
6 & 1 & 4
\end{matrix}
\right],
\lambda \cdot E= 
\left[
\begin{matrix}
\lambda & 0 & 0 \\
0 & \lambda & 0 \\
0 & 0 & \lambda
\end{matrix}
\right]
$$
$$
A-\lambda\cdot E=
\left[
\begin{matrix}
1-\lambda & 3 & 2 \\
2 & 4-\lambda & 5 \\
6 & 1 & 4-\lambda
\end{matrix}
\right]
$$
Die [[Grundlegende Matrix Operationen#Determinante von Matrizen (siehe Addition)|Determinante]] dieser Matrix muss jetzt nur noch gebildet werden:
$$
(1-\lambda)\cdot(4-\lambda)\cdot(4-\lambda)+90+4-6\cdot(4-\lambda)\cdot 2-1\cdot 5\cdot (1-\lambda)-(4-\lambda)\cdot 2\cdot 3
$$
$$
(1-\lambda)\cdot(4-\lambda)^2- 48 + 12\lambda - 5 + 5\lambda - 24 + 6\lambda +94
$$
$$
-\lambda ^3 +9\lambda ^2 -24\lambda +16 + 23\lambda +17
$$
$$
-\lambda ^3 + 9\lambda ^2 -\lambda + 33
$$
Dementsprechend ist das Charakteristische Polynom $p(\lambda)$:
$$
p(\lambda) = -\lambda ^3 + 9\lambda ^2 -\lambda + 33
$$