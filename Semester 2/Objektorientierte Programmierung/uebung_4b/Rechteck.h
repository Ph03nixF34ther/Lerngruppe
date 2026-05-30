
#ifndef _RECHTECK_H
#define _RECHTECK_H

#include "Color.h"

class Rect
{
  public:
    Rect(const Color &color, int x, int y, int w, int h,
          int sx = 0, int sy = 0)
    : mRGB(color), mX(x), mY(y), mW(w), mH(h), mSX(sx), mSY(sy)
        // x, y, w, h, sx und sy werden "normal" gespeichert
        // "mRGB(color)" ist ein Konstruktor-Aufruf
        // des (automatisch erzeugten) Kopier-Konstruktors der Klasse Color
        // weil unser Member mRGB ja selbst wieder ein Objekt ist.
        // Stünde das nicht in der Init-Liste,
        // würde für mRGB der Standard-Konstruktor aufgerufen
        // (oder es käme ein Compiler-Fehler,
        // wenn Color gar keinen Standard-Konstruktor hat).
    {
      draw();
    }
    ~Rect() { undraw(); }

    Color getColor() const { return mRGB; }
    int getX() const { return mX; }
    int getY() const { return mY; }
    int getW() const { return mW; }    // get-Methoden für die neuen Member
    int getH() const { return mH; }
    int getSX() const { return mSX; }
    int getSY() const { return mSY; }

    void setColor(const Color &color)
    {
      mRGB = color;
      draw();
    }

    void setSpeed(int sx, int sy)
    {
      mSX = sx; mSY = sy;
    }
    
    void setPos(int x, int y);
    void move(int dx, int dy);

    void setSize(int w, int h);     
    void scale(int percentX, int percentY);

    bool fly(bool bounce = false);

    void draw();
    void undraw();

  private:
    Color mRGB;
    int mX, mY; 
    int mW, mH;
    int mSX, mSY;
};

#endif
