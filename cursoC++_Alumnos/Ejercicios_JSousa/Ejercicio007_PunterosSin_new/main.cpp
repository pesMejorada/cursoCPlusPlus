#include <iostream>

using namespace std;

struct Persona {

    string dni;
    string nombre;

};

class Perro {

    public: string nombre;
    public: string raza;

};


int main() {

    // Declara variables y muestra sus valores y direcciones en memoria
    //----------------------------------------------------------------------
    int numHijos = 3;
    int *ptrInt = &numHijos;
    cout << "\n Valor de numHijos:...  " << numHijos << "   -  Dirección de numHijos:...  "  << &numHijos;
    cout << "\n\n Valor al que apunta ptrInt:...  " << *ptrInt << "   -  Contenido de ptrInt:...  "  << ptrInt;

    // Declara otras variables y muestra sus valores y direcciones en memoria
    //---------------------------------------------------------------------------
    int otroInt = 45;
    ptrInt = &otroInt;
    cout << "\n\n Valor al que apunta ptrInt:...  " << *ptrInt << "   -  Contenido de ptrInt:...  "  << ptrInt;


    // Declararación y visualización de otras variables
    //-----------------------------------------------------
    float salario = 300000.45F;
    float *ptrFloat = &salario;
    cout << "\n\n Valor al que apunta ptrFloat:...  " << *ptrFloat << "   -  Contenido de ptrFloat:...  "  << ptrFloat;

    // Declara y visualiza una instancia de la estructura Persona
    //---------------------------------------------------------------
    Persona yo = {"12345", "Manuel"};
    Persona *ptrPersona = &yo;
    cout << "\n\n\n  ------- Contenido de la estructura Persona, dos formas de obtener los valores -------  \n"
         << "\n   (*ptrPersona).nombre :...  " << (*ptrPersona).nombre
         << "\n   ptrPersona->nombre :...  " << ptrPersona->nombre
         << "\n   ptrPersona->dni :...  " << ptrPersona->dni << endl;


    // Asigna nuevo valor y muestra su contenido
    //----------------------------------------------
    ptrPersona->nombre = "Carlos";
    cout << "\n\n\n  ------- Cambiamos el nombre en Persona, estos son sus valores actuales -------  \n"
         << "\n   ptrPersona->nombre :...  " << ptrPersona->nombre
         << "\n   ptrPersona->dni :...  " << ptrPersona->dni;


    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  ptrFloat = ptrInt; // están apuntando a direcciones de memoria que contiene tipos de datos diferentes
    //
    /////////////////////////////////////////////////////////////////////////////////////////////////////////


    cout << "\n\n" << endl;
    return 0;
}
