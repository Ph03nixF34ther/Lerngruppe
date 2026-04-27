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

