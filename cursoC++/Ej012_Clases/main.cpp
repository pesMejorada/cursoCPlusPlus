#include <iostream>

using namespace std;
class Persona {
   private :
   string nombre;
   string dni;
   float salario;
   float *ptr_float;
   public :
       Persona() {
       }
       Persona(string nom, string dni_, float salario_) {
           nombre = nom;
           dni = dni_;
           salario = salario_;
       }
       ~Persona(){
           // Para liberar la memoria que se haya reservado y que este apuntado por algún
           // puntero que sea atributo de esta clase.
            delete ptr_float;
        }
        string getNombre() {
           return nombre;
        }
        void setNombre(string nom) {
            nombre = nom;
        }
        string getDni() {
           return dni;
        }
        void setDni (string dni_) {
            dni = dni_;
        }
        float getSalario(){
            return salario;
        }
        void setSalario(float salario_) {
            salario = salario_;
        }
};

class Hipotetica {
   private:
       float porcentaje;
   public:
       Hipotetica() {
       }
       Hipotetica(float porcentaje_) {
           porcentaje = porcentaje_;
       }
       float getPorcentaje() {
           return porcentaje;
       }
       void setPorcentaje(float porcentaje_) {
           porcentaje = porcentaje_;
       }
       void subirSueldo(Persona *persona) {
             // modificar el sueldo de la persona que se envía como parametro
             persona->setSalario(persona->getSalario() * (1.0 + porcentaje /100.0));
       }

};


int main()
{   int i = 10;
    Hipotetica hipotetica (20.0);
    Persona otro("carlos", "344", 100000);
    Persona otroMas;
    otroMas.setNombre("Juan");
    otroMas.setDni("34");
    otroMas.setSalario(20000.0);
    Persona *yo = new Persona("Manuel", "1234", 200000);
    cout << otro.getDni() << "\t" <<otro.getNombre() << otro.getSalario()<< endl;
    cout << otroMas.getDni() << "\t" <<otroMas.getNombre() << endl;
    cout << yo->getDni() << "\t" << yo->getNombre() << endl;

    hipotetica.subirSueldo(&otro);

    cout << otro.getDni() << "\t" <<otro.getNombre() << otro.getSalario()<< endl;
    cout << otroMas.getDni() << "\t" <<otroMas.getNombre() << endl;
    cout << yo->getDni() << "\t" << yo->getNombre() << endl;

    delete yo;

    cout << "Hello world!" << endl;
    return 0;
}
