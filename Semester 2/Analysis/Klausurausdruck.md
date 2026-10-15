# Aufgabe 1

Man bestimme die Werte folgender Reihen

$$
\sum_{k=0}^\infty \dfrac{\left( -5 \right)^{2 \cdot k - 3}}{4^{3 \cdot k \cdot 2}}
$$
$$
\sum_{k=0}^\infty \dfrac{1}{(k + 3) \cdot (k + 5)}
$$

## Lösung


Reihe in Form der geometrischen Reihe bringen

$$\begin{array}{c|c}
\displaystyle \sum_{k=0}^{\infty} q^k = \dfrac{1}{1 - q} & \left| q \right| < 1
\end{array}$$

Für Reihe 1

$$\begin{array}{cl}
& \displaystyle \sum_{k=0}^\infty \dfrac{\left( -5 \right)^{2 \cdot k - 3}}{4^{3 \cdot k \cdot 2}} \\
= & \displaystyle -\dfrac{1}{125} \cdot \sum_{k=0}^\infty \dfrac{\left( -5 \right)^{2 \cdot k }}{4^{6 \cdot k}} \\
= & \displaystyle -\dfrac{1}{125} \cdot \sum_{k=0}^\infty \left( \dfrac{25}{4096} \right)^k \\
= & -\dfrac{1}{125} \cdot \dfrac{1}{1 - \dfrac{25}{4096}} \\
= & - \dfrac{4096}{508875}
\end{array}$$

Für die geometrische Reihe muss $k=0$ sein

$$\begin{array}{cl}
= & \displaystyle \dfrac{2^{3}}{3^{1}} \cdot \sum_{k = 1}^{\infty} \left( \dfrac{2}{3} \right)^k \\
= & \displaystyle \dfrac{2^{3}}{3^{1}} \cdot \left( \sum_{k = 0}^{\infty} \left( \dfrac{2}{3} \right)^k - \left( \dfrac{2}{3} \right)^0 \right) \\
= & \displaystyle \dfrac{2^{3}}{3^{1}} \cdot \left( \dfrac{1}{1 - \dfrac{2}{3}} - 1 \right) \\
= & \dfrac{16}{3}
\end{array}$$

Für Reihe 2

$$\begin{array}{cl}
& \displaystyle \sum_{k = 0}^{\infty} \dfrac{1}{(k + 3) \cdot (k + 5)} \\
= & \displaystyle \sum_{k = 0}^{\infty} \dfrac{1}{2} \cdot \left( \dfrac{1}{k + 3} - \dfrac{1}{k + 5} \right) \\
= & \displaystyle \dfrac{1}{2} \cdot \sum_{k = 0}^{\infty} \left( \dfrac{1}{k + 3} - \dfrac{1}{k + 5} \right)
\end{array}$$

hier lässt es sich nicht mit der geometrischen Reihe lösen man muss stattdessen die ersten paar Summanden betrachten

$$\begin{array}{c}
k_0 = \dfrac{1}{3} - \dfrac{1}{5} \\
k_1 = \dfrac{1}{4} - \dfrac{1}{6} \\
k_2 = \dfrac{1}{5} - \dfrac{1}{7} \\
k_3 = \dfrac{1}{6} - \dfrac{1}{8} \\
\vdots
\end{array}$$

Es fällt auf, dass sich immer ein paar von Brüchen ergibt nur um zwei versetzt

$$\begin{array}{c}
\begin{array}{l}
k_0 = \dfrac{1}{3} \\
k_1 = \dfrac{1}{4} \\
k_2 = \dfrac{1}{5} - \dfrac{1}{5} \\
k_3 = \dfrac{1}{6} - \dfrac{1}{6} \\
\end{array} & \downarrow \\
\vdots
\end{array}$$

Und es bleiben nur die ersten zwei Brüche

$$
= \dfrac{1}{2} \cdot \left( \dfrac{1}{3} + \dfrac{1}{4} \right) = \dfrac{7}{24}
$$


---

# Aufgabe 2

Man überprüfe mit dem Quotienten-Kriterium für welche Zahlen q folgende Reihe konvergiert

$$
\sum_{k=0}^\infty (k + 1) \cdot k \cdot q^k
$$

## Lösung

Quotienten-Kriterium

$$\begin{array}{l}
\displaystyle \sum_{k=0}^\infty a_k \\
\displaystyle \lim_{k \rightarrow \infty} \left| \dfrac{a_{k + 1}}{a_k} \right| < 1
\end{array}$$

$a_k$ aufstellen

$$
a_k = (k + 1) \cdot k \cdot q^k
$$

In Quotienten-Kriterium einsetzen

$$
\dfrac{a_{k + 1}}{a_k} = \dfrac{(k + 2) \cdot (k + 1) \cdot q^{k + 1}}{(k + 1) \cdot k \cdot q^k} = \dfrac{k + 2}{k} \cdot q
$$

$k$ gegen Unendlich laufen lassen

$$
\lim_{k \rightarrow \infty} \left| \dfrac{k + 2}{k} \cdot q \right| < 1 = \left| q \right| < 1
$$

---

# Aufgabe 3

Mit der Regel von L'Hospital bestimme man den Wert von folgendem unbestimmten Ausdrucks

$$
\lim_{x \rightarrow 0} \dfrac{\sin(x) \cdot x}{\cos(x) - 1}
$$

## Lösung

$$\begin{array}{l}
f(x) = \sin(x) \cdot x \\
g(x) = \cos(x) - 1
\end{array}$$
$$
\dfrac{f(0)}{g(0)} = \dfrac{0}{0} \rightarrow \text{undefined}
$$
$$\begin{array}{l}
f'(x) = x \cdot \cos(x) + \sin(x) \\
g'(x) = - \sin(x)
\end{array}$$
$$
\dfrac{f'(0)}{g'(0)} = \dfrac{0}{0} \rightarrow \text{undefined}
$$
$$\begin{array}{l}
f''(x) = 2 \cdot \cos(x) - x \cdot \sin(x) \\
g''(x) = - \cos(x)
\end{array}$$
$$
\dfrac{f''(0)}{g''(0)} = -2
$$
$$
\lim_{x \rightarrow 0} \dfrac{\sin(x) \cdot x}{\cos(x) - 1} = -2
$$

---

# Aufgabe 4

Man entwickle die rationale Funktion $h(x)$ an der Stelle $0$ in einer Taylor-Reihe

$$
h(x) = \dfrac{(x + 1)}{(x + 3) \cdot (x - 3)}
$$

## Lösung

Partialbruchzerlegung

$$\begin{array}{l}
p(x) = x + 1 \\
q(x) = (x + 3) \cdot (x - 3) \\
q'(x) = 2 \cdot x
\end{array}$$
$$\begin{array}{l}
q(x) = 0 \\
x = \left[ \begin{array}{c} -3 \\ 3 \end{array} \right]
\end{array}$$
$$\begin{array}{l}
A = \dfrac{p(-3)}{q'(-3)} = \dfrac{1}{3} \\
B = \dfrac{p(3)}{q'(3)} = \dfrac{2}{3}
\end{array}$$
$$
h(x) = \frac{1}{3 \cdot (x + 3)} + \dfrac{2}{3 \cdot (x - 3)}
$$

Teile in Reihen umwandeln mit geometrischer Reihe

$$\begin{array}{c|c}
\displaystyle \sum^\infty_{k = 0} q^k = \dfrac{1}{1 - q} & \left| q \right| < 1
\end{array}$$

$$\begin{array}{rl}
\dfrac{1}{3 \cdot (x + 3)} & = \displaystyle \dfrac{1}{3} \cdot \dfrac{1}{x + 3} = \dfrac{1}{9} \cdot \dfrac{1}{\dfrac{x}{3} + 1} = \dfrac{1}{9} \cdot \dfrac{1}{1 - \left( - \dfrac{x}{3} \right)} \\
&= \displaystyle \dfrac{1}{9} \cdot \sum_{k=0}^\infty \left( - \dfrac{x}{3} \right)^k \\ 
&= \displaystyle \dfrac{1}{9} \cdot \sum_{k=0}^\infty \dfrac{(-1)^k}{3^k} \cdot x^k = \dfrac{1}{9} \cdot \sum_{k=0}^\infty \dfrac{(-1)^k}{3^k} \cdot x^k \\
&= \displaystyle \sum_{k=0}^\infty \dfrac{(-1)^k}{3^{k + 2}} \cdot x^k
\end{array}$$

$$\begin{array}{rl}
\dfrac{2}{3 \cdot (x - 3)} &= \dfrac{2}{3} \cdot \dfrac{1}{x - 3} = - \dfrac{2}{3} \cdot \dfrac{1}{3 - x} = - \dfrac{2}{9} \cdot \dfrac{1}{1 - \dfrac{x}{3}} \\
&= \displaystyle - \dfrac{2}{9} \cdot \sum^\infty_{k=0} \left( \dfrac{x}{3} \right)^k = \displaystyle - \dfrac{2}{9} \cdot \sum^\infty_{k=0} \dfrac{1^k}{3^k} \cdot x^k \\
&= \displaystyle \sum^\infty_{k=0} \dfrac{-2}{3^{k+2}} \cdot x^k
\end{array}$$

Taylor-Reihe aufstellen

$$
t(x) = \sum^\infty_{k=0} \dfrac{-2}{3^{k+2}} \cdot x^k + \dfrac{(-1)^k}{3^{k + 2}} \cdot x^k = \sum^\infty_{k=0} \left( \dfrac{(-1)^k}{3^{k + 2}} - \dfrac{2}{3^{k+2}} \right) \cdot x^k = \sum^\infty_{k=0} \dfrac{(-1)^k - 2}{3^{k + 2}}\cdot x^k
$$

---

# Aufgabe 5

Man approximiere das Polynom $p(x)$ über dem Intervall $\left[ 1, 3 \right]$ durch das Polynom $q(x)$ dritten Grades im Sinne der kleinsten Quadrate

$$
p(x) = x^4 + 1
$$

## Lösung

Vandermonde-Matrix bilden

$$
G = \int_1^3 \left[ \begin{array}{ccc}
x^0 & x^1 & x^2 & x^3 \\
x^1 & x^2 & x^3 & x^4 \\
x^2 & x^3 & x^4 & x^5 \\
x^3 & x^4 & x^5 & x^6
\end{array} \right] \ dx
$$

Und passenden Vektor

$$
\vec{b} = \int_1^3 \left[ \begin{array}{c}
x^0 \cdot p(x) \\
x^1 \cdot p(x) \\
x^2 \cdot p(x) \\
x^3 \cdot p(x)
\end{array} \right] \ dx
$$

Lösungsvektor bestimmen

$$
\vec{v} = G^{-1} \cdot b = \left[ \begin{array}{c}
- \dfrac{408}{35} \\
\dfrac{200}{7} \\
- \dfrac{162}{7} \\
8
\end{array} \right]
$$

Funktion aufstellen

$$
q(x) = \left[ \begin{array}{cccc} 1 & x & x^2 & x^3 \end{array} \right] \cdot v = 8 \cdot x^3 - \dfrac{162}{7} \cdot x^2 + \dfrac{200}{7} \cdot x - \dfrac{408}{35}
$$

---

# Aufgabe 6

Man entwickle $f(x,c)$ in einer Fourier-Reihe.
Wie sehen die F-Koeffizienten für kleine $c$ aus?
Man berechne die Reihe der quadrierten F-Koeffizienten mit dem Satz von Parseval!
Man berechne mit der Regel von L'Hospital die F-Koeffizienten für $c = 0$

$$
f(x,c) = \begin{cases}
0 & \text{if} \ -\pi \le x \le -c \\
\dfrac{-1}{c} & \text{if} \ -c < x \le 0 \\
\dfrac{1}{c} & \text{if} \ 0 < x \le c \\
0 & \text{if} \ c < x \le \pi
\end{cases}$$

## Lösung

Die Funktion ist ungerade

$$
f(-x) = -f(x)
$$

wodurch $a$ wegfällt und  die Reihe nur aus $\sin$-Anteilen besteht

$$
b_n = \dfrac{1}{\pi} \cdot \int_{-\pi}^{\pi} f(x,c) \cdot \sin(n \cdot x) \ dx
$$

Wertebereich ist von $0$ bis $c$ ist $\dfrac{1}{c}$

$$\begin{array}{l}
b_n = \displaystyle \dfrac{2}{\pi} \cdot \int_{0}^{\pi} f(x,c) \cdot \sin(n \cdot x) \ dx = \dfrac{2}{\pi} \cdot \int_{0}^{c} \dfrac{1}{c} \cdot \sin(n \cdot x) \ dx \\
b_n = \dfrac{-2 \cdot \left( \cos(c \cdot n) - 1 \right)}{c \cdot n \cdot \pi}
\end{array}$$

$b_n$ gibt den $n$-ten F-Koeffizienten

Die Fourier-Reihe

$$
f(x, c) = \sum_{k=1}^\infty b_k \cdot \sin(k \cdot x) = \sum_{k=1}^\infty \dfrac{-2 \cdot \left( \cos(c \cdot k) - 1 \right)}{c \cdot k \cdot \pi} \cdot \sin(k \cdot x)
$$

F-Koeffizienten für kleine $c$

$c=0.1$

$$\begin{array}{l}
b_1 = 0.03 \\
b_2 = 0.06 \\
b_3 = 0.09
\end{array}$$

Annähernd linearer Anstieg

Quadrierte F-Koeffizienten mit Satz von Parseval
Satz von Parseval

$$
\dfrac{1}{\pi} \cdot \int_{-\pi}^{\pi} f(x,c)^2 \ dx = \sum_{n=1}^\infty b_n^2
$$

$$
\dfrac{1}{\pi} \cdot \int_{-c}^{c} \left( \dfrac{1}{c} \right)^2 \ dx = \dfrac{2}{c \cdot \pi}
$$
$$
\sum_{k=1}^\infty b_n^2 = \dfrac{2}{c \cdot \pi}
$$

Regel von L'Hospital

$$
\lim_{c \rightarrow 0} b_n = \lim_{c \rightarrow 0} \dfrac{-2 \cdot \left( \cos(c \cdot n) - 1 \right)}{c \cdot n \cdot \pi} = \dfrac{0}{0}
$$
$$\begin{array}{l}
f(n, c) = -2 \cdot \left( \cos(c \cdot n) - 1 \right) \\
g(n, c) = c \cdot n \cdot \pi
\end{array}$$
$$\begin{array}{l}
f'(n, c) = 2 \cdot \sin(c \cdot n) \cdot n \\
g'(n, c) = n \cdot \pi
\end{array}$$
$$
\dfrac{f'(n,0)}{g'(n,0)} = 0
$$

---

# Aufgabe 7

Man löse durch Faltung folgendes AWP zweiter Ordnung

$$\begin{array}{l}
y'' + y = t \\
y(0) = y'(0) = 0
\end{array}$$

## Lösung

Polynom bestimmen

$$
p(x) = x^2 + 1
$$

Nullpunkte bestimmen

$$\begin{array}{l}
p(x) = 0 \\
x = \left[ \begin{array}{c} i \\ -i \end{array} \right]
\end{array}$$

In Impulsantwort einfügen

$$
y(t) = e^{\alpha \cdot t} \cdot \left( c_1 \cdot \cos(\beta \cdot t) + c_2 \cdot \sin(\beta \cdot t) \right)
$$
$$
y(t) = e^{0 \cdot t} \cdot \left( c_1 \cdot \cos(1 \cdot t) + c_2 \cdot \sin(1 \cdot t \right) = c_1 \cdot \cos(t) + c_2 \cdot \sin(x)
$$

Gleichungssystem bilden
(Die letzte Ableitung muss gleich 1 gesetzt werden, weil das System $\neq 0$ ist)

$$
\begin{cases}
y(0) = 0 \\
y'(0) = 1
\end{cases} \\
\begin{array}{c}
c_1 = 0 & c_2 = b
\end{array}$$
$$
y(t) = \sin(t)
$$

Faltung

$$
g(t) = \int_0^t y(t - s) \cdot s \ ds
$$

## Kontrolle

$$
g''(t) + g(t) = t
$$
$$
g(0) = 0 \\
g'(0) = 0
$$
