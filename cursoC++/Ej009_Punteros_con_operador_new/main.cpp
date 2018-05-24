#include <iostream>

using namespace std;
void array_bidimensional_dinamica (int filas, int columnas) {
   double **array_a;
   array_a = new double *[filas];

   for (int i = 0; i < filas; i++) {
       array_a[i] = new double[columnas];  // array_a[i] apunta a la dirección inicia
                                           // de un nuevo array
   }
   cout << " \narray_a";
   for (int i = 0; i < filas; i ++) {
        for(int j = 0; j < columnas; j ++) {
            cout << "\n" << array_a[i][j];
        }
   }
  // operaciones con la matriz

   // liberar
   for (int i = 0; i < filas; i ++) {
       delete [] array_a[i]; // libera las posiciones de memoria a las que apunta
                             // array_a[0], array_a[1] .... array_a[filas - 1]
   }
   delete [] array_a;

   cout << " \narray_a despues de liberar ";
   for (int i = 0; i < filas; i ++) {
     for(int j = 0; j < columnas; j ++) {
            cout << "\n" << array_a[i][j];
     }
   }
   // instrucciones
}
void array_dinamico() {
   int *ptrInt = new int[5];
   for (int i = 0; i < 5 ; i++){
      ptrInt[i] =  2000 +i;
   }
   for (int i = 0; i < 5 ; i++){
      cout << "\n" << ptrInt[i];
   }
   delete [] ptrInt; // libera la memoria reservada por ptrInt
}
int main()
{
    int *ptrInt = new int;
    (*ptrInt) = 3000;
    // conjunto de operaciones
    (*ptrInt) =70000;
    cout << "\n Valor" << (*ptrInt);
    delete ptrInt; // libera la memoria-- antes de reasignar el puntero a otr
                    // de la memoria
    cout << "\n Valor" << (*ptrInt);
    int num = 1000;
    ptrInt = &num;
    cout << "\n Valor" << (*ptrInt);

    int *ptrInt2 = new int(4);
    cout << "\n Valor" << (*ptrInt2);
    array_dinamico();
    array_bidimensional_dinamica(4, 5);
    cout << "" << endl;
    return 0;
}
