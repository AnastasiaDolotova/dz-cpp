#include "Money.h"

Money::Money() :
        ruble_0_01(0),
        ruble_0_05(0),
        ruble_0_10(0),
        ruble_0_50(0),
        ruble_1(0),
        ruble_2(0),
        ruble_5(0),
        ruble_10(0),
        ruble_50(0),
        ruble_100(0),
        ruble_500(0),
        ruble_1000(0),
        ruble_5000(0) {}

Money::Money(int p_0_01, int p_0_05, int p_0_10, int p_0_50, int p_1,
             int p_2, int p_5, int p_10, int p_50, int p_100,
             int p_500, int p_1000, int p_5000) :
        ruble_0_01(p_0_01),
        ruble_0_05(p_0_05),
        ruble_0_10(p_0_10),
        ruble_0_50(p_0_50),
        ruble_1(p_1),
        ruble_2(p_2),
        ruble_5(p_5),
        ruble_10(p_10),
        ruble_50(p_50),
        ruble_100(p_100),
        ruble_500(p_500),
        ruble_1000(p_1000),
        ruble_5000(p_5000) {}

Money::Money(const Money &p_money) :
        ruble_0_01(p_money.ruble_0_01),
        ruble_0_05(p_money.ruble_0_05),
        ruble_0_10(p_money.ruble_0_10),
        ruble_0_50(p_money.ruble_0_50),
        ruble_1(p_money.ruble_1),
        ruble_2(p_money.ruble_2),
        ruble_5(p_money.ruble_5),
        ruble_10(p_money.ruble_10),
        ruble_50(p_money.ruble_50),
        ruble_100(p_money.ruble_100),
        ruble_500(p_money.ruble_500),
        ruble_1000(p_money.ruble_1000),
        ruble_5000(p_money.ruble_5000) {}

Money Money::operator+(Money &p_money) {
    Money money = Money(*this);
    return money += p_money;
}

Money Money::operator+=(Money &p_money) {
    ruble_0_01 += p_money.ruble_0_01;
    ruble_0_05 += p_money.ruble_0_05;
    ruble_0_10 += p_money.ruble_0_10;
    ruble_0_50 += p_money.ruble_0_50;
    ruble_1 += p_money.ruble_1;
    ruble_2 += p_money.ruble_2;
    ruble_5 += p_money.ruble_5;
    ruble_10 += p_money.ruble_10;
    ruble_50 += p_money.ruble_50;
    ruble_100 += p_money.ruble_100;
    ruble_500 += p_money.ruble_500;
    ruble_1000 += p_money.ruble_1000;
    ruble_5000 += p_money.ruble_5000;
    return *this;
}

Money Money::operator-(Money &p_money) {
    Money money = Money(*this);
    return money -= p_money;
}

Money Money::operator-=(Money &p_money) {
    ruble_0_01 -= p_money.ruble_0_01;
    ruble_0_05 -= p_money.ruble_0_05;
    ruble_0_10 -= p_money.ruble_0_10;
    ruble_0_50 -= p_money.ruble_0_50;
    ruble_1 -= p_money.ruble_1;
    ruble_2 -= p_money.ruble_2;
    ruble_5 -= p_money.ruble_5;
    ruble_10 -= p_money.ruble_10;
    ruble_50 -= p_money.ruble_50;
    ruble_100 -= p_money.ruble_100;
    ruble_500 -= p_money.ruble_500;
    ruble_1000 -= p_money.ruble_1000;
    ruble_5000 -= p_money.ruble_5000;
    return *this;
}

Money Money::operator/(Money &p_money) {
    Money money = Money(*this);
    return money /= p_money;
}

Money Money::operator/=(Money &p_money) {
    if (p_money.get_money() == 0) throw ZeroDivideException();
    if (p_money.ruble_0_01 != 0)
        ruble_0_01 /= p_money.ruble_0_01;
    if (p_money.ruble_0_05 != 0)
        ruble_0_05 /= p_money.ruble_0_05;
    if (p_money.ruble_0_10 != 0)
        ruble_0_10 /= p_money.ruble_0_10;
    if (p_money.ruble_0_50 != 0)
        ruble_0_50 /= p_money.ruble_0_50;
    if (p_money.ruble_1 != 0)
        ruble_1 /= p_money.ruble_1;
    if (p_money.ruble_2 != 0)
        ruble_2 /= p_money.ruble_2;
    if (p_money.ruble_5 != 0)
        ruble_5 /= p_money.ruble_5;
    if (p_money.ruble_10 != 0)
        ruble_10 /= p_money.ruble_10;
    if (p_money.ruble_50 != 0)
        ruble_50 /= p_money.ruble_50;
    if (p_money.ruble_100 != 0)
        ruble_100 /= p_money.ruble_100;
    if (p_money.ruble_500 != 0)
        ruble_500 /= p_money.ruble_500;
    if (p_money.ruble_1000 != 0)
        ruble_1000 /= p_money.ruble_1000;
    if (p_money.ruble_5000 != 0)
        ruble_5000 /= p_money.ruble_5000;
    return *this;
}

Money Money::operator/(int p_number) {
    Money money = Money(*this);
    return money /= p_number;
}

Money Money::operator/=(int p_number) {
    if (p_number == 0) throw ZeroDivideException();
    ruble_0_01 /= p_number;
    ruble_0_05 /= p_number;
    ruble_0_10 /= p_number;
    ruble_0_50 /= p_number;
    ruble_1 /= p_number;
    ruble_2 /= p_number;
    ruble_5 /= p_number;
    ruble_10 /= p_number;
    ruble_50 /= p_number;
    ruble_100 /= p_number;
    ruble_500 /= p_number;
    ruble_1000 /= p_number;
    ruble_5000 /= p_number;
    return *this;
}

Money Money::operator*(int p_number) {
    Money money = Money(*this);
    return money *= p_number;
}

Money Money::operator*=(int p_number) {
    ruble_0_01 *= p_number;
    ruble_0_05 *= p_number;
    ruble_0_10 *= p_number;
    ruble_0_50 *= p_number;
    ruble_1 *= p_number;
    ruble_2 *= p_number;
    ruble_5 *= p_number;
    ruble_10 *= p_number;
    ruble_50 *= p_number;
    ruble_100 *= p_number;
    ruble_500 *= p_number;
    ruble_1000 *= p_number;
    ruble_5000 *= p_number;
    return *this;
}

bool Money::operator==(Money &p_money) const {
    return get_money() == p_money.get_money();
}

bool Money::operator!=(Money &p_money) const {
    return get_money() != p_money.get_money();
}

bool Money::operator>=(Money &p_money) const {
    return get_money() >= p_money.get_money();
}

bool Money::operator>(Money &p_money) const {
    return get_money() > p_money.get_money();
}

bool Money::operator<=(Money &p_money) const {
    return get_money() <= p_money.get_money();
}

bool Money::operator<(Money &p_money) const {
    return get_money() <= p_money.get_money();
}

std::ostream &operator<<(std::ostream &ost, Money &p_money) {
    int rubles;
    double kopecks;
    rubles = int(p_money.get_money());
    kopecks = p_money.get_money() - rubles;
    std::string k = std::to_string(kopecks);
    k += "0";
    ost << rubles << "," << k.substr(2, 2);
    return ost;
}

std::istream &operator>>(std::istream &ist, Money &p_money) {
    std::cout << "Input amount of banknotes of 0.01 RUB: ";
    ist >> p_money.ruble_0_01;
    std::cout << std::endl << "Input amount of banknotes of 0.05 RUB: ";
    ist >> p_money.ruble_0_05;
    std::cout << std::endl << "Input amount of banknotes of 0.10 RUB: ";
    ist >> p_money.ruble_0_10;
    std::cout << std::endl << "Input amount of banknotes of 0.50 RUB: ";
    ist >> p_money.ruble_0_50;
    std::cout << std::endl << "Input amount of banknotes of 1 RUB: ";
    ist >> p_money.ruble_1;
    std::cout << std::endl << "Input amount of banknotes of 2 RUB: ";
    ist >> p_money.ruble_2;
    std::cout << std::endl << "Input amount of banknotes of 5 RUB: ";
    ist >> p_money.ruble_5;
    std::cout << std::endl << "Input amount of banknotes of 10 RUB: ";
    ist >> p_money.ruble_10;
    std::cout << std::endl << "Input amount of banknotes of 50 RUB: ";
    ist >> p_money.ruble_50;
    std::cout << std::endl << "Input amount of banknotes of 100 RUB: ";
    ist >> p_money.ruble_100;
    std::cout << std::endl << "Input amount of banknotes of 500 RUB: ";
    ist >> p_money.ruble_500;
    std::cout << std::endl << "Input amount of banknotes of 1000 RUB: ";
    ist >> p_money.ruble_1000;
    std::cout << std::endl << "Input amount of banknotes of 5000 RUB: ";
    ist >> p_money.ruble_5000;
    std::cout << std::endl;
    return ist;
}

double Money::get_money() const {
    return
            ruble_0_01 * 0.01 +
            ruble_0_05 * 0.01 +
            ruble_0_10 * 0.01 +
            ruble_0_50 * 0.01 +
            ruble_1 * 1 +
            ruble_2 * 2 +
            ruble_5 * 5 +
            ruble_10 * 10 +
            ruble_50 * 50 +
            ruble_100 * 100 +
            ruble_500 * 500 +
            ruble_1000 * 1000 +
            ruble_5000 * 5000;
}
