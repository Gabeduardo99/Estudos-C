#include<stdio.h>
#include <stdlib.h>
#define MAX 10
int main() {
	int varx, i, soma;
	printf ("Digite um numero: ");
	scanf ("%d", &varx);
	
	i = 0;
	soma = 0;

	while (i<=varx){
		
		soma = soma + i;
		i = i + 2;
		
	}
	
			printf ("%d" , soma);

}
