#ifndef HASHING_H
#define HASHING_H

struct dado
{
    int k;
    int status;
};

// < -- Hashing Auxiliar -- >
int hash_aux(int k, int m);
// < -- Sondagem Linear-- >
int hash1(int k, int i, int m);
// < -- Hashing de Inserção -- >
int hash_insert(dado T[], int m, int k);
// < -- Hashing de Busca -- >
int hashing_search(dado T[], int m, int k);

#endif