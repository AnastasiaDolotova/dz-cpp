#ifndef CLASSES_AND_INHERITANCE_MINIMALSUMEXCEPTION_H
#define CLASSES_AND_INHERITANCE_MINIMALSUMEXCEPTION_H

#include <iostream>

class MinimalSumException : public std::exception {
private:
    std::string e_err;
public:
    MinimalSumException();

    const char *what() const noexcept override;
};

#endif //CLASSES_AND_INHERITANCE_MINIMALSUMEXCEPTION_H
