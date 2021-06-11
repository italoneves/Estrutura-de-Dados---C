#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	top_pilha * p = create_pilha();
	push(p, 10);
	push(p, 60);
	push(p, 50);
	print_pilha(p);
	type_element r = pop(p);
	printf("%d", r);
	return 0;
}
