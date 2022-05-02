#ifndef CLASSES_AND_INHERITANCE_RIGHTTRIANGLE_H
#define CLASSES_AND_INHERITANCE_RIGHTTRIANGLE_H

#include "Triangle.h"

class RightTriangle : Triangle {
public:
    RightTriangle() = default;

    RightTriangle(double p_first_side, double p_second_side);

    double area() override;

    double perimeter() override;

    void get() override;

    void put() override;

};


#endif //CLASSES_AND_INHERITANCE_RIGHTTRIANGLE_H
