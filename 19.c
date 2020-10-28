#include<stdio.h>
#include<stdlib.h>
const int tamanho=10;
void main()
{
    int mat[tamanho];
    int i,N,maior,qnt;
    for(i=0;i<tamanho;i++)
    {
        printf("Digite o numero %d/%d: ",i+1,tamanho);
        scanf("%d",&mat[i]);
    }
    N=tamanho;
    maior_quantidade(mat,N,&maior,&qnt);
    printf("Maior elemento: %d\nVezes: %d",maior,qnt);
}
void maior_quantidade(int *mat, int N, int *maior, int *qnt)
{
    int i;
    *qnt=0;
    *maior=0;
    for(i=0;i<N;i++)
        if(*maior<mat[i]) *maior=mat[i];
    for(i=0;i<N;i++)
        if(*maior==mat[i]) *qnt=*qnt+1;
}