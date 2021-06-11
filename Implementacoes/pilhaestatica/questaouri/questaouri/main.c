#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhaestatica.h"


int main(int argc, char *argv[]) {
	
	int n=0 ,i=0;
	
	pilha * p = criaPilha();
	ler_entrada(p);
	limpaPilha(p);
	return 0;
}


