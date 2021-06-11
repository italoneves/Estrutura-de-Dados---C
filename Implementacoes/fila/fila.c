#include "fila.h"

fila * criar_fila() {
	
    fila * f = (fila*)malloc(sizeof(fila));
    f->inicio = NULL;
    f->fim = NULL;

    return f;
}

void insere (fila * f, char nome[], int idade){
	
    no * novo = (no*)malloc(sizeof(no));
	novo-> p = (pessoa*)malloc(sizeof(pessoa));

	novo->p->idade = idade;
	strcpy(novo->p->nome,nome); // COPIAR STRING
	novo->prox = NULL;

	if(f->fim!= NULL) {
		f->fim->prox = novo;
        f->fim = novo;
	}
	else {
		f->inicio = novo;
		f->fim = novo;
	}
}


void print_fila(fila * f){
		
		
		no * aux = f->inicio;

		while(aux!=NULL){
			printf("%s - %d\n",aux->p->nome, aux->p->idade);
			aux = aux->prox;

		}

}


void retira(fila *f) {

	no * temp;
	
	if(f->inicio == NULL) printf("Fila Vazia");
	else {
		temp = f->inicio;
		printf("\n\n%s - %d, Removido\n", temp->p->nome,temp->p->idade);
		
		f->inicio = f->inicio->prox;
		
		if(f->inicio == NULL) {
			f->fim = NULL;
		}	

		free(temp); //desaloca a memoria    
	}
}

void limpaFila (fila * f) {
		no *q, *t;
		q = f->inicio; 
		while (q != NULL) {
				t = q;
				q = q->prox;
				free(t);
		}  
		f->inicio = NULL;
		f->fim = NULL;  
}


