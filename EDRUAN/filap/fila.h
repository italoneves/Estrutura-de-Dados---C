#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 51

typedef struct {
    char Nome[MAX];
    int Idade;
}Pessoa;

struct no {
	Pessoa *Gente;
	struct no *prox;
};

typedef struct no no;

typedef struct {
	no *inicio;
	no *fim;
}fila; 

fila *criaFila ();

int inserePESSOA(fila *f, char Nome[], int Idade);

int retiraPESSOA(fila *f);

int limpaFila(fila *f);

void exibirPESSOAS(fila *f);