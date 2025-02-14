#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int r, n, res = 1;
	cin >> r >> n;
	for (int i = r; i > 0; i--) {
		res *= i;
		if (i <= n) res /= i;
		if (i <= r - n) res /= i;
	}
	cout << res;
	return 0;
}