#include <stdio.h>
#include <stdlib.h>

#include "fila_vetor.h"
#define N 5

int main()
{
    int escolha = -1;
    int *fila;
    int n = 0, elem, i = 0, tam = 0, check = 0;

    while (escolha)
    {
        printf("Escolha uma das opções abaixo:\n");
        printf("1. Inserir elementos na fila.\n");
        printf("2. Remover elementos na fila.\n");
        printf("3. Imprimir a fila.\n");
        printf("4. Reiniciar a fila.\n");
        printf("5. Sair.\n\n");

        scanf("%d", &escolha);
        cria_fila();

        switch (escolha)
        {
        case 1:

            printf("Digite quantos elementos você deseja inserir:\n");

            scanf("%d", &n);

            printf("Os números inseridos devem estar entre 0 a 999.\n");

            n = n + tam;

            for (i = tam; i < n; i++)
            {
                if (i < N)
                {
                    printf("Elemento número %d:\n", i + 1);
                    scanf("%d", &elem);
                    tam++;
                }
                if (insere_fila(fila, elem, i) == 0)
                {
                    printf("%d elemento(s) inserido(s) na fila, mas %d não fora(m) posto(s).\n\n", i, n - i);
                    break;
                }
            }
            break;

        case 2:
            printf("Digite quantos elementos você deseja remover:\n");

            scanf("%d", &n);
            if (fila_vazia(i))
            {
                printf("Fila vazia. Impossível de remover.\n");
            }
            for (int j = 0; j < n; j++)
            {
                printf("Elemento %d - ", j + 1);
                check = remove_fila(fila, j, tam);
                if (check)
                {
                    printf("Removido.\n\n");
                    tam--;
                }
                else
                {
                    printf("Não removido\n\n");
                }
            }
            break;

        case 3:
            if (fila_vazia(tam))
            {
                printf("Fila Vazia.\n\n");
            }
            else
            {
                print_fila(fila, tam);
            }
            break;

        case 4:
            reinicia();
            n = 0;
            i = 0;
            elem = 0;
            escolha = -1;
            tam = 0;
            printf("Fila reiniciada.\n\n");
            break;

        case 5:
            printf("------Fim-----\n");
            return 0;
        }
    }
    free(fila);
    return 0;
}