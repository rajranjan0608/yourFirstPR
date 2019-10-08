#include<stdio.h>
int prime(int);
void main()
{
	int a,b,i;
	printf("Enter lower limit : ");
	scanf("%d",&a);
	printf("Enter upper limit : ");
	scanf("%d",&b);
	printf("Prime numbers between %d and %d are : ",a,b);
	for(i=a;i<=b;i++)
	{
		if(prime(i))
			printf("%d ",i);
	}
	printf("\n");
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
