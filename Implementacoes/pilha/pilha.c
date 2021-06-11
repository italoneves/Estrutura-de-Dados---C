#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

top_pilha * create_pilha(){
	
	top_pilha * p = (top_pilha*) malloc(sizeof(top_pilha));
	p->top = NULL;   // CRIA  A PILHA, TOPO DA PILHA APONTA PARA NULL
	
	return p; // RETORNA O TOP DA PILHA
	
}

void push(top_pilha * p, type_element v){

	node * new_node = (node*) malloc(sizeof(node));
	node * aux = p->top; 
	
	if(p->top == NULL){ // NO CASO DE PILHA VAZIA
	 	p->top = new_node;   
	 	new_node->next = NULL;
	 	new_node->data = v;
	}
	else{
		aux = p->top;  // AUXILIAR APONTA PARA ONDE O TOPO APONTA
		p->top = new_node;     // TOPO AGORA APONTA PARA O NOVO NÓ
		new_node->next = aux;  // NEXT DO NOVO NÓ APONTA PARA O AUXILIAR QUE TEM O ENDEREÇO DO NÓ QUE TOPO APONTAVA
		new_node->data = v;
	}
} 



type_element pop(top_pilha *p){
	
	type_element r;
	
	node * aux = p->top;
	
	r = aux->data;
	p->top = aux->next;
	
	free(aux);
	
	return  r;
	
}
	
void print_pilha(top_pilha *p){
		node * aux = p->top;
		printf("[");
		while(aux!=NULL){  
			printf("%d ", aux->data); 
			aux = aux->next;
		}
		printf("]\n");
}

void clean_pilha(top_pilha * p){
	
	node * actual, *next_2;     
	actual = p->top;   // APONTA PARA O TOP
	
	while(actual!=NULL){      // PERCORRE TODA A PILHA ATÉ O ÚLTIMO NODE
		
		next_2 = actual->next;   //RECEBE O END PRÓXIMO NÓ
		free(actual);           // LIBERA O NÓ ATUAL
		actual = next_2;        // RECEBE O NÓ DA FRENTE QUE TINHA SIDO GUARDADO
		
	}
	p->top = NULL; // ÍNICIA A PILHA DO ZERO
}







/*

CÓDIGO DE INSERIR NO FINAL DA PILHA 
	
void push(top_pilha *p, type_element v){

	node * new_node = (node*) malloc(sizeof(node));
	if(p->top ==NULL){  // VERIFICA SE A PILHA ESTÁ VAZIA
	
		p->top = new_node;   // APONTA PARA O NÓ
		new_node->next = NULL;  // NEXT DO NOVO NÓ APONTA PARA NULL
		new_node->data = v;    // ADICIONA O DADO 
		
	} 
}
*/


