#include "ShapeFactory.h"

Shape* ShapeFactory::getShape(string& shapeType)
{
    if(shapeType.empty())
    {
        return NULL;
    }
    else if(shapeType=="Circle")
    {
        return new Circle();
    }
    else if(shapeType=="Rectangle")
    {
        return new Rectangle();
    }
    else if(shapeType == "Square")
    {
        return new Square();
    }
}
