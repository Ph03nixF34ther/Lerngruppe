# Gleichstrom
## [[Elektrische(r) Strom(stärke)]] und Elektrische [[Ladung]]
$$
I = \frac{Q}{t}
$$
$$
Q = I \cdot t
$$

| Formelzeichen | Name         | SI-Einheiten      | Name SI-Einheiten |
| ------------- | ------------ | ----------------- | ----------------- |
| $I$           | Stromstärke  | $[A]$             | Ampère            |
| $Q$           | Ladungsmenge | $[C = A \cdot s]$ | Coulomb           |
| $t$           | Zeit         | $[s]$             | Sekunde           |
|               |              |                   |                   |
## [[Elektrische Spannung]]
$$
U = \frac{W}{Q}
$$
$$
U = \frac{W}{I \cdot t}
$$
Genutzte Formelzeichen:

| Formelzeichen | Verlinkung                       |
| ------------- | -------------------------------- |
| $U$           | [[Elektrische Spannung]]         |
| $W$           | [[Arbeit]]                       |
| $I$           | [[Elektrische(r) Strom(stärke)]] |
| $Q$           | [[Ladung]]                       |

## Ohmsches Gesetz
$$
R = \frac{U}{I}
$$
$$
I = \frac{U}{R}
$$
$$
U = I \cdot R
$$

| Formelzeichen | Verlinkung                       |
| ------------- | -------------------------------- |
| $R$           | [[Elektrischer Widerstand]]      |
| $U$           | [[Elektrische Spannung]]         |
| $I$           | [[Elektrische(r) Strom(stärke)]] |
## [[Arbeit]], [[Leistung]]
$$
W = U \cdot I \cdot t
$$
$$
W = P \cdot t
$$
$$
W = U \cdot Q
$$
$$
P = U \cdot I = \frac{W}{t}
$$
$$
P = I^2 \cdot R = \frac{U^2}{R}
$$

| Formelzeichen | Verlinkung                       |
| ------------- | -------------------------------- |
| $U$           | [[Elektrische Spannung]]         |
| $I$           | [[Elektrische(r) Strom(stärke)]] |
| $t$           | [[Zeit]]                         |
| $W$           | [[Arbeit]]                       |
| $P$           | [[Leistung]]                     |
## [[Wirkungsgrad]]
$$
\eta = \frac{P_{ab}}{P_{zu}}
$$
$$
P_{V} = P_{zu} - P_{ab}
$$

$$
\eta_{ges} = \eta_{1} * \eta_{2}
$$
$$
\eta = \frac{P}{P_{ges}} = \frac{R \cdot I^2}{\left( R_{i} + R_{a} \right) \cdot I^2} = \frac{R_{a}}{R_{i} \cdot \left( 1 + \frac{R_{a}}{R_{i}} \right)} = \frac{\left( \frac{R_{a}}{R_{i}} \right)}{1 + \frac{R_{a}}{R_{i}}}
$$

| Formelzeichen | Verlinkung              |
| ------------- | ----------------------- |
| $P_{ab}$      | abgegebene [[Leistung]] |
| $P_{zu}$      | zugrführte [[Leistung]] |
| $P_{V}$       | Verlustleistung         |
| $\eta$        | Wirkungsgrad            |
## [[Elektrische Stromdichte]]
![[Leiterquerschnitt.svg]]
$$
S = \frac{I}{A}
$$

| Formelzeichen | Verlinkung                       |
| ------------- | -------------------------------- |
| $S$           | [[Elektrische Stromdichte]]      |
| $I$           | [[Elektrische(r) Strom(stärke)]] |
| A             | Leiterquerschnitt                |
## [[Elektrischer Widerstand]] und [[Elektrischer Leitwert]]
$$
G = \frac{1}{R}
$$
$$
R = \frac{1}{G}
$$

| Formelzeichen | Verlinkung                  |
| ------------- | --------------------------- |
| $R$           | [[Elektrischer Widerstand]] |
| $G$           | [[Elektrischer Leitwert]]   |
## [[Spezifischer Widerstand]] und [[Spezifischer Leitwert]]
$$
\rho = \frac{1}{\kappa}
$$
$$
\kappa = \frac{1}{\rho}
$$
## [[Leiterwiderstand]]
$$
R = \rho \cdot \frac{l}{A}
$$
$$
R = \frac{l}{\kappa \cdot A}
$$

| Formelzeichen | Verlinkung              |
| ------------- | ----------------------- |
| $R$           | [[Leiterwiderstand]]    |
| $l$           | [[Länge]] des Drahtes   |
| $A$           | Querschnitt des Drahtes |
## Temperaturabhängigkeit von [[Elektrischer Widerstand|Widerständen]]
$$
\Delta R = \alpha \cdot \Delta v \cdot R_{20}
$$
$$
R_{v} = R_{20} + \Delta R
$$
$$
R_{v} = R_{20} \cdot (1 + \alpha_{20} \cdot \Delta v)
$$
$$
\Delta v = \frac{R_{v} - R_{20}}{\alpha_{20} \cdot R_{20}}
$$
$$
A = \frac{\rho \cdot l}{R_{20}} \cdot (1 + \alpha_{20} \cdot \Delta v)
$$

| Formelzeichen | Verlinkung                                                         |
| ------------- | ------------------------------------------------------------------ |
| $\Delta R$    | Änderung des [[Elektrischer Widerstand\|elektrischen Widerstands]] |
| $R_v$         | Warmwiderstand                                                     |
| $R_{20}$      | Kaltwiderstand bei $20°C$                                          |
| $\alpha_{20}$ | [[Temperaturkoeffizient]]                                          |
| $\Delta v$    | [[Temperatur]]differenz                                            |
| $A$           | Querschnittsfläche bei gleichem Widerstand aber anderer Temperatur |
| $l$           | Länge des Drahts                                                   |
## Reihenschaltung von [[Elektrischer Widerstand|Widerständen]]
$$
R_{ers} = R_{1}+ R_{2} + \dots + R_{n}
$$
$$
I = I_{1} = I_{2} = \dots = I_{n}
$$
$$
U = U_{1}+ U_{2} + \dots + U_{n}
$$

| Formelzeichen | Verlinkung                                                 |
| ------------- | ---------------------------------------------------------- |
| $R_{ers}$     | Ersatzwiderstand ([[Elektrischer Widerstand\|Widerstand]]) |
| $I$           | [[Elektrische(r) Strom(stärke)]]                           |
| $U$           | [[Elektrische Spannung]]                                   |
## Paralellschaltungen von [[Elektrischer Widerstand|Widerständen]]
$$
\frac{1}{R_{ers}} = \frac{1}{R_{1}} + \frac{1}{R_{2}} + \dots + \frac{1}{R_{n}}
$$
$$
R_{ers} = \frac{R_{1} \cdot R_{2}}{R_{1} + R_{2}}
$$
$$
I = I_{1} + I_{2} + \dots + I_{n}
$$
$$
U = U_{1} = U_{2} = \dots = U_{n}
$$

| Formelzeichen | Verlinkung                                                 |
| ------------- | ---------------------------------------------------------- |
| $R_{ers}$     | Ersatzwiderstand ([[Elektrischer Widerstand\|Widerstand]]) |
| $I$           | [[Elektrische(r) Strom(stärke)]]                           |
| $U$           | [[Elektrische Spannung]]                                   |
## Knotenregel (1. Kirschhoffsches Gesetz) 
$$
\sum I_{zu} = \sum I_{ab}
$$

| Formelzeichen | Verlinkung                    |
| ------------- | ----------------------------- |
| $\sum I_{zu}$ | Summe der zufließenden Ströme |
| $\sum I_{ab}$ | Summe der abfließenden Ströme |
## Maschenregel (2. Kirschhoffsches Gesetz) 
$$
\sum U_{\text{Erzeuger}} = \sum U_{\text{Verbraucher}}
$$

| Formelzeichen                 | Verlinkung                      |
| ----------------------------- | ------------------------------- |
| $\sum U_{\text{Erzeuger}}$    | Summe der Erzeugerspannungen    |
| $\sum U_{\text{Verbraucher}}$ | Summe der Verbraucherspannungen |
## [[Leistungsanpassung]]
$$
R_{i} = R_{a}
$$
$$
P = U \cdot I = U_{0}^2 \cdot \frac{R_{a}}{(R_{a} + R_{i})^2}
$$

| Formelzeichen | Verlinkung                                                       |
| ------------- | ---------------------------------------------------------------- |
| $R_{i}$       | Innenwiderstand der [[Spannungsquelle]]                          |
| $R_{a}$       | Außenwiderstand                                                  |
| $U_{0}$       | [[Elektrische Spannung]] der modellierten dealen Spannungsquelle |
|               |                                                                  |
## [[Spannungsteiler]]
$$
U_{\text{Teil}} = U_{\text{Ges}} \cdot \frac{R_{\text{Teil}}}{R_{\text{Ges}}}
$$

| Formelzeichen     | Verlinkung       |
| ----------------- | ---------------- |
| $U_{\text{Teil}}$ | Teilspannung     |
| $U_{\text{Ges}}$  | Gesamtspannung   |
| $R_{\text{Teil}}$ | Teilwiderstand   |
| $R_{\text{Ges}}$  | Gesamtwiderstand |


## [[Stromteiler]]
$$
I_{\text{Teil}} = I_{\text{Ges}} \cdot \frac{R_{\text{Ges}}}{R_{\text{Teil}}}
$$

| Formelzeichen     | Verlinkung        |
| ----------------- | ----------------- |
| $I_{\text{Teil}}$ | Teilstromstärke   |
| $I_{\text{Ges}}$  | Gesamtstromstärke |
| $R_{\text{Teil}}$ | Teilwiderstand    |
| $R_{\text{Ges}}$  | Gesamtwiderstand  |
