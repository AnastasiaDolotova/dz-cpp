#include "Application.h"

void Application::run() {
    int key = 0;
    while (key != 3) {
        system("cls");
        menu();
        std::cin >> key;
        switch (key) {
            case 1: {
                system("cls");
                dec_menu();
                getch();
                break;
            }
            case 2: {
                system("cls");
                bit_menu();
                getch();
                break;
            }
            case 3: {
                system("cls");
                break;
            }
        }
    }
    std::cout << "Press any key to exit..." << std::endl;
    getch();
}

void Application::menu() {
    std::cout << "==============Menu==============" << std::endl;
    std::cout << "1 - work with Decimal" << std::endl;
    std::cout << "2 - work with BitString" << std::endl;
    std::cout << "3 - exit" << std::endl;
}

void Application::dec_menu() {
    p_1 = new Decimal;
    p_2 = new Decimal;
    p_3 = new Decimal;

    Decimal *d1 = dynamic_cast<Decimal *>(p_1);
    Decimal *d2 = dynamic_cast<Decimal *>(p_2);
    Decimal *d3 = dynamic_cast<Decimal *>(p_3);

    int key = 0;
    while (key != 8) {
        system("cls");
        std::cout << "==============Menu==============" << std::endl;
        std::cout << "1 - input first Decimal" << std::endl;
        std::cout << "2 - input second Decimal" << std::endl;
        std::cout << "3 - print Decimals" << std::endl;
        std::cout << "4 - add Decimals" << std::endl;
        std::cout << "5 - subtract Decimals" << std::endl;
        std::cout << "6 - multiply Decimals" << std::endl;
        std::cout << "7 - divide Decimals" << std::endl;
        std::cout << "8 - exit" << std::endl;
        std::cin >> key;
        switch (key) {
            case 1: {
                system("cls");
                std::cin >> *d1;
                getch();
                break;
            }
            case 2: {
                system("cls");
                std::cin >> *d2;
                getch();
                break;
            }
            case 3: {
                system("cls");
                std::cout << "D1 = " << *d1 << std::endl;
                std::cout << "D2 = " << *d2 << std::endl;
                getch();
                break;
            }
            case 4: {
                system("cls");
                d1->add(d2, d3);
                std::cout << "D1 + D2 = " << *d3;
                getch();
                break;
            }
            case 5: {
                system("cls");
                *d3 = d1->sub(*d2);
                std::cout << "D1 = D1 - D2 = " << *d3;
                getch();
                break;
            }
            case 6: {
                system("cls");
                *d3 = d1->mul(*d2);
                std::cout << "D1 = D1 * D2 = " << *d3;
                getch();
                break;
            }
            case 7: {
                system("cls");
                try {
                    *d3 = d1->div(*d2);
                    std::cout << "D1 = D1 / D2 = " << *d3;
                } catch (ZeroDivideException &e) {
                    std::cout << e.what() << std::endl;
                }
                getch();
                break;
            }
            case 8: {
                system("cls");
                break;
            }
        }
    }
    delete d1;
    delete d2;
    delete d3;
}

void Application::bit_menu() {

}
