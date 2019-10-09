#include <stdio.h>
#include <stdlib.h>

int main()
{   int no1,no2,no3,max=0;

    printf("Enter the first number ");
    scanf("%d",&no1);
    printf("Enter the second number ");
    scanf("%d",&no2);
    printf("Enter the third number ");
    scanf("%d",&no3);

    if(no1>no2)
    {
        if(no1>no3)
            max=no1;
    }
    else if(no1<no2)
    {
        if(no2>no3)
            max=no2;
        else
            max=no3;
    }

    printf("Max number out of three numbers: %d ",max);
    return 0;
}
