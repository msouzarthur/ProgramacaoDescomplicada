#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,*b=2,**c=3,***d=4;
    int e=2,f=3,g=4;
    b=&e;
    c=&b;
    d=&c;
    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Dobro: %d\n",a**b);
    printf("Triplo: %d\n",a***c);
    printf("Quadruplo: %d\n",a****d);
}