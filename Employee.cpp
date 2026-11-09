#include "Employee.h"

#include <iostream>

Employee::Employee(const std::string& name, int baseSalary)
    : name(name), baseSalary(baseSalary) {
}

void Employee::printInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Base salary: " << baseSalary << " UAH" << std::endl;
}