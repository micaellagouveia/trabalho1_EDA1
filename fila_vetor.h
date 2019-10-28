#ifndef fila_vetor
#define fila_vetor

static int *fila;
static int u, p, N;

void cria_fila();
int insere_fila(int x);
int remove_fila();
int fila_cheia();
int fila_vazia();
int tamanho_fila();
void print_fila();
void reinicia();

#endif