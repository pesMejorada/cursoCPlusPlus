#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    private: string nombre;
    private: string dni;
    protected: string nacionalidad;

    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Persona();
    public: Persona(string nombre, string dni, string nacionalidad);
    ~Persona();


    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setNombre(string nombre) { this->nombre = nombre;}
    public: string getNombre(void) { return nombre;}
    public: void setDni(string dni) { this->dni = dni;}
    public: string getDni(void) {return dni;}
    public: void setNacionalidad(string nacionalidad) {this->nacionalidad = nacionalidad;}
    public: string getNacionalidad(void) {return nacionalidad;}

    //================================================================
    //=
    //=                MÉTODOS
    //=
    //================================================================
    public: string print();

};

#endif // PERSONA_H
