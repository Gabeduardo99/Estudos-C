#include<stdio.h>
#include <stdlib.h>

int busca_sequencial(int vetor[6],int varx, int i)
{
	for(int i=0;i<6;i++){
		if ()vetor[i]==varx){
			return i;
		}
	}
	return -1;
}

int main() {
	int vetor[6], i, varx, resultado;
  printf("Digite o primeiro valor:");
  scanf("%d", &vetor[0]);
  printf("Digite o segundo valor:");
  scanf("%d", &vetor[1]);
  printf("Digite o terceiro valor:");
  scanf("%d", &vetor[2]);
  printf("Digite o quarto valor:");
  scanf("%d", &vetor[3]);
  printf("Digite o quinto valor:");
  scanf("%d", &vetor[4]);
  printf("Digite o sexto valor:");
  scanf("%d", &vetor[5]);
  
  printf("Digite o valor que deseja encontrar: ");
  scanf("%d", &varx);

resultado = busca_sequencial(vetor[6],varx, i);

printf ("Resultado = %d\"", i);

return 0;
  }
