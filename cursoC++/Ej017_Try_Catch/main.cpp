#include <iostream>

using namespace std;
double funcion(double a , double b) {
    if (b == 0) {
       throw 20;
    }
    return a / b;
}
int main()
{
   try{
       cout << funcion(20, 19);
   } catch (int e) {
       cout << "ocurrio un error" ;
   }

   // funcion(20, 0.0);
   // La anterior instrucci�n lanza una excepci�n que no
    // no ha sido capturada por lo tanto la aplicaci�n
    // termina su ejecuci�n

    return 0;
}
