#include <stdio.h>
#include <stdlib.h>
#include<string.h>



typedef struct{
	
	char nome[31];
	char cpf[12];
	int idade;
	int quantidade; 
	float *notas;
}aluno;



aluno * criar_aluno(char nome[], char cpf[],int idade, int quant){
	
	aluno * a = (aluno*) malloc(sizeof(aluno));
	a->notas = (float*) malloc(quant * sizeof(float));
	
	strcpy(a->nome, nome);
	strcpy(a->cpf, cpf);
	a->idade = idade;
	a->quantidade = quant;
	
	return a;
}

void atribuir_nota(aluno * a, int i, float nota){
	
	if ((i>=0 && i<=a->quantidade) && (nota>=0 && nota <=100)){
			
			a->notas[i] = nota;
			
	}
	
}

float media(aluno * a){
	int i =0, soma=0, m=0;
	for(i=0; i<a->quantidade; i++){
		
		soma += a->notas[i];

		
	}
	
	return m = soma/a->quantidade;
}

void desalocar(aluno * a){
		free(a->notas);
		free(a);
}



int main(){
	
	float m = 0;
	aluno * a = criar_aluno("Italo","092952", 21, 3);
	
	atribuir_nota(a,1, 100.00);
	atribuir_nota(a,0, 100.00);
	atribuir_nota(a,2, 100.00);
	
	m = media(a);
	printf("%.2f", m);
	desalocar(a);
	

	return 0;
	
}
