#ifndef ARVORE_H
#define ARVORE_H

#include <iostream>
#include <list>
#include "NoArvore.h"

using namespace std;

class Arvore
{
    public:
        Arvore();
        virtual ~Arvore();

        bool estadoJaFoiVisitado(NoArvore estadoAtual);
        void insereEstadoVisitado(Identificador estado);

    protected:

    private:
        list<Identificador>* estadosJaVisitados;
        int geraTamanhoVetorHashing();
        int tamanhoVetorHashing;
};

#endif // ARVORE_H
