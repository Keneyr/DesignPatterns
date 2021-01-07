#include "BinaryObserver.h"
#include <iostream>
using namespace std;

BinaryObserver::BinaryObserver(Subject& subject)
{
    this->subject = &subject;
    this->subject->attach(*this);
}
void BinaryObserver::Update()
{
    cout << "Hex String " << subject->getState() << endl;
}
