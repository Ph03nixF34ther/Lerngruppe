---
aliases:
  - directories
---
Ist ein Datensatz der ein Inhaltsverzeichnis einer Gruppe von Dateien darstellt

Enthält Dateinamen der Gruppe zusammen mit einem Zeiger, der Verzeichniseintrag und Datei verbindet

Interner Aufbau und Behandlung wie reguläre Dateien, außer dass es nur von privilegierten Programmen verwaltet werden darf

Wird wie eine [[Ordinary Files|reguläre Datei]] gelesen, aber Satzstruktur muss bekannt sein, um [[Byte]]-Folge interpretierbar zu machen

Dateiverzeichnisse können wiederum auf neue Dateiverzeichnisse weisen, wodurch eine Baumartige Struktur entsteht, in der jegliche [[Datei|Dateien]] abgelegt werden

Bei vielen [[Inhalte|Betriebssystemen]] in hierarchische Strukturen, genannt Dateibäume, zusammengefasst