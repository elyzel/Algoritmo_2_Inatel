#include<iostream>
#include<list>
using namespace std;

//Função Booleana
bool encontrar(list<int> lista, int x) {
    //Ponteiro especial para lista ligada
    list<int> ::iterator p;
    
    //Percorre a lista ligada do incio ao fim
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
    
    //Laço de repetição para inserir os elementos na lista ligada
    while(true) {
            
    cin >> num;
        
    //Condicao de parada
    if(num == 0){
            
        break;
            
    }
    
    //Insere o elemento no final da lista ligada
    lista.push_back(num);
            
    }
    
    cin >> n;
    
    //Chama a função para procurar o elemento na lista ligada
    if(encontrar(lista, n)){
        cout << "Encontrado" << endl;
    }
    else{
        cout << "Nao encontrado" << endl;
    }
    
    return 0;
}
        