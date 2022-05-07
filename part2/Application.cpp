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
                std::cout << "D1 - D2 = " << *d3;
                getch();
                break;
            }
            case 6: {
                system("cls");
                *d3 = d1->mul(*d2);
                std::cout << "D1 * D2 = " << *d3;
                getch();
                break;
            }
            case 7: {
                system("cls");
                try {
                    *d3 = d1->div(*d2);
                    std::cout << "D1 / D2 = " << *d3;
                } catch (ZeroDivideException &e) {
                    std::cerr << e.what() << std::endl;
                }
                getch();
                break;
            }
            case 8: {
                break;
            }
        }
    }
    delete d1;
    delete d2;
    delete d3;
}

void Application::bit_menu() {
    p_1 = new BitString;
    p_2 = new BitString;
    p_3 = new BitString;

    BitString *d1 = dynamic_cast<BitString *>(p_1);
    BitString *d2 = dynamic_cast<BitString *>(p_2);
    BitString *d3 = dynamic_cast<BitString *>(p_3);

    int key = 0;
    while (key != 11) {
        system("cls");
        std::cout << "==============Menu==============" << std::endl;
        std::cout << "1 - input first Bit String" << std::endl;
        std::cout << "2 - input second Bit String" << std::endl;
        std::cout << "3 - print Bit Strings" << std::endl;
        std::cout << "4 - add Bit String" << std::endl;
        std::cout << "5 - bit1 && bit2" << std::endl;
        std::cout << "6 - bit1 || bit2" << std::endl;
        std::cout << "7 - bit1 ^ bit2" << std::endl;
        std::cout << "8 - not bit1" << std::endl;
        std::cout << "9 - >> bit1" << std::endl;
        std::cout << "10 - << bit1" << std::endl;
        std::cout << "11 - exit" << std::endl;
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
                std::cout << "B1 = " << *d1 << std::endl;
                std::cout << "B2 = " << *d2 << std::endl;
                getch();
                break;
            }
            case 4: {
                system("cls");
                d1->add(d2, d3);
                std::cout << "B1 + B2 = " << *d3;
                getch();
                break;
            }
            case 5: {
                system("cls");
                try {
                    *d3 = d1->b_and(*d2);
                    std::cout << "B1 && B2 = " << *d3;
                }
                catch (IncompatibleDimException e) {
                    std::cerr << e.what() << std::endl;
                }
                getch();
                break;
            }
            case 6: {
                system("cls");
                try {
                    *d3 = d1->b_or(*d2);
                }
                catch (IncompatibleDimException e) {
                    std::cerr << e.what() << std::endl;
                }
                std::cout << "B1 || B2 = " << *d3;
                getch();
                break;
            }
            case 7: {
                system("cls");
                try {
                    *d3 = d1->b_xor(*d2);
                }
                catch (IncompatibleDimException e) {
                    std::cerr << e.what() << std::endl;
                }
                std::cout << "B1 ^ B2 = " << *d3;
                getch();
                break;
            }
            case 8: {
                system("cls");
                *d3 = d1->b_not();
                std::cout << "!B1 = " << *d3;
                getch();
                break;
            }
            case 9: {
                system("cls");
                std::cout << "Input amount of bits: ";
                int n;
                std::cin >> n;
                std::cout << std::endl;
                d1->right(n);
                std::cout << "B1 = " << *d1;
                getch();
                break;
            }
            case 10: {
                system("cls");
                std::cout << "Input amount of bits: ";
                int n;
                std::cin >> n;
                std::cout << std::endl;
                d1->left(n);
                std::cout << "B1 = " << *d1;
                getch();
                break;
            }
            case 11: {
                break;
            }
        }
    }
    delete d1;
    delete d2;
    delete d3;
}
