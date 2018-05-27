#include "Empleado.h"


//================================================================
//=
//=           CONSTRUCTORES / DESTRUCTORES
//=
//================================================================
Empleado::Empleado() {

    salario = 0;
    seguridadSocial = "";

}

 Empleado::Empleado(string nombre, string dni, string nacionalidad, string deporte, double salario, string seguridadSocial)
                    :Persona(nombre, dni, nacionalidad), Deportista(deporte) {

    this->salario = salario;
    this->seguridadSocial = seguridadSocial;

}

Empleado::~Empleado() {  }



//================================================================
//=
//=                MÉTODOS
//=
//================================================================
string Empleado::print() { return "     desde la clase Empleado"; }

