#include <stdio.h>
int main() 
{
  int temp=0,number,size,array[1000];
   printf("enter the numbers how many want add\n");
      scanf("%d",&size);
   printf("Enter the numbers to add\n");
   for(int i=0 ; i<size ; i++)
   {
      scanf("%d",&array[i]);
      temp = temp+array[i];
   }
  
    for(int i=0 ; i<size ; i++)
   {
      printf("%d + ",array[i]);
    
   }
  printf(" = %d ",temp);
}
