#ifndef DESIGNER_H
#define DESIGNER_H

#include "Employee.h"

class Designer : public Employee {
private:
    std::string designTool;

public:
    Designer(const std::string& name, int baseSalary, const std::string& designTool);
    void work() const override;
};

#endif