---
tags:
  - Rechnernetze
---

## Ursprüngliches Design für das ARPA-Net

![[ARPANETDesign.drawio.svg]]

- Subnetz aus [[IMP]] (**Internet Message Processors**)
- Paket mit vollständiger Zieladdresse
- Daten: Host => [[IMP]], ggf. Zerstückelung
- 1968 Vertragsabgabe
- 1969 Host-Software

Hosts reden über ein Netz aus IMPs 

- Packet nach IMP
- IMP zerstückelt Datenpacket in 1KB Packete und sendet sie durch das IMP-System
- Ziel IMP sammelt Pakete und sendet sie weiter an den Zielhost

- Das Subnetz sollte aus Minicomputern namens IMPs (Interface Message Processors) bestehen, die über 56-kbit/s-Übertragungsleitungen verbunden waren. Für hohe Zuverlässigkeit sollte jeder IMP mit mindestens zwei anderen IMPs verbunden sein. 
- Das Subnetz sollte ein Datagramm-Subnetz sein, sodass Nachrichten bei Ausfall einzelner Leitungen und IMPs automatisch über alternative Pfade umgeleitet werden konnten. 
- Jeder Knoten des Netzwerks sollte aus einem IMP und einem Host im selben Raum bestehen, die über ein kurzes Kabel verbunden waren. 
- Ein Host konnte Nachrichten von bis zu 8063 Bit an seinen IMP senden, der diese dann in Pakete von maximal 1008 Bit aufteilte und unabhängig voneinander an das Ziel weiterleitete. Jedes Paket wurde vollständig empfangen, bevor es weitergeleitet wurde. 
- Somit war das Subnetz das erste elektronische Store-and-Forward-Paketvermittlungsnetzwerk. 

## Weitere Geschichte des Arpanets

=> ARPANET wächst erste 3 Jahre schnell

Versuche Drahtlos, Mobil und mit Sateliten ans ARPANET anzubinden
=> Funktioniert nicht

Zwölf Unternehmen gaben Angebote ab. Nach Auswertung aller Vorschläge wählte ARPA BBN, ein Beratungsunternehmen mit Sitz in Cambridge, Massachusetts, aus und erteilte ihm im Dezember 1968 den Auftrag, das Subnetz aufzubauen und die zugehörige Software zu entwickeln. BBN entschied sich für speziell modifizierte Honeywell DDP-316 Minicomputer mit 12.000 16-Bit-Wörtern als IMPs (Integrated Microprozessoren). Die IMPs besaßen keine Festplatten, da bewegliche Teile als unzuverlässig galten. Die IMPs waren über 56-kbit/s-Leitungen von Telefongesellschaften miteinander verbunden. Obwohl 56 kbit/s heute die Wahl von Jugendlichen ist, die sich DSL oder Kabelfernsehen nicht leisten können, war es damals das Beste, was man für Geld bekommen konnte. Die Software wurde in zwei Teile aufgeteilt: Subnetz und Host. 

Die Subnetzsoftware bestand aus dem IMP-Ende der Host-IMP-Verbindung, dem IMP-IMP-Protokoll und einem Quell-IMP-Ziel-IMP-Protokoll zur Verbesserung der Zuverlässigkeit.

Vorstellung: [[TCP-IP]]
Wurde finanziell unterstützt durch ARPA


Vorstellung: BSD (Serverbetriebssystem)
Vorstellung: Berkly-Sockets mit BSD 4.2