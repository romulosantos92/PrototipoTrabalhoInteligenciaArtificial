#ifndef JOANINHA_H
#define JOANINHA_H

#include <iostream>

using namespace std;


class Joaninha
{
    public:
        Joaninha();
        Joaninha(int x, int y);
        virtual ~Joaninha();

        int getX();
        void setX(int x);
        int getY();
        void setY(int y);
        void movimenta(int posicao);///UML

    protected:

    private:
        int x;
        int y;

};

#endif // JOANINHA_H
