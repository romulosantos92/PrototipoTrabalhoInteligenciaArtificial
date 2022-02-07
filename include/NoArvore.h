#ifndef NOARVORE_H
#define NOARVORE_H

#include <iostream>
#include <list>
#include "Tabuleiro.h"
#include <cmath>
#include "Identificador.h"

using namespace std;

class NoArvore
{
    public:
        NoArvore();
        NoArvore(Tabuleiro tabuleiro);
        NoArvore(const NoArvore &no);   ///Copy constructor para NoArvore
        virtual ~NoArvore();

        Identificador geraIdentificador();
        Identificador getIdentificador();
        void insereFilho(NoArvore* filho);
        void imprimeFilhos();
        NoArvore* getPrimeiroFilho();
        NoArvore* getUltimoFilho();
        list<NoArvore*> getFilhos();
        Tabuleiro* getTabuleiro();
        bool estadoValido();
        void print();

    protected:

    private:
        Tabuleiro tabuleiro;
        Identificador identificador;
        list<NoArvore*> filhos;
};

#endif // NOARVORE_H
