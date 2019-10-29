#include <stdio.h>
#include <stdlib.h>

#include "fila_lista.h"

int main()
{
    int escolha = -1;
    int n = 0, elem, check = 0;

        cria_fila();
    while (escolha)
    {
        printf("Escolha uma das opções abaixo:\n");
        printf("1. Inserir elementos na fila.\n");
        printf("2. Remover elementos na fila.\n");
        printf("3. Imprimir a fila.\n");
        printf("4. Reiniciar a fila.\n");
        printf("5. Sair.\n\n");

        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:

            printf("Digite quantos elementos você deseja inserir:\n");

            scanf("%d", &n);

            printf("Os números inseridos devem estar entre 0 a 999.\n");

            n = n + u;

            for (int i = u; i < n; i++)
            {
                printf("Elemento número %d:\n", i + 1);
                scanf("%d", &elem);
                if (insere_fila(elem) == 0)
                {
                    printf("%d elemento(s) inserido(s) na fila, mas %d não fora(m) posto(s).\n\n", i, n - i);
                    break;
                }
            }
            break;

        case 2:
            printf("Digite quantos elementos você deseja remover:\n");

            scanf("%d", &n);
            if (fila_vazia())
            {
                printf("Fila vazia. Impossível de remover.\n");
            }
            for (int j = 0; j < n; j++)
            {
                check = remove_fila(&x);
                p++;
                printf("Elemento %03d - ", check);
                if (check)
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
            if (fila_vazia())
            {
                printf("Fila Vazia.\n\n");
            }
            else
            {
                print_fila();
            }
            break;

        case 4:
            reinicia();
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