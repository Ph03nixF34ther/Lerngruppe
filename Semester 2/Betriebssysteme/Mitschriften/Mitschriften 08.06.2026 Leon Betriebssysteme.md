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

## Entwurf sicherer Systeme

- Welche Ansprüche stellen wir an ein sicheres System?
	- Zero Trust-Software
	- Defense In Depth
	- Attach Surface Reduction
	- Resilience
	- Secure By Default
	- Least-Priviledge
- Worauf würden Sie zugunsten der Sicherheit verzichten?
	- Austausch von Dateien
	- Austausch von Datenträgern
	- Applets auf Webseiten
	- Geschwindigkeit
	- Netzwerkverkehr
	- Komfortable Bedienung

## Bell-Lapadula-Modell

- Verfahren zur Sicherung von Vertraulichkeit
- Sicherheitsstufen für Dokumente und Programme
	- Nicht klassifiziert, Vertraulich, Geheim, Streng Geheim, etc.
- Benutzer haben entsprechende Sicherheitsstufen
	- Ersteller setzt --Infos aus Präsentation--
- 
- Betriebssystem muss dieses System beherschen
- Sicherheitsstufe muss mit Benutzer verbunden sein (UID bspw.)
	- muss an alle Kinderprozesse --Infos aus Präsentation--

## BiBa-Modell

- Analog zum BLP, aber Fokus auf Integrität der Daten
- Schutz der Integrität von Daten und Zuständen von Manipulation, Korruption und Verunreinigung
- No Read Down - No Write Up
- Zu streng für praktische Anwendungen
- Lösung: hybride Systeme aus BLP und BiBA

## Digitale Signaturen

- Verwendung einer Prüfsumme (MD5, SHA256, etc.)
	- Quersumme der Programmdateien
- Public-Key-Kryptosystem
	- Nur Inhaber des privaten Schlüssels kann Signatur anfertigen
	- Jeder kann Authentizität prüfen
- Prüfen der Signatur vor dem Programmstart
	- Verhindern des Starts bei fehlerhafter Signaturen
- SecureBoot-Funktion
	- Nur autorisierte Windoes-versionen werden gebootet
- Verwendung eines "Trusted Plattform Module"
	- Prüfung der Signatur in manipulationssicherer Hardware
	- Zusammenarbeit zwischen Hard- und Siftwarehersteller notwendig
	- Notwendig für Windows 11-Installation
- Nachteile von digitalen Signaturen:
	- Restriktion des Softwareangebotes durch den Hardware-Hersteller
	- Hersteller entscheidet im Interesse des Anwenders
	- Sicherheitslücken setzen signierte Patches voraus (mehr Aufwand)
	- Im Standartfall kein Windows 11 auf Rechnern ohne TPM

# Authentifizierung / Autorisierung Authentisierung

## Authentisierung

- Nachweis einer Identität
- z.B. durch Passwort beim Login
- Nachweis einer Identität durch
	- Besitz (z.B. Schlüsselkarte)
	- Wissen (z.B. Passwort)
	- Eigenschaften (z.B. Biometrische daten)

## Authentifizierung

- Prüfung eines Nachweises
- z.B. Prüfung auf Bestehen von Nutzer und Passwort
- 

## Autorisierung

- Gewährung von Zugang zu Privilegien
- z.B. erteilen von Berechtigung für Ordner / Dateien

## Das Kommunikationsmodell

--Infos aus Präsentation--

## Theorie der --Infos aus Präsentation--

## Das Kommunikationsmodell

Konfiguriertes Kommunikationsmodell
- Das konf. K-Modell setzt eine aktive Auseinandersetzung --Infos aus Präsentation--

