# Klassifizierung nach Betriebsart

## Stapelverarbeitung (Batch-Processing)

- Frühere Betriebssysteme verfügten ausschließlich über Stack-Betrieb
	- Programmierung mittels Lochkarten oder Magnetstreifen
- Programmabfolge erfolge nacheinander
	- kein Multitasking und keine parallelen Aufgaben

## Dialogbetrieb (Interactive-Processing)

- Steuerung des Systems über ein Dialog
	 - Eingabe werden mit Ausgaben beantwortet
- Verwendung von E/A-Geräten
	 - Maus/ Tastatur/Gamepads und Bildschirme
- Dargestellte Oberfläche können textbasiert oder grafisch sein

## Netzwerkbetriebssystem (Network-Processing)

- Sind darauf ausgelegt, dass Rechner mit anderen Rechnern in einem Netzwerk arbeiten und kommunizieren
- zugriff und Verwendung von fremden Ressourcen und Daten von Rechnern innerhalb des Netzwerks
- Unterschiede in Peer-To-Peer-Systeme und Client-Server-Systeme 

## Realzeit-Betriebssysteme (Realtime-Processing)

- Reagiert in Echtzeit mit Eingabegeräte (Sensoren)
- werden hauptsächlich für Steuerungs- oder Regelungsaufgaben genutzt 
	 - meist in Embedded-Bereich zu finden
- Fokus liegt auf kurzen Verarbeitungs- und Antwortzeit der einzelnen Prozessen und Aufgaben
- Ermittlung von Informationen über Sensoren
- Reaktion auf Einflüsse nahezu in Echtzeit (10 - 100ms)
- Benötigen spezielle Hard- und Software
- Universelle Betriebssysteme 
	- Erfüllen mehrerer der vorweg genannten Kriterien
	- Können für mehr als einen bestimmten Anwendungszwecken genutzt werden
## Universelle Betriebssysteme

- Erfüllen mehrere der Vorweg genannten Kriterien
- Können für mehr als einen bestimmten Anwendungszweck genutzt werden 

# Klassifizierung nach Prozessanzahl

## Singletasking

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