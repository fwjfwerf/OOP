#include "Programmer.h"

#include <iostream>

Programmer::Programmer(const std::string& name, int baseSalary, const std::string& language)
    : Employee(name, baseSalary), language(language) {
}

void Programmer::work() const {
    std::cout << "Programmer writes code in " << language << "." << std::endl;
}