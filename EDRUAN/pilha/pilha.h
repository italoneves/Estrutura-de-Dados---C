#ifndef pilha_h
#define pilha_h
#endif

typedef int type_element; //pilha de int

typedef struct node{
	
	type_element data; // dado do tipo int
	struct node * next; 
	
}node;

typedef struct{
	
	node * top;  //topo da pilha // cabeça da lista
	
}top_pilha;



top_pilha * create_pilha();

void push (top_pilha *p, type_element v);

type_element pop(top_pilha *p);

void print_pilha(top_pilha *p);

void clean_pilha(top_pilha * p);
