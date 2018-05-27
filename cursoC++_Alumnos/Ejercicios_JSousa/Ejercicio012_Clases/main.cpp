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
    private: long salario;
    private: float *ptrfloat;



    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Persona() {

        this->nombre = "";
        this->dni = "";
        this->salario = 0;
        this->ptrfloat = new float;

    }

     public: Persona(string nombre, string dni, int salario) {

        this->nombre = nombre;
        this->dni = dni;
        this->salario = salario;
        this->ptrfloat = new float;

    }

     public: Persona(const Persona &persona) {

        this->nombre = persona.nombre;
        this->dni = persona.dni;
        this->salario = persona.salario;
        this->ptrfloat = new float;
        *(this->ptrfloat) = *(persona.ptrfloat);

    }

    ~Persona() { delete ptrfloat;}      // Para liberar la memoria que se haya reservado y que este apuntado por algún
                                        //   puntero que sea atributo de esta clase.


    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setNombre(string nombre_) { nombre = nombre_;}
    public: string getNombre(void) { return nombre;}
    public: void setDni(string dni_) { dni = dni_;}
    public: string getDni(void) {return dni;}
    public: void setSalario(long salario_) {salario = salario_;}
    public: long getSalario(void) {return salario;}


}; //class Persona {



//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Hipotetica {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    private: float porcentaje;



    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Hipotetica() {

        porcentaje = 0;

    }

    public: Hipotetica(float porcentaje) {

        this->porcentaje = porcentaje;


    };

    ~Hipotetica(){ }



    //================================================================
    //=
    //=                   PROPIEDADES
    //=
    //================================================================
    public: void setPorcentaje(float porcentaje) { this->porcentaje = porcentaje;}
    public: float getPorcentaje(void) {return porcentaje;}


    //================================================================
    //=
    //=                   FUNCIONES MIEMBRO
    //=
    //================================================================
    void subirSueldo(Persona *persona) {

            persona->setSalario(persona->getSalario() * (1 + porcentaje / 100)); // Modificamos el sueldo de la persona recibida como parámetro

       }

};




//****************************************************************
//*
//*
//*
//****************************************************************
int main()
{

    // Distintas formas de declaración/asignación
    //-------------------------------------------------
    Hipotetica hipotetica (20.0);
    Persona otro("Carlos", "57957964G", 14000.0);                  // Esto es lo mismo que esto:    Persona otro = Persona("Carlos", "2345", 18000);
    Persona otroMas;                                        // En este caso es llamado el constructor por defecto
    otroMas.setNombre("Juan");
    otroMas.setDni("49347942T");
    otroMas.setSalario(20000.0);
    Persona *yo = new Persona("Manuel", "85463498N", 20000.0);    // En este caso creamos objeto persona apuntado por el puntero "yo"


    // invocar miembros de las clases (mostrar datos)
    //--------------------------------------------------
    cout << "\n " << otro.getDni() << "\t"  << otro.getNombre() << "\t"  << otro.getSalario();
    cout << "\n " << otroMas.getDni() << "\t"  << otroMas.getNombre() << "\t"  << otroMas.getSalario();
    cout << "\n " << yo->getDni() << "\t"  << yo->getNombre() << "\t"  << yo->getSalario();


    // Subimos el sueldo con hipotetica.subirSueldo() y mostramos nuevos datos
    //------------------------------------------------------------------------------
    hipotetica.subirSueldo(&otro);
    cout << "\n\n\n  ------- después de subir el sueldo ------- "
         << "\n--------------------------------------------";
    cout << "\n " << otro.getDni() << "\t"  << otro.getNombre() << "\t"  << otro.getSalario();
    cout << "\n " << otroMas.getDni() << "\t"  << otroMas.getNombre() << "\t"  << otroMas.getSalario();
    cout << "\n " << yo->getDni() << "\t"  << yo->getNombre() << "\t"  << yo->getSalario();


    // Como siempre liberamos la memoria asignada dinámicamente
    //----------------------------------------------------------------
    delete yo;  //


    cout << endl;
    return 0;
}
