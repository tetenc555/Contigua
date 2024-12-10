#ifndef FILACONTIGUA_H__
#define FILACONTIGUA_H__
#include <iostream>

using namespace std;

class FilaContigua
{
    public:
        FilaContigua(int max);
        ~FilaContigua();
        int getInicio();
        void enfileira(int n);
        int desenfileira();
        bool vazia();

    private:
        int max;
        int inicio;
        int fim;
        int* vet;
};

#endif