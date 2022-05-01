#include "Array.h"

Array::Array() : m_size(0), m_arr(nullptr) {
    amount++;
}

Array::Array(size_t p_size) : m_size(p_size) {
    m_arr = new unsigned char[p_size];
    for (int i = 0; i < p_size; ++i) {
        m_arr[i] = '0';
    }
    amount++;
}

Array::Array(size_t p_size, unsigned char *p_val) : m_size(p_size) {
    m_arr = new unsigned char[p_size];
    for (int i = 0; i < p_size; ++i) {
        m_arr[i] = p_val[i];
    }
    amount++;
}

Array::~Array() {
    delete[] m_arr;
}

Array &Array::operator=(Array p_array) {
    if (this == &p_array) return *this;

    if (m_size != p_array.m_size) {
        delete[] m_arr;
        m_arr = new unsigned char[p_array.m_size];
        m_size = p_array.m_size;
    }
    for (int i = 0; i < m_size; ++i) {
        m_arr[i] = p_array[i];
    }
    return *this;
}

unsigned char &Array::operator[](size_t index) {
    if(index < 0 || index >= m_size) throw OutOfRangeException();
    return m_arr[index];
}

const unsigned char &Array::operator[](size_t index) const {
    if(index < 0 || index >= m_size) throw OutOfRangeException();
    return m_arr[index];
}

size_t Array::get_size() {
    return m_size;
}

std::ostream &operator<<(std::ostream &ost, Array p_array) {
    ost << "[";
    for (int i = 0; i < p_array.m_size - 1; ++i) {
        ost << p_array[i] << ", ";
    }
    ost << p_array[p_array.m_size - 1] << "]";
    return ost;
}

std::istream &operator>>(std::istream &ist, Array p_array) {
    size_t size;
    std::cout << "Input size of array: ";
    ist >> size;
    std::cout << std::endl;
    if (p_array.m_size != size) {
        delete[] p_array.m_arr;
        p_array.m_arr = new unsigned char[size];
        p_array.m_size = size;
    }
    std::cout << "Input array: ";
    for (int i = 0; i < size; ++i) {
        ist >> p_array.m_arr[i];
        ist.ignore();
    }
    std::cout << std::endl;
    return ist;
}

void Array::add(const Array *p_array, Array *p_result) const {
    if (m_size != p_array->m_size) throw IncompatibleDimException();
    if (p_result->m_size != m_size) {
        p_result->m_size = m_size;
        delete[] p_result->m_arr;
        p_result->m_arr = new unsigned char[m_size];
    }
    for (int i = 0; i < m_size; ++i) {
        p_result->m_arr[i] = m_arr[i] + p_array->m_arr[i];
    }
}

int Array::get_amount() {
    return amount;
}

int Array::amount = 0;