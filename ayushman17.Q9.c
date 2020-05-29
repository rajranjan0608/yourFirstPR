#include <stdio.h>
int main()
{
    int a,b;
    printf("ENTER THE FIRST NUMBER(IT MUST BE SMALLER THAN SECOND NUMBER)\n");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER\n");
    scanf("%d",&b);
    for (int i = a; i < b; i++)
    {
        if (i==b||i==a)
        continue;
        if(!(i%2==0))
        printf(" %d ",i);
    }
    return 5;
}

