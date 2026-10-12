#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;	
	vector<int> nums(t);
	set<int> movies;
	for (int i = 0; i < t; i++) cin >> nums[i];
	movies.insert(nums[0]);
	int begin = 0, aux = 1, cont = 1, contaux = 1;
	for (int i = 1; i < t; i++) {
		auto it = movies.find(nums[i]);
		if (it == movies.end()) {
			aux++;
			contaux++;
			movies.insert(nums[i]);
		} else {
			if (contaux > cont) cont = contaux;
			while (nums[begin] != nums[i]) {
				movies.erase(nums[begin]);
				begin++;
				contaux--;
			}
			begin++;
			aux++;
		}
	}
	if (contaux > cont) cont = contaux;
	
	cout << cont << "\n";

	
	return 0;

}
