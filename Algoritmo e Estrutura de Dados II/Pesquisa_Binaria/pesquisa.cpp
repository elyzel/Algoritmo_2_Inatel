#include "header.h"

// Ordena o vetor de alunos por nome (bubble sort)
void ordena(dados vetor[], int tamanho)
{
    dados temp;  // Variável auxiliar para troca

    for (int i = 0; i < tamanho - 1; i++)       // Contador externo
    {
        for (int j = 0; j < tamanho - 1 - i; j++) // Contador interno
        {
            if (vetor[j].nome > vetor[j + 1].nome)
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// Busca binária: retorna índice do aluno ou -1 se não encontrado
int binaria(dados vetor[], int tamanho, std::string x)
{
    bool achou;  // Flag de controle da busca
    int baixo;   // Limite inferior do intervalo
    int meio;    // Posição central do intervalo
    int alto;    // Limite superior do intervalo

    baixo = 0;
    alto = tamanho - 1;
    achou = false;

    while ((baixo <= alto) && (achou == false))
    {
        meio = (baixo + alto) / 2;

        if (x < vetor[meio].nome)
            alto = meio - 1;
        else if (x > vetor[meio].nome)
            baixo = meio + 1;
        else
            achou = true;
    }

    if (achou)
        return meio;
    else
        return -1;
}