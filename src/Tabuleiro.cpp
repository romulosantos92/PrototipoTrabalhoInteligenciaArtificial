#include "Tabuleiro.h"

Tabuleiro::Tabuleiro()
{
    //ctor
    clean();
}

Tabuleiro::Tabuleiro(const Tabuleiro &tab)
{
    this->tabuleiro = tab.tabuleiro;
    for(int i=0; i<Tabuleiro::nJoaninhas; i++)
        this->joaninhas[i] = tab.joaninhas[i];
}

Tabuleiro::~Tabuleiro()
{
    //dtor
}
int Tabuleiro::mapearCoordenadaMatrizLinear(int x, int y)
{
    return x + y * TabuleiroX;
}

int Tabuleiro::clean()
{
    for(int i = 0; i<(TabuleiroX*tabuleiroY); i++)
        this->tabuleiro[i] = 0;
}

void Tabuleiro::atualizaTabuleiro()
{
    this->clean();
    for(int i = 0; i < nJoaninhas; i++)
    {
        tabuleiro[mapearCoordenadaMatrizLinear(joaninhas[i].getX(), joaninhas[i].getY())] = 1;
    }
}

int Tabuleiro::getTabuleiro(int indice)
{
    return this->tabuleiro[indice];
}

int Tabuleiro::getTabuleiro(int x, int y)
{
    return this->tabuleiro[mapearCoordenadaMatrizLinear(x, y)];
}

void Tabuleiro::setTabuleiro(int x, int y, int val)
{
    this->tabuleiro[mapearCoordenadaMatrizLinear(x, y)] = val;
}

void Tabuleiro::print()
{
    for (int y = 0; y < tabuleiroY; y++)
    {
        for(int x = 0; x < TabuleiroX; x++)
        {
            cout << this->tabuleiro[mapearCoordenadaMatrizLinear(x, y)] << " ";
        }
        cout << endl;
    }
}

Joaninha* Tabuleiro::getJoaninha(int indice)
{
    return &this->joaninhas[indice];
}

