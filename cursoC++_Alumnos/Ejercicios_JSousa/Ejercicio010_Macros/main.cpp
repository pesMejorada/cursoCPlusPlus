#include <iostream>

using namespace std;

// MACROS varias
//----------------------------------
#define NUM_MAX_LINES 20
#define maximo(a, b) ((a > b) ? a : b)
#define FOR(A,B) for(int A = 0; A < B; A++)     // Macro que genera un bucle


int main()
{

    // Uso de la macro NUM_MAX_LINES 20
    //-------------------------------------
    int numeroLineas = NUM_MAX_LINES;                                                                   // El compilador sustituye NUM_MAX_LINES por 20
    cout << "\n Varias formas de utilizar el valor que representa la macro:...  NUM_MAX_LINES 20"
         << "\n---------------------------------------------
----------------------------------------"
         << "\n " << numeroLineas
         << "\n " << numeroLineas
         << "  -  " << NUM_MAX_LINES << endl;                                                           // También se puede así

    // Operar sobre el valor de la macro
    //---------------------------------------
    int resultado = NUM_MAX_LINES * 10;                                                                 // Podemos operar sobre la macro (sobre lo que representa)
    cout << " " << resultado;


    // Utilización de la macro maximo(a, b)
    //-------------------------------------------
    cout << "\n\n--------------------------------------------------------------"
         << "\n La macro:...  #define maximo(a, b) ((a > b) ? a : b)    "
         << "\n se utiliza así:...   maximo(3, 5)"
         << "\n--------------------------------------------------------------"
         << "\n\n  el resultado es:...  " << maximo(3, 5);      // Es lo mismo que si se hubiese escrito en el código: (3>5) ? 3 : 5


    // Utilización de la macro FOR(A,B)
    //----------------------------------------
    cout << "\n\n--------------------------------------------------------------"
         << "\n La macro:...  #define FOR(A,B) for(int A = 0; A < B; A++)    "
         << "\n se utiliza así:...   FOR(i, 10) { ... }"
         << "\n--------------------------------------------------------------"
         << "\n\n  Un ejemplo\n        ";

    FOR(i, 10) {

        cout << i << " - ";

    }


    cout << "\n" << endl;
    return 0;
}
