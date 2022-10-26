#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int varx, vary;
	printf ("Digite um numero: ");
	scanf ("%d", &varx);
		printf ("Digite um numero: ");
	scanf ("%d", &vary);
	 
		if (varx %2==0){
			printf ("X eh divisivel por 2\n");
		}
		else  {
			printf ("X nao eh divisivel por 2\n");
		}
		
		if (vary%3==0){
		printf ("Y eh divisivel por 3");}
		else{
			printf ("Y nao eh divisivel por 3");
		}

	return(0);
}
