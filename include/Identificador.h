#ifndef IDENTIFICADOR_H
#define IDENTIFICADOR_H

#include<iostream>

using namespace std;

class Identificador
{
	public:
		Identificador();
		Identificador(const Identificador &id); ///Copy constructor para identificador;
		virtual ~~Identificador();
		
		int getIdTabuleiro();
		void setIdTabuleiro(int id);
		int getIdJoaninhas();
		void setIdJoaninhas();
		
		bool ehIgual(Identificador* id); //Corrigir na UML
		
	protected:
	
	private:
		int idTabuleiro;
		int idJoaninhas;
		
		int converteTabuleiroEmInt(Tabuleiro tabuleiro);
		int converteJoaninhasEmInt(Joaninha joaninhas[], int tam); // Corrigir na UML
}

#endif // IDENTIFICADOR_H
