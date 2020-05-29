// Question no 3 - To check whether a given number is prime or not.
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	if(n<=1)
	{
		cout<<n<<" is not Prime";
		return 0;
	}
	bool ans = true;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			ans = false;
			break;
		}
	}
	if(ans)
	cout<<n<<" is Prime";
	else
	cout<<n<<" is not Prime";
	
}