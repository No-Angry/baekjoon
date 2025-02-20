#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int r, n, input;
	cin >> input;
	for (; input--;) {
		long long res = 1;
		cin >> r >> n;
		for (int i = 1; i <= r; i++) {
			res = res * (n - i + 1) / i;
		}
		cout << res << '\n';
	}
	return 0;
}