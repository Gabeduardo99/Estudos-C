#include <stdio.h>
#include <stdlib.h>

int main(){
	int primo, cont,num;
	
	printf ("Digite um numero: ");
	scanf ("%d", &num);
	
	cont = 1;
	primo = 0;
	
	while (cont<num) {
		if (num %cont == 0){
			primo = 0;
		}else {
			primo = 1;
		}
	cont = cont +1;
	}
		
	if (primo==1 || num==2){
		printf ("O numero eh primo");
	}else {
		printf ("O numero nao eh primo");
	}
	}
