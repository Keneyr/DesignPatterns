#pragma once
#include "Observer.h"

class HexaObserver:public Observer
{
public:
    HexaObserver(Subject& subject);
    void Update();
};