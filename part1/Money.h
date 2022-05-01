#ifndef CLASSES_AND_INHERITANCE_MONEY_H
#define CLASSES_AND_INHERITANCE_MONEY_H

#include <iostream>
#include "../ZeroDivideException.h"

class Money {
private:
    int ruble_0_01;
    int ruble_0_05;
    int ruble_0_10;
    int ruble_0_50;
    int ruble_1;
    int ruble_2;
    int ruble_5;
    int ruble_10;
    int ruble_50;
    int ruble_100;
    int ruble_500;
    int ruble_1000;
    int ruble_5000;
public:
    Money();

    Money(int p_0_01, int p_0_05, int p_0_10, int p_0_50, int p_1, int p_2,
          int p_5, int p_10, int p_50, int p_100, int p_500, int p_1000, int p_5000);

    Money(const Money &p_money);

    Money operator+(Money &p_money);

    Money operator+=(Money &p_money);

    Money operator-(Money &p_money);

    Money operator-=(Money &p_money);

    Money operator/(Money &p_money);

    Money operator/=(Money &p_money);

    Money operator/(int p_number);

    Money operator/=(int p_number);

    Money operator*(int p_number);

    Money operator*=(int p_number);

    bool operator==(Money &p_money) const;

    bool operator!=(Money &p_money) const;

    bool operator>=(Money &p_money) const;

    bool operator>(Money &p_money) const;

    bool operator<=(Money &p_money) const;

    bool operator<(Money &p_money) const;

    friend std::ostream &operator<<(std::ostream &ost, Money &p_money);

    friend std::istream &operator>>(std::istream &ist, Money &p_money);

    double get_money() const;
};

#endif //CLASSES_AND_INHERITANCE_MONEY_H
