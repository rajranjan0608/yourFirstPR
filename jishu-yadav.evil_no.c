#include<stdio.h>
int main()
{ 
     int s=0,n; 
     scanf("%d ",&n);
     while(n>0)
     {
        int r=n%2;   
         s=r+s;  
         n=n/2;
      }
      if(s%2==0)
       printf("no. is evil");
       else 
       printf("no is not evil");

}


