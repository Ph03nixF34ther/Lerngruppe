# Vorbereitungsaufgaben

## Aufgabe 1

Den Kollektor-Emitterstrom kann man über die Stromverstärkung berechnen:
$$
I_{CE} = I_{B} \cdot B = 15\ \mu A \cdot 128 = 1,92 \ mA
$$
Das ist auch derjenige Strom, der $R_{3}$ durchfließt. Damit kann man die an $R_{3}$ abfallende Spannung errechnen
$$
R = \frac{U}{I} \implies U = R\cdot I = 3,3\ k\Omega \cdot 1,92\ mA = 6,34\ V
$$
Die Spannung $U_{Bat}$ setzt sich aus $U_{Q}$ und $U_{R_{3}}$ zusammen:
$$
U_{Bat} = U_{R_{3}} + U_{Q}
$$
da $U_{Q}$ gesucht ist, lässt sich die Gleichung einfach für $U_{Q}$ lösen:
$$
U_{Q} = U_{Bat} - U_{R_{3}} = 12\ V - 6,34\ V = 5,66\ V
$$

## Aufgabe 2

### Sperrbetrieb (D)

Der Sperrbetrieb läuft, wenn der Basisstrom $0$ ist und damit der Transistor sperrt. Er fließt durch die Ladungsträgerentwicklung in der Sperrzone zwar immer noch ein geringer Strom $I_{C}$, (bei angelegter Spannung), doch ist die größtenteils vernachlässigbar.

### Verstärkerbetrieb (C)

Der Verstärkerbetrieb ist der "Normalbetrieb" des Transistors, in der eine Stromverstärkung nach einem nahezu konstanten Faktor $B$ stattfindet. 

### Übersteuerung (B)

Übersteuerung geschieht, wenn der Basisstrom über einen bestimmten Punkt hinaus erhöht wird, was zu einer schnelleren Schaltzeit führt, aber auch die Ausschaltzeit verlängern kann.
Der relativ konstante Stromverstärkungsfaktor gilt ab hier nicht mehr, da die Arbeitsgerade des Basisstroms hier einen Knick erfährt. 

### Sättigung (A)

Keine weitere Stromverstärkung, Strom begrenzt durch Vorwiderstand.

## Aufgabe 3

Fall: Alle Spannung fällt am Widerstand ab und ein maximaler Strom fließt

$$
I_{C} (U_{CE} = 0\ V) = 60\ mA
$$

Das bedeutet, dass:
$$
- \frac{1}{R_{C}} \cdot 0\ V + \frac{6\ V}{R_{C}} = 60\ mA \implies R_{C} = \frac{6\ V}{60\ mA} = 100\Omega
$$

## Aufgabe 4

Beginnen wir mit dem bekannten gewünschten Kollektorstrom $I_{C}$. Daraus kann nun der hierfür benötigte Basisstrom mittels des Stromverstärkungsfaktors errechnet:
$$
I_{B} = \frac{I_{C}}{B} = \frac{150\ mA}{100} = 1,5\ mA
$$

Da wir den Transistor aber in der Übersteuerung betreiben wollen kommt hier der Übersteuerungsfaktor $ü$ ins Spiel. Wir nehmen einen Übersteuerungsfaktor von $2$ an.
$$
I^{\star}_{B} = I_{B} \cdot ü =3\ mA
$$

Wir wissen auch, dass wir zur Dimensionierung der Schaltung die folgende Gleichung verwenden sollen:
$$
I_{R_{1}} = 11 \cdot I_{B} = 33\ mA
$$
Da wir wissen, dass über die Zenerdiode und über $R_{1}$ insgesamt die Quellspannung $U_{1}$ abfallen soll und die Zenerdiode die abfallende Spannung etwa konstant bei $6,2\ V$ hält, können wie die an $R_{1}$ abfallende Spannung errechnen:
$$
U_{1} = U_{Z_{1}} + U_{R_{1}} \implies U_{R_{1}} = U_{1} - U_{Z_{1}} =8,8\ V
$$
Der benötigte Widerstand zum Einstellen des Strom bei dieser Spannung kann dann mittels des ohmschen Gesetzes berechnet werden.

$$
R = \frac{U}{I} = \frac{8,8\ V}{33\ mA} = 266,67\ \Omega
$$
