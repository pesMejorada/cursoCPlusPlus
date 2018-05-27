#include <iostream>
#include <Deportista.h>
#include <Empleado.H>
#include <Persona.H>
#include <Print.H>

using namespace std;

int main() {

    // Declarar y utilizar la clase Persona
    //-----------------------------------------
    Persona persona1 ("Carlos", "952O5850T", "Español");
    cout << "\n\n   ----- Solo con la clase persona -----"
         << "\n    DNI: " << persona1.getDni()
         << "\n    Nombre: " << persona1.getNombre() << endl;

    // No podemos invocar persona1.nacionalidad() al ser protected
    //------------------------------------------------------------------
    //cout << "Nacionalidad: " << persona1.nacionalidad() << endl;


    // Declarar y utilizar la clase Empleado que contiene la clase Persona
    //------------------------------------------------------------------------
    Empleado empleado1 ("Carmen", "43543865R", "Española", "futbolista", 100000, "A3585BC85267");
    cout << "\n\n   ----- Con la clase Empleado y la clase Persona como base -----"
         << "\n    Nombre: " << empleado1.getNombre()
         << "\n    DNI: " << empleado1.getDni()
         << "\n    Salario: " << empleado1.getSalario()
         << "\n    seguridad social: " << empleado1.getSeguridadSocial() << endl;

        //////////////////////////////////////////////////////////////////////////
        // No podemos invocar "empleado1.nacionalidad()" al ser protected
        //
        //    << "Nacionalidad: " << empleado1.nacionalidad()
        //
        //////////////////////////////////////////////////////////////////////////


    // llamamos al método print() desde un tipo Empleado y desués desde el tipo Persona
    //-------------------------------------------------------------------------------------
    cout << "\n\n  ------ Usamos el método print() de empleado1 y persona1 -------";
    cout << "\n "<< empleado1.print() << endl;      // Empleado sobrescribe el método print() de Persona
    cout << "\n " << persona1.print() << endl;      // Desde Persona accedemos a su propio método


    // Creamos una clase Prit para mostrar datos de Empleado y Persona
    //--------------------------------------------------------------------
    cout << "\n\n ------- Usamos la clase Print y el método mostrar() con un puntero a empleado1 -------";
    Print print(&empleado1);
    print.mostrar();



    cout << endl;
    return 0;
}
