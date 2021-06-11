#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "aluno.h"



aluno * criar_aluno(char nome[], char cpf[], int idade,int quant){
	
	aluno * aluno_a = (aluno*) malloc(sizeof(aluno));
	aluno_a->notas = (float*)malloc(quant * sizeof(float));
	strcpy(aluno_a->nome, nome);
	strcpy(aluno_a->cpf, cpf);
	aluno_a->idade = idade;

	return aluno_a;

}
void atribuir_nota(aluno * aluno_a, int i, float n){
	if (i>0 && i<=aluno_a->quant-1){
		if (n>0 && n<=100){
			aluno_a->notas[i]= n;
		}
		else{
			printf("Nota Invalida\n");
	
		}
	}
	
}

