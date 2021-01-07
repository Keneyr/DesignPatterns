#include "StopState.h"
#include <iostream>
using namespace std;

void StopState::doAction(Context& context)
{
    cout << "Player is in stop state" << endl;
    context.setState(*this);
}

string StopState::toString()
{
    return "Stop State";
}