#include "Attribute.h"
#include "Die.h"

Attribute::Attribute()
{
    baseScore = 0;
    Die bDie;
    for (int i = 0; i < 3; i++)
    {
        bDie.roll();
        baseScore += bDie.getFaceValue();
    }
}

void Attribute::setName(std::string n)
{
    name = n;
}
std::string Attribute::getName()
{
    return name;
}
void Attribute::setScore(int score)
{
    currentScore = score;
}
int Attribute::getScore()
{
    return currentScore;
}
void Attribute::modifyScore(int mod)
{
    currentScore += mod;
}
int Attribute::getModifier()
{
    return (currentScore - 10) / 2;
}
void Attribute::resetCurrentScore()
{
    currentScore = baseScore;
}