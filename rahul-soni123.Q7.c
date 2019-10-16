#include<stdio.h>
int main()
{
    int a,b,i,min,flag;
	printf("Enter the two numbers:");
	scanf("%d %d",&a,&b);
	if((a==0)&&(b==0))
		printf("The greatest common divisor is not defined");
        else if(a==0)
		flag=b;
	
	else if(b==0)
		flag=a;
        else{
         	if(a<=b)
                  {
	           min=a;
	          }

	        else 
	          {
		   min=b;
	          }

	        for(i=1;i<=min;i++)
	           {
		    if(((a%i)==0)&&((b%i)==0))
	               flag=i;
	           }

             }
      if((a!=0)||(b!=0))	
     printf("The greatest common divisor of the two numbers is:%d",flag);
    
return 0;
}







