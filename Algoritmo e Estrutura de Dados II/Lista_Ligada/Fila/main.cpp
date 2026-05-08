#include<iostream>
#include<list> //Biblioteca que contém a propriedade de lista ligada
using namespace std;

//A pilha se baseia no LIFO (Último que entra e última que sai. Exemplo:
/*
10
20
30
40 -> topo

Ordem de saída:

40 30 2
*/

int main() {
    list<int> fila;    //Cria uma lista somente com valores inteiros
    list<int> ::iterator p; //Cria um ponteiro especial para lista ligada

    int x;

    for (int i = 0; i < 4; i++) {
        cin >> x;
        fila.push_back(x);    //insere o elemento no final da lista
    }

    //Remocao do inicio FIFO
    while (!fila.empty()) {

        cout << fila.front() << " ";
        //acessa o primeiro elemento da fila

        fila.pop_front();
        //Remove o primeiro elemento
    }

    return 0;
}