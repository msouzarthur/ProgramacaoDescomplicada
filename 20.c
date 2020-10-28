#include<stdio.h>
#include<stdlib.h>
int negativos(float *vet, int N);
void main()
{
    int i,tamanho=10;
    float vet[tamanho];
    for(i=0;i<tamanho;i++)
    {
        printf("Digite o numero %d/%d: ",i+1,tamanho);
        scanf("%f",&vet[i]);
    }
    i=negativos(vet,tamanho);
    printf("Quantidade de negativos: %d",i);
}
int negativos(float *vet, int N)
{
    int aux=0,i=0;
    for(i=0;i<N;i++) if(vet[i]<0) aux++;
    return aux;
}