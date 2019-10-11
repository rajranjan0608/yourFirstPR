#include<stdio.h>
void main(){
	int max,no_1,no_2,no_3;
	printf("Enter 3 numbers to find the maximum among them\n");
	scanf("%d %d %d",&no_1,&no_2,&no_3);
	if(no_1>no_2){ if(no_1>no_3)max=no_1;else max=no_3; }else{if(no_2>no_3)max=no_2; else max=no_3;};	
	printf("Max b/w %d, %d, and %d = %d",no_1,no_2,no_3,max);
}
