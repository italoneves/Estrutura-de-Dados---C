#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhaestatica.h"

pilha* criaPilha () {   
    pilha *p = (pilha*)malloc(sizeof(pilha));  // ALOCA A PILHA
    p->topo = 0;
    return p;
}

int push(pilha *p, tipo_elemento v) {  // INSERE NA PILHA
    if (p->topo==max){  // VETOR LOTADO
    	return -1;
	}
	else{
		p->vet[p->topo] = v;  // INSERIR NO INDICE P->TOPO 
		p->topo++; 
		return 0;           
	}
}
int pop(pilha *p) {    // REMOVE  E RETORNA O ULTIMO ELEMENTO

	if(p->topo==0){    // SE PILHA VAZIA  
		return 0;
	}
	else {
		p->vet[p->topo-1];   // PEGA O ELEMENTO QUE VAI SER RETORNADO 
		p->topo--;     
		
		return 1;
	}
	 
}

void limpaPilha(pilha *p){
	free(p);
}


void ler_entrada(pilha * p){
	char expre[1001];
	int i=0;
	//while(scanf("%s",expre)!=EOF)
	//for (j=0; j<5; j++)
	while(scanf("%s",expre)!=EOF){
		p->topo = 0;
		int aux =0;
		for(i=0;expre[i]!='\0';i++){
			if(expre[i]=='('){ 
				push(p,'(');
			}
			else if(expre[i]==')'){
				if(pop(p)==0){   // PILHA ZERADA E FICOU PARÊNTESES EM ABERTO )
					printf("incorrect\n");
					aux = 1;
				}
			}
		}

		if(p->topo==0 && aux==0){  // ZEROU PILHA
			printf("correct\n");
		}
		else{
			if (aux==0){         // RESTOU ALGO NA PILHA (
			printf("incorrect\n");
			}
		}
    }
}
	

void print_pilha(pilha * p){
	int i=0;
	printf("[");
	for(i=0;p->vet[i]!='\0';i++){ // Printa pilha do topo para baixo
			if(p->vet[i]=='('){
				printf("%c",p->vet[i]); 
			}
	}
	printf("]");

}


