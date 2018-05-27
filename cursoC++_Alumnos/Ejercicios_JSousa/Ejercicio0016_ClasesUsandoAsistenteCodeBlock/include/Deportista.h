#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <iostream>

using namespace std;

class Deportista
{

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    string deporte;



    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Deportista();
    public: Deportista(string deporte);
    ~Deportista();



    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setDeporte(string deporte) { this->deporte = deporte;}
    public: string getDeporte(void) { return deporte;}


};

#endif // DEPORTISTA_H
