# include<stdio.h>
# include <stdlib.h>
#include "listaencadeada.h"

head_list * creatlist(){
 	
 	head_list * l = (head_list*)malloc(sizeof(head_list));
	
 	l->begin=NULL;
  	l->size_desafio = 0;
	  
 	return l;  
 }
 
 int list_vazia(head_list *l){   // VERIFICA SE LISTA EST� VAZIA
 	
	if(l->begin==NULL){   // CABECA DA LISTA APONTAR PARA NULL  (ELA EST� VAZIA)
		return 1;
	}
	else{
		return 0;
	} 
 }
 

 void add_end(head_list * l, int x){ // ADICIONA NO FINAL DA LISTA
 	
 	node * aux = l->begin;   // AUX APONTA PARA CABE�A DA LISTA
 	node * new_node = (node*)malloc(sizeof(node)); // CRIA UM NOVO N� (DADO E NEXT)
 	new_node->dado = x;    //COLOCA O NOVO ELEMENTO NO NOVO N�
	
 	
 	if (list_vazia(l)==1){     // CONDI��O DE LISTA VAZIA
 		l->begin = new_node;   // LISTA DEIXA DE APONTAR PARA NULL E APONTA PARA O IN�CIO DO NOVO N�
		new_node->next = NULL;    // PONTEIRO DO NOVO N� APONTA PARA NULL
		l->size_desafio++;   
	 }
	else{
	 	while(aux->next!=NULL){   // "VARRE" TODA A LISTA AT� ENCONTRAR O N� QUE O NEXT APONTA PARA NULL
	 		aux = aux->next;
		 }
		 aux->next = new_node; // APONTA PARA O NOVO N�
		 new_node->next = NULL;  // NEXT DO NOVO N� PARA NULL
		 l->size_desafio++;
	}
 }
 
void remove_back(head_list * l){ // REMOVE UM N� DO FINAL DA LISTA
	
 	node * aux = l->begin;
 	node * before = l->begin;
 	
 	while(aux->next!=NULL){
 		before = aux;       // GUARDA O N� ANTERIOR
 		aux = aux->next;   // GUARDO O ENDERE�O DO N� SEGUINTE
	 }
	 before->next = aux->next; //APONTA O NEXT DO N� ANTERIOR PARA NULL
	 free(aux);                // REMOVE O N� SEGUINTE
	 l->size_desafio--;
	 
 }
 
 /* INICIO DA 2� PARTE DA  LISTA   */
 
int has_element(head_list * l, int x){   // VERIFICA SE TEM UM N�MERO EM ESPECIFICO 
 	
 	node * aux = l->begin;
 	int posicao_element =0;
 	
 	while(aux!=NULL){
 		if (aux->dado==x){    // VERIFICADO SE O DADO DO N� � IGUAL AO DADO QUE PROCURA
 			printf("Possui o numero : %d\n",aux->dado); 
 		
 			return posicao_element;  // RETORNA A POSI��O DE ONDE O DADO FOI ENCONTRADO
		 }
		 posicao_element++;  // INCREMENTA A POSI��O DO ELEMENTO PARA RETORNAR
		 aux = aux->next;    // INCREMENTA O AUX PARA VERIFICAR O PR�XIMO N� DA LISTA
	 }
	 return 0;
 	
 }
 
int insert_position(head_list * l, int p, int v){  // INSERIR DADO NA POSI��O PASSADA COMO PARAMETRO
 	
 	node * aux = l->begin;   
 	node * before = l->begin;
 	node * new_node = (node*)malloc(sizeof(node));
 	
 	if(list_vazia(l)==1){
 		printf("Lista Vazia");
 		return  0;
	 }
 	
 	else if ((p<0) || p>size(l)){ //VERIFICA POSI�AO. (SE FOR MENOR QUE 0 OU MAIOR QUE O TAMANNHO DA LISTA � �NVALIDA)
 		
 		printf("Posicao Invalida\n");
 		
 		return - 1;
	 }
	 else if(size(l)==p){  
	 	
	 	add_end(l,v);  // INSERIR DADO NA �LTIMA POSI��O 
	 	
	 	return 0;
	 }
	 else {
		 int i = 0;
		 for(i=0; i<p;i++){     // VAI AT� A POSI��O QUE FOI PASSADA COMO PAR�METRO PARA INSERIR
		 	before = aux;
		 	aux = aux->next;
		 }
		 before->next = new_node;  // ANTERIOR APONTA PARA O NOVO N�
		 new_node->next = aux;     // NEXT DO NOVO N� APONTA PARA O SEGUINTE E FICA INSERIDO NO LOCAL DESEJADO HEHE
		 new_node->dado = v;
		 l->size_desafio++;
		 
		 return 0;
	}
	 
 }
 
int remove_position(head_list * l, int p){   //  REMOVE POSI��O PASSADA COMO PAR�METRO
 	
 	node * aux = l->begin;
 	node * before = l->begin;
 	
 	if(list_vazia(l)==1){
 		printf("Lista Vazia");
 		return  0;
	 }
 	else if (p>size(l)-1 || (p<0)){    //VERIFICA POSI�AO. (SE FOR MENOR QUE 0 OU MAIOR IGUAL QUE O TAMANNHO DA LISTA � �NVALIDA)
 		printf("Posicao Invalida\n");   
 		return -1;
	 } 
	 
 	else if(p==size(l)-1){
 		
 		remove_back(l);  // REMOVE DO FINAL
 		
 		return 0;
	 }
	 else{
	 	int i =0; 
	 	for (i=0; i<p; i++){
	 		before = aux;
	 		aux = aux->next;
		 }
		 before->next = aux->next;   // APONTA PARA O N� SEGUINTE 
		 free(aux);                  // LIBERA O ENDERE�O DO N� EXCLU�DO 
		 l->size_desafio--;
		 
		 return 0; 
	 }
	 

 }
 
 int remove_element(head_list * l, int x){  // REMOVE ELEMENTO PASSADO COMO PAR�METRO E RETORNA POSI��O DA ONDE FOI REMOVIDO
 	
 	node * aux = l->begin;
 	node * before = l->begin;
 	int i =0;
 	
 	if(list_vazia(l)==1){
 		printf("Lista Vazia");
 		return  0;
	 }
 	
 	while(aux!=NULL){
 		if((aux->dado== x) && i==0){  // REMOVER DA PRIMEIRA POSI��O
 			l->begin = aux->next;  // CABE�A DA LISTA APONTA PARA O N� SEGUINTE 
 			free(aux);             // LIBERA O N� QUE ERA O �NICIO DA LISTA
 			l->size_desafio--;
 			return i;
			
 			
		 }
		else if((aux->dado== x) && i==size(l)-1){ // REMOVER DA �LTIMA POSI��O
			before->next = NULL;     // N� ANTERIOR APONTA PARA NULL, INFORMANDO FINAL DA LISTA
			free(aux); 
			l->size_desafio--;   
			
			return i;
			
		}
 		
 		else{                   // REMOVER DE QUALQUER OUTRA POSI��O
		 	if(aux->dado == x){
	 			before->next = aux->next;  // APONTA PARA ELEMENTO SEGUINTE, EXCLUINDO O DO MEIO 
	 			free(aux);      
	 			l->size_desafio--;
	 			return i;
 			}
 			
 		
		 }
		 
		 before = aux; 
		 aux = aux -> next;  // INCREMENTA O AUX
		 i++;  // INCREMENTA POSI��O PARA DEPOIS RETORNAR CORRETAMENTE 

	}
}


int get(head_list * l, int p, int *vret){  // GRAVA ELEMENTO DE UMA POSI��O PASSADA COMO PARAM�TRO

	if(list_vazia(l)==1){
 		printf("Lista Vazia");
 		return  0;
	 }

	else if((p<0) || p>size(l)){    //VERIFICA POSI�AO. (SE FOR MENOR QUE 0 OU MAIOR QUE O TAMANNHO DA LISTA � �NVALIDA)
 		
 		printf("Posicao Invalida\n");
 		
 		return - 1;
	 }

	else{
		int i=0;
		node * aux = l->begin;
		for (i=0;i<p; i++){
				aux = aux->next;
		
		}
		
		*vret = aux->dado; // GRAVA ELEMENTO
		
		
		return 0;
	}
}
 
 /* FIM DA 2� PARTE DA LISTA */
 
void print_list(head_list * l){
 	node * aux = l->begin;
 	printf("[");
 	while(aux!=NULL){// AUX -> NEXT // N�O VAI PRINT O �LTIMO POIS J� CONSULTA O  NEXT DO PR�XIMO E VAI TA APONTANDO PARA  NULL NO �LTIMO CASO;
 		printf("%d ",aux->dado);  
 		aux = aux->next;  // INCREMENTA O AUX	
	 }	 
	printf("]\n");
 }
 
 void print_list_c(head_list * clone){

 	node * aux = clone->begin;
 	printf("[");
 	while(aux!=NULL){// AUX -> NEXT // N�O VAI PRINT O �LTIMO POIS J� CONSULTA O  NEXT DO PR�XIMO E VAI TA APONTANDO PARA  NULL NO �LTIMO CASO;
 		printf("%d ",aux->dado);  
 		aux = aux->next;
		 					 // INCREMENTA O AUX	
	 }	 
	printf("]\n");
 }
 
 int size(head_list * l){
 	
 	if(list_vazia(l)==1){
 		return  0;
	 }
	 else{
	 	return l->size_desafio; 
	 }
	 
 }
 
head_list * clonar_lista(head_list * l){

	head_list * head_clone = (head_list*)malloc(sizeof(head_list));
	head_clone->begin= NULL;
	head_clone->size_desafio = 0;
	node * aux = l->begin;

	while(aux!=NULL){
	
		add_end(head_clone, aux->dado);
		aux = aux->next;
	
	}

	return head_clone;
}
