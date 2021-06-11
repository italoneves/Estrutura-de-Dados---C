#include "fila.h"

typedef struct{
	
	fila * fila_p;
	fila * fila_n;
	
}filapri;


filapri * criar_filapri ();

void inserir_filapri(filapri * f, char nome[], int idade);

void remover_pessoa(filapri * f);

void print_fila_p(filapri * f);

void limpa_fila_p(filapri * f);