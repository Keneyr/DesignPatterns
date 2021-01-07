#include "Context.h"
#include <cstddef>

Context::Context()
{
    state = NULL;
}

void Context::setState(State& state)
{
    this->state = &state;
}

State Context::getState() const
{
    return *state;
}




