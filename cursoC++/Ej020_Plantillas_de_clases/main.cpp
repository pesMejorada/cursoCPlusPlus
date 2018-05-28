#include <iostream>
#include <Lista.h>
#include <ArrayLista.h>
#include <Padre.h>

using namespace std;

int main()
{
    Lista<int> lista(3);
    lista.add(10);
    lista.add(20);
    lista.add(30);

    Lista<Padre> listaotra(7);
    Padre padre1;
    listaotra.add(padre1);

      for(int i = 0; i < 3; i++) {
          cout << lista.get(i) << "\n";
          cout << lista[i]<< "\n";
      }
    ArrayLista<Padre> arraylista(2);
    arraylista.add(padre1);
    //arraylista.add(new Padre());/// no se debe no se debe

    cout << "Hello world!" << endl;
    return 0;
}
