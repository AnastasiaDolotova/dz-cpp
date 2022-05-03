#ifndef CLASSES_AND_INHERITANCE_APPLICATION_H
#define CLASSES_AND_INHERITANCE_APPLICATION_H

#include <iostream>
#include <conio.h>
#include "Bankomat.h"

class Application {
private:
    void menu();
public:
    Application() = default;

    void run();
};


#endif //CLASSES_AND_INHERITANCE_APPLICATION_H
