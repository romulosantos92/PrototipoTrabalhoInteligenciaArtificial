#include "NoArvore.h"

NoArvore::NoArvore()
{
    //ctor
}

NoArvore::NoArvore(Tabuleiro tabuleiro)
{
    this->tabuleiro = tabuleiro;
}

NoArvore::NoArvore(const NoArvore &no)
{
    this->tabuleiro = no.tabuleiro;
    this->identificador = this->geraIdentificador();
}

NoArvore::~NoArvore()
{
    //dtor
}

Identificador NoArvore::geraIdentificador()
{
    Identificador id;
    id.setIdTabuleiro(id.converteTabuleiroEmInt(tabuleiro));
    id.setIdJoaninhas(id.converteJoaninhasEmInt(tabuleiro));
    this->identificador = id;
    return id;
}

Identificador NoArvore::getIdentificador()
{
    return this->identificador;
}

void NoArvore::insereFilho(NoArvore* filho)
{
    this->filhos.push_back(filho);
}

void NoArvore::imprimeFilhos()
{
    int cont = 1;
    for (list<NoArvore*>::iterator iter = filhos.begin();iter!=filhos.end(); iter++)
    {
        (*iter)->getTabuleiro()->atualizaTabuleiro();
        (*iter)->identificador.atualizaIdentificador(*(*iter)->getTabuleiro());
        cout << cont;
        (*iter)->print();
        cont ++;
    }
}

NoArvore* NoArvore::getPrimeiroFilho()
{
    return (this->filhos.size() != 0) ? this->filhos.front() : NULL;
}

NoArvore* NoArvore::getUltimoFilho()
{
    return (this->filhos.size() != 0) ? this->filhos.back() : NULL;
}

list<NoArvore*> NoArvore::getFilhos()
{
    return this->filhos;
}

Tabuleiro* NoArvore::getTabuleiro()
{
    return &this->tabuleiro;
}

///Verifica se não há duas joaninhas na mesma posição ou alguma fora do tabuleiro
bool NoArvore::estadoValido()
{
    for (int i=0; i<Tabuleiro::nJoaninhas-1; i++)
    {
        for (int j=i+1; j<Tabuleiro::nJoaninhas; j++)
        {
            if((tabuleiro.estaNaMesmaPosicao(*tabuleiro.getJoaninha(i), *tabuleiro.getJoaninha(j))) ||
                tabuleiro.estaForaDoTabuleiro(*tabuleiro.getJoaninha(i)) ||
                tabuleiro.estaForaDoTabuleiro(*tabuleiro.getJoaninha(j)))
                return false;
        }
    }
    return true;
}

void NoArvore::print()
{
    cout << endl << "===============";
    this->identificador.print();
    cout << "===============" << endl;
    this->tabuleiro.print();
    cout << endl;
}

