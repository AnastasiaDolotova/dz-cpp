#include "MinimalSumException.h"

MinimalSumException::MinimalSumException() : e_err("Error: the sum is too small!") {}

const char *MinimalSumException::what() const noexcept {
    return e_err.c_str();
}