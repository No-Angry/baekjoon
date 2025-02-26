#include <iostream>
using namespace std;

int main(void) {
	int mul = 1, x;
	for (int i = 0; i < 3; i++) {
		cin >> x;
		mul *= x;
	}
	int arr[10] = { 0 };
	while (mul >= 1) {
		x = mul % 10;
		arr[x]++;
		mul /= 10;
	}
	for (int i : arr) cout << i << '\n';
	return 0;
}