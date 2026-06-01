---
aliases:
  - Kanäle
  - Kanals
---

Spezieller EA-Prozessor welcher die Aufgabe der Ein- und Ausgabeverarbeitung übernimmt

Wird von einem [[Kanalprogramm]] gesteuert

Läuft selbstständig parallel zur [[Zentraleinheit]]

Kanal und [[Zentraleinheit]] können nicht gleichzeitig auf den selben Bereich im [[Arbeitsspeicher|Hauptspeicher]] zugreifen
Deshalb wird der Zugriff der [[Zentraleinheit]] beim zugriff des Kanals auf den [[Arbeitsspeicher|Hauptspeicher]] um einen [[Speicherzyklus]] verzögert
Weil der [[Speicherzyklus]] "gestohlen" wird nennt sich dieser Vorgang _cycle stealing_ 

Besitzt i.d.R. vier [[Register]] 
- Das EA-Register dient als Zwischenspeicher für die übertragenden [[Daten]]
- Mit dem Kontroll-[[Register]] wird das entsprechende gerät spezifiziert und es kann Fehlerinformationen über den Kanal oder das Gerät erhalten
- Das Adress-[[Register]] enthält die Hauptspeicheradresse der noch zu übertragenden [[Daten]]
- Der Längenzähler enthält die Anzahl der noch zu übertragenden [[Daten]], ist dieser Null ist die EA-Operation beendet

Kanäle werden unterschieden in

# Multiplexkanäle

Können gleichzeitig eine Menge relativ langsamer Geräte versorgen

# Selektorkanäle

Versorgen nur ein schnelles Gerät und bleiben bei der gesamten EA-Operation damit verbunden