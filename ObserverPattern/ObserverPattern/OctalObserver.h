#pragma once

#include "Observer.h"

class OctalObserver:public Observer
{
public:
    OctalObserver(Subject& subject);
    void Update();
};