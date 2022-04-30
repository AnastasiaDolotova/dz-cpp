#ifndef CLASSES_AND_INHERITANCE_ARRAY_H
#define CLASSES_AND_INHERITANCE_ARRAY_H

#include <iostream>

class Array {
private:
    unsigned char *m_arr;
    size_t m_size;
public:
    Array();

    Array(size_t p_size);

    Array(size_t p_size, unsigned char p_val);

    Array(Array &p_array);

    virtual ~Array();

    Array &operator=(Array &p_array);

    unsigned char &operator[](size_t index);

    const unsigned char &operator[](size_t index) const;

    size_t get_size();

    friend std::ostream &operator<<(std::ostream &ost, Array p_array);

    friend std::istream &operator>>(std::istream &ist, Array p_array);
};


#endif //CLASSES_AND_INHERITANCE_ARRAY_H
