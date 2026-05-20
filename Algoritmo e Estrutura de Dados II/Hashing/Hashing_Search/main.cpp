#include<iostream>
#include "hashing.h"

using namespace std;

int main()  {
    int k; // < -- Chaves que serão inseridas no array
    int m; // < -- Representa o tamanho do array 
    dado vetor[500]; // < -- Armazena os valores do array 
    int i; // < -- Contador 
    int x; //< -- Buscador 

    cin >> m;
    
    // < -- Percorre o array para definir o array do status como 0 (vazio) ou 1 (ocupado) -- >
    for(int i = 0; i < m; i++)  {
        vetor[i].k = -1;    // < -- Lembre-se, o -1 na chave representa que está vazio e aberto para ser substituído.
        vetor[i].status = 0;
    }
    
    // < -- Implementação da função de Inserção do Hashing
    while(cin >> x && x != 0)   {
        hash_insert(vetor, m, x);
    }
    
    cin >> k;  // < -- Variável de busca
    
        int resultado = hashing_search(vetor, m, k);
        
        if(resultado == -1) { // < -- Se a chave for igual a -1, significa que o valor do array está vazio
            cout << "Chave " << k << " nao encontrada";
        }
        else    {
            cout << "Chave " << k << " encontrada na posicao " << resultado; // < -- Se não a chave, a chave
        }
    return 0;
    
}