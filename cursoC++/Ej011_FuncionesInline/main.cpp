#include <iostream>
using namespace std;
inline void  mi_funcion_inline() {cout << "\nInstruccion función inline" ;}

int main()
{   mi_funcion_inline();
    mi_funcion_inline();
    mi_funcion_inline();

    // Equivale a : (el preprocesadror reemplaza antes de compilar
    //                la funcion inline por su implementanción -
    //                 -instrucciones que estén dentro de las {}
    /*
       cout << "\nInstruccion funicion inline" ;
       cout << "\nInstruccion funicion inline" ;
       cout << "\nInstruccion funicion inline" ;
    */
    cout << "Hello world!" << endl;
    return 0;
}
