#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	int temp, i, ans = INT_MIN;
	for(i = 0; i < 10; i++) {
		cin >> temp;
		ans = max(temp, ans);
	}
	cout << ans << endl;
	return 0;
}