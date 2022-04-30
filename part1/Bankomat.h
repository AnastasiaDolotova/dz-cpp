#ifndef CLASSES_AND_INHERITANCE_BANKOMAT_H
#define CLASSES_AND_INHERITANCE_BANKOMAT_H

#include <string>
#include "Money.h"
#include "MinimalSumException.h"
#include "MaximumSumException.h"

//Задача 45

class Bankomat {
private:
    int m_number;
    Money m_total_sum;
    Money m_min_sum;
    Money m_max_sum;
public:
    Bankomat();

    Bankomat(int p_number, const Money &p_total_sum, const Money &p_min_sum, const Money &p_max_sum);

    void banknotes_placement(Money &p_sum);

    void money_withdrawal(Money &p_sum);

    std::string toString();

    int get_number();

    friend std::ostream &operator<<(std::ostream &ost, Bankomat &p_bankomat);

    friend std::istream &operator>>(std::istream &ist, Bankomat &p_bankomat);
};

#endif //CLASSES_AND_INHERITANCE_BANKOMAT_H
