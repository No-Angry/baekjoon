#include <iostream>
using namespace std;

int main(void) {
	int a, b, x = 1;
	cin >> a >> b;
	for (int i = 2; i <= a && i <= b; i++) {
		while (a % i == 0 && b % i == 0) {
			a /= i, b /= i;
			x *= i;
		}
	}
	cout << x << '\n' << a * b * x << '\n';
	return 0;
}