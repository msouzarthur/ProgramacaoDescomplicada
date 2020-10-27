#include<stdio.h>
#include<stdlib.h>
void main()
{
    int lista[5];
    int i=0,*p=lista;
    for(i=0;i<5;i++)
    {
        printf("Digite o valor %d/5: ",i+1);
        scanf("%d",&lista[i]);
    }
    for(i=0;i<5;i++) if((p[i]%2)==0) printf("%d ",lista[i]);
}
