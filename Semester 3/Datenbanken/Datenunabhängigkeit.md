Bedeutet die Trennung der Daten von Programmen

![[Sichten.drawio.svg]]

Beispiel:

- In der Datenbank eines Unternehmens werden Daten für den Einkauf, die Lagerung und den Vertrieb von Artikeln gespeichert
- Wenn sich jetzt z.B. die Sicht der Einkaufsabteilung ändert, weil zukünftig Daten über die Liefertreue von Lieferanten mit gespeichert werden sollen, so darf diese Erweiterung zunächst keine Auswirkungen auf die Anwendungen für Lagerhaltung und Vertrieb haben, wenn die Forderung nach logischer Datenunabhängigkeit eingehalten werden soll

# Physische Datenunabhängigkeit

Ein Anwendungsprogramm ist von Änderungen in der physischen Abspeicherung der Daten unabhängig -> die Speicherstrukturen sind uninteressant

# Logische Datenunabhängigkeit

Die logische Sicht eines Programms und damit das Anwendungsprogramm selbst, bleibt unverändert in der Gesamtsicht der Daten