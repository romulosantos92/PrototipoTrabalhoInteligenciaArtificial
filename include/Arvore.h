#ifndef ARVORE_H
#define ARVORE_H

#include <iostream>
#include <list>
#include "NoArvore.h"

using namespace std;

class Arvore
{
    public:
        Arvore(NoArvore* raiz);
        virtual ~Arvore();

        bool estadoJaFoiVisitado(NoArvore estadoAtual);
        void insereEstadoVisitado(Identificador estado);
        NoArvore* getRaiz();

        void printEstadosVisitados();
        void montaArvore();
        void auxMontaArvore(NoArvore* no, int nivel);
        void geraFilhos(NoArvore*);

    protected:

    private:
        list<Identificador> estadosJaVisitados;
        int geraTamanhoVetorHashing();
        int tamanhoVetorHashing;
        NoArvore* raiz;
};

#endif // ARVORE_H
