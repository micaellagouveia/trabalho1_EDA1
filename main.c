#include <stdio.h>
#include <stdlib.h>

#include "fila_vetor.h"
#define N 5

int main()
{
    int escolha = -1;
    int *fila = malloc(sizeof(int) * N);
    int n = 0, elem, i = 0, tam=0;

    while (escolha)
    {
        printf("Escolha uma das opções abaixo:\n");
        printf("1. Inserir elementos na fila.\n");
        printf("2. Remover elementos na fila.\n");
        printf("3. Imprimir a fila.\n");
        printf("4. Reiniciar a fila.\n");
        printf("5. Sair.\n");

        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:

            printf("Digite quantos elementos você deseja inserir:\n");

            scanf("%d", &n);

            printf("Os números inseridos devem estar entre 0 a 999.\n");

          cria_filavetor();

            for (i = 0; i < n; i++)
            {
                if(i < N){
                printf("Elemento número %d:\n", i + 1);
                scanf("%d", &elem);
                tam++;
                }
                if (insere_filavetor(fila, elem, i) == 0)
                {
                    printf("%d elemento(s) inserido(s) na fila, mas %d não fora(m) posto(s).\n\n", i, n - i);
                    break;
                }
            }
            break;

        case 2:
            printf("Digite quantos elementos você deseja remover:\n");

            scanf("%d", &n);
            if (filavetor_vazia(i))
            {
                printf("Fila vazia. Impossível de remover.\n");
            }
            for (int j = 0; j < n; j++)
            {
                printf("Elemento %d - ", fila[j]);
                if (remove_filavetor(fila, j, i))
                {
                    printf("Removido.\n\n");
                }
                else
                {
                    printf("Não removido\n\n");
                }
            }
            break;

        case 3:
            print_filavetor(fila, tam);
            break;

        case 4:
            free(fila);
            n = 0;
            i = 0;
            elem = 0;
            escolha = -1;
            tam = 0;
            printf("Fila reiniciada.\n\n");
            break;
        
        case 5:
            return 0;
        }
    }

    return 0;
}