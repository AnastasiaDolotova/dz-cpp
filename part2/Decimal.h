#ifndef CLASSES_AND_INHERITANCE_DECIMAL_H
#define CLASSES_AND_INHERITANCE_DECIMAL_H

#include "Array.h"
#include "../part1/ZeroDivideException.h"
#include <cmath>

//Задание 46

class Decimal : public Array {
    static int amount;
public:
    Decimal();

    explicit Decimal(size_t p_size);

    Decimal(size_t p_size, unsigned char *p_val);

    static int get_amount();

    void add(const Array *p_array, Array *p_result) const override;

    int toInt() const;

    Decimal toDecimal(int p_num) const;

    std::string toString();

    Decimal toDecimal(std::string p_str);

    bool operator>(Decimal &p_decimal);

    bool operator<(Decimal &p_decimal);

    bool operator>=(Decimal &p_decimal);

    bool operator<=(Decimal &p_decimal);

    bool operator==(Decimal &p_decimal);

    Decimal sub(const Decimal &p_decimal);

    Decimal mul(const Decimal &p_decimal);

    Decimal div(const Decimal &p_decimal);

    friend std::ostream &operator<<(std::ostream &ost, Decimal p_decimal);

    friend std::istream &operator>>(std::istream &ist, Decimal p_decimal);

};

#endif //CLASSES_AND_INHERITANCE_DECIMAL_H
