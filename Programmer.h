#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Employee.h"

class Programmer : public Employee {
private:
    std::string language;

public:
    Programmer(const std::string& name, int baseSalary, const std::string& language);
    void work() const override;
};

#endif