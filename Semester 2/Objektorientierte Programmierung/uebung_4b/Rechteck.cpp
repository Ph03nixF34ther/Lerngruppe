
#include "sdlinterf.h"
#include "Rechteck.h"

Rect::Rect(Rect &origin) 
	: mRGB(max(0, origin.nRGB.getR() - 5),
		mRGB(max(0, origin.nRGB.getG() - 5),
		mRGB(max(0, origin.nRGB.getB() - 5)),
	mX(origin.mX), mY(origin.mY),
	mW(max(1, origin.mW - 3)), mH(max(1, origin.mH - 3)),
	mSX(origin.mSX), mSY(-origin.mSY),
{ draw ();}

void Rect::setPos(int x, int y)
{
  undraw();
  mX = x;
  mY = y;
  draw();
}

void Rect::move(int dx, int dy)
{
  undraw();
  mX += dx;
  mY += dy;
  draw();
}

// analog zu setPos: Weglöschen, interne Größe ändern, neu zeichnen
void Rect::setSize(int w, int h)
{
  undraw();
  mW = w;
  mH = h;
  draw();
}

// analog zu setSize, mit anderer Größen-Rechnung
void Rect::scale(int percentX, int percentY)
{
  undraw();
  // Achtung: Zuerst multiplizieren, dann dividieren!
  // Sonst kommt auf Grund der abschneidenden int-Division
  // bei den meisten Verkleinerungen 0 heraus!
  mW = (mW * percentX) / 100;
  mH = (mH * percentY) / 100;
  draw();
}
  
bool Rect::fly(bool bounce)
{
  bool ret = true;
  // Das Rechteck darf nicht fliegen, bis der Mittelpunkt am Rand ansteht,
  // sondern steht schon an, wenn der Mittelpunkt noch mW vom Rand entfernt ist
  if (((mSX > 0) && (mX >= SDL_X_SIZE - mSX - mW)) ||
      ((mSX < 0) && (mX < -mSX + mW))) {
    if (bounce) {
      mSX = -mSX;
      ret = false;
    }
    else {
      return false;
    }
  }
  // analog für mH als Sicherheitsabstand
  if (((mSY > 0) && (mY >= SDL_Y_SIZE - mSY - mH)) ||
      ((mSY < 0) && (mY < -mSY + mH))) {
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

void Rect::draw()
{
  // Rechteck statt Punkt zeichnen,
  // mit der Breite und Höhe des eigenen Objektes
  sdlDrawRect(mX, mY, mW, mH, mRGB.getR(), mRGB.getG(), mRGB.getB());
}

void Rect::undraw()
{
  sdlDrawRect(mX, mY, mW, mH, 0, 0, 0);
}
