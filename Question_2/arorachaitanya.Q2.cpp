#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout << "enter a number to check even or odd .";
    cin >> n1;
    if (n1 % 2 == 0)
        cout << n1 << " is even number.";
    else
        cout << n1 << " is odd number.";
}
