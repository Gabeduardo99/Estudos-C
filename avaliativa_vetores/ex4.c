#include <stdio.h>

int main()
{
    int matriz[4][4], linha, coluna, cont=0;
    for(linha=0;linha<4;linha++)
    {
        for(coluna=0;coluna<4;coluna++)
        {
            printf("linha %d,coluna %d = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    for(linha=0;linha<4;linha++)
    {
        for(coluna=0;coluna<4;coluna++)
        {
            printf("%d ", matriz[linha][coluna]); 
            if(matriz[linha][coluna]>10)
            {
                cont++;
            }
        }  
        printf("\n");      
    }           
    printf("\nExistem %d numeros maiores que 10", cont);
   
    return 0;
}