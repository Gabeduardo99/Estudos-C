#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	char *varx[50], *vary[50], *aux[50];
	printf ("X: ");
	scanf ("%s", &varx);
	printf ("Y: ") ;
	scanf ("%s", &vary);
	*aux = *varx;
	*varx = *vary;
	*vary = *aux;
	printf(("Novo Valor X: %s\nNovo Valor Y: %s"), &varx,&vary);

}
