---
tags:
  - Elektronik
  - TODO
---

# Elektrotechniker vs. Informatiker

Elektrotechniker:
- Bandbreite in Hz
- Die Bandbreite ergibt sich aus den physikalischen Eigenschaften des Übertragungsmediums

Informatiker:
...

>[!Question] Kernfrage des Abtasttheorems
>Wie muss ich eine Datenrate abtasten, um  ein Digitales Signal wieder erkennen zu können?


Geschichte:
1915: E.T. Whittaker arbeitet zur Interpolation
1920: Ogura kegt Abtasttheorem dar (ohne Beweis)
1924/1928: Nyquist/Küpfmüller: perfekter Kanal hat begrenzte Übertragungskapazität
1933: Kotelnokov legt einen intuitiven (nicht strengen ) Beweis vor
1939: Raabe: Abtastfrequenz muss größer gleich der doppelten Grenzgrequenz sein

> [!Info] Tiefpasssignale ($B = f_{g}$)
> $\text{Maximale Datenrate} = 2 \cdot f_{g} \cdot \log_{2} V  \frac{\text{Bit}}{\text{s}}$

>[!Info] Bandpasssignale ($B = f_{o} - f_{u}$)
>$\text{Maximale Datenrate} = 2\cdot B \cdot \log_{2} V \frac{\text{Bit}}{\text{s}}$

Wenn Störungen dazu kommen sinkt sie erzielbare Datenrate
- Kanäle sind selten Rauschfrei
- Modell ist weißes Rauschen
- Anteil des Rauschens wird über Signal-/Störleistungsverhältnis angegeben ($\frac{S}{N}$)
- $\frac{S}{N}$ in der Regel in Dezibel (dB) als logarithmisches Verhältnis angegeben

$$
\text{Maximale Datenrate} = B \cdot \log_{2} \left( 1 + \frac{S}{N} \right) \frac{\text{bit}}{\text{s}}
$$
$$
\begin{array}{rl}
V & \text{Anzahl der Stufen, for Bit = 2} \\
B & \text{physikalische Bandbreite}
\end{array}
$$

>[!Info] Was ist ein bit und was ist ein Bit
>Das bit ist "a little bit of Information"
>Das Bit ist ein Zahlenwert, der $0$ oder $1$ ist (**B**inary Dig**it**)


- Es handelt sich bei einem Bit um eine Maßeinhet, so wie Meter oder Kilogram
- Allerdings gibt es keinen Bezug zum mks-System
- Information: Information ist eine Nachricht, die neu ist, und relevant

## Zusammenhang Kanalkapazität und Datenrate

- Die Datenrate bezieht sich auf den Rauschfreien Kanal. Dort 

....

## Digitale Modulation

- Kanale übertragen analoge Signale (Spannung, Strom, Lichtintensität)
- Digitale Modulation konvertiert Bots in analoge Singale
- Basisbandbreitenübertragung: Frequenzen von Null bos Grenzfrequenz, Abhängig von der Datenrate
- Bandpassübertragung: M
....

## Basisbandübertragung

![[Computer Networks - A Tanenbaum - 5th edition-1.pdf#page=150]]

- Non-Return- to Zero (NRZ): Eins hat hohen, Null einen niedrigen Spannungspegel
- NRZ Invert: Bei jeder 1 findet ein Wechsel von hoch zu niedrig bzw. umgekehrt statt
- Manchesterkodierung: XOR mit der Taktfrequenz
	- Spektral: schlecht
	- sehr gleichstromfrei
- Bipolare Kodierungen: 1 ist ein wechsel von h -> l und eine 0 ist kein strom


- Kriterien für die Wahl des Leitungscodes:
	- Spektrale Effizienz (Bandbreite)
	- Takrwiederherstellung

>[!Info] Warum Gleichstrom in der Netzwerktechnik ungern verwendet wird
>Netzwerksignale werden gerne transformatorisch übermittelt, und Transformatoren hassen Gleichstrom

Mittelwertfrei
Hilft auch bei Taktwiederherstellung
Dekodierschwellen / Entscheidungsniveau AMI / 8B10B

## tabellarische Zuordnung:

Auch tabellarische Zuordnung ist bei der Basisbandübertragung möglich (z.B. 4B5B Code)

- Null-/Einsfolgen brechen
- nBmB: n Eingangsbits werden m Ausgangsbits zugeordnet
- Weniger Overhead als Manchester
- Ungenutzte Kombinationen, Redundanz kann für Steuerbefehle genutzt werden

## Verwürfeln

XOR  Verknüpfung der Eingangsbitfolge mit einer zufälligen Bitfolge

## Übertragung in Bandpasslage

- Basisband: Gut für Kabel, Funk eher nicht
- Platzierung der Frequenz auf einer anderen Grundfrequenz 
...

Digitale Modulation:
ASK, FSK, PSK

ASK: Amplitude Shift Keying
1 = Volle amplitude
0 = Keine Amplitude
=> geht auch mehrstufig ist aber schwieriger
=> häufige Amplitudenänderung durch Störung
Eingesetzt bei sehr simplen Funkempfängern

FSK: Frequency Shift Keying
1 = Hohe Frequenz
0 = Niedrige Frequenz
=> geht einfacher mehrstufig
=> Frequenzänderung durch Störung schwierig, maximal Dopplereffekt
Eingesetzt bei sehr simplen Funkempfängern

Phase Shift Key


## QPSK QAM

QPSK: Quadraturphasenumtastung 2 Bit/Symbol
QAM: Kombination aus Phasen und Amplitudenmodulation

QPSK ist sehr gut für Funkverkehr geeignet

Baudrate ist nicht immer gleich der Bitrate

>[!Info] Baudrate
>Die Baudrate gibt an, wie viele Bits in einem Symbol zusammengefasst werden
>1 Baud = 1 Symbol / s

Beispiel: 
GBit Ethernet hat eine Symbolrate von 125 MBaud (125 * 1000 * 1000 Symbole pro Sekunde)
Ein Symbol hat 2 Bit pro Sekunde
Wir haben fünf mögliche Signalzustände =>

=> Wir haben 4 Adernpare

## Zuordnung Bitkombination / Position im Konstellationsdiagramm

- Benachbarte Bits unterscheiden sich maximal um ein Bit, dadurch wird bei zweifelhafter Zuordnung maximal ein Fehler von einem Bit zu machen


# Multiplex

FDM: Teilnehmer erhalten Frequenzen zugeteilt (Schutzabstand zwischen den Bändern)
OFDM: Orthogonal Frequency Division Multiplexing
- Aufteilung der Bandbreite in viele Unterträger
- Nullstellen liegen bei Mittelfrequenzen
- Unterträger werden unabhängig voneinander moduliert: Aufspaltung des Datenstroms in parallele, niedrigratige Ströme
- Resistent gegen schmalbandige Störer
- WLAN verwendet OFDM
TDM: Time Division Multiplex - Teilnehmer erhalten Zeitpunkte zugeteilt
CDMA Jeder Teilnehmer erhält einen eigenen Code
$$
G_{P} = \frac{T_{b}}{T_{c}}
$$
Schmalbandige Störungen sind bei CDMA nicht so schlimm

WDM ist auch nur FDM

(Dense) Wavelength Division Multiplexing

-> Artikel
-> Fragen

