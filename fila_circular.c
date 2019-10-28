#include <stdio.h>
#include <stdlib.h>
#include "fila_circular.h"


void cria_fila()
{
    N = 5;
    fila = malloc(N * sizeof(int));
    p = 0;
    u = 0;
}

int insere_fila(int x)
{

    if (fila_cheia(u))
    {
        redimensiona();
    }
    fila[u++] = x;

    return 1;
}

int remove_fila()
{
    if (fila_vazia(u))
        return 0;
    fila[p++] = 0;
    if (p == N)
    {
        p = 0;
    }
    return 1;
}

int fila_cheia()
{
    return (u + 1) % N == p;
}

int fila_vazia()
{
    return p == u;
}

int tam_fila()
{
    int tam = u - p;
    if (p > u)
    {
        tam = N + tam;
    }
    return tam;
}

void print_fila()
{
    /*
    printf(" ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("------");
    }
    printf("-----\n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("| %03d ", fila[i]);
    }
    printf("| %03d |", fila[n - 1]);
    printf("\n ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("------");
    }
    printf(" ----\n");*/
}

int redimensiona()
{
    int i, j;
    fila = realloc(fila, 2 * N * sizeof(int));
    if (fila == NULL)
    {
        return 0;
    }
    if (u < p)
    {
        if (u < N - p)
        {
            for (i = N, j = 0; j < u; i++, j++)
            {
                fila[i] = fila[j];
            }
            u = N + u;
        }
        else
        {
            for (i = p, j = N + p; i < N; i++, j++)
            {
                fila[j] = fila[i];
            }
            p = N + p;
        }
    }
    N *= 2;
    return 1;
}

void reinicia()
{
    free(fila);
}