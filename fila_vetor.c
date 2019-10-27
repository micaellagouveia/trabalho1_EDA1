#include <stdio.h>
#include <stdlib.h>
#include "fila_vetor.h"

int *fila;
static int u, p, N;

void cria_fila()
{
    N = 5;
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
    if (!fila_cheia(u, p))
    {
        fila[u++] = x;
        return 1;
    }
    return 0;
}

int remove_fila(int fila[], int p, int u)
{
    if (fila_vazia(u, p))
        return 0;
    return fila[p++];
}

int fila_cheia(int u, int p)
{
    if (u == N)
    {
        return 1;
    }
    return 0;
}

int fila_vazia(int u, int p)
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
        if (fila[j] > 999 || fila[j] < 0)
        {
            fila[j] = 0;
        }
        printf(" %03d |", fila[j]);
    }
    printf("\n -------------------------------\n");
    for (int j = 0; j < N; j++)
    {
        printf(" ");
        if (j == p)
        {
            printf("  p");
            break;
        }
        else
        {
            printf("     ");
        }
    }
    printf(" ");
    for (int j = p; j < N; j++)
    {
        if (j == u)
        {
            printf("  u");
            break;
        }
        else
        {
            printf("     ");
        }
    }
    printf("\n");
}

void reinicia(int *p, int *u)
{
    *p = 0;
    *u = 0;
}
