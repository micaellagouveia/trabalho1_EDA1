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
    for (int i = 0; i < N; i++)
    {
        fila[i] = 0;
    }
}

int insere_fila(int fila[], int x, int u)
{
    if (!fila_cheia(u))
    {
        fila[u] = x;
        u++;
        if (fila[u] > 999 || fila[u] < 0)
        {
            fila[u] = 0;
        }
        return 1;
    }
    return 0;
}

int remove_fila(int fila[], int p, int u)
{
    if (fila_vazia(u))
        return 0;
    return fila[p++];
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

void print_fila(int *fila, int u, int p)
{
    printf(" -------------------------------\n|");
    for (int j = 0; j < N; j++)
    {
        printf(" %03d |", fila[j]);
    }
    printf("\n -------------------------------\n");
    for (int j = 0; j < N; j++)
    {
        if (j == p)
        {
            printf("   P  ");
            break;
        }
        else
        {
            printf("      ");
        }
    }
    for (int j = 0; j < N; j++)
    {
        if (j == u)
        {
            printf("U");
            break;
        }
        else
        {
            printf("     ");
        }
    }
    printf("\n");
}

void reinicia()
{
    p = 0;
    u = 0;
}
