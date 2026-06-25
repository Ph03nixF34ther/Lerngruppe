# Vorbereitungsaufgaben

## Aufgabe 1

#### Gegeben:
Quellspannung $U_{q}$ = 5V
Wiederstand $R_{1}$ = 1000 Ohm
Ausgangspotential am Punkt A = 2,2V

#### Lösung:
Da die Gesamtspannung $U_q$ die Summe der Teilspannungen ist ($U_q = U_1 + U_2$), können wir die Spannung über $R_1$ direkt berechnen:

$$U_1 = U_q - U_2$$
$$U_1 = 5\,\text{V} - 2{,}2\,\text{V} = 2{,}8\,\text{V}$$
Beim unbelasteten Spannungsteiler verhalten sich die Spannungen proportional zu den Widerständen:
$$\frac{U_2}{U_1} = \frac{R_2}{R_1}$$

Diese Formel stellen wir nach dem gesuchten Widerstand $R_2$ um:
$$R_2 = R_1 \cdot \frac{U_2}{U_1}$$
$$R_2 = 1000\,\Omega \cdot \frac{2{,}2\,\text{V}}{2{,}8\,\text{V}}$$
$$R_2 \approx 785{,}71\,\Omega$$
## Aufgabe 2
**a) p-Kanal Anreicherungstyp** _(Unterbrochene Linie = Anreicherungstyp (normal sperrend); Pfeil zeigt nach außen = p-Kanal)_

**b) n-Kanal Anreicherungstyp** _(Unterbrochene Linie = Anreicherungstyp (normal sperrend); Pfeil zeigt nach innen = n-Kanal)_

**c) p-Kanal Verarmungstyp** _(Durchgehende Linie = Verarmungstyp (normal leitend); Pfeil zeigt nach außen = p-Kanal)_

**d) n-Kanal Verarmungstyp** _(Durchgehende Linie = Verarmungstyp (normal leitend); Pfeil zeigt nach innen = n-Kanal)_

# Aufgabe 3
#### Schwellenspannung $U_{GS(th)}$:
Die Schwellenspannung (oft auch als $U_{th}$ oder $U_T$ bezeichnet) ist die Mindestspannung zwischen Gate und Source, die benötigt wird, um einen MOSFET des Anreicherungstyps einzuschalten.

#### Sättigungsspannung $U_{DS,at}$:
Ab dieser Grenze ($U_{DS} \ge U_{DS,sat}$) sorgt eine weitere Erhöhung von $U_{DS}$ kaum noch für einen höheren Strom. Der Drainstrom $I_D$ bleibt nahezu **konstant** (gesättigt) und wird fast ausschließlich von der Gate-Spannung $U_{GS}$ gesteuert.

# Aufgabe 4

#### Gegeben: (Aus Datenblatt)
Maximale Verlustleistung $P_{tot}=0,2W$ (bei 25°C)
Wiederstand bei Beleuchtung **($1000\,\text{lx}$):** $75\,\dots\,300\,\Omega$

#### Lösung:
Die elektrische Leistung an einem Widerstand ist allgemein definiert als:
$$P = U \cdot I$$
Da uns die Spannung über dem LDR im konkreten Belastungsfall nicht direkt gegeben ist, ersetzen wir $U$ mithilfe des Ohmschen Gesetzes ($U = R \cdot I$):
$$P = (R \cdot I) \cdot I = I^2 \cdot R$$
Da wir den maximalen Strom ($I_{\max}$) suchen, stellen wir die Formel nach $I$ um:
$$I^2 = \frac{P_{\text{tot}}}{R}$$
$$I_{\max} = \sqrt{\frac{P_{\text{tot}}}{R}}$$
Da wir den ungünstigsten Fall betrachten, bei dem der LDR stark beleuchtet wird und sein Widerstand auf den minimalen Datenblattwert von **$R_{\min} = 75\,\Omega$** absinkt.

Setzen wir die Werte in die Formel ein:

$$I_{\max} = \sqrt{\frac{0{,}2\,\text{W}}{75\,\Omega}}$$
$$I_{\max} = \sqrt{0{,}002667\,\text{A}^2} \approx 0{,}05164\,\text{A}$$
# Aufgabe 5

![[PWM.png]]

# Aufgabe 6

#### Gegeben:
Nennleistung der Lampe: $P_{nen}=3W$
Tastverhältnis $\delta = 80\% = 0,8$ (aus vorheriger Aufgabe)

#### Lösung:
$$P_{mittel}= \delta \cdot P_{nen}$$
$$
P_{mittel}=0,8 \cdot 3W = 2,4W
$$
#### Antwort:
Die mittlere Leistung der Lampe beträgt **$2{,}4\,\text{W}$**. Durch die PWM-Ansteuerung leuchtet die Lampe also mit $80\%$ ihrer maximalen Leistung.