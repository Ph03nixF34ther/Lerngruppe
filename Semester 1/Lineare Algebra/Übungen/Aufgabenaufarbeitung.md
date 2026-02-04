# Aufgabe Teilchenbewegung
## Aufgabenstellung
Ein Teilchen bewegt sich entsprechend der Lösungskurve von folgendem Differenzialgleichungssystem:
$$
\frac{d}{dt} x(t) = A \cdot t \hspace{1cm} : \hspace{1cm} x(0) = b
$$
$$
A = \begin{pmatrix}
0 & 3 & 0 \\
-3 & 0 & 4 \\
0 & -4 & 0
\end{pmatrix}
\hspace{1cm}
b=\begin{pmatrix}
1 \\
4 \\
2 
\end{pmatrix}
$$
Geben sie $x(t)$ an. $X(t)$ beschreibt einen Kreis $K$. 
- Wo liegt sein Mittelpunkt?
- Wie lautet sein Radius?
- Welche Achse umrundet unser Teilchen $T$?
- Mit welcher Geschwindigkeit ist $T$ unterwegs?
- In welcher Ebene liegt $K$
- Welchen Abstand hat $T$ zum Koordinatenursprung
## Lösung
Wir benutzen die Formel von Rodrigez
$$
a = \sqrt{ 3^2 + 4^2} = 5
$$
$$
A \cdot b = \begin{pmatrix}
12 \\
5 \\
-16
\end{pmatrix}
\hspace{1cm}
A^2 \cdot b = \begin{pmatrix}
15 \\
-100 \\
-20
\end{pmatrix}
$$
$$
x(t) = b + A b \cdot \frac{\sin(5t)}{5}+ A^2b \cdot \frac{1 - \cos(5t)}{25}
$$

Kontrolle:
$$
x(0) = b \hspace{1cm} \frac{d}{dt} x(t) = A \cdot x(t)
$$
Drehachse

Ebene:
$$
E(s, t) = \begin{pmatrix}
1 \\
4 \\
2
\end{pmatrix}
+ \begin{pmatrix}
12 \\
5 \\
-16
\end{pmatrix}
\cdot s 
+ \begin{pmatrix}
15 \\
-100 \\
-20
\end{pmatrix}
\cdot t
$$
Kontrolle der Drehachse:
$$
(A \cdot b) \times (A^2 \cdot b) = w
$$
Mittelpunkt:
$$
M = \frac{w \cdot b}{w \cdot w} \cdot w
$$
Radius:
$$
r = |M - b|
$$
Geschwindigkeit:
$$
|A \cdot x(t)| \hspace{1cm} |A \cdot b|
$$
Abstand zum Koordinatenursprung:
$$
|x(t)| = \sqrt{ 21 }
$$
Beschleunigung des Teilchens:
$$
\left| \frac{d}{dt} x(t)\right| = |A^2 \cdot x(t)| = |A^2 \cdot b|
$$
# Aufgabe
## Aufgabenstellung
Man bestimme die Hauptachsenzerlegung der Begleitmatrix des Polynoms $p(x)$ mit dieser Zerlegung bestimme man eine Wurzel aus $Cp$ 
$$
p(x) = (x-9) \cdot (x-4) \cdot (x-25)
$$
## Lösung
$$
p(x) = x^3 - 38 \cdot x^2 + 361 \cdot x - 900
$$
$$
Cp = \begin{pmatrix}
0 & 1 & 0 \\
0 & 0 & 1 \\
900 & -361 & 38
\end{pmatrix}

\hspace{1cm}
\text{Eigenvals}: \begin{pmatrix}
25 \\
9 \\
4
\end{pmatrix}
$$
$$
V= \begin{pmatrix}
1  & 1 & 1\\
9  & 4 & 25\\
81 & 16 & 625
\end{pmatrix}
$$
$$
D = \begin{pmatrix}
9 & 0 & 0\\
0 & 4 & 0\\
0 & 0 & 25
\end{pmatrix}
$$
$$
V \cdot D \cdot V^{-1} = Cp
$$
$$
A = V \cdot \begin{pmatrix}
3 & 0 & 0 \\
0 & 2 & 0 \\
0 & 0 & 5
\end{pmatrix} \cdot V^{-1}
$$
$$
A^2 = Cp
$$
# Aufgabe Q-R-Zerlegung
## Aufgabenstellung
$\to$ Orthonormalraum
Man bilde die Kryllow-Matrix $K$ aus der Matrix $A$ und dem Vektor $b$
$$

$$
Man nehme die Q-R-Zerlegung von $K$ vor.
$$
A = 
\begin{pmatrix}
1 & 2 & 3 \\
2 & 1 & 2 \\
1 & 3 & 4
\end{pmatrix}

\hspace{1cm}

b = \begin{pmatrix}
1 \\
1 \\
2
\end{pmatrix}
$$
$$
K = augment(b, A \cdot b, A^2 \cdot b)
$$
$$
K^{-1}  \cdot A^3 \cdot b = \begin{pmatrix}
1 \\
4 \\
6
\end{pmatrix}
$$
$$
\text{Das Charakteristische Polynom:}\hspace{1cm}p(x) = x^3 - 6 \cdot x^2 - 4\cdot x - 1
$$
## Lösung
$$
v_{0} = \frac{b}{|b|} \hspace{1cm} |v_{0}| = 1
$$
$$
v_{1} = v_{0} + a \cdot K^{(1)} \hspace{1cm} 0 = 1 + a \cdot v_{0} \cdot K^{(1)} \hspace{1cm} a = -\frac{1}{v_{0} \cdot K^{(1)}} = -0.061
$$


