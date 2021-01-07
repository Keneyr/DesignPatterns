#pragma once
#include <string>
#include "State.h"
using namespace std;


class StopState:public State
{
public:
    void doAction(Context& context);
    string toString();
};