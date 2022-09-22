#include<stdio.h>
#include <stdlib.h>
#define MAX 10
int main() {
	int varx, i;
	printf ("Digite um numero: ");
	scanf ("%d", &varx);
	
	i = 1;

	while (i<=varx * 2){
		
		printf ("%d ", i , i+1);
		
		i = i + 2;
		
	}
	
}
