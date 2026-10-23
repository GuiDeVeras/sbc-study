#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string a;
	cin >> a;
	int n = a.size(), x = 0, y = 0;
	vector<int> z(n, 0);
	
	for (int i = 1; i < n; i++) {
		if (i <= y) z[i] = min(z[i-x], y-i+1);
		else z[i] = 0;
		while (i + z[i] < n && a[z[i]] == a[i + z[i]]) z[i]++;
		if (i + z[i] - 1 > y) {
			x = i;
			y = i + z[i] - 1;
		}
	}
	for (int i = n-1; i >= 1; i--) {
		if (i + z[i] == n) cout << z[i] << " ";
	}
	cout << "\n";
	
	return 0;

}
