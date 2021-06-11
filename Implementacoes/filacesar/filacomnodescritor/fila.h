#ifndef fila_h
#define fila_h
#endif



typedef struct node{
	
	int dado;
	struct node * next;
}node;

typedef struct{
	
	node * final;
	node * inicio;
	int tam_fila;
	
}head_fila;


head_fila * criar_fila();

int tamanho_fila(head_fila * fila);

void enfileirar(head_fila  *fila, int x );

void desenfileirar(head_fila  *fila, int *x );

void print_fila(head_fila * fila);
