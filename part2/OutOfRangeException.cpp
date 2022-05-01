#include "OutOfRangeException.h"

OutOfRangeException::OutOfRangeException() : e_err("Error: index is out of size!") {}

const char *OutOfRangeException::what() const throw() {
    return e_err.c_str();
}
