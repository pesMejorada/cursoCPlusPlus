#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    public:
        Persona();
        virtual ~Persona();

        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }

    protected:

    private:
        string nombre;
};

#endif // PERSONA_H
