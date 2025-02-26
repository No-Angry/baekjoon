#include <iostream>
using namespace std;

int main(void) {
	int n, h, w, r;
	cin >> n;
	for (; n--;) {
		cin >> h >> w >> r;
		cout << (r % h == 0 ? (h * 100 + r / h) : (r % h * 100 + r / h + 1)) << '\n';
	}
	return 0;
}