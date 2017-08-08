#include "point.h"
#include "xyz.h"
#include <math.h>
#include <iostream>
#include <qdebug.h>

Point::Point(double x, double y, double z) : XYZ(x,y,z) {}


Point Point::rotate(float angle, Vector vector) const{

    Point temp(0,0,0);

    qInfo()<<(angle);
    qInfo()<<vector.getLength();

    angle /= 2;
    angle = ((angle / 180) * 3.1415926535897);

    double s0 = cos(angle);


    double x0 = vector.getX()/vector.getLength() * sin(angle);
    double y0 = vector.getY()/vector.getLength() * sin(angle);
    double z0 = vector.getZ()/vector.getLength() * sin(angle);


    temp.setX((x * (2*(s0*s0+x0*x0)-1)) + (y*2*(x0*y0-s0*z0)) + (z * 2*(s0*y0+x0*z0)));
    temp.setY((x * 2*(s0*z0+x0*y0)) + (y*(2*(s0*s0+y0*y0)-1)) + (z * 2*(y0*z0-s0*x0)));
    temp.setZ((x * 2*(x0*z0-s0*y0)) + (y*2*(s0*x0+y0*z0)) + (z*(2*(s0*s0+z0*z0-1))));

    qInfo()<<temp.getX();
    qInfo()<<temp.getY();
    qInfo()<<temp.getZ();

    return temp;

}


Point Point::scale(float Sx, float Sy, float Sz, Point p) const noexcept{

    Point temp(0,0,0);

    temp.setX(Sx * x + p.getX()*(1-Sx));
    temp.setY(Sy * y + p.getY()*(1-Sy));
    temp.setZ(Sz * z + p.getZ()*(1-Sz));



    return temp;


}

