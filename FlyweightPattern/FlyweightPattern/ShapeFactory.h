#pragma once
#include <map>
#include "Shape.h"
using namespace std;

class ShapeFactory
{
private:
    static map<string&, Shape&> circleMap;
public:
    static Shape& getCircle(string& color);
};