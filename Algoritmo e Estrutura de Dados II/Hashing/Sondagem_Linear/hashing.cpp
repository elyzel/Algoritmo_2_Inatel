#include "hashing.h"

//Hashinh Auxiliar
int hash_aux(int k, int m)  {
    
    int h = k % m;
    
    if(h < 0)
        h += m;
    
    return h;
}

//Sondagem linear
int hash1(int i, int k, int m)  {
    
    int resultado1;
    
    resultado1 = hash_aux(k, m) + i;
    
    resultado1 = resultado1 % m;
    
    return resultado1;
}

