#include <stdio.h>
int main ()
{ int i,flag,j,a,b;
printf("Enter the range of numbers");
scanf("%d %d",&a,&b);
printf("The prime numbers between %d and %d are",a,b);
for(i=a;i<=b;i++)
{flag=1;
for(j=2;j<=i/2;j++)
{if(i%j==0)
{flag=0;
break;
}
}

if(flag==1)
printf("%d",i);
}

return 0;
}
