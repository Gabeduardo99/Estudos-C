#include <stdio.h>
#include <stdlib.h>

int main(){
	int varx, i, aux;
	
	printf ("Digite um numero: ");
	scanf ("%d", &varx);
	
	i = varx;
	aux = i;
	
	while (i>0){
	
		
		if (i-1 <= 0) {
			break;
		}
		else {
			
		aux = aux * (i-1);

		}
		i = i -1;

	}	
			printf ("%d \n" , aux);
		
	}
