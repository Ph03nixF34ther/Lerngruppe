# Aufgabe 1
## Aufgabe 1.1

| $R_{L}$      | $U_{CD}$           | $I_{RL}$          | $R_{i} [\Omega]$ |
| ------------ | ------------------ | ----------------- | ---------------- |
| $100 \Omega$ | $0.788 \text{ V}$  | $94 \text{ mA}$   | $8,383$          |
| $1k\Omega$   | $0.742 \text{ V}$  | $9,5 \text{ mA}$  | $78,105$         |
| $10k\Omega$  | $0,7162 \text{ V}$ | $0,94 \text{ mA}$ | $761,915$        |
| $100\Omega$  | $0,607 \text{ V}$  | $96,5 \text{ mA}$ | $6,290$          |

## Aufgabe 1.2
### Teilaufgabe C)

| Versuchsaufbau 1 ($U_{\text{AB}}$) | Versuchsaufbau 2 ($U_{\text{CD}}$) |
| ---------------------------------- | ---------------------------------- |
| $10,007 \text{ V}$                 | $9,997 \text{ V}$                  |
### Teilaufgabe D)
Der Widerstand des Messgeräts lässt sich errechnen aus dem ge
$$
U_{\text{AC}} = U_{\text{AB}} - U_{\text{CD}} = 0,01 \text{V}
$$
$$
I = \frac{U_{\text{AC}}}{R_{L}} = 1 \mu \text{A}
$$
$$
R_{\text{M\_GDM}} = \frac{{U_{\text{CD}}}}{I} = 9,997 \text{ M}\Omega
$$
## Aufgabe 1.3
### Teilaufgabe B)
$$
U_{CD\_GDM-8245} = 9,690 \text{ V}
$$
### Teilaufgabe C) (Berechnen)
- Um den Widerstand des Multimeters zu ermitteln benötigt man den Strom, der das Messgerät durchfließt, sowie die abfallende Spannung.
- Da beide Spannungsmessgeräte parallel geschaltet sind, fällt an beiden die selbe Spannung ab.
- Der Strom kann als Differenz zwischen dem des Widerstands $R_{L}$ und des Messgeräts GDM-8245 errechnet werden.
$$
I_{L} = \frac{U_{\text{AB}} - U_{\text{CD}}}{R_{L}} = \frac{10 \text{ V} - 9,69 \text{ V}}{10 \cdot 10^3 \Omega} = 31 \mu \text{A}
$$
$$
I_{\text{GDM-8245}} = \frac{U_{\text{CD}}}{R_{\text{M\_GDM}}} = \frac{9,690 \text{ V}}{9,997\text{ M}\Omega} = 0,969\mu\text{A}
$$
$$
I_{\text{Analog. Multimeter}} = I_{L} - I_{\text{GDM-8245}} = 30,031 \mu\Omega
$$
$$
R_{\text{Analog. Multimeter}} = \frac{U_{CD\_GDM-8245}}{I_{\text{Analog. Multimeter}}} = \frac{9,690\text{ V}}{30,031 \mu\Omega} = \underline{\underline{0,3226 M\Omega}}
$$
### Teilaufgabe D)
$$
20.000 \frac{\Omega}{V} \cdot 15 \text{ V} = 300 \text{ k}\Omega
$$
Das Ergebnis deckt sich grob mit den Angaben auf dem analogen Vielfachmessgerät.
# Aufgabe 2
Die Berechnung der maximalen Spannung und maximalen Stromstärke erfolgt folgendermaßen:
$$
P = U \cdot I \hspace{1cm} R = \frac{U}{I}
$$
$$
U = \sqrt{P \cdot R}
$$
$$
I = \frac{P}{\sqrt{ P \cdot R }}
$$

| Widerstand          | Spannung max        | Stromstärke max     |
| ------------------- | ------------------- | ------------------- |
| $R_{1} = 10 \Omega$ | $4,47 \text{ V}$    | $0,447 \text{ A}$   |
| $R_{2}$             | $484,768 \text{ V}$ | $0,00103 \text{ A}$ |

| Widerstand $R_{L}$           | Messschaltung    | $U_{L}$ in V       | $I_{L}$ in mA     | $R_{\text{Soll GDM}}$ in $\Omega$ | $R_{\text{IST}}$ in $\Omega$ | $\frac{R_{\text{IST}} - R_{\text{SOLL}}}{R_{\text{SOLL}}}$ in % |
| ---------------------------- | ---------------- | ------------------ | ----------------- | --------------------------------- | ---------------------------- | --------------------------------------------------------------- |
| $R_{1} = 10\Omega$           | stromrichtig     | $2,764 \text{ V}$  | $150 \text{ mA}$  | $9,83 \Omega$                     | $18,427 \Omega$              | $87,5$ %                                                        |
|                              | spannungsrichtig | $1,51 \text{ V}$   | $150 \text{ mA}$  |                                   | $10,067 \Omega$              | $2,4$ %                                                         |
| $R_{2} = 470 \text{k}\Omega$ | stromrichtig     | $24,053 \text{ V}$ | $0,05 \text{ mA}$ | $471,58 \text{k}\Omega$           | $481 \text{ k}\Omega$        | $2,1$ %                                                         |
|                              | spannungsrichtig | $22,513 \text{ V}$ | $0,05 \text{ mA}$ |                                   | $450 \text{ k}\Omega$        | $-4,5$ %                                                        |
#### Bei geringen Widerständen 
Führt stromrichtiges Messen zu hohen Abweichungen, da das Strommessgerät selbst einen Widerstand hat, der etwa eine ähnliche Dimension hat, wie der zu messende Widerstand und somit die gemessene Spannung stark verfälscht wird.

#### Bei hohen Widerständen
Führt spannungsrichtiges Messen zu hohen Abweichungen, da das Spannungsmessgerät selbst einen hohen Widerstand hat, der etwa eine ähnliche Dimension hat, wie der zu messende Widerstand. Somit teilt sich der gemessene Strom zwischen dem tatsächlichen Strom und dem Strom durch das Spannungsmessgerät signifikant auf.

# Aufgabe 3
## Aufgabe 3.1
Es wird die Annahme getroffen, dass durch das Spannungsmessgerät _**kein**_ Strom fließt.
Der Widerstand wird über die gemessene Spannung und den Strom durch die Reihenschaltung errechnet.
$$
R_{\text{CD}} = \frac{U_{\text{CD}}}{I} = \frac{U_{\text{CD}}}{\frac{U_{q}}{R_{123}}} = U_{\text{CD}} \cdot\frac{ R_{123}}{U_{q}} = \boxed{U_{\text{CD}} \cdot c}
$$
$$
c = \frac{ R_{123}}{U_{q}} = \frac{R_{1} + R_{2} + R_{3}}{U_{q}} = \frac{1,1 \text{ k}\Omega + 1 \text{ k}\Omega + 0,71 \text{ k}\Omega}{10 \text{ V}} = 281 \frac{\Omega}{\text{V}}
$$
$$
\implies R_{\text{CD}} = U_{\text{CD}} \cdot 281 \frac{\Omega}{\text{V}}
$$

| Schleiferstellung           | a         | b         | c        | d         | e         | f         | g         |
| --------------------------- | --------- | --------- | -------- | --------- | --------- | --------- | --------- |
| $U_{\text{CD}}$             | $2,435$   | $2,864$   | $3,47$   | $4,26$    | $4,95$    | $5,72$    | $6,07$    |
| $R_{\text{CD}}$ in $\Omega$ | $684,235$ | $804,784$ | $975,07$ | $1197,06$ | $1390,95$ | $1607,32$ | $1705,67$ |
$\implies$ Man erkennt hier einen Fehler bei $R_{\text{CD}}$ :
- $R_{\text{CD}} = a + R_{3}$ 
- Es fällt auf, dass $R_{3} > R_{\text{CD}}$, 
- Was bedeutet, dass $a < 0$, was bei einem Widerstand nicht passieren darf! 
$\implies$ einen Fehler, welcher vermutlich auf fehlerbehaftete Messung und zurückführen ist!

$\to$ Siehe Aufgabe 3.2 für die Darstellung des Diagramms
## Aufgabe 3.2

| Schleiferstellung | a       | b       | c       | d       | e       | f      | g      |
| ----------------- | ------- | ------- | ------- | ------- | ------- | ------ | ------ |
| $U_{\text{CD}}$   | $2,088$ | $2,401$ | $2,941$ | $3,51$  | $4,08$  | $4,67$ | $5,0$  |
| $U_{\text{CD}}$   | $1,585$ | $1,787$ | $2,120$ | $2,471$ | $2,881$ | $3,32$ | $3,58$ |

![[Darstellung_gemessener_Spannungen_in_Abhaengigkeit_von_der_Einstellung_des_Potentiometers_und_R4.png]]
