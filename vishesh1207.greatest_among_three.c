#include<stdio.h>
int main(){int num,max,i;
	printf("\nenter 3 numbers to find number greatest among them :\n");
	for(i=1;i<=3;i++)
	{
		scanf("%d",&num);
		if(i==1)
			max=num;
		if(max<num)
			max=num;
	}printf("\ngreatest number : %d",max);
	return 0;}
