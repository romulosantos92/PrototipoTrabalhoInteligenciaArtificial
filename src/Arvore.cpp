#include "Arvore.h"

Arvore::Arvore(NoArvore* raiz)
{
    this->tamanhoVetorHashing = this->geraTamanhoVetorHashing();
    //this->estadosJaVisitados = new list<Identificador>[tamanhoVetorHashing];
    this->raiz = raiz;
}

Arvore::~Arvore()
{
    //dtor
}

bool Arvore::estadoJaFoiVisitado(NoArvore estadoAtual)
{
    /*
    if(estadosJaVisitados->size() == 0)
        return false;
    list<Identificador>::iterator iter =
        estadosJaVisitados[estadoAtual.getIdentificador().getIdTabuleiro()%tamanhoVetorHashing].begin();
    for( ; iter != estadosJaVisitados->end(); iter++)
    {
        if(estadoAtual.getIdentificador().ehIgual(*iter))
            return true;
    }*/
    for(list<Identificador>::iterator iter = estadosJaVisitados.begin(); iter!=estadosJaVisitados.end(); iter++)
        if(estadoAtual.getIdentificador().ehIgual(*iter))
            return true;
    return false;

}

void Arvore::insereEstadoVisitado(Identificador estado)
{
    //estadosJaVisitados[estado.getIdTabuleiro()%tamanhoVetorHashing].push_back(estado);
    estadosJaVisitados.push_back(estado);
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

NoArvore* Arvore::getRaiz()
{
    return this->raiz;
}

void Arvore::printEstadosVisitados()
{
    for(list<Identificador>::iterator iter = estadosJaVisitados.begin(); iter!=estadosJaVisitados.end(); iter++)
        (*iter).print();
}

void Arvore::montaArvore()
{
    auxMontaArvore(raiz, 1);
}

void Arvore::auxMontaArvore(NoArvore* no, int nivel)
{
    cout << endl << nivel;
    no->getIdentificador().print();
    geraFilhos(no);
    no->imprimeFilhos();
    cout << endl << "======================";
    for(list<NoArvore*>::iterator iter=no->getFilhos().begin(); iter!= no->getFilhos().end(); iter++)
    {
        (*iter)->print();
        /*
        if(nivel<10)
            auxMontaArvore(*iter, nivel+1);
        else
            break;*/
    }
}

void Arvore::geraFilhos(NoArvore* no)
{

    for(int i=0; i<64; i++)
    {
        NoArvore* aux = new NoArvore();
        *aux = *no;

        aux->getTabuleiro()->getJoaninha(2)->movimenta((i%4)+1);
        aux->getTabuleiro()->getJoaninha(1)->movimenta(((i/4)%4)+1);
        aux->getTabuleiro()->getJoaninha(0)->movimenta(((i/16)%4)+1);

        aux->getTabuleiro()->atualizaTabuleiro();
        aux->getIdentificador().atualizaIdentificador(*aux->getTabuleiro());

        if(aux->estadoValido() && !estadoJaFoiVisitado(*aux))
        {
            no->insereFilho(aux);
            cout << endl << "inserindo ";
            aux->getIdentificador().print();
        }
        else
        {
            cout << endl << "Nao inserido";
            aux->getIdentificador().print();
        }


    }
}
