#include "StartState.h"
#include "Context.h"
#include <iostream>
using namespace std;

void StartState::doAction(Context& context)
{
    cout << "Player is in start state" << endl;
    context.setState(*this);
}
string StartState::toString()
{
    return "Start State";
}

