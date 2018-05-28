#include <iostream>
#include <Padre.h>
#include <Hijo.h>
#include <Factoria.h>
using namespace std;

int main()
{

    // Crear una clase servidora Factoria que
    // permita crear un objeto según el tipo de datos
    //parametrizado.

    Padre *p = Factoria::getInstance<Padre>(); // manera  de llamar a un metodo static
    Hijo * h = Factoria::getInstance<Hijo>();

    p->Setedad(50);
    p->Setnombre("Carlos");

    h->SetpagaSemanal(100);
    cout << "\t" << p->Getedad() << "\t" << p->Getnombre();
    cout << "\t" << h->GetpagaSemanal();
    Factoria::freeMemoryObject(p);
    Factoria::freeMemoryObject(h);
    cout << "Hello world!" << endl;
    return 0;
}
