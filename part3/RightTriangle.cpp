#include "RightTriangle.h"

RightTriangle::RightTriangle(double p_first_side, double p_second_side) :
        Triangle(p_first_side, p_second_side, 90.0) {}

double RightTriangle::area() {
    return m_first_side * m_second_side / 2;
}

double RightTriangle::perimeter() {
    return m_first_side + m_second_side +
           sqrt(pow(m_first_side, 2) + pow(m_second_side, 2));
}

void RightTriangle::get() {
    std::cout << "Input first leg: ";
    std::cin >> m_first_side;
    std::cout << "Input second leg: ";
    std::cin >> m_second_side;
    std::cout << std::endl;
}

void RightTriangle::put() {
    std::cout << "First leg: " << m_first_side << std::endl;
    std::cout << "Second leg: " << m_second_side << std::endl;
    std::cout << "Angle: " << m_angle << std::endl;
}