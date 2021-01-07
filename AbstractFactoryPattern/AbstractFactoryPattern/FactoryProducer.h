#pragma once
#include "global.h"
#include "AbstractFactory.h"

class FactoryProducer
{
public:
   static AbstractFactory* getFactory(std::string& factoryChoice);
};
