#include<stdio.h>
int main()
{
int  i,m=0;
int a[10];
for(i=0;i<10;i++)
{
printf("Enter a no. ");
scanf("%d",&a[i]);
}
m=a[0];
for(i=0;i<10;i++)
{
if(a[i]>m)
m=a[i];
}
printf("Maximum among the 10 nos. is %d ",m);
return 0;
}
