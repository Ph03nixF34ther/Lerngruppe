---
tags:
  - Elektronik
  - TODO
---
# Diode

// Abb: Diode

Mit steigender Temperatur erhöht sich der Sperrstrom, da mehr Ladungsträger spontan generiert werden

PN-Übergang wirkt als Ventil 

// Abb. Diode

Der technische Strom fließt zur Spitze des Dreiecks bei Durchlassrichtung
Der technische Strom fließt entgegen der Diodenrichtung bei Sperrstrom

### Durchlassrichtung

// Abb

- Majoritätsträger werden zum Übergang hingetrieben
- An beiden Seiten werden Ladungsträger induziert, die die Raumladungszone aufheben.
- Über das ganze Bauelement kann dann ein Strom fließen

### Lichtsteuerung der Sperrschicht

// Abb: Fotodiode

Sperrschicht nicht lichtdicht verpackt
Gehäuse zumindest in Teilen transparent

- Photonen treffen auf die Raumladungszone
- Photonen regen Elektronen auf höhere Energieniveaus an und lösen sie dadurch aus der Gitterbindung ("==Innere Photoeffekt==")
- Die freien Ladungsträger können nicht direkt rekombinieren, da die Ladungsträger in Richtung der dotierten Halbleiter gezogen werden (e- zu n-Dot.)
- Ladungstrennung bedeutet Potentialunterschied, bedeutet messbare Spannung = Photospannung (Diffusionsspannung entgegengerichtet)

Photospannung erreicht irgendwann einen Maximalwert, wenn die Raumladungszone verschwunden ist.

Keine Trennung der Ladungsträger mehr => kein weiterer Spannungsanstieg (max. 400 mV)
Solarzellen: Reihenschaltung von Dioden

### Fotodiodenbetrieb 

// Abb: Fotodiodenbetrieb

Betrieb in Sperrrichtung
Vorspannung verbreitert die Sperrschicht
Durch stärkeres Feld ist die chance auf Rekombination niedriger

$$
\underbrace{ I_{P} }_{ \text{Photostrom} } \sim \underbrace{ E }_{ \text{Beleuchtungsstärke} }
$$

Kennlinienfeld: mehrere Kennlinien (Jeweils eine pro Beleuchtungsstärke) in einem Daigramm


Kleinsignaldiode
kleine Ströme, kleine Spannungen

Leistungsdiode
große Ströme, große Spannungen

- Pdotierter Bereich: Anode
- Ndotierter Bereich: Kathode

anders als beim ohmschen Widerstand: kein linearer Zusammenhang
Durchlassbereich: 
- Nach Schwell / Schleusenbereich: starker linearer anstieg

mathematisches Modell: Shockley-Gleichung

$$
I_{0} = f(U_{D}) = \underbrace{ I_{S} }_{ \text{Sättigungssperrstrom (}\mu\text{A / nA)} } \cdot (e^{\frac{U_{D}}{U_{T}}} - 1) \qquad \text{Für } U_{D} > 0
$$

- $U_{T}$ Ist die Temperaturspannung (bei Raumtemperatur etwa $\simeq 25\text{ mV}$)
- Diode hat einen NTC (negativen Temperaturkoeffizient)

mit Korrekturfaktor:

$$
I_{0} = f(U_{D}) = I_{S} \cdot (e^{\frac{U_{D}}{n \cdot U_{T}}} - 1) \qquad \text{Für } U_{D} > 0 \qquad n = \text{Idealityfactor} \qquad 1 \leq n \leq 2
$$

$$
U_{T} = \frac{U_{B} \cdot T}{e}
$$

$T$: Temperatur in $K$ (Raumtemperatur $\simeq 300 K$)
$U_{B} = 1,38\cdot 10^{-23} \frac{\text{J}}{\text{K}}$ (Boltzmann-Konstante)
$e = 1,602 \cdot 10^{-11} C$ (Elemtentarladung)

Näherung:
$$
I_{D} = I_{S} \cdot e^{\frac{U_{D}}{n\cdot U_{T}}}
$$
$$
U_{D} = n \cdot U_{T} \cdot \ln\left( \frac{I_{D}}{I_{S}} \right)
$$

Ge-Diode: Sperrstrom im $\mu A$ Bereich, danach Wärme-Durchbruch
Si-Diode: Sperrstrom im $nA$ Bereich, nahezu Konstant, danach Zener-Durchbruch

> [!Info] Zenerdurchbruch
> hauptsächlich stark dotierte Si-Dioden
> Strom steigt immer weiter, da sich das Bauteil immer weiter erwärmt, bis die Diode beschädigt ist 
> Maximaltemperatur: $180°C$

Unterschied Zener-Durchbruch <-> Wärmedurchbruch:
Zenerdurchbruch: zu viel Spannung
Wärme-Durchbruch: zu große Stromstärke
### Bahnwiderstand

Halbleitermaterial hat einen ohm'schen Widerstand,
Anschlussdrähte haben einen ohm'schen Widerstand

// Abb: Diode mit Innenwiderstand in technischer Zeichnung

$$
U_{D} = \underbrace{ n \cdot U_{T} \cdot \ln\left( \frac{I_{D}}{I_{S}} \right) }_{ U_{D}' } + I_{D} \cdot R_{B}
$$

Leistungsdioden: $R_{B} \simeq 0,01 \Omega$
Kleinsignaldioden: $R_{B} \simeq 10 \Omega$

Bei großen Diodenströmen überwiegr der ohmsche Anteil. Darum linearer anstieg

>[!Fakt] Stationärer Betrieb
>Angelegte Spannung bleibt gleich


### Modell: Diode als Spammumgsgesteuerter Schalter

// Abb: Aktiverzweipol

# Halbleiterkanal

Kanal: Halbleiterzone, deren Leitfähigkeit durch Streuspannung zu beeinflussen ist (zB. pn-Übergang)
Sperrschichttyp: JFET (Junction Field Effect Transistor)
Isolierschichttyp: MOSFET (Metal Oxide Field Effect Transistor)

## JFET

// Abb: Komplizierte Grafik

Anschlüsse:
- Source = Elektronen gelangen in das Bauteil
- Drain = Elektronen verlassen das Bauteil
- Gate = Steueranschluss

Spannungen:
- $U_{DS}$: Positiv
- $U_{GS}$: Negativ
- $U_{P}$: Sog "Abschnürspannung" ab dieser Spannung fließt kein Strom mehr durch das Bauteil

Wird das Potenzial $U_{GS}$ negativ:
- Am Gate ist das elektrische Potential negativer als am Source
- Der Gate fungiert als Minuspol, der Source als Pluspol
- negative Ladungsträger werden in den p-dotierten Halbleiterteil induziert
- diese rekombinieren mit den positiven Ladungsträgern
- es baut sich eine große Sperrschicht im Bauteil auf
$\implies$ dadurch kann kein Strom durch das Bauteil fließen

## MOSFET

// Abb: Mosfet

Anschlüsse:
- Source = Elektronen gelangen in das Bauteil
- Drain = Elektronen verlassen das Bauteil
- Gate = Steueranschluss

Spannungen:
- $U_{DS}$: Positiv
- $U_{GS}$: Negativ
- $U_{TH}$: Sog "..." ab dieser Spannung fließt kein Strom mehr durch das Bauteil

Kanalbildung:
- positive Spannungen am Gate $\implies$ Elektronen werden unter Oxidschichten gezogen $\implies$ Inversionsschicht (n-Kanal) $\implies$ durchgängige Verbindung von $S$ nach $D$