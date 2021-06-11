#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenar.h"

int gerar_numeros(){

        int i=1;
        FILE * f = fopen("numeros.txt","w"); // ABRIR ARQUIVO PARA ESCREVER 
        
        if(f==NULL){

            printf("Não é possivel abrir o arquivo"); 

            return 0; // RETORNA 0 EM CASO DE ERRO
        }        
        else{
             srand(time(NULL)); 
             int n=0;
             for(i=1; i<=3000000; i++){  
 
                 n = rand()%3000001;   // GERANDO NÚMERO ALEATÓRIO
                 fprintf(f,"%d",n); // INSERIR NÚMEROS NO ARQUIVO 
                 fputc('\n', f);    // PULAR LINHA PARA INSERIR PRÓXIMO NÚMERO
        }

        fclose(f);   // FECHAR ARQUIVO
    }

    return 1; // SUCESSO NA ESCRITA

}