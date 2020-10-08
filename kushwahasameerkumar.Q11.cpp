#include <bits/stdc++.h>
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
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    cout << Add(a,b);
    return 0;
}