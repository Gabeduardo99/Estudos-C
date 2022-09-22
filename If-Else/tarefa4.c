#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx;
	printf ("Digite um numero: ");
	scanf ("%d", &varx);
		if (varx>0){
			printf ("O numero eh positivo");
		}
		else if	(varx>=0){
			printf ("O numero eh 0");
		}
		else {
			printf ("O numero eh negativo");
		}
	return(0);
}
