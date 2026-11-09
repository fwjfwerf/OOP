#include "Designer.h"

#include <iostream>

Designer::Designer(const std::string& name, int baseSalary, const std::string& designTool)
    : Employee(name, baseSalary), designTool(designTool) {
}

void Designer::work() const {
    std::cout << "Designer creates layouts in " << designTool << "." << std::endl;
}