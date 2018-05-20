#include <iostream>
#include <stdlib.h>

using namespace std;

int escoger_operacion() {
    int opcion;
    do {
        system("cls");
        cout << "\n1. Sumar";
        cout << "\n2. Restar";
        cout << "\n3. Multiplicar";
        cout << "\n4. Dividir";
        cout << "\n5. Salir";
        cout << "\nEscoger-> ";
        cin >> opcion;
    } while (opcion < 1 || opcion > 5);

    return opcion;
}

double leer_y_retornar_numero(){
    double numero;
    cout << "\nNumero ";
    cin >> numero;
    return numero;
}

void imprimir_resultado (double resultado) {
    cout << "\n*********************************";
    cout << "\n*Resultado -> " << resultado << "*";
    cout << "\n*********************************";
    return;
}

int main() {
    int opcion_main = escoger_operacion();
    double numero1 = leer_y_retornar_numero();
    double numero2 = leer_y_retornar_numero();
    double resultado;
    if (opcion_main == 1) {
        resultado = numero1 + numero2;
        imprimir_resultado(resultado);
    } else if (opcion_main == 2) {
        resultado = numero1 - numero2;
        imprimir_resultado(resultado);
    } else if (opcion_main == 3) {
        resultado = numero1 * numero2;
        imprimir_resultado(resultado);
    } else if (opcion_main == 4) {
        if (numero2 != 0) {
            resultado = numero1 / numero2;
            imprimir_resultado(resultado);
        } else {
            cout << "Resultado infinito";
        }
     }


    cout << "\n\n" ;
    return 0;
}
