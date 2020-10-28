#include<stdio.h>
#include<stdlib.h>
void calc_esfera(float R, float *area, float *volume);
void main()
{
    float raio,area,volume;
    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);
    calc_esfera(raio,&area,&volume);
    printf("Area: %f\n",area);
    printf("Volume: %f\n",volume);
}
void calc_esfera(float R, float *area, float *volume)
{
    *area=4*3.14*R*R;
    *volume=(4/3)*(3.14*R*R*R);
}
