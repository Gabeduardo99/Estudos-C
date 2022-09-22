#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx, aux;
	printf ("Digite um numero: ");
	scanf ("%d", &varx);


		if ((varx %4==0 && varx %100 != 0) || varx %400 == 0){
			printf ("O ano eh bissexto");
		}
		else  {
			printf ("O ano nao eh bissexto");
		}

	return(0);
}
