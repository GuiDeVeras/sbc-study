#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, x;
	cin >> t >> x;
	vector<pair<int, int>> nums(t);
	for (int i = 0; i < t; i++) {
		cin >> nums[i].first;
		nums[i].second = i + 1;
	}
	sort (nums.begin(), nums.end());
	int begin = 0, end = t - 1;
	while (begin < end) {
		if (nums[begin].first + nums[end].first > x) end--;
		else if (nums[begin].first + nums[end].first < x) begin++;
		else {
			if (nums[begin].second < nums[end].second) cout << nums[begin].second << " " << nums[end].second << "\n";
			else cout << nums[end].second << " " << nums[begin].second << "\n";
			break;
		}
	}
	if (begin >= end) cout << "IMPOSSIBLE\n";
	
	return 0;

}
