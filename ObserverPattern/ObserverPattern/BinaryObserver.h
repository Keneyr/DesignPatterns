#pragma once

#include "Observer.h"

class BinaryObserver:public Observer
{
public:
    BinaryObserver(Subject& subject);
    void Update();
};