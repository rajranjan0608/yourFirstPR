#include<stdio.h>
int m;
int main()
{
int  i,a;
for(i=1;i<=10;i++)
{
printf("Enter a no. ");
scanf("%d",&a);
if(i==0)
m=a; 
max(a);  
}
printf("Maximum among the 10 nos. is %d ",m);
return 0;
}
max(int a)
{
if(a>m)
m=a;
}  
