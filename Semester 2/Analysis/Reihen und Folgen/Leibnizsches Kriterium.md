Das Leibniz-Kriterium ist ein [[Konvergenzkriterien|Konvergenzkriterium]]. Dieses Kriterium befasst sich mit alternierenden Reihen (wechselnde Vorzeichen der einzelnen Glieder). 

Wenn auf eine Reihe das Leibniz-Kriterium zutrifft dann konvergiert die gesamte Reihe gegen Null. $x \to 0$.

Für die Erfüllung Leibniz-Kriterium sind zwei Bedingungen nötig. Die erste ist, dass die Reihe Alternierend ist. Das bedeutet, dass die einzelnen Summanden abwechseln unterschiedliche Vorzeichen haben. 
$$
	Bsp.: 1 -2 +4 -8 +16 \dots
$$
Die zweite Bedingung ist, dass der Betrag der einzelnen Glieder Monoton gegen null fällt.
$$
	Bsp.: \frac{1}{2}- \frac{1}{4}+ \frac{1}{8} -\frac{1}{16}
$$
Beispiel: 
1.
$$
	x= \sum_{n=1} ^ \infty (-1) ^{(1+n)} \cdot a_{n}
$$
$$
	a_{n}= \frac{1+n}{n^2}
$$
Durch den unterschiedlichen Positiven und Negativen Exponenten ist die Reihe alternierend. Da $a_{n}$ monoton fallend ist, geht die Reihe gegen Null.
$$
	x = 2-\frac{3}{4}+\frac{4}{9}-\frac{5}{16} \dots \to 0
$$
2.
$$
	x= \sum_{n=1} ^ \infty (-1)  \cdot a_{n}
$$
$$
		a_{n}= \frac{1+n}{n^2}
$$
Da die Reihe nicht alternierend ist, trifft das Leibniz-Kriterium nicht zu.
$$
	x= -2-\frac{3}{4}-\frac{4}{9}-\frac{5}{16} \dots \not \to 0
$$

3.
$$
	x= \sum_{n=1} ^ \infty (-1) ^{(1+n)} \cdot a_{n}
$$
$$
		a_{n}= \frac{2\cdot n}{2}
$$
Da $a_{n}$ nicht monoton fallen ist, trifft das Leibniz-Kriterium nicht zu.
$$
	x=1-2+3-4+5-6 \dots \not \to 0
$$
