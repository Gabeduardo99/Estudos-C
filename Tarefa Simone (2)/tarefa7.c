#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx, aux;
	printf ("Digite um numero: ");
	scanf ("%d", &varx);
	aux = varx % 3;
	
		if (aux==0){
			printf ("O numero eh divisivel por 3");
		}
		else {
			printf ("O numero nao eh divisivel por 3");
		}

	return(0);
}
