#include <iostream>

using namespace std;

struct Complejo {
    double real;
    double imaginario;
};

Complejo operator +(Complejo a, Complejo b) {
    Complejo resultado = {a.real+ b.real , a.imaginario + b.imaginario};
    return resultado;
}

void imprimir_complejo(Complejo complejo){
    cout << "\n" << complejo.real << "  +  " << complejo.imaginario << "i";
}

int main()
{
    Complejo num1;
    Complejo num2;
    num1 = {2, 3};
    num2.real = 7;
    num2.imaginario = 9;
    Complejo resultado;
    resultado = num1 + num2;
    imprimir_complejo(resultado);
    return 0;
}
