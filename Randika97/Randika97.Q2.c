#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   printf("Enter any Number: ");
   scanf("%d", &x);


    switch(x%2==0)
    {
        case 1: printf("Even");break;

        default: printf("Odd");
    }
    return 0;
}
