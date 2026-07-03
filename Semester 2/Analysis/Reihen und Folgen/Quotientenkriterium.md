Es sei eine [[Zahlenreihe|Reihe]] gegeben

$$
\sum^{\infty}_{n = 0} a_n
$$

wobei $a_n \neq 0$ für alle $n \in \mathbb{N}$ 

Gibt es ein $q < 1$, so dass für alle $n \in \mathbb{N}$ gilt

$$
\left| \dfrac{a_n + 1}{a_n} \right| \le q < 1
$$

so ist die Reihe konvergent

Gilt dagegen

$$
\left| \dfrac{a_n + 1}{a_n} \right| \ge 1
$$

so ist sie divergent
Dabei darf $\left| \dfrac{a_n + 1}{a_n} \right|$ nicht von unten gegen $1$ streben

Gilt lediglich $\left| \dfrac{a_n + 1}{a_n} \right| < 1$ liefert das Quotientenkriterium keine Aussage

# Beispiel

Es ist folgende [[Zahlenreihe|Reihe]] gegeben

$$
\sum^{\infty}_{n = 0} \dfrac{5 + n}{10^n}
$$

$$
\left| \dfrac{a_n + 1}{a_n} \right| = \dfrac{5 + ( n + 1 )}{10^{n + 1}} \cdot \dfrac{10^n}{5 + n} = \dfrac{1}{10} \cdot \dfrac{6 + n}{5 + n} \le \dfrac{3}{25} < 1
$$

-> Die Folge ist konvergent