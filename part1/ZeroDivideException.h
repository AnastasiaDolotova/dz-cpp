#ifndef CLASSES_AND_INHERITANCE_ZERODIVIDEEXCEPTION_H
#define CLASSES_AND_INHERITANCE_ZERODIVIDEEXCEPTION_H

#include <iostream>

class ZeroDivideException : public std::exception {
private:
    std::string e_err;
public:
    ZeroDivideException();

    const char *what() const noexcept override;
};


#endif //CLASSES_AND_INHERITANCE_ZERODIVIDEEXCEPTION_H
