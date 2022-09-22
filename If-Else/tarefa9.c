#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx, vary, varz, aux, modulo;
	printf ("X: ");
	scanf ("%d", &varx);
		printf ("Y: ");
	scanf ("%d", &vary);
	printf ("Z: ");
	scanf ("%d", &varz);
	 
	 aux = varx + vary + varz;
	 modulo = aux %3;
	 
		if (modulo==0){
			printf ("O numero eh divisivel por 3\n");
		}
		else  {
			printf ("O numero nao eh divisivel por 3\n");
		}

	return(0);
}
