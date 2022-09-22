#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx, aux;
	printf ("Digite um numero: ");
	scanf ("%d", &varx);
	aux = varx % 2;
	
		if (aux==0){
			printf ("O numero eh par");
		}
		else {
			printf ("O numero eh impar");
		}

	return(0);
}
