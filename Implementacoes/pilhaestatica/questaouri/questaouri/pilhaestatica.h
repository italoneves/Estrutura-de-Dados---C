#ifndef pilhaestatica_h
#define pilhaestatica_h
#endif 

#define max 1000 
typedef char tipo_elemento; //pilha de char

typedef struct{
 		int topo;
		tipo_elemento vet[max];
} pilha; 

pilha * criaPilha ();

int push (pilha *p, tipo_elemento v);

int pop(pilha *p);

void print_pilha(pilha * p);

void limpaPilha(pilha *p);

void ler_entrada(pilha * p);
