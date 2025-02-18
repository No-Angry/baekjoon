#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int input, n;
	vector<long long> dp(101, 0);
	cin >> input;
	dp[1] = dp[2] = 1;
	for (; input--;) {
		cin >> n;
		for (int i = 3; i <= n; i++) {
			dp[i] = dp[i - 2] + dp[i - 3];
		}
		cout << dp[n] << '\n';
	}

	return 0;
}