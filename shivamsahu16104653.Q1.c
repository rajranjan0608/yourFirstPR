#include<stdio.h>
int main()
{int a[3],i,max;
printf("Entre the number");
	for(i=0;i<3;i++)
	{scanf("%d",&a[i]);}
	max=a[0];
	for(i=0;i<3;i++)
	 if(max<a[i])
	    max=a[i];
	printf("%d",max);
   return 0;}
