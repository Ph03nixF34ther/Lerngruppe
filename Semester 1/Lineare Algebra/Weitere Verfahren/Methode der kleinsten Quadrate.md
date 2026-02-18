# Einführung und Zielsetzung

Ziel ist es eine Funktion $f(x)$ im Bereich $[a;b]$ optimal mit einer anderen polynomiellen Funktion $p(x)$ $n$ten Grades anzunähern.

Wie optimal eine Funktion $q(x)$ ist, kann berechnet werden, mit
$$
\epsilon = \int_{a}^b (f(x) - q(x))^2\cdot dx
$$
Je geringer $\epsilon$, desto exakter nähert $q(x)$ $f(x)$ an.
$f(x) - q(x)$ ist die Abweichung zwischen der zu approximierenden und der approximierten Funktion. Dieser wird quadriert, um ihn positiv zu machen.
Diese Funktion wird auf den gesamten Bereich angewandt.

> ***FRAGE:*** Wie müssen die Koeffizienten von $p(x)$ aussehen, damit $\epsilon$ minimal wird?

# Lösung über die Ableitung der Fehlerfunktion
## Herleitung über die Ableitung der Fehlerfunktion

Gesucht sind die Koeffizienten des Polynoms $p(x)$ diese errechnen wir an dem Punkt, an dem sie für 
$$
\epsilon = \int_{a}^b (f(x) - p(x))^2\cdot dx
$$
minimal werden. 
Im lokalen Minima einer Funktion ist die Steigung der Funktion $0$. 
Also muss gelten:
$$
\frac{d}{da_{k}} \int_{a}^b (f(x) - p(x))^2\cdot dx = 0
$$
Die Ableitung kann gebildet werden aus innerer Ableitung mal äußerer Ableitung:
$$
-2\int_{a}^b (f(x) - p(x))\cdot x^k \cdot dx = 0
$$
$$
-2\int_{a}^b f(x)\cdot x^k - p(x)\cdot x^k \cdot dx = 0
$$
$$
\implies \int_{a}^b p(x)\cdot x^k \cdot dx = \int_{a}^b f(x)\cdot x^k \cdot dx \qquad \text{für } k = 0\dots n
$$
Daraus ergibt sich ein lineares Gleichungssystem, dass gelöst werden kann:

$$
G\cdot \vec{a} = \vec{b}
$$
mit 
$$
\begin{array}{c c c}
G = \int_{a}^b \begin{bmatrix}
1 & x^1 & \dots & x^n \\
x^1 & x^2 & \dots & x^{n+1}\\
\vdots & \vdots & \ddots & \vdots \\
x^{n} & x^{n+1} & \dots & x^{2n}
\end{bmatrix} dx& 
a = \begin{pmatrix}
p_{0} \\
p_{1} \\
\vdots \\
p_{n}
\end{pmatrix} &
b = \begin{pmatrix}
\int_{a}^b f(x) \cdot dx \\
\int_{a}^b f(x)\cdot x \cdot dx \\
\vdots \\
\int_{a}^b f(x)\cdot x^n \cdot dx
\end{pmatrix}
\end{array}
$$
$$
\implies a = G^{-1}\cdot b
$$

## Beispiel über die Ableitung der Fehlerfunktion

Man approximiere $f(x) = x^3$ über ein Polynom $2.$ Grades im Interval $[0;1]$

### Aufstellung der Gramschen Matrix

$$
G = \begin{bmatrix}
1 & \frac{1}{2} & \frac{1}{3} \\
\frac{1}{2} & \frac{1}{3} & \frac{1}{4} \\
\frac{1}{3} & \frac{1}{4} & \frac{1}{5}
\end{bmatrix}
$$
$$
b = \begin{pmatrix}
\frac{1}{4} \\
\frac{1}{5} \\
\frac{1}{6}
\end{pmatrix}
$$
$$
\implies a = \begin{pmatrix}
0.05\\
-0.6\\
1.5
\end{pmatrix}
$$
$$
\implies p(x) = 1.5x^2 -0.6x + 0.05
$$