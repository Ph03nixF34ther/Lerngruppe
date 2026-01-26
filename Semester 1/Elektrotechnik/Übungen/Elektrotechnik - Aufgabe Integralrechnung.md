![[Aufgabe_Integralrechnung(1).png]]
![[Aufgabe_Integralrechnung(2).png]]

# Teilaufgabe A)
$$
\Psi = \vec{D} \cdot \vec{A} = D \cdot A \cdot \cos(\alpha)
$$
$$
\Psi = \left( 3 \cdot 10^{-7} \frac{C}{m^2} \right) \cdot (20 \cdot 10^{-4} m^2) \cdot \frac{1}{2} = \underline{\underline{ 3 \cdot 10^{-9} C}}
$$
# Teilaufgabe B)
$$
\Psi = \vec{D} \cdot \vec{A} = D \cdot A \cdot \cos(\alpha)
$$
$$
\Psi = \left( 3 \cdot 10^{-7} \frac{C}{m^2} \right) \cdot (20 \cdot 10^{-4} m^2) \cdot 1 = \underline{\underline{ 6 \cdot 10^{-9} C}}
$$

# Teilaufgabe C)
## Recherche

> Für jedes Vektorfeld ist der Begriff des Flusses definiert. Man denke sich einen Körper mit der Ladung $Q$, der von einer orientierten, geschlossenen Fläche $A$ umgeben ist. Die Fläche kann dabei beliebig geformt sein, es kann eine Kugel sein oder ein beliebig verbeulter Ballon. Die nach der Feldvorstellung von der Ladung ausgehenden Feldlinien fließen nun durch diese Oberfläche, genau wie Wasser durch die Oberfläche flösse, gäbe es innerhalb der Fläche eine Quelle oder eine Senke.
> 
> Der Fluss einer Ladung außerhalb von $A$ fließt auf der einen Seite herein, aber auf der anderen Stelle wieder hinaus. Der Gesamtfluss hängt also nur von der _eingeschlossenen_ Ladung $Q$ ab. Der Kernpunkt des Gesetzes ist, dass der Gesamtfluss tatsächlich gleich $Q$ ist.
> 
> Die Oberfläche $A$ wird in kleine vektorielle Flächenelemente $d\vec{A}$ unterteilt, deren Betrag der Flächeninhalt des Elements ist, und deren Richtung senkrecht auf der Ebene steht (Normalenvektor). Der Fluss durch ein solches Element ist die Komponente des Vektorfeldes in der Richtung des Elementes multipliziert mit seinem Flächeninhalt; genau das wird durch das Skalarprodukt ausgedrückt. Der Gesamtfluss durch $A$ ist dann das Oberflächenintegral dieses Produktes über die gesamte Oberfläche.
> 
>Dabei ist $\Phi$ der Fluss des Vektorfeldes $\vec{E}(\vec{x})$ durch die Oberfläche $A$ des Volumens $V$, das die Ladung $Q$ enthält **(Achtung: Nicht verwechseln mit dem elektrischen Fluss $\Psi$, der sich als Integral aus der elektrischen Flussdichte $\vec{D}$ ergibt)**. Die Elektrische Feldkonstante $\epsilon_{0}$ sorgt für die korrekten Einheiten.
> [ - Wikipedia](https://de.wikipedia.org/wiki/Gau%C3%9Fsches_Gesetz#cite_note-1)

Wikipedia nennt das Gaußsche Gesetz:
$${\displaystyle \Phi =\oint _{A}{\vec {E}}\;\cdot \mathrm {d} {\vec {A}}={\frac {Q}{\varepsilon _{0}}}}$$
- $\vec{E}$ sind Feldstärkevektoren, die von der Punktladung $Q$ aus von innen auf die Oberfläche $A$ treffen.
- $d\vec{A}$ bezeichnet den **Normalenvektor** eines kleinen Flächenausschnitts von $A$.

Das sieht 

## Begründung
In unserem Beispiel ignorieren wir jedoch die innere Ladung $Q$. Das ist gegeben durch die Aufgabenstellung ("wenn sich innerhalb der Oberfläche keine Ladung befindet.")

$\implies$ Dadurch gibt es keine interne Quelle, die Ladung von innen auf die Oberfläche "projeziert", und die einzige Ladung, die auf der Oberfläche erzeugt wird, die die durch das homogene Feld induziert wird-

Die Ladung $Q$ bezeichnet in diesem Kontext weder die Ladung innerhalb des Körpers, noch die Ladung des homogen elektrischen Felds, die wir in Aufgabe a) und b) errechnet haben, sondern die Differenz der Ladung ($Q_{\text{oben}} - Q_{\text{unten}}$) oben auf der Fläche $Q_{\text{oben}}$ und unten $Q_{\text{unten}}$.
$$
Q = Q_{\text{unten}} - Q_{\text{oben}} = \oint_{A_{\text{unten}}} \vec{D} \cdot d\vec{A} - \oint_{A_{\text{oben}}} \vec{D} \cdot d\vec{A}
$$
$\implies$ Da es sich um eine geschlossene Hüllfläche handelt und $\vec{D}$ überall die selbe Richtung hat, ist das Flächenintegral $= 0$ und damit $Q = 0$. 

> **Ein äußeres homogenes Feld erzeugt immer gleich viele ein- wie austretende Feldlinien durch jede geschlossene Oberfläche.**

## Antwort
Das Gaußsche Gesetz besagt, dass der elektrische Fluss eine Hüllfläche $A$ unverändert durchfließt, wenn für $A$ keine innere Ladung $Q_{\text{innen}}$ vorliegt.

---
# Teilaufgabe C)
Es ist folgendes unter den in der Aufgabe spezifizierten Vorraussetzungen zu zeigen:
$$
\oint_{A(r)} \vec{D} \cdot d\vec{A} = D(r) \cdot 4 r^2 \pi \cdot \hat{r}
$$
$$
D \cdot A(r) \cdot \cos(\alpha) = D \cdot 4 r^2 \pi \cdot \hat{r}
$$
Der $\cos(\alpha)$ ist $1$, da die Ladung $Q$ im Mittelpunkt der Sphäre liegt und daher die Normalenvektoren $\vec{A}$ die selbe Richtung besitzen, wie die Feldlinien ($\vec{D}$), die in alle Richtungen vom Mittelpunkt ausgehen.
$$
D \cdot A(r) = D \cdot 4 \cdot r^2 \pi \cdot \hat{r}
$$
Da es sich um eine Kugel handelt, kann man deren Oberfläche in abhängigkeit vom gegebenen Radius errechnen
$$
A = 4 \cdot \pi \cdot r^2
$$
$$
\implies D \cdot 4 \cdot \pi \cdot r^2 = D \cdot 4 \cdot \pi \cdot r^2 \cdot \hat{r}
$$
$q. e. d.$
