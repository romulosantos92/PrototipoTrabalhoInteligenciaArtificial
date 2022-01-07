#include "NoArvore.h"

NoArvore::NoArvore()
{
    //ctor
}

NoArvore::NoArvore(Tabuleiro tabuleiro)
{
    this->tabuleiro = tabuleiro;
}

NoArvore::NoArvore(const NoArvore &no)
{
    this->tabuleiro = no.tabuleiro;
    this->identificador = this->geraIdentificador();
}

NoArvore::~NoArvore()
{
    //dtor
}

int NoArvore::geraIdentificador()
{
    int id = 0;
    int tamTabuleiro = (Tabuleiro::TabuleiroX * Tabuleiro::tabuleiroY);

    for(int i = 0; i < (Tabuleiro::TabuleiroX * Tabuleiro::tabuleiroY);  i++)
    {

        id += this->tabuleiro.getTabuleiro(i) * pow(2, tamTabuleiro -1 - i);
    }

    return id;
}

Tabuleiro* NoArvore::getTabuleiro()
{
    return &this->tabuleiro;
}

list<NoArvore*> NoArvore::getFilhos()
{
    return this->filhos;
}

void NoArvore::insereFilho(NoArvore* filho)
{
    this->filhos.push_back(filho);
}

Estado* NoArvore::geraEstado()
{
    Estado* estado = new Estado();
    for(int i=0; i< Tabuleiro::nJoaninhas; i++)
    {
        this->tabuleiro->getJoaninha(Tabuleiro::nJoaninhas - i)->getX();
    }
    return
}
