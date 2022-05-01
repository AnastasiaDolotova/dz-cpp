#ifndef CLASSES_AND_INHERITANCE_MAXIMUMSUMEXCEPTION_H
#define CLASSES_AND_INHERITANCE_MAXIMUMSUMEXCEPTION_H

#include <exception>
#include <iostream>

class MaximumSumException : public std::exception {
private:
    std::string e_err;
public:
    MaximumSumException();

    const char *what() const noexcept override;
};

#endif //CLASSES_AND_INHERITANCE_MAXIMUMSUMEXCEPTION_H
