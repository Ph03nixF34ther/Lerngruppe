# Aufgabenset 1
## Aufgabe 1
$$
E = \frac{1}{2} \cdot C \cdot U^2
$$
$$
E = \frac{1}{2} \cdot 10 \cdot 10^{-6} \text{ F} \cdot (12 \text{V})^2 = 7,2 \cdot 10^{-4} \text{ Nm} = 0,72 \text{ mJ}
$$
## Aufgabe 2
$$
E = \frac{1}{2} \cdot C \cdot (U \cdot 2)^2
$$
$$
E = \boxed{4 \cdot} \frac{1}{2} \cdot C \cdot (U)^2
$$
# Aufgabenset 2
## Aufgabe 1
### Berechnung über die Ladung 
$$
Q = C \cdot U \hspace{1cm} D = \frac{Q}{A}
$$
Es handelt sich (gedacht) um eine Reihenschaltung von Plattenkondensatoren.
Diese wird berechnet durch
$$
\frac{1}{C} = \frac{1}{C_{1}} + \frac{1}{C_{2}}
$$
und 
$$
C = A \cdot \epsilon_{0} \cdot \frac{\epsilon}{d}
$$
Das bedeutet, wir können die Kapazität $C$ berechnen
$$
C = \frac{C_{1} \cdot C_{2}}{C_{1} + C_{2}} = 

A \cdot \epsilon_{0} \cdot 
\frac{\frac{\epsilon_{1}}{d_{1}} \cdot \frac{\epsilon_{2}}{d_{2}}}{\frac{\epsilon_{1}}{d_{1}} + \frac{\epsilon_{2}}{d_{2}}} = 

\boxed{
A \cdot \epsilon_{0} \cdot 
\frac{\epsilon_{1} \cdot \epsilon_{2}}{\epsilon_{1} \cdot d_{2} + \epsilon_{2} \cdot d_{1}} } 
$$
$$
C = 8,854 \cdot 10^{-12} \frac{\text{As}}{\text{Vm}} \cdot 0,015\text{m}^2 \cdot \left( \frac{2 \cdot 6}{2 \cdot 0,001 \text{m} + 6 \cdot 0,001 \text{m}} \right) = 1,992 \cdot 10^{-10} \text{ F}
$$
$$
Q = C \cdot U = 1,992 \cdot 10^{-10} \text{ F} \cdot 120 \text{ V} = 23,904 \cdot 10^{-9} \text{ C}
$$
$$
D = \frac{Q}{A} = \frac{23,904 \cdot 10^{-9} \text{ C}}{0,015 \text{ m}^2} = \underline{\underline{1,5936 \cdot 10^{-6} \frac{\text{C}}{\text{m}^2}}} 
$$
## Aufgabe 2
$$
E = \frac{U}{d}
$$
### Errechnung von $E_{1}$
$$
E_{1} = \frac{120\text{ V}}{0,001\text{ m}} = 120 \text{ k} \frac{\text{V}}{\text{m}}
$$
### Errechnung von $E_{2}$
$$
E_{2} = \frac{120\text{ V}}{0,001\text{ m}} = 120 \text{ k} \frac{\text{V}}{\text{m}}
$$
## Aufgabe 3
$$
w = \frac{1}{2} \cdot \vec{E} \cdot \vec{D}
$$
- $\vec{E}$ kennen wir bereits aus Aufgabe 2. 
- $\vec{D}$ ist gleich über beide die Dielektrika hinweg
- Es gilt auch, dass $\vec{D} || \vec{E}$.
$$
w_{1} = \frac{1}{2} \cdot 120 \text{ k} \frac{\text{V}}{\text{m}} \cdot 1,5936 \cdot 10^{-6} \frac{\text{C}}{\text{m}^2} = 0,096 \frac{\text{J}}{\text{m}^3}
$$
$$
w_{2} = \frac{1}{2} \cdot 120 \text{ k} \frac{\text{V}}{\text{m}} \cdot 1,5936 \cdot 10^{-6} \frac{\text{C}}{\text{m}^2} = 0,096 \frac{\text{J}}{\text{m}^3}
$$
## Aufgabe 4
$$
w_{1} = w_{2}
$$
# Aufgabenset 3
## Aufgabe 1
$$
F = \frac{1}{4\pi\epsilon_{0}} \cdot \frac{|q_{1} \cdot q_{2}|}{r^2}
$$
- Der Radius $r$ ist der Abstand zwischen $q_{1}$ und $q_{2}$ 
$$
F = \frac{1}{4\pi \cdot 8,854 \cdot 10^{-12} \frac{As}{Vm}} \cdot \frac{|-2 \text{ nC} \cdot 4 \text{ nC}|}{(6 \text{ m})^2} = 19,97 \frac{\mu \text{N}}{m}
$$
## Aufgabe 2
$E_{q_{1}, q_{2}}$ hat die Richtung, die positiven Ladungsträger nehmen würden.
$F$ und $-E$ sind gleichgerichtet, wenn $\Delta Q$ negativ ist. Das ist der Fall. 
Darum ist die Kraft $\vec{F}_{q_{2}}$ von $q_{2}$ nach $q_{1}$ gerichtet

## Aufgabe 3
$$
F = \frac{1}{4\pi\epsilon_{0}} \cdot \frac{|q_{1} \cdot q_{2}|}{r^2}
$$
- Der Radius $r$ ist der Abstand zwischen $q_{1}$ und $q_{2}$ 
$$
F = \frac{1}{4\pi \cdot 8,854 \cdot 10^{-12} \frac{As}{Vm}} \cdot \frac{|-2 \text{ nC} \cdot 4 \text{ nC}|}{(6 \text{ m})^2} = 19,97 \frac{\mu \text{N}}{m}
$$
## Aufgabe 4
- $\vec{E}$ ist von $q_{1}$ nach $q_{2}$ gerichtet
- $\vec{E} = \frac{\vec{F}}{Q}$
- $Q_{12} = q_{2} - q_{1} = -6\text{nC}$
- $Q_{21} = q_{1} - q_{2} = 6\text{nC}$
$$
\implies \vec{F_{12}} = \vec{E} \cdot Q_{12} = \vec{E}\cdot -6\text{ nC} 
$$
$\implies\vec{F_{12}}$ ist antiparallel zu $\vec{E}$

$$
\implies \vec{F_{21}} = \vec{E} \cdot Q_{21} = \vec{E}\cdot 6\text{ nC} 
$$
$\implies\vec{F_{21}}$ ist parallel zu $\vec{E}$

Laut actio = reactio
$$
\vec{F}_{12} = -\vec{F}_{21}
$$
$$
\vec{E}\cdot -6\text{ nC} = -(\vec{E}\cdot 6\text{ nC})
$$
$q.e.d.$

# Aufgabenset 4

## Aufgabe 1

$$\begin{array}{l|l}
\vec{E} = \dfrac{U}{d} \\
= \dfrac{10 \text{ V}}{5 \text{ mm}} = \dfrac{10 \text{ V}}{5 \text{ m} \cdot 10^{-3}} \\
\underline{= 2.000 \frac{\text{V}}{\text{m}}}
\end{array}$$

## Aufgabe 2

$$\begin{array}{l|l}
J = E \cdot \sigma \\
= 2.000 \frac{\text{V}}{\text{m}} \cdot 2 \frac{\text{S}} {\text{m}} = 2.000 \frac{\text{V}}{\text{m}} \cdot 2 \frac{\frac{\text{A}}{\text{V}}}{\text{m}} \\
\underline{= 4.000 \frac{\text{A}}{\text{m}^2}}
\end{array}$$

## Aufgabe 3

$$\begin{array}{l|l}
I = J \cdot A  \\
= 4.000 \frac{\text{A}}{\text{m}^2} \cdot 20 \text{ m}^2 \\
\underline{= 8 \text{ A}} \\
\end{array}$$

## Aufgabe 4

$$\begin{array}{l|l}
p = U \cdot I \\
p_v = \dfrac{U \cdot I}{V} = \dfrac{J \cdot A \cdot E \cdot d}{V} = \dfrac{J \cdot E \cdot V}{V} = J \cdot E = E^2 \cdot \sigma = \dfrac{J^2}{\sigma} \\
= 4.000 \frac{\text{A}}{\text{m}^2} \cdot 2.000 \frac{\text{V}}{\text{m}} \\
\underline{= 8 \frac{\text{MW}}{\text{m}^3}}
\end{array}$$

## Aufgabe 5

### Teil $I$

$$\begin{array}{l|l}
P = U \cdot I \\
= 10 \text{ V} \cdot 8 \text{ A} \\
\underline{= 80 \text{ W}}
\end{array}$$

### Teil $II$

$$\begin{array}{l|l}
P = \int_{V} p_v \cdot dV \\
= p_v \int_{V} dV = p_v \cdot A \cdot L \\
= 8 \frac{\text{MW}}{\text{m}^3} \cdot 0,002 \text{ m}^2 \cdot 0,005 \text{ m} \\
\underline{= 80 \text{ W}}
\end{array}$$

# Aufgabenset 5

## Aufgabe 1

$$\begin{array}{l|l}
\Theta = N \cdot I \\
= 500 \cdot 0,8 \text{ A} \\
\underline{= 40 \text{ A}}
\end{array}$$

## Aufgabe 2

$$\begin{array}{l|l}
H = \dfrac{\Theta}{l_m} = \dfrac{\Theta}{2 \pi \cdot r_m} \\
= \dfrac{40 \text{ A}}{2 \pi \cdot 6 \text{ m} \cdot 10^{-2}} \\
\underline{= 1.061,03 \frac{\text{A}}{\text{m}}}
\end{array}$$

# Aufgabenset 6

## Aufgabe 1

$$\begin{array}{l|l}
A = a \cdot b \\
= 8 \text{ cm} \cdot 5 \text{ cm} = 8 \text{ m} \cdot 10^{-2} \cdot 5 \text{ m} \cdot 10^{-2} \\
\underline{= 4 \text{ m}^2 \cdot 10^{-3}}
\end{array}$$

## Aufgabe 2

$$\begin{array}{l|l}
\Phi = \int_A B \cdot dA = B \cdot \int_A dA = A \cdot B \\
= 0,25 \text{ T} \cdot 4 \text{ m}^2 \cdot 10^{-3} \\
\underline{= 1 \text{ mWb}}
\end{array}$$

## Aufgabe 3

$$\begin{array}{l|l}
\Phi = \int_A \vec{B} \cdot d\vec{A} \\
= \int_A B \cdot \cos(\alpha) \cdot dA = B \cdot \cos(\alpha) \cdot \int_A dA = A \cdot B \cdot \cos(\alpha) \\
= 4 \text{ m}^2 \cdot 10^{-3} \cdot 0,25 \text{ T} \cdot \frac{1}{2} \\
\underline{= 0,5 \text{ mWb}}
\end{array}$$

# Aufgabenset 7

## Aufgabe 1

$$\begin{array}{l|l}
\Phi = \int_A \vec{B} \cdot dA \\
\underline{= \int_0^{2\pi}\int_0^r \vec{B}(r) \cdot dr \cdot d\varphi} & B(r) = B_0 \cdot (1 - \dfrac{r}{R})
\end{array}$$

## Aufgabe 2

![[KegelDarstellung.jpeg]]

$$\begin{array}{l|l}
\Phi = B \cdot A  \\
= \int_A B(r) \cdot dA & B(r) = B_0 \cdot (1 - \dfrac{r}{R}) \\
= \int_0^R B(r) \cdot l(r) \cdot dr &
l(r) =  2 \pi \cdot r 
\end{array}$$

## Aufgabe 3

$$\begin{array}{ll}
= \int_0^R (B_0 \cdot (1 - \dfrac{r}{R}) \cdot 2 \pi \cdot r) \cdot dr \\ 
= B_0 \cdot 2 \pi \cdot \left[ -\dfrac{1}{3} \cdot \dfrac{r^3}{R} + \dfrac{1}{2} \cdot r^2 \right]_0^R \\
= B_0 \cdot 2 \pi \cdot ((-\dfrac{1}{3} \cdot \dfrac{R^3}{R} + \dfrac{1}{2} \cdot R^2) - (-\dfrac{1}{3} \cdot \dfrac{0^3}{R} + \dfrac{1}{2} \cdot 0^2)) \\
= B_0 \cdot 2 \pi \cdot (-\dfrac{1}{3} \cdot R^2 + \dfrac{1}{2} \cdot R^2) \\
= B_0 \cdot 2 \pi \cdot \dfrac{1}{6} \cdot R^2 = B_0 \cdot \pi \cdot \dfrac{1}{3} \cdot R^2 \\
= 0,3 \text{ T} \cdot \pi \cdot \dfrac{1}{3} \cdot 4 \text{ m} \cdot 10^{-2} \\
\underline{= 0,502 \text{ mWb}}
\end{array}$$

## Aufgabe 4

$$\begin{array}{ll}
B_{\text{mittel}} = \dfrac{\Phi}{A} \\
=\dfrac{0,502 \text{ mWb}}{\pi \cdot (4 \text{ m} \cdot 10^{-2})^2} \\
\underline{= 0,1 \frac{\text{Wb}}{\text{m}^2}}
\end{array}$$

# Aufgabenset 8

## Aufgabe 1

$$\begin{array}{ll}
H = \dfrac{B_l}{\mu_0} \\
= \dfrac{0,8 \text{ T}}{4 \pi \cdot10^{-7} \frac{V \cdot m}{A \cdot s}} \\ 
\underline{= 630.619,77 \text{ Wb} = 0,63 \text{ MWb}}
\end{array}$$

## Aufgabe 2

$$\begin{array}{ll}
V_m = \int_l \vec{H} \cdot dl \\
 = H \cdot l \\
 = 0,63 \text{ MWb} \cdot 4 \text{ m} \cdot 10^-3 \\
 \underline{= 2.546,5 \text{ A} = 2,5 \text{ kA}}
\end{array}$$

## Aufgabe 3

$$\begin{array}{ll}
\Theta = N \cdot I \\
I = \dfrac{\Theta}{N} \\
= \dfrac{l \cdot H}{N} \\
= 4 \text{ m} \cdot 10^{-3} \cdot 0,63 \frac{\text{MA}}{\text{m}} \\
\underline{= 1,26 \text{ A}}
\end{array}$$