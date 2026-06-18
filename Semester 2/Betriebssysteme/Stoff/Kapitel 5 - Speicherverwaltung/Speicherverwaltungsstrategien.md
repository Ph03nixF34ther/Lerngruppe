# Freispeicherverwaltung

- Verwaltung in Form einer Kette von freien Speicherblöcken
- Blöcke haben unterschiedliche Länge und verschiede Informationen

## First-Fit-Verfahren

- Durchlaufen der Liste
- Wahl des erstbesten, ausreichenden Speicherbereich
- Teilung der Speicherbereiche

## Alternative Verfahren

- Best-Fit
- Next-Fit
- Worst-Fit
- Quick-Fit

# Direkte Speicherverwaltung

- Belegung fester Speicherbereiche 
- selbständige Organisation des Speicherplatz durch Programme
- nur in Systemen mit Einzelprozessbetrieb
- Haltung mehrerer vollständiger Prozesse im Hauptspeicher
- ungenutzter Speicher ist verloren, bis Speicher neu verteilt wird
 
## Aufteilung des Hauptspeichers in feste Partitionen

- gleicher Größe
- unterschiedlicher Größe

$$
	\begin{array}{c|c}
	  & \text{Partition 1} & \text{Partition 2} & \text{Partition 3} \\
    \hline \text{Gleiche Größe} & \text{300K} & \text{300K} & \text{300K} \\
	\hline \text{unterschiedliche Größe} & \text{200K} & \text{300K} & \text{250K}
	\end{array}
$$

## Dynamische Partition

- Einteilung des Speichers in Partitionen
	- variable Länge und variable Anzahl
- exakt passende Speicherbereiche für jeden Prozess
- Ein und Auslagerung führt zu externer Fragmentierung
	- Defragmentierung erforderlich
