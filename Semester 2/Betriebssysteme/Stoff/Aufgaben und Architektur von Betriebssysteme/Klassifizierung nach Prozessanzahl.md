# Inhalt:

## Singeltasking

- Ein Programm zu einem bestimmten Zeitraum
- mehrere Programme nur nacheinander möglich 
- Bspw. bei Echtzeitsystemen zu finden

## Multitasking

- Mehre Programme zu einem bestimmten Zeitpunkt
	- Gleichzeitig
	- Zeitlich verschachtelte (Parallel)
- Abgrenzung zwischen "echter" und "pseudo" Parallelität

## Ein-Prozessor-Betriebssysteme

- Konfiguration gemäß [[Von-Neuman-Architektur]]
- Ein physischer Prozessor
- Gängigste Konfiguration von Rechnern
- Meisten BS sind auf einen Prozessor ausgelegt

## Mehr-Prozessor-Betriebssysteme

- Aufteilung der Prozessorlast auf zwei physische Prozessoren
	- Theoretische Verdopplung der Leistung
- Erfordert spezielle Treiber bzw. Steuerungssoftware
	- Probleme bei Ressourcenverwaltung oder Speicherzugriffen
	- Deadlocks oder Latenzen
- Anfang der 2000er-Jahre populär
	- Reduzierung seit Mehrkernprozessoren im Consumer Bereich
- Finden in Servern oder Großrechnern Anwendung