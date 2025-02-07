#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

void dfs(vector<int> res, int n, int in, int s) {
	if (n == s) {
		for (int i = 0; i < s; i++) {
			cout << res[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < in; i++) {
		res.push_back(i + 1);
		dfs(res, n + 1, in, s);
		res.pop_back();
	}
}

int main(void) {
	int input, size;
	cin >> input >> size;
	vector<int> result;

	dfs(result, 0, input, size);

	return 0;
}