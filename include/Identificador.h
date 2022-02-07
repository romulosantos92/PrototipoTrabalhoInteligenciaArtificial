#ifndef IDENTIFICADOR_H
#define IDENTIFICADOR_H

#include<iostream>
#include<cmath>

#include "Tabuleiro.h"

using namespace std;

class Identificador
{
	public:
		Identificador();
		Identificador(const Identificador &id); ///Copy constructor para identificador;
		virtual ~Identificador();

		int getIdTabuleiro();
		void setIdTabuleiro(int id);
		int getIdJoaninhas();
		void setIdJoaninhas(int id);

		bool ehIgual(Identificador id); //Corrigir na UML
		int converteTabuleiroEmInt(Tabuleiro tabuleiro); // Corrigir na UML
		int converteJoaninhasEmInt(Tabuleiro tabuleiro); // Corrigir na UML
		void atualizaIdentificador(Tabuleiro Tabuleiro); // corr.
		void print();

	protected:

	private:
		int idTabuleiro;
		int idJoaninhas;


};

#endif // IDENTIFICADOR_H
