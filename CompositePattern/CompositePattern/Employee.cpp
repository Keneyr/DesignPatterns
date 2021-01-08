#include "Employee.h"

void Employee::add(Employee& e)
{
    subordinates.push_back(&e);
}
void Employee::remove(Employee& e)
{
    //subordinates.erase(&e);
    vector<Employee*>::iterator it;
    for(it = subordinates.begin();it!=subordinates.end();++it)
    {
        if(*it==&e)
        {
            it = subordinates.erase(it);
        }
    }
}
vector<Employee*> Employee::getSubordinates()
{
    return subordinates;
}
string Employee::toString()
{
    return ("Employee:[Name:" + name + ", dept:" + dept + ", salary: " + to_string(salary) + " ]");
}

ostream& operator<<(ostream& os, Employee& employee)
{
    os << employee.toString();
    return os;
}