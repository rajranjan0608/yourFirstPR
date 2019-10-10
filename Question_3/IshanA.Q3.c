#include<stdio.h>
void main(){
	int no,p,flag=1;
	printf("Enter the number to be tested\n");
	scanf("%d",&no);
	if(no%2==0)p=no/2;else p=(no+1)/2;
	for(int i=2;i<=p;i++)if(no%i==0){flag=0;break;}
	if(flag==0)printf("%d is a not a prime number\n",no);
	else printf("%d is a prime number\n",no);
}
