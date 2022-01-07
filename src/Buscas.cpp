#include "Buscas.h"

Buscas::Buscas()
{
    //ctor
}

Buscas::~Buscas()
{
    //dtor
}

list<NoArvore> buscaEmProfundidade(NoArvore estadoInicial)
{
    list<NoArvore> solucao;
    ///ToDo
    return solucao;
}

list<NoArvore> buscaEmLargura(NoArvore estadoInicial)
{
    list<NoArvore> solucao;
    ///ToDo
    return solucao;
}

NoArvore Buscas::geraEstadoInicial()
{
    NoArvore estadoInicial;
    estadoInicial.getTabuleiro()->getJoaninha(0)->setX(0);
    estadoInicial.getTabuleiro()->getJoaninha(0)->setY(1);

    estadoInicial.getTabuleiro()->getJoaninha(1)->setX(0);
    estadoInicial.getTabuleiro()->getJoaninha(1)->setY(2);

    estadoInicial.getTabuleiro()->getJoaninha(2)->setX(2);
    estadoInicial.getTabuleiro()->getJoaninha(2)->setY(3);

    estadoInicial.getTabuleiro()->getJoaninha(3)->setX(1);
    estadoInicial.getTabuleiro()->getJoaninha(3)->setY(2);

    estadoInicial.getTabuleiro()->atualizaTabuleiro();
    estadoInicial.geraIdentificador();

    return estadoInicial;
}
