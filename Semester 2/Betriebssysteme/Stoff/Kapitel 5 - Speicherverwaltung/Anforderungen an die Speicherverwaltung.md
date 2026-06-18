# Relocation

- Gemeinsame Nutzung des Hauptspeichers durch mehrere Programme
- Auslagerung von Prozessen/Programmen
- Prozessorhardware und BS-Software müssen gespeicherte Informationen wiederfinden können! 
- Logische Adressen müssen in physische Adressen umwandelbar sein!

# Protection

- Prozessinformationen und –daten liegen im Speicher nebeneinander ab 
- Daten von einzelnen Prozessen dürfen nicht miteinander vermischt werden 
- Fremde Prozesse sollen nicht in der Lage sein, Informationen von anderen Prozessen zu lesen oder zu verändern! 
	- (Es sei denn, dies ist gewollt!)

# Sharing

- Prozesse können gemeinsam genutzte Speicherbereiche verwenden. 
- Wird ein Programm zweimal ausgeführt, muss zweimal auf die gleiche Stelle im Speicher zugegriffen werden. 
- Die SV muss reibungslosen Zugriff auf geteilten Speicher ermöglichen!

# Logical Organisation

- Realisierung von Speicherzellen als linearer Adressraum (1-dimensional) 
- Realisierung von Programmen als modulare Software mit mehreren Bestandteilen 
- Die SV muss die modularen Softwarebestandteile in die lineare Speicherstruktur integrieren können! 
- Die modularen Strukturen müssen trotz der linearen Architektur verwaltet werden können!

# Physical Organisation

- Verwendung von Hauptspeicher / Arbeitsspeicher und Hintergrundspeicher in einem System 
- Transport und Ent-/ladung von Daten notwendig 
- Die SV muss in der Lage sein, Daten vom Hauptspeicher in den Langzeitspeicher und zurück transportieren zu können!
