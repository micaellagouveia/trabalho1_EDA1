#include <stdio.h>
#include <stdlib.h>

#include "fila_lista.h"

int cria_fila()
{
    tamanho = 0;

    fila = malloc(sizeof(celula));
    fila->proximo = fila;

    if (fila == NULL)
        return 0;

    return 1;
}

int insere_fila(int x)
{
    celula *novo = malloc(sizeof(celula));

    if (novo == NULL)
        return 0;

    novo->proximo = fila->proximo;
    fila->proximo = novo;
    fila->dado = x;
    fila = novo;
    tamanho++;
    u++;

    return 1;
}

int remove_fila(int *x)
{
    if (fila_vazia())
        return 0;

    celula *lixo = fila->proximo;
    *x = lixo->dado;
    fila->proximo = lixo->proximo;

    free(lixo);
    tamanho--;

    return *x;
}

int fila_cheia()
{
    return 0;
}

int tamanho_fila()
{
    return tamanho;
}

int fila_vazia()
{
    return fila->proximo == fila;
}

void print_fila()
{

    if (!u)
    {
        printf("Fila Vazia.\n");
    }
    else
    {

        printf("\t");
        for (celula *j = fila->proximo; j != fila; j = j->proximo)
            printf("-------");
        printf("-\n");

        printf("\t");
        for (celula *j = fila->proximo; j != fila; j = j->proximo)
            printf("| %03d ", j->dado);
        printf("|\n");

        printf("\t");
        for (celula *j = fila->proximo; j != fila; j = j->proximo)
            printf("-------");
        printf("-\n");

        printf("\t");
        for (celula *j = fila->proximo; j != fila; j = j->proximo)
        {
            if (j == fila->proximo)
                printf("   p   ");
            else if (j->proximo == fila)
                printf("   u   ");
            else
                printf("       ");
        }
        printf("\n\n");
    }
    return;
}

void reinicia()
{
    p = 0;
    u = 0;
}