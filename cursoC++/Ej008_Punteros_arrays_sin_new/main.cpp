#include <iostream>
using namespace std;
void arrays_bidimiensionales (int filas, int columnas) {
    int array_bi [filas][columnas];
    for (int i = 0 ; i < filas; i++) {
        for(int j= 0; j < columnas; j++) {
            array_bi[i][j] = 2000 + (i + 1) * (j +1);
        }
    }
    int *ptrInt = array_bi[0]; // tendramos la direccion del primer elemento  array del array
                                // bidimensional
    // igual a int *ptrInt  = &array_bi[0][0];
    for (int i = 0 ; i < filas * columnas; i++) {
        cout << "\n" << *(ptrInt + i);
    }
}
void arrays_con_punteros_varias_formas () {
    int numeros[5];
    int *p ;
    p = numeros;
    *p = 10; // numeros [0] = 10
    p++; // apuntando a numeros [1]
    *p = 20;
    p = &numeros[2];
    *p = 30;
    p = numeros + 3;  // psocion de indice 3
    *p = 40;
    p = numeros;
    *(p + 4) = 50;
    for (int i = 0; i < 5; i++) {
        cout << "\n" << numeros[i];
    }
}

int main()
{
    int edades[10];
    for(int i = 0 ; i < 10 ; i++) {
        edades[i] = 40 + i;
    }
    int *ptrInt = edades;

    cout << "\dir incial del array -> " << ptrInt;
    for(int i = 0 ; i < 10 ; i++) {
       cout << edades[i];
    }
    for(int i = 0 ; i < 10 ; i++) {
       cout << "\n"  << ptrInt[i];
    }
    arrays_con_punteros_varias_formas();
    arrays_bidimiensionales(3, 5);
    return 0;
}
