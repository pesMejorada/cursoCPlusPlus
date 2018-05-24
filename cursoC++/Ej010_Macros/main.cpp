#include <iostream>
#define NUM_MAX_LINES 20
#define maximo(a, b) ((a >b) ? a : b)
#define FOR(A,B) for(int A = 0; A < B; A++)
using namespace std;
int main() {
    int numeroLineas = NUM_MAX_LINES;
    cout << numeroLineas << NUM_MAX_LINES <<endl;
    int resultado = NUM_MAX_LINES * 10;
    cout << resultado;

    cout << "\nExpansion de la macro de la macro ->" << maximo(3,5);
    // es lo mismo q se hubiese escrito en el código:
    // ((3> 5) ? 3 : 5)--- valor al final --> 5
    int i;
    FOR(i, 10) {
      cout << "\ni -> " << i;
    }
    return 0;
}
