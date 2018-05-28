#ifndef PADRE_H
#define PADRE_H
#include <string>
class Padre
{
    public:
        Padre();
        virtual ~Padre();

        std::string Getnombre() { return nombre; }
        void Setnombre(std::string val) { nombre = val; }
        int Getedad() { return edad; }
        void Setedad(int val) { edad = val; }

    protected:

    private:
        std::string nombre;
        int edad;
};

#endif // PADRE_H
