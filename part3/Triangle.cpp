#include "Triangle.h"

Triangle::Triangle(double p_first_side, double p_second_side, double p_angle) : m_first_side(p_first_side),
                                                                                m_second_side(p_second_side),
                                                                                m_angle(p_angle) {}

Triangle::Triangle(const Triangle &p_triangle) :
        m_first_side(p_triangle.m_first_side),
        m_second_side(p_triangle.m_second_side),
        m_angle(p_triangle.m_angle) {}