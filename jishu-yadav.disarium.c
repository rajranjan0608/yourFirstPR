#include<stdio.h>
#include<Math.h>
int main()
{    
     int num;
     scanf("%d ",&num);
     int s=0,k=0,no=num,i=0; 
       while(no>0)
       {   
        k++;
        no=no/10;
        }
       int n=num;
       while(n>0)
       {
         i=n%10;
         s=(int)(pow(i,k)+s);
         k--;
           n=n/10;
        }
       if(s==num)
        printf("\nno. is disarium");
        else
        printf("\n no. is not disarium");

}


