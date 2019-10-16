#include<stdio.h>
int main()
{
int a,b,c,e,f;
printf("enter numbers");
scanf("%d %d %d",&a,&b,&c);
e=a>b?a:b;
f=e>c?e:c;
printf("%d",f);
return 0;

}

