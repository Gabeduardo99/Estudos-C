#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx, vary;
	printf ("Numero 1: ");
	scanf ("%d", &varx);
	printf ("Numero 2: ") ;
	scanf ("%d", &vary);
		if (vary==varx){
			printf ("Os numeros sao iguais\n");
		}
		else{
			printf ("Os numeros sao diferentes\n");
		}
	return(0);
}
