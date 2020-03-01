#include "fila_prioritaria.h"

int main() {
    char Nome[MAX];
    int Idade;
    filaP *f = criaPRIORITARIA();
    printf("Digite o nome do individuo: ");scanf(" %[^\n]s", Nome);
    printf("Digite a idade do individuo: ");scanf("%i", &Idade);
    if(inserePRIORTARIA(f, Nome, Idade)) printf("A pessoa entrou na fila!\n");
    else printf("A pessoa nao entrou na fila!\n");
    exibirPRIORITARIA(f);
    printf("Digite o nome do individuo: ");scanf(" %[^\n]s", Nome);
    printf("Digite a idade do individuo: ");scanf("%i", &Idade);
    if(inserePRIORTARIA(f, Nome, Idade)) printf("A pessoa entrou na fila!\n");
    else printf("A pessoa nao entrou na fila!\n");
    exibirPRIORITARIA(f);
    printf("Digite o nome do individuo: ");scanf(" %[^\n]s", Nome);
    printf("Digite a idade do individuo: ");scanf("%i", &Idade);
    if(inserePRIORTARIA(f, Nome, Idade)) printf("A pessoa entrou na fila!\n");
    else printf("A pessoa nao entrou na fila!\n");
    if(removePRIORITARIA(f)) printf("A pessoa saiu da fila!\n");
    else printf("A pessoa nao saiu da fila!\n");
    exibirPRIORITARIA(f);
    return 0;
}