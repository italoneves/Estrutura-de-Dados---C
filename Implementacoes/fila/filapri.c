#include "filapri.h"

filapri * criar_filapri () {
	
	filapri * f = (filapri*)malloc(sizeof(filapri));
	
	f->fila_p = criar_fila();
	f->fila_n = criar_fila();
	
	return f;
}

void inserir_filapri(filapri * f, char nome[], int idade){
	
	if (idade<65){
		insere(f->fila_n, nome,idade);
	}
	else{
		insere(f->fila_p, nome, idade);
	}
	
}

void remover_pessoa(filapri * f){
	
	if(f->fila_p->inicio!=NULL){

		retira(f->fila_p);

	}
	else{

		retira(f->fila_n);
	}


}

void print_fila_p(filapri * f){
	
	system("clear");
	printf("\nFila prioritaria:\n");
	print_fila(f->fila_p);
	printf("\nFila Normal: \n");
	print_fila(f->fila_n);



}

void limpa_fila_p (filapri * f){

	limpaFila(f->fila_p);
	limpaFila(f->fila_n);


}