#include <stdio.h>
#include <stdlib.h>
#include "fila_vetor.h"
#define N 5

int *fila;
static int u,p;

void cria_filavetor(/*int *fila, int *u, int *p*/)
{
    fila = malloc(N * sizeof(int));
    u =0;
    p =0;
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

int remove_filavetor(int fila[], int p, int u)
{
    if(filavetor_vazia(u)) return 0;
    fila[p++] = 0;
    return 1;
}

int filavetor_cheia(int u)
{
    if (u == N)
    {
        return 1;
    }
    return 0;
}

int filavetor_vazia(int u)
{
    if (!u)
    {
        return 1;
    }
    return 0;
}

int tamanho_filavetor(int u)
{
    return u;
}

void print_filavetor(int *fila, int n)
{
    printf(" ");
    for (int i = 0; i < n-1; i++)
    {
        printf("------");
    }
    printf("-----\n");
    for (int i = 0; i < n-1; i++)
    {
        printf("| %03d ", fila[i]);
    }
    printf("| %03d |", fila[n - 1]);
    printf("\n ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("------");
    }
    printf(" ----\n");
}


void reiniciar(){
    free(fila);
}
