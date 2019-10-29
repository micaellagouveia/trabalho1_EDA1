#include <stdio.h>
#include <stdlib.h>
#include "fila_vetor.h"
#define N 5

int *fila;
static int u, p;

void cria_fila()
{
    fila = malloc(N * sizeof(int));
    u = 0;
    p = 0;
}

int insere_fila(int fila[], int x, int u)
{
    if (!fila_cheia(u))
    {
        fila[u++] = x;
        return 1;
    }
    return 0;
}

int remove_fila(int fila[], int p, int u)
{
    if (fila_vazia(u))
        return 0;
    fila[p++] = 0;
    return 1;
}

int fila_cheia(int u)
{
    if (u == N)
    {
        return 1;
    }
    return 0;
}

int fila_vazia(int u)
{
    if (!u)
    {
        return 1;
    }
    return 0;
}

int tamanho_fila(int u)
{
    return u;
}

void print_fila(int *fila, int n)
{
    printf(" ");
    for (int i = 0; i < n - 1; i++)
    {
        if (fila[i] != 0)
            printf("------");
    }
    printf("-----\n");
    for (int i = 0; i < n - 1; i++)
    {
        if (fila[i] != 0)
            printf("| %03d ", fila[i]);
    }
    printf("| %03d |", fila[n - 1]);
    printf("\n ");
    for (int i = 0; i < n - 1; i++)
    {
        if (fila[i] != 0)
            printf("------");
    }
    printf(" ----\n");
}

void reinicia()
{
    free(fila);
}
