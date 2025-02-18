#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long a, b, c;
	cin >> a >> b >> c;
	long long res = 1;
	while (b > 0) {
		if (b % 2 == 1) res = (res * a) % c;
		a = a * a % c;
		b /= 2;
	}
	cout << res << '\n';
	return 0;
}