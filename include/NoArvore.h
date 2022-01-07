#ifndef NOARVORE_H
#define NOARVORE_H

#include <iostream>
#include <list>
#include "Tabuleiro.h"
#include <cmath>
#include "Estado.h"

using namespace std;

class NoArvore
{
    public:
        NoArvore();
        NoArvore(Tabuleiro tabuleiro);
        NoArvore(const NoArvore &no);   ///Copy constructor para NoArvore
        virtual ~NoArvore();

        int geraIdentificador();
        Tabuleiro* getTabuleiro();
        list<NoArvore*> getFilhos();
        void insereFilho(NoArvore* filho);
        Estado* geraEstado();

    protected:

    private:
        Tabuleiro tabuleiro;
        int identificador;
        list<NoArvore*> filhos;
};

#endif // NOARVORE_H
