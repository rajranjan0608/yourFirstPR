#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(max(a, b), c) << endl;
	return 0;
}