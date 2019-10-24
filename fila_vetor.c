#include <stdio.h>
#include "fila_vetor.h"
#define N 5

int *cria_filavetor()
{
    static int fila[N];
    static int p = 0, u = 0;

    return fila;
}

int insere_filavetor(int fila[], int x, int u)
{
    if (!filavetor_cheia(u))
    {
        fila[u++] = x;
        return 1;
    }
    return 0;
}

int remove_filavetor(int fila[], int p)
{
    fila[p++] = 0;
}

int filavetor_cheia(int u)
{
    if (u == N)
    {
        return 1;
    }
    return 0;
}

int filavetor_vazia(int u, int p)
{
    if (u == 0 && p == 0)
    {
        return 1;
    }
    return 0;
}

int tamanho_filavetor(int u)
{
    return u;
}

int print_filavetor(int fila[])
{
    for (int i = 0; i < N - 1; i++)
    {
        printf(" ------");
    }
    printf(" -----");
    for (int i = 0; i < N - 1; i++)
    {
        printf("| %3d ", fila[i]);
    }
    printf("| %3d |", fila[N - 1]);
    for (int i = 0; i < N - 1; i++)
    {
        printf(" ------");
    }
    printf(" -----");
}
