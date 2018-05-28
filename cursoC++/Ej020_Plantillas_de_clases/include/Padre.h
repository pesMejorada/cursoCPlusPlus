#ifndef PADRE_H
#define PADRE_H


class Padre
{
    public:
        Padre();
        virtual ~Padre();

        int Getnumero() { return numero; }
        void Setnumero(int val) { numero = val; }
        int Getedad() { return edad; }
        void Setedad(int val) { edad = val; }

    protected:

    private:
        int numero;
        int edad;
};

#endif // PADRE_H
