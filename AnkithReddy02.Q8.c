#include<stdio.h> 
int main()
{
	int i,j,n;
	printf("enter the number of row/columns of size of square \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||j==n||i==n)
			printf(" *");
			else
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}

