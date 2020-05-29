#include<stdio.h>

void arrange(int,char,char,char);

int main(void){
    int n;
    char source='A',destination='C',helper='B';
  
  //Please enter the no. of disc you want on A tower
    Scanf("%d",&n);
  
  //Recursive call to function starts from here
    arrange(n,source,destination,helper);
  
  return 0;
  }
  
  //function for arranging the discks of tower of hanoi
 void arrange(int n,char source,char destination,char helper){
    if(n==1){
          printf("Move disk %d from %c to %c",n,source,destination);
    }
    arrange(n-1,source,helper,destination);
          printf("Move disk %d from %c to %c",n,source,destination);
    arrange(n-1,helper,destination,source);
    }
    
