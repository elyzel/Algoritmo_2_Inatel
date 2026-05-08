#include<iostream>
#include<list> //Biblioteca responsável pela lista ligada

//FIFO ( Primeiro que entra, primeiro que sai)
/*
10 -> sai primeiro
20
30
40

Ordem de saída:
10 20 30 40
*/

using namespace std;

int main() {
    list<int> lista;    //cria uma lista somente de inteiros
    list<int> ::iterator p; //cria um ponteiro especial para listas
    int x;

    for (int i = 0; i < 4; i++) {
        cin >> x;
        lista.push_front(x);    //insere o elemento no início da lista
    }

    p = lista.begin(); //Ponteiro está apontado para o primeiro elemento da lista

    for (int i = 0; i < 4; i++) {
        cout << *p << " ";  //aponta para o valor atual da lista
        p++;    //avança para o próximo nó da lista
    }

    return 0;
}