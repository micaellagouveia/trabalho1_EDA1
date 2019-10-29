#ifndef FILALISTA_H
#define FILALISTA_H

typedef struct celula{
    int dado;
    struct celula *proximo; 
} celula;

celula *fila;
int tamanho,u, p, x;

int cria_fila();
int insere_fila(int x);
int remove_fila(int *x);
int fila_cheia();
int fila_vazia();
int tamanho_fila();
void print_fila();
void reinicia();

#endif