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

Identificador NoArvore::geraIdentificador()
{
    Identificador id;
    id.setIdTabuleiro(id.converteTabuleiroEmInt(tabuleiro));
    id.setIdJoaninhas(id.converteJoaninhasEmInt(tabuleiro));
    return id;
}

void NoArvore::insereFilho(NoArvore* filho)
{
    this->filhos.push_back(filho);
}

NoArvore* NoArvore::getPrimeiroFilho()
{
    return (this->filhos.size() != 0) ? this->filhos.front() : NULL;
}

NoArvore* NoArvore::getUltimoFilho()
{
    return (this->filhos.size() != 0) ? this->filhos.back() : NULL;
}

Tabuleiro* NoArvore::getTabuleiro()
{
    return &this->tabuleiro;
}

