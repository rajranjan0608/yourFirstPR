#include<stdio.h>

int main()
{
	int a,b,i,n;
        
        printf("Enter two numbers.\n");
	
        scanf("%d %d", &a,&b);
	
             for (i=1; (i<=a) && (i<=b) ;i++)
               {
		  if (a%i==0 && b%i==0)
 		      n=i;
         	}
	printf("Greatest Common Divisor of the two numbers is %d\n", n);
return 0;
}
