#include "Joaninha.h"

Joaninha::Joaninha()
{
    //ctor
    this->x = 0;
    this->y = 0;
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

///Movimenta a joaninha para uma das posições predefinidas
///1 - cima; 2 - direita; 3 - baixo; 4 - esquerda;
void Joaninha::movimenta(int posicao)
{
    switch(posicao)
    {
        case 1:
        {
            this->y -= 1;
            break;
        }
        case 2:
        {
            this->x += 1;
            break;
        }
        case 3:
        {
            this->y += 1;
            break;
        }
        case 4:
        {
            this-> x-=1;
            break;
        }
        default:
        {
            cout << endl << "ERROR";
        }
    }
}
