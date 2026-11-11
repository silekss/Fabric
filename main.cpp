#include "VehicleFactory.h"
#define NOMINMAX
#include <Windows.h>
#include <iostream>
#include <limits>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    VehicleFactory factory;
    while (true) {
        std::cout << "\nОберіть транспорт:\n"
                  << "1 - легковий автомобіль\n"
                  << "2 - вантажівка\n"
                  << "3 - автобус\n"
                  << "4 - завершити програму\n"
                  << "Ваш вибір: ";

        int choice;
        if (!(std::cin >> choice)) {
            if (std::cin.eof()) break;
            std::cout << "Помилка: введіть число.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (choice == 4) break;

        // фабрика створює потрібний транспорт
        Vehicle* vehicle = factory.create(choice);
        if (vehicle == nullptr) {
            std::cout << "Такого транспорту немає. Оберіть 1, 2 або 3.\n";
            continue;
        }

        std::cout << "Тип: " << vehicle->getType() << '\n'
                  << "Максимальна швидкість: " << vehicle->getMaxSpeed()
                  << " км/год\n";
        vehicle->showDetails();
        vehicle->drive();
        delete vehicle;
    }
    return 0;
}
