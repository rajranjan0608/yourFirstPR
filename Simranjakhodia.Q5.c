#include<stdio.h>
int main()
{
int i,j,a,b,k=0,n=0;
printf("Enter 2 nos.");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{k=0;
for(j=2;j<i;j++)
{
if(i%j==0)
k++;
}
if(k==0)
{printf("%d ",i);n++;
}
}
if(n==0)
printf("no prime number is there in the given range");
return 0;
}

