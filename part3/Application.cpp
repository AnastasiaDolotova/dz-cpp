#include "Application.h"

void Application::run() {
    int key = 0;
    while (key != 4) {
        system("cls");
        menu();
        std::cin >> key;
        switch (key) {
            case 1: {
                system("cls");
                ptr = new RightTriangle;
                break;
            }
            case 2: {
                system("cls");
                ptr = new IsoscelesTriangle;
                break;
            }
            case 3: {
                system("cls");
                ptr = new EquilateralTriangle;
                break;
            }
            case 4: {
                system("cls");
                break;
            }
        }
        if (key != 4) {
            ptr->get();
            int k = 0;
            while (k != 4) {
                system("cls");
                std::cout << "==============Menu==============" << std::endl;
                std::cout << "1 - get area" << std::endl;
                std::cout << "2 - get perimeter" << std::endl;
                std::cout << "3 - info" << std::endl;
                std::cout << "4 - exit" << std::endl;
                std::cin >> k;
                switch (k) {
                    case 1: {
                        system("cls");
                        std::cout << "Area: " << ptr->area() << std::endl;
                        getch();
                        break;
                    }
                    case 2: {
                        system("cls");
                        std::cout << "Perimeter: " << ptr->perimeter() << std::endl;
                        getch();
                        break;
                    }
                    case 3: {
                        system("cls");
                        ptr->put();
                        getch();
                        break;
                    }
                    case 4: {
                        system("cls");
                        break;
                    }
                }
            }
        }
    }
    std::cout << "Press any key to exit..." << std::endl;
    delete ptr;
    getch();
}

void Application::menu() {
    std::cout << "==============Menu==============" << std::endl;
    std::cout << "1 - right triangle" << std::endl;
    std::cout << "2 - isosceles triangle" << std::endl;
    std::cout << "3 - equilateral triangle" << std::endl;
    std::cout << "4 - exit" << std::endl;
}
