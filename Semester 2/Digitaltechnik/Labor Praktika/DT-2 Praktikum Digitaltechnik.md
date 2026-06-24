
## Vorbereitungsaufgaben

1.1
a)
Ein Schaltwerk ist eine digitale Schaltung, deren Ausgangswerte nicht nur von den aktuellen Eingangswerten abhängen, sondern auch von den Vergangenen Einstellungen.

Im Gegensatz zu einem reinen Schaltnetz besitzt ein Schaltwerk ein Gedächtnis. Die wird durch Speicherelemente (meist Flipflops) realisiert.  

b)

$\underline{\text{Synchron Zähler:}}$
Alle Flipflops im Zähler sind parallel an dasselbe, externe Taktsignal angeschlossen und schalten exakt im selben Moment um.

$\underline{\text{Asynchron Zähler:}}$
Nur das erste Flipflop wird direkt vom externen Taktsignal angesteuert. Jedes nachfolgende Flipflop erhält seinen Takt vom Ausgang des jeweils vorherigen Flipflops.

1.2
a)

$$
\begin{array}{ccc|c}
Q^n & R & S  & Q^{n+1} \\
\hline 0 & 0 & 0  & 0 \\
0 & 0 & 1 & 1 \\
0 & 1 & 0 & 0 \\
0 & 1 & 1 & 0 \\
1 & 0 & 0 & 1 \\
1 & 0 & 1 & 1 \\
1 & 1 & 0 & 0 \\
1 & 1 & 1 & 0
\end{array}
$$
$$
Q^{n+1}=\overline{Q}\overline{R}S \lor Q\overline{R}\overline{S} \lor Q\overline{R}S
$$
b)
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
c)
Doppelte Negation der Funktion:
$$
Q^{n+1}_{min}=\overline{\overline{Q\overline{R} \lor \overline{Q}\overline{R}S}}
$$
Anwendung des De Morganschen Gesetzes ($\overline{A\ V\ B\ V\ C}=\overline{A} \land\overline{B}\land\overline{C}$):
$$
Q^{n+1}_{min}=\overline{\overline{(Q\overline{R})} \land \overline{(\overline{Q}\overline{R}S)}}
$$
d)
![[Schaltung10.png|600]]

1.3
a)
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
b)
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
1.4
a)
$$
\begin{array}{c|cccc|cccc}
HEX & Q^n_{3} & Q^n_{2} & Q^n_{1} & Q^n_{0} & Q^{n+1}_{3} & Q^{n+1}_{2} & Q^{n+1}_{1} & Q^{n+1}_{0} \\
\hline 0 & 0 & 0 & 0 & 0 \\
1 & 0 & 0 & 0 & 1 \\
2 & 0 & 0 & 1 & 0 \\
3 & 0 & 0 & 1 & 1 \\
4 & 0 & 1 & 0 & 0 \\
5 & 0 & 1 & 0 & 1 \\
6 & 0 & 1 & 1 & 0 \\
7 & 0 & 1 & 1 & 1 \\
8 & 1 & 0 & 0 & 0 \\
9 & 1 & 0 & 0 & 1 \\
A & 1 & 0 & 1 & 0 \\
B & 1 & 0 & 1 & 1 \\
C & 1 & 1 & 0 & 0 \\
D & 1 & 1 & 0 & 1 \\
E & 1 & 1 & 1 & 0 \\
F & 1 & 1 & 1 & 1
\end{array}
$$
