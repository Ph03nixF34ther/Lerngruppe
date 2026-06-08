# Qualifikationsziele

Den Studierenden sollen fundierte Kenntnisse vermittelt werden über:
- physikalische Grundlagen der Elektronik
- Aufbau von Halbleiterelementen
- Eigenschaften und Anwendung analoger Halbleiterbauelemente einschließlich Optoelektronikl
- Eigenschaften und Anwendung digitaler Halbleiterbauelemente
- Entwurf und Analyse digitaler Schaltungen
- praktische Anwendung digitaler Schaltungen

Die Studierenden sollen nach Abschluss des Moduls in der Lage sein:
- Das Fachvokabular der Elektronik sicher anzuwenden und mit Fachkollegen sicher über Sachverhalte der Elektronik und Digitaltechnik zu kommunizieren
- Bauelemente der analogen Elektronik und der Digitaltechnik zu verwenden
- elektronische Schaltungen zu analysieren und zu berechnen
- elektronische Schaltungen zu entwerfen und zu dimensionieren
- Messungen an elektronischen Schaltungen zu beherrschen
- Schaltfunktionen in digitale Grundfunktionen umzusetzen
- Schaltnetze und Schaltwerke aufgabenbezogen anzuwenden
- programmierbare Logikbausteine und Halbleiterspeicher zu kennen sowie Digitalschaltungen zu kombinieren

# Literatur

- Tipler, P.A.: Physik für Studierende der Naturwissenschaften und Technik, Springer
- Meschede, D.: Gerthsen Physik, Springer
- Hilleringmann, U.: Silizium-Halbleitertechnologie, Springer
- Momeni, M.: Grundlagen der Mikroelektronik 1, Springer
- Horowitz, P.; Hill, W.: The Art of Electronics, Cambridge
- Zastrow, D.: Elektronik, Springer
- Tietze, U.; Schenk, Ch; Gamm, E.: Halbleiter-Schaltungstechnik, Springer
- Fricke, K.: Digitaltechnik, Springer
- Gehrke, W.; Winzker, M.; Urbanski, K.; Woitowitz, R.: Digitaltechnik, Springer
- Reinhold, W.: Elektronische Schaltungstechnik, Hanser

# Lehrinhalte

## Elektronik (Nach Modulhandbuch)

1. [[Übersicht - Elektrotechnik|Einführung in die physikalischen Grundlagen der Elektronik]]
2. Struktur der Materie
3. Quanten und Quantenphysikalisches Atommodell
4. Eigenschaften von Festkörpern
5. Halbleiterbauelemente und deren Anwendung
6. Halbleiteraufbau
7. Halbleiterdioden
8. Transistoren und einfache Anwendungen
9. Transistormessschaltungen, Arbeitspunktbestimmung
10. optische Halbleiterbauelemente
11. Operationsverstärker (Grundlagen)

## Elektronik (Nach Prof. Barié)

1. Grundlagen Halbleiter
	1.  Elektrische Leitfähigkeit von Materialien
	2. [[Semester 2/Elektronik/Einträge/Sekundär/Halbleiter]], Eigenleitung
	3. Dotierung von Halbleitermaterialien / Störstellenleitung
	4. Hall-Effekt zum Nachweis der Elektronen-/Löcherleitung
2. pn-Übergang
	1. Durchlass / Sperrrichtung
	2. Sperrschicht, Verarmungszone, Diffusionsspannung
	3. Steuerung der Sperrschicht durch externe Einflüsse: Spannung / Licht
3. Halbleiterkanäle
	1. [[JFET]] 
	2. [[MOSFET]]
4. [[Diode]] als nichtlinearer Widerstand
	1. I-U-Kennlinie (mit Praktikumsversuch)
	2. Differenzieller Widerstand, Ersatzschaltung
	3. Kennlinienlösung einer Reihenschaltung von Diode mit ohm'schen Widerstand
	4. Übertragungskennlinien am Beispiel Diode (für spätere Anwendung bei Transistorschaltungen)
	5. Begrenzerschaltungen mit Dioden
5. Spannungsstabilisierung mit Zenerdioden
	1. Zener-Effekt
	2. Lawiniendurchbruch
	3. Anwendung der unbelasteten Z-Diodenschaltung zur Spannungsstabilisierung, Strombelastbarkeit, Leistungsbetrachtung
	4. Belastete Zener-Diodenschaltung
6. Konstantstromschaltungen mit [[JFET]]
	1. Aufgaben der Konstantstromschaltung
	2. Realisierung mit [[JFET]]
7. [[Transistor|Transistoren]]
	1. Klassifizierung in [[Bipolartransistor]], [[JFET]], [[MOSFET]], [[IGBT]]
	2. [[Bipolartransistor]]
		1. Aufbau, Anschlüsse und Polung (npn, pnp)
		2. Kennlinienaufnahme mit Messschaltung (-> Praktkumsversuch)
		3. Kennlinien (Eingangskennlinie, Stromsteuerkennlinie, Ausgangskennlinienfeld)
		4. Stromverstärkung, differentieller Widerstand
	3. [[JFET|Junction-Feldeffekttransistor]], [[MOSFET|Metalloxid-Halbleiter-Feldeffekttransistor]]
		1. Aufbau, Anschlüsse und Polung (npn, pnp)
		2. Kennlinienaufnahme mit Messschaltung (-> Praktkumsversuch)
		3. Kennlinien (Steuerkennlinie, Ausgangskennlinienfeld)
		4. Stromverstärkung, differentieller Widerstand
	4. Grenzdaten von Transistoren
		1. Spannung
		2. Strom
		3. Leistung/Temperatur
		4. Thermische Schaltungen (Kühlkörper, Wärmewiderstände)
		5. Safe Operating Area
	5. Transistor als Schaltverstärker
		1. Herleitung am Beispiel des Relais
		2. Übersteuerung
		3. Schaltzeichen
		4. Berechnung Schaltverstärker Bipolartransistor
		5. Darlington-Schaltung
		6. Schalten mit MOSFET, High-Side, Low-Side
		7. Schaltung mit induktiven Lasten (Freilaufdiode)
	6. Optokoppler (als lichtgesteuerten  Transistorschalter)
	7. Transistor als (linearer) Verstärker
		1. Grundbegriffe Verstärkertechnik, Frequenzgang, Klirrfaktor
		2. Arbeitspunkteinstellung Bipolartransistorverstärker, Arbeitswiderstand
		3. Verstärkungsvorgang im Kennlinienfeld
		4. Messen der Kennwerte einer Verstärkerschaltung (Leerlaufspannungsverstärkung, Wechselstrom-Eingangswiderstand, Wechselstrom-Ausgangswiderstand)
		5. Berechnen der Kennwerte einer Verstärkerschaltung
		6. Verstärker-Grundschaltungen (Emitterschaltung, Kollektorschaltung, Basisschaltung)
	8. Operationsverstärker
		1. Grundbegriffe (Schaltzeichen, Eingänge, Differenzverstärkung)
		2. Modell Spannungsgesteuerte Spannungsquelle (im Gegensatz zu Bipolartransistor)
		3. Parameter: Eingangswiderstand, Ausgangswiderstand, Frequenzgang, Slew-Rate
		4. Gegenkopplungsprinzip, Rechenregeln, Invertierender Verstärker, Nichtinvertierender Verstärker
		5. Komparator (invertierend, nicht invertierend)
		6. Schmitt-Trigger (invertierend, nicht invertierend)
		7. Weitere Beispielanwendungen: Addierer, Subtrahierer, Integrator, …
	9. Gleichrichterschaltungen (zu M1U und B2U: Praktikum)
		1. Grundbegriffe
		2. Mittelpunktschaltungen (M1U, M2U (kein M3U, weil keine Drehstromkenntnisse)
		3. Brückenschaltungen beschränkt auf B2U (weil keine Drehstromkenntnisse)
		4. Spannungsglättung mit Kondensator
		5. Stabilisierungsschaltungen
			1. Kenngrößen (Restwelligkeit, Netzregelung, Lastregelung)
			2. Serienstabilisierung (Längstransistor)
			3. Spannungsregelung mit Regelverstärker (Längstransistor mit OPV und Z-Diodenreferenz)
## Digitaltechnik

1. Digitale Codierung von Information
2. Verhalten logischer Gatter
3. Schaltungstechnik / Logikfamilien
4. Schaltnetze
5. Schaltwerke (synchron, asynchron)
6. Multiplexer und Codeumsetzer
7. Zähler
8. Schieberegister
9. Digitale Speicher
10. Arithmetische Bausteine
11. Programmierbare Logikbausteine

## Laborpraktika

- Kennlinien von Dioden und Transistoren
- Transistor Grundschaltungen
- Digitale Kodierung
- Digitale Zähler und Speicher