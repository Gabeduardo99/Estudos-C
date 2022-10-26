#include <stdio.h>
#define size 6
int main()
{
    int a[size], soma, posicao;
    for(posicao=0;posicao<size;posicao++)
    {
        printf("digite o valor da posicao %d: ", posicao);
        scanf("%d", &a[posicao]);
    }
    for(posicao=0;posicao<size;posicao++)
    {
        a[4]=100;
        printf("%d\n", a[posicao]);
    }
    soma=a[0]+a[1]+a[5];
    printf("A soma dos vetores a[0], a[1] e a[5] eh: %d\n", soma);
    return 0;
}

   