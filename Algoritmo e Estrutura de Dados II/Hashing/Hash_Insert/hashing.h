#ifndef HASHING_H
#define HASHING_H

struct dado
{
    int k;
    int status;
};

// Hashing Auxiliar
int hash_aux(int k, int m);

// Sondagem Linear
int hash1(int k, int i, int m);

// Hashing Insert
int hash_insert(dado T[], int m, int k);

#endif