#include <iostream>

using namespace std;
template <class T1, class T2>
void imprime_numero(T1 num1, T2 num2) {
        cout << "\nPrimer valor " << num1;
        cout << "\nSegundo valor  " << num2;
}

int main()
{
    // implementar metodos permitan imprimir dos numeros
    // Genericidad -> permite a un metodo recibir diferentes tipos
    // de datos sin definir previamente el tiop al cual pertenecen
    // Se usa la palabra reservada Template.
   imprime_numero(3, 7);
   imprime_numero(3.5, 7.3);
    return 0;
}
