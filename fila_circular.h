#ifndef fila_circular
#define fila_circular

static int *fila;
static int u, p, N;


void cria_fila();
int insere_fila();
int remove_fila();
int fila_cheia();
int fila_vazia();
int tamanho_fila();
void print_fila();
int redimensiona();
void reinicia();


#endif