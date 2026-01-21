// Kleines Grafik-Demo-Beispiel: Weihnachtsbaum
//
// Aufruf: weihn-baum
//
// Klaus Kusche, 2010

#include "sdlinterf.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const int mitteX = SDL_X_SIZE / 2; // Bildmitte in X-Richtung

  sdlInit();
  sdlSetBlack();

  // ganz unten: Stamm
  sdlDrawCirc(mitteX, SDL_Y_SIZE - 20, 50, 15, 128, 64, 0);
  // darüber: Pyramidenförmige Ellipsen   
  for (int y = 40;  y < SDL_Y_SIZE - 20; y = y + 50) {
    sdlDrawCirc(mitteX, y, y / 2, 30, 0, 255, 0); // eine Ebene Äste
  }

  sdlUpdate();
  sdlMilliSleep(3000);
  sdlExit();

  exit(EXIT_SUCCESS);
}
