#include <stdio.h>
{
  int main()
  {
    int a[]={5,3,4,1,2};  
    int i;
    for(i=0;i<=4;i++)
    { 
        int t=0;
       for(int j=i+1;j<=4;j++)   
        {
         if(a[j]>a[i])   
            {
              t=a[i];
              a[i]=a[j];
              a[j]=t;
            }
         }
     }for(int i=0;i<=4;i++)
      {
      printf("%d ",a[i]);   
      }
   }
}
