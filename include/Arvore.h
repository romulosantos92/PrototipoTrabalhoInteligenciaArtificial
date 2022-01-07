#ifndef ARVORE_H
#define ARVORE_H

#include <iostream>
#include <list>
#include "NoArvore.h"
#include "Estado.h"

using namespace std;

class Arvore
{
    public:
        Arvore();
        virtual ~Arvore();

        bool estadoJaFoiVisitado(NoArvore estadoAtual);
        void insereEstado(Estado estado);

    protected:

    private:
        list<Identificador>* estados;
        int geraTamanhoVetorHashing();
        int tamanhoVetorHashing;
};

#endif // ARVORE_H
