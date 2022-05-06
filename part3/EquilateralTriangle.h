#ifndef CLASSES_AND_INHERITANCE_EQUILATERALTRIANGLE_H
#define CLASSES_AND_INHERITANCE_EQUILATERALTRIANGLE_H

#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle() = default;

    EquilateralTriangle(double p_side);

    double area() override;

    double perimeter() override;

    void get() override;

    void put() override;
};


#endif //CLASSES_AND_INHERITANCE_EQUILATERALTRIANGLE_H
