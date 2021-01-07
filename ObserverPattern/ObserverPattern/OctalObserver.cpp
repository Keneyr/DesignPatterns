#include "OctalObserver.h"
#include <iostream>
using namespace std;

OctalObserver::OctalObserver(Subject& subject)
{
    this->subject = &subject;
    this->subject->attach(*this);
}
void OctalObserver::Update()
{
    cout << "Hex String " << subject->getState() << endl;
}

