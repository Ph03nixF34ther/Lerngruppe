---
aliases:
  - Befehlen
  - Befehls
---
Kleinste nicht weiter teilbare Einheit in einer [[Programmiersprache]]

Grundbausteine jeder [[Programmiersprache]]

Beschreiben Arbeitsschritt eines [[Programm|Programms]] 

Wird heute nur noch im Zusammenhang mit [[Programmiersprache#Maschinenorientierte Programmiersprachen|maschinenorientierten Programmiersprachen]] verwendet
Bei [[Programmiersprache#Problemorientierte Programmiersprachen|problemorientierten Programmiersprachen]] benutzt man [[Anweisung]] 

# Aufbau

Operationsteil: Gibt an, was zu tun ist
Adressteil: Gibt die Adresse(n) der zugehörigen Operanden an

| Operationsteil | Adressteil |
| -------------- | ---------- |

## Adressierungsarten

Die hinterlegten Informationen im Adressteil können unterschiedlich sein

### Unmittelbare Adressierung

Operand liegt direkt im Adressteil -> kein Speicherzugriff nötig

![[UnmittelbareAdressierung.drawio.svg]]

### Absolute oder Direkte Adressierung

Die im Adressteil angegebene Adresse gibt den Aufenthaltsort des Operanden an

![[DirekteAdressierung.drawio.svg]]

### Indirekte Adressierung

Die im Adressteil angegebene Adresse ist die einer Speicherzelle, welche die Adresse des Operanden enthält

![[IndirekteAdressierung.drawio.svg]]

### Symbolische Adressierung

Einer Speicherzelle wird ein frei wählbarer Name zugeordnet
Wird vor allem in [[Programmiersprache#Maschinenorientierte Programmiersprachen|Assemblersprachen]] benutzt

Während des Linken wird die symbolische Adresse mit dem absoluten Wert ersetzt

![[SymbolischeAdressierung.drawio.svg]]

### Indizierte Adressierung

Die Adresse des Operanden wird mittels eines Indexregisters (Adressregister) berechnet
Der Adressteil und der Wert im Indexregister wird summiert und das ist die Adresse des Operanden

![[IndizierteAdressierung.drawio.svg]]

### Relative Adressierung

Gleiches Prinzip wie bei der [[#Indizierte Adressierung|indizierten Adressierung]] aber es wird stattdessen ein Basisregister verwendet

#### PC-relative Adressierung

Sonderform der [[#Relative Adressierung|relativen Adressierung]] 
Berechnung passiert relativ zur vorher bearbeiteten Adresse
Dafür wird der Befehlszähler (program counter) genutzt

![[PCRelativeAdressierung.drawio.svg]]

### Virtuelle Adressierung

Es werden Speicherbereiche außerhalb des physischen Hauptspeichers angesprochen

Die Adressumsetzung sowie Ein- und Auslagern der Daten erfolgt ähnlich wie oben beschrieben

![[VirtuelleAdressierung.drawio.svg]]