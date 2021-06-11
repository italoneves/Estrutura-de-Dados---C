#ifndef pilhaestatica_h
#define pilhaestatica_h
#endif 
#define max 100

typedef int tipo_elemento; //pilha de int

typedef struct{
 		int topo;
		tipo_elemento vet[max];
} pilha; 

pilha * criaPilha ();

int push (pilha *p, tipo_elemento v);

tipo_elemento pop(pilha *p);

void print_pilha(pilha * p);

void limpaPilha(pilha *p);
