#include <iostream>
#include "Buscas.h"

using namespace std;

int main()
{
    NoArvore no = Buscas::geraEstadoInicial();
    Arvore arv(&no);
    arv.montaArvore();


    return 0;
}
