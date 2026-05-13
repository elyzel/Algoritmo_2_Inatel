#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int main()
{
    dados alunos[10000]; // Vetor de alunos
    string nome_temp;    // Nome lido temporariamente antes de entrar no vetor
    string busca_nome;   // Nome a ser buscado
    int i;               // Contador do loop de leitura
    int total;           // Total de alunos lidos
    int resultado;       // Índice retornado pela busca binária

    i = 0;

    // Leitura dos alunos até digitar "fim"
    while (i < 10000)
    {
        cin >> nome_temp;

        if (nome_temp == "fim")
            break;

        alunos[i].nome = nome_temp;

        cin.ignore();
        getline(cin, alunos[i].curso);

        cin >> alunos[i].matricula;
        cin.ignore();

        i = i + 1;
    }

    total = i;

    // Ordena o vetor antes da busca binária
    ordena(alunos, total);

    // Leitura do nome a ser buscado
    cin.ignore();
    getline(cin, busca_nome);

    resultado = binaria(alunos, total, busca_nome);

    // Exibe resultado da busca
    if (resultado != -1)
    {
        cout << alunos[resultado].nome << endl;
        cout << alunos[resultado].curso << endl;
        cout << alunos[resultado].matricula << endl;
    }
    else
    {
        cout << "Aluno nao encontrado" << endl;
    }

    return 0;
}