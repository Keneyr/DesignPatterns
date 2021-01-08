#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(string& color)
{
    this->color = color;
}
void Circle::setX(int x)
{
    this->x = x;
}
void Circle::setY(int y)
{
    this->y = y;
}
void Circle::setRadius(int radius)
{
    this->radius = radius;
}
void Circle::draw()
{
    cout << "Circle:Draw()[Color: " << color << ",x: " << x << ",y: " << y << ",radius: " << radius << endl;
}


