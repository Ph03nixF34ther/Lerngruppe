---
tags:
  - Rechnernetze
  - TODO
---

# Designziele von TCP / IP

- Zuverlässugkeit
- Routing
- Flexibilität
- Internetworking

Sekundäre Designziele bei TCP/IP
- Anpassbarkeit Protocol Stack
- Skalierbarkeit
- Sicherheit / Schutz
- Adressierung
- Resourcenzuweisung

# Aufbau
## Link Layer (Netzzugangsschicht)

Schnittstelle zwischen Host und Übertragungsschicht
in RFC1122 in fünf Seiten
Äquivalent zur [[Data Link Layer (Sicherungsschicht)]]

// LINK RFC

## Internetlayer (Vermittlungsschicht)

Dreh und Angelpunkt der Architektur

Sorgt dafür, dass Pakete unabhängig voneinander am Ziel an

Reihenfolge der Ankunft wird dabei nicht beachtet

Definiert das Internetprotokoll

# Transport Layer (Transportschicht)

Ende zu Ende Kommunikation

TCP: zuverlässig, verbindungsorientiert, fehlerfreie Zustellung, in korrekter Reihenfolge, mit Flusskontrolle

UDP: unzuverlässig, Verbindungslos, wenn prompte Zustellung wichtiger ist als eine genaue Zustellung

# Application Layer (Anwendungsschicht)

- Anwendungen enthalte Sitzungs- und Darstellungsfunktionen
- Nutzen einer Trennung ist eher gering einzuschätzen 
- Beispiele: Telnet, FTP, SMTP, DNS, HTTP, RTP