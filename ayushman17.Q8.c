#include <stdio.h>
int main()
{
    int a,b;
    for(a=0;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            if(a==0 || a==9)
            printf(" * ");
            else
            {
                if(b==0 || b==9)
                printf(" * ");
                else
                printf("   ");
            }
        }
        printf("\n");
    }
    return 5;
}

