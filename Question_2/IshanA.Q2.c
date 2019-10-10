#include<stdio.h>
void main(){
	int no;
	printf("Enter the number to be tested\n");
	scanf("%d",&no);
	if(no%2==0)printf("%d is even\n",no);
	else printf("%d is odd\n",no);
}
