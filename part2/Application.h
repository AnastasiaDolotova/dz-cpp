#ifndef CLASSES_AND_INHERITANCE_APPLICATION_H
#define CLASSES_AND_INHERITANCE_APPLICATION_H

#include <conio.h>
#include "Decimal.h"
#include "BitString.h"

class Application {
private:
    Array *p_1;
    Array *p_2;
    Array *p_3;
public:
    Application() = default;

    void run();

    void menu();

    void dec_menu();

    void bit_menu();
};


#endif //CLASSES_AND_INHERITANCE_APPLICATION_H
