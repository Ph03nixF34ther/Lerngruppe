# Einteilung über die logische Ebene

Logisch gesehen kann eine Nachricht entweder gerichtet oder ungerichtet sein. 

- Wird die Nachricht einfach vermittelt und jeder, der möchte kann sie empfangen, spricht man von "[[Verteilung]]"
- Wird die Nachricht an einen oder mehrere bestimmte Kommunikationsteilnehmer gerichtet, spricht man von "[[Vermittlung]]"

# Einteilung über die technische Umsetzung

Auch technisch gesehen kann eine Nachricht entweder gerichtet oder ungerichtet sein. 

- Wird die Nachricht einfach vermittelt und jeder, der möchte kann sie empfangen, spricht man von "[[Broadcast]]"
- Wird die Nachricht an einen oder mehrere bestimmte Kommunikationsteilnehmer gerichtet, spricht man von "[[Point-to-Point|Point-to-Point-Kommunikation]]"

# Einteilung über die Betriebsarten

Netzwerkkommunikation findet in der Regel über ein Medium statt. 
Dabei ist zu unterscheiden, wie das Medium von Kommunikationspartnern genutzt wird, und wie bei der Nutzung des Mediums keine kommunikationskonflikte entstehen.

Die Kommunikation kann wie folgt unterteilt werden:

- [[Simplex Betriebsart]]
- [[Halbduplex Betriebsart]]
- [[Vollduplex Betriebsart]]

# Einteilung nach geführter und ungeführter Übertragung

Wird über ein Kabel kommuniziert spricht man von [[Geführte Übertragung|geführter Übertragung]].

Wird wireless übertragen spricht man von [[Ungeführte Übertragung|ungeführter Übertragung]]

# Einteilung in verbindungslose und verbindungsorientierte Übertragung

Teilt man Übertragungen in Verbindungsorientierte und verbindungslose Übertragungen, unterscheidet man größtenteils darüber, ob es eine direkte Verbindung zwischen beiden Kommunikationspartnern gibt, über die die gesamte Nachricht in einem Stück übermittelt werden kann.

Ist das der Fall spricht man von [[Verbindungsorientierte Übermittlung|verbindungsorientierter]] Kommunikation.
Muss die Nachricht in Paktete aufgeteilt werden, spricht man von [[Verbindungslose Übermittlung|verbindungsloser]] Kommunikation

# Einteilung nach Weiterleitungsmethoden

Wird die Übertragung vom vorherigen Netzteilnehmer direkt weitergeleitet spricht man vom [[Cut Through]]-Prinzip.

Wird die Übermittlung zunächst vollständig empfangen und dann erst weitergeleitet, spricht man vom [[Store and Forward]]-Prinzip.

# Einteilung über das Verbindungsmodell

In der Praxis können Netze und Verbindungen auch über ihren konkreten Aufbau, und die Rollenverteilung in einem Netz eingeteilt werden.

Am wichtigsten sind:
- das [[Client-Server Modell]]
- das [[Peer-To-Peer Modell]]

# Verbindungsorientierung und Zuverlässigkeit

> *Zuverlässig*:
> Alle Daten kommen an und die Reihenfolge passt 

>*Verbindungsorientiert*:
>Verbindung wird aufgebaut => Nachrichten werden gesendet => Verbindung wird abgebaut
>bei verbindungsloser Kommunikation wird keine Antwort erwartet


| Dienst                                                 | Beispiel                                        |
| ------------------------------------------------------ | ----------------------------------------------- |
| Verbindungsorientierter zuverlässiger Nachrichtenstrom | Abfolge von Seiten                              |
| Verbindungsorientierter zuverlässiger Bytestrom        | Download eines Films                            |
| Verbindungsorientierte unzuverlässige Verbindung       | Voice over IP (VoIP)                            |
| Verbindungslose unzuverlässige Diagramme               | Meldung Bluetooth // Präsenzerkennung // AirTag |
| Verbindungslose bestätigte Datagramme                  | Textnachrichten                                 |
| Verbindungslose Frage-Antwort                          | Datenbankabfrage                                |
Nachrichtenstrom <=> Bytestrom:
Es gibt sinnabschnitte (Fax)

VoIP:
Keine Bestätigung
Ke