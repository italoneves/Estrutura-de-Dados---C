#include "fila.h"

fila * criaFila() {
    fila *f = (fila*)malloc(sizeof(fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

int inserePESSOA(fila *f, char Nome[], int Idade){
    if (f == NULL) return 0;
    else {
        no *novo = (no*)malloc(sizeof(no));
        if (novo == NULL) return 0;
        else {
            novo->Gente = (Pessoa*)malloc(sizeof(Pessoa));
            if (novo->Gente == NULL) return 0;
            else {
                strcpy(novo->Gente->Nome, Nome);
                novo->Gente->Idade = Idade;
                novo->prox = NULL;
                if(f->fim != NULL) {
                    f->fim->prox = novo;
                    f->fim = novo;
                    return 1;;
                }
                else {
                    f->inicio = novo;
                    f->fim = novo;
                    return 1;
                }
            }
        }
    }
}

int retiraPESSOA(fila *f) {
	no *temp;
	if(f->inicio == NULL) return 0;
	else {
		temp = f->inicio;
		f->inicio = f->inicio->prox;
		if(f->inicio == NULL) {
			f->fim = NULL;
        }
        free(temp->Gente);
		free(temp);
		return 1;    
	}
}

int limpaFila (fila *f) {
    if (f == NULL) return 0;
    else {
        no *AUX;
        while (f->inicio != NULL) {
            AUX = f->inicio;
            f->inicio = f->inicio->prox;
            free(AUX->Gente);
            free(AUX);
        }  
        f->inicio = NULL;
        f->fim = NULL;
        return 1;
    }
}

void exibirPESSOAS(fila *f) {
    if (f == NULL) printf("Fila vazia!\n");
    else {
        no *AUX = f->inicio;
        int i;
        for (i = 0 ; AUX != NULL; AUX = AUX->prox, i ++) {
            printf("Posicao: %i\n", i + 1);
            printf("Nome: %s\n", AUX->Gente->Nome);
            printf("Idade: %i\n\n", AUX->Gente->Idade);
        }
    }
}