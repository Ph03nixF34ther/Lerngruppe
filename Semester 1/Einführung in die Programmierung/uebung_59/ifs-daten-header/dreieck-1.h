// Anzahl der Gleichungen
#define GL_ANZ 3

// Anzahl der Punkte
#define ANZAHL 300000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 1

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 33, 66, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { 0.5, 0.35, 0.65, 0.009 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0.5, 0.35, 0.65, 0.011 },
    { 0, 0, 0, 0 }
  },
  {
    { 0.5, 0.35, 0.65, 0.007 },
    { 0, 0, 0, 0 },
    { 0.5, 0.35, 0.65, 0.01 },
    { 0, 0, 0, 0 },
    { 0.5, 0.35, 0.65, 0.012 },
    { 0, 0, 0, 0 }
  },
  {
    { 0.5, 0.35, 0.65, 0.008 },
    { 0, 0, 0, 0 },
    { 0.25, 0.15, 0.4, 0.01 },
    { 0, 0, 0, 0 },
    { 0.5, 0.35, 0.65, 0.013 },
    { 0.433013, 0, 0, 0 }
  }
};

// Farbwerte des ersten Punktes:
#define ROT 0
#define GRUEN 255
#define BLAU 0

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  { 100, 100, 100, -50, 100, -50 },
  { 100, 100, 100, 100, -50, -50 },
  { 100, 100, 100, -50, -50, 100 }
};
