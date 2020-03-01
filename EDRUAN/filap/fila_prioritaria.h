#include "fila.h"

struct filaP{
    fila *fila_std;
    fila *fila_esp;
};

typedef struct filaP filaP;

filaP *criaPRIORITARIA();

int inserePRIORTARIA(filaP *f, char Nome[], int Idade);

int removePRIORITARIA(filaP *f);

void exibirPRIORITARIA(filaP *f);