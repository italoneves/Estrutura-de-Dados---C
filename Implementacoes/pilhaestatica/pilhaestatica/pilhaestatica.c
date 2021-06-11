#include <stdio.h>
#include <stdlib.h>
#include "pilhaestatica.h"

pilha* criaPilha () {   
    pilha *p = (pilha*)malloc(sizeof(pilha));  // ALOCA A PILHA
    p->topo = 0;
    return p;
}

int push(pilha *p, tipo_elemento v) {  // INSERE NA PILHA
    if (p->topo==max){
    	return -1;
	}
	else{
		p->vet[p->topo] = v;
		p->topo++;
		return 0;
	}
}
tipo_elemento pop(pilha *p) {    // REMOVE  E RETORNA O ULTIMO ELEMENTO

	if(p->topo==0){
		return 0;
	}
	else {
		tipo_elemento r=0;
		r= p->vet[p->topo-1];   // PEGA O ELEMENTO QUE VAI SER RETORNADO
		p->topo--;     
		return r;
	}
	 
}

void print_pilha(pilha * p){
	int i=0;
	for (i=p->topo;i<=p->topo && i>=0;i--){ // Printa pilha do topo para baixo
			printf("%d ",p->vet[i]);  
			
	}

}

void limpaPilha(pilha *p){
	free(p);
}

