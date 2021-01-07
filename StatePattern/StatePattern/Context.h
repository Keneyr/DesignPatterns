#pragma once
#include "State.h"

class Context
{
private:
    State* state;
public:
    Context();
    void setState(State& state);
    State getState() const;
};