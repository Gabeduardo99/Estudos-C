#include <stdio.h>
#define size 10
int main()
{
    int i=0,matricula,matriculaalto,matriculabaixo;
    float altura, maisalto, maisbaixo;
    for(i;i<size;i++)
    {
        printf("\nCodigo de matricula: ");
        scanf("%d",&matricula);
        printf("Altura em metros: ");
        scanf("%f",&altura);
        if(i==0)
        {
            matriculaalto=matriculabaixo=matricula;
            maisalto=maisbaixo=altura;
        }
        else if(altura>maisalto)
        {
            maisalto=altura;
            matriculaalto=matricula;
        }
        else if(altura<maisbaixo)
        {
            maisbaixo=altura;
            matriculabaixo=matricula;
        }
    }
    printf("\nO aluno: %d eh o mais alto, com : %0.2f de altura",matriculaalto,maisalto);
    printf("\nO aluno: %d eh o mais baixo, com: %0.2f de altura",matriculabaixo,maisbaixo);
    return 0;
}
