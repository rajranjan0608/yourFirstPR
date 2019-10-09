#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter lower limit : ");
	scanf("%d",&a);
	printf("Enter upper limit : ");
	scanf("%d",&b);
	printf("Even numbers between %d and %d are :",a,b);
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
			printf(" %d",i);
	}
	printf("\n");
	return 0;
}
