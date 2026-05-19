---
tags:
  - TODO
  - Rechnernetze
---

# Erklärung

> Dienst:
> Menge an "Primitiven" (= Grundoperationen) die eine Schicht der darüber liegenden anbietet

> Schnittstelle:
> Anbindung an höhere oder niedrigere Layer (obere Schicht: Nutzer, untere Schicht: Anbieter)

> Protokoll:
> Regelwerk für die Kommunikation (Regelwerk, um definierte Dienste zu implementieren)

// Image

Dienst, Grundelemente (Operationen), die Benutzerprozessen für den Zugriff bereitgestellt.

- Dienst: Formal durch Menge an Grundoperationen spezifiziert
- Weisen einen Dienst an eine Aktion durchzuführen oder über eine Aktion des Partners zu berichten
- Protokollstapel im Betriebssystem? Kernel Trap
- Grundoperationen hängen von der Art des Dienstes ab


| Primitiv   | Bedeutung                     |
| ---------- | ----------------------------- |
| LISTEN     | Blockiert und wartet          |
| CONNECT    | Baut verbindung auf           |
| ACCEPT     | Nimmt angehende Verbindung an |
| RESCIEVE   |                               |
| SEND       |                               |
| DISCONNECT |                               |

# Beispielhafter Protokollablauf für verbindungsorientierte Kommunikation mit diesen Dienstprimitiven

