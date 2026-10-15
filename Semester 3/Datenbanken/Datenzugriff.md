---
aliases:
  - Datenzugriffe
---
 ![[DatenzugriffAblaufSchema.drawio.svg]]

1. Anwendungsprogramm stellt Anforderung an [[Datenbank-Management-System|DBMS]], z.B. in Form von SQL-Anweisung
2. Metadaten für die [[Anfrageverarbeitung]] benötigt
   Danach wird die Anfrage [[Anfrageverarbeitung#Anfrageübersetzung|übersetzt]] und [[Anfrageverarbeitung#Anfrageoptimierung|optimiert]]
3. In den nächsten Schritten werden die benötigten Datenblöcke angefordert
4. Die Pufferverwaltung entscheidet, ob [[Block|Blöcke]] von [[Datenträger|Datenträgern]] gelesen werden müssen und legt die Seitenrahmen fest, in denen die benötigten [[Block|Blöcke]] im Datenbankpuffer zur Verfügung gestellt werden
   Dass Betriebssystem liest, wenn erforderlich, die benötigten Datenblöcke von den Datenträgern und stellt sie zur Verfügung
5. Das [[Datenbank-Management-System|DBMS]] bereitet die benötigten Daten auf und überträgt die aufbereiteten Daten in einen dem Anwendungsprogramm zugeordneten Speicherbereich (User Working Area – UWA)
6. Abschließend liefert das [[Datenbank-Management-System|DBMS]] eine Meldung über die Ausführung der Anforderung und stellt die Daten bereit