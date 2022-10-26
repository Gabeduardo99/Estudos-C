#include<stdio.h>
#include<stdlib.h>
int main()
{
	int semestre[5][4], mat, i, j, lin1;
	float mediaprova, mediatrab, nf=0, maiornota;
	for(i=0; i< 4; i++)
	{
		printf("Insira o numero de matricula: ");
		scanf("%d", &semestre[i][0]);
		printf("\nInsira a media das provas: ");
		scanf("%d", &semestre[i][1]);
		printf("\nInsira a media dos trabalhos: ");
		scanf("%d", &semestre[i][2]);
		semestre [i][3] = semestre [i][1] + semestre [i][2];
	}
	for (j = 0; j < 5; j++ )
	{
	if(semestre[j][3] > maiornota)
	{
		maiornota = (semestre[j][3]);
		lin1 = j;
	}
	}
		nf /= 5.0;
		printf("\nO aluno com maior nota final: %d\n", semestre[lin1][0]);
return 0;
}

