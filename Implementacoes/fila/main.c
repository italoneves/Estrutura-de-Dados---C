#include "filapri.h"

int main() {
    
    int cont =0, op=0, idade=0;
    char nome[51];
    
    filapri * f = criar_filapri();

    if (f==NULL) return 0;
    
   do{

        printf("ESCOLHA UMA DAS OPÇÕES ABAIXO:\n\n");
        printf("1 - Verificar pessoas na fila\n");
        printf("2 - Cadastrar Pessoa na fila:\n");
        printf("3 - Remover Pessoa da fila :\n");
        printf("0 - Encerrar fila:\n\n\n");
        printf("Digite o numero da sua escolha: ");
        op=-1;
        scanf("%d", &op);
        getchar();
        
        switch (op){

            case 1:  // Verificar pessoas na fila
                print_fila_p(f);

            break;

            case 2:  // Inserir pessoa na fila
                 printf("Digite o nome: ");
                 scanf("%31[^\n]",nome);
                 getchar();
                 printf("Digite a idade: ");
                 scanf("%d",&idade);
                 getchar();
               
                 inserir_filapri(f, nome, idade);
            break;

            case 3: //Remover pessoa da fila
                    remover_pessoa(f);

            break;
            default:
                if(op==0){
                    limpa_fila_p(f);
                    printf("Fila Encerrada\n");
                }
                else{
                    printf(" Você escolheu uma opcao que não existe. \n");
                }
                break;
        }

   } while(op!=0); 
      
    return 0;
    
}




//gcc main.c fila.c fila.h -o testar

// gcc main.c fila.c fila.h filapri.h filapri.c -o testar