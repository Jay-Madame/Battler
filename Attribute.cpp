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
Attribute::Attribute(std::string Name)
{
    name = Name;
    Attribute();
} // assigns the base and current Scores in the same way as the default constructor.
Attribute::Attribute(std::string Name, int value)
{
    setName(Name);
    baseScore = value;
    resetCurrentScore();
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