// Question no. 11:Adding Two numbers without '+' operator
#include <iostream> 
using namespace std; 

int Add(int x, int y) 
{ 
	while (y != 0) 
	{ 
		
		int carry = x & y; 
		x = x ^ y; 

		y = carry << 1; 
	} 
	return x; 
} 
int main() 
{ 
	int m,n;
	cout<<"Enter two numbers:";
	cin>>m>>n;
	cout <<"The sum of two numbers "<<m<<" and "<<n<<" is "<<Add(m,n); 
	return 0; 
} 
