# Aufgabe 1

## Aufgabe

Man berechne folgende [[Zahlenreihe|Reihen]] 

$$
\sum^{\infty}_{k = 1} \dfrac{2^{k + 3}}{3^{k + 1}}
$$
$$
\sum^\infty_{k = 0} \dfrac{4^{2 \cdot k}}{5^{k + 1}}
$$

## Lösung

Um die Summe loszuwerden probiert man sie in die Form der [[Geometrische Reihe|geometrischen Reihe]] $\sum^\infty_{k=0} q^k$, wo $\left| q \right| < 1$ zu bringen

$$
\sum^{\infty}_{k = 1} \dfrac{2^{k + 3}}{3^{k + 1}} = \sum^{\infty}_{k = 1} \left( \dfrac{2}{3} \right)^k \cdot \dfrac{2^{3}}{3^{1}} = \dfrac{2^{3}}{3^{1}} \sum^{\infty}_{k = 1} \left( \dfrac{2}{3} \right)^k
$$

Die Summe beginnt bei $1$ aber muss für die [[Geometrische Reihe|geometrischen Reihe]] $0$ sein
Der Fall für $k = 0$ wird deshalb abgezogen

$$
\dfrac{2^{3}}{3^{1}} \sum^{\infty}_{k = 1} \left( \dfrac{2}{3} \right)^k = \dfrac{2^{3}}{3^{1}} \left( \sum^{\infty}_{k = 0} \left( \dfrac{2}{3} \right)^k - \left( \dfrac{2}{3} \right)^0 \right)
$$

Die [[Geometrische Reihe|geometrische Reihe]] wird ersetzt mit $\dfrac{1}{1 - q}$ 

$$
\dfrac{2^{3}}{3^{1}} \left( \sum^{\infty}_{k = 0} \left( \dfrac{2}{3} \right)^k - \left( \dfrac{2}{3} \right)^0 \right) = \dfrac{2^{3}}{3^{1}} \left( \dfrac{1}{1 - \dfrac{2}{3}} - \left( \dfrac{2}{3} \right)^0 \right) = \dfrac{16}{3}
$$

Bei der zweiten [[Zahlenreihe|Reihe]] fällt auf, dass $q > 1$ ist, womit die [[Geometrische Reihe|geometrische Reihe]] nicht erfüllt ist -> Sie geht gegen $\infty$ 

$$
\sum^\infty_{k = 0} \dfrac{4^{2 \cdot k}}{5^{k + 1}} = \sum^\infty_{k = 0} \dfrac{4^{2 \cdot k}}{5^{k}} \cdot \dfrac{1}{5^1} = \sum^\infty_{k = 0} \dfrac{16^{k}}{5^{k}} \cdot \dfrac{1}{5^1}
$$
$$
\dfrac{16}{5} > 1 \Rightarrow \sum^\infty_{k = 0} \dfrac{4^{2 \cdot k}}{5^{k + 1}} = \infty
$$

---

# Aufgabe 2

## Aufgabe

Man berechne die [[Partialbruchzerlegung]] folgender rationaler Funktion

$$
h(x) = \dfrac{x + 1}{(x - 1)^2 \cdot (x + 3)}
$$

## Lösung

Brüche bilden

$$
\dfrac{x + 1}{(x - 1)^2 \cdot (x + 3)} = \dfrac{A}{(x - 1)^2} + \dfrac{B}{(x - 1)} + \dfrac{C}{(x + 3)}
$$

Summe bilden

$$
= \dfrac{A \cdot ( x + 3) + B \cdot (x - 1) \cdot (x + 3) + C \cdot (x - 1)^2}{(x - 1)^2 \cdot (x + 3)}
$$

Ausmultiplizieren

$$
= \dfrac{A \cdot ( x + 3) + B \cdot (x^2 + 2 x - 3) + C \cdot (x^2 - 2 x + 1)}{(x - 1)^2 \cdot (x + 3)}
$$
$$
= \dfrac{A x + 3 A + B x^2 + 2 B x - 3 B + C x^2 - 2 C x + C}{(x - 1)^2 \cdot (x + 3)}
$$

$x^2$ und $x$ rausziehen

$$
= \dfrac{x^2(B + C) + x (A + 2 B - 2 C) + (3 A - 3 B + C)}{(x - 1)^2 \cdot (x + 3)}
$$

Gleichungssystem bilden

$$\begin{cases}
B + C &= 0 \\
A + 2 B - 2 C &= 1 \\
3 A - 3 B + C &= 1
\end{cases}$$
$$\begin{array}{c}
A = \dfrac{1}{2} & B = \dfrac{1}{8} & C = -\dfrac{1}{8}
\end{array}$$
$$
\dfrac{A}{(x - 1)^2} + \dfrac{B}{(x - 1)} + \dfrac{C}{(x + 3)} = \dfrac{1}{2 \cdot (x - 1)^2} + \dfrac{1}{8 \cdot (x - 1)} - \dfrac{1}{8 \cdot (x + 3)}
$$

---

# Aufgabe 3

## Aufgabe

Man berechne die [[Taylorreihen|Taylor-Reihe]] der rationalen Funktion $h(x)$ im Entwicklungspunkt $0$

$$
h(x) = \dfrac{x^2 + 1}{(x + 1) \cdot (x + 2) \cdot (x + 3)}
$$

## Lösung

[[Partialbruchzerlegung]] bilden

$$
\dfrac{x^2 + 1}{(x + 1) \cdot (x + 2) \cdot (x + 3)} = \dfrac{5}{x + 3} - \dfrac{5}{x + 2} + \dfrac{1}{x + 1}
$$

Die drei Summanden lassen sich durch die [[Geometrische Reihe|geometrische Reihe]] ersetzen

$$
\dfrac{5}{x + 3} = \dfrac{5}{3} \cdot \dfrac{1}{1- (- \frac{x}{3})} = \dfrac{5}{3} \cdot \sum^\infty_{k = 0} (- \dfrac{x}{3})^k
$$
$$
\dfrac{5}{x + 2} = \dfrac{5}{2} \cdot \dfrac{1}{1- (- \frac{x}{2})} = \dfrac{5}{2} \cdot \sum^\infty_{k = 0} (- \dfrac{x}{2})^k
$$
$$
\dfrac{1}{x + 1} = \dfrac{1}{1 - (-x)} = \sum^\infty_{k = 0} (- x)^k
$$

Diese Summen Zusammen ergeben die [[Taylorreihen|Taylor-Reihe]]

$$
\dfrac{5}{3} \cdot \sum^\infty_{k = 0} (- \dfrac{x}{3})^k + \dfrac{5}{2} \cdot \sum^\infty_{k = 0} (- \dfrac{x}{2})^k + \sum^\infty_{k = 0} (- x)^k
$$
$$
T_h(x)= \sum^\infty_{k = 0} \dfrac{5}{3} \cdot (- \dfrac{x}{3} )^k + \dfrac{5}{2} \cdot (- \dfrac{x}{2})^k + (- x)^k
$$

---

# Aufgabe 4

## Aufgabe

Mittels [[Partielle Integration|partieller Integration]] berechne man I(x)

$$
I(x) = \int x \cdot e^x \cdot \sin x \ dx
$$

## Lösung

$$
I(x) = \int x \cdot e^x \cdot \sin x \ dx
$$
$$
\int v'(x) \cdot u(x) \ dx = v(x) \cdot u(x) - \int v(x) \cdot u'(x) \ dx
$$
$$\begin{array}{ll}
u(x) = x & v(x) = \int e^x \cdot \sin x \ dx \\
u'(x) = 1 & v'(x) = e^x \cdot \sin x
\end{array}$$
$$
\int x \cdot e^x \cdot \sin x \ dx = \int e^x \cdot \sin x \ dx \cdot x - \int \int e^x \cdot \sin x \ dx \ dx
$$

### Exkurs: Integral von $\sin(x)\cdot e^x$

$$\begin{array}{ccccl}
\int e^x \cdot \sin x \ dx &= \boxed{e^x \cdot \sin x - \underline{\int e^x \cdot \cos x \ dx}} & \Rightarrow & \int e^x \cdot \sin x \ dx &= \dfrac{\sin x - \cos x}{2} \cdot e^x \\
& \Updownarrow \\
\int e^x \cdot \cos x \ dx &= \boxed{e^x \cdot \cos x + \underline{\int e^x \cdot \sin x \ dx}} & \Rightarrow & \int e^x \cdot \cos x \ dx &= \dfrac{e^x \cdot \cos x + e^x \cdot \sin x}{2}
\end{array}$$


$$
\int e^x \cdot \sin x \ dx \cdot x - \int \int e^x \cdot \sin x \ dx \ dx = e^x \cdot \dfrac{\sin x - \cos x}{2} \cdot x - \int \dfrac{e^x \cdot \sin x}{2} - \dfrac{\cos x \cdot e^x}{2} \ dx
$$
$$\begin{array}{l}
\begin{array}{lcccc}
= e^x \cdot \dfrac{\sin x - \cos x}{2} \cdot x & - & \underbrace{\int e^x \cdot \sin x \ dx \cdot \frac{1}{2}} & - & \underbrace{\int \cos x \cdot e^x \ dx \cdot \frac{1}{2}} \\
= e^x \cdot \dfrac{\sin x - \cos x}{2} \cdot x & - & ( - e^x \cdot \dfrac{\sin x - \cos x}{4} ) & - & (- e^x \cdot \dfrac{\sin x + \cos x}{4})
\end{array} \\
= e^x \cdot \dfrac{\sin x - \cos x}{2} \cdot x + e^x ( \cancel{- \dfrac{\sin x}{4}} + \dfrac{\cos x}{4} \cancel{+ \dfrac{\sin x}{4}} + \dfrac{\cos x}{4})
\end{array}$$
$$
= e^x \cdot \dfrac{\sin x - \cos x}{2} \cdot x + e^x (\dfrac{\cos x}{4} + \dfrac{\cos x}{4}) = e^x \cdot (\dfrac{x \cdot \sin x + \cos x \cdot (1 - x)}{2})
$$
$$
I(x) = \int x \cdot e^x \cdot \sin x \ dx = e^x \cdot (\dfrac{x \cdot \sin x + \cos x \cdot (1 - x)}{2})
$$

---

# Aufgabe 5

## Aufgabe

Man berechne

$$
\int^2_1 \dfrac{2 \cdot x + 1}{(x - 1) \cdot (x - 2) \cdot (x - 3)} \ dx
$$

mittels [[Partialbruchzerlegung]] des Integranden

## Lösung

$$
\dfrac{2 \cdot x + 1}{(x - 1) \cdot (x - 2) \cdot (x - 3)} = \dfrac{A}{x - 1} + \dfrac{B}{x - 2} + \dfrac{C}{x - 3}
$$
$$
= \dfrac{3}{2 \cdot (x - 1)} - \dfrac{5}{x - 2} + \dfrac{7}{2 \cdot (x - 3)}
$$
$$
\int^2_1 \dfrac{3}{2 \cdot (x - 1)} - \dfrac{5}{x - 2} + \dfrac{7}{2 \cdot (x - 3)} \ dx = \int^2_1 \dfrac{3}{2 \cdot (x - 1)} \ dx - \int^2_1 \dfrac{5}{x - 2} \ dx + \int^2_1 \dfrac{7}{2 \cdot (x - 3)} \ dx
$$
$$
= \int^2_1 3 \cdot (2x - 2)^{-1} \ dx - \int^2_1 5 \cdot (x - 2)^{-1} \ dx + \int^2_1 7 \cdot (2x - 6)^{-1} \ dx
$$
$$
= \frac{3}{2} \cdot \left[ \ln(x - 1) \right]^2_1 - 5 \cdot \left[ \ln(x - 2) \right]^2_1 + \frac{7}{2} \cdot \left[ \ln(x - 3) \right]^2_1
$$

$[\ln(1-1)]$ ist nicht definiert, deswegen gibt es kein Ergebnis.
Die Aufgabe will den Flächeninhalt zwischen zwei undefinierten Stellen der Funktion. Damit ist diese

---

# Aufgabe 6

## Aufgabe

Man approximiere die Funktion $\sin(x) \cos(x)$ über dem Intervall $[0,\pi]$ im Sinne der kleinsten Quadrate durch ein Polynom 5. Grades: wie sind die 6 Koeffizienten von $p(x)$ zu wählen, damit folgender Ausdruck minimal wird

$$
\int^\pi_0 \left( \sin(x) \cdot \cos(x) - p(x) \right)^2 \ dx
$$

## Lösung

$$\begin{array}{cc}
G = \displaystyle \int_0^\pi \left[ \begin{array}{cccc} x^0 & x^1 & \dots & x^5 \\ x^1 & x^2 & \dots & x^6 \\ \vdots & \vdots & \ddots & \vdots \\ x^5 & x^6 & \dots & x^{10} \end{array} \right] \ dx
&
b = \displaystyle \int_0^\pi \left[ \begin{array}{c} f(x) \\ f(x) \cdot x \\ f(x) \cdot x^2 \\ \vdots \\ f(x) \cdot x^5 \end{array} \right] \ dx
\end{array}$$
$$\begin{array}{c}
G^{-1} \cdot b = p \\
p \approx \left[ \begin{array}{c} 0.007989 \\ 0.861085 \\ 0.572644 \\ -1.60673 \\ 0.709135 \\ -0.09029 \end{array} \right]
\end{array}$$
$$\begin{array}{l}
h(x) = \left[ \begin{array}{cccccc} x^0 & x^1 & x^2 & x^3 & x^4 & x^5 \end{array} \right] \cdot \left[ \begin{array}{c} a \\ b \\ c \\ c \\ d \\ e \end{array} \right] \\
h(x) = \left[ \begin{array}{cccccc} x^0 & x^1 & x^2 & x^3 & x^4 & x^5 \end{array} \right] \cdot \left[ \begin{array}{c} 0.007989 \\ 0.861085 \\ 0.572644 \\ -1.60673 \\ 0.709135 \\ -0.09029 \end{array} \right]
\end{array}$$

---

# Aufgabe 7

## Aufgabe

Man berechne die Fourier-Reihe folgender Funktion

$$
f(x,c) = \begin{cases} \dfrac{1}{2 \cdot c} & \text{if } -c \le x \le c \\ 0 & \text{else} \end{cases}
$$

$f(x,c)$ ist eine gerade Funktion, daher gestattet sie die Darstellung in einer reinen $\cos$-Reihe, es reicht aus, die F-Koeffizienten $a(k,c)$. Was beobachten Sie für $c$ gegen $0$?

$$
a(k, c) = \frac{1}{\pi} \cdot \int_{-c}^c \dfrac{1}{2 \cdot c} \cdot \cos(k \cdot x) \ dx
$$

## Lösung

$$\begin{array}{lc}
a_k(c) = \dfrac{1}{\pi} \cdot & \displaystyle \int_{-c}^c \dfrac{1}{2 \cdot c} \cdot \cos(k \cdot x) \ dx \\
a_k(c) = \dfrac{1}{2 \cdot \pi \cdot c} \cdot & \displaystyle \underbrace{\int_{-c}^c \cos(k \cdot x) \ dx} \\
a_k(c) = \dfrac{1}{2 \cdot \pi \cdot c \cdot k} \cdot & \left[ \sin(k \cdot x) \right]^c_{-c} \\
a_k(c) = \dfrac{1}{2 \cdot \pi \cdot c \cdot k} \cdot & 2 \cdot \sin(c \cdot k)
\end{array}$$
$$
a_k(c) = \dfrac{\sin(c \cdot k)}{\pi \cdot c \cdot k}
$$

Verhalten von $c \rightarrow 0$

$$
\lim_{x \rightarrow 0} \left( \dfrac{\sin(x)}{\pi (x)} \right) \widehat{=} \dfrac{\cos(x)}{\pi}
$$

---

# Aufgabe 8

## Aufgabe

Man löse folgende DGL (AWP)

$$\begin{array}{l}
y''' + \dfrac{13}{12} \cdot y'' + \dfrac{3}{8} \cdot y' + \dfrac{1}{24} \cdot y = 0 \\
y(0) = y'(0) = 0  \\
y''(0) = 1 
\end{array}$$

Demnach wird die Impulsantwort g(t) dieser DGL gesucht

## Lösung

