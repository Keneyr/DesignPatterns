#include "FactoryProducer.h"
#include "ShapeFactory.h"
#include "ColorFactory.h"

AbstractFactory* FactoryProducer::getFactory(std::string& factoryChoice)
{
    if (factoryChoice == "SHAPE") {
        return new ShapeFactory();
    }
    else if (factoryChoice == "COLOR") {
        return new ColorFactory();
    }
    return NULL;
}
