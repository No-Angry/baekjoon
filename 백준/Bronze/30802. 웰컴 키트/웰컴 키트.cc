#include <iostream>
using namespace std;

int main(void) {
	int n, x, y, cnt = 0;
	int s[6] = { 0 };
	cin >> n;
	for (int i = 0; i < 6; i++) cin >> s[i];
	cin >> x >> y;
	for (int i : s) cnt += ((i > x) ? i / x + (i % x == 0 ? 0 : 1) : (i > 0 ? 1 : 0));
	cout << cnt << '\n' << n / y << ' ' << n % y << '\n';
	return 0;
}