#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	
	char nome[51];
	int idade;
	
}pessoa;

typedef struct no {
	
	pessoa * p;
	struct no * prox;

}no;

typedef struct{
	
	no * inicio;
	no * fim;
	
}fila; 


fila * criar_fila();

void insere (fila * f, char nome[], int idade);

void print_fila(fila * f);

void limpaFila(fila *f);

void retira(fila *f);
