#ifndef POINT_H
#define POINT_H



#include "xyz.h"
#include "vector.h"

#include <stdio.h>

class Point : public XYZ {


public:

    Point(double, double, double);

    Point rotate(float, Vector) const;
    Point scale(float, float, float, Point) const noexcept;
};

#endif // POINT_H
