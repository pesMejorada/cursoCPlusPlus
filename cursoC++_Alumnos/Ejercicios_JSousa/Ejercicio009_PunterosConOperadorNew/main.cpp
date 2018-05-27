#include <iostream>

using namespace std;

void array_bidimensional_dinamica(int filas, int columnas);
void array_unidimensional_dinamico();


int main() {

    // Declara, inicializa y mestra un puntero
    //-------------------------------------------
    int *ptrInt = new int;
    *ptrInt = 3000;
    cout << "\n-------------------------------------------------------------"
         << "\n   int *ptrInt = new int;     *ptrInt = 3000;\n"
         << "-------------------------------------------------------------"
         << "\n\n Valor al que apunta ptrInt:...  " << *ptrInt << "   -  Contenido de ptrInt:...  "  << ptrInt << endl;



    // Asigna un nuevo valor a la posición apuntada y lo muestra
    //--------------------------------------------------------------
    *ptrInt = 70000;
    cout << "\n-------------------------------------------------------------"
         << "\n   *ptrInt = 70000;\n"
         << "-------------------------------------------------------------"
         << "\n\n Valor al que apunta ptrInt:...  " << *ptrInt << "   -  Contenido de ptrInt:...  "  << ptrInt<< endl;



    // Liberar y volver a utilizar el puntero
    //---------------------------------------------
    delete ptrInt;      // liberamos la memoria para que no que sin apuntar (inutilizada en el programa)
    int num = 1000;
    ptrInt = &num;      // Utilizamos el puntero para apuntar a otra posición (la de "num")
    cout << "\n-------------------------------------------------------------"
         << "\n   delete ptrInt;     int num = 1000;     ptrInt = &num;\n"
         << "-------------------------------------------------------------"
         << "\n\n Valor al que apunta ptrInt:...  " << *ptrInt << "   -  Contenido de ptrInt:...  "  << ptrInt << endl;



    // Esto es una matríz dinámica de 4 enteros
    //---------------------------------------------
    int *ptrInt2 = new int(4);
    ptrInt2[0] = 1;     // <
    ptrInt2[1] = 2;     // |  Asigna sus valores
    ptrInt2[2] = 3;     // <

    cout << "\n------------------------------------------------------------------------------------"
         << "\n   int *ptrInt2 = new int(4);  ptrInt2[0] = 1;  ptrInt2[1] = 2  ptrInt2[2] = 3;\n"
         << "------------------------------------------------------------------------------------"
         << "\n\n Valores del array\n"
         << "     ptrInt2[0] ... " << ptrInt2[0] << "   ptrInt2[1] ... " << ptrInt2[1] << "   ptrInt2[2] ... " << ptrInt2[2] << endl;      // Muestra sus valores


    // Liberamos todas las asignaciones dinámicas
    //------------------------------------------------
    delete ptrInt;      // libera la memoria antes de reasignar el puntero a otra posición
    delete ptrInt2;


    // crea y visualiza un array dinámico unidimensional
    //----------------------------------------------------
    cout << "\n\n\n array_unidimensional_dinamico() \n----------------------------------------------------" << endl;
    array_unidimensional_dinamico();

    // crea, visualiza y destruye un array bidimensional dinámico
    //-------------------------------------------------------------
    cout << "\n\n\n array_bidimensional_dinamica(5, 10) \n----------------------------------------------------" << endl;
    array_bidimensional_dinamica(5, 10);

    return 0;

}


//****************************************************************
//*
//*  Array bidimensional - Asignación dinámica de memoria
//*
//****************************************************************
void array_bidimensional_dinamica(int filas, int columnas) {

    // Declaración e inicialización
    //-------------------------------
    double **array_a = new double *[filas];     //  reserva espacio para alojar las suficientes filas
    for (int i = 0; i < filas; i++) {           //  <
                                                //  |  Reserva espacio dinámicamente para las columnas en cada una de las filas (podemos ver
        array_a[i] = new double[columnas];      //  |      como un puntero puede ser direccionado como un array, y como reservar su espacio).
                                                //  <
    }

    // Asigna valores a los elementos del array
    //-------------------------------------------
    for (int i = 0; i < filas; i ++)  {

        for (int j = 0; j < columnas; j++) {

            array_a[i][j] = (i * 10) + j;

        }

    }

    // Muestra los valores en pantalla
    //-------------------------------------------
    for (int i = 0; i < filas; i ++)  {

        for (int j = 0; j < columnas; j++) {

            cout << " - " << array_a[i][j];

        }

        cout << endl;
    }


    // Libera la memoria de la matriz
    //---------------------------------
    for (int i = 0; i < filas; i ++) {  // <
                                        // |  Libera las posiciones de la memoria a las que apunta
        delete [] array_a[i];           // |   array_a[0], array_a[1] .... array_a[filas - 1]
                                        // <
    }

    delete array_a;             // Libera el puntero inicial;

}



//****************************************************************
//*
//*  Array unidimensional - Asignación dinámica de memoria
//*
//****************************************************************
void array_unidimensional_dinamico() {

    // Declara he inicializa el array
    //---------------------------------
    int *ptrInt = new int [5];      // Reserva espacio para los elementos suficientes
    for (int i = 0; i < 5; i++) {   // <
                                    // |  Inicializa el array dinámico. De nuevo vemos como un puntero puede ser
        ptrInt[i] = 2000 + i;       // |   direccionado como un array (el nombre de un array  es un puntero a este).
                                    // <
    }

    // Muestra los valores del array dinámico
    //-----------------------------------------
    for (int i = 0; i < 5; i ++ ) {

        cout << ptrInt[i] << " - ";

    }

    // Libera el array
    //-------------------
    delete ptrInt;

}


