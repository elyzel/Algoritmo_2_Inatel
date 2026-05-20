#include<iostream>
#include "hashing.h"
using namespace std;

int main()  {
    int k; // Valor da chave a ser inserida
    int m; // Tamanho desejado para a tabela hash
    dado vetor; // Tabela hash (vetor de struct dado) com tamanho máximo
    int i; // CORREÇÃO (Regra de Ouro): Variável iteradora para os laços de repetição.
    
    cin >> m;
    
    // Laço de repetição para inicializar a tabela hash (vazia)
    for(i = 0; i < m; i++)  {
        vetor[i].k = -1;
        vetor[i].status = 0;
    }
    
    // Inserção de dados do usuário até encontrar 0
    while(cin >> k && k != 0)   {
        hash_insert(vetor, m, k);
    }
    
    // Exibição do estado final da tabela
    for(i = 0; i < m; i++)  {
        cout << vetor[i].k << " ";
    }
    
    cout << endl;
    
    return 0;
}