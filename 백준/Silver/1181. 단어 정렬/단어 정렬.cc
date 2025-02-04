#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

//bool check(pair<int, string> a, pair<int, string> b) {
//
//	if (a.first < b.first) return a.first < b.first;
//	else if (a.first > b.first) return a.first > b.first;
//	else {
//		int i = 0;
//		while (true) {
//			if(a.second[i] < b.second[i]) return a.second < b.second;
//			else if (a.second[i] > b.second[i]) return a.second > b.second;
//			i++;
//		}
//	}
//}

int main(void) {
	int input, range = 0;
	vector<pair<int, string>> arr;
	string x;
	//vector<string> arr;
	cin >> input;

	for (int i = 0; i < input; i++) {
		cin >> x;
		bool exist = any_of(arr.begin(), arr.end(), [&](const pair<int, string>& p) {
			return p.second == x;
			});
		if (exist) continue;
		arr.push_back({ x.size(), x});
		range++;
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < range; i++) {
		cout << arr[i].second << '\n';
	}
	return 0;
}