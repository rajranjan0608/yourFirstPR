#include<stdio.h>
int main(){
	int i,a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("The odd numbers are:");
	for (i=a+1;i<b;i++){
		if ((i%2)!=0)
			printf("%d ",i);
	}
return 0;
}
