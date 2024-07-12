#include "Die.h"
#include <iostream>
#include <string>

Die::Die() : SIDES(6)
{
    roll();
}

Die::Die(int sides) : SIDES(sides)
{
    roll();
}
void Die::roll()
{
    faceValue = rand() % SIDES + 1;
}

int Die::getFaceValue()
{
    return faceValue;
}
int Die::getSides()
{
    return sides;
}  
std::string Die::dieToString()
{
    roll();
    std::string result = "A " + std::to_string(SIDES) + "-sided die showing a " + std::to_string(faceValue);
    return result;
}