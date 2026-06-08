# Sicherheit in IT-Systemen

## Arten von Schädlingen

### Trojaner

- Abgeleitet vom Trojanischen Pferd
- Software verschleiert den eigentlichen Inhalt
- Führt Schadsoftware im Hintergrund aus
- Mitunter schwer zu entdecken

### Würmer

- Verbreiten sich aktiv über Netzwerkverbindungen (Kopieren und Ausführen)
- Nutzt Hilfsprograme zur Verbreitung (E-Mail-Programme bspw.)
- Benötigt keine Wirtdateien (vgl. Viren)
- Verbreitung über Wechselmedien möglich
- Nutzt Sicherheitslücken --Infos aus Präsentation--
- 
- Erster Wurm Morris von Robert Tappen Morris (2. November 1988)
- Wurde ohne Schadhaften Zweck entwickelt
- Verwendung einer Remote Shell zur Vervielfältigung des Wurms
- Verursachte passiv Schäden durch Überlastung von Systemen
- Verwendung von zwei Programmen (Vektor und Request)

### Phishing

- Abgeleitet von Fishing / Angeln
- Nachahmung von vertrauenswürdigen Internetseiten / Oberflächen
- Ziel sind persönliche Daten / Login-Informationen
- Oftmals der erste Schritt bei Cyberkriminalität (Übernahme einer fremden Identität)
- Idee des Phishing ist so alt wie die Telefonie

## Angriffswege

### Angriffe von Innen

#### Exploits

- engl. "ausnutzen"
- Systematische Möglichkeit, Schwachstellen ausnutzen
- Softwareseitiger Bestandteil eines Programms
- "Zero-Day-Exploits" als Sicherheitslücke vor "Day-One-Patch"
- Wird oftmals mit guter Absicht zum --Infos aus Präsentation--

#### Spoofing-Tools

- engl. "Täuschung"
- Ursprung im fälschen von IP-Paketen (Verwendung einer vertrauenswürdigen Source-Adresse)
- Manipulation von Authentifizierungs- und Identifikationsverfahren
- Verschleiern der eigenen Identität im Internet

#### Pufferüberlauf

- Verwendung einer Schwachstelle der C-Programmierung
- Keine automatische Kontrolle von Array-Größen
- Fremder Code kann si manipuliert werden
- Bsp.: Heartbleed-Bug, Xbox-Hack 2003

#### Backdoors

- Verwendung von Falltüren / Hintertüren in Prorammen
- Werden genutzt, um Kontrollmechanismen zu umgehen
- Kleine Änderungen fallen oft nicht auf
- Oft blindes Vertrauen in System-Software
- Lösung: Code-Reviews

--Infos aus Präsentation--

## Verdeckte Kanäle

- Verwendung von parasitäre Kommunikationskanälen
- Nutzung von Bandbreite eines legitimen Kommunikationskanales, um Informationen zu Übermitteln
- Verdeckte Kanäle können praktisch nicht ausgeschlossen oder verhindert werden
- Verwendung mehrerer Kanäle
	- Zeitkanal
	- Speicherkanal
- Bekanntes Beispiel: Steganographie
	- Einbringen von Textinformationen in Datensatz von Bildern oder Audio-Dateien
	- Verschlüsselte Daten werden in Bits der RGB-daten eingebunden
	- Keine Unterscheidung von 7- zu 8-Bit Bildern
	- ca. 295 KB in 1024x769 großen Bildern

Verwendung des Zeitkanals:
- Ausführung von Dateioperationen nach einem gewissen Muster
- Übermitteln von binären Informationen
- Verhalten nur --Infos aus Präsentation--
- Voraussetzung
	- Verhalten von Angreifern weicht von dem des Nutzers ab
- Ansätze 
	- Analyse des Verhalten des Anwenders
	- Definition eines Schwellenwertes
	- Verwendung von Audit-Protokollen