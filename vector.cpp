#include "vector.h"

#include <math.h>

Vector::Vector(double x, double y, double z) : XYZ(x,y,z){

    length = sqrt(x*x + y*y + z*z);


}

double Vector::getLength() const {return length;}

void Vector::countLength(){
     length = sqrt(x*x + y*y + z*z);
}
