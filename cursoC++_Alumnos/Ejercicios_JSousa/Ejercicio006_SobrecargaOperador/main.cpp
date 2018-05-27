// Ejercicio que suma dos números comlejos

#include <iostream>
#include <cmath>

using namespace std;


struct Complejo {

    double real;
    double imaginaria;

};


void imprimir_complejo(Complejo);
Complejo operator + (Complejo , Complejo);



int main() {

    // Declara e inicializa dos números complejos
    //------------------------------------------------
    Complejo num1 = {3, -7};
    Complejo num2 = {7, 4};


    // Muestra los dos números complejos
    //---------------------------------------------
    cout << "\n ----- estos son dos números complejos ----- \n\n   ";
    imprimir_complejo(num1);
    cout << "\n   ";
    imprimir_complejo(num2);


    // Muestra la suma de los complejos
    //-------------------------------------
    cout << "\n\n ------ Su suma es:  ------\n\n   ";
    imprimir_complejo(num1 + num2);


    // asigna nuevos valores
    //-------------------------
    num1.real = 4;
    num1.imaginaria = 8;
    num2.real = 9;
    num2.imaginaria = 12;


    // Muestra los nuevos valores
    //--------------------------------
    cout << "\n\n ------ Estos son los nuevos valores de los complejos ------\n\n   ";
    imprimir_complejo(num1);
    cout << "\n   ";
    imprimir_complejo(num2);


    // Muestra la suma de los neuvos complejos
    //--------------------------------------
    cout << "\n\n ------ Su suma es:  ------\n\n   ";
    imprimir_complejo(num1 + num2);
    cout << "\n\n";


    cout << endl;
    return 0;

}


void imprimir_complejo(Complejo complejo) {

    string signo = " + j";
    if(complejo.imaginaria < 0) { signo = " - j"; }

    cout << complejo.real << signo << abs(complejo.imaginaria);

}


Complejo operator + (Complejo complejoA, Complejo complejoB) {

    return {complejoA.real + complejoB.real, complejoA.imaginaria + complejoB.imaginaria};

}
