   #include<stdio.h>
  int main()
  {int n,i,flage=0;
  printf("Enter the number : ");
  scanf("%d",&n);

        for(i=2;i<n;i++)
       {  if(n%i!=0)
        flage=1;
        else
         {printf("Number is not Prime ");flage=0;
        break;}}
        if(flage==1||n==2)
         printf("Number is Prime ");
        if(n==1)
         printf("Number is not prime ");
  return 0;}
