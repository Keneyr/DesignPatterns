#pragma once
#include <string>
#include <vector>
using namespace std;
class Employee
{
private:
    string name;
    string dept;
    int salary;
    vector<Employee*> subordinates;

public:
    Employee(string name, string dept, int sal) :name(name), dept(dept), salary(sal) {};
    void add(Employee& e);
    void remove(Employee& e);
    vector<Employee*> getSubordinates();
    string toString();
};

ostream& operator<<(ostream& os, Employee& employee);