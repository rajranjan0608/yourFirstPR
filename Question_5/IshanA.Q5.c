#include<stdio.h>
void main(){
	int max,min,flag=1;
	printf("Enter the min and the max of the range \n");
	scanf("%d %d",&min,&max);
	for(int i=min;i<=max;i++){
		for(int i1=2;i1<i;i1++)if(i%i1==0){flag=0;break;}
		if(flag==0)flag=1;else printf(" %d",i); 
		
	}printf("\n");
}
