#include "HexaObserver.h"
#include <iostream>
using namespace std;

HexaObserver::HexaObserver(Subject& subject)
{
    this->subject = &subject;
    this->subject->attach(*this);
}
void HexaObserver::Update()
{
    cout << "Hex String " << subject->getState() << endl;
}