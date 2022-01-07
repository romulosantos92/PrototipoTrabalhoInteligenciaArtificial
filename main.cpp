#include <iostream>
#include "Buscas.h"

using namespace std;

int main()
{

    NoArvore no = Buscas::geraEstadoInicial();
    no.getTabuleiro()->print();
    cout << endl << no.geraIdentificador();
    return 0;
}
