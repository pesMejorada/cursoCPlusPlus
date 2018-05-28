#ifndef HIJO_H
#define HIJO_H


class Hijo
{
    public:
        Hijo();
        virtual ~Hijo();

        int GetpagaSemanal() { return pagaSemanal; }
        void SetpagaSemanal(int val) { pagaSemanal = val; }

    protected:

    private:
        int pagaSemanal;
};

#endif // HIJO_H
