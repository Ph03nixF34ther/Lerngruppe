// Erstes C++: Geom. Objekte: Punkt
//
// Aufruf: point
//
// Klaus Kusche, 2020

// Die C++-Version von stdlib.h (u.a. für exit(...) )
#include <cstdlib>
// Wir haben kein Terminal-I/O, daher brauchen wir <iostream> nicht.

// Der Header für meine Grafik-Funktionen
// Im selben Verzeichnis wie der aktuelle File, daher "", nicht <>
#include "sdlinterf.h"

// damit wir die Funktionen aus <cstdlib> ohne std::... aufrufen können
using namespace std;

#define NUMBER_OF_SQUARES 100

// Eine Klasse, deren Objekte Farben (rot/grün/blau-Werte) darstellen
class Color
{
  // Den Konstruktor und die 3 Get-Methoden darf man überall aufrufen
  public:   
    // Konstuktor: Wird mit Farbwerten aufgerufen
    // und speichert die Farbwerte in den Member-Variablen des neuen Objektes.
    // Das sollte man mit einer Initialisierungsliste machen
    // (==> nächste Übung!).
    //
    // Dieser Konstruktur ist trickreich:
    // Er kann mit Farbwerten aufgerufen werden,
    // aber dient auf Grund der Default-Werte zugleich
    // als Standard-Konstruktor *ohne* Parameter.
    // Dann werden alle Farben per Default auf 0 gesetzt (schwarz).
    //
    // Color braucht unbedingt einen Standard-Konstruktor:
    // Sobald ein neues GraObj-Objekt angelegt wird, wird sein Color-Member mRGB
    // automatisch mittels Standard-Konstruktor initialisiert,
    // noch *bevor* der GraObj-Konstruktor dann die richtige Farbe hineinkopiert.
    Color(int r = 0, int g = 0, int b = 0)
    {
      mR = r; mG = g; mB = b;
    }
      
    // Destruktor brauchen wir keinen, der "automatische" genügt uns.

    // get-Methoden: Liefere den rot / grün / blau-Anteil der eigenen Farbe
    // (weil ja kein direkter Zugriff von außen auf die Member möglich ist).
    // Brauchen keine Parameter,
    // weil sie die Farben des eigenen Objektes liefern sollen,
    // und das eigene Objekt "this" wird jeder Methode automatisch mitgegeben.
    // Das komische "const" zwischen ) und { heißt,
    // dass das eigene Objekt (das "this") beim Aufruf unverändert bleibt,
    // d.h. dass die Methode die Werte in den eigenen Membern nicht ändert.
    int getR() const { return mR; }   // ist dasselbe wie { return this->mR; }
    int getG() const { return mG; }
    int getB() const { return mB; }

    // set-Methoden haben wir keine,
    // also kann man ein Farb-Objekt nicht mehr nachträglich ändern
    // (man muss stattdessen ein neues machen).

  // Kein Zugriff von klassenfremdem Code auf mR, mG, mB
  private:   
    // Member-Variablen:
    // Der Farbwert für rot, grün und blau in jedem Farb-Objekt
    // Dass sie m... heißen, ist nicht Pflicht, aber es ist sinnvoll,
    // damit sich Member auf einen Blick von anderen Variablen unterscheiden.
    int mR, mG, mB;
};  // wie bei Strukturen: ';' nicht vergessen!

// Und jetzt unsere Klasse für Punkte
class GraObj
{
  public:
    // Konstruktor wie oben: Lege einen neuen Punkt an und merke dir
    // seine Farbe, Position und Fluggeschwindigkeit in seinen Membern.
    // Objekte (hier: color) werden normalerweise
    // wenn möglich als Referenz übergeben!
    // Die Fluggeschwindigkeit kann man beim Aufruf weglassen,
    // dann wird 0 als Fluggeschwindigkeit gespeichert
    GraObj(const Color &color, int x, int y, int sx = 0, int sy = 0, int width = 10, int height = 10)
    {
      mRGB = color;       // Das Color-Parameter-Objekt wird
                          // in das eigene Color-Member-Objekt hineinkopiert
      mX = x; mY = y;     // ... und die anderen Parameter auch in die Member
      mSX = sx; mSY = sy; 
      mW = width; mH = height;
      draw();             // Zeichne den Punkt gleich beim Anlegen des Objektes.
    }
    // Destruktor:
    // Lösche den angezeigten Punkt beim Freigeben des Objektes vom Bildschirm
    ~GraObj() { undraw(); }

    // get-Methoden wie oben
    Color getColor() const { return mRGB; }
    int getX() const { return mX; }
    int getY() const { return mY; }
    int getSX() const { return mSX; }
    int getSY() const { return mSY; }
    int getW() const { return mW; }
    int getH() const { return mH; }

    // eine set-Methode, die ein neues Farb-Objekt im Punkt speichert
    // (und ihn auch gleich frisch zeichnet).
    void setColor(const Color &color)
    {
      mRGB = color;
      draw();         // das ist dasselbe wie this->draw();
                      // d.h. ruft draw für den eigenen Punkt auf
    }

    // ändere die Flugrichtung bzw. Flugeschwindigkeit
    void setSpeed(int sx, int sy)
    {
      mSX = sx; mSY = sy;
    }
    
    // Der Code für die folgenden Methoden steht nicht im class,
    // sondern unten separat (==> wird nicht inline übersetzt)
    
    // Setze den Punkt an die angegebene Position
    void setPos(int x, int y);
    // Verschiebe den Punkt um die angegebene Anzahl von Pixeln
    void move(int dx, int dy);

    // Lass den Punkt gemäß seinem mSX und mSY einen Schritt fliegen
    // Wenn bounce true ist, wird der Punkt vom Rand zurückgeworfen
    // Wenn es false ist, bleibt der Punkt stehen, wenn er über den Rand käme
    // Returnwert: true wenn der Punkt normal geflogen ist
    // false wenn er am Rand ansteht bzw. abgeprallt ist
    bool fly(bool bounce = true);

    // Zeichne den eigenen Punkt
    void draw();
    // ... und lösche ihn wieder weg
    // (zeichne an Stelle des Punktes ein schwarzes Pixel).
    void undraw();

  private:
    Color mRGB;  // Jedes Punkt-Objekt enthält ein Farb-Objekt als Member
                 // (wirklich das Farb-Objekt selbst,
                 // nicht eine Referenz oder einen GraObjer
                 // auf ein anderswo gespeichertes Objekt).
    int mX, mY;  // Jedes Punkt-Objekt merkt sich seine x- und y-Koordinate
    int mSX, mSY;  // "SpeedX" und "SpeedY": Um wie viele Pixel 
                   // bewegt sich der Punkt bei jedem "fly()"?
    int mH, mW;   // Width and Height
};

int main(void)
{
  sdlInit();  // Grafik-Fenster aufmachen

  GraObj *objects[NUMBER_OF_SQUARES];

  // Hier braucht man eigene { } um die Punkt-Variablen,
  // damit die Punkt-Objekte am Ende der { }
  // wieder automatisch freigegeben werden,
  // *bevor* die SDL mit sdlExit abgedreht wird
  // (sonst würde der Destruktor des Punktes p am Programmende versuchen,
  // den Punkt mit undraw() zu löschen, obwohl das Grafik-Fenster schon weg ist
  // ==> Absturz!)
  { 
    // In der folgenden Zeile stecken gleich 2 Konstruktor-Aufrufe:
    // * Zuerst wird mit Color(...) ein Objekt der Klasse Color angelegt.
    //   Es ist anonym (kein Name, keine eigene Variable)
    //   und temporär (wird als Parameter an den GraObj-Konstruktor übergeben
    //   und verschwindet dann gleich wieder).
    // * Dann wird eine neue Variable p angelegt,
    //   die ein Objekt der Klasse GraObj enthält,
    //   Dieser Punkt p wird durch den Aufruf des Konstruktors
    //   auf "weiß" und "Fenster-Mitte" initialisiert.
    // GraObj p(Color(255, 255, 0), SDL_X_SIZE / 2, SDL_Y_SIZE / 2, 2, 1);

    for (int i = 0; i < NUMBER_OF_SQUARES; i++) {
	int colorR = rand() % 255;
	int colorG = rand() % 255;
	int colorB = rand() % 255;
	int velX = rand() % 25 - 12;
	int velY = rand() % 25 - 12;
	int pos_off_x = rand() % 50-25;
	int pos_off_y = rand() % 50-25;
	int x = SDL_X_SIZE / 2 + pos_off_x;
	int y = SDL_Y_SIZE / 2 + pos_off_y;
	objects[i] = new GraObj(Color(colorR, colorG, colorB), x, y, velX, velY, 6, 6);
    }
    
    for (;;) {
      sdlMilliSleep(20);   // "Bremse"
      
      for (int i = 0; i < NUMBER_OF_SQUARES; i++) {
	objects[i]->fly(true);
      }      
     sdlUpdate();    // die von fly intern ausgeführten Grafik-Operationen
                      // wirklich auf dem Bildschirm anzeigen
    } 
  }

  sdlExit();  // Grafik-Fenster zumachen

  exit(EXIT_SUCCESS);
}

// Wenn man Methoden außerhalb des class deklariert,
// muss man den Klassennamen mit :: davorschreiben,
// damit der Compiler weiß, zu welcher Klasse die Methodendefinition gehört
// (weil es ja mehrere Methoden mit gleichem Namen *und* gleichen Parametern
// in mehreren verschiedenen Klassen geben dürfte!):
// "das ist die Methode setPos der Klasse GraObj"
void GraObj::setPos(int x, int y)
{
  undraw();  // Lösch den eigenen Punkt an der alten Position weg
  mX = x;    // ... speichere die neuen Koordinaten im eigenen Punkt
  mY = y;
  draw();    // ... und zeichne ihn dort neu
}

// analog zu setPos: 
// Weglöschen, Verschiebung zur internen Position addieren, neu zeichnen
void GraObj::move(int dx, int dy)
{
  undraw();
  mX += dx;
  mY += dy;
  draw();
}
  
bool GraObj::fly(bool bounce)
{
  bool ret = true;
  // Die Ursprungs-Koordinaten (0/0) des SDL-Fensters sind links oben
  // ==> x wächst nach rechts von 0 bis SDL_X_SIZE - 1
  // ==> y wächst nach unten von 0 bis SDL_Y_SIZE - 1
  // Prüfung auf Rand in waagrechter Richtung (x-Richtung): Rand, wenn ...
  // ... der Punkt nach rechts fliegt (mSX > 0) 
  //     und weniger als mSX vom rechten Rand (SDL_X_SIZE) entfernt ist
  // ... oder der Punkt nach links fliegt (mSX < 0)
  //     und weniger als mSX (-mSX weil mSX < 0) vom linken Rand (0) weg ist
  if (((mSX > 0) && (mX >= SDL_X_SIZE - mSX - mW / 2)) ||
      ((mSX < 0) && (mX < mW / 2 - mSX))) {
    // Punkt würde in x-Richtung rausfliegen
    if (bounce) {
      // Vorzeichen der x-Richtung umdrehen ==> Punkt fliegt in Gegenrichtung
      mSX = -mSX;
      ret = false;
    }
    else {
      // nicht fliegen!
      return false;
    }
  }
  // dieselbe Prüfung für die y-Position des Punktes:
  // fliegt nach unten ==> mindestens mSY Abstand vom unteren Rand (SDL_Y_SIZE)
  // fliegt nach oben ==> mindestens -mSY Abstand vom oberen Rand (0)
  if (((mSY > 0) && (mY >= SDL_Y_SIZE - mSY - mH / 2)) ||
      ((mSY < 0) && (mY < mH / 2 - mSY))) {
    if (bounce) {
      mSY = -mSY;
      ret = false;
    }
    else {
      return false;
    }
  }

  move(mSX, mSY);
  return ret;
}

void GraObj::draw()
{
  // Zeichne für das eigene Punkt-Objekt ein Pixel im Grafik-Fenster:
  // * Die Koordinaten sind die,
  //   die im eigenen Punkt-Objekt als Member gespeichert sind.
  // * Die Farb-Werte bekommt man, indem man aus dem eigenen Farb-Member mRGB
  //   (einem Objekt!) dessen rot / grün / blau-Werte mittels get-Methode liest
  //   (weil der direkte Zugriff auf die Farb-Member nicht erlaubt ist)
  sdlDrawRect(mX, mY, mW / 2, mH / 2, mRGB.getR(), mRGB.getG(), mRGB.getB());

}

void GraObj::undraw()
{
  // Weglöschen: Zeichne an der aktuellen eigenen Position ein schwarzes Pixel.
  sdlDrawRect(mX, mY, mH / 2, mW / 2, 0, 0, 0);
}

