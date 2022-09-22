#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx, vary, aux;
	printf ("Digite um numero X: ");
	scanf ("%d", &varx);
	
	printf ("Digite um numero Y: ");
	scanf ("%d", &vary);
	
	if (vary<varx)
		printf ("Y deve ser maior que X");
	
	while (vary>=varx){
		
		printf ("%d" , varx);
		
		varx = varx + 1;
		
	}
	
}
