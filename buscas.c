#include <stdio.h>
#include "buscaslib.h"

int busca_linear(int *v, int tam, int x) /*retorna a posicao se achar o valor ou -1 se nao achar*/
{
    for(int i=0; i<tam; i++)
    {
        if(v[i]== x) return i; 
            
    }
    return -1;
}

int busca_binaria(int*v, int tam, int x)
{
    int a=0, b=tam-1;
    while(a <= b)
    {
        int meio = (a+b)/2;

        if(v[meio]==x) {return meio;}
        else if(x < v[meio]) {b=meio-1;}
        else {a=meio+1;}
    }
    return -1;
}
