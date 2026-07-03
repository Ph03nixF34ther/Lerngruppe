// Erstes C++: Geom. Objekte: Umbau auf Rechteck
//
// Aufruf: rect
//
// Klaus Kusche, 2020

#include <cstdlib>
// Für time(...) im srand(...)
#include <ctime>

#include "sdlinterf.h"

#include "Color.h"
#include "Rechteck.h"

using namespace std;

// Zur Wahl einer zufälligen Geschwindigkeit, die nicht 0 ist:
// Berechne eine Zufallszahl z von -n ... -1 oder 1 ... n (aber nicht 0)
inline int randPM(int n)
{
  // die erste große Klammer liefert 1...n,
  // und die zweite große Klammer liefert 0 oder (n+1)
  return ((rand() % n) + 1) - ((rand() % 2) * (n + 1));
}

int main(void)
{
  srand(time(nullptr));

  sdlInit();

  { 
    Rect r(Color(255, 255, 255), SDL_X_SIZE / 2, SDL_Y_SIZE / 2, 10, 25, 5, 2);

    for (;;) {
      sdlMilliSleep(20);
      // Bei jedem Richtungswechsel: Schrumpfe das Rechteck um 10 %
      if (!r.fly(true)) {
        r.scale(90, 90);
        // Wenn das Rechteck Breite oder Höhe 0 hat:
        // Wieder in die Mitte setzen, zufällige Größe und Geschwindiogkeit geben
        if ((r.getW() == 0) || (r.getH() == 0)) {
          r.setPos(SDL_X_SIZE / 2, SDL_Y_SIZE / 2);
          r.setSize(rand() % 30 + 1, rand() % 30 + 1);
          r.setSpeed(randPM(10), randPM(10));
        }
      }
      sdlUpdate();
    } 
  }

  sdlExit();

  exit(EXIT_SUCCESS);
}

