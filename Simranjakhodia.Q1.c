#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter three numbers to check the greatest among the numbers");
scanf("%d %d %d",&a,&b,&c);
d=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("Greatest of the three entered numbers is %d",d);
return 0;
}
