#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

vector<pair<int, int>> arr;

int main(void) {
	int input, x, y;
	cin >> input;

	for (int i = 0; i < input; i++) {
		cin >> y >> x;
		arr.push_back({ x, y });
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < input; i++) {
		cout << arr[i].second << ' ' << arr[i].first << '\n';
	}
	return 0;
}