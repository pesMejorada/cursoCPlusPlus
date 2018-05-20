#include <iostream>

using namespace std;

struct Persona {
    int edad;
    string nombre_completo;
};

void funcion_parametros_valor(int numero, double salario, string nombre) {
    numero = 12000;
    salario = 100000000.45;
    nombre = "Pepe";
}

void funcion_para_array_salarios (double salarios[]) {
    salarios[0] = salarios[0] * 2;
    salarios[1] = salarios[1] * 2;
    salarios[2] = salarios[2] * 2;
    salarios[3] = salarios[3] * 2;
}

void funcion_parametro_valor_struct(Persona cliente) {
    cliente.edad = 70;
    cliente.nombre_completo = "José María";
}

int main()
{
    int numero ;
    numero = 10;
    double salario;
    salario = 12000.35;
    string nombre;
    nombre = "Manuel Acevedo";
    // array
    double salarios[4] = {1200000, 340000, 480000, 850000};
    Persona cliente;
    cliente.edad = 30;
    cliente.nombre_completo = "Carlos López";
    cout << "\nNombre cliente" << cliente.nombre_completo;
    cout << "\nEdad"<< cliente.edad;
    funcion_parametro_valor_struct(cliente);
    cout << "\n\n\nNombre cliente  despues de invocar al metodo ";
    cout << "\nNombre cliente" << cliente.nombre_completo;
    cout << "\nEdad"<< cliente.edad;

    funcion_parametros_valor(numero, salario, nombre);
    cout << "\nNum->"<< numero;
    cout << "\nSalario->"<< salario;
    cout << "\nNombre->"<< nombre;
    funcion_para_array_salarios(salarios);
    // imprimir array
    for(int i = 0 ; i < 4; i++) {
        cout << "\nSalario" << salarios[i];
    }
    return 0;
}
