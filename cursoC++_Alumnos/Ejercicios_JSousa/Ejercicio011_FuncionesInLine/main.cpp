#include <iostream>

using namespace std;


inline void mi_funcion_inline() {cout << "\nInstrucciones de la función InLine";}

int main() {

    mi_funcion_inline();
    mi_funcion_inline();
    mi_funcion_inline();

    // Equivale a : {el preprocesador reemplaza antes de compilar
    //                 la función inline por su implementacón -
    //                  -insrucciones que están dentro de las {} )
    /*
        cout << "\nInstacia de la función InLine";
        cout << "\nInstacia de la función InLine";
        cout << "\nInstacia de la función InLine";
    */

    cout << endl;
    return 0;

}
