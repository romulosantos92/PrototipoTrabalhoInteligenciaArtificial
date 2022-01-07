Identificador::Identificador()
{
	this->idTabuleiro = 0;
	this->idJoaninhas = 0;
}
	
Identificador::Identificador(const Identificador &id); ///Copy constructor para identificador
{
	id.idTabuleiro = this->idTabuleiro;
	id.idJoaninhas = this->idJoaninhas;
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
	this-:idTabuleiro = id;
}
	
int Identificador::getIdJoaninhas()
{
	return this->idJoaninhas;
}
	
void Identificador::setIdJoaninhas(int id)
{
	this->idJoaninhas = id;
}
	
bool Identificador::ehIgual(Identificador* id)
{
	if( id->idTabuleiro == this->idTabuleiro && id->idJoaninhas == this->idJoaninhas)
		return true;
	return false;
}
	
int Identificador::converteTabuleiroEmInt(Tabuleiro tabuleiro)
{
	int resultado = 0;
	int tamTabuleiro = (Tabuleiro::tabuleiroX * Tabuleiro::tabuleiroY);
	for(int i = tamTabuleiro; i >=0; i--)
	{
		if(tabuleiro.getTabuleiro(i)
			resultado += Math.pow(2, (tamTabuleiro - i));
	}
	return resultado;
}
	
int Identificador::converteJoaninhasEmInt(Joaninha joaninhas[], int tam)
{
	int resultado = 0;
	for(int i = tam - 1; i >= 0; i--)
	{
		resultado += ....... * 
	}
}
	
