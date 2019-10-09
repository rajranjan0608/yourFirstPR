#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,place;
    int temp=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter your Number %d = ",i);
        scanf("%d",&a);
        if(a>temp)
        {
            temp=a;
            place=i;
        }
    }
    printf("Max is number %d = %d",place,temp);

    return 0;
}
