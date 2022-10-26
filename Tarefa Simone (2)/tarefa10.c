#include <stdio.h>
#include <stdlib.h>

int main()
{
char letra,aux;
printf("digite uma letra: ");
scanf("%c", &letra);
if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
printf("a letra eh vogal");
else
printf("a letra eh consoante");

return 0;

}
