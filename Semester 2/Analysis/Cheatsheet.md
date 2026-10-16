# Anfangswertproblem

## Beispielaufgabenstellungen

1. Man löse folgendes Anfangswertproblem (AWP) ^a1

$$\begin{array}{ccc}
y''' + \dfrac{7}{6} \cdot y'' + \dfrac{40}{9} \cdot y' + \dfrac{37}{18} \cdot y = 0 & y(0) = y'(0) = 0 & y''(0) = 1
\end{array}$$

2. Man löse ^a2

$$\begin{array}{c}
y'''(t) + \dfrac{7}{6} \cdot y''(t) + \dfrac{40}{9} \cdot y'(t) + \dfrac{37}{18} \cdot y(t) = t \\
y(0) = y'(0) =  y''(0) = 0
\end{array}$$

durch Faltung von t mit der Implusantwort, die wir in [[#^a1|Aufgabe 1]] berechnet haben

## Lösung

Das Polynom bestimmen

$$
p(x) = x^3 + \dfrac{7}{6} \cdot x^2 + \dfrac{40}{9} \cdot x + \dfrac{37}{18}
$$

Nullstellen bestimmen

$$\begin{array}{cc}
p(x) = 0 & x = \left[ \begin{array}{c} -\dfrac{1}{2} \\ -\dfrac{1}{3} + 2 i \\ -\dfrac{1}{3} - 2 i \end{array} \right]
\end{array}$$

In Impulsantwort einsetzen

$$
y(t) = c_1 \cdot e^{\lambda_1 \cdot t} + c_2 \cdot e^{\lambda_2 \cdot t} + c_3 \cdot e^{\lambda_3 \cdot t}
$$

Oder wenn es komplex-konjugierte Nullstellen gibt

$$
\lambda_{2,3} = \alpha \pm \beta i
$$
$$
y(t) = c_1 \cdot e^{\lambda_1 \cdot t} + e^{\alpha \cdot t} \cdot \left( c_2 \cdot \cos(\beta \cdot t) + c_3 \cdot \sin(\beta \cdot t) \right)
$$

$$
y(t) = c_1 \cdot e^{-\dfrac{t}{2}} + e^{-\dfrac{t}{3}} \cdot \left( c_2 \cdot \cos(2 \cdot t) + c_3 \cdot \sin(2 \cdot t) \right)
$$

Für [[#^a1|Aufgabe 1]] die mit Gleichungssystem $c_{1,2,3}$ bestimmen

$$\begin{array}{cc}
\begin{cases}
y(0) = 0 \\
y'(0) = 0 \\
y''(0) = 1
\end{cases}
&
c_{1,2,3} = \left[ \begin{array}{c}
\dfrac{36}{145} \\
-\dfrac{36}{145} \\
\dfrac{3}{145}
\end{array} \right]
\end{array}$$

Lösung für [[#^a1|Aufgabe 1]]
$$
y(t) = -\dfrac{3 \cdot e^{-\dfrac{t}{2}} \cdot \left( 12 \cdot e^{\dfrac{t}{6}} \cdot \cos(2 \cdot t) - e^{\dfrac{t}{6}} \cdot \sin(2 \cdot t) - 12 \right)}{145}
$$

Zur der Lösung für [[#^a2|Aufgabe 2]] gelangt man indem man die Lösung faltet

$$
g(t) = \int_0^t y(t - s) \cdot s \ ds
$$

Lösung für [[#^a2|Aufgabe 2]]


$$
g(t) = \dfrac{9 \cdot e^{-\dfrac{t}{2}} \cdot \left( 1296 \cdot e^{\dfrac{t}{6}} \cdot \cos(2 \cdot t) + 327 \cdot e^{\dfrac{t}{6}} \cdot \sin(2 \cdot t) + 2 \cdot \left( 145 \cdot \left( 37 \cdot t - 80 \right) \cdot e^{\dfrac{t}{2}} + 10952 \right) \right)}{198505}
$$

> [!note]+ Kontrolle
> 
> $$
> \dfrac{d^3}{dt^3} g(t) + \dfrac{7}{6} \cdot \left( \dfrac{d^2}{dt^2} g(t) \right) + \dfrac{40}{9} \cdot \left( \dfrac{d}{dt} g(t) \right) + \dfrac{37}{18} \cdot g(t) = t
> $$

Für folgendes Problem

$$
y''(t) + 2 \cdot y'(t) + 5 \cdot y(t) = \cos(t)
$$

würde die Faltung wie folgt aussehen

$$
g(t) = \int_0^t y(t - s) \cdot \cos(s) \ ds
$$

---

# Reihen

## Beispielaufgabenstellungen

Man berechne folgende Reihen:

1. Reihe 1 ^a3

$$
\sum_{k = 1}^{\infty} \dfrac{2^{k + 3}}{3^{k + 1}}
$$

2. Reihe 2 ^a4

$$
\sum_{k = 0}^{\infty} \dfrac{1}{(k + 3) \cdot (k + 5)}
$$

## Lösung

Reihe in Form der geometrischen Reihe bringen

$$\begin{array}{c|c}
\displaystyle \sum_{k=0}^{\infty} q^k = \dfrac{1}{1 - q} & \left| q \right| < 1
\end{array}$$

Für [[#^a3|Reihe 1]] 

$$\begin{array}{cl}
& \displaystyle \sum_{k = 1}^{\infty} \dfrac{2^{k + 3}}{3^{k + 1}} \\
= & \displaystyle \sum_{k = 1}^{\infty} \dfrac{2^{k}}{3^{k}} \cdot \dfrac{2^{3}}{3^{1}} \\
= & \displaystyle \dfrac{2^{3}}{3^{1}} \cdot \sum_{k = 1}^{\infty} \left( \dfrac{2}{3} \right)^k
\end{array}$$

Für die geometrische Reihe muss $k=0$ sein

$$\begin{array}{cl}
= & \displaystyle \dfrac{2^{3}}{3^{1}} \cdot \sum_{k = 1}^{\infty} \left( \dfrac{2}{3} \right)^k \\
= & \displaystyle \dfrac{2^{3}}{3^{1}} \cdot \left( \sum_{k = 0}^{\infty} \left( \dfrac{2}{3} \right)^k - \left( \dfrac{2}{3} \right)^0 \right) \\
= & \displaystyle \dfrac{2^{3}}{3^{1}} \cdot \left( \dfrac{1}{1 - \dfrac{2}{3}} - 1 \right) \\
= & \dfrac{16}{3}
\end{array}$$

Für [[#^a4|Reihe 2]] 

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

# Unbestimmter Ausdruck

## Beispielaufgabenstellung

1. Mit der Regel von L' Hospital bestimme man den Wert von folgendem unbestimmten Ausdrucks ^a5

$$
\lim_{k \rightarrow 0} \dfrac{\sin(x) \cdot x}{\cos(x) - 1}
$$

## Lösung

$$\begin{array}{l}
f(x) = \sin(x) \cdot x \\
g(x) = \cos(x) - 1
\end{array}$$

$$
\dfrac{f(0)}{g(0)} = \dfrac{0}{0} \rightarrow \text{undefined}
$$

Solange Ableitungen bilden bis es definiert ist

$$
\dfrac{f'(0)}{g'(0)} = \dfrac{0}{0} \rightarrow \text{undefined}
$$
$$
\dfrac{f''(0)}{g''(0)} = \dfrac{2}{-1} = -2
$$
$$
\lim_{k \rightarrow 0} \dfrac{\sin(x) \cdot x}{\cos(x) - 1} = -2
$$

---

# Partielle Integration

## Beispielaufgabenstellung

1. Mittels partieller Integration berechne man $I(x)$

$$
I(x) = \int x \cdot e^x \cdot \sin(x) \ dx
$$

## Lösung

Die Regel der partiellen Integration

$$
\int u(x) \cdot v'(x) \ dx = u(x) \cdot v(x) - \int u'(x) \cdot v(x) \ dx
$$

$u(x)$ und $v'(x)$ bestimmen
(Für $u(x)$ sollte man den Teil wählen, der durch die Ableitung vereinfacht wird)

$$\begin{array}{l}
u(x) = x \\
v'(x) = e^x \cdot \sin(x)
\end{array}$$

Das passende Paar $u'(x)$ und $v(x)$ bestimmen

$$\begin{array}{l}
u'(x) = 1 \\
v(x) = \int e^x \cdot \sin(x) \ dx
\end{array}$$

$v(x)$ kann ebenfalls wieder mit einer partiellen Integration bestimmt werden

$$\begin{array}{l}
u_1(x) = e^x \\
v_1'(x) = \sin(x)
\end{array}$$

Das Paar ist

$$\begin{array}{l}
u_1'(x) = e^x \\
v_1(x) = -\cos(x)
\end{array}$$

Eingesetzt in die Formel

$$
\int e^x \cdot \sin(x) \ dx = e^x \cdot -\cos(x) - \int e^x \cdot -\cos(x) \ dx
$$
