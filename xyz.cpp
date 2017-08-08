#include "xyz.h"

XYZ::XYZ (double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

double XYZ::getX() const noexcept {return x;}
double XYZ::getY() const noexcept {return y;}
double XYZ::getZ() const noexcept {return z;}


void XYZ::setX (double _x) { x = _x; }
void XYZ::setY (double _y) { y = _y; }
void XYZ::setZ (double _z) { z = _z; }
