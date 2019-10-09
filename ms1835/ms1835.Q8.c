#include<stdio.h>
void main()
{
	int i,j,length;
	printf("Enter length of square : ");
	scanf("%d",&length);
	for(i=1;i<=length;i++)
	{
		for(j=1;j<=length;j++)
		{
			if((i==1)||(i==length))
				printf(" *");
			else
			{
				if((j==1)||(j==length))
					printf(" *");
				else
					printf("  ");
			}
		}
		printf("\n");
	}
}
