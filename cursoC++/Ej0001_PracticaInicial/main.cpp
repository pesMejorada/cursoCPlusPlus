#include <iostream>

using namespace std;
void imprimir_menu();
int numero1;
int numero2;
int resultado;

void leer_datos() {
    cout << "\nPrimer numero ";
    cin >> numero1;
    cout << "\nSegundo numero ";
    cin >> numero2;
}

void sumar() {
    resultado = numero1 + numero2;
}

void restar() {
    int numero1 = 1000000000000000000000000000.7;
    resultado = numero1 - numero2;
}

void imprimir_resultados() {
    cout << "\nEl resultado es : " << resultado;
}

int main() {
    leer_datos();
    sumar();
    imprimir_resultados();
    restar();
    imprimir_resultados();    return 0;
}




