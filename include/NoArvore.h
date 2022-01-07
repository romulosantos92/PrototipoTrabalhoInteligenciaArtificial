#ifndef NOARVORE_H
#define NOARVORE_H

#include <iostream>
#include <list>
#include "Tabuleiro.h"
#include <cmath>
#include "Estado.h"
#include "Identificador"

using namespace std;

class NoArvore
{
    public:
        NoArvore();
        NoArvore(Tabuleiro tabuleiro);
        NoArvore(const NoArvore &no);   ///Copy constructor para NoArvore
        virtual ~NoArvore();

        Identificador geraIdentificador();
        void insereFilho(NoArvore* filho);
        NoArvore* getPrimeiroFilho();
        NoArvore* getUltimoFilho();
        Tabuleiro* getTabuleiro(); //Verificar e corrigir na UML
        list<NoArvore*> getFilhos(); //Remover da implementação
        Estado* geraEstado(); //Remover da implementação

    protected:

    private:
        Tabuleiro tabuleiro;
        Identificador identificador;
        list<NoArvore*> filhos;
};

#endif // NOARVORE_H
