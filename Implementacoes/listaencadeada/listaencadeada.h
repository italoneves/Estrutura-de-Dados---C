#define listaencadeada_h

typedef struct node{
 	
 	int dado;	
 	struct node * next;
 	
 }node;
 
 typedef struct{
 	
 	node * begin;
    int size_desafio;
 	
 }head_list;
 

 
head_list * creatlist(); // CRIAR LISTA

int list_vazia(head_list * l); //VERIFICAR SE EST� VAZIA  *
 	
void add_end(head_list * l, int x );// ADICIONA AO FINAL DA LISTA *

void print_list(head_list *l); // PRINTA LISTA *

void remove_back(head_list * l); // REMOVE DO FINAL DA LISTA  *

int size(head_list * l); // VERIFICA O TAMANHO DA LISTA *

int has_element(head_list * l, int x ); // VERIFICAR SE TEM O ELEMENTO PASSADO COMO PAR�METRO *

int insert_position(head_list * l, int p, int v); // INSERE NA POSI��O PASSADA COMO PAR�METRO *

int remove_position (head_list * l, int p);  // REMOVE DA POSI��O PASSADA COMO PAR�METRO 

int remove_element(head_list *l, int x);    // REMOVER DE ACORDO COM ELEMENTO E RETORNA POSI��O *

int get( head_list * l, int p, int * vret);  // SALVA ELEMENTO DE UMA DETERMINADA POSI��O *

head_list* clonar_lista(head_list * l);        

void print_list_c(head_list * clone);