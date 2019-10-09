#include<stdio.h>
int main()
{
	int n,flag=0,i;
	printf("enter a number to check prime or not : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d is not a prime",n);
			flag=1;
			break;
		}
		
	}
	if(flag==0)
		{
			printf("%d is prime",n);
			
		}
		return 0;
}
