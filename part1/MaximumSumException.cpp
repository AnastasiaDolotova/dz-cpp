#include "MaximumSumException.h"

MaximumSumException::MaximumSumException() : e_err("Error: the sum is too large!") {}

const char *MaximumSumException::what() const noexcept {
    return e_err.c_str();
}