#include "SingleObject.h"
#include <cstdlib>


int main()
{
    SingleObject::getInstance()->showMessage();

    system("pause");
    return 0;
}
