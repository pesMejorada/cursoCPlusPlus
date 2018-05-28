#include <iostream>

using namespace std;
class Persona {
private :
    string nombre;
    string dni;
public:
    Persona() { }
    Persona(string nombre, string dni) {
        this->nombre= nombre;
        this->dni = dni;
    }
    virtual ~Persona() { }
    string getNombre() {
        return nombre;
    }
    void setNombre(string nombre) {
        this->nombre= nombre;
    }
    string getDni() {
        return dni;
    }
    void setDni(string dni){
        this->dni = dni;
    }
    void print() {
        cout << "Desde la clase Persona!!!";
    }
};
class Deportista {
private :
    string deporte;
public:
    Deportista(){
    }
    Deportista(string deporte){
        this->deporte = deporte;
    }
    virtual ~Deportista() {}
    string getDeporte() { return deporte;}
    void setDeporte(string deporte){
        this->deporte = deporte;
    }

};
class Empleado : public Persona , public Deportista {
private :
    double salario;
    string seguridadSocial;
public:
    Empleado(){}
    Empleado(string nombre, string dni, double salario,
             string seguridadSocial, string deporte)
              : Persona(nombre, dni) , Deportista(deporte) {
        this->salario = salario;
        this->seguridadSocial = seguridadSocial;
    }
    double getSalario() {return this->salario;}
    void setSalario(double salario) { this->salario = salario; }
    string getSeguridadSocial() { return seguridadSocial; }
    void print() {
        cout << "Desde la clase Empleado!!!";
    }
};
class Impresora {
    public :
       void print(Persona persona) {
           cout << "\n Nombre"  << persona.getNombre() << "\t" << persona.getDni();
       }
};
int main()
{   Persona persona1("Carlos", "123");
    Empleado empleado1("Carmen", "435", 100000, "1234567", "Football");
    cout<< "dni " << empleado1.getDni() << "  nombre" << empleado1.getNombre();
    cout <<"salario " <<empleado1.getSalario();
    cout << "\tDeporte" << empleado1.getDeporte();
    empleado1.print();
    persona1.print();
    Persona *generico;
    generico = &empleado1;
    cout << "\nCon el puntero generico " << generico->getNombre();
    Empleado *especifico = &empleado1;

    cout << "\n Obj empleado con ptr empleado" << especifico->getNombre()
    << "\t salario" << especifico->getSalario();

   // especifico = &persona1;
   // cout << "Salario --> ¿=?" << especifico->getSalario();
                    //No se puede asignar a un puntero de una
                     // clase derivada la dirección de un objeto de la clase base
                     // ya que los metodos a los que se tiene acceso a través del puntero son los
                     // de la clase Derivada. El objeto de la clase Base no tiene los atributos
                     // especificos de la clase Derivada y se produce un error de compliación

    //especifico = (Empleado *)&persona1;// error lógico !! no hay atriuto salario-

    //cout << "Salario --> " << especifico->getSalario();

    Impresora impresora;
    impresora.print(persona1);
    impresora.print(empleado1);


    /*cout << empleado1.getNombre() << endl;
    Persona *p = &empleado1;
    cout << p->getNombre();
    Empleado *e = &empleado1;
    cout << e->getNombre() << e->getSalario();*/

    return 0;
}
