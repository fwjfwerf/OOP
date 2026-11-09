#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(const std::string& name, int baseSalary, int teamSize);
    void work() const override;
};

#endif