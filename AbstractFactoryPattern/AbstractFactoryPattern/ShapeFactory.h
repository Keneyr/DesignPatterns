#pragma once

#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "global.h"
#include "AbstractFactory.h"

class ShapeFactory:public AbstractFactory
{
public:
    Shape* getShape(string& shapeType);
};
