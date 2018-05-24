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
      funcion(20,0.0);
      cout <<  funcion(20,19);
   } catch (int e) {
       cout << "ocurrio un error" ;

   }

    funcion(20, 0.0);

    return 0;
}
