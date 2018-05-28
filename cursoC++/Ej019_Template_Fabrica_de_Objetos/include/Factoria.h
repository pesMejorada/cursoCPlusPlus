#ifndef FACTORIA_H
#define FACTORIA_H


class Factoria
{
    public:
        // metodo estático
        // no requiere crearse un objeto de la clase Factoria
        // para invocarlo. Se invoca de la forma Factoria::getInstance<NomClase>()

        template <class T> static T* getInstance () {
            return new T;
        }
        template <class T> static void freeMemoryObject(T *t) {
            delete t;
        }

};

#endif // FACTORIA_H
