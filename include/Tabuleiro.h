#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <iostream>
#include "Joaninha.h"

using namespace std;

class Tabuleiro
{


    public:
        static const int TabuleiroX = 4;
        static const int tabuleiroY = 4;
        static const int nJoaninhas = 4;
        static const int indiceJoaninhaParada = nJoaninhas-1; ///Por padrão será a última do vetor

        Tabuleiro();
        Tabuleiro(const Tabuleiro &tab); ///Copy constructor de Tabuleiro
        virtual ~Tabuleiro();

        int mapearCoordenadaMatrizLinear(int x, int y);
        int clean();
        void atualizaTabuleiro();
        int getTabuleiro(int indice);
        int getTabuleiro(int x, int y);
        void setTabuleiro(int x, int y, int val);
        void print();
        Joaninha* getJoaninha(int indice);

    protected:

    private:
        int* tabuleiro = new int[TabuleiroX*tabuleiroY];
        Joaninha joaninhas[nJoaninhas];
};

#endif // TABULEIRO_H
