#include "ZeroDivideException.h"

ZeroDivideException::ZeroDivideException() : e_err("Error: division by zero!") {}

const char *ZeroDivideException::what() const noexcept {
    return e_err.c_str();
}
