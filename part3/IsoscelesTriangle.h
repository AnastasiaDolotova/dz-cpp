#ifndef CLASSES_AND_INHERITANCE_ISOSCELESTRIANGLE_H
#define CLASSES_AND_INHERITANCE_ISOSCELESTRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle() = default;

    IsoscelesTriangle(double p_side, double p_angle);

    double area() override;

    double perimeter() override;

    void get() override;

    void put() override;
};


#endif //CLASSES_AND_INHERITANCE_ISOSCELESTRIANGLE_H
