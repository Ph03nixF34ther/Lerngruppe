# 1. Man bestimme die Werte folgender Reihen (2) (Geometrische Reihen)

$$
\sum^{\infty}_{k = 1} \dfrac{2^{k + 3}}{3^{k + 1}}
$$
$$
\sum^\infty_{k = 0} \dfrac{4^{2 \cdot k}}{5^{k + 1}}
$$

## Lösung

Um die Summe loszuwerden probiert man sie in die Form der [[Geometrische Reihe|geometrischen Reihe]] $\displaystyle\sum^\infty_{k=0} q^k$, wo $\left| q \right| < 1$ ist, zu bringen

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

# 2. Man entscheide mit dem Quotienten-Kriterium für welche Zahlen q folgende Reihe konvergiert! (Man muss q noch wählen damit q < 1)

Es ist eine Reihe mit der Laufvariable $k$ und einer Variable $q$, welche man selber bestimmen soll, gegeben

$$
\sum^{\infty}_{k = 1} \left( \dfrac{k^2}{2^k} + q^k \right)
$$

Auf den Start der Reihe achten!
Die Reihe startet bei $k=1$, weil für das [[Quotientenkriterium]] jedes $x_n \ne 0$ sein muss

## Lösung

Für das [[Quotientenkriterium]] wird für die Reihe $\sum^\infty_{n=0} x_n$ der Bruch $\dfrac{x_{n+1}}{x_n}$ gegen Unendlich geführt 
somit

$$
n_q = \lim_{k \rightarrow \infty} \dfrac{\dfrac{(k+1)^2}{2^{k+1}}\cdot q^{k+1}}{\dfrac{k^2}{2^k}\cdot q^k} = \dfrac{q}{2}
$$

Nun ist $q$ zu wählen, sodass $\left| n_q \right| < 1$,
denn es gilt

$$\begin{array}{l}
\left| n \right| < 1 \Rightarrow \text{Konvergiert} \\
\left| n \right| = 1 \Rightarrow \text{Es kann keine Aussage mit dem Quotientenkriterium getroffen werden} \\
\left| n \right| > 1 \Rightarrow \text{Divergiert}
\end{array}$$

und $q < 1$, wie von ihm vorgeben

$\left| n_q \right| \ge 1$ gilt erst für $q \ge 2$, somit ist hier $\left| q \right| < 1$ zu wählen

---

# 3. Regel von L'Hospital: Unbestimmten Ausdruck bestimmen

Es wird eine Funktion der Form $f(x) = \dfrac{g(x)}{h(x)}$ gegeben

$$
g(x) = \sin(x^2 - 4)
$$
$$
h(x) = \cos(x-2) \cdot (x-2)
$$
$$
f(x) = \dfrac{g(x)}{h(x)}
$$

An einer Stelle $a$ ist diese unbestimmt

$$\begin{array}{c}
g(2) = 0 \\
h(2) = 0
\end{array}$$
$$
a = 2
$$
$$
f(a) = \dfrac{0}{0}
$$

## Lösung

L'Hospital sagt, dass f'(x) an Stelle $a$ gleich dem Grenzwert ist

$$\begin{array}{l}
g'(x) = \dfrac{d}{dx} g(x) = 2 \cdot x \cdot \cos(x^2 - 4) \\
h'(x) = \dfrac{d}{dx} h(x) = \cos(x - 2) - (x - 2) \cdot \sin(x - 2)
\end{array}$$
$$\begin{array}{l}
g'(a) = 2 \cdot 2 \cdot \cos(2^2 - 4) = 4 \\
h'(a) = \cos(2 - 2) - (2 - 2) \cdot \sin(2 - 2) = 1
\end{array}$$
$$
f'(a) = \dfrac{g'(a)}{h'(a)} = \dfrac{4}{1}
$$

Der Grenzwert an Stelle $a$ beträgt somit $4$

$$
\lim_{x \rightarrow 2} f(x) = 4
$$

---

# 4. Man entwickle eine Taylorreihe einer rationale Funktion an einer Stelle (Partialbrüche bestimmen)

 Gegeben ist eine rationale Funktion

$$
h(x) = \dfrac{x^3 + 2 \cdot x^2 + 1}{(x-1) \cdot (x + 1) \cdot (x + 2)}
$$

Und die Stelle an der entwickelt werden soll (Wenn nichts angegeben wird, wird $0$ angenommen)

$$
x_0 = 0
$$

## Lösung

Die Funktion wird mit der [[Partialbruchzerlegung]] zerlegt

$$
\dfrac{x^3 + 2 \cdot x^2 + 1}{(x-1) \cdot (x + 1) \cdot (x + 2)} = \dfrac{A}{x - 1} + \dfrac{B}{x + 1} + \dfrac{C}{x + 2} + 1
$$

Wir nutzen das [[Partialbruchzerlegung#Feldmann-Verfahren|Feldmann'sche Verfahren]] 

$$\begin{array}{l}
p(x) = x^3 + 2 \cdot x^2 + 1 \\
q(x) = (x - 1) \cdot (x + 1) \cdot (x + 2) \\
dq(x) = \dfrac{d}{dx} q(x) = 3 \cdot x^2 + 4 \cdot x - 1
\end{array}$$

Kritische Stellen in $\dfrac{p(1)}{dq(1)}$ einsetzen

$$\begin{array}{ccc}
A = \dfrac{p(1)}{dq(1)} = \dfrac{2}{3} & B = \dfrac{p(-1)}{dq(-1)} = -1 & C = \dfrac{p(-2)}{dq(-2)} = \dfrac{1}{3} 
\end{array}$$
$$
h(x) = \dfrac{2}{3 \cdot (x - 1)} - \dfrac{1}{x + 1} + \dfrac{1}{3 \cdot (x + 2)} + 1
$$

Jetzt werden die Partialbrüche mit Hilfe der [[Geometrische Reihe|geometrischen Reihe]] entwickelt

$$
\dfrac{2}{3 \cdot (x - 1)} = \dfrac{-2}{3} \cdot \dfrac{1}{1 - x} = \dfrac{-2}{3} \cdot \sum_{k = 0}^\infty x^k
$$
$$
- \dfrac{1}{x + 1} = - 1 \cdot \sum_{k = 0}^\infty (-1)^k \cdot x^k
$$
$$
\dfrac{1}{3 \cdot (x + 2)} = \dfrac{1}{6} \cdot \sum_{k = 0}^\infty \left( \dfrac{-x}{2} \right)^k = \dfrac{1}{6} \cdot \sum_{k = 0}^\infty \left( \dfrac{-1}{2} \right)^k \cdot x^k
$$
$$\begin{array}{rl}
T(x) =&  \displaystyle \dfrac{-2}{3} \cdot \sum_{k = 0}^\infty x^k - 1 \cdot \sum_{k = 0}^\infty (-1)^k \cdot x^k + \dfrac{1}{6} \cdot \sum_{k = 0}^\infty \left( \dfrac{-1}{2} \right)^k \cdot x^k + 1 \\
=&  \displaystyle 1 + \sum_{k = 0}^\infty \left( \dfrac{-2}{3} - (-1)^k + \dfrac{1}{6} \cdot \left( \dfrac{-1}{2} \right)^k \right) \cdot x^k
\end{array}$$

Ist $x_0 \ne 0$ setzt man für $x$ in der Summe $x-x_0$ ein

---

# 5. Man approximiere ein Polynom 4. Grades mit einem Polynom 3. Grades im Sinne der kleinsten Quadrate

Gegeben ist ein Polynom

$$
p(x) = x^4 + 3 x^3 - 2 x^2 - x + 1
$$

Und ein Intervall (Wenn keins angegeben ist, wird $\left[ 0, 1 \right]$ angenommen)

## Lösung

Man bildet die Gram'sche Matrix und dem Vektor $\vec{b}$ über das Intervall $\left[ 0, 1 \right]$ 

$$\begin{array}{ccc}
G = \displaystyle \int_0^1\left[\begin{array}{ccc}
x^0 & x^1 & x^2 & x^3 \\
x^1 & x^2 & x^3 & x^4 \\
x^2 & x^3 & x^4 & x^5 \\
x^3 & x^4 & x^5 & x^6
\end{array}\right] \ dx
& &
\vec{b} = \displaystyle \int_0^1 \left[ \begin{array}{c} x^0 \cdot p(x) \\ x^1 \cdot p(x) \\ x^2 \cdot p(x) \\ x^3 \cdot p(x) \\ \end{array} \right] \ dx
\end{array}$$

Der Koeffizienten-Vektor $\vec{c}$ lässt sich durch das Gleichungssystem lösen

$$\begin{array}{c}
G \cdot \vec{c} = \vec{b} \\
\vec{c} = G^{-1} \cdot \vec{b}
\end{array}$$
$$
\vec{c} = \left[ \begin{array}{c} \dfrac{69}{70} \\ - \dfrac{5}{7} \\ - \dfrac{23}{7} \\ 5 \end{array} \right]
$$

Die Koeffizienten in die approximierte Funktion $f(x)$ einsetzen

$$
f(x) = \sum_{i=0}^3 \vec{c}_i \cdot x^i = 5 \cdot x^3 - \dfrac{23}{7} \cdot x^2 - \dfrac{5}{7} \cdot x + \dfrac{69}{70}
$$

---

# 6. Man entwickle eine Fourier-Reihe (Entweder gerade oder ungerade Funktion gegeben) Mit Satz von Parseval die Reihe der Fourier-Reihe bestimmen

Es ist eine gerade ($f(x) = f(-x)$) oder ungerade ($f(x) = -f(-x)$) gegeben

$$\begin{array}{ccc}
f(x) = x^2 & \Rightarrow & \text{Gerade}
\end{array}$$

Und ein Intervall (Wenn keins angegeben ist, wird $\left[ -\pi, \pi \right]$ angenommen)

## Lösung

Weil die Funktion gerade ist müssen wir nur $a$ bilden
(Falls die Funktion ungerade ist wird $b(k)$ gebildet und aus $\cos$ wird zu $\sin$)

$$
a(k) = \dfrac{1}{\pi} \int_{-\pi}^\pi f(x) \cdot \cos(k \cdot x) \ dx = \dfrac{2 \cdot \left( 2 \cdot k \cdot \cos(k \cdot \pi) \cdot \pi + \left( k^2 \cdot \pi^2 - 2 \right) \cdot \sin(k \cdot \pi) \right)}{k^3 \cdot \pi}
$$
$$
a(0) = \dfrac{2 \cdot \pi^2}{3}
$$
$$
S = \dfrac{a(0)}{2} + \sum_{k=1}^{\infty} (a(k))^2 = \dfrac{1}{\pi} \int_{-\pi}^{\pi} \left( f \left( x \right) \right)^{2} \ dx \approx 38.96
$$

---

# 7. Man löse durch Faltung (vlt. auch durch Ansatz) ein Anfangswertproblem

Gegeben ist eine lineare Differentialgleichung (DGL)

$$
y'' + 2 \cdot y' + 5 \cdot y = \cos(t)
$$

Und einer Bedingung

$$\begin{array}{c}
y(0) = 0 & y'(0) = 1
\end{array}$$

Da die Differentialgleichung ungleich $0$ ist, ist sie inhomogen

## Lösung

Zuerst bildet man den homogenen teil der DGL

$$
y'' + 2 \cdot y' + 5 \cdot y = 0
$$

Wir bilden das charakteristische Polynom

$$
p(\lambda) = \lambda^2 + 2 \cdot \lambda + 5
$$

Die Nullstellen dieses Polynoms sind die Eigenwerte des DGLs
(Sind alle Realteile negativ ist das DGL stabil)

$$\begin{array}{c}
p(\lambda) = 0 \\ \\
\lambda = \left[ \begin{array}{c} -1 - 2 \cdot i \\ -1 + 2 \cdot i \end{array} \right]
\end{array}$$

Hier unterscheidet man in drei Fälle:

1. Zwei verschiedene reelle Lösung $\lambda_1 \ne \lambda_2$
	Lösungsansatz: $y_h(x) = c_1 \cdot e^{\lambda_1x} + c_2 \cdot e^{\lambda_2x}$

2. Eine doppelte reelle Lösung $\lambda_1 = \lambda_2 = \lambda$
	Lösungsansatz: $y_h(x) = (c_1 + c_2 x) \cdot e^{\lambda x}$

3. Komplex konjugierte Lösung $\lambda_{1,2} = a \pm b \cdot i$ $\Rightarrow$ Unser Fall
	Lösungsansatz: $y_h(x) = e^{a x} \cdot (c_1 \cos(b x) + c_2 \sin(b x)$

$$\begin{array}{l}
y_h(x) = e^{-i} \cdot (c_1 \cos(2x) + c_2 \sin(2x)) \\
y_h'(x) = 2 \cdot \cos(1) \cdot (c_2 \cdot \cos(2x) - c_1 \cdot \sin(2x)) - 2 \cdot \sin(1) \cdot (c_2 \cdot \cos(2x) - c_1 \cdot \sin(2x)) \cdot i
\end{array}$$

$$\begin{array}{ll}
I. & y_h(0) = 0 \\
II. & y_h'(0) = 1
\end{array}$$
$$\begin{array}{c}
c_1 = 0 & c_2 = \dfrac{\cos(1)}{2} + \dfrac{\sin(1)}{2} \cdot i
\end{array}$$
$$
y_h(x) = \dfrac{\sin(2x)}{2}
$$
$$\begin{array}{l}
y_h(0) = 0 \\
y_h(1) = \dfrac{\sin(2)}{2}
\end{array}$$

