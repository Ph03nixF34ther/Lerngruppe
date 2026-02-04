// Anzahl der Gleichungen
#define GL_ANZ 4

// Anzahl der Punkte
#define ANZAHL 300000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 100

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 10, 45, 80, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { 0.14, 0.11, 0.17, 0.0015 },
    { 0.01, 0.008, 0.012, 0.0005 },
    { -0.08, -0.1, -0.06, 0.0017 },
    { 0, 0, 0, 0 },
    { 0.51, 0.45, 0.57, 0.0085 },
    { -1.31, -1.37, -1.25, 0.009 }
  },
  {
    { 0.43, 0.38, 0.48, 0.0023 },
    { 0.52, 0.46, 0.58, 0.0049 },
    { 1.49, 1.4, 1.6, 0.017 },
    { -0.45, -0.5, -0.4, 0.0045 },
    { 0.5, 0.43, 0.56, 0.0075 },
    { -0.75, -0.8, -0.7, 0.0009 }
  },
  {
    { 0.43, 0.38, 0.48, 0.0037 },
    { -0.49, -0.55, -0.43, 0.0067 },
    { -1.62, -1.8, -1.4, 0.013 },
    { 0.47, 0.41, 0.53, 0.0055 },
    { 0.47, 0.41, 0.53, 0.0065 },
    { -0.74, -0.8, -0.7, 0.0007 }
  },
  {
    { 0.49, 0.43, 0.55, 0.007 },
    { 0, 0, 0, 0 },
    { 0.02, 0.017, 0.023, 0.0009 },
    { 0, 0, 0, 0 },
    { 0.51, 0.45, 0.57, 0.007 },
    { 1.62, 1.5, 1.74, 0.015 }
  }
};

// Farbwerte des ersten Punktes:
#define ROT 0
#define GRUEN 255
#define BLAU 0

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  { 100, 100, 100, -50, 100, -50 },
  { 80, 80, 80, 90, -50, -50 },
  { 80, 80, 80, -50, -50, 90 },
  { 80, 80, 80, 90, 90, -50 }
};
