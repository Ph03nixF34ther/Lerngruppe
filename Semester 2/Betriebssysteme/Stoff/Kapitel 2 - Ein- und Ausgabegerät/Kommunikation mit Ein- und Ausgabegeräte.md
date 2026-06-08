# Polling:

- Interaktion zwischen Rechner und Controller 
	- Der Rechner prüft zyklisch den Controller
	- Passives verhalten des Controllers
- Verwendung von Statusbits am Controller, bestehend aus:
	- BUSY
	- WRITE
	- EXECUTE
	- ERROR
- Praktisch ineffizient
- Ablauf:
	- Rechner liest zyklisch des BUSY-Bit, bis Wert "bereit" anzeigt
	- Rechner überträgt ein Byte in Ausgaberegister
	- Rechner setzt EXECUTE-Bit
	- Controller erkennt, dass er arbeiten soll und setzt BUSY-Bit
	- Controller liest Schreibbefehl, liest Bytes aus Ausgaberegister und löst Ausgabe aus
	- EXECUTE-Bit, BUSY-Bit und ERROR-Bit wird auf 0 gesetzt

# Interrupts

- Keine zyklische Abfrage durch den Rechner
- Controller "meldet sich selbständig"
- Ausführen einer Interrupt Service Routine
- Maskieren von anderen Interrupts
- Umfangreiche Kontrollmechanismen für mehrere Interrupts in modernen Systemen
	- Prioritäten, Nebenläufigkeiten etc.