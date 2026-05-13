#ifndef TREINO_HEADER_H
#define TREINO_HEADER_H

#include <string>

struct dados
{
    std::string nome;   // Nome do aluno
    std::string curso;  // Curso do aluno
    int matricula;      // Matrícula do aluno
};

int binaria(dados vetor[], int tamanho, std::string x);
void ordena(dados vetor[], int tamanho);

#endif