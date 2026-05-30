
#ifndef _COLOR_H
#define _COLOR_H

class Color
{
  public:
    // Rect initialisiert jetzt sein Color-Member in der Init-Liste
    // ==> Color braucht keinen Standard-Konstruktor mehr
    // ==> Wir können die Defaults weglassen
    Color(int r, int g, int b)  
    : mR(r), mG(g), mB(b)  // Init-Liste: Speichere die Parameter-Werte
                           // beim Anlegen des Objektes in den Member-Variablen
    {}

    int getR() const { return mR; }
    int getG() const { return mG; }
    int getB() const { return mB; }

  private:   
    int mR, mG, mB;
};

#endif