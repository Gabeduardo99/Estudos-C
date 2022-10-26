#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx, vary,varz;
	printf ("Numero 1: ");
	scanf ("%d", &varx);
	printf ("Numero 2: ") ;
	scanf ("%d", &vary);
	printf ("Numero 3: ") ;
	scanf ("%d", &varz);
		if (vary>varx && vary>varz){
			printf ("%d" ,vary);
		}
		else if	(varx>vary && varx>varz){
			printf ("%d" ,varx);
		}
		else {
			printf ("%d" ,varz);
		}
	return(0);
}
