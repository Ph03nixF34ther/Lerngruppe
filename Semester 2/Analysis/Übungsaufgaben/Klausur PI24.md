# Aufgabe 1

## Aufgabe

Man bestimme die kritischen Stellen von folgenden bivariaten Polynomen und entscheide, worum es sich handelt

$$
p(x, y, z) = \left[ \begin{array}{ccc} x^2 & y & z \end{array} \right] \cdot \left[ \begin{array}{ccc} 0 & 2 & 1 \\ 2 & 1 & 0 \\ 1 & 0 & 0 \end{array} \right]^{-1} \cdot \left[ \begin{array}{ccc} x \\ y \\ z \end{array} \right] - y + x
$$

## Lösung

Als ersten Schritt muss das Polynom erstmal berechnet werden
Das macht der Taschenrechner

$$
p(x, y, z) = \left[ \begin{array}{ccc} x^2 & y & z \end{array} \right] \cdot \left[ \begin{array}{ccc} 0 & 2 & 1 \\ 2 & 1 & 0 \\ 1 & 0 & 0 \end{array} \right]^{-1} \cdot \left[ \begin{array}{ccc} x \\ y \\ z \end{array} \right] - y + x
$$
$$
p(x, y, z) = x^2 \cdot z + x \cdot z + x + y^2 - 4 \cdot y \cdot z - y + 4 \cdot z^2$$

Von dieser Funktion bildet man das [[Gradientensystem]] 

$$
g(x,y,z) = \nabla p(x,y,z) = \left( \begin{array}{c} \dfrac{\partial p}{\partial x} \\ \dfrac{\partial p}{\partial y} \\ \dfrac{\partial p}{\partial z} \end{array} \right)
$$
$$
g(x,y,z) = \left( \begin{array}{c} 2 \cdot x \cdot z + z + 1 \\ 2 \cdot y - 4 \cdot z - 1 \\ x^2 + x - 4 \cdot y + 8 \cdot z \end{array} \right)
$$

Jetzt löst man das [[Gradientensystem]] wie ein Gleichungssystem

$$\begin{array}{l}
0 = 2 \cdot x \cdot z + z + 1 \\
0 = 2 \cdot y - 4 \cdot z - 1 \\
0 = x^2 + x - 4 \cdot y + 8 \cdot z
\end{array}$$

und erhält folgenden Lösungen

$$\left[\begin{array}{c}
x & y & z
\end{array}\right] = \left[\begin{array}{c}
-2 & \dfrac{7}{6} & \dfrac{1}{3} \\
1 & -\dfrac{1}{6} & -\dfrac{1}{3}
\end{array}\right]$$

Und somit lauten die kritischen Stellen $(-2, \frac{7}{6}, \frac{1}{3})$ und $(1, -\frac{1}{6}, -\frac{1}{3})$
Um die Art der kritischen Stellen zu bestimmen bildet man die [[Hesse-Matrix]]

$$
H(x,y,z) = \left[\begin{array}{c}
\dfrac{\partial^2 p}{\partial x \partial x} & \dfrac{\partial^2 p}{\partial x \partial y} & \dfrac{\partial^2 p}{\partial x \partial z} \\
\dfrac{\partial^2 p}{\partial y \partial x} & \dfrac{\partial^2 p}{\partial y \partial y} & \dfrac{\partial^2 p}{\partial y \partial z} \\
\dfrac{\partial^2 p}{\partial z \partial x} & \dfrac{\partial^2 p}{\partial z \partial y} & \dfrac{\partial^2 p}{\partial z \partial z}
\end{array}\right]
$$
$$
H(x,y,z) = \left[\begin{array}{c}
2 \cdot z & 0 & 2 \cdot x - 1 \\
0 & 2 & -4 \\
2 \cdot x + 1 & -4 & 8
\end{array}\right]
$$

Jetzt setzt man die Punkte ein und interpretiert die Eigenwerte

$$
\mathrm{eigVl}(H\left( -2, \frac{7}{6}, \frac{1}{3} \right)) = \left[\begin{array}{c}
10.7278 \\
-1.3262 \\
1.2651
\end{array}\right]
\Rightarrow
\text{Indefinit also ein Sattelpunkt}
$$
$$
\mathrm{eigVl}(H\left( 1, -\frac{1}{6}, -\frac{1}{3} \right)) = \left[\begin{array}{c}
10.6461 \\
-2.1129 \\
0.8002
\end{array}\right]
\Rightarrow
\text{Indefinit also ein Sattelpunkt}
$$

![[Hesse-Matrix#Eigenwerte]]

---

# Aufgabe 2

## Aufgabe 

Man entwickele folgende Funktion über dem Fundamentintervall $\left[ -\pi, \pi \right]$ in einer [[Fourierreihe|Fourier-Reihe]] 

$$
f(x) = \begin{cases} 1 & \text{if} \ -\pi \le x \le \dfrac{-\pi}{2} \\ 0 & \text{else} \end{cases}
$$

Man gebe den Wert der Reihe $S$ an

$$
S = \dfrac{a(0)^2}{2} + \sum_{k = 1}^{\infty} \left( a(k)^2 + b(k)^2 \right)
$$

## Lösung

Um $S$ zu bestimmen muss man $a(0)$, $a(k)$ und $b(k)$ bestimmen

