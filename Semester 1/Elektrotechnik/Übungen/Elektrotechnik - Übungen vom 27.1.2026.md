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
