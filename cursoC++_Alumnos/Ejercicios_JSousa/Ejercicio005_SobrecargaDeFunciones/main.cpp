// Determina el n�mero mayor entre tres n�meros (polimorfismo)

#include <iostream>

using namespace std;

int mayor(int , int , int);
double mayor(double , double , double );



int main() {

    // Invoca a mayor() con parámetros int
    //----------------------------------------
    int num_mayor = mayor (23, 45, 89);
    cout << "\n\n  El mayor de int (23, 45 y 89)  es:...  " << num_mayor << endl;

    // Invoca a mayor() con parámetros double
    //-------------------------------------------
    double num_mayor_double = mayor(34.6, 45.7, 28.4);
    cout << "\n\n  El mayor de double (34,6, 45,7 y 28,4) es:...  " << num_mayor_double << endl;

    cout << endl;
    return 0;

}



int mayor(int buffer, int num2, int num3) {

    if (buffer < num2) buffer = num2;
    if (buffer < num3) return num3;
    return num2;

}



double mayor(double num1, double num2, double num3) {

    if (num1 > num2 && num1 > num3) return num1;
    if (num2 > num1 && num2 > num3) return num2;
    return num3;

}



