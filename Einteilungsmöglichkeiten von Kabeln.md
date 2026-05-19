---
tags:
  - Rechnernetze
  - TODO
---

### Die Übertragungsstrecken werden in Klassen, Komponenten und Kategorien eingeteilt

Kategorie: Einzelkomponenten (z.B. Stecker, Kabel)
Klasse: Gesamte Übertragungsstrecke
Höhere Kategorien / Klassen decken die darunterliegenden ab



| Kategorie         | Frequenzbereich                   | Anwendung                                                    | Besonderheiten                                                                                  |
| ----------------- | --------------------------------- | ------------------------------------------------------------ | ----------------------------------------------------------------------------------------------- |
| Cat-1             | Bis einige hundert kHz            | Sprachübertragung (Telefonanwendungen)                       | Nicht für Ethernet geeignet, keine offizielle TIA/EIA-Kategorie                                 |
| Cat-2             | Bis 1 oder 4 MHz                  | ISDN-Primärmultiplexanschluss                                | keine offizielle TIA/EIA-Kategorie                                                              |
| Cat-3             | Bis 16 MHz                        | ISDN, 10BASE-T Ethernet (10Mbit/s) 100BASE-T4                | Häufig in den USA verwendet (Telefonverkabelung), Teilweise noch in Altinstallationen verwendet |
| Cat-4             | Bis 20 MHz                        | Token-Ring-Netzwerke, Telefonie (USA)                        | Nicht mehr verwendet, nichtmehr im Standard                                                     |
| Cat-5 / 5e        | Bis 100MHz                        | Fast Ethernet, Gigabit-Ethernet                              | Strukturierte Verkabelung (Schulen / Büros), nicht immer Gigabit-Ethernet-Tauglich              |
| Cat-6 / 6a        | Cat-6: 250 MHz<br>Cat-6a: 500MHz  | Sprach- & Datenübertragung, Multimedia, ATM-Netze, 10GBASE-T | Cat-6: 10GBASE-T bis 55m<br>Cat-6a: 10GBASE-T bis 100m                                          |
| Cat-7 / 7A        | Cat-7: 600 MHz<br>Cat-7A: 1000MHz | 10GBASE-T                                                    | Vier einzeln abgeschirmte Adernpaare (S/FTP) (Standard für neue Installationen)                 |
| Cat-8 / 8.1 / 8.2 | 1600 - 2000 MHz                   | 40GBASE-T                                                    |                                                                                                 |
## Maßnahmen gegen die Störleistung

- Ungeschirmtes, leicht verdrilltes Telefonkabel
- Das Telefonherz hat eine Maximalfrequenz von $f_{max} = 3,4\text{ kHz}$
- Anzahl an Verdrillungen pro Längeneinheit und Durchmesser nimmt in der Regel mit der Kategorie zu.
- Ab Cat 3 wird Isoliert
- Ab Cat 6 werden die Kabelpaare untereinander geschirmt

## Umrechnung Übertragungsrate / 
$$
\frac{C}{\text{bit}} = B \cdot \log_{2}\left( 1 + \frac{S}{N} \right)
$$
$$
\begin{array}{rl}
C & \text{Kapazität} \\
B & \text{Maximalfrequenz} \\
S & \text{Signalleistung (Bessere Schirmung)} \\
N & \text{Störleistung (Schirmung)}
\end{array}
$$

## Benennung nach ISO

$$
\text{XX} / \text{YZZ}
$$

$\text{XX}$ : Gesamtschirmung
$$
\begin{array}{rcl}
U  & = & \text{ungeschirmt} \\
F  & = & \text{Folienschrim} \\
S  & = & \text{Geflechtschirm} \\
SF  & = & \text{Geflecht- und Folienschirm} \\

\end{array}
$$

$\text{Y}$ : Gesamtschirmung
$$
\begin{array}{rcl}
U  & = & \text{??} \\
F  & = & \text{??} \\
S  & = & \text{??} \\
SF  & = & \text{??} \\

\end{array}
$$

$\text{ZZ}$ : Gesamtschirmung
$$
\begin{array}{rcl}
U  & = & \text{ungeschirmt} \\
F  & = & \text{Folienschrim} \\
S  & = & \text{Geflechtschirm} \\
SF  & = & \text{Geflecht- und Folienschirm} \\

\end{array}
$$

## LSA zum Auflegen von TP

- Löt-/Schraub/Abisolierfrei
- Schneller und einfacher als Löten, schrauben und abisolieren
- Drähte werden in Klemmen eingeführt und durch einen Schlagmechanismus festgehalten
- Hohe Zuverlässigkeit: 