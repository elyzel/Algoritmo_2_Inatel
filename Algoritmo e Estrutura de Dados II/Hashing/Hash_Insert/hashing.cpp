#include "hashing.h"

// Hashing Auxiliar
int hash_aux(int k, int m)  
{
    // Operação para descobrir a posição base do hash
    int h = k % m; 
    
    // Condicao de parada para tratar possíveis valores negativos
    if(h < 0)   {
        h += m;
    }
    
    return h;
}

// Sondagem linear
int hash1(int k, int i, int m)  {
    
    int resultado1; 
    
    resultado1 = hash_aux(k, m) + i;
    resultado1 = resultado1 % m;
    
    return resultado1;
}

// Hashing Insert
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