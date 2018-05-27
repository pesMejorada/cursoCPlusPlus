#include <iostream>
#include <math.h>

using namespace std;


void arrays_bidimensionales(int , int);


//****************************************************************
//*
//*
//*
//****************************************************************
int main()
{

    // Declara e inicializa un array
    //----------------------------------
    int edades [10];
    for (int i = 0; i < 10; i++) {

        //edades[i] = 40 + i;
        *(edades + i) = 40 + i;     // también se puede de esta forma (edades sin [] es como un puntero)

    }


    // Declara un puntero y muestra el contenido del aray con su ayuda
    //----------------------------------------------------------------------
    int *ptrInt = edades;
    cout << "\n\n  ------ Esto es un array[10] y su dirección inicial es:...  " << ptrInt << " ------\n\n";
    for (int b = 0; b < 10; ++ b) { cout << ptrInt[b] << "  -  "; }


    // Función que muestra un array con ayuda de punteros
    //-------------------------------------------------------
    cout << "\n\n\n ------- Esto es un array bidimensional [10][20] -------\n\n";
    arrays_bidimensionales(10, 20);


    cout << endl;
    return 0;
}


//****************************************************************
//*
//*  Declara, inicializa y muestra un array
//*
//****************************************************************
void arrays_bidimensionales(int filas, int columnas) {


    // Declara e inicializa el array bidimensional
    //----------------------------------------------
    int array_bi [filas][columnas];

    for (int fil = 0; fil < filas; fil++) {

        for (int col = 0; col < columnas; col++) {

            array_bi[fil][col] = (fil * columnas) + (col);

        }

    }


    // Utiliza un puntero para mostrar los elementos del array
    //-----------------------------------------------------------
    int *ptrInt = array_bi[0];                                      // El primer elemento de las filas es un puntero al primer elemento
    for (int indice = 0; indice < filas * columnas; indice++) {     //    de la primera columna.

        cout << *(ptrInt + indice) << "  -  ";                      // Aunque es un array bidimensional sus elementos están situados
                                                                    //    consecutivamente uno a continuación del otro a lo largo de la memoria
    }

}
