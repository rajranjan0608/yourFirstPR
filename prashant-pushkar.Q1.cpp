// Question No 1-To Find Greatest of three numbers
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[3];
	for(int i=0;i<3;i++)
	cin>>arr[i];

	int maxm = INT_MIN;

	for(int i=0;i<3;i++)
	maxm = max(maxm,arr[i]);

	cout<<"The maximum of three numbers-"<<arr[0]<<" "<<arr[1]<<" and "<<arr[2]<<" is "<<maxm;
}