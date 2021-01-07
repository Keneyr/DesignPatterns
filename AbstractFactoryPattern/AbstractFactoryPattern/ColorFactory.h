#pragma once

#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "global.h"
#include "AbstractFactory.h"

class ColorFactory :public AbstractFactory
{
public:
    Color* getColor(string& colorType);
};
