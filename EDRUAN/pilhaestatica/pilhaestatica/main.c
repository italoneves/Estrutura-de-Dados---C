#include <stdio.h>
#include <stdlib.h>
#include "pilhaestatica.h"


int main(int argc, char *argv[]) {
	
	pilha * p = criaPilha();
	push(p,20);
	push(p,30);
	push(p,50);
	push(p,80);
	int r = pop(p);
	printf("%d\n", r);
	print_pilha(p);
	
	return 0;
}
