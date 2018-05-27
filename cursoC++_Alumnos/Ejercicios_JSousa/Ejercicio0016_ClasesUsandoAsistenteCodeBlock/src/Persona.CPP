#include "Persona.h"



//================================================================
//=
//=           CONSTRUCTORES / DESTRUCTORES
//=
//================================================================
Persona::Persona() {

    nombre = "";
    dni = "";
    nacionalidad = "";

}


Persona::Persona(string nombre, string dni, string nacionalidad) {

    this->nombre = nombre;
    this->dni = dni;
    this->nacionalidad = nacionalidad;

}


Persona::~Persona() {

    // Para liberar la memoria que se ha resrevado y que esté apuntando por
    // puntero que sea tributo de esta clase
    // delete ptrarray_ma;

    // ----- En caso de utilizarse el puntero, es necesario crear un constructor copia ------"

}


//================================================================
//=
//=                MÉTODOS
//=
//================================================================
string Persona::print() { return "     desde la clase Persona"; }




