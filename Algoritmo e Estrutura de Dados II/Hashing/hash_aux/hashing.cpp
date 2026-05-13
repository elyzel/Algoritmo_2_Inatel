#include "hashing.h"

int hash_aux(int k, int m)  
{
    //Operação para descobrir a posição do hash
    int h = k % m;
    
    //Condicao de parada
    if(h < 0)   {
        h += m;
    }
    
    //Retorno do valor do h
    return h;
}