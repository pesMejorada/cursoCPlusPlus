#include <iostream>

using namespace std;

struct Persona {
    int edad;
    string nombre_completo;
};
void funcion_parametros_referencia (int* numero, double* salario,
            string* nombre, Persona* cliente) {
    (*numero) = 200;
    (*salario) = 1000000.45;
    (*nombre) = "Nmbre modificado";
    cliente->edad = 90;
    (*cliente).edad = 101; // otra sintaxis
    cliente->nombre_completo = "KKKKKKKK";
}
int main()
{
    int numero;
    numero = 10;
    double salario;
    salario = 12000.35;
    string nombre;
    nombre = "Manuel Acevedo";

    Persona cliente;
    cliente.edad = 30;
    cliente.nombre_completo = "Carlos López";

    funcion_parametros_referencia(&numero, &salario, &nombre, &cliente);

    cout << "\n\n\nNombre cliente  despues de invocar al metodo ";
    cout << "\nNombre cliente" << cliente.nombre_completo;
    cout << "\nEdad"<< cliente.edad;
    cout << "****************";
    cout << "\nNombre cliente" << nombre;
    cout << "\Num" << numero;
    cout << "\nSalario" << salario;
    cout << "\n\n\n";
    return 0;
}
