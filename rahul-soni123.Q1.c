#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("Enter the three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if((a>=b)&&(a>=c))
		max=a;
	else if((b>=c)&&(b>=a))
		max=b;
	else
		max=c;
	printf("\nThe maximum of the three numbers is:%d\n",max);
	return 0;
}

