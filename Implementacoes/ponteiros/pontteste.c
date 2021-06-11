#include <stdio.h>
#include<stdlib.h>


int main(){
	
	
	int * p, ** l;
	int x = 10, y=50;
    p = &x;
	l = &p;
   *l = &y;
  
	printf("&L: %p E &P: %p e &x: %p\n\n", &l,&p, &x);  // ENDEREÇO DE L, P e X
    printf("L: %p P: %p  *l: %p \n\n", l, p, *l );  //ENDEREÇO DE QUEM L APONTA(p)/ ENDEREÇO QUEM P APONTA(y)
    //ENDEREÇO DE QUEM P APONTA
    printf("*P: %d ", *p);  // CONTÉUDO DE P
    printf("**l %d\n", **l); // CONTÉUDO DO ENDEREÇO DO ENDEREÇO


	return 0;

}

