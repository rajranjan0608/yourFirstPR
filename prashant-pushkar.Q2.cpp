//Question no. 2 - check wether a given number is even or odd
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number:";
	cin>>a;
	
	if(a%2==0)cout<<a<<" is even";
	else 
	cout<<a<<" is odd";
}