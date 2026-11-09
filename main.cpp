#include "Programmer.h"
#include "Designer.h"
#include "Manager.h"

#include <iostream>

int main() {
    Programmer programmer("Daniil", 35000, "C++");
    Designer designer("Olena", 30000, "Figma");
    Manager manager("Maksym", 40000, 6);

    const Employee* employees[] = {&programmer, &designer, &manager};

    for (const Employee* employee : employees) {
        employee->printInfo();
        employee->work();
        std::cout << std::endl;
    }

    return 0;
}