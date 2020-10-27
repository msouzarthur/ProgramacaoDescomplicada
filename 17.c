#include<stdlib.h>
void frac(float num, int* inteiro, float* frac);
void main()
{
    float numero;
    int i;
    float f;
    printf("Digite o numero: ");
    scanf("%f",&numero);
    frac(numero,&i,&f);
    printf("Inteiro: %d\n",i);
    printf("Flutuante: %.2f\n",f);
}
void frac(float num, int* inteiro, float* frac)
{
	*inteiro = (int)num;
	*frac = num - *inteiro;
}
