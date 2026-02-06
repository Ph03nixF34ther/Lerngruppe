# Zusammenfassung

Eine [[Komplexe Zahlen|komplexe Zahl]] $z$ in der Eulerschen Form hat folgende Form

$$
z = \left| z\right| \cdot \mathrm{e}^{\mathrm{i} \cdot \varphi}
$$

wo $\left| z\right|$ der [[Rechenregeln Komplexe Zahlen#Betrag|Betrag]] und $\varphi$ das [[Rechenregeln Komplexe Zahlen#Argument|Argument]] von $z$ ist

---

# Erklärung

Die Eulersche Form gibt es eine Feststellung in der Mathematik

$$
\mathrm{e}^{\mathrm{i} \cdot \varphi} = \cos(\varphi) + \mathrm{i} \cdot \sin(\varphi)
$$

Dieser Zusammenhang hat leider keine visuelle Herleitung, sondern ergibt sich aus den [[Taylorreihen]] von $\mathrm{e}$, $\sin$ und $\cos$ 

$$\begin{array}{l}
\mathrm{e}^x & =\color{green} 1 + \color{red} x + \color{green}\dfrac{x^2}{2!} + \color{red} \dfrac{x^3}{3!} + \color{green}.\color{red}.\color{green}.&= \displaystyle\sum_{k=0}^\infty \dfrac{x^k}{k!} \\
\cos(x) & = \color{green} 1 - \dfrac{x^2}{2} + \dfrac{x^4}{4} \pm ... & = \displaystyle\sum_{k=0}^\infty (-1)^k \dfrac{x^{2k}}{(2k)!} \\
\sin(x) & = \color{red} x - \dfrac{x^3}{3} + \dfrac{x^5}{5} \pm ... & = \displaystyle\sum_{k=0}^\infty (-1)^k \dfrac{x^{2k+1}}{(2k+1)!}
\end{array}$$

Setzt man für $\mathrm{e}^x$ jetzt $\mathrm{i} \cdot \varphi$ ein

$$
\mathrm{e}^{\mathrm{i} \cdot \varphi} = \cos(\mathrm{i} \cdot \varphi) + \sin(\mathrm{i} \cdot \varphi)
$$

Man kann der Reihe vom $\cos$ erkennen, dass die [[Imaginäre Einheit|imaginäre Einheit]] immer zu einem geraden Exponenten potenziert wird und damit zu $-1$ wird

$$
\cos(\mathrm{i} \cdot \varphi) = 1 - \dfrac{(\mathrm{i} \cdot \varphi)^2}{2} + \dfrac{(\mathrm{i} \cdot \varphi)^4}{4} \pm ... = \displaystyle\sum_{k=0}^\infty (-1)^k \dfrac{(\mathrm{i} \cdot \varphi)^{2k}}{(2k)!} = \displaystyle\sum_{k=0}^\infty (-1)^k \dfrac{(-1) \cdot \varphi^{2k}}{(2k)!}
$$

In der Reihe vom $\sin$ fällt die imaginäre Einheit zwar nicht weg aber man kann sie ausklammern

$$\begin{array}{l}
\sin(\mathrm{i} \cdot \varphi) = \mathrm{i} \cdot \varphi - \dfrac{(\mathrm{i} \cdot \varphi)^3}{3} + \dfrac{(\mathrm{i} \cdot \varphi)^5}{5} \pm ... = \displaystyle\sum_{k=0}^\infty (-1)^k \dfrac{(\mathrm{i} \cdot \varphi)^{2k+1}}{(2k+1)!} \\
= \mathrm{i} \cdot \varphi - \dfrac{(-1) \cdot \mathrm{i} \cdot \varphi^3}{3} + \dfrac{1 \cdot \mathrm{i} \cdot \varphi^5}{5} \pm ... \\
= \mathrm{i} \cdot (\varphi - \dfrac{(-1) \cdot \varphi^3}{3} + \dfrac{1 \cdot \varphi^5}{5} \pm ...)
\end{array}$$

Damit kommen wir zur selben Feststellung

$$
\mathrm{e}^{\mathrm{i} \cdot \varphi} = \cos(\varphi) + \mathrm{i} \cdot \sin(\varphi)
$$

Für die [[Polar-Koordinaten-Form]] wurde $z$ wie folgt definiert

$$
z = \left| z \right| \cdot E(\varphi)
$$

Wobei $E(\varphi)$ definiert wurde als

$$
E(\varphi) = \cos(\varphi) + \mathrm{i} \cdot \sin(\varphi)
$$

Nun kann geschlussfolgert werden

$$
\mathrm{e}^{\mathrm{i} \cdot \varphi} = E(\varphi) = \cos(\varphi) + \mathrm{i} \cdot \sin(\varphi)
$$

Somit ist die allgemeine Form der Eulerschen Form

$$
z = \left| z\right| \cdot \mathrm{e}^{\mathrm{i} \cdot \varphi}
$$

wo $\left| z\right|$ der [[Rechenregeln Komplexe Zahlen#Betrag|Betrag]] und $\varphi$ das [[Rechenregeln Komplexe Zahlen#Argument|Argument]] von $z$ ist

[[Polar-Koordinaten-Form#Geometrische Darstellung|Visuelle Herleitung]] und [[Rechenregeln Komplexe Zahlen|Rechenregeln]] sind wie bei der [[Polar-Koordinaten-Form]]