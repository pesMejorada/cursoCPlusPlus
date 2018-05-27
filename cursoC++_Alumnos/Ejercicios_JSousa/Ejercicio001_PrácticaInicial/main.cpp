#include <iostream>

using namespace std;

void leerDatos();
int suma(int, int);
void imprimirResultado(int);

 int numero1;
 int numero2;
 int resultado;

int main() {

    leerDatos();
    resultado = suma(numero1, numero2);
    imprimirResultado(resultado);

    cout << endl;
    return 0;
}


void leerDatos() {

    cout << "\n ----- Introducir dos números ------";
    cout << "\n\n Primer numero:... ";
    cin >> numero1;
    cout << "\n Segundo numero:... ";
    cin >> numero2;

}


int suma(int nu1, int nu2) {

    return nu1 + nu2;

}

void imprimirResultado(int resultado) {

    cout << "\n\n ------ El resultado es ------\n\n    -- " << resultado;

}
