#include "Joaninha.h"

Joaninha::Joaninha()
{
    //ctor
}

Joaninha::Joaninha(int x, int y)
{
    this->x = x;
    this->y = y;
}

Joaninha::~Joaninha()
{
    //dtor
}

int Joaninha::getX()
{
    return this->x;
}

void Joaninha::setX(int x)
{
    this->x = x;
}

int Joaninha::getY()
{
    return this->y;
}

void Joaninha::setY(int y)
{
    this->y = y;
}
