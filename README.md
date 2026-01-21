## Inhalt der Lerngruppe

1. Semester
	1. Lineare Algebra (Feldmann)
	2. Einführung in die Programmierung (Kusche)

---

# About

Lerngruppe PIB.
Bei Rückfragen bitte an mich (Elias) wenden.

---

# How-To

## Erklärung

Git ist ein Version Control System was geschaffen wurde, um es Software-Entwicklern zu vereinfachen zusammen an einem Projekt zu arbeiten.
Mehr dazu [hier](https://git-scm.com/about)

Damit haben wir ein Git-Repository erstellt und auf Github hochgeladen.

Github hostet unser Repository für uns (hier bist du gerade) und erleichtert uns das Management.
Mehr dazu [hier](https://github.com/)

Dieses System benutzen wir um unsere Notizen zusammen zu bearbeiten.

Alle unsere Notizen sind in MarkDown geschrieben.

MarkDown ist, in kurz, eine Konvention um Formatierungen zu erlauben und gleichzeitig die Dateien auch in Plaintext lesbar beizubehalten.
Mehr dazu findest du [hier](https://www.markdownguide.org/getting-started/).

Um unsere Notizen zu schreiben nutzen wir [Obsidian](https://obsidian.md/). Das erlaubt uns interne Links zwischen Notizen zu schaffen und eine Art Wiki zu erstellen.
Allerdings sind diese Links Obsidian-Spezifisch.

Damit du unsere Notizen nutzen und (wenn du möchtest) dazu beitragen kannst, ist es von Vorteil Git und Obsidian zu installieren und einzurichten.

Dafür ist dieser Abschnitt.

## Git

### 1. Installation

(Auf Windows demonstriert)

Folge dem [Link](https://git-scm.com/install/) und lade die Datei für dein Betriebssystem herunter

Öffne die Datei und folge den Schritten:

Komponenten können nach eigenem Ermessen gewählt werden.
Die standardmäßigen Einstellungen sollten genügen.

![Git component window](Components.png)

Den standartmäßigen Text-Editor kann ebenfalls frei gewählt werden.
Ich empfehle Nano zu benutzen, weil die Benutzeroberfläche einfach ist und man (nicht wie bei Vim) sofort drauf los schreiben kann oder irgendeinen anderen den du schon installiert (und benutzt) hast.
(Speichern: Strg + O, Schließen (speichert nicht): Strg + X)

![Git Editor Screen](Editor.png)

Der standartmäßigen Branch-Name  kann ebenfalls frei entschieden werden.
Unser Repository benutzt "main", wird aber von dieser Einstellung nicht beeinflusst.

![Git initial branch name Screen](InitialBranchName.png)

PATH-Environment Einstellung sollte so gelassen werden, außer du weißt was du tust.

![Git PATH Environment Screen](PATHEnvironment.png)

SSH-Executable Einstellung sollte auch so gelassen werden, außer du weißt was du tust.
(Beeinflusst unser Vorhaben nicht)

![Git SSH Executable Screen](SSHExecutable.png)

HTTPS transport backend Einstellung sollte ebenfalls so gelassen werden, außer du weißt was du tust.

![Git HTTPS transport backend Screen](HTTPStransport.png)

Die Line Ending Convention Einstellung kann frei gewählt werden, wir empfehlen aber sie so zu lassen.

![Git Line Ending Convention Screen](LineEndingConvention.png)

Die Terminal Emulator Einstellung kann frei gewählt werden, wir empfehlen die MinTTY

![Git Terminal Emulator Screen](TerminalEmulator.png)

Die default git pull Einstellung sollte so gelassen werden, außer du weißt **wirklich** was du tust.

![Git default git pull behavior Screen](DefaultGitPull.png)

Die Git Credential Helper Einstellung kann frei entschieden werden.

![Git Credential helper Screen](CredentialHelper.png)

Die Extra Options können ebenfalls frei gewählt werden, wir empfehlen sie so zu lassen.

![Git Extra options Screen](ExtraOptions.png)

Nun auf installieren und warten bis es fertig ist.

Und fertig! (Mit der Installation)

---

### 2. Setup

Jetzt wo Git installiert ist, können wir im nächsten Schritt das Repository auf dein Gerät laden.

Dafür öffnen wir "Git CMD" (oder welches terminal du gewählt hast) und werden von diesem Fenster begrüßt

![Git CMD Window 1](GitCMDClear.png)

Jetzt navigieren wir zu dem Ordner in dem du die Notizen speichern möchtest.

``` bash
cd <your>/<folder>/<path>/<here>/
```


![Git CMD cd](GitCMDcd.png)

Holen uns den Link zum [Repository](https://github.com/Ph03nixF34ther/Lerngruppe.git) (https://github.com/Ph03nixF34ther/Lerngruppe.git) 

![Github code copy](GithubCopy.png)

Und klonen es mit

``` bash
git clone https://github.com/Ph03nixF34ther/Lerngruppe.git
```




## Obsidian

### 0. Erklärung


### 1. Installation

Folge dem [Link]([https://obsidian.md/](https://obsidian.md/download)) und wähle die für dich passende Version aus

# To-Do-Liste

# Termine