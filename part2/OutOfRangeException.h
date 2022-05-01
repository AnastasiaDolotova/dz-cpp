#ifndef CLASSES_AND_INHERITANCE_OUTOFRANGEEXCEPTION_H
#define CLASSES_AND_INHERITANCE_OUTOFRANGEEXCEPTION_H

#include <exception>
#include <iostream>

class OutOfRangeException : public std::exception {
    std::string e_err;
public:
    OutOfRangeException();
    const char* what() const noexcept override;
};


#endif //CLASSES_AND_INHERITANCE_OUTOFRANGEEXCEPTION_H
