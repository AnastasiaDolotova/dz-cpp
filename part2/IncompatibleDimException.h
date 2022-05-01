#include <exception>
#include <iostream>

class IncompatibleDimException : public std::exception {
    std::string e_err;
public:
    IncompatibleDimException();

    const char *what() const noexcept override;
};

