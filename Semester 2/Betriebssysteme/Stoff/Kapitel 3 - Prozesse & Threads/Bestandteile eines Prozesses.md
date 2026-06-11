# Bestandteil eines Prozesses

-  zwei Bestandteile des Prozessors im Hauptspeicher 

## Programmspeicher

- enthält auszuführenden Code des Prozesses
- Maschinenbefehle
- abgelegt in geschütztem Speicherbereich

### Bestandteile

- Programmkontext: kleiner Speicherbereich für Aufrufparameter und Umgebungsvariablen
- Maschinencode: Maschinenbefehle, durch Compiler  und Linker aus Programmcode erzeugt
- Statische Daten: statisch reservierte Bereiche für variablen und Konstanten des Programms
- Heap: dynamischer Speicher, der während Laufzeit genutzt werden kann
- Laufzeitstack: dynamischer Speicher, für Daten für Unterprogrammaktivierungen

## Prozessdeskriptor

- Datenstruktur des Systemkerns
- Beinhaltet Metadaten des Prozesses
- "beschriebt den Prozess"
- Eindeutige Prozessidentifikation 
- Zustand
- Zugriffsrechtsdeskriptor
- Dateideskriptor
- Priorität
- Ressourcenverbrauch
- Hauptspeicherdeskriptor
- Maschinenzustand