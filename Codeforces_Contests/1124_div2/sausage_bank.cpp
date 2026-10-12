#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long a, b;
		cin >> a >> b;
		if (a == b) cout << a * 2 << "\n";
		else {
			long long p = 2;
			for (long long j = 1; j <= a - b ; j++) p *= 2;
			cout << (2 * (b-1)) + p << "\n";
		}
	}
	
	return 0;

}
