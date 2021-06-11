#include <stdio.h>
#include <stdlib.h>
#include "split.h"

// QUESTÃO 03  - LISTA STRUCT E ALOCAÇÃO DINÂMICA 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ent [100];
	int size;

	printf("Digite a entrada: ");
	scanf("%99[^\n]", ent);
	
	size = verificar_lista(ent);
	int *ent_int = split_int(ent, &size);
	
	if(ent_int==NULL){
		printf ( "String inválida" ) ;
		
		return 1;
	}
	printf( "Size: %d\n" ,size);
	int i = 0;
	for ( i=0 ; i<size ; i++) {
 	printf( "%d\n" , ent_int [i] ) ;
 }
	
	return 0;
}
