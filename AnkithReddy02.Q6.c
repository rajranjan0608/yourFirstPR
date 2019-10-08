#include<stdio.h> 
int main(){
           int n1,n2,i;
           printf("   Give the First number for the Range :   \n");
           scanf("%d",&n1);
           printf("   Give the Final number for the Range :   \n");
           scanf("%d",&n2);
           printf("\n The Even numbers between %d and %d are ",n1,n2); 
           for(i=n1; i<=n2; ++i){
                if(i%2 == 0)
               printf("\n  %d",i);
           }
    return 0; 
    } 

