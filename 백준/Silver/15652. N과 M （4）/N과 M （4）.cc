#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

void dfs(vector<int> visit, vector<int> res, int n, int in, int s) {
	if (n == s) {
		for (int i = 0; i < s; i++) {
			cout << res[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < in; i++) {
		if (visit[i]) continue;
		res.push_back(i + 1);
		dfs(visit, res, n + 1, in, s);
		res.pop_back();
		visit[i] = 1;
	}
}

int main(void) {
	int input, size;
	cin >> input >> size;
	vector<int> visited(input, 0);
	vector<int> result;

	dfs(visited, result, 0, input, size);

	return 0;
}