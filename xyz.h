#ifndef XYZ_H
#define XYZ_H


#include <stdio.h>


class XYZ {

protected:

    double x,y,z;

public:

    XYZ (double, double, double);
    double getX() const noexcept;
    double getY() const noexcept;
    double getZ() const noexcept;

    void setX (double);
    void setY (double);
    void setZ (double);






};
#endif // XYZ_H
