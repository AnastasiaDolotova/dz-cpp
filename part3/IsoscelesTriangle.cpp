#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double p_side, double p_angle) :
        Triangle(p_side, p_side, p_angle) {}

double IsoscelesTriangle::area() {
    return pow(m_first_side, 2) * std::abs(sin(m_angle)) / 2;
}

double IsoscelesTriangle::perimeter() {
    double a = sqrt(pow(m_first_side, 2) * 2 * (1 - cos(m_angle)));
    return m_first_side * 2 + a;
}

void IsoscelesTriangle::get() {
    std::cout << "Input side: ";
    std::cin >> m_first_side;
    m_second_side = m_first_side;
    std::cout << "Input angle: ";
    std::cin >> m_angle;
    std::cout << std::endl;
}

void IsoscelesTriangle::put() {
    std::cout << "Sides: " << m_first_side << std::endl;
    std::cout << "Angle: " << m_angle << std::endl;
}