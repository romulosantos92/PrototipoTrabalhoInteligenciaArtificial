#include "Identificador.h"

Identificador::Identificador()
{
	this->idTabuleiro = 0;
	this->idJoaninhas = 0;
}

Identificador::Identificador(const Identificador &id) ///Copy constructor para identificador
{
    this->idTabuleiro = id.idTabuleiro;
    this->idJoaninhas = id.idJoaninhas;
}

Identificador::~Identificador()
{

}

int Identificador::getIdTabuleiro()
{
	return this->idTabuleiro;
}

void Identificador::setIdTabuleiro(int id)
{
	this->idTabuleiro = id;
}

int Identificador::getIdJoaninhas()
{
	return this->idJoaninhas;
}

void Identificador::setIdJoaninhas(int id)
{
	this->idJoaninhas = id;
}

bool Identificador::ehIgual(Identificador id)
{
	if( id.idTabuleiro == this->idTabuleiro && id.idJoaninhas == this->idJoaninhas)
		return true;
	return false;
}

int Identificador::converteTabuleiroEmInt(Tabuleiro tabuleiro)
{
	int resultado = 0;
	for(int i = Tabuleiro::TamanhoTabuleiro-1; i >=0; i--)
	{
		if(tabuleiro.getTabuleiro(i))
			resultado += pow(2, (Tabuleiro::TamanhoTabuleiro - 1) - i);
	}
	return resultado;
}

int Identificador::converteJoaninhasEmInt(Tabuleiro tabuleiro)
{
	int resultado = 0;
	/*
	for(int i = Tabuleiro::nJoaninhas - 1; i >= 0; i--)
	{
		resultado += tabuleiro.getIndiceJoaninha(tabuleiro.getJoaninha(i)->getX(), tabuleiro.getJoaninha(i)->getY()) *
            pow(10, (Tabuleiro::nJoaninhas - 1) - i);
	}
	*/

	int expoente = 3;
	for (int i=0; i<Tabuleiro::TamanhoTabuleiro; i++)
	{
        if(tabuleiro.getTabuleiro(i))
        {
            resultado += tabuleiro.getTabuleiro(i) * pow(10, expoente);
            expoente--;
        }
	}
	return resultado;
}

void Identificador::atualizaIdentificador(Tabuleiro tabuleiro)
{
    this->idTabuleiro = converteTabuleiroEmInt(tabuleiro);
    this->idJoaninhas = converteJoaninhasEmInt(tabuleiro);
}

void Identificador::print()
{
    cout << endl << "Id: "<< this->idTabuleiro << "-" << this->idJoaninhas << endl;
}

