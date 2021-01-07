#pragma once

#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "global.h"

class ShapeFactory
{
public:
    ShapeFactory() {};
    Shape* getShape(string& shapeType);
};