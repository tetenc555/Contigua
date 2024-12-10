#include <iostream>
using namespace std;

#include "FilaContigua.h"

FilaContigua::FilaContigua(int max)
{
    max=max;
    inicio=0;
    fim=0;
    vet=new int [max];
}

FilaContigua::~FilaContigua()
{
    delete [] vet;
}

int FilaContigua::getInicio()
{
    if(this->vazia())
    {
        cout<< "Sem itens na fila";
        return;
    }
    return vet[inicio];
}

void FilaContigua::enfileira(int n)
{
    if(fim == max)
    {
        cout << "Erro maximo atingido.";
        return;
    }
    vet[fim++]=n;
}

int FilaContigua::desenfileira()
{
    if(this->vazia())
    {
        cout<< "Sem itens na fila";
        return;
    }
    return vet[inicio++];
}

bool FilaContigua::vazia()
{
    return (inicio==fim);
}

