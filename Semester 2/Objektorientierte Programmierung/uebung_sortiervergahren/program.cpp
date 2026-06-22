// Verschiedene Sortierverfahren, grafisch dargestellt
//
// Aufruf: gra-sort
//
// Klaus Kusche, 2011, 2025

// für Zufallszahlen und atoi
#include <cstdlib>
#include <ctime>

using namespace std;

#include <wx/string.h>
#include <wx/app.h>
#include <wx/window.h>
#include <wx/frame.h>
#include <wx/dcbuffer.h>
#include <wx/statusbr.h>
#include <wx/button.h> 
#include <wx/choice.h> 
#include <wx/sizer.h> 
#include <wx/event.h>
#include <wx/bitmap.h>
#include <wx/rawbmp.h>

// Anzahl der Elemente im zu sortierenden Array
// == Größe des Grafik-Fensters in Pixel
const int arrSize = 500;
//const int arrSize = 200;

// Alle compUpdInterval Vergleiche wird der Vergleichszähler
// in der Statuszeile aktualisiert
const int compUpdInterval = 5;
// dasselbe für den Vertauschungszähler: Jedesmal aktualisieren
const int swapUpdInterval = 1;

// Verzögerung für den Quicksort in ms (zum besseren Beobachten)
const int qsDelay = 300;

// Auswahlliste für die Initialisierung des Arrays
const wxString initList[] = {
  "Aufsteigend", "Absteigend", "Durcheinander",
  "Fast sortiert", "Sortiert mit Neuen", "Lauter Gleiche"
};
const int initSize = sizeof(initList) / sizeof(initList[0]);

// Auswahlliste für das Sortierverfahren
const wxString sortList[] = {
  "Selection Sort", "Insertion Sort", "Bubblesort",
  "Bi-Bubblesort", "Shellsort", "Heapsort",
  "Quicksort", "Quicksort (verzoegert)",
  "Quicksort (einfaches Part)", "Quicksort (best-of-3 Part)"
};
const int sortSize = sizeof(sortList) / sizeof(sortList[0]);

// Button-Texte für Start-Stop-Button und Exit-Button
const wxString runLabel = "&Run";
const wxString stopLabel = "&Stop";
const wxString quitLabel = "E&xit";

class MyApp final: public wxApp
{
  virtual bool OnInit() override;
};

// Vorab-Deklaration der Klasse MyFrame (benötigt in Grafik)
class MyFrame;

// Klasse für das Grafik-Subfenster: Abgeleitet vom allgemeinen wxWindow
// Enthält auch das zu sortierende Array und die Sortierfunktionen
class Grafik final: public wxWindow
{
  public:
    // Konstruktor mit dem übergeordneten Fenster
    Grafik(MyFrame *parent);

    // Das Grafik-Subfenster darf man nicht kopieren!
    Grafik(const Grafik &orig) = delete;
    Grafik &operator=(const Grafik &orig) = delete;

    // Initialisierungsfunktionen für das Array
    // (zeichnen und zählen nichts!)
    void ascending();
    void descending();
    void random();
    void nearlysorted();
    void appended();
    void allequal();

    // Sortierfunktionen (aktualisieren indirekt mittels Comp und Swap
    // auch die Grafik und die Statuszeile)
    void selSort();
    void insSort();
    void bubbleSort();
    void biBubbleSort();
    void shellSort();
    void heapSort();
    // Bei quicksort:
    // ms ist die Verzögerung: Wenn ms größer 0 ist:
    // vor den beiden rekursiven Aufrufen ein wxMilliSleep(ms) machen!
    // simple wählt den einfacheren Partitions-Algorithmus (wenn true)
    // opt wählt die best-of-3-Ermittlung des Partitionswertes
    void quickSort(int ms, bool simple, bool opt);

    // setzt compCnt und swapCnt auf Null
    void zeroCounters();
    // Aktualisiert die Anzeige der Vergleichszahl / die Vertauschungszahl
    void updateCompCnt(void);
    void updateSwapCnt(void);

  private:
    // Vergleicht data[i] und data[j]
    // Ergebnis < 0, == 0 oder > 0, je nachdem, ob data[i] <, == oder > data[j]
    // aktualisiert die Statuszeile
    int Comp(int i, int j);
    // Vertauscht data[i] und data[j]
    // aktualisiert die Grafik und die Statuszeile
    void Swap(int i, int j);

    // Hilfsfunktion des Heapsort
    void heapify(int left, int right);
    // Rekursive Funktion des Quicksort
    void quick1(int left, int right, int ms, bool simple, bool opt);

    // die eigentliche und einzige Anzeige-Funktion, für Repaint-Events
    void OnPaint(wxPaintEvent &event);

    MyFrame *parent;      // Hauptfenster (zum Anzeigen, Status usw.)

    int compCnt;          // Vergleichszähler
    int swapCnt;          // Vertauschungszähler
    
    int *data;            // Pointer auf zu sortierendes Array
};

// Klasse für das Hauptfenster
class MyFrame final: public wxFrame
{
  public:
    MyFrame();

    // Das Hauptfenster darf man nicht kopieren!
    MyFrame(const MyFrame &orig) = delete;
    MyFrame &operator=(const MyFrame &orig) = delete;

    // wurde der Stop-Button gedrückt?
    bool getStop() { return stop; }
    // Sortieren stoppen (bei Fehlern außerhalb von MyFrame)
    void setStop() { stop = true;}

    // Event Handler
    // Das gesamte Sortieren läuft in einem durch innerhalb von OnRunStop,
    // d.h. die Main Event Loop ist lange Zeit durch OnRunStop blockiert
    // OnRunStop startet für jedes Bildschirm-Update
    //  mit Yield eine Nested Event Loop
    // Die Nested Event Loop aktualisiert den Bildschirm 
    // (im OnPaint-Eventhandler) und prüft auf Stop- und Exit-Button sowie Close
    void OnRunStop(wxCommandEvent &event);
    void OnQuit(wxCommandEvent &event);
    void OnClose(wxCloseEvent &event);
        
    // die Statuszeile
    // Achtung, Initialisierungsreihenfolge: status *vor* grafik!
    wxStatusBar *status;

  private:
    // das Grafik-Subfenster
    Grafik *grafik;
    // Auswahl-Pulldown der Initialisierungsfunktion und der Sortierfunktion
    wxChoice *initChoice, *sortChoice;
    // Buttons "Starten/Stoppen" und "Beenden"
    wxButton *RunStop, *Quit;

    // für das Button-Handling:
    // Die Button-Events landen eventuell in einer geschachtelten Event-Loop
    // und müssen das an den Event-Handler in der Haupt-Event-Loop melden
    bool running;         // Sortieren läuft gerade
    bool stop;            // Sortieren soll stehenbleiben
    bool quit;            // Programm soll sich beenden
};

// für die Buttons, auch als Exception-Werte benutzt
enum Button {
  ID_Quit = 1,
  ID_RunStop,
};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
  srand(time(nullptr));
  
  MyFrame *frame = new MyFrame();
  frame->Show(true);
  SetTopWindow(frame);
  
  return true;
} 

//=============================================================================

MyFrame::MyFrame() :
  wxFrame(nullptr, -1, "Sortierverfahren"),  // Vaterklassenkonstruktor
  status(CreateStatusBar()),
  grafik(new Grafik(this)),  // neues Grafik-Subfenster anlegen
  initChoice(new wxChoice(this, -1, wxDefaultPosition, wxDefaultSize,
                          initSize, initList)),
  sortChoice(new wxChoice(this, -1, wxDefaultPosition, wxDefaultSize,
                          sortSize, sortList)),
  RunStop(new wxButton(this, ID_RunStop, runLabel)),
  Quit(new wxButton(this, ID_Quit, quitLabel)),
  running(false),
  stop(false),
  quit(false)
{
  wxBoxSizer *mainsizer = new wxBoxSizer(wxVERTICAL);
  wxBoxSizer *buttonsizer1 = new wxBoxSizer(wxHORIZONTAL);
  wxBoxSizer *buttonsizer2 = new wxBoxSizer(wxHORIZONTAL);

  buttonsizer1->Add(initChoice, 1, wxALL | wxALIGN_CENTER, 5);    
  buttonsizer1->Add(sortChoice, 1, wxALL | wxALIGN_CENTER, 5);    
  buttonsizer2->Add(RunStop, 1, wxALL | wxALIGN_CENTER, 5);    
  buttonsizer2->Add(Quit, 1, wxALL | wxALIGN_CENTER, 5);    
  mainsizer->Add(0, 0, 1);  // vertikaler Füller, damit das Bild mittig ist
  mainsizer->Add(grafik, 0, wxALL | wxALIGN_CENTER, 5);
  mainsizer->Add(0, 0, 1);  // vertikaler Füller, damit das Bild mittig ist
  mainsizer->Add(buttonsizer1, 0, wxEXPAND);
  mainsizer->Add(buttonsizer2, 0, wxEXPAND);
  SetSizerAndFit(mainsizer);

  initChoice->SetSelection(2);  // default: Random
  sortChoice->SetSelection(0);  // default: Selection Sort
  
  status->SetFieldsCount(2);

  Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MyFrame::OnQuit, this, ID_Quit);
  Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MyFrame::OnRunStop, this, ID_RunStop);
  // für das X rechts oben in der Titlebar
  // abfangen, weil sonst bei nested Event Loops komische Dinge passieren
  Bind(wxEVT_CLOSE_WINDOW, &MyFrame::OnClose, this); 
}

void MyFrame::OnRunStop(wxCommandEvent &WXUNUSED(event))
{
  if (running) {
    // Aufruf während das Sortieren läuft,
    // also in einer nested Event Loop innerhalb von Yield
    // ==> sag dem laufenden Sortieren, dass es enden soll
    stop = true;
    return;
  }

  // Nicht running: starte das Sortieren
  // ==> setze running, damit man sieht, dass gerade ein Sortieren läuft
  running = true;

  try {  // fängt Stop-Events
    // aus dem Run-Button wird ein Stop-Button
    RunStop->SetLabel(stopLabel);
    // um Probleme im Yield zu vermeiden,
    // drehen wir andere GUI-Elemente ab, solange das Sortieren läuft
    initChoice->Disable();
    sortChoice->Disable();

    grafik->zeroCounters();

    // Array data mit ausgewählter Verteilung initialisieren
    switch (initChoice->GetSelection()) {
      case 0: grafik->ascending(); break;
      case 1: grafik->descending(); break;
      case 2: grafik->random(); break;
      case 3: grafik->nearlysorted(); break;
      case 4: grafik->appended(); break;
      case 5: grafik->allequal(); break;
      default:
        status->SetStatusText("Internal error: Invalid init function");
        throw ID_RunStop;
    }

    // ursprünglichen Zustand des Arrays anzeigen
    grafik->Refresh();  // Repaint-Event auslösen
    wxYield();          // und anstehende Events abarbeiten
    
    if (stop) throw ID_RunStop;

    // Array data sortieren
    switch (sortChoice->GetSelection()) {
      case 0: grafik->selSort(); break;
      case 1: grafik->insSort(); break;
      case 2: grafik->bubbleSort(); break;
      case 3: grafik->biBubbleSort(); break;
      case 4: grafik->shellSort(); break;
      case 5: grafik->heapSort(); break;
      case 6: grafik->quickSort(0, false, false); break;
      case 7: grafik->quickSort(qsDelay, false, false); break;
      case 8: grafik->quickSort(0, true, false); break;
      case 9: grafik->quickSort(0, false, true); break;
      default:
        status->SetStatusText("Internal error: Invalid sort function");
        throw ID_RunStop;
    }

    // finale Zählerstände anzeigen
    // (werden nicht bei jeder Änderung aktualisiert)
    grafik->updateCompCnt();
    grafik->updateSwapCnt();
  } catch(Button b) {  // fängt Exceptions als Folge von Stop oder Exit
    // nothing to do
  }
  
  initChoice->Enable();
  sortChoice->Enable();
  RunStop->SetLabel(runLabel);

  running = false;
  stop = false;

  // der Exit-Button wurde gedrückt ==> Programm beenden
  if (quit) {
    Close();
  }
}

void MyFrame::OnQuit(wxCommandEvent &WXUNUSED(event))
{
  // Close innerhalb von Yield macht komische Dinge...
  if (running) {
    // Aufruf während das Sortieren läuft, also innerhalb von Yield
    // ==> sag dem laufenden Sortieren, dass es enden soll
    stop = quit = true;
    return;
  }
  // nicht running, also in der Main Event Loop: Direkt beenden
  Close(true);
}

void MyFrame::OnClose(wxCloseEvent &event)
{
  // aus der wx-Doku...
  if (running && event.CanVeto()) {
    // Aufruf während das Sortieren läuft, also innerhalb von Yield
    // ==> sag dem laufenden Sortieren, dass es enden soll
    stop = quit = true;
    event.Veto();  // ... aber ignoriere diesen Close-Event!
    return;
  }
  // nicht running, also in der Main Event Loop:
  // Event an den Default-Close-Handler weiterreichen
  event.Skip();    
}

//=============================================================================

Grafik::Grafik(MyFrame *mainFrame) :
// Wegen SetBackgroundStyle: Leerer Standard-Konstruktor + unten Create
//  wxWindow(mainFrame, -1, wxDefaultPosition, wxDefaultSize,
//           wxFULL_REPAINT_ON_RESIZE),
  wxWindow(),
  parent(mainFrame),
  compCnt(0),
  swapCnt(0),
  data(new int[arrSize])
{
  SetBackgroundStyle(wxBG_STYLE_PAINT); // für wxAutoBufferedPaintDC
  Create(mainFrame, -1, wxDefaultPosition, wxDefaultSize,
         wxFULL_REPAINT_ON_RESIZE);

  // setze fixe Fenstergröße
  // wir zeichnen keine einzelnen Pixel, sondern 3x3 Rechtecke
  // ==> wir brauchen um 2 Pixel mehr Platz
  SetMinSize(wxSize(arrSize + 2, arrSize + 2));
  SetMaxSize(wxSize(arrSize + 2, arrSize + 2));

  Bind(wxEVT_PAINT, &Grafik::OnPaint, this); 

  
  random();   // initialisiere das Array auf "zufällig"
  Refresh();  // und stelle sicher, dass ein Repaint erfolgt
}

// durch wxEVT_PAINT aufgerufene Repaint-Methode bei Resize usw.
void Grafik::OnPaint(wxPaintEvent &WXUNUSED(event))
{
  // aus Performance-Gründen
  // (mehr als doppelt so schnell wie DrawRectangle usw.):
  // Wir zeichnen direkt in eine Bitmap
  // und zeigen dann die Bitmap im Grafik-Subfenster an

  // die Bitmap muss jedes Mal frisch angelegt werden,
  // nicht zwischen den Aufrufen aufheben!
  wxBitmap bitmap(arrSize + 2, arrSize + 2, 24);
  wxNativePixelData pixels(bitmap);  // die eigentlichen Pixel von bitmap
  if (!pixels) {
    parent->status->SetStatusText
      ("Internal error: Native bitmaps not supported?");
    parent->setStop();
    return;
  }
  // Iterator auf das erste Pixel von bitmap (links oben)
  const wxNativePixelData::Iterator origin(pixels);

  // alle Pixel in der Bitmap weiß machen
  wxNativePixelData::Iterator row = origin;
  for (int y = 0; y < arrSize + 2; ++y)
  {
    wxNativePixelData::Iterator p = row;
    for (int x = 0; x < arrSize + 2; ++x, ++p)
    {
      p.Red() = 255;
      p.Green() = 255;
      p.Blue() = 255;
    }
 
    row.OffsetY(pixels, 1);
  }

  // für jedes data-Element ein schwarzes Rechteck zeichnen
  for (int i = 0; i < arrSize; ++i) {
    // row auf die linke obere Ecke des Rechtecks setzen
    // Koordinaten-Ursprung ist oben, nicht unten ==> y umdrehen!
    // data-Werte sind zwischen 0 und (arrSize - 1)
    row = origin;
    row.Offset(pixels, i, (arrSize - 1) - data[i]);

    for (int y = 0; y < 3; ++y)
    {  
      wxNativePixelData::Iterator p = row;
      for (int x = 0; x < 3; ++x, ++p)
      {
        p.Red() = 0;
        p.Green() = 0;
        p.Blue() = 0;
      }
   
      row.OffsetY(pixels, 1);
    }
  }
  
  wxAutoBufferedPaintDC dc(this);
  dc.DrawBitmap(bitmap, 0, 0);
}

int Grafik::Comp(int i, int j)
{
  ++compCnt;
  if (compCnt % compUpdInterval == 0) {
    updateCompCnt();  // macht eventuell Yield
  }

  // Unsere Daten sind zwischen 0 und (arrSize - 1)
  // Beim - tritt daher kein Überlauf auf.
  return data[i] - data[j];
}

void Grafik::Swap(int i, int j)
{
  ++swapCnt;
  if (swapCnt % swapUpdInterval == 0) {
    updateSwapCnt();
  }

  // Vertauschung mit sich selbst ==> nichts tun!
  if (i == j) return;

  int tmp = data[i];
  data[i] = data[j];
  data[j] = tmp;

  // geänderte Daten anzeigen
  Refresh();  // Repaint-Event auslösen
  wxYield();  // und anstehende Events abarbeiten

  // wurde inzwischen der Stop-Button gedrückt?
  if (parent->getStop()) throw ID_RunStop;
}

void Grafik::zeroCounters()
{
  compCnt = swapCnt = 0;
  updateCompCnt();
  updateSwapCnt();
}
  
void Grafik::updateCompCnt(void)
{
  wxString txt = "Vergleiche: ";
  txt << compCnt;
  parent->status->SetStatusText(txt, 0);
  // vorsichtshalber auf anstehende Button-Events prüfen
  // sonst kann man sort's mit vielen Vertauschungen, aber ohne Vergleiche
  // nicht abbrechen!
  wxYield();
  if (parent->getStop()) throw ID_RunStop;
}

void Grafik::updateSwapCnt(void)
{
  wxString txt = "Vertauschungen: ";
  txt << swapCnt;
  parent->status->SetStatusText(txt, 1);
  // Yield und Abbruch-Test in Swap
}

//=============================================================================

void Grafik::ascending()
{
  for (int i = 0; i < arrSize; ++i) {
    data[i] = i;
  }
}

void Grafik::descending()
{
  for (int i = 0; i < arrSize; ++i) {
    data[i] = (arrSize - 1) - i;
  }
}

void Grafik::random()
{
  for (int i = 0; i < arrSize; ++i) {
    data[i] = i;
  }
  for (int i = arrSize - 1; i > 0; --i) {
    int j = rand() % (i + 1);
    int tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
  }
}

void Grafik::nearlysorted()
{
  for (int i = 0; i < arrSize; ++i) {
    data[i] = i;
  }
  for (int k = 0; k < arrSize / 5; ++k) {
    int i = rand() % (arrSize - 20);
    int j = i + rand() % 20;
    int tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
  }
}

void Grafik::appended()
{
  for (int i = 0; i < arrSize; ++i) {
    data[i] = i;
  }
  for (int k = 0; k < arrSize / 20; ++k) {
    int i = rand() % (arrSize - 1);
    int tmp = data[i];
    for (int j = i + 1; j < arrSize; ++j) {
      data[j - 1] = data[j];
    }
    data[arrSize - 1] = tmp;
  }
}

void Grafik::allequal()
{
  for (int i = 0; i < arrSize; ++i) {
    data[i] = arrSize / 2;
  }
}

//=============================================================================

void Grafik::selSort()
{
  ////// Hier fehlt Sortieren durch Auswählen
  for (int i = 0; i < arrSize-1; i++) {
    int min_p = i;
    for (int p = i; p < arrSize; p++) {
      if (Comp(min_p, p) > 0) {
        min_p = p;
      }
    }
    Swap(min_p, i);
  }
}

void Grafik::insSort()
{
  ////// Hier fehlt Sortieren durch Einfügen
  for (int i = 1; i < arrSize; i++){
    int k = i;
    while (k > 0 && Comp(k, k-1) < 0) {
      Swap(k, k-1);
      k--;
    }
  }
}

void Grafik::bubbleSort()
{
  ////// Hier fehlt der Bubblesort
  // (ich habe die verbesserte Variante
  // mit Merken der Position der letzten Vertauschung implementiert,
  // weil sie im Schnitt nur halb so viele Vergleiche macht)
  int sorted = 0;

  for (int i = 0; i < arrSize; i++) {
    sorted = 1;
    for (int j = 1; j < arrSize-i; j++) {
      if (Comp(j, j-1) < 0) {
        Swap(j, j-1);
        sorted = 0;
      }
    }
    if (sorted) break;
  }
}

void Grafik::biBubbleSort()
{
  ////// Hier fehlt der bidirektionale Bubblesort (= "Shakersort")
  // (ebenfalls wieder mit Merken der Grenze an beiden Enden)
  int sorted = 0;

  for (int i = 0; i < arrSize; i++) {
    sorted = 1;
    for (int j = i+1; j < arrSize-i; j++) {
      if (Comp(j, j-1) < 0) {
        Swap(j, j-1);
        sorted = 0;
      }
    }
    for (int j = arrSize-i; j < i+1; j++) {
      if (Comp(j, j-1) < 0) {
        Swap(j, j-1);
        sorted = 0;
      }
    }
    if (sorted) break;
  }
}

void Grafik::shellSort()
{
  // Eine gute Abstandsfolge aus der Literatur, 0 ist Ende-Markierung
  int dist[] = { 3709, 1195, 385, 124, 40, 13, 4, 1, 0 };
  ////// Hier fehlt der Shellsort mit den oben angegebenen Distanzen
}

// Die übliche Hilfsfunktion für den Heapsort:
// Betrachte a[left]...a[right] als Teil eines Heaps a[0]...a[right]
// a[left+1]...a[right] muss schon ein korrekter Heap sein,
// Die Funktion lässt a[left] an die richtige Stelle im Heap "einsickern"
// Achtung:
// heapify wird mit Array-Indices left und right
// im Bereich 0 ... arrSize - 1 aufgerufen
// Gedanklich (für die Berechnung des Sohn-Index) müssen wir das
// auf den Bereich Index 1 ... arrSize umrechnen (+1)
// und dann wieder zurück (-1)
void Grafik::heapify(int left, int right)
{
  ////// Zu implementieren!
}

void Grafik::heapSort()
{  
  ////// Hier fehlt der Heapsort
}

// Die übliche rekursive Hilfsfunktion für den Quicksort:
// Sortiere die Elemente zwischen left und right (jeweils inklusive)
// ms ist die Verzögerung: Wenn ms größer 0 ist:
// vor den beiden rekursiven Aufrufen ein wxMilliSleep(ms) machen!
// simple wählt den einfacheren Partitions-Algorithmus (wenn true)
// opt wählt das Partitions-Element mit "middle of three"-Methode (wenn true)
void Grafik::quick1(int left, int right, int ms, bool simple, bool opt)
{
  ////// Zu implementieren!
}

void Grafik::quickSort(int ms, bool simple, bool opt)
{
  quick1(0, arrSize - 1, ms, simple, opt);
}
