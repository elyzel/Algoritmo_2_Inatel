#include "hashing.h"

//< -- Hashing Auxiliar -- >
int hash_aux(int k, int m){
    int h = k % m;
    
    if(h < 0)
        h += m;
    
    return h;
}

// < --Sondagem Linear -- >
int hash1(int k, int i, int m){
    
    int resultado1 = hash_aux(k, m) + i;
    
    resultado1 = resultado1 % m;
    
    return resultado1;
    
}

// < -- Hashing Insert -- >
int hash_insert(dado T[], int m, int k) {
    
    int i = 0; 
    int j;     
    
    do  {
        // Função
        j = hash1(k, i, m); 
        
        // Condição de parada (0 vazio, 1 ocupado)
        if(T[j].status != 1)   {
            T[j].k = k;
            T[j].status = 1;
            return j;
        }
        else    {
            i = i + 1;
        }
    }   while(i != m);
    
    return -1;
}

// < -- Hashing de Busca -- >
int hashing_search(dado T[], int m, int k){
    int i = 0;
    int j;
    
    do{
        
        j = hash1(k, i, m);
        
        if(T[j].k == k)
            return j;
        
        i += 1;
        
    }   while(T[j].status != 0 && i < m);
    
    return -1;
}

















