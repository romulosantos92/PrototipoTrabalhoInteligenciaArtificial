#include "Arvore.h"

Arvore::Arvore()
{
    this->tamanhoVetorHashing = this->geraTamanhoVetorHashing();
    cout << "tvh" << tamanhoVetorHashing << endl;
    this->estados = new list<Estado>[tamanhoVetorHashing];
}

Arvore::~Arvore()
{
    //dtor
}

bool Arvore::estadoJaFoiVisitado(NoArvore estadoAtual)
{

    list<Estado>::iterator iter;
    //for(iter = estados[estado%tamanhoVetorHashing].begin(); iter != estados[estado%tamanhoVetorHashing].end(); iter++)
    {
        ///ToDo
    }
}

void Arvore::insereEstado(Estado estado)
{
    //estados[tamanhoVetorHashing%estado].push_back(estado);
    ///todo
}

int Arvore::geraTamanhoVetorHashing()
{
    int tamanhoTabuleiro = (Tabuleiro::TabuleiroX * Tabuleiro::tabuleiroY)-1; ///-1 por causa da Joaninha que não mexe
    int tamanhoVetorHashing = 1;
    for(int i = 0; i<Tabuleiro::nJoaninhas; i++)
    {
        tamanhoVetorHashing *= tamanhoTabuleiro - i;    ///Calculando o numero de casos possíveis
    }
    return tamanhoVetorHashing/(Tabuleiro::nJoaninhas^2);
}
