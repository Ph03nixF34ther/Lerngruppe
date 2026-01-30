// Anzahl der Gleichungen
#define GL_ANZ 4

// Anzahl der Punkte
#define ANZAHL 800000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 1

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 15, 37, 52, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { -0.04, -0.055, -0.025, 0.0007 },
    { 0, 0, 0, 0 },
    { -0.08, -0.06, -0.04, 0.0009 },
    { -0.23, -0.026, -0.02, 0.0007 },
    { -0.65, -0.7, -0.6, 0.003 },
    { 0.26, 0.2, 0.32, 0.0037 }
  },
  {
    { 0.61, 0.51, 0.71, 0.0031 },
    { 0, 0, 0, 0 },
    { 0.07, 0.05, 0.09, 0.0011 },
    { 0, 0, 0, 0 },
    { 0.31, 0.25, 0.37, 0.0033 },
    { 3.5, 3, 4, 0.023 }
  },
  {
    { 0.65, 0.55, 0.75, 0.0043 },
    { 0.22, 0.22, 0.25, 0.0025 },
    { 0.74, 0.6, 0.9, 0.011 },
    { -0.3, -0.35, -0.25, 0.005 },
    { 0.48, 0.42, 0.56, 0.0047 },
    { 0.39, 0.35, 0.43, 0.0027 }
  },
  {
    { 0.64, 0.54, 0.74, 0.0027 },
    { -0.2, -0.22, -0.18, 0.0035 },
    { -0.66, -0.75, -0.55, 0.009 },
    { 0.32, 0.25, 0.39, 0.007 },
    { 0.56, 0.5, 0.62, 0.0057 },
    { 0.9, 0.7, 1.1, 0.017 }
  }
};

// Farbwerte des ersten Punktes:
#define ROT 255
#define GRUEN 127
#define BLAU 0

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  { 0, 40, 40, 255, 50, 0 },
  { 85, 120, 90, 0, 80, 0 },
  { 180, 90, 70, 30, 0, 0 },
  { 80, 100, 120, 0, 0, 10 }
};
