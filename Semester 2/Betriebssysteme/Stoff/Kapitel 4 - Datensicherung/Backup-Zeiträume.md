# Recovery Point Objective

- Beschreibt den Zeitraum zwischen zwei Backups (oder zwischen letztem Backup und einem Ereignis)
- alle während dieser Zeit erzeugten/geänderten Inhalte können verloren gehen 
- Länge des RPO entscheidet über Ausfallsicherheit eines Systems

# Recovery Time Objective

- Beschreibt den Zeitraum zwischen einem Ereignis und der Wiederaufnahme des Geschäftsbetriebs (mit gesicherten Daten zum Zeitpunkt des RPO) 
- Während dieser Zeit 
	- steht das System nicht zur Verfügung 
	- können keine Daten gesichert werden 
- Dauer des RTO bestimmt Verfügbarkeit des Systems nach einem Ereignis

# Die Badewannenkurve

- Beschreibt das Ausfallverhalten von technischen Geräten gemessen an der Lebensdauer
- Ausfallrisiko zu Beginn und mit zunehmendem Alter der Geräte 
- "Dead On Arrival" bei Ausfall bei Inbetriebnahme