#pragma once
#ifndef DIE_H
#define DIE_H

#include <iostream>

class Die
{
private:
    int faceValue, sides;
    const int SIDES;

public:
    Die();
    Die(int sides);
    void roll();
    int getFaceValue();
    int getSides();
    std::string dieToString();
};

#endif