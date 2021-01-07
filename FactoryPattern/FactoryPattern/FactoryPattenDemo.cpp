#include "ShapeFactory.h"

string Shapes[2] = 
{
    "Circle",
    "Square"
};

int main()
{
    ShapeFactory *shapeFactory = new ShapeFactory();

    Shape* circleShape = shapeFactory->getShape(Shapes[0]);
    circleShape->draw();
    delete circleShape;

    Shape* squareShape = shapeFactory->getShape(Shapes[1]);
    squareShape->draw();
    delete squareShape;

    system("pause");
    return 0;
}