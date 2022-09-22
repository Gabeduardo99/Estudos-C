#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, num;

    do{
        printf("Digite um valor: ");
        scanf("%d", &num);
    }while(num < 0);

    for(i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", num, i, num * i);
}
