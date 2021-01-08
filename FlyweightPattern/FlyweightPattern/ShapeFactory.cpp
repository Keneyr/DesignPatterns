#include "ShapeFactory.h"
#include "Circle.h"
#include <iostream>
using namespace std;

Shape& ShapeFactory::getCircle(string& color)
{
    Circle* circle = (Circle*)circleMap.get_allocator(color);

    if(circle==NULL)
    {
        circle = new Circle(color);
        circleMap.put(color, circle);
        cout << "Create circle of color : " << color << endl;
    }
    return *circle;
}
