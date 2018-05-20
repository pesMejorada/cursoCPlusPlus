#include <iostream>

using namespace std;

int mayor(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

double mayor(double num1, double num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int mayor (int num1, int num2, int num3) {
    if(num1 > num2 && num1 > num3) {
        return num1;
    }
    if (num2 > num1 && num2 > num3) {
        return num2;
    }
    return num3;
}

int main()
{
    int num_mayor = mayor(23, 45);
    double num_mayor_double = mayor(34.6, 45.7);
    cout << "El mayor es->" << num_mayor << endl;
    cout << "El mayor double es->" << num_mayor_double << endl;

    num_mayor = mayor(7, 9, 10);
    cout << "\nMayor es-> " << num_mayor;
    return 0;
}

