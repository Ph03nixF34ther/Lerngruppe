# Aufbau

![[5Layer.drawio.svg]]

- Eine Nachricht soll von der Anwendungsschicht gesendet werden

- Layer 4 fügt Verwaltungsinformationen an die Nachricht an (Header 4) => Segmente

- Layer 3 betrachtet H4 und die Nachricht als eins (=> Abstraktionslayer)
- Layer 3 teilt die Message in für das Netzwerk verträgliche Teilnachrichten auf
- Layer 3 fügt den Messages einen eigenen Header 3 voran => Pakete

- Layer 2 Wird wieder ein Header 2 vorangestellt und ein Tail wird angehangen (Rahmenbildung) => Rahmen

- Layer 1 ist die physische Ebene, auf der die  Nachrichten übermittelt werden


# Sieben Schichten des ISO / OSI Modell

- xPDU: x Protocoll Data Xunit, die zwischen den Netzwerkteilnehmern austauschen