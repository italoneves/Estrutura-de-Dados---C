#include <stdlib.h>
#include <stdio.h>
#include "fila.h"


head_fila * criar_fila( ){
	
	head_fila * f = (head_fila*) malloc(sizeof(head_fila));
	f->final = f->inicio = NULL;
	f->tam_fila = 0;
	
	return f;
    
}

int tamanho_fila( head_fila * f ){ // VERIFICA O TAMANHO DA FILA

	return f->tam_fila; 
}

void elementoFrente( head_fila * f, int *valor ){
	
	node * aux = f->inicio;
	*valor = aux->dado;
}

void enfileirar ( head_fila * f, int x ){  // ADICIONA NO FINAL DA FILA
	
	node * new_node = (node*)malloc(sizeof(node));

	if(f->inicio==NULL){ // CONDIÇÃO DE FILA VAZIA
		f->inicio = f->final = new_node;   // INICIO E FINAL APONTA PARA O NOVO NODE
		f->tam_fila++; // ATUALIZA O TAMANHO DA FILA
		
		new_node->next = NULL;   
		new_node->dado = x;
	}
	else{
		
		(f->final)->next = new_node; // BOTA O NOVO NODE NA FILA (COMO TEMOS O FINAL NÃO PRECISAMOS PERCORRER ATÉ NULL)
		f->final = new_node;   // ATUALIZA O HEAD_FINAL 
		
		new_node->next = NULL;
		new_node->dado = x;
		f->tam_fila++; // ATUALIZA O TAMANHO DA FILA
		
	}
	
	
}
   
void desenfileirar ( head_fila * f, int * x ){ // REMOVE DO ÍNICIO DA FILA

	*x =  (f->inicio)->dado; // COPIA DO ELEMENTO QUE VAI SER RETIRADO

	node * aux = f->inicio;  // SALVA A CABEÇA DA LISTA PARA DEPOIS LIBERAR(FREE)

	
	if(f->inicio==f->final){   // CASO DE UM ÚNICO ELEMENTO NA FILA
		f->inicio = f->final =NULL;
	}
	else{
		
		f->inicio = (f->inicio)->next; // Ou aux->next // Da no mesmo
	}
	
	free(aux); // LIBEREI MEMÓRIA DO NODE QUE FOI RETIRADO
	f->tam_fila--; // DIMINUI TAMANHO DA FILA

}


void print_fila( head_fila * f ){
	
	node * aux = f->inicio;
	
	printf("[");
	
	while(aux!=NULL){
		
		printf("%d ", aux->dado);
		aux = aux->next;
    }
	printf("]");
	
}

