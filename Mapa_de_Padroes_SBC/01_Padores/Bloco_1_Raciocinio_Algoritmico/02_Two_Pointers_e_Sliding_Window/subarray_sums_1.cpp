#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, x;
	cin >> t >> x;
	vector<int> nums(t);
	for (int i = 0; i < t; i++) cin >> nums[i];
	int begin = 0, end = 1, aux = nums[0], cont = 0;
	while (end <= t) {
		 if (aux < x) aux += nums[end++];
		 else if (aux > x) aux -= nums[begin++];
		 else {
		 	cont++;
		 	aux += nums[end++];
		 	aux -= nums[begin++];
		 }
	}
	
	cout << cont << "\n";
	
	
	return 0;

}
