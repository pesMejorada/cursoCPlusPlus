#include <iostream>

using namespace std;

//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Pantalla {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    private: string tipo;
    private: string resolucion;


    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Pantalla() {

        tipo = "";
        resolucion = "";
    }

     public: Pantalla(string tipo, string resolucion ) {

        this->tipo = tipo;
        this->resolucion = resolucion;

     }

    ~Pantalla() { }


    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setTipo(string tipo) { this->tipo = tipo;}
    public: string getTipo(void) { return tipo;}
    public: void setResolucion(string resolucion) { this->resolucion = resolucion;}
    public: string getResolucion(void) { return resolucion;}


}; //Pantalla {



//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Ordenador {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    private: string marca;
    private: Pantalla pantalla;


    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Ordenador() {

        marca = "";
        //pantalla = nullptr;

    }

     public: Ordenador(string marca_, Pantalla pantalla_ ) {

        marca = marca_;
        this->pantalla = pantalla_;

     }

    ~Ordenador() { }


    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setMarca(string marca) { this->marca = marca;}
    public: string getMarca(void) { return marca;}
    public: void setPantalla(Pantalla pantalla) { this->pantalla = pantalla;}
    public: Pantalla getPantalla(void) { return pantalla;}


    //================================================================
    //=
    //=                MÉTODOS
    //=
    //================================================================
    string toString(void) {

        return "\n\n  Marca:... " + marca + "    Tipo:... " + pantalla.getTipo() + "    Resolución:... " + pantalla.getResolucion();

    }


}; //Pantalla {



//****************************************************************
//*
//*
//*
//****************************************************************
int main()
{

    // declara e inicializa un tipo Pantalla
    //---------------------------------------------
    Pantalla pantalla1("VGA Led", "20''");

    // Declara e inicializa un tipo Ordenador
    //--------------------------------------------
    string marca = "Hewlen Packard";
    Ordenador ordenador1;
    ordenador1.setMarca(marca);
    ordenador1.setPantalla(pantalla1);

    // Utiliza el método toString()
    //----------------------------------
   cout << ordenador1.toString();


    cout <<  endl;
    return 0;
}
