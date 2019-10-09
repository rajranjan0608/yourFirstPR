#include <stdio.h> 
#include <stdlib.h> 
 
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)
int main() {
	
    int a,b,c;
    int big;
    scanf("%d %d %d",&a,&b,&c);
    //Check b and c first
    big = (b>c)?b:c;
    //compare a and big
    big = (a>big)?a:big;
    printf("%d\n",big);
	return 0;
}