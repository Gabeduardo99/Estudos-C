#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	float varx, vary, aux;
	printf ("Custo: ");
	scanf ("%f", &varx);
	printf ("faturamento: ");
	scanf ("%f", &vary);
	
	aux = vary - varx;
	 
		if (aux>0){
			printf ("Obteve lucro");
		}
		else  {
			printf ("Obteve prejuizo");
		}

	return(0);
}
