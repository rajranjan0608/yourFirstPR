#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter your Number 1  = ");
    scanf("%d",&a);
    printf("Enter your Number 2 = ");
    scanf("%d",&b);
    printf("Enter your Number 3 =");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("Maximum is number 1= %d \n",a);
    }
     else if (b>a && b>c)
     {
       printf("Maximum is number 2= %d \n",b);
     }
    else
    {
     printf("Maximum is number 3= %d \n",c);
    }
    return 0;
}
