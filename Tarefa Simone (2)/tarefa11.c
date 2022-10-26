#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx,aux;
	printf ("Digite um numero: ");
	scanf ("%d", &varx);
	 
	 aux = varx /12;
	 
		if (varx<12){
			printf ("Digite um numero acima de 12");
		}
		else {
			printf ("%d" ,aux);
		}

	return(0);
}
