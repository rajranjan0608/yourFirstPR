#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	int l, r, i;
	cin >> l >> r;
	for(i = l + 1; i < r; i++) {
		if(i & 1)
			cout << i << " ";
	}
	cout << endl;
	return 0;
}