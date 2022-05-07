#ifndef CLASSES_AND_INHERITANCE_BITSTRING_H
#define CLASSES_AND_INHERITANCE_BITSTRING_H

#include "Array.h"

class BitString : public Array {
    static int amount;
public:
    BitString();

    BitString(size_t p_size);

    BitString(size_t p_size, unsigned char *p_arr);

    BitString b_and(const BitString &p_bit_str);

    BitString b_or(const BitString &p_bit_str);

    BitString b_xor(const BitString &p_bit_str);

    BitString b_not();

    void add(const Array *p_array, Array *p_result) const override;

    void left(int p_bit);

    void right(int p_bit);

    friend std::ostream &operator<<(std::ostream &ost, BitString &p_bit_str);

    friend std::istream &operator>>(std::istream &ist, BitString &p_bit_str);

    int toInt() const;

    BitString toBit(int p_num) const;

    std::string toString() const;

    BitString toBit(std::string p_str) const;
};

#endif //CLASSES_AND_INHERITANCE_BITSTRING_H
