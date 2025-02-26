#include <iostream>
using namespace std;

int main(void) {
	int x, res = 0;
	for (int i = 0; i < 5; i++) {
		cin >> x;
		res += x * x;
	}
	cout << res % 10 << '\n';
	return 0;
}