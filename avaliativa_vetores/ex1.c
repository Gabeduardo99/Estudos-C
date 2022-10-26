#include <stdio.h>
#define size 10
int main()
{
    int vet[size], posicao, posicao2, cont;

    for(posicao=0;posicao<size;posicao++)
    {
        printf("digite um valor(%d): ", posicao);
        scanf("%d", &vet[posicao]);
    }
    for(posicao=0;posicao<size;posicao++)
    {
        for(posicao2=posicao+1;posicao2<size;posicao2++)
        {       
            if(vet[posicao]==vet[posicao2])
            {
                printf("\n%d se repete", vet[posicao]);
            }
            else
            {
                cont++;
            }
        }
    }
    if(cont==45)
    {
        printf("\nnenhum valor foi repetido");
    }
    return 0;
}