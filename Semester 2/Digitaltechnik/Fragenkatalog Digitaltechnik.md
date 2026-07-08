## 1. Allgemeine Übersicht, Begriffe

### Frage 1: Was kennzeichnet ein digitales System?

Ein digitales System verarbeitet, speichert und überträgt Informationen ausschließlich in Form wert- und zeitdiskreter Signale (in der Regel binär codiert mit den Zuständen 0 und 1 bzw. Low und High). Es existiert also nur eine endliche Anzahl definierter Zustände, im Gegensatz zu kontinuierlichen Werten bei analogen Systemen.

### Frage 2: Warum werden zunehmend digitale Systeme eingesetzt? Nennen Sie drei Vorteile und zwei Nachteile.

Vorteile:

- Hohe Störsicherheit/Rauschunempfindlichkeit durch definierte Schaltschwellen (0/1)
- Verlustfreie Speicherung, Übertragung, Kopie und Verarbeitung von Daten
- Hohe Reproduzierbarkeit und einfache Realisierung komplexer Funktionen durch Software bzw. programmierbare Logik

Nachteile:

- Informationsverlust durch Quantisierung und Abtastung (begrenzte Auflösung)
- Zusätzlicher Aufwand für AD-/DA-Wandlung an Schnittstellen zur analogen Welt sowie höherer Schaltungs- und Energieaufwand bei hohen Taktfrequenzen

### Frage 3: Welche charakteristischen Merkmale unterscheiden analoge und digitale Signale?

- Analoge Signale sind wert- und zeitkontinuierlich: jeder Wert in einem Bereich ist möglich, zu jedem Zeitpunkt liegt ein Wert vor
- Digitale Signale sind wert- und zeitdiskret: es existieren nur endlich viele definierte Pegel (meist zwei) und Werte nur zu diskreten Abtastzeitpunkten

### Frage 4: Was besagt das Abtasttheorem?

Das Abtasttheorem (Nyquist-Shannon) besagt, dass ein zeitkontinuierliches, bandbegrenztes Signal verlustfrei abgetastet und wieder rekonstruiert werden kann, wenn die Abtastfrequenz $f_{A}$ mehr als doppelt so groß ist wie die höchste im Signal enthaltene Frequenz $f_{max}$.

### Frage 5: Wie können logische Strukturen dargestellt werden? Nennen Sie drei Möglichkeiten.

- Boolesche (schaltalgebraische) Gleichungen / Funktionsterme
- Wahrheitstabellen
- Schaltpläne bzw. Gattersymbole (Logikdiagramme)
- Automatengraphen
- Zeitimpulsdiagram

## 2. Digitale Schaltungstechnik

### Frage 1: Welche Halbleitertechnologien werden für Logikschaltkreise verwendet?

- Bipolartechnik (z. B. TTL)
- MOS-Technik (NMOS, PMOS)
- CMOS-Technik (Complementary MOS)
- BiCMOS (Kombination aus Bipolar- und CMOS-Technik)

### Frage 2: Welche Transistorstrukturen kennen Sie? Ordnen sie diese den Halbleitertechnologien zu.

- Bipolartransistoren (npn-/pnp-Transistoren) → Bipolartechnik (z. B. TTL, ECL)
- MOS-Feldeffekttransistoren (NMOS-, PMOS-Transistoren) → MOS-/CMOS-Technik (CMOS, NMOS-Logik)
- Kombination aus Bipolar- und MOS-Transistoren → BiCMOS

### Frage 3: Nennen Sie vier Logik-Schaltkreisfamilien.

- TTL (Transistor-Transistor-Logik)
- CMOS (Complementary MOS)
- ECL (Emitter Coupled Logic)
- (N)MOS-Logik bzw. BiCMOS

### Frage 4: Nennen Sie Gemeinsamkeiten und Unterschiede der Logik-Schaltkreisfamilien.

Gemeinsamkeiten:

Alle realisieren Logikfunktionen über definierte Spannungspegel für "0" und "1" und  besitzen vergleichbare Kennparameter wie Versorgungsspannung, Schaltzeiten, Fan-out, Störabstand,  Verlustleistung.

Unterschiede:

- Versorgungsspannung (z. B. TTL: 5 V; CMOS: 1,8–5 V; ECL: negative Versorgung)
- Schaltgeschwindigkeit/Verzögerungszeit (ECL am schnellsten, klassisches CMOS langsamer)
- Verlustleistung (CMOS im statischen Zustand sehr gering, TTL/ECL deutlich höher durch ständigen Ruhestrom)
- Störspannungsabstand sowie Eingangs-/Ausgangsbeschaltung (stromgesteuert bei TTL/ECL, spannungsgesteuert/hochohmig bei CMOS)

### Frage 5: Welche Parameter hat ein Digitalsignal?

- Logikpegel $U_L$ / $U_H$ (Low-/High-Pegel, Spannungsbereiche für "0"/"1")
- Anstiegszeit $t_r$ und Abfallzeit $t_f$
- Verzögerungs-/Propagationszeit $t_p$
- Taktfrequenz, Periodendauer, Tastverhältnis
- Störabstand

### Frage 6: Was beschreibt der Parameter $t_{p}$ eines Gatters?

$t_p$ (Propagationsverzögerung) beschreibt die Zeitspanne zwischen einer Signaländerung am Eingang eines Gatters und der dadurch verursachten Signaländerung am Ausgang – also die Signallaufzeit durch das Gatter.

### Frage 7: Welche Art von Ausgangsstufen digitaler Logikschaltkreise kennen Sie? Nennen Sie deren Eigenschaften.

- Standard-/Totem-Pole-Ausgang (Push-Pull): aktiver High- und Low-Pegel, in beiden Zuständen niederohmig; mehrere solcher Ausgänge dürfen nicht direkt parallelgeschaltet werden.
- Open-Collector-/Open-Drain-Ausgang: nur aktiver Low-Pegel, High-Pegel über externen Pull-up-Widerstand; mehrere Ausgänge können auf einen gemeinsamen Bus geschaltet werden (Wired-AND).
- Tristate-Ausgang (3-Zustand): zusätzlicher hochohmiger Zustand (Z) neben High/Low,  ermoüglicht Busbetrieb mit mehreren, zeitlich getrennt aktivierten Treibern.

### Frage 8: Was beschreibt der Ausgangs-Lastfaktor bzw. Fan-out?

Fan-out gibt an, wie viele Standard-Eingänge der gleichen Logikfamilie maximal an einen Ausgang angeschlossen werden dürfen, ohne dass die spezifizierten Spannungspegel (Ausgangsstrom) verletzt werden.

### Frage 9: Worauf ist beim Zusammenschalten von unterschiedlichen Logik-Schaltkreisfamilien zu achten?

- Kompatibilität der Versorgungsspannungen
- Kompatibilität der Logikpegel $U_L$/$U_H$ bzw. der Schaltschwellen
- Ausreichende Treiberfähigkeit (Ausgangsstrom des Treibers muss für alle angeschlossenen Eingangsströme ausreichen, Fan-out)
- Einhaltung der Störabstände

### Weitere Fragen:

- Erläutern Sie an einer Skizze das Schaltverhalten eines Inverters auf einen Eingangsimpuls und kennzeichnen Sie das Anstiegs-, Abfall- und Verzögerungsverhalten.
- Geben Sie die Boolsche Gleichung für ein NOR-Gatter mit zwei Eingängen an, welches nur aus NAND-Gattern zusammengesetzt ist. Geben sie eine mögliche Verdrahtung eines 7400-IC zur Realisierung an.

## 3. Schaltungsanalyse und Synthese

### Frage 7: Welche Form von Hazards kennen Sie und wodurch werden diese verursacht?

- Statische Hazards: Der Ausgang soll konstant bleiben (0→0 oder 1→1), schaltet aber kurzzeitig ungewollt um (Glitch); man unterscheidet Static-0- und Static-1-Hazard.
- Dynamische Hazards: Der Ausgang soll genau einmal wechseln, schaltet dabei aber mehrfach um, bevor er den Endwert erreicht.

## 4. Schaltnetze

### Frage 1: Welche Struktur von Logikschaltungen wird mit dem Begriff Schaltnetze beschrieben?

Schaltnetze sind kombinatorische, rückwirkungsfreie Logikschaltungen: Der Ausgang hängt zu jedem Zeitpunkt ausschließlich vom aktuellen Zustand der Eingänge ab. Es gibt keine Rückkopplung und kein internes Gedächtnis (keine Speicherwirkung, kein Takt erforderlich).

### Frage 2: Erläutern Sie den Begriff Codewandler. Nennen Sie zwei Beispiele.

Ein Codewandler (Code-Konverter) ist ein Schaltnetz, das eine in einem bestimmten Code vorliegende Information in einen anderen Code umsetzt, ohne den eigentlichen Informationsinhalt zu verändern.

- BCD-zu-7-Segment-Decoder
- Dualzahl-zu-Gray-Code-Wandler

### Frage 3: Welche Arten von Komparatoren kennen Sie?

- Identitäts-/Gleichheitskomparator: prüft nur, ob A = B
- Größenkomparator: vergleicht zwei Zahlen und liefert zusätzlich die Aussagen A < B und A > B

### Frage 4: Wofür werden Multiplexer benötigt?

Ein Multiplexer schaltet eines von mehreren Eingangssignalen, gesteuert über Adress-/Steuereingänge, auf einen gemeinsamen Ausgang durch. Er wird unter anderem zur Datenselektion, zum Zusammenführen mehrerer Datenquellen auf eine Leitung (Bus) sowie zur Realisierung beliebiger Logikfunktionen verwendet.

### Frage 5: Erläutern Sie den Unterschied zwischen Demultiplexer und Adressdecoder.

- Demultiplexer: leitet ein einzelnes Eingangssignal abhängig von der angelegten Adresse gezielt auf einen von mehreren Ausgängen weiter
- Adressdecoder: besitzt keinen separaten Dateneingang, er decodiert nur die anliegende Adresse und aktiviert genau einen von n Ausgängen
## 5. Schaltwerke

### Frage 1: Welche Struktur von Logikschaltungen wird mit dem Begriff Schaltwerke beschrieben?

Schaltwerke sind sequentielle Logikschaltungen mit Speicherverhalten: Der Ausgang hängt nicht nur vom aktuellen Zustand der Eingänge, sondern auch vom gespeicherten Zustand ab.

### Frage 2: Welche Typen von Kippschaltungen kennen Sie?

- Bistabile Kippschaltung (Flip-Flop): zwei stabile Zustände, hält den Zustand bis zum nächsten Trigger.
- Monostabile Kippschaltung (Monoflop): ein stabiler Zustand; kippt nach einem Trigger-Impuls für eine definierte Zeit in den instabilen Zustand und kehrt danach selbständig zurück.
- Astabile Kippschaltung (Multivibrator/Oszillator): kein stabiler Zustand; kippt periodisch selbständig zwischen beiden Zuständen (Taktgenerator).

### Frage 3: Klassifizieren Sie Flip-Flops anhand der Taktung.

- Asynchrone (zustandsgesteuerte) FF: Ausgang folgt unmittelbar den Eingängen, ohne Takt (z. B. einfaches RS-Flip-Flop)
- Taktzustandsgesteuerte (pegelgesteuerte) FF: Übernahme der Eingangswerte während der gesamten High- bzw. Low-Phase des Taktsignals (z. B. D-Latch)
- Taktflankengesteuerte FF (Single-Edge-Triggered): Übernahme nur im Moment einer steigenden oder fallenden Taktflanke
- Master-Slave-FF (zweiflankengesteuert): zwei intern hintereinander geschaltete Latches; Dateneingabe und -ausgabe erfolgen zu unterschiedlichen Taktflanken

## 6. FF-Anwendungen

### Frage 1: Worin unterscheiden sich synchrone und asynchrone Schaltwerke?

- Synchrone Schaltwerke: Alle Speicherelemente (Flip-Flops) werden von einem gemeinsamen Taktsignal angesteuert; Zustandswechsel erfolgen ausschließlich zu definierten Taktzeitpunkten (Flanken) – definierter, reproduzierbarer zeitlicher Ablauf
- Asynchrone Schaltwerke: Es gibt keinen gemeinsamen Takt; Zustandsänderungen erfolgen direkt bei Eingangsänderung, häufig löst der Ausgang eines Flip-Flops den Takt des nächsten aus

### Frage 3: Welche Möglichkeiten gibt es, Takte zu teilen?

- Frequenzteilung mit T- bzw. D-Flip-Flops im Toggle-Betrieb (Teilung durch 2 pro Stufe, Kaskadierung ergibt Teilung durch 2^n)
- Asynchrone oder synchrone Zähler als Modulo-n-Frequenzteiler
- Programmierbare Frequenzteiler-/Zähler-ICs

### Frage 4: Wie werden asynchrone Signale synchronisiert?

Asynchrone Eingangssignale werden über ein oder mehrere, mit dem Systemtakt getaktete Flip-Flops  (Synchronisierer-Kette, häufig zwei in Reihe) abgetastet. Dadurch wird das Signal in die Taktdomäne der nachfolgenden Schaltung überführt.

### Frage 5 (a): Wie können Zähler klassifiziert werden?

- Nach Zählrichtung: Vorwärts-, Rückwärts- und Vor-/Rückwärtszähler
- Nach Taktung: synchrone Zähler und asynchrone Zähler
- Nach Zählfolge/Code: Dualzähler, BCD-Zähler, Gray-Code-Zähler, Modulo-n-Zähler

### Frage 6 (a): Was kennzeichnet ein Schieberegister?

Ein Schieberegister besteht aus einer Kette taktgesteuerter Flip-Flops (meist D-Flip-Flops), bei der mit jedem Taktimpuls der gespeicherte Bitwert jeder Stufe an die nächste Stufe weitergegeben wird.

### Frage 6 (b): Nennen Sie zwei Anwendungen für Schieberegister.

- Parallel-Seriell- bzw. Seriell-Parallel-Wandlung (z. B. serielle Schnittstellen wie SPI)
- Pufferspeicher für CPU von Mikroprozessoren

## 7. Speicher

### Frage 2: Welchen Einfluss hat die Speicherzelle auf die Art des Speichers?

- Flüchtigkeit: Eine Kondensatorzelle (DRAM) verliert ihre Ladung und muss periodisch aufgefrischt werden (Refresh, flüchtig); eine Flip-Flop-Zelle (SRAM) hält ihren Zustand, solange die Versorgung anliegt
- Zugriffsart: Lese-/Schreibspeicher mit wahlfreiem Zugriff (RAM) oder nur lesbarer Speicher (ROM)
- Geschwindigkeit, Integrationsdichte und Leistungsbedarf werden ebenfalls maßgeblich durch die Zellstruktur bestimmt

### Frage 3: Welche Speichertechnologien sind Ihnen bekannt? Nennen Sie drei.

- RAM (SRAM, DRAM)
- ROM (Masken-ROM, PROM, EPROM, EEPROM)
- Flash-Speicher (NAND-/NOR-Flash)

### Frage 4: Nennen Sie Vor- und Nachteile von dynamischen und statischen RAM.

DRAM:
- sehr hohe Integrationsdichte (1 Transistor + Kondensator pro Zelle), geringe Kosten pro Bit
- benötigt periodisches Refresh, komplexere Ansteuerung, langsamer als SRAM

SRAM:
- schnell, einfache Ansteuerung, kein Refresh nötig
- geringere Integrationsdichte (ca. 6 Transistoren pro Zelle), höhere Kosten pro Bit

### Frage 5: Wie ist eine statische CMOS-Speicherzelle prinzipiell aufgebaut? Was ist die Besonderheit?

Eine statische CMOS-Speicherzelle (SRAM-Zelle, 6T-Zelle) besteht aus zwei kreuzgekoppelten CMOS-Invertern, die gemeinsam ein bistabiles Element (Latch) bilden, sowie zwei zusätzlichen Zugriffstransistoren, über die die Zelle – gesteuert durch die Wortleitung – mit den (komplementären) Bitleitungen verbunden wird.

Besonderheit: Die gespeicherte Information bleibt erhalten, solange die Versorgungsspannung anliegt – es ist kein periodisches Refresh wie bei DRAM nötig.

### Frage 6: Wie viele Adressleitungen sind notwendig, um einen 16k x 8 statischen RAM zu adressieren?

16k = 2^14 Speicherworte. Es werden daher 14 Adressleitungen benötigt. Die Datenbusbreite von 8 Bit hat keinen Einfluss auf die Anzahl der Adressleitungen.

### Frage 8: Welche wesentlichen Elemente sind notwendig, um einen FIFO zu realisieren?

- Speicherzellen-Array (RAM oder Registerkette) zur Datenspeicherung
- Schreib-Zeiger und Lese-Zeiger, die nach jedem Schreib- bzw. Lesezugriff weiterzählen
- Steuer-/Statuslogik zur Erzeugung der Signale "Full" und "Empty" durch Vergleich der beiden Zeiger

## 8. Programmierbare Logik

### Frage 1: Wie kann digitale Logik realisiert werden?

- Diskret aus einzelnen Logikgattern (Standard-ICs, z. B. 74xx-Serie)
- Programmierbare Logikbausteine (PAL, GAL, CPLD, FPGA)
- Anwendungsspezifische integrierte Schaltungen (ASIC)
- Software auf Mikroprozessor/Mikrocontroller (Logik als Programmcode)

### Frage 2: Was bedeuten die Abkürzungen GAL, CPLD, FPGA?

- GAL = Generic Array Logic
- CPLD = Complex Programmable Logic Device
- FPGA = Field Programmable Gate Array

### Frage 4: Welche Normalform wird mit der GAL-Struktur realisiert?

Mit der GAL-Struktur (programmierbare UND-Matrix, gefolgt von der ODER-Verknüpfung der Ausgänge) wird die disjunktive Normalform realisiert.

### Frage 5: Worin unterscheiden sich GALs und CPLDs?

- GAL: einzelner, vergleichsweise kleiner programmierbarer Logikbaustein mit einer programmierbaren UND-Matrix und festverdrahteter ODER-Verknüpfung
- CPLD: enthält mehrere GAL-/PAL-ähnliche Logikblöcke, die über eine zusätzliche, programmierbare Verbindungsmatrix miteinander verschaltet werden. Dadurch deutlich höhere Logikkapazität als ein einzelnes GAL.

### Frage 6: Worin unterscheiden sich CPLDs und FPGAs?

- CPLD: wenige, dafür große Logikblöcke mit PAL/GAL-artiger Summe-von-Produkten-Struktur, globale Verbindungsmatrix, meist nichtflüchtige (Flash-/EEPROM-basierte) Konfiguration, kurze und gut vorhersehbare Verzögerungszeiten.
- FPGA: sehr viele kleine, identische Logikblöcke (Look-Up-Tables/CLBs) mit flexiblem, lokalem Verbindungsnetzwerk, meist flüchtige (SRAM-basierte) Konfiguration, die beim Einschalten neu geladen werden muss; enthält häufig zusätzliche Blöcke wie RAM und Multiplizierer. FPGAs bieten dadurch wesentlich höhere Logikdichte und Flexibilität als CPLDs.

## 9. Weitere Elemente der Digitaltechnik

### Frage 1: Nennen Sie drei Eigenschaften eines ADC.

- Auflösung (Anzahl der Bits, z. B. 8/12/16 Bit)
- Abtastrate/Wandlungsrate (Samples pro Sekunde)
- Genauigkeit/Linearität (Quantisierungsfehler, Offset- und Verstärkungsfehler)

### Frage 2: Nennen Sie zwei ADC-Wandlungsverfahren.

- Sukzessive Approximation (SAR-ADC)
- Parallelumsetzung (Flash-ADC)

### Frage 3: Nennen Sie drei Eigenschaften eines DAC.

- Auflösung (Anzahl der Bits)
- Wandlungs-/Einschwingzeit (Settling Time)
- Genauigkeit/Linearität (Offset-/Verstärkungsfehler, DNL/INL)

### Frage 4: Nennen Sie zwei DAC-Wandlungsverfahren.

- Wägeverfahren (z. B. R-2R-Netzwerk mit gewichteten Widerständen/Strömen)
- Pulsweitenmodulation (PWM) mit nachgeschaltetem Tiefpassfilter

### Frage 5: Was besagt das Nyquist-Kriterium?

Das Nyquist-Kriterium besagt, dass die Abtastfrequenz mindestens doppelt so hoch sein muss wie die höchste im abzutastenden Signal vorkommende Frequenz (fA ≥ 2 · fmax), damit das Signal ohne Informationsverlust (ohne Aliasing) rekonstruiert werden kann.

### Frage 8: Welches sind die grundlegenden Aufgaben einer CPU?

- Steuerung des Programmablaufs (Befehle holen, decodieren, ausführen)
- Durchführung arithmetischer und logischer Operationen (ALU)
- Datentransfer und -verwaltung zwischen Registern, Speicher und Peripherie
- Zeitliche Koordination/Steuerung des Gesamtsystems (Taktung, Interrupt-Behandlung)

### Frage 9: Nennen Sie die Eigenschaften einer CPU und erläutern Sie diese.

- Befehlssatzarchitektur (z. B. RISC oder CISC) – bestimmt Art und Komplexität der ausführbaren Befehle
- Taktfrequenz – bestimmt die Verarbeitungsgeschwindigkeit
- Wort-/Datenbusbreite (z. B. 8/16/32/64 Bit) – bestimmt die je Takt verarbeitbare Datenmenge
- Register- und Cache-Größe – beeinflussen die Zugriffsgeschwindigkeit auf Daten
- Adressraum (Anzahl Adressleitungen) – bestimmt den maximal adressierbaren Speicher

### Frage 10: Nennen Sie drei Beispiele von CPU-Grundtypen.

- RISC (Reduced Instruction Set Computer)
- CISC (Complex Instruction Set Computer)
- Mikrocontroller (CPU mit integrierter Peripherie auf einem Chip)