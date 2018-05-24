#include <iostream>
using namespace std;
#ifndef ORDENADOR_H
#define ORDENADOR_H

class Ordenador
{
    public:
        Ordenador();
        virtual ~Ordenador();

        string Getmarca() {
             return marca;
        }
        void Setmarca(string val) {
             marca = val;
        }
        void metodoNoImplementado();
    protected:

    private:
        string marca;
};

#endif // ORDENADOR_H
