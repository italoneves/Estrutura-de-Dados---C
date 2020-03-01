#include "fila_prioritaria.h"

filaP *criaPRIORITARIA() {
    filaP *f = (filaP*)malloc(sizeof(filaP));
    f->fila_std = criaFila();
    f->fila_esp = criaFila();
    return f;
}

int inserePRIORTARIA(filaP *f, char Nome[], int Idade) {
    if (Idade >= 65) inserePESSOA(f->fila_esp, Nome, Idade);
    else inserePESSOA(f->fila_std, Nome, Idade);
}

void exibirPRIORITARIA(filaP *f) {
    printf("Fila prioritaria\n");
    exibirPESSOAS(f->fila_esp);
    printf("Fila normal\n");
    exibirPESSOAS(f->fila_std);
}

int removePRIORITARIA(filaP *f) {
    if (f->fila_esp->inicio != NULL) retiraPESSOA(f->fila_esp);
    else retiraPESSOA(f->fila_std);
}
