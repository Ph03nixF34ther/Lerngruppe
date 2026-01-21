// SDL-Interface-Header für C / C++
//
// Klaus Kusche, 2012, vereinheitlichte Version für alle Beispiele

#ifndef _SDLINTERF_H
#define _SDLINTERF_H

// Breite des Grafik-Fensters (in Pixeln)
#define SDL_X_SIZE 800
// Höhe des Grafik-Fensters (in Pixeln)
#define SDL_Y_SIZE 600

// Ändert die Berechnung des Farbkreises für sdlDrawCyclicPoint:
// Ohne COLOR_WHEEL_... (default) rotiert der Farbkreis
//   zwischen rot, gelb, grün, cyan, blau und lila
// Mit COLOR_WHEEL_RGB rotiert er nur zwischen rot, grün und blau
// Mit COLOR_WHEEL_CMY rotiert er nur zwischen gelb, cyan und lila
// COLOR_WHEEL_CMY ist heller, COLOR_WHEEL_RGB dunkler als die Default-Farben
//#define COLOR_WHEEL_RGB 1
//#define COLOR_WHEEL_CMY 1

#ifdef __cplusplus
extern "C" {
#endif

// Initialisiere die SDL (mach das Grafikfenster auf)
// 
// Sollte im main möglichst bald aufgerufen werden
extern void sdlInit(void);

// Schließe SDL (mach das Grafikfenster wieder zu)
// 
// Sollte im main vor Ende des Programms aufgerufen werden
extern void sdlExit(void);

// Lösche das Grafikfenster (mach alle Pixel schwarz)
// (nur intern, wirklich angezeigt wird erst bei sdlUpdate)
extern void sdlSetBlack(void);

// Zeichne einen Punkt
// (nur intern, wirklich angezeigt wird erst bei sdlUpdate)
//
// x, y   ... Koordinaten
//            (0 / 0 ist links oben, SDL_X_SIZE-1 / SDL_Y_SIZE-1 ist rechts unten)
// r,g,b  ... Farbwerte rot, grün, blau (jeweils 0 ... 255)
extern void sdlDrawPoint(int x, int y, int r, int g, int b);

// Zeichne einen Punkt mit zyklischer Farbe (für Fraktale)
// (nur intern, wirklich angezeigt wird erst bei sdlUpdate)
//
// x, y   ... Koordinaten (wie oben)
// color  ... Farbwert (beliebiger int-Wert,
//            wird in einen zyklischen Farbkreis mit 192 Farben umgerechnet,
//            dessen Farben von NEW_COLOR_WHEEL abhängen.
//            Negative Zahlen ergeben schwarz)
void sdlDrawCyclicPoint(int x, int y, int color);

// Zeichne ein Rechteck mit Mittelpunkt und Ausdehnung
// (nur intern, wirklich angezeigt wird erst bei sdlUpdate).
//
// centerX ... X-Koordinate des Mittelpunktes
// centerY ... Y-Koordinate des Mittelpunktes
// extX    ... Ausdehnung vom Mittelpunkt in X-Richtung in Pixel
// extY    ... Ausdehnung vom Mittelpunkt in Y-Richtung in Pixel
// r,g,b   ... Farbwerte
extern void sdlDrawRect(int centerX, int centerY, int extX, int extY,
                        int r, int g, int b);

// Zeichne ein Rechteck mit zwei gegenüberliegenden Ecken
// (nur intern, wirklich angezeigt wird erst bei sdlUpdate).
//
// X1      ... X-Koordinate einer Ecke
// Y1      ... Y-Koordinate einer Ecke
// X2      ... X-Koordinate der gegenüberliegenden Ecke
// Y2      ... Y-Koordinate der gegenüberliegenden Ecke
// r,g,b   ... Farbwerte
extern void sdlDrawRectFromTo(int X1, int Y1, int X2, int Y2,
                              int r, int g, int b);

// Zeichne eine Linie
// (nur intern, wirklich angezeigt wird erst bei sdlUpdate).
//
// x1, y1, x2, y2  ... Koordinaten des Anfangs- und des Endpunktes, wie oben
// r,g,b           ... Farbwerte rot, grün, blau (jeweils 0 ... 255)
extern void sdlDrawLine(int x1, int y1, int x2, int y2, int r, int g, int b);

// Zeichne eine Ellipse
// (nur intern, wirklich angezeigt wird erst bei sdlUpdate)
//
// centerX ... X-Koordinate des Mittelpunktes
// centerY ... Y-Koordinate des Mittelpunktes
// radX    ... Radius in waagrechter Richtung
// radY    ... Radius in senkrechter Richtung
// r,g,b   ... Farbwerte rot, grün, blau (jeweils 0 ... 255)
extern void sdlDrawCirc(int centerX, int centerY, int radX, int radY,
                        int r, int g, int b);

// Zeichne einen Teil einer Ellipse
// (nur intern, wirklich angezeigt wird erst bei sdlUpdate)
//
// centerX ... X-Koordinate des Mittelpunktes
// centerY ... Y-Koordinate des Mittelpunktes
// radX    ... Radius in waagrechter Richtung
// radY    ... Radius in senkrechter Richtung
// r,g,b   ... Farbwerte rot, grün, blau (jeweils 0 ... 255)
// part    ... Bitmaske, Summe der folgenden Werte:
//             SDL_CIRC_FILLED ... Gefüllte Fläche (sonst nur Rand)
//             SDL_CIRC_UPPER_RIGHT ... Quadrant rechts oben,
//             SDL_CIRC_LOWER_RIGHT ... Quadrant rechts unten,
//             SDL_CIRC_UPPER_LEFT  ... Quadrant links oben,
//             SDL_CIRC_LOWER_LEFT  ... Quadrant links unten
#define SDL_CIRC_FILLED       1
#define SDL_CIRC_UPPER_RIGHT  2
#define SDL_CIRC_LOWER_RIGHT  4
#define SDL_CIRC_UPPER_LEFT   8
#define SDL_CIRC_LOWER_LEFT   16
#define SDL_CIRC_LEFT (SDL_CIRC_UPPER_LEFT | SDL_CIRC_LOWER_LEFT)
#define SDL_CIRC_RIGHT (SDL_CIRC_UPPER_RIGHT | SDL_CIRC_LOWER_RIGHT)
#define SDL_CIRC_UPPER (SDL_CIRC_UPPER_LEFT | SDL_CIRC_UPPER_RIGHT)
#define SDL_CIRC_LOWER (SDL_CIRC_LOWER_LEFT | SDL_CIRC_LOWER_RIGHT)
#define SDL_CIRC_ALL (SDL_CIRC_LEFT | SDL_CIRC_RIGHT)
extern void sdlDrawCircPart(int centerX, int centerY, int radX, int radY,
                            int r, int g, int b, int part);

// Aktualisiere den Bilschirm, führe die ausstehenden Zeichenbefehle aus:
// Alles, was intern gezeichnet wurde, wird ins Grafikfenster kopiert
//
// Sollte einmal nach allen Zeichenbefehlen aufgerufen werden,
// die gemeinsam / auf einmal dargestellt werden sollen
// (d.h. beispielsweise am Ende jedes Schleifenumlaufes
// oder sinnvollerweise vor jedem sdlMilliSleep).
//
// Prüft vor dem Zeichnen auch auf "Ctrl/C"
// und ob rechts oben auf "Fenster schließen" geklickt wurde
extern void sdlUpdate(void);

// Mache eine ms Millisekunden lange Pause.
//
// Achtung: Die Zeitauflösung von Windows ist 17 ms, weniger geht nicht!
//
// Prüft vor dem Schlafen auch auf "Ctrl/C"
// und ob rechts oben auf "Fenster schließen" geklickt wurde
extern void sdlMilliSleep(int ms);

#ifdef __cplusplus
}
#endif

#endif
