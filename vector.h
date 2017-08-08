#ifndef VECTOR_H
#define VECTOR_H

#include "xyz.h"

class Vector : public XYZ{

    double length;

public:

     Vector(double, double, double);
     double getLength() const;
     void countLength();
};

#endif // VECTOR_H
