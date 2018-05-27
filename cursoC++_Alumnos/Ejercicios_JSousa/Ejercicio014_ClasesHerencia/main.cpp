#include <iostream>

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
    //private: float *ptrarray_ma;



    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Persona() {

        nombre = "";
        dni = "";

    }

     public: Persona(string nombre, string dni) {

        this->nombre = nombre;
        this->dni = dni;
        //this->salario = salario;

    }

    ~Persona() {

        // Para liverar la memoria que se ha resrevado y que esté apuntando por
        // puntero que sea tributo de esta clase

        // delete ptrarray_ma;

        // ----- Además, en caso de asignar memoria dinámica, es necesario crear un constructor copia ------"

    }


    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setNombre(string nombre_) { nombre = nombre_;}
    public: string getNombre(void) { return nombre;}
    public: void setDni(string dni_) { dni = dni_;}
    public: string getDni(void) {return dni;}
    //public: void setSalario(long salario_) {salario = salario_;}
    //public: long getSalario(void) {return salario;}


};//class Persona {




//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Empleado: public Persona {

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

     public: Empleado(string nombre, string dni, double salario, string seguridadSocial) :Persona(nombre, dni) {

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
    Persona persona1 ("Carlos", "952O5850T");
    cout << "\n\n   ----- Solo con la clase persona -----\n "
         << "DNI: " << persona1.getDni()
         << "\n Nombre: " << persona1.getNombre() << endl;


    // Declarar y utilizar la clase Empleado que contiene la clase Persona
    //------------------------------------------------------------------------
    Empleado empleado1 ("Carmen", "43543865R", 100000, "A3585BC85267");
    cout << "\n\n   ----- Con la clase Empleado y la clase Persona como base -----\n "
         << "DNI: " << empleado1.getDni()
         << "\n Nombre: " << empleado1.getNombre()
         << "\n Salario: " << empleado1.getSalario()
         << "\n seguridad social: " << empleado1.getSeguridadSocial() << endl;

    cout << endl;
    return 0;
}
