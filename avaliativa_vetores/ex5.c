#include <stdio.h>
int main()
{
    int matriz[3][3], transposta[3][3], linha, coluna;
    for(linha=0;linha<3;linha++)
    {
        for(coluna=0;coluna<3;coluna++)
        {
            printf("linha %d,coluna %d = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    printf("\nMatriz:\n");
    for(linha=0;linha<3;linha++)
    {
        for(coluna=0;coluna<3;coluna++)
        {
            printf("%d ", matriz[linha][coluna]); 
        }
        printf("\n");
    }  
    for(linha=0;linha<3;linha++)
    {
        for(coluna=0;coluna<3;coluna++)
        {
            transposta[coluna][linha]=matriz[linha][coluna];      
        } 
    }
    printf("\nMatriz transposta:\n");
    for(linha=0;linha<3;linha++)
    {
        for(coluna=0;coluna<3;coluna++)
        {
            printf("%d ", transposta[linha][coluna]); 
        }
        printf("\n");
    }
    return 0;   
}