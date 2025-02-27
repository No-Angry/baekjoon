#include <iostream>
using namespace std;

int main(void) {
	int x, y, z, max;
	while (1) {
		cin >> x >> y >> z;
		if (x == y && y == z && x == 0) break;
		max = x > y ? (x > z ? x : z) : (y > z ? y : z);
		cout << (x * x + y * y + z * z == 2 * max * max ? "right\n" : "wrong\n");
	}
	return 0;
}