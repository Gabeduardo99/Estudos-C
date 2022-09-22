#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	char *nome[50], endereco[50],telefone[50];
	printf ("nome: ") ;
	gets (nome);
	printf ("endereco: ") ;
	gets (endereco);
	printf ("telefone: ");
	gets (telefone);
	printf (("%s"), &nome);
	printf (", ");
	printf (("%s"), &endereco);
	printf (", ");
	printf (("%s"), &telefone);
}
