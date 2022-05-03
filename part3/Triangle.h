#ifndef CLASSES_AND_INHERITANCE_TRIANGLE_H
#define CLASSES_AND_INHERITANCE_TRIANGLE_H

//Задание 66

#include <iostream>
#include <cmath>

class Triangle {
protected:
    double m_first_side;
    double m_second_side;
    double m_angle;
public:
    Triangle() = default;

    Triangle(double p_first_side, double p_second_side, double p_angle);

    Triangle(const Triangle &p_triangle);

    virtual double area() = 0;

    virtual double perimeter() = 0;

    virtual void get() = 0;

    virtual void put() = 0;
};


#endif //CLASSES_AND_INHERITANCE_TRIANGLE_H
