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

///Converte coordenadas em índice linear
int Tabuleiro::mapearCoordenadaMatrizLinear(int x, int y)
{
    return x + y * TabuleiroX;
}

///Converte índice linear em coordenadas
void Tabuleiro::converteIndiceLinear(int indice, int* x, int* y)
{
    *y = indice / tabuleiroY;
    *x = indice % tabuleiroY;
}

///Zera o tabuleiro
int Tabuleiro::clean()
{
    for(int i = 0; i<(TamanhoTabuleiro); i++)
        this->tabuleiro[i] = 0;
}

void Tabuleiro::atualizaTabuleiro()
{
    this->clean();
    for(int i = 0; i < nJoaninhas; i++)
    {
        tabuleiro[mapearCoordenadaMatrizLinear(joaninhas[i].getX(), joaninhas[i].getY())] = i+1;
    }

}

///Retorna com base no índice linear
int Tabuleiro::getTabuleiro(int indice)
{
    return this->tabuleiro[indice];
}

///retorna com base nas coordenadas
int Tabuleiro::getTabuleiro(int x, int y)
{
    return this->tabuleiro[mapearCoordenadaMatrizLinear(x, y)];
}

///seta uma posição do tabuleiro
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
    cout << endl;
}

Joaninha* Tabuleiro::getJoaninha(int indice)
{
    return &this->joaninhas[indice];
}

///retorna o índice com base nas coordenadas
int Tabuleiro::getIndiceJoaninha(int x, int y)
{
    for(int i = 0; i < nJoaninhas; i++)
    {
        if(joaninhas[i].getX() == x && joaninhas[i].getY() == y)
            return i;
    }
    return -1;
}

bool Tabuleiro::estaNaMesmaPosicao(Joaninha j1, Joaninha j2)
{
    if((j1.getX() == j2.getX()) && (j1.getY() == j2.getY()))
        return true;
    return false;
}

bool Tabuleiro::estaForaDoTabuleiro(Joaninha j)
{
    if((j.getX()<0||j.getX()>=Tabuleiro::TabuleiroX)||(j.getY()<0||j.getY()>=Tabuleiro::tabuleiroY))
        return true;
    return false;
}
