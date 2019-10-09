#include<stdio.h>
int main()
{
	int n1;
	printf("enter a number to check even or odd .");
	scanf("%d",&n1);
	if(n1%2==0)
	{
		printf("%d is even number.",n1);
	}
	else
	{
		printf("%d is odd number .",n1);
	}
}

