# Woraus bestehen Rechnernetze

- bestehen aus Übertragungswegen (Kabel, Freiraum)
- Übertragungseinrichtungen (Funksender, Repeater)
- Verteil- und Vermitlungseinrichtungen
- Netzknoten
- Endgeräte

> Es gibt keine allgemeingültige Einteilung für Rechnernetze

# Einteilung der Kommunikation
## Logische Einteilung

Verteilung: 
- Jeder erhält die selbe Nachricht
- Bsp: Radionetz

Vermittlung: 
- Über das Netz eine Verbindung zwischen zwei Teilnehmern herstellen ("Individualkommunikation")
- Bsp: Telefonnetz
- (Heute keine exklusive Vermittlung mehr -> Paketvermittlung)

! Grauzonen, nicht trennscharf Bsp.: Telefonkonferenz

## Technische Umsetzung

- Point to Point: Verbindung einzelner Teilnehmerpaare
-  Broadcast: Geteilter Kommunikationskanal mit einem Sender und vielen Empfängern im Netz

## Weitere Unterscheidungsmöglichkeiten
Wir können drei Betriebsarten unterscheiden:

Simplex:
Endgerät ==> Übertragungsmedium ==> Endgerät

Halbduplex 
Endgerät ==> Übertragungsmedium ==> Endgerät
	    <-                                         <-
Beidseitige Kommunikation geht, aber nur wenn der jeweils andere gerade zuhöhrt

Vollduplex 
Endgerät ==> Übertragungsmedium ==> Endgerät
	    <==                                       <==

-> Hängt vom Medium ab

- Übertragungen können geführt oder ungeführt sein
	- Kabel = Geführt
	- Luft = ungeführt
- Verbindungsorientiert oder verbindungslos
	- Verbindungsorientiert = Pipeline
	- Verbindungslos = Eingeteilt in Chunks
- Weiterleitung auf zwei Arten:
	- Store and Forward: Vollständig empfangen und weitergeleitet
	- Cut through: alles was ankommt geht direkt wieder raus


Client-Server-Modell ist weit verbreitet