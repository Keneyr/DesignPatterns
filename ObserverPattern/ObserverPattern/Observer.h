#pragma once
#include "Subject.h"

class Subject;

class Observer
{
protected:
    Subject* subject;
public:
    void Update();

};