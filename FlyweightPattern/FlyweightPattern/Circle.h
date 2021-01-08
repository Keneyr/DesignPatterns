#pragma once
#include "Shape.h"
#include <string>
using namespace std;

class Circle:public Shape
{
private:
    string color;
    int x;
    int y;
    int radius;
public:
    Circle(string& color);
    void setX(int x);
    void setY(int y);
    void setRadius(int radius);
    void draw();

};
