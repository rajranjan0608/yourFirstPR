#include<stdio.h>
  int main(){

	  int a,b,carry;
	  printf("Enter two numbers\n");
	  scanf("%d %d", &a,&b);

	  do { carry = (a & b);
	       b = a ^ b;
	       a = carry << 1;
	     } while(a != 0);
	  
	  printf("%d\n", b);
   return 0;
}
