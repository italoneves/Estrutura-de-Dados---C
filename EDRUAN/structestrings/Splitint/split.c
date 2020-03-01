#include <stdio.h>
#include <stdlib.h>
#include "split.h"


int verificar_lista(char *v){
	int i = 0, cont = 0;
	
	for(i=0; v[i]!='\0'; i++){
		if (v[i]==' ' || v[i]>='0' && v[i]<='9'){
			if(v[i]>='0' && v[i]<='9'){ 
				if (v[i+1]==' ' || v[i+1]=='\0'){
					cont++;
				}
			}
		}		
		else{
			return 0;
		}			
	}

	if (cont==0)return 0;
	
	return cont;
}

int * split_int(char *v, int *cont){
	
	int i = 0, t=0, k=0;
	char aux[100];
	
	if (verificar_lista(v)==0){
		
		return NULL;
	}
	
	int *num =(int*)malloc(*cont* sizeof(int));
	
	for(i=0; v[i]!='\0'; i++){
		if (v[i]==' ' || v[i]>='0' && v[i]<='9'){
			if(v[i]>='0' && v[i]<='9'){
				aux[t] = v[i];
				t++;  
				if (v[i+1]==' ' || v[i+1]=='\0'){
					aux[t]= '\0';
					num[k]= atoi(aux);
					k++;
					t=0;
				}
				
			}
		}					
	}
	
	return num;
	
}



