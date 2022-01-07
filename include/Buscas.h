#ifndef BUSCAS_H
#define BUSCAS_H

#include <iostream>
#include <list>
#include "Arvore.h"

using namespace std;

class Buscas
{
    public:
        Buscas();
        virtual ~Buscas();

        static NoArvore geraEstadoInicial();
        static list<NoArvore> buscaEmProfundidade(NoArvore estadoInicial);
        static list<NoArvore> buscaEmLargura(NoArvore estadoInicial);

    protected:

    private:

        void aplicaRegrasTransicao();

};

#endif // BUSCAS_H
