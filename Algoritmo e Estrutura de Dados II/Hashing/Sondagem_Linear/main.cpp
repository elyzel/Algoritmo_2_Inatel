#include<iostream>
#include "hashing.h"
using namespace std;

int main()  {
    
    int k, m;//Variaveis da função
    int i; //Contador
    int h; //Resultados
    
    if(cin >> k >> m)
        for(int i = 0; i < m; i++){
            cout << hash1(i, k, m);
            
            if(i < m - 1){
                cout << " ";
            }
        }
        
    cout << " " << endl;
    return 0;
    
}