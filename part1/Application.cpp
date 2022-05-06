#include "Application.h"

void Application::run() {
    int key = 0;
    Bankomat bankomat;
    std::cin >> bankomat;
    while (key != 6) {
        system("cls");
        menu();
        std::cin >> key;
        switch (key) {
            case 1: {
                system("cls");
                Money money;
                std::cin >> money;
                bankomat.banknotes_placement(money);
                getch();
                break;
            }
            case 2: {
                system("cls");
                Money money;
                std::cin >> money;
                try {
                    bankomat.money_withdrawal(money);
                } catch (MinimalSumException &e) {
                    std::cout << e.what() << std::endl;
                } catch (MaximumSumException &e) {
                    std::cout << e.what() << std::endl;
                }
                getch();
                break;
            }
            case 3: {
                system("cls");
                std::cout << "Bankomat number: " << bankomat.get_number();
                getch();
                break;
            }
            case 4: {
                system("cls");
                std::cout << "Total amount: " << bankomat.to_string();
                getch();
                break;
            }
            case 5: {
                system("cls");
                std::cout << bankomat;
                getch();
                break;
            }
            case 6: {
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
    std::cout << "1 - place money" << std::endl;
    std::cout << "2 - take money" << std::endl;
    std::cout << "3 - number of Bankomat" << std::endl;
    std::cout << "4 - total amount of money" << std::endl;
    std::cout << "5 - info" << std::endl;
    std::cout << "6 - exit" << std::endl;
}
