# Darstellung des Problems
Stellt man sich ein Teilchen vor, dass sich im 3 dimensionalen Raum entlang einer Spirale um eine Rotationsachse rotiert.

Wichtig für den weiteren Verlauf sind einige Kenngrößen:

$$
\begin{array}{l | r}
\omega & \text{Die Rotationsachse (Vektor)} \\
\Omega & \text{Die zur Rotationsachse passende Matrix} \\
T(0) & \text{Die Position des Teilchens bei } t = 0 \text{ (Vektor)} \\ 
\hline                                                                                                                                                                                                                                                                                                                                                                                                                                                                 \hline
\dot{T}(t) & \text{Die Geschwindigkeit des Teilchens zum Zeitpunkt } t \text{ (Vektor)}
\end{array}
$$
# Lösung dieses Problems
Da $\dot{T}(t)$ die Geschwindigkeit des Teilchens zum Zeitpunkt $t$ ist, ist $\dot{T}(t)$ die Ableitung derjenigen Funktion $T(t)$ die die Position des Teilchens $T$ zum Zeitpunkt $t$ bestimmt.
$$
\dot{T}(t) = \frac{d}{dt} T(t)
$$
Die Beschleunigung des Teilchens $\dot{T}$ ist immer im rechten Winkel zur Rotationsachse $\omega$ 
$$
T(t) \times \omega =\dot{T}(t) = \frac{d}{dt} T(t)
$$
---
Das Kreuzprodukt eines Vektors $\omega$ und der Positionsfunktion $T(t)$ lässt sich 
auch durch die [[Grundlegende Matrix Operationen#Multiplikation von Matrizen|Matrizenmultiplikation]] einer Matrix $\Omega$ mit dem Positionsvektor $T(t)$ darstellen:
$$
\omega \times T(t) = \Omega \cdot T(t)
$$
Dafür muss gelten:
$$
\omega = \begin{pmatrix}
\omega_{1} \\
\omega_{2} \\
\omega_{3}
\end{pmatrix}

\qquad

\Omega = 
\begin{pmatrix}
0 & -\omega_{3} & \omega_{2} \\
\omega_{3} & 0 & -\omega_{1} \\
-\omega_{2} & \omega_{1} & 0
\end{pmatrix}
$$
---
Das ergibt insgesamt das Differenzialgleichungssystem:
$$
\frac{d}{dt} T(t) = \Omega \cdot T(t)
$$
Die allgemeine Lösung für ein solches Differenzialgleichungssystem ist
$$
T(t) = T(0) \cdot e^{\Omega t}
$$
Die Exponenzialfunktion einer Matrix lässt sich dann über die [[Die Rodrigues Formel|Formel von Rodrigues]] darstellen. 
Dafür muss die Matrix allerdings normiert werden:
$$
u = \frac{\omega}{\alpha} \qquad \text{wenn } \alpha = \|\omega\|
$$
$$
\implies \Omega = \alpha \cdot U
$$
$$
T(t) = T(0) \cdot e^{\alpha t\Omega}
$$
um nun nur noch 2 Faktoren im Exponenten zu haben und die [[Die Rodrigues Formel|Formel von Rodrigues]] anzuwenden, wird eine weitere Substitution durchgeführt.
$$
\theta = \alpha t
$$
$$
T(t) = T(0) \cdot e^{\theta \cdot \Omega}
$$
$$
\implies e^{\theta U} = I + \sin\theta \, U + (1-\cos\theta) U^2.
$$
$$
\begin{array}{l}
T(t) = (I + \sin(\theta) \cdot U + (1 - \cos(\theta)) \cdot U^2)T(0) \\ \\

T(t) = T(0) + \sin(\theta) \cdot UT(0) + (1-\cos(\theta)) \cdot U^2T(0) \\ \\

T(t) = T(0) + \sin(\theta) \cdot \dfrac{\Omega}{\alpha}T(0)  + (1-\cos(\theta)) \cdot \dfrac{\Omega^2}{\alpha^2}T(0) \\
 \\
\boxed{
T(t) = T(0) + \dfrac{\sin(\alpha \cdot t)}{\alpha} \cdot \Omega \cdot T(0) + \dfrac{1-\cos(\theta)}{\alpha^2} \cdot \Omega^2\cdot T(0)}
\end{array}
$$

