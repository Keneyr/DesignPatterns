#include "ColorFactory.h"
#include "Red.h"
#include "Green.h"
#include "Blue.h"

Color* ColorFactory::getColor(string& colorType)
{
    if (colorType.empty())
    {
        return NULL;
    }
    else if (colorType == "Red")
    {
        return new Red();
    }
    else if (colorType == "Green")
    {
        return new Green();
    }
    else if (colorType == "Blue")
    {
        return new Blue();
    }
}
