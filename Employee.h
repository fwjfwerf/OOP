#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    int baseSalary;

public:
    Employee(const std::string& name, int baseSalary);
    virtual ~Employee() = default;

    void printInfo() const;
    virtual void work() const = 0;
};

#endif