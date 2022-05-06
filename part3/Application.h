#ifndef PART2_APPLICATION_H
#define PART2_APPLICATION_H

#include <conio.h>
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"

class Application {
    Triangle *ptr;
public:
    Application() = default;

    void run();

    void menu();

};


#endif //PART2_APPLICATION_H
