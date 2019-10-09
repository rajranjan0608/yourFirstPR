#include<stdio.h>
int prime(int);
int main()
{
	int num1, num2, i;
	printf("Enter two numbers : ");
	scanf("%d %d", &num1, &num2);
	printf("The prime numbers between %d and %d are : ", num1, num2);
	for( i = num1; i <= num2; i++)
	{
		if(prime(i))
			printf("%d ", i);
	}
	return 0;
}
int prime (int num)
{
	int i;
	for(i=2; i <= num/2; i++)
	{
		if(num % i == 0)
			return 0;
	}
	return 1;
}


