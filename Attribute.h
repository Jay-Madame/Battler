#pragma once
#include <iostream>
#include "Die.h"

/*
string getName(),
void setName(string name),
int getScore(),
void modifyScore(int mod),  should modify currentScore by adding mod.
int getModifier().  Should return the (currentScore - 10) / 2
void resetCurrentScore()   should return currentScore to baseScore
a default constructor that initializes the baseScore by "rolling" three dice and adding their faceValues.
The currentScore should initially be a copy of the baseScore.
*/
class Attribute
{
private:
    std::string name;
    int currentScore, mod;
    int baseScore;

public:
    Attribute();
    void setName(std::string n);
    std::string getName();
    void setScore(int score);
    int getScore();
    void modifyScore(int mod);
    int getModifier();
    void resetCurrentScore();
};