#include<stdio.h>
int main()
{
    int z,a,b,c;
    c=z+1;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    z=(a<b)?a:b;
    if((z%2)==0){
        while((z<=a)||(z<=b))
        {
            printf("%d\n",z);
            z=z+2;
        }}
        else
        {
        while((z<a)||(z<b))
        {
            printf("%d\n",++z);
            z=z+1;
        }
        }
        return 0;

}
