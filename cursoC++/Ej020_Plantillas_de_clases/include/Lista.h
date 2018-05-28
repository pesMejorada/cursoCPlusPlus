#ifndef LISTA_H
#define LISTA_H
template <class T> class Lista
{
    public:
        Lista(int n) {
            if (n <= 1) {
                n = 1;
            }
            current = -1;
            dimension = n;
            ptr = new T[dimension];
        }
        virtual ~Lista() {delete [] ptr;}
        T *ptr;
        void add (T t) {
          if(current < dimension - 1) {
            current++;
            ptr[current] = t;
          }
        }
        T get(int position) {
           if(position >=0 && position <= dimension - 1) {
              return  ptr[position];
           }
        }
        T& operator [] (int position) { return ptr[position];}
    protected:

    private:
        int dimension;
        int current;
};

#endif // LISTA_H
