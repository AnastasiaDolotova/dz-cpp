#include "Decimal.h"

Decimal::Decimal() : Array() {
    amount++;
}

Decimal::Decimal(size_t p_size) : Array(p_size) {
    amount++;
}

Decimal::Decimal(size_t p_size, unsigned char *p_val) : Array(p_size, p_val) {
    amount++;
};

int Decimal::get_amount() {
    return amount;
}

int Decimal::amount = 0;

void Decimal::add(const Array *p_array, Array *p_result) const {
    *p_result = toDecimal(toInt() + dynamic_cast<const Decimal *>(p_array)->toInt());
}

bool Decimal::operator>(Decimal &p_decimal) {
    return this->toInt() > p_decimal.toInt();
}

bool Decimal::operator<(Decimal &p_decimal) {
    return !(*this >= p_decimal);
}

bool Decimal::operator>=(Decimal &p_decimal) {
    return this->toInt() >= p_decimal.toInt();
}

bool Decimal::operator<=(Decimal &p_decimal) {
    return !(*this > p_decimal);
}

bool Decimal::operator==(Decimal &p_decimal) {
    return (*this >= p_decimal && *this <= p_decimal);
}

int Decimal::toInt() const {
    int result = 0, size = pow(10, m_size);
    for (int i = 0; i < m_size; ++i) {
        result += m_arr[i] * size;
        size /= 10;
    }
    return result;
}

Decimal Decimal::toDecimal(int p_num) const {
    Decimal result;
    int i = 0, n = p_num;
    while (n) {
        n /= 10;
        i++;
    }
    result.m_size = i;
    result.m_arr = new unsigned char[i];
    i--;
    for (; i >= 0; --i) {
        m_arr[i] = p_num % 10;
        p_num /= 10;
    }
    return result;
}

std::string Decimal::toString() {
    std::string res = "";
    for (int i = 0; i < m_size; ++i) {
        res += m_arr[i];
    }
    return res;
}

Decimal Decimal::toDecimal(std::string p_str) {
    Decimal result;
    result.m_size = p_str.size();
    result.m_arr = new unsigned char[p_str.size()];
    for (int i = 0; i < p_str.size(); ++i) {
        result.m_arr[i] = p_str[i];
    }
    return result;
}

Decimal Decimal::sub(const Decimal &p_decimal) {
    return toDecimal(toInt() - p_decimal.toInt());
}

Decimal Decimal::mul(const Decimal &p_decimal) {
    return toDecimal(toInt() * p_decimal.toInt());
}

Decimal Decimal::div(const Decimal &p_decimal) {
    if (p_decimal.toInt() == 0) throw ZeroDivideException();
    return toDecimal(toInt() / p_decimal.toInt());
}
