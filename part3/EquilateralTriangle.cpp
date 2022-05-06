#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double p_side) :
        Triangle(p_side, p_side, 60.0) {}

double EquilateralTriangle::area() {
    return pow(m_first_side, 2) * sqrt(3) / 4;
}

double EquilateralTriangle::perimeter() {
    return m_first_side * 3;
}

void EquilateralTriangle::get() {
    std::cout << "Input side: ";
    std::cin >> m_first_side;
    m_second_side = m_first_side;
    m_angle = 60.0;
    std::cout << std::endl;
}

void EquilateralTriangle::put() {
    std::cout << "Sides: " << m_first_side << std::endl;
    std::cout << "Angle: " << m_angle << std::endl;
}