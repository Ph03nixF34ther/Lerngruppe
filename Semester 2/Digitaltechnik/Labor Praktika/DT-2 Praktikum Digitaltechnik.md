
# Vorbereitungsaufgaben

## 1.1

### a)

Ein Schaltwerk ist eine digitale Schaltung, deren Ausgangswerte nicht nur von den aktuellen Eingangswerten abhängen, sondern auch von den Vergangenen Einstellungen.

Im Gegensatz zu einem reinen Schaltnetz besitzt ein Schaltwerk ein Gedächtnis. Die wird durch Speicherelemente (meist Flipflops) realisiert.  

### b)

<u>Synchron Zähler: </u>
Alle Flipflops im Zähler sind parallel an dasselbe, externe Taktsignal angeschlossen und schalten exakt im selben Moment um.

<u>Asynchron Zähler: </u>
Nur das erste Flipflop wird direkt vom externen Taktsignal angesteuert. Jedes nachfolgende Flipflop erhält seinen Takt vom Ausgang des jeweils vorherigen Flipflops.

---

## 1.2

### a)

$$
\begin{array}{ccc|c}
Q^n & R & S  & Q^{n+1} \\
\hline 0 & 0 & 0  & 0 \\
0 & 0 & 1 & 1 \\
0 & 1 & 0 & 0 \\
0 & 1 & 1 & x \\
1 & 0 & 0 & 1 \\
1 & 0 & 1 & 1 \\
1 & 1 & 0 & 0 \\
1 & 1 & 1 & x
\end{array}
$$
$$
Q^{n+1}=\overline{Q}\overline{R}S \lor Q\overline{R}\overline{S} \lor Q\overline{R}S
$$

### b)

$$
\begin{array}{c|c}
& Q & Q & \overline{Q} & \overline{Q} \\
\hline R &	 &  &  &  \\
\hline \overline{R} & 1 & 1 &  & 1 \\
\hline &  S & \overline{S} & \overline{S} & S
\end{array}
$$
$$
Q^{n+1}_{min}=Q\overline{R} \lor \overline{Q}\overline{R}S
$$

### c)

Doppelte Negation der Funktion:

$$
Q^{n+1}_{min}=\overline{\overline{Q\overline{R} \lor \overline{Q}\overline{R}S}}
$$

Anwendung des De Morganschen Gesetzes ($\overline{A\ V\ B\ V\ C}=\overline{A} \land\overline{B}\land\overline{C}$):

$$
Q^{n+1}_{min}=\overline{\overline{(Q\overline{R})} \land \overline{(\overline{Q}\overline{R}S)}}
$$

### d)

![[Schaltung10.png|600]]

---

## 1.3

### a)

$$
\begin{array}{ccc|c}
Q^n & J & K  & Q^{n+1} \\
\hline 0 & 0 & 0  & 0 \\
0 & 0 & 1 & 0 \\
0 & 1 & 0 & 1 \\
0 & 1 & 1 & 1 \\
1 & 0 & 0 & 1 \\
1 & 0 & 1 & 0 \\
1 & 1 & 0 & 1 \\
1 & 1 & 1 & 0
\end{array}
$$
$$
Q^{n+1}=\overline{Q^n}J\overline{K} \lor \overline{Q^n}JK \lor Q^n\overline{J}\overline{K} \lor Q^nJ\overline{K}
$$

### b)

$$
\begin{array}{c|c}
& Q & Q & \overline{Q} & \overline{Q} \\
\hline J &	 & 1 & 1 & 1 \\
\hline \overline{J} &  & 1 &  &  \\
\hline &  K & \overline{K} & \overline{K} & K
\end{array}
$$
$$
Q^{n+1}_{min}=Q\overline{K} \lor \overline{Q}J
$$

---

## 1.4

### a)

$$
\begin{array}{c|cccc|cccc}
HEX & Q^n_{3} & Q^n_{2} & Q^n_{1} & Q^n_{0} & Q^{n+1}_{3} & Q^{n+1}_{2} & Q^{n+1}_{1} & Q^{n+1}_{0} \\
\hline 0 & 0 & 0 & 0 & 0 & 0 & 0 & 0 & 1 \\
1 & 0 & 0 & 0 & 1 & 0 & 0 & 1 & 0 \\
2 & 0 & 0 & 1 & 0 & 0 & 0 & 1 & 1 \\
3 & 0 & 0 & 1 & 1 & 0 & 1 & 0 & 0 \\
4 & 0 & 1 & 0 & 0 & 0 & 1 & 0 & 1 \\
5 & 0 & 1 & 0 & 1 & 0 & 1 & 1 & 0 \\
6 & 0 & 1 & 1 & 0 & 0 & 1 & 1 & 1 \\
7 & 0 & 1 & 1 & 1 & 1 & 0 & 0 & 0 \\
8 & 1 & 0 & 0 & 0 & 1 & 0 & 0 & 1 \\
9 & 1 & 0 & 0 & 1 & 1 & 0 & 1 & 0 \\
A & 1 & 0 & 1 & 0 & 1 & 0 & 1 & 1 \\
B & 1 & 0 & 1 & 1 & 1 & 1 & 0 & 0 \\
C & 1 & 1 & 0 & 0 & 1 & 1 & 0 & 1 \\
D & 1 & 1 & 0 & 1 & 1 & 1 & 1 & 0 \\
E & 1 & 1 & 1 & 0 & 1 & 1 & 1 & 1 \\
F & 1 & 1 & 1 & 1 & 0 & 0 & 0 & 0
\end{array}
$$

### b)

$Q^{n+1}_{0}$ wechselt bei jedem Taktimpuls seinen Zustand.

$$J_{0}=1;\ \ \ \ K_{0}=1$$

$Q^{n+1}_{1}$ wechselt den Zustand immer dann, wenn $Q^{n}_{0} = 1$ ist.

$$J_{1}=Q^{n}_{0};\ \ \ \ K_{1}=Q^{n}_{0}$$

$Q^{n+1}_{2}$ wechselt den Zustand immer dann, wenn $Q^{n}_{0}$ und $Q^{n}_{1} = 1$ ist.

$$J_{2}=Q^{n}_{1} \land Q^{n}_{0};\ \ \ \ K_{2}=Q^{n}_{1} \land Q^{n}_{0}$$

$Q^{n+1}_{3}$ wechselt dementsprechend, wenn alle vorherigen eins sind. ($Q^{n}_{0-3}$)

$$J_{3}=Q^{n}_{2} \land Q^{n}_{1} \land Q^{n}_{0};\ \ \ \ K_{3}=Q^{n}_{2} \land Q^{n}_{1} \land Q^{n}_{0}$$

### c)

![[Zähler.drawio.svg|400]]

---

## 1.5

### a)

**Serielle Bussysteme:** Schieberegister sind das Herzstück von Protokollen wie SPI (Serial Peripheral Interface), I²C oder UART. Sie wandeln die internen parallelen Daten des Prozessors für die Leitung in einen seriellen Datenstrom um und umgekehrt.

### b)

![[Unbenanntes Diagramm.drawio.svg]]

### c)

![[Schieberegister.drawio.svg|400]]

---

## 1.6

### a)

$$
\begin{array}{c|cc|cc}
\text{Takt} & Q^n_{1} & Q^n_{0} & Q^{n+1}_{1} & Q^{n+1}_{0} \\
\hline 1 & 0 & 0 & 0 & 1 \\
2 & 0 & 1 & 1 & 0 \\
3 & 1 & 0 & 1 & 1 \\
4 & 1 & 1 & 0 & 0
\end{array}
$$

### b)

#### Herleitung für $Q_0^{n+1}$

$$Q_0^{n+1} = \overline{Q_1^n} \land \overline{Q_0^n} \lor Q_1^n \land \overline{Q_0^n}$$

Da in beiden Termen $\overline{Q_0^n}$ vorkommt, können wir diesen Teil ausklammern:

$$
Q_0^{n+1} = \overline{Q_0^n} \land (\overline{Q_1^n} \lor Q_1^n)
$$

Da $(\overline{Q_1^n} \lor Q_1^n)$ immer wahr (`1`) ist, fällt dieser Teil weg. Es bleibt die minimierte 
Gleichung:

$$
Q_0^{n+1} = \overline{Q_0^n}
$$

#### Herleitung für $Q_1^{n+1}$

$$
Q_1^{n+1} = \overline{Q_1^n} \cdot Q_0^n \lor Q_1^n \cdot \overline{Q_0^n}
$$

Dies lässt sich durch Schaltalgebra nicht weiter zusammenfassen. Man kann sie lediglich noch kürzer als XOR-Verknüpfung $Q_1^n \oplus Q_0^n$ schreiben.

#### Lösung:

Eingang für das erste Flipflop ($D_{0}$):

$$
D_{0}=\overline{Q_0^n}
$$

Eingang für das erste Flipflop ($D_{1}$):

$$
D_1 = \overline{Q_1^n} \cdot Q_0^n \lor Q_1^n \cdot \overline{Q_0^n}
$$

oder:

$$
D_{1}=Q_1^n \oplus Q_0^n
$$

### c)

![[Frequenzteiler.drawio.svg]]
![[Frequenzteiler 4-1.png|600]]

# Versuchsdurchführung

---

## 2.2

### a)

$$\begin{array}{l}
Q^{n+1} = R ( S \lor Q ) = \overline{\overline{\overline{R} ( \overline{S \lor Q} )}} = \overline{R \lor ( S \lor Q )}
\end{array}$$

![[RS-Nor.drawio.svg|400]]

---

## 2.4

$$n=10$$

### a)

$$
\begin{array}{c|cccc|cccc}
HEX & Q^n_{3} & Q^n_{2} & Q^n_{1} & Q^n_{0} & Q^{n+1}_{3} & Q^{n+1}_{2} & Q^{n+1}_{1} & Q^{n+1}_{0} \\
\hline 0 & 0 & 0 & 0 & 0 & 0 & 0 & 0 & 1 \\
1 & 0 & 0 & 0 & 1 & 0 & 0 & 1 & 0 \\
2 & 0 & 0 & 1 & 0 & 0 & 0 & 1 & 1 \\
3 & 0 & 0 & 1 & 1 & 0 & 1 & 0 & 0 \\
4 & 0 & 1 & 0 & 0 & 0 & 1 & 0 & 1 \\
5 & 0 & 1 & 0 & 1 & 0 & 1 & 1 & 0 \\
6 & 0 & 1 & 1 & 0 & 0 & 1 & 1 & 1 \\
7 & 0 & 1 & 1 & 1 & 1 & 0 & 0 & 0 \\
8 & 1 & 0 & 0 & 0 & 1 & 0 & 0 & 1 \\
9 & 1 & 0 & 0 & 1 & 1 & 0 & 1 & 0 \\
A & 1 & 0 & 1 & 0 & 0 & 0 & 0 & 0 \\
B & 1 & 0 & 1 & 1 & * & * & * & * \\
C & 1 & 1 & 0 & 0 & * & * & * & * \\
D & 1 & 1 & 0 & 1 & * & * & * & * \\
E & 1 & 1 & 1 & 0 & * & * & * & * \\
F & 1 & 1 & 1 & 1 & * & * & * & * 
\end{array}
$$

### b)

$$
Q_i^{n + 1} = J_i \overline{Q_i^n} \lor \overline{K_i} Q_i^n
$$

$$\begin{array}{r}
Q^{n+1}_{3} = 
\begin{array}{c|c}
& Q^n_{3} & Q^n_{3} & \overline{Q^n_{3}} & \overline{Q^n_{3}} & \\
\hline
Q^n_{2}
& * & * &  & 1 & Q^n_{1} \\
\hline
Q^n_{2}
& * & * &  &  & \overline{Q^n_{1}} \\
\hline
\overline{Q^n_{2}}
& 1 & 1 &  &  & \overline{Q^n_{1}} \\
\hline
\overline{Q^n_{2}}
& * &  &  &  & Q^n_{1} \\
\hline
& Q^n_{0} & \overline{Q^n_{0}} & \overline{Q^n_{0}} & Q^n_{0}
\end{array}
= Q^n_{3} \overline{Q^n_{1}} \lor \overline{Q^n_{3}} Q^n_{2} Q^n_{1} Q^n_{0} \\
\begin{array}{l}
K_{3} = Q^n_{1} \\
J_3 = Q^n_{2} Q^n_{1} Q^n_{0}
\end{array}
\end{array}$$

$$\begin{array}{r}
Q^{n+1}_{2} = 
\begin{array}{c|c}
& Q^n_{3} & Q^n_{3} & \overline{Q^n_{3}} & \overline{Q^n_{3}} & \\
\hline
Q^n_{2}
& * & * & 1 &  & Q^n_{1} \\
\hline
Q^n_{2}
& * & * & 1 & 1 & \overline{Q^n_{1}} \\
\hline
\overline{Q^n_{2}}
&  &  &  &  & \overline{Q^n_{1}} \\
\hline
\overline{Q^n_{2}}
& * &  &  & 1 & Q^n_{1} \\
\hline
& Q^n_{0} & \overline{Q^n_{0}} & \overline{Q^n_{0}} & Q^n_{0}
\end{array} &
\begin{array}{l}
= Q^n_{2} \overline{Q^n_{0}} \lor Q^n_{2} \overline{Q^n_{1}} \lor \overline{Q^n_{2}} Q^n_{1} Q^n_{0} \\
= Q^n_{2} ( \overline{Q^n_{0}} \lor \overline{Q^n_{1}} ) \lor \overline{Q^n_{2}} Q^n_{1} Q^n_{0}
\end{array} \\
&\begin{array}{l}
K_2 = Q^n_{1} Q^n_{0} \\
J_2 = Q^n_{1} Q^n_{0}
\end{array}
\end{array}$$

$$\begin{array}{r}
Q^{n+1}_{1} = 
\begin{array}{c|c}
& Q^n_{3} & Q^n_{3} & \overline{Q^n_{3}} & \overline{Q^n_{3}} & \\
\hline
Q^n_{2}
& * & * & 1 &  & Q^n_{1} \\
\hline
Q^n_{2}
& * & * &  & 1 & \overline{Q^n_{1}} \\
\hline
\overline{Q^n_{2}}
& 1 &  &  & 1 & \overline{Q^n_{1}} \\
\hline
\overline{Q^n_{2}}
& * &  & 1 &  & Q^n_{1} \\
\hline
& Q^n_{0} & \overline{Q^n_{0}} & \overline{Q^n_{0}} & Q^n_{0}
\end{array} &
\begin{array}{l}
= \overline{Q^n_{1}} Q^n_{0} \lor \overline{Q^n_{3}} Q^n_{1} \overline{Q^n_{0}}
\end{array} \\
&\begin{array}{l}
K_1 = Q^n_{3} \lor Q^n_{0} \\
J_1 = Q^n_{0}
\end{array}
\end{array}$$

$$\begin{array}{r}
Q^{n+1}_{0} = 
\begin{array}{c|c}
& Q^n_{3} & Q^n_{3} & \overline{Q^n_{3}} & \overline{Q^n_{3}} & \\
\hline
Q^n_{2}
& * & * & 1 &  & Q^n_{1} \\
\hline
Q^n_{2}
& * & * & 1 &  & \overline{Q^n_{1}} \\
\hline
\overline{Q^n_{2}}
&  & 1 & 1 &  & \overline{Q^n_{1}} \\
\hline
\overline{Q^n_{2}}
& * &  & 1 &  & Q^n_{1} \\
\hline
& Q^n_{0} & \overline{Q^n_{0}} & \overline{Q^n_{0}} & Q^n_{0}
\end{array} &
\begin{array}{l}
= \overline{Q^n_{3}} \overline{Q^n_{0}} \lor \overline{Q^n_{1}} \overline{Q^n_{0}} \\
= \overline{Q^n_{0}} ( \overline{Q^n_{3}}  \lor \overline{Q^n_{1}} )
\end{array} \\
&\begin{array}{l}
K_0 = 1 \\
J_0 = \overline{Q^n_{3}}  \lor \overline{Q^n_{1}}
\end{array}
\end{array}$$

---

## 2.5

### a)

Um $N$ Zustände darzustellen, benötigt man n Flipflops, wobei gilt:

$$
2^n \ge N
$$

Für einen 5:1 Teiler ($N=5$):

$$
2^2=4 \ \ \ (\text{zu wenig})
$$
$$
2^3=8\ \ \ (\text{reicht aus})
$$

Es werden also mindestens 3 Flipflops benötigt.

### b)

$$
\begin{array}{c|ccc|cc}
\text{Takt} & Q^n_{2} & Q^n_{1} & Q^n_{0} & Q^{n+1}_{2} & Q^{n+1}_{1} & Q^{n+1}_{0} \\
\hline 1 & 0 & 0 & 0 & 0 & 0 & 1 \\
2 & 0 & 0 & 1 & 0 & 1 & 0 \\
3 & 0 & 1 & 0 & 0 & 1 & 1 \\
4 & 0 & 1 & 1 & 1 & 0 & 0 \\
5 & 1 & 0 & 0 & 0 & 0 & 0 \\
\vdots
\end{array}
$$

(Hinweis: Die Zustände 6, 7 und 8 treten im Normalbetrieb nicht auf und werden somit in dieser Darstellung weggelassen)

### c)

Für $Q_{2}^{n+1}$:
- Einsen bei Takt 4: (011)
- kein Interesse bei 6, 7 und 8

$$
=Q^n_{1} \land Q^n_{0}
$$

Für $Q_{1}^{n+1}$:
- Einsen bei Takt 2: (001) und Takt 3: (010)
- kein Interesse bei 6, 7 und 8

$$
= Q^n_1 \land \overline{Q^n_0} \lor \overline{Q^n_2} \land \overline{Q^n_1} \land Q^n_0
$$

Alternativ unter Verwendung von XOR:

$$
= \overline{Q^n_2} \land (Q^n_1 \oplus Q^n_0)
$$

Für $Q_{0}^{n+1}$:
- Einsen bei Takt 1: (000) und Takt 3: (010)
- kein Interesse bei 6, 7 und 8

$$
=\overline{Q^n_2} \land \overline{Q^n_0}
$$

![[5 zu 1 Frequenzteiler.drawio.svg]]

### d)

![[Frequenzteiler_5_zu_1.svg 1.png]]