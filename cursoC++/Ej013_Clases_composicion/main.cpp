#include <iostream>
#include <string>

using namespace std;
class Pantalla {
private:
    int tamanho;
    string resolucion;
public :
    Pantalla(){
    }
    Pantalla(int tamanho, string resolucion){
        this->tamanho = tamanho;
        this->resolucion = resolucion;
    }
    ~Pantalla () {
    }
    int getTamanho () {
       return tamanho;
    }
    void setTamanho (int tamanho_) {
        tamanho = tamanho_;
    }
    string getResolucion() {
        return resolucion;
    }
    void setResolucion (string resolucion_) {
       resolucion = resolucion;
    }
/*    string toString() {
         return "Tamaño " + to_string(tamanho) + " Resolucion " + resolucion;
    }*/
};
class Ordenador {
private :
    string marca;
    Pantalla pantalla;
public:
    Ordenador(){
    }
    Ordenador(string marca_, Pantalla pantalla_){
        marca = marca_;
        pantalla = pantalla_;
    }
    ~Ordenador() {}
    string getMarca() {
        return marca;
    }
    void setMarca(string marca_){
         marca = marca_;
    }
    Pantalla getPantalla() {
        return pantalla;
    }
    void setPantalla (Pantalla pantalla_) {
        pantalla = pantalla_;
    }
    string toString() {
        return "";
    }
};

int main()
{
    Pantalla pantalla1(20, "resolucion X");
    string marca = "Hewlett Packard";

    Ordenador ordenador1;
    ordenador1.setMarca(marca);
    ordenador1.setPantalla(pantalla1);

    cout << ordenador1.getMarca() << "\t"<<  ordenador1.getPantalla().getTamanho()
    << "\t" <<  ordenador1.getPantalla().getResolucion() << endl;
    return 0;
}
