#include <stdio.h>

int recursivo(int n){
    if (n==1)
        return 1;
    return n+recursivo(n-1);
}

int main()
{
    int varx;
    printf ("Digite um numero: ");
    scanf ("%d", &varx);
    printf ("Resultado eh: 1/%d", recursivo (varx));
    return 0;
}

