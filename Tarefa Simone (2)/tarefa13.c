#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	float peso, idade, aux;
	printf ("Peso: ");
	scanf ("%d", &peso);
	printf ("Idade: ");
	scanf ("%d", &idade);
	 
		if (idade>16 && idade<69 && peso>50){
			printf ("Apta para doacao");
		}
		else  {
			printf ("Nao pode doar");
		}

	return(0);
}
