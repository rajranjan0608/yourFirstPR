#include <stdio.h>
int main()
{
       int r=0,i,n;
       scanf("%d ",&n);
       for(i=1;i<n;i++)
      {
        if((n%i)==0);
         {
          r=n/i;
          }

         if(r*(r+1)==n)
         {
             printf("num.is pronic");
          }
   }

