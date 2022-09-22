#include<stdio.h>
#include <stdlib.h>
#define MAX 10
int main() {
	int varx, i;
	printf ("Digite um numero: ");
	scanf ("%d", &varx);
	
	i = 0;

	while (i<varx){
		
		printf ("%d ", i+1);
		
		i = i + 1;
		
	}
	
}
