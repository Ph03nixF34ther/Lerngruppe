
#### Digitales System
- verarbeitet, speichert und überträgt Informationen in Form wert- und zeitdiskreter Signale
- Vorteil: Störsicherheit, einfache Realisierung, Reproduzierbarkeit
- Nachteil: Zusätzlicher Aufwand (AD-/DA), begrenzte Auflösung
#### Analoge vs. Digitale Signale
- Analog: wert- und zeitkontinuierlich
- Digital: wert- und zeitdiskret

#### Abtasttheorem
$f_{Abtastfrequenz} \geq 2 \cdot f_{max}$

#### Darstellung Logische Strukturen
- Boolesche Algebra, Schaltpläne, Wahrheitstabelle, Automatengraph, Zeitimpulsdiagram

#### Halbleitertechnologien
- Bipolartechnik, MOS-Technik, CMOS-Technik, BiCMOS

#### Logik-Schaltkreisfamilien
- TTL (Transistor-Transistor-Logik)
- CMOS (Complementary MOS)
- ECL (Emitter Coupled Logic)
- (N)MOS-Logik bzw. BiCMOS

Gemeinsamkeiten:
- definierte Spannungspegel für 0 und 1

Unterschiede:
- Versorgungsspannung, Schaltgeschwindigkeit, Verlustleistung

#### Digitalsignal
- Logikpegel, Anstieg- Abfallzeit, Verzögerungszeit
- Taktfrequenz, Periodendauer, Tastverhältnis

#### Fan-out
- Maximale Anzahl an Standarteingängen der gleichen Logikfamilie hintereinander geschaltet
- Zusammenschalten unterschiedlicher Schaltkreisfamilien: Versorgungsspannung, Schaltschwellen, Fan-Out

#### Schaltnetze
- Definition: kombinatorisch rückwirkungsfreie Logikschaltungen: Ausgang hängt zu jedem Zeitpunkt von Eingang ab (kein Speicher)
- Komparatoren: Gleichheitskomparator, Größenkomparator
- Multiplexer: Daten von X Eingängen auf einen Ausgang durch Steuersignal (Demultiplexer andersrum)
- Adressdecoder: wie Multiplexer nur ohne Steuersignale
- Codewandler: Umwandlung von Information aus einem Code in einen Anderen (BCD zu 7 Segment)

#### Schaltwerk
- Definition: Schaltwerk = Schaltnetz + Speicher
- Kippschaltungen: 
	- Bistabile (Flip-Flop): zwei stabile Zustände
	- Monostabile (Monoflop): ein stabiler Zustand
	- Astabil (Oszillator): kein stabilen Zustand
- Flip Flops:
	- Zustandsgesteuerte: Ausgang folgt unmittelbar dem Eingang (ohne Takt) --> RS-FF
	- Taktzustandsgesteuerte: Übernahme der Eingangswerte während gesamtem Taktsignal --> D-FF
	- Taktflankengesteuerte: Übernahme der Eingangswerte nur im Moment einer Flanke
	- Zweiflankengesteuert: Dateneingabe und Ausgabe erfolgt zu unterschiedlichen Taktflanken

#### FF Anwendungen
- synchrone Schaltwerke: alle Speicherelemente (FF) über gemeinsames Taktsignal gesteuert
- asynchrone Schaltwerke: alle Speicherelemente über Taktsignal des vorherigen gesteuert
- Taktteiler: Frequenzteiler, Zähler, Zähler-ICs
- Zähler Klassifizieren: Zählrichtung, Taktung, Code
- Schieberegister: Kette taktgesteuerter FF

#### Speicher
- Flüchtigkeit: dynamisch oder statisch (DRAM oder SRAM)
- Zugriffart: lesen/schreiben (RAM oder ROM)
- Geschwindigkeit, Integrationsdichte, Leistungsbedarf
- Speichertechnologien:
	- RAM (SRAM, DRAM)
	- ROM (Masken-ROM, EPROM, EEPROM)
	- Flash-Speicher (NAND/NOR Flash)
- Adressrechnung: (16k x 8 statischer RAM) $16k=2^{14}$ --> 14 Adressleitungen
- FIFO Elemente: Speicher (RAM), Schreib/Lese-Zeiger, Steuer/Statuslogik
#### Programmierbare Logik
- Realisierbar durch: Logikgatter (ICs) oder Programmierbare Logikbausteine (PAL, GAL, CPLD, FPGA) oder Anwendungsspezifische integrierte Schaltungen (ASIC) oder Software auf Mikrocontroller
- GAL = Generic Array Logic (programmierbare UND&ODER-Matrix realisiert durch disjunktive Normalform) 
- CPLD = Complex Programmable Logic Device
- FPGA = Field Programmable Gate Array
- GAL (klein programmierbarer Logikbaustein mit UND&ODER-Matrix) vs CPLD (mehrere GAL Logikblöcke über zusätzliche programmierbare Verbindungsmatix verschaltet)
- CPLD (wenig, dafür große Logikblöcke auf GAL Basis mit meist nicht flüchtigem Flash Speicher) vs FPGA (viele kleine, identische Logikblöcke mit meist flüchtigem SRAM)

#### Weitere Digitaltechnik Elemente
- ADC Eigenschaften: Auflösung, Abtastrate, Genauigkeit(Offset und Verstärkungsfehler)
- ADC Wandlungsverfahren: Sukzessive Approximation (SAR-ADC), Parallelumsetzung (Flash-ADC)
- DAC Wandlungsverfahren: Wägeverfahren, Pulsweitenmodulation