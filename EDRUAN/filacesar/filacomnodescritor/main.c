#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

int main(int argc, char *argv[]) {
	
	int n;
	

	head_fila * f = criar_fila();
	
	enfileirar(f, 10);
	enfileirar(f, 50);
	enfileirar(f, 70);
	enfileirar(f, 90);
	printf("Fila: ");print_fila(f);
	printf("\nTamanho da fila: %d \n",tamanho_fila(f));
	
	desenfileirar(f, &n);
	printf("Numero desenfelirado: %d\n", n); // Printa primeiro elemento da fila que foi retirado
	printf("Fila: ");print_fila(f);
	printf("\nTamanho da fila: %d \n",tamanho_fila(f));
	return 0;
}
