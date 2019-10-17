#include<stdio.h>
int main()
{int n;
printf("Enter the number : ");
scanf("%d",&n);

   if(n%2==0)
      printf("Number %d is EVEN ",n);
   else
      printf("Number %d is ODD ",n);
   return 0;
}
