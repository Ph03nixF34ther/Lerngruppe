Die Gerätesteuerung für Ein- und Ausgabegeräte
Besteht oft aus mehreren Teilsystemen 

Hat vor allem für größere Rechnersysteme ein große Bedeutung

Bei der einfachsten Form sind die Geräte direkt an die [[Zentraleinheit]] angeschlossen und laufen unter ihrer Kontrolle
Wenn ein [[Programm]] [[Daten]] ausgeben möchte so überträgt die [[Zentraleinheit]] die [[Daten]] zeichenweise zum Ausgabegerät 
Dadurch muss die [[Zentraleinheit]] sehr oft auf die Ein- und Ausgabe warten

Um das zu vermeiden gibt es spezielle EA-Prozessoren die [[Kanal|Kanäle]] die die Bedienung der externen Geräte übernimmt
Dadurch geht der Ausgabeprozess wie folgt

- Die Zentraleinheit sendet dem [[Kanal]] den Typ des gewünschten Gerätes
- Die [[Adresse]] eines [[Kanalprogramm|Kanalprogramms]]
- Die Start[[Adresse]] und die Länge des Hauptspeicherbereichs, der ausgegeben werden soll
- bzw. in den die [[Daten]] bei einer Eingabeoperation gebraucht werden sollen
- Der [[Kanal]] holt sich jetzt selbstständig die [[Daten]] aus dem [[Arbeitsspeicher|Hauptspeicher]] der [[Zentraleinheit]] und sorgt für deren ordnungsgemäße Ausgabe (oder umgekehrt bei Eingabeoperationen)
