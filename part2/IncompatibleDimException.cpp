#include "IncompatibleDimException.h"

IncompatibleDimException::IncompatibleDimException(): e_err("Error: dimensions do not match!") {}

const char *IncompatibleDimException::what() const noexcept {
    return e_err.c_str();
}