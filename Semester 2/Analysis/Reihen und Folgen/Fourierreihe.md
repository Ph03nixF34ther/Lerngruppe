---
aliases:
  - Fourierreihen
  - Fourier-Reihe
  - Fourier-Reihen
---
Bezeichnet nach [[Joseph Fourier]] 

Die Fourier-Reihe für ein Intervall $\left[ -L, L \right]$ wird im allgemeinen wie folgt definiert

$$
f(x) = \dfrac{a_0}{2} + \sum_{n=1}^\infty \left( a_n \cos \dfrac{n \pi x}{L} + b_n \sin \dfrac{n \pi x}{L} \right)
$$

---

Für eine partiell definierte Funktion $f$ im Intervall $\left[ -L, L \right]$ ist die Fourier-Reihe der Funktion $f$ die trigonometrische Reihe

$$
f(x) = \dfrac{a_0}{2} + \sum_{n=0}^{\infty} a_n \cos \dfrac{n \pi x}{L} + b_n \sin \dfrac{n \pi x}{L}
$$

Und $a_n$ und $b_n$ ergeben sich wie folgt

$$\begin{array}{c}
a_n = \dfrac{1}{L} \displaystyle \int_{-L}^{L} f(x) \cos \dfrac{n \pi x}{L} \ dx \\
b_n = \dfrac{1}{L} \displaystyle \int_{-L}^{L} f(x) \sin \dfrac{n \pi x}{L} \ dx
\end{array}$$