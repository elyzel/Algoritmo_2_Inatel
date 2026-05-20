#include<iostream>
#include<list>
using namespace std;

//Função Booleana
bool encontrar(list<int> lista, int x) {
    //Ponteiro especial para lista ligada
    list<int> ::iterator p;
    
    //Operacao
    for(p = lista.begin(); p != lista.end(); p++)  {
        
        //Condicao de parada
        if(*p == x){
            
            //Condicao verdadeira
            return true;
            
        } 
        
    }
    //Retorna um valor falso
    return false;
}
    
int main()  {
    
    //Criação da Lista ligada
    list<int> lista;
    int num;
    int n;
        
    while(true) {
            
    cin >> num;
        
    //Condicao de parada
    if(num == 0){
            
        break;
            
    }
        
    lista.push_back(num);
            
    }
    
    cin >> n;
    
    if(encontrar(lista, n)){
        cout << "Encontrado" << endl;
    }
    else{
        cout << "Nao encontrado" << endl;
    }
    
    return 0;
}
        