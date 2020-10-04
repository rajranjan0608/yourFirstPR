#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "5 random numbers: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << (rand() % 100) + 1 << "\t";
    }
    cout << "/n";
    return 0;
}