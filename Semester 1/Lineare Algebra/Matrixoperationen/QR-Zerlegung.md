(nach dem Gram-Schmidt-Orthogonalisierungs Verfahren)

> [!Type]- Zusatzinformationen
> 
> Gram-Schmidt-Orthogonalisierung:
> 
> $\displaystyle q_n = V_n - \sum_{i=1}^{n-1} \frac{V_n^T \cdot q_i}{|q_i|^2} \cdot q_i$
> 
> Länge eines Vektors: __(nicht euklidische Länge!)__ 
> 
> $|\begin{pmatrix} a \\ b \\ c \end{pmatrix}| = a^2+b^2+c^2$
> 
> Skalarprodukt zweier Vektoren:
> 
> $\begin{pmatrix} a \\ b \\ c \end{pmatrix} \circ \begin{pmatrix} d \\ e \\ f \end{pmatrix} = a \cdot d + b \cdot e + c \cdot f$

Die QR-Zerlegung wird genutzt um eine Matrix $A$ in die Produkte zweier anderer Matrizen zu zerlegen ($Q; R$).
$$
A=Q \cdot R
$$
Hierbei haben die entstehenden Matrizen $Q; R$ besondere Eigenschafften. Die entstehende Matrix $Q$ ist eine orthogonale Matrix, währen die Matrix $R$ eine obere Dreiecksmatrix ist (siehe [[Grundlegende Matrix Operationen#Dreiecksmatrix|obere Dreiecksmatrix]]). Zur Berechnung der QR-Zerlegung gibt es mehrere verfahren. In diesem Beispiel wird das Gram-Schmidt-Orthogonalisierungs Verfahren verwendet. Die Berechnung sieht wie folgt aus:

$$
A=
\left[
\begin{matrix}
-1 & 0 & 4 \\
2 & 4 & -3 \\
\underbrace{2}_{\vec V_1} & \underbrace{5}_{\vec V_2} & \underbrace{2}_{\vec V_3}
\end{matrix}
\right]
$$

Im ersten Schritt werden die 3 Vektoren $(\vec V_1; \vec V_2; \vec V_3)$ nach Gram-Schmidt berechnet. Hierbei muss der erste Vektor nicht berechnet werden. Er bleibt identisch.

$$
\vec q_1 = \vec V_1 = 
\begin{pmatrix}
-1 \\
2 \\
2
\end{pmatrix}
$$

Im nächsten Schritt nehmen wir den zweiten Vektor $V_2$ und projektieren in _(mithilfe der Gram-Schmidt Formel)_ auf den gerade ausgerechneten Vektor $q_1$.

$$
\vec q_2 = 
\underbrace {
\begin{pmatrix}
0 \\
4 \\
5
\end{pmatrix}}_{\vec V_2}
-
\frac{\overbrace{\colorbox{blue}{18}}^{\vec V_2 \; \circ \;\vec q_1}}{\underbrace{9}_{|\vec q_1|}}
\cdot
\underbrace {
\begin{pmatrix}
-1 \\
2 \\
2
\end{pmatrix}}_{\vec q_1}
=
\begin{pmatrix}
2 \\
0 \\
1
\end{pmatrix}
$$
Dieses Schemata wiederholt sich für den Vektor $V_2$. _(Bei einer mehrdimensionalen Matrix so oft, bis alle Vektoren $V_n$ berechnet wurden)_ 

$$
\vec q_3 = 
\underbrace {
\begin{pmatrix}
4 \\
-3 \\
2
\end{pmatrix}}_{\vec V_3}
-
\frac{\overbrace{\colorbox{orange}{-6}}^{\vec V_3 \; \circ \;\vec q_1}}{\underbrace{9}_{|\vec q_1|}}
\cdot
\underbrace {
\begin{pmatrix}
-1 \\
2 \\
2
\end{pmatrix}}_{\vec q_1}
-
\frac{\overbrace{\colorbox{red}{10}}^{\vec V_3 \; \circ \;\vec q_2}}{\underbrace{5}_{|\vec q_2|}}
\cdot
\underbrace {
\begin{pmatrix}
2 \\
0 \\
1
\end{pmatrix}}_{\vec q_2}
=
\frac{1}{3}
\begin{pmatrix}
-2 \\
-5 \\
4
\end{pmatrix}
$$
Nun haben wir alle Informationen, die wir zur Berechnung von $Q$ und $R$ benötigen. Die Matrix Q besteht nun aus den Normierten Vektoren $(q_1; q_2; q_3)$. Das heißt die Vektoren $(q_1; q_2; q_3)$ müssen auf die euklidische Länge 1 gebracht werden _(Normiert werden)_ damit $Q$ bestimmt werden kann. Dies geschieht durch das Dividieren der Vektoren $(q_1; q_2; q_3)$ durch ihre euklidische Länge.

$$
\text{euklidische Länge $q_1$} = \sqrt{-1^2+2^2+2^2}=3
$$
$$
\text{euklidische Länge $q_2$} = \sqrt{2^2+0^2+2^1}= \sqrt{5}
$$
$$
\text{euklidische Länge $q_3$} = \sqrt{(\frac{1}{3} \cdot (-2))^2+(\frac{1}{3} \cdot (-5))^2+(\frac{1}{3} \cdot 4)^2}= \frac{1}{3} \sqrt{45}
$$
$$
\frac{q_1}{|q_1|} = \frac{
\begin{pmatrix}
-1 \\
2 \\
2
\end{pmatrix}
}{3}
=
\begin{pmatrix}
-\frac{1}{3} \\
\frac{2}{3} \\
\frac{2}{3}
\end{pmatrix}
$$
$$
\frac{q_2}{|q_2|} = \frac{
\begin{pmatrix}
2 \\
0 \\
1
\end{pmatrix}
}{\sqrt{5}}
=
\begin{pmatrix}
\frac{2}{\sqrt{5}} \\
0 \\
\frac{1}{\sqrt{5}}
\end{pmatrix}
$$
$$
\frac{q_3}{|q_3|} = \frac{
\frac{1}{3}
\begin{pmatrix}
-2 \\
-5 \\
4
\end{pmatrix}
}{\frac{1}{3} \sqrt{45}}
=
\begin{pmatrix}
-\frac{2}{\sqrt{45}} \\
-\frac{5}{\sqrt{45}} \\
\frac{4}{\sqrt{45}}
\end{pmatrix}
$$
Daraus ergibt sich nun unser finales $Q$.

$$
Q=
\underline{\underline{
\left[
\begin{matrix}
-\frac{1}{3} & \frac{2}{\sqrt{5}} & -\frac{2}{\sqrt{45}} \\
\frac{2}{3} & 0 & -\frac{5}{\sqrt{45}} \\
\frac{2}{3} & \frac{1}{\sqrt{5}} & \frac{4}{\sqrt{45}}
\end{matrix}
\right]}}
$$

Zuletzt können wir nun unser finales $R$ wie folgt bestimmen.

$$
R=
\left[
\begin{matrix}
|q_1| & r_1 & r_2 \\
0 & |q_2| & r_3 \\
0 & 0 & |q_3|
\end{matrix}
\right]
=
\underline{\underline{
\left[
\begin{matrix}
\colorbox{purple}{3} & \colorbox{green}{6} & \colorbox{brown}{-2} \\
0 & \color{lime}{\sqrt{5}} & \boxed{2 \sqrt{5}} \\
0 & 0 & \sqrt{5}
\end{matrix}
\right]}}
$$
Dafür brauchen wir noch folgende Nebenrechnung.
$$
\to|q_3| = \frac{1}{2} \sqrt{45} = \frac{1}{3} \sqrt{9 \cdot 5} = \frac{1}{3} \cdot 3 \cdot \sqrt{5} = \sqrt{5}
$$
$$
\to r_1=\frac{\vec V_2 \; \circ \;\vec q_1}{|q_1|}
=
\frac{\colorbox{blue}{18}}{\colorbox{purple}{3}}
= \colorbox{green}{6}
$$
$$
\to r_2=\frac{\vec V_3 \; \circ \;\vec q_1}{|q_1|}
=
\frac{\colorbox{orange}{-6}}{\colorbox{purple}{3}}
= \colorbox{brown}{-2}
$$
$$
\to r_3=\frac{\vec V_3 \; \circ \;\vec q_2}{|q_2|}
=
\frac{\colorbox{red}{10}}{\color{lime}{\sqrt{5}}}
= \boxed{2\sqrt{5}}

$$
