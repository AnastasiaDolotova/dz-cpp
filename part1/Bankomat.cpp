#include "Bankomat.h"

Bankomat::Bankomat() : m_number(0), m_total_sum(Money()), m_max_sum(Money()), m_min_sum(Money()) {}

Bankomat::Bankomat(int p_number, const Money &p_total_sum, const Money &p_min_sum, const Money &p_max_sum) :
        m_number(p_number), m_total_sum(p_total_sum), m_max_sum(p_min_sum), m_min_sum(p_max_sum) {}

void Bankomat::banknotes_placement(Money &p_sum) {
    m_total_sum += p_sum;
}

void Bankomat::money_withdrawal(Money &p_sum) {
    if (p_sum < m_min_sum) throw MinimalSumException();
    if (p_sum > m_max_sum) throw MaximumSumException();
    m_total_sum -= p_sum;
}

std::string Bankomat::toString() {
    return std::to_string(m_total_sum.get_money());
}

int Bankomat::get_number() {
    return m_number;
}

std::ostream &operator<<(std::ostream &ost, Bankomat &p_bankomat) {
    ost << "Bankomat number: " << p_bankomat.m_number;
    ost << "Total sum: " << p_bankomat.m_total_sum;
    ost << "Minimal sum: " << p_bankomat.m_min_sum;
    ost << "Maximum sum: " << p_bankomat.m_max_sum;
    return ost;
}

std::istream &operator>>(std::istream &ist, Bankomat &p_bankomat) {
    std::cout << "Input bankomat number: ";
    ist >> p_bankomat.m_number;
    std::cout << std::endl << "Input total sum: ";
    ist >> p_bankomat.m_total_sum;
    std::cout << std::endl << "Input minimal sum: ";
    ist >> p_bankomat.m_min_sum;
    std::cout << std::endl << "Input maximum sum: ";
    ist >> p_bankomat.m_max_sum;
    std::cout << std::endl;
    return ist;
}
