#include <bits/stdc++.h>
using namespace std;

bool comp (pair<long long, long long> a, pair<long long, long long> b) {
	if (a.second != b.second) return a.second < b.second;
	return a.first < b.first;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, cont = 1;
	cin >> n;
	vector<pair<long long, long long>> movies(n);
	for (int i = 0; i < n; i++) cin >> movies[i].first >> movies[i].second;
	sort (movies.begin(), movies.end(), comp);
	int p1 = 0, p2 = 1;
	while (p1 < n && p2 < n) {
		if (movies[p1].second <= movies[p2].first) {
			cont++;
			p1 = p2;
			p2++;
		} else p2++;
	}
	
	cout << cont << "\n";
	
	return 0;

}
