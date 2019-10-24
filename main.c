#include <stdio.h>
#include <stdlib.h>

#include "fila_vetor.h"
#define N 5

int main()
{
    printf("Digite quantos elementos você deseja inserir:\n");
    int n, elem;
    int *fila = malloc(sizeof(int) * N);
    scanf("%d", &n);
    printf("Os números inseridos devem estar entre 0 a 999.\n");

    fila = cria_filavetor();

    for (int i = 0; i < n; i++)
    {
        printf("Elemento número %d:\n", i + 1);
        scanf("%d", &elem);

        if (insere_filavetor(fila, elem, i) == 0)
        {
            printf("%d elemento(s) inserido(s) na fila, mas %d não fora(m) posto(s).\n", i, n - i);
        }
    }

    return 0;
}