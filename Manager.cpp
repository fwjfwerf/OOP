#include "Manager.h"

#include <iostream>

Manager::Manager(const std::string& name, int baseSalary, int teamSize)
    : Employee(name, baseSalary), teamSize(teamSize) {
}

void Manager::work() const {
    std::cout << "Manager organizes the work of a team of "
              << teamSize << " people." << std::endl;
}