#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string a, b;
	cin >> a >> b;
	string c = b + "#" + a;
	int N = c.size();
	vector<int> z(N, 0);
	int x = 0, y = 0;
	
	for (int i = 1; i < N; i++) {
		if (i <= y) {
			z[i] = min(z[i-x], y-i+1);
		} else z[i] = 0;
		while (i + z[i] < N && c[z[i]] == c[i + z[i]]) z[i]++;
		if (i + z[i] - 1 > y) {
			x = i;
			y = i + z[i] - 1;
		}
	}
	
	int cont = 0;
	for (int i = 0; i < N; i++) {
		if (z[i] == (long long)b.size()) cont++;
	}
	cout << cont << "\n";
	
	return 0;

}
