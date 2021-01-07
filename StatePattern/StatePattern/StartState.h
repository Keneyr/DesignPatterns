#pragma once
#include <string>
#include "State.h"
using namespace std;

class StartState:public State
{
public:
    void doAction(Context& context);
    string toString();
};