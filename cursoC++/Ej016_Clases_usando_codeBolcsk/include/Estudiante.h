using namespace std;
#include<string>
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


class Estudiante
{
    public:
        Estudiante();
        virtual ~Estudiante();
        Estudiante(string nombre, string apellido, string dni) {
            this->nombre = nombre;
            this->apellido = apellido;
            this->dni = dni;
        }
        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        string Getapellido() { return apellido; }
        void Setapellido(string val) { apellido = val; }
        string Getdni() { return dni; }
        void Setdni(string val) { dni = val; }

    protected:

    private:
        string nombre;
        string apellido;
        string dni;
};

#endif // ESTUDIANTE_H
