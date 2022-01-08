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
        static const int TamanhoTabuleiro = TabuleiroX * tabuleiroY;
        static const int nJoaninhas = 4;
        static const int indiceJoaninhaParada = nJoaninhas-1; ///Por padrão será a última do vetor. Corrigir na UML

        Tabuleiro();
        Tabuleiro(const Tabuleiro &tab); ///Copy constructor de Tabuleiro
        virtual ~Tabuleiro();

        int mapearCoordenadaMatrizLinear(int x, int y);
        void converteIndiceLinear(int indice, int* x, int* y); ///Adicionar ao UML
        int clean();
        void atualizaTabuleiro();
        int getTabuleiro(int indice); ///Retorna a posição a partir do índice Linear Ok
        int getTabuleiro(int x, int y); ///Retorna a partir das coordenadas
        void setTabuleiro(int x, int y, int val);
        void print();
        Joaninha* getJoaninha(int indice);
        int getIndiceJoaninha(int x, int y); //Adicionar ao UML


    protected:

    private:
        int* tabuleiro = new int[TamanhoTabuleiro];
        Joaninha joaninhas[nJoaninhas];
};

#endif // TABULEIRO_H
