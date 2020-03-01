#include "fila.h"

int main() {
    fila *f = criaFila();
    char Nome[MAX];
    int Idade = 0;
    printf("Digite o nome do individuo: ");scanf(" %[^\n]s", Nome);
    printf("Digite a idade do individuo: ");scanf("%i", &Idade);
    if(inserePESSOA(f, Nome, Idade)) printf("Pessoa entrou na fila!\n");
    else printf("A pessoa nao entrou na fila!\n");
    printf("Digite o nome do individuo: ");scanf(" %[^\n]s", Nome);
    printf("Digite a idade do individuo: ");scanf("%i", &Idade);
    if(inserePESSOA(f, Nome, Idade)) printf("A pessoa entrou na fila!\n");
    else printf("A pessoa nao entrou na fila!\n");
    exibirPESSOAS(f);
    if(retiraPESSOA(f)) printf("A pessoa saiu da fila!\n");
    else printf("A pessoa nao saiu da fila!\n");
    // if(limpaFila(f)) printf("Fila esvaziada!\n");
    // else printf("Fila ja esta vazia!\n");
    exibirPESSOAS(f);
    return 0;
}