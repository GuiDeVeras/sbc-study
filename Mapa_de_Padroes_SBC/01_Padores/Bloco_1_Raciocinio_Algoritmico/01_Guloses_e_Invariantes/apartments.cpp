#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, k, cont = 0, pp = 0, pa = 0;
	cin >> n >> m >> k;
	vector<int> persons(n), apartments(m);
	for (int i = 0; i < n; i++) cin >> persons[i];
	for (int i = 0; i < n; i++) cin >> apartments[i];
	sort (persons.begin(), persons.end());
	sort (apartments.begin(), apartments.end());
	while (pp < n && pa < m) {
		if (persons[pp] - k > apartments[pa]) pa++;
		else if (persons[pp] + k < apartments[pa]) pp++;
		else {
			pa++;
			pp++;
			cont++;
		}
	}
	
	cout << cont << "\n";
	
	return 0;

}
