#include <iostream>

using namespace std;

double funcion (double a, double b) {

    if (b == 0) throw 20;

    return a/b;

}


int main()
{

    try {

         funcion(20, 0);

    } catch (int e){

        cout << "\n\n  ocurri� un error" << endl;

    }

    // Sin comentar, esta funci�n provoca la finalizaci�n del programa
    //funcion(20, 0);


    cout << endl;

    return 0;
}
