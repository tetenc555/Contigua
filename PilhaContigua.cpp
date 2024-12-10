#include <iostream>
using namespace std;

#include "PilhaContigua.h"

PilhaContigua::PilhaContigua(int max)
{
    max=max;
    n=0;
    vet=new int [max];
}

PilhaContigua::~PilhaContigua()
{
    delete [] vet;
}

int PilhaContigua::get(int p)
{
    if (p<0 || p>=n)
        exit(1);
    return vet[p];
}

int PilhaContigua::getSize()
{
    return n;
}

void PilhaContigua::set(int p, int val)
{
    if (p<0 || p>=n)
        return;
    vet[p] = val;
}

void PilhaContigua::newEnd(int val)
{
    if(n>=max)
        return;
    vet[n]=val;
    n++;
}

void PilhaContigua::deleteEnd()
{
    if(n==0)
        return;
    n--;
}

void PilhaContigua::newNode(int p, int val)
{
    if(p<0 || p>=n || n==max)
    {
        cout << "Invalido" << endl; //nao fiz separado por preguica, tinha esquecido de verificar se estava cheio
        return;
    }
    for (int i=p;i<n;i++)
        vet[i+1]=vet[i];
    vet[p]=val;
    n++;
}

void PilhaContigua::deleteNode (int p)
{
    if(p<0 || p>=n || n==max)
    {
        cout << "Invalido" << endl; //nao fiz separado por preguica, copiei do anterior
        return;
    }
    //for (int i=n-1;i>=p;i--) nn funciona pois aqui quando ele for ir passando pra tras, o valor do "i" sera sempre o do ultimo
    //    vet[i-1]=vet[i];      por exemplo, o ultimo se copia pro penultimo. dai o penultimno se copia pro antipenultimo, mas ja seria o valor modificado, ou seja, todos seriam o ultimo
    for (int i=p;i<n;i++)
        vet[i]=vet[i+1];
    n--;
}