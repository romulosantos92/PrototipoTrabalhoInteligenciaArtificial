#include "Arvore.h"

Arvore::Arvore()
{
    this->tamanhoVetorHashing = this->geraTamanhoVetorHashing();
    this->estadosJaVisitados = new list<Identificador>[tamanhoVetorHashing];
}

Arvore::~Arvore()
{
    //dtor
}

bool Arvore::estadoJaFoiVisitado(NoArvore estadoAtual)
{

    list<Identificador>::iterator iter;
    //for(iter = estados[estado%tamanhoVetorHashing].begin(); iter != estados[estado%tamanhoVetorHashing].end(); iter++)
    {
        ///ToDo
    }
}

void Arvore::insereEstadoVisitado(Identificador estado)
{

}

int Arvore::geraTamanhoVetorHashing()
{
    int tamanhoTabuleiro = (Tabuleiro::TamanhoTabuleiro)-1; ///-1 por causa da Joaninha que não mexe
    int tamanhoVetorHashing = 1;
    for(int i = 0; i<Tabuleiro::nJoaninhas; i++)
    {
        tamanhoVetorHashing *= tamanhoTabuleiro - i;    ///Calculando o numero de casos possíveis
    }
    return tamanhoVetorHashing/(Tabuleiro::nJoaninhas^2);
}
