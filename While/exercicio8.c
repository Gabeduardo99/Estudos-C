#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx, vary;
	printf ("Digite um numero X: ");
	scanf ("%d", &varx);
	
	printf ("Digite um numero Y: ");
	scanf ("%d", &vary);
	
	if (vary>varx)
		printf ("X deve ser maior que Y");
	
	while (vary<=varx){
		
		printf ("%d " , varx);
		
		varx = varx - 1;
		
	}
	
}
