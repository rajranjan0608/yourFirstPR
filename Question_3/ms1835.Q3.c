#include<stdio.h>
int prime(int);
void main()
{
	int i;
	printf("Enter a number : ");
	scanf("%d",&i);
	if(prime(i))
		printf("%d is a prime number\n",i);
	else
		printf("%d is not a prime number\n",i);
}
int prime(int num)
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}
