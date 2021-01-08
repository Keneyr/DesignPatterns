#include "Employee.h"
#include <iostream>

int main()
{
    Employee* CEO = new Employee("John", "CEO", 30000);
    Employee* headSales = new Employee("Robert", "Head Sales", 20000);
    Employee* headMarketing = new Employee("Michel", "Head Marketing", 20000);

    Employee* clerk1 = new Employee("Laura", "Marketing", 10000);
    Employee* clerk2 = new Employee("Bob", "Marketing", 10000);

    Employee* salesExecutive1 = new Employee("Richard", "Sales", 10000);
    Employee* salesExecutive2 = new Employee("Rob", "Sales", 10000);

    CEO->add(*headSales);
    CEO->add(*headMarketing);

    headSales->add(*salesExecutive1);
    headSales->add(*salesExecutive2);

    headMarketing->add(*clerk1);
    headMarketing->add(*clerk2);

    cout << *CEO << endl;
    for (Employee* headEmployee : CEO->getSubordinates()) {
        cout<<*headEmployee<<endl;
        for (Employee* employee : headEmployee->getSubordinates()) {
            cout << *employee << endl;
        }
    }
    delete CEO;
    delete headSales;
    delete headMarketing;
    delete clerk1;
    delete clerk2;
    delete salesExecutive1;
    delete salesExecutive2;

    system("pause");
    return 0;
}
