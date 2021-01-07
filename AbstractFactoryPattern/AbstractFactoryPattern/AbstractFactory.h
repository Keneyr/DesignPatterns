#pragma once
#include "Color.h"
#include "global.h"
#include "Shape.h"

class AbstractFactory
{
public:
    virtual Color* getColor(string& color);
    virtual Shape* getShape(string& shape);
};
