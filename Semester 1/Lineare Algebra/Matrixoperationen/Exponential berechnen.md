# Mit Interpolation:

Bei einer $3\cdot 3$ Matrix $M$ werden als erstes die einzelnen [[Eigenwerte und Eigenvektoren|Eigenwerte]] berechnet. Diese Eigenwerte werden anschließend in die [[Vandermonde-Matrix]] $V$ eingesetzt.
Nun werden die einzelnen [[Eigenwerte und Eigenvektoren|Eigenwerte]] ins exponentielle einer e-Funktion gesetzt. 
Im Anschluss wird die Inverse der [[Vandermonde-Matrix]] $V$ mit den exponentialwerten multipliziert und im Vektor $v$ gespeichert. 
Im letzten Schritt werden die einzelnen Werte von $v$ mit mit Potenzen von $M$ verrechnet:
$$
M = 
\begin{bmatrix}
1 & 2 & 1 \\
2 & 0 & 1 \\
2 & 1 & 1
\end{bmatrix}
$$
$$
Eigenwerte:
\begin{bmatrix}
-1,518 \\
-0,178 \\
3,696
\end{bmatrix}
$$
$$
exponential =
\begin{bmatrix}
e^{-1,518} \\
e^{-0,178} \\
e^{3,696}
\end{bmatrix}
=
\begin{bmatrix}
0,219 \\
0,837 \\
40,302
\end{bmatrix}
$$
$$
V=
\begin{bmatrix}
1  & -1,518 & 2,305\\
1  & -0,178 & 0,032\\ 
1  & 3,696 & 13,663
\end{bmatrix}
$$
$$
v=
V^-1\cdot 
\begin{bmatrix}
0,219 \\
0,837 \\
40,302
\end{bmatrix}
=
\begin{bmatrix}
1,423 \\
3,625 \\
1,865
\end{bmatrix}
$$
$$
v_{0}\cdot M^0+v_{1}\cdot M+ v_{2}\cdot M^2=
1,423\cdot M^0+ 3,625\cdot M+ 1,865\cdot M^2=
$$
$$
\begin{bmatrix}
18,102 & 12,844 & 11.084 \\
14,709 & 10,748 & 9,219 \\
18,483 & 12,949 & 12,508
\end{bmatrix}
$$
