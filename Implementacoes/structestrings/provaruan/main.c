#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	aluno *aluno_a;
	aluno_a = criar_aluno("Italo", "09295277473", 10, 20);
	atribuir_nota(aluno_a,1, 100);
	printf("%.2f", aluno_a->notas[1]);
	return 0;
}
