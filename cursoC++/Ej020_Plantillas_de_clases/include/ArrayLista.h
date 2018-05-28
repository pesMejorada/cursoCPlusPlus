#ifndef ARRAYLISTA_H
#define ARRAYLISTA_H

#include <Lista.h>


template <class T> class ArrayLista : public Lista<T>
{
    public:
        ArrayLista(int n) : Lista<T>(n) {}
        virtual ~ArrayLista(){}

    protected:

    private:
};

#endif // ARRAYLISTA_H
