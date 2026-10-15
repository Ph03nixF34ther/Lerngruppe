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

$a(k)$ und $b(k)$ lassen sich wie folgt definieren

$$\begin{array}{c}
a(k) = \dfrac{1}{\pi} \displaystyle \int_{-\pi}^{\pi} f(t) \cos (k \cdot t) \ dt \\
b(k) = \dfrac{1}{\pi} \displaystyle \int_{-\pi}^{\pi} f(t) \sin (k \cdot t) \ dt
\end{array}$$

Außerhalb des Intervalls $\left[ -\pi, \frac{-\pi}{2} \right]$ ist $f(x) = 0$, wodurch das Integral in diesem Intervall ebenfalls $0$ ist und es vernachlässigt werden kann

$$\begin{array}{l}
a(k) = \dfrac{1}{\pi} \displaystyle \int_{-\pi}^{\frac{-\pi}{2}} 1 \cdot \cos (k \cdot t) \ dt = \dfrac{\sin(k \cdot k) - \sin \left( \dfrac{k \cdot \pi}{2} \right)}{k \cdot \pi} \\
b(k) = \dfrac{1}{\pi} \displaystyle \int_{-\pi}^{\frac{-\pi}{2}} 1 \cdot \sin (k \cdot t) \ dt = \dfrac{\cos(k \cdot k) - \cos \left( \dfrac{k \cdot \pi}{2} \right)}{k \cdot \pi} \\
a(0) = \displaystyle \lim_{k \rightarrow 0} a(k) = \frac{1}{2}
\end{array}$$
$$
S = \dfrac{a(0)^2}{2} + \displaystyle \sum_{k = 1}^{\infty} \left( a(k)^2 + b(k)^2 \right)
$$

Für $S$ lässt sich der Satz von Parseval anwenden und es ergibt sich

$$
S = \dfrac{a(0)^2}{2} + \displaystyle \sum_{k = 1}^{\infty} \left( a(k)^2 + b(k)^2 \right) = \dfrac{1}{\pi} \int_{-\pi}^{\pi} f(x)^2 \ dx
$$

Selbe Geschichte mit dem Intervall und es ergibt sich

$$
S = \dfrac{1}{\pi} \int_{-\pi}^{\frac{-\pi}{2}} 1^2 \ dx = 0.5
$$

---

# Aufgabe 3

## Aufgabe

Man bestimme die Lösung von folgendem inhomogenen [[Anfangswertproblem]]

$$\begin{array}{cc}
y''(t) + 4 \cdot y'(t) + 3 \cdot y(t) = \cos(2 \cdot t) & y(0) = y'(0) = 0
\end{array}$$

## Lösung

Das charakteristische Polynom ergibt sich wie folgt

$$
p(x) = x^2 + 4 \cdot x + 3
$$

Als nächstes wird die Impulsantwort über die Nullstellen von $p(x)$ festgestellt

$$\begin{array}{c}
p(x) = 0 \\
x = \left[ \begin{array}{c} -3 \\ -1 \end{array} \right]
& \begin{array}{l} y1(x) = e^{-3 \cdot x} \cdot \cos(x) \\ y2(x) = e^{-1 \cdot x} \cdot \sin(x) \end{array}
\end{array}$$

// TODO

---

# Aufgabe 4

## Aufgabe 

Man bestimme durch [[Partielle Integration|partielle Integration]] folgendes unbestimmtes Integral

$$
F(x, k) = \int e^x \cdot \cos(k \cdot x) \ dx
$$
## Lösung

$$
\int v'(x) \cdot u(x) \ dx = v(x) \cdot u(x) - \int v(x) \cdot u'(x) \ dx
$$

Man sucht $u(x)$ und $v(x)$

$$\begin{array}{ccc}
u(x) = e^x & v'(x) = \cos(k \cdot x) & \Rightarrow & v(x) = \dfrac{\sin(k \cdot x)}{k}
\end{array}$$
$$
\int e^x \cdot \cos(k \cdot x) \ dx = e^x \cdot \dfrac{\sin(k \cdot x)}{k} - \int \dfrac{\sin(k \cdot x)}{k} \cdot e^x \ dx
$$
