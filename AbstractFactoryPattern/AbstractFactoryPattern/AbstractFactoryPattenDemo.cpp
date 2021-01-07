#include "AbstractFactory.h"
#include "FactoryProducer.h"

string Shapes[3] = 
{
    "Circle",
    "Square",
    "Rectangle"
};
string Colors[3] =
{
    "Red",
    "Green",
    "Blue"
};
string factoryChoices[2] =
{
    "SHAPE",
    "COLOR"
};

int main()
{
    AbstractFactory* abstrctShapeFactory = FactoryProducer::getFactory(factoryChoices[0]);
    Shape* circleShape = abstrctShapeFactory->getShape(Shapes[0]);
    circleShape->draw();

    system("pause");
    return 0;
}