#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> tickets(n), price(m);
	for (int i = 0; i < n; i++) cin >> tickets[i];
	for (int i = 0; i < m; i++) cin >> price[i];
	sort (tickets.begin(), tickets.end());
	
	for (int i = 0; i < m; i++) {
		int begin = 0, end = n - 1 - i, middle = floor((begin + end) / 2);
		int a = 0;
		while (begin <= end && a == 0) {

			if ((tickets[middle] == price[i]) || (tickets[middle] < price[i] && (middle + 1 < n && tickets[middle+1] > price[i]) || (middle +1 < n))) {
				a = 1;
				break;
			}
			if (tickets[middle] > price[i]) end = middle - 1;
			else if (tickets[middle] < price[i]) begin = middle + 1;
			middle = floor((begin + end) / 2);
		}
		if (a) {
			cout << tickets[middle] << "\n";
			tickets.erase(tickets.begin()+middle);
		}
		else cout << "-1\n";
		
	}
	
	return 0;

}
