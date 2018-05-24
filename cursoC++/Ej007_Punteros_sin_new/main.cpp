#include <iostream>

using namespace std;
struct Persona {
    string dni;
    string nombre;
};

class Perro {
    public :
    string nombre;
    string raza;
};

int main()
{

    int numHijos = 3;
    int *ptrInt = &numHijos;

    cout << "\n V ->" << numHijos << "\nDir mem -> "  << &numHijos;
    cout << "\n cont ptr ->" << *ptrInt << "\nDir mem -> "  << ptrInt;
    int otraInt = 45;
    ptrInt =&otraInt;
    cout << "\n cont ptr ->" << *ptrInt << "\nDir mem -> "  << ptrInt;

    float salario = 300000.45F;
    float *ptrFloat = &salario;
    cout << "\n cont ptr ->" << *ptrFloat << "\nDir mem -> "  << ptrFloat;

    Persona yo = {"12345", "Manuel"};
    Persona *ptrPersona = &yo;

    cout << "\n nombre" << (*ptrPersona).nombre;
    cout << "\n dni" << ptrPersona->dni;

    (*ptrPersona).nombre = "Carlos";
    cout << "\n nombre" << (*ptrPersona).nombre;
    cout << "\n dni" << ptrPersona->dni;
   // ptrFloat = ptrInt; // están apuntando a direcciones de memoria que contiene tipos de datos diferentes
    cout << "\n\n" << endl;
    return 0;
}
