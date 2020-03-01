#include <stdio.h>
#include <stdlib.h>
#include "listaencadeada.h"

int main(int argc, char *argv[]) {
	
	int vret = 0;
	
	head_list * l = creatlist();
	
	if (list_vazia(l))printf("Lista Vazia\n");
	else printf("A lista nao esta vazia\n");
	printf("Lista: ");print_list(l);
	add_end(l, 5);
	add_end(l, 8);
	add_end(l, 3);
	add_end(l, 4);
	insert_position(l,1,45);
	
	if (list_vazia(l))printf("Lista Vazia\n");
	else printf("A lista nao esta vazia\n");
	
	printf("Lista: ");print_list(l);
	printf("O tamanho da lista e: %d\n",size(l));
	printf("A posicaoo do elemento na lista e: %d\n",has_element(l, 45));
	if (has_element(l, 2))printf("A posicaoo do elemento na lista e: %d\n",has_element(l, 2));
	else printf("O elemento nao esta na lista\n");
	
	printf("O elemento que foi removido estava na posicao : %d\n",remove_element(l, 45));
	printf("Lista :");print_list(l);	
	printf("O tamanho da lista e: %d\n", size(l));
	get(l,1,&vret);
	printf("O dado que esta na posicao 1 e: %d \n", vret);
	remove_back(l);	
	printf("Foi removido um elemento do final\n");
	printf("Lista :");print_list(l);
	printf("O tamanho da lista e: %d\n",size(l));
	remove_position(l,2);
	add_end(l, 1);
	add_end(l, 8);
	add_end(l, 3);
	add_end(l, 4);
	printf("Lista :");print_list(l);

	head_list * clone = clonar_lista(l);

	printf("Lista clone :"); print_list_c(clone);
	printf("O tamanho da lista e: %d\n",size(l));
	return 0;
}
