#include <iostream>

using namespace std;


inline void mi_funcion_inline() {cout << "\nInstrucciones de la funci�n InLine";}

int main() {

    mi_funcion_inline();
    mi_funcion_inline();
    mi_funcion_inline();

    // Equivale a : {el preprocesador reemplaza antes de compilar
    //                 la funci�n inline por su implementac�n -
    //                  -insrucciones que est�n dentro de las {} )
    /*
        cout << "\nInstacia de la funci�n InLine";
        cout << "\nInstacia de la funci�n InLine";
        cout << "\nInstacia de la funci�n InLine";
    */

    cout << endl;
    return 0;

}
