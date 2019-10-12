#include<stdio.h>
int main()
{
int i,j=0,n;
printf("Enter a number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
j++;
}
if(j>0)
printf("Entered no. is not prime");
else
printf("Entered no. is prime");
return 0;
}
