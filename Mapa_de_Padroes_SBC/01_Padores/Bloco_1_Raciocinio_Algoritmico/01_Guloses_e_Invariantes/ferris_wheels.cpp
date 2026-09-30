#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, cont = 0;
	cin >> n >> x;
	vector<int> weight(n);
	for (int i = 0; i < n; i++) cin >> weight[i];
	sort(weight.begin(), weight.end());
	int begin = 0, end = n-1;
	while (begin <= end) {
		if (weight[begin] + weight[end] > x) {
			cont++;
			end--;
		} else {
			cont++;
			end--;
			begin++;
		}
	}
	cout << cont << "\n";
	
	return 0;

}
