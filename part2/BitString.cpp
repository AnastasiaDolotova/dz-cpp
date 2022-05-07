#include "BitString.h"

BitString::BitString() : Array() {}

BitString::BitString(size_t p_size) : Array(p_size) {}

BitString::BitString(size_t p_size, unsigned char *p_arr) : Array(p_size, p_arr) {}

BitString BitString::b_and(const BitString &p_bit_str) {
    if (m_size != p_bit_str.m_size) throw IncompatibleDimException();
    BitString result;
    result.m_size = m_size;
    result.m_arr = new unsigned char[m_size];
    for (int i = 0; i < m_size; ++i) {
        if (((*this)[i] == '1') && (p_bit_str[i] == '1')) result[i] = '1';
        else result[i] = '0';
    }
    return result;
}

BitString BitString::b_or(const BitString &p_bit_str) {
    if (m_size != p_bit_str.m_size) throw IncompatibleDimException();
    BitString result;
    result.m_size = m_size;
    result.m_arr = new unsigned char[m_size];
    for (int i = 0; i < m_size; ++i) {
        if (((*this)[i] == '1') || (p_bit_str[i] == '1')) result[i] = '1';
        else result[i] = '0';
    }
    return result;
}

BitString BitString::b_xor(const BitString &p_bit_str) {
    if (m_size != p_bit_str.m_size) throw IncompatibleDimException();
    BitString result;
    result.m_size = m_size;
    result.m_arr = new unsigned char[m_size];
    for (int i = 0; i < m_size; ++i) {
        if ((*this)[i] == p_bit_str[i]) result[i] = '0';
        else result[i] = '1';
    }
    return result;
}

BitString BitString::b_not() {
    BitString result;
    result.m_size = m_size;
    result.m_arr = new unsigned char[m_size];
    for (int i = 0; i < m_size; ++i) {
        if ((*this)[i] == '1') result[i] = '0';
        else result[i] = '1';
    }
    return result;
}

void BitString::add(const Array *p_array, Array *p_result) const {
    *p_result = toBit(toInt() + dynamic_cast<const BitString *>(p_array)->toInt());
}

void BitString::left(int p_bit) {
    if (p_bit < 0) {
        right(abs(p_bit));
        return;
    }
    for (int i = 0; i < m_size - p_bit; ++i) {
        m_arr[i] = m_arr[i + p_bit];
    }
    for (int i = m_size - p_bit; i < m_size; ++i) {
        m_arr[i] = '0';
    }
}

void BitString::right(int p_bit) {
    if (p_bit < 0) {
        left(abs(p_bit));
        return;
    }
    for (int i = m_size - 1; i > p_bit - 1; --i) {
        m_arr[i] = m_arr[i - p_bit];
    }
    for (int i = 0; i < p_bit; ++i) {
        m_arr[i] = '0';
    }
}

std::ostream &operator<<(std::ostream &ost, BitString &p_bit_str) {
    for (int i = 0; i < p_bit_str.m_size; ++i) {
        ost << p_bit_str.m_arr[i];
    }
    ost << std::endl;
    return ost;
}

std::istream &operator>>(std::istream &ist, BitString &p_bit_str) {
    std::cout << "Input bit string: ";
    std::string str;
    ist >> str;
    if (str.size() != p_bit_str.m_size) {
        p_bit_str.m_size = str.size();
        delete p_bit_str.m_arr;
        p_bit_str.m_arr = new unsigned char[str.size()];
    }
    for (int i = 0; i < str.size(); ++i) {
        p_bit_str.m_arr[i] = str[i];
    }
    std::cout << std::endl;
    return ist;
}

int BitString::toInt() const {
    int res = 0;
    for (int i = 0; i < m_size; i++) {
        res *= 2;
        res += m_arr[i] - '0';
    }
    return res;
}

BitString BitString::toBit(int p_num) const {
    BitString res;
    std::string str;
    while (p_num > 0) {
        str += char('0' + p_num % 2);
        p_num = p_num / 2;
        res.m_size++;
    }
    res.m_arr = new unsigned char[res.m_size];
    for (int i = 0; i < res.m_size; ++i) {
        res.m_arr[res.m_size - 1 - i] = str[i];
    }
    return res;
}

std::string BitString::toString() const {
    std::string res = "";
    for (int i = 0; i < m_size; ++i) {
        res += m_arr[i];
    }
    return res;
}

BitString BitString::toBit(std::string p_str) const {
    BitString res;
    res.m_size = p_str.size();
    res.m_arr = new unsigned char[p_str.size()];
    for (int i = 0; i < p_str.size(); ++i) {
        res.m_arr[i] = p_str[i];
    }
    return res;
}

int BitString::amount = 0;