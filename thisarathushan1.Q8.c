#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==0 || i==9)
            {
                printf("*");
            }
            else
            {
                    if(j==0 || j==9)
                    {printf("*");}
                    else
                    {printf(" ");}
            }
        }printf("\n");
    }
    return 0;
}
