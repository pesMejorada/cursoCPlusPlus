#include <iostream>
using namespace std;

struct Persona {
    int edad;
    string nombre_completo;
};

void funcion_parametros_referencia (int *numero, double *salario, string *nombre, Persona *cliente);



int main() {

    // Declarar/Inicializar variables locales
    //--------------------------------------------
    int numero = 10;
    double salario = 12000.35;
    string nombre = "Carlos";

    // Declara/inicializa un tipo de la estructura "Persona"
    //---------------------------------------------------------
    Persona cliente;
    cliente.edad = 30;
    cliente.nombre_completo = "Carlos López López";

    // Pasa los valores por referencia y se producen cambios
    //--------------------------------------------------------
    cout << "\n\n  ------- Los valores actuales antes de llamar a la función -------"
         << "\n    Nombre:...  " << nombre
         << "\n    Nombre completo:...  " << cliente.nombre_completo
         << "\n    Edad:...  " << cliente.edad
         << "\n    Número:...  " << numero
         << "\n    Salario:...  " << salario << endl;
    funcion_parametros_referencia(&numero, &salario, &nombre, &cliente);
    cout << "\n  ------- Los valores actuales después de llamar a la función -------"
         << "\n    Nombre:...  " << nombre
         << "\n    Nombre completo:...  " << cliente.nombre_completo
         << "\n    Edad:...  " << cliente.edad
         << "\n    Número:...  " << numero
         << "\n    Salario:...  " << salario << endl;

    cout << endl;
    return 0;

}


void funcion_parametros_referencia (int *numero, double *salario,
                                    string *nombre, Persona *cliente) {

    *numero = 200;
    *salario = 1000000.45;
    *nombre = "Nombre modificado";
    (*cliente).edad = 101;                                  // El paréntesis se utiliza para resolver el problema de precedencia
    cliente->edad = 90;                                     // Se puede también utilizar el operador de acceso indirecto a miembro
    cliente->nombre_completo = "Antonio Fernández Rojas";

}
