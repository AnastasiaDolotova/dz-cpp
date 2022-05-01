#ifndef CLASSES_AND_INHERITANCE_ARRAY_H
#define CLASSES_AND_INHERITANCE_ARRAY_H

#include <iostream>
#include "IncompatibleDimException.h"
#include "OutOfRangeException.h"

class Array {
protected:
    unsigned char *m_arr;
    static int amount;
    size_t m_size;
public:
    Array();

    explicit Array(size_t p_size);

    Array(size_t p_size, unsigned char *p_val);

    virtual ~Array();

    Array &operator=(Array p_array);

    unsigned char &operator[](size_t index);

    const unsigned char &operator[](size_t index) const;

    size_t get_size();

    friend std::ostream &operator<<(std::ostream &ost, Array p_array);

    friend std::istream &operator>>(std::istream &ist, Array p_array);

    virtual void add(const Array *p_array, Array *p_result) const;

    static int get_amount();
};

#endif //CLASSES_AND_INHERITANCE_ARRAY_H
