#include <iostream>
#include <stdlib.h>

using namespace std;

int escogerOperacion(void);
double leer_y_retornar_numero(void);

int main()
{

    int opcion = escogerOperacion();

    if (opcion == 1) { cout << "\n Se ha seleccionado Sumar";
    } else if (opcion == 2) { cout << "\n Se ha seleccionado Restar";
    } else if (opcion == 3) { cout << "\n Se ha seleccionado Multiplicar";
    } else if (opcion == 4) { cout << "\n Se ha seleccionado Dividir";
    } else if (opcion == 5) { return 0;
    } else { cout << "\n\n ---- Opción desconocida -----"; }

    cout << endl;
    return 0;

}


int escogerOperacion() {

   char opcion = '0';

    do {

        system("cls");
        cout << "\n   1. Sumar"
             << "\n   2. Restar"
             << "\n   3. Multiplicar"
             << "\n   4. Dividir"
             << "\n   5. Salir"
             << "\n\n --- Escoger:...  ";

        opcion = cin.get();

    } while ((opcion < '1') || (opcion  > '5'));


    return atoi(&opcion);

}

