#ifndef aluno_h
#define aluno_h
#endif


typedef struct aluno{
	
	char nome[31];
	char cpf [12];
	int idade, quant;
	float * notas;
	
}aluno;

aluno * criar_aluno(char nome[], char cpf[], int idade,int quant);
void atribuir_nota(aluno * aluno_a, int i, float n);
	

