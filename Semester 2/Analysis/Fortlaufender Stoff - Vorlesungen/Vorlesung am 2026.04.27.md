# Zahlenfolgen und deren Grenzwerte: Newtonverfahren zur Bestimmung einer Nullstelle von Polynomen

Wir definieren eine Zahlenfolge rekursiv. Das heißt, das Folgenglied $a_{n}$ ergibt sich durch eine bestimmte Berechnungsvorschrift aus den Vorgängergliedern $a_{n-1} \dots a_{0}$

Beispiel:

$$
p(x) = 3x^3 + 2x^2 + 5x + 10
$$
$$
a_{0} = 0
$$
$$
a_{n+1} = a_{n} - \frac{p(a_{n})}{p'(a_{n})}
$$

Grafik: Newtonverfahren

> Definition Konvergenz:
> Wir sagen, dass die Zahl $a$ Grenzwert der Zahlenfolge $a_{1} \dots a_{\infty}$ ist, falls es zu jedem $\epsilon$ eine Indexschranke $N$ gibt, mit der Eigenschaft:
> Für alle  $n$  größer als $N$ gilt $|a-a_{n}| < \epsilon$
> Wir bringen diese Verhältnisse durch an Pfeil $a$ zum Ausdruck

Beispiel für direkt definierte Zahlenfolge:

$$
a(n) = 1 - \frac{1}{n^2}
$$
$$
\lim_{ n \to \infty } a(n) \to 1
$$

---

$$
a(n, m) = m - \frac{1}{n^2}
$$
$$
\lim_{ n \to \infty } a(n) \to m
$$

Die Kunst des Newtonverfahrens ist die Wahl eines guten Startwerts
Eine Zahlenfolge heißt divergent, wenn sie nicht konvergent ist (Gegenteil von konvergent)
Auch wenn eine Zahlenfolge gegen $+ \infty$ oder $- \infty$ "konvergiert", so sprechen wir trotzdem von Divergenz. Eine Zahlenfolge, die gegen Null konvergiert nennen wir Nullfolge.
Eine Zahlenfolge, deren ... .
Jede Zahlenfolge ist konvergent gegen einen Grenzwert $c$

Falls Zählergrad und Nennergrad von $f(n)$ gleich sind, so ist die zugehörige Zahlenfolge konvergent gegen den Quotionenten der Führungskoeffizienten von Zähler und Nennerpolynom. Falls der Grad des Zählers kleiner ist als der Grad des Nenners, bekommen wir eine Nullfolge.
Falls der Grad des Zählers größer ist als der Nennergrad, handelt es sich um eine divergente Folge.

Den Quotienten zweier Polynome zeichnet man als rationale Funktion.

Beispiel:

Für welches Argument $x$ gilt $\cos(x) = x$
NST der Funktion $f(x) = \cos(x) - x$
Dies lösen wir durch das Newtonvrfahren

$$
a_{n+1} = a_{n} - \frac{f(a_{n})}{df(a_{n})} = a_{n} - \frac{\cos(a_{n}) - a_{n}}{\sin(a_{n}) - 1}
$$
Wir nennen einen Punkt Fixpunkt, wenn $f(x) = x$ gilt. Jede Fixpunktgleichung kann als Nullstellenproblem aufgefasst werden.

Spricht man über Folgen, wird man unmittelbar auf Reihen geführt, die man benötigt, um das Integral einer Funktion mathematisch befriedigend zu definieren (Riemannsche Summen, numerische Berechnung von bestimmten Integralen)

$$
\sum_{k=1}^{\infty} \frac{1}{k^2} \to \frac{\pi^2}{6}
$$

Diesen Grenzwert kann man mittels der Fourier-Reihe berechnen.
Geometrische Reihe:

$$
\sum_{k=0}^{\infty} q^k
$$
Übung: Man berechne die Summe
$$
\sum_{k=0}^{\infty} \frac{2^k}{3^{k+2}}
$$
$$
\frac{1}{9} \cdot\sum_{k=0}^{\infty} \left( \frac{2}{3} \right)^k = \frac{1}{9 \cdot \left( 1-\frac{2}{3} \right)} = \frac{1}{3}
$$
