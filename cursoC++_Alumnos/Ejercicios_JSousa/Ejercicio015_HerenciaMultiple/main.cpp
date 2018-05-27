#include <iostream>
#include <string.h>
using namespace std;


//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
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
    public: Persona() {

        nombre = "";
        dni = "";
        nacionalidad = "";

    }


     public: Persona(string nombre, string dni, string nacionalidad) {

        this->nombre = nombre;
        this->dni = dni;
        this->nacionalidad = nacionalidad;

    }


    ~Persona() {

        // Para liberar la memoria que se ha resrevado y que esté apuntando por
        // puntero que sea tributo de esta clase
        // delete ptrarray_ma;

        // ----- En caso de utilizarse el puntero, es necesario crear un constructor copia ------"

    }


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
    public: string print() { return "     desde la clase Persona"; }



};//class Persona {



//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Deportista {

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
    public: Deportista() {

        deporte = "";

    }

     public: Deportista(string deporte) {

        this->deporte = deporte;

    }

    ~Deportista() {  }



    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setDeporte(string deporte) { this->deporte = deporte;}
    public: string getDeporte(void) { return deporte;}

};



//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Empleado: public Persona, public Deportista {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    double salario;
    string seguridadSocial;




    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Empleado() {

        salario = 0;
        seguridadSocial = "";

    }

     public: Empleado(string nombre, string dni, string nacionalidad, string deporte, double salario, string seguridadSocial)
                        :Persona(nombre, dni, nacionalidad), Deportista(deporte) {

        this->salario = salario;
        this->seguridadSocial = seguridadSocial;

    }

    ~Empleado() {  }



    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setSalario(double salario) { this->salario = salario;}
    public: double getSalario(void) { return salario;}
    public: void setSeguridadSocial(string seguridadSocial) { this->seguridadSocial = seguridadSocial;}
    public: string getSeguridadSocial(void) {return seguridadSocial;}


    //================================================================
    //=
    //=                MÉTODOS
    //=
    //================================================================
    public: string print() { return "     desde la clase Empleado"; }




};//class Empleado: private Persona {







//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Print {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    Empleado *empleado;


    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Print() {

        empleado = 0;

    }

     public: Print(Empleado *empleado) {

        this->empleado = empleado;

    }

    ~Print() {  }



    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setSalario(Empleado *empleado) { this->empleado = empleado;}


    //================================================================
    //=
    //=                MÉTODOS
    //=
    //================================================================
    public: void mostrar() {

        cout << "\n   DNI:... " << empleado->getDni()
             << "\n   Nombre:... " << empleado->getNombre()
             << "\n   Nacionalidad:... " << empleado->getNacionalidad() << endl;


    }


};//class Empleado: private Persona {






//****************************************************************
//*
//*
//*
//**********************************************************
int main()
{

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
