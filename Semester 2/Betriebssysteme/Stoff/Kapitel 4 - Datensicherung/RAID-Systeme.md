

# Ursprung

- Geschwindigkeiten von Festplattensystemen lassen sich nicht unendlich verbessern
- Physikalische und materielle Grenzen begrenzen Systemleistung bzw. Schreib- und Lesegeschwindigkeit
- Möglichkeit zur Optimierung ist die Verwendung von mehreren -- Info aus Präsentation--
- RAID-Systeme bestehen aus mehreren Festplatten
	- Benutzer und Prozesse nehmen diese als eine große Festplatte wahr.
- Daten werden auf die Festplatten im RAID verteilt
- Wie Daten verteilt werden, wird durch RAID-Level spezifiziert
- Gebräuchlichste Level sind RAID 0, RAID 1 und RAID 5
- Abgrenzung zum NAS-Systemen wichtig
	- Network Attached Storage : Speichersystem in einem Netzwerk (nicht automatisch ein RAID-System)

# RAID 0

- Spring - Beschleunigung ohne Redundanz
- Kein "echtes" RAID, weil keinen Redundanz vorliegt
- Effekt ist Stagnierung der Datentransferrate 
- Aufteilung der Festplatten in zusammenhängende Blöcke gleicher Größe 
- Bei großen E/A-Aufträgen (> 4 oder 8KB) können Zugriffe parallel auf mehrere oder alle Festplatten durchgeführt werden 
- Fällt eine Festplatte aus, können die Daten nicht mehr rekonstruiert werden 
- RAID 0 eignet sich nur, wenn Sicherheit der Daten unwichtig ist, oder eine zusätzliche Form der Datensicherung angewandt wird!

# RAID 1

- Spiegelung der Daten
- Mindestens zwei Festplatten gleicher Größe enthalten exakt die gleichen Daten
	- Bei unterschiedlich großen Festplatten reduziert sich die RAID-Kapazität um die Differenz
- Jede Datenänderung wird auf allen beteiligten Platten geschrieben
- Ausfall einer Platte führt nicht zu Datenverlust
- RAID 1 ist kein Ersatz für einen Datensicherung
	- Fehlerhafte Dateioperationen der Virenbefall findet auf allen Platten statt!
- Lesegeschwindigkeit kann durch intelligente Verteilung der Zugriffe gesteigert werden

# RAID 5 

- Block-Level Stripping mit verteilten Paritäts-Infos
- besteht aus mindestens drei Festplatten
- Bietet erhöhten Datendurchsatz und höhere Datensicherheit
- Nutzdaten werden wie bei RAID 0 auf alle Festplatten verteilt
- Berechnung von Paritätsinformationen, aus denen beim Ausfall von max. einer Platte die Nutzdaten vollständig rekonstruiert werden können 
- Diese Berechnung kann abhängig von der Größe des Datenverbunds sehr lang dauern 
- Berechnung der Paritätsinformationen durch XOR erfordert zusätzliche Rechenleistung bei Schreibzugriffen 
- Durch die Verteilung der Paritätsinformationen auf alle Festplatten (Rotating Parity) wird verhindert, dass eine einzelne Paritätsplatte zu einem möglichen Engpass (Flaschenhals) wird

# RAID 6

- Block-LS mit doppelt verteilten Paritäts-Infos
- Funktioniert ähnlich wie RAID 5
- verkraftet aber den gleichzeitigen Ausfall von bis zu zwei Festplatten
- Im Gegensatz zu RAID 5 gibt es mehrere mögliche Implementierungsformen, die sich insbesondere in der Schreibleistung und dem Rechenaufwand unterscheiden
	- Bessere Schreibleistung setzt erhöhten rechenaufwand voraus
- Im Gegensatz zu RAID 5 ist die Verfügbarkeit höher, aber der Datendurchsatz insgesamt niedriger
- (RAID 5 und RAID 6 haben RAID 3 weitestgehend ersetz)