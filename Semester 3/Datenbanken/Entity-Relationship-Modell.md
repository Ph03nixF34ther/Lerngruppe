1976 von P.P. Chen

Modell zur Darstellung von Objektklassen und deren Beziehungen

Besteht aus:

- [[Entity|Entities (Objekte, Entitäten)]] 
- [[Relationship|Relationship (Beziehungen)]]
- [[Attribut|Attribute (Eigenschaften, Merkmale)]]

Beispiel:

![[EntityRelationshipBeispiel.drawio.svg]]

Daraus entstehende Tabellen:

Halter($\underline{\text{HalterNr}}$, Name, Vorname, Adresse)
Kfz($\underline{\text{FahrgestNr}}$, Typ, Farbe)
Haltschaft($\underline{\text{HNr}}$, HalterNr, FahrgestNr, Kennzeichen)
