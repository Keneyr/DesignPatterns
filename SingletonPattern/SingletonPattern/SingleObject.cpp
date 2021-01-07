#include "SingleObject.h"
#include <iostream>
using namespace std;

SingleObject* SingleObject::instance = NULL;

SingleObject* SingleObject::getInstance()
{
    if(instance==NULL)
    {
        instance = new SingleObject();
    }
    return instance;
}

void SingleObject::showMessage()
{
    std::cout << "hello world~" << std::endl;
}
